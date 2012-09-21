(function ($) {

  Drupal.behaviors.themeBehaviors = {
    attach: function (context, settings) {

      // prepare markup
      // to be called once
      this._teaserClick(context, settings);
      this._lightbox(context,settings);

    },

    _teaserClick: function (context, settings) {
       $('.clickable').click(function () {
         window.location=$(this).find("a:first").attr("href");
         return false;
       });
    },

    _lightbox: function (context, settings) {
       $('.lightbox').click(function () {
         var target = $(this).attr("href");
         $(target).lightbox_me();
         return false;
        });
    }
  }

})(jQuery);
