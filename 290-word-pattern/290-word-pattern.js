/**
 * @param {string} pattern
 * @param {string} s
 * @return {boolean}
 */
var wordPattern = function(pattern, s) {
    const a = pattern.split("");
    const b = s.split(" ");
    const patternCheck = {};
    const usedString = [];
    
    if (a.length !== b.length) return false;
    
    for (let i = 0; i < a.length; ++i) {
        if (!patternCheck[a[i]]) {
            patternCheck[a[i]] = b[i];
            if(usedString.indexOf(b[i]) !== -1) return false;
            usedString.push(b[i]);
        } else if (patternCheck[a[i]] !== b[i])
            return false;
    }
    
    return true;
};