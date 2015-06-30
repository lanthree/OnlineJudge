$(document).ready(function() {
    setTimeout(requestInventory, 0);
});

function requestInventory() {
    jQuery.getJSON(
    	'user/status', 
    	{},
        function(data, status, xhr) {
            $('#username').html(data['username']);
        }
    );
}