const boxes = document.querySelectorAll('.box')
window.addEventListener('scroll', checkBoxes)
checkBoxes()
function checkBoxes() {
    const triggerBottom = window.innerHeight / 5 * 4 //trigger point

    boxes.forEach(box => {
        const boxTop = box.getBoundingClientRect().top  //returns a DOMReact object providing information about the size of an element and its position
        if(boxTop < triggerBottom) {
            box.classList.add('show')
        } else {
            box.classList.remove('show')
        }
    })
}