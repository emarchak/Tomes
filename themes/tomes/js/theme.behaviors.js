(function ($) {

  Drupal.behaviors.themeBehaviors = {
    attach: function (context, settings) {

      // prepare markup
      // to be called once
      this._teaserClick(context, settings);
    
    },
    
    _teaserClick: function (context, settings) {
       $('.clickable').click(function () {
            window.location=$(this).find("a:first").attr("href"); 
           return false;
        });

    }
  }

})(jQuery);
