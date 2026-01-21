default:
if (isDigit(c)) {
number();
} else {
Lox.error(line, "Unexpected character.");
}
break;