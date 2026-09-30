/*
FUNCTION_NAME: Logic.GameEvents.MuffinsTreasure.UI.CloseCell.MuffinsCloseCellView$$remove_OnSelected
ENTRY_POINT: 040f2c84
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_4
*/


void Logic_GameEvents_MuffinsTreasure_UI_CloseCell_MuffinsCloseCellView__remove_OnSelected
               (ulong param_1)

{
  uint __wc;
  int iVar1;
  __locale_t __locale;
  uint *unaff_x19;
  uint *unaff_x20;
  ulong *unaff_x21;
  long unaff_x22;
  long unaff_x24;
  
LAB_040f2b4c:
  do {
    *unaff_x21 = param_1;
    do {
      unaff_x19 = unaff_x19 + 1;
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x19 == unaff_x20) {
        return;
      }
      __wc = *unaff_x19;
      if (__wc < 0x80) {
        param_1 = *(ulong *)(unaff_x24 + (ulong)__wc * 8);
        goto LAB_040f2b4c;
      }
      __locale = *(__locale_t *)(unaff_x22 + 0x10);
      *unaff_x21 = 0;
      iVar1 = iswspace_l(__wc,__locale);
      if (iVar1 != 0) {
        *unaff_x21 = *unaff_x21 | 1;
      }
      iVar1 = iswprint_l(__wc,*(__locale_t *)(unaff_x22 + 0x10));
      if (iVar1 != 0) {
        *unaff_x21 = *unaff_x21 | 2;
      }
      iVar1 = iswcntrl_l(__wc,*(__locale_t *)(unaff_x22 + 0x10));
      if (iVar1 != 0) {
        *unaff_x21 = *unaff_x21 | 4;
      }
      iVar1 = iswupper_l(__wc,*(__locale_t *)(unaff_x22 + 0x10));
      if (iVar1 != 0) {
        *unaff_x21 = *unaff_x21 | 8;
      }
      iVar1 = iswlower_l(__wc,*(__locale_t *)(unaff_x22 + 0x10));
      if (iVar1 != 0) {
        *unaff_x21 = *unaff_x21 | 0x10;
      }
      iVar1 = iswalpha_l(__wc,*(__locale_t *)(unaff_x22 + 0x10));
      if (iVar1 != 0) {
        *unaff_x21 = *unaff_x21 | 0x20;
      }
      iVar1 = iswdigit_l(__wc,*(__locale_t *)(unaff_x22 + 0x10));
      if (iVar1 != 0) {
        *unaff_x21 = *unaff_x21 | 0x40;
      }
      iVar1 = iswpunct_l(__wc,*(__locale_t *)(unaff_x22 + 0x10));
      if (iVar1 != 0) {
        *unaff_x21 = *unaff_x21 | 0x80;
      }
      iVar1 = iswxdigit_l(__wc,*(__locale_t *)(unaff_x22 + 0x10));
      if (iVar1 != 0) {
        *unaff_x21 = *unaff_x21 | 0x100;
      }
      iVar1 = iswblank_l(__wc,*(__locale_t *)(unaff_x22 + 0x10));
    } while (iVar1 == 0);
    param_1 = *unaff_x21 | 0x200;
  } while( true );
}


