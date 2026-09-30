/*
FUNCTION_NAME: Logic.GameEvents.MuffinsTreasure.UI.CloseCell.MuffinsCloseCellView$$add_OnSelected
ENTRY_POINT: 040f2be8
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_4
*/


void Logic_GameEvents_MuffinsTreasure_UI_CloseCell_MuffinsCloseCellView__add_OnSelected
               (ulong param_1,__locale_t param_2)

{
  uint __wc;
  wint_t __wc_00;
  int iVar1;
  __locale_t __locale;
  ulong uVar2;
  uint *unaff_x19;
  uint *unaff_x20;
  ulong *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  
  do {
    iVar1 = iswlower_l((wint_t)param_1,param_2);
    if (iVar1 != 0) {
      *unaff_x21 = *unaff_x21 | 0x10;
    }
    __wc_00 = (wint_t)unaff_x23;
    iVar1 = iswalpha_l(__wc_00,*(__locale_t *)(unaff_x22 + 0x10));
    if (iVar1 != 0) {
      *unaff_x21 = *unaff_x21 | 0x20;
    }
    iVar1 = iswdigit_l(__wc_00,*(__locale_t *)(unaff_x22 + 0x10));
    if (iVar1 != 0) {
      *unaff_x21 = *unaff_x21 | 0x40;
    }
    iVar1 = iswpunct_l(__wc_00,*(__locale_t *)(unaff_x22 + 0x10));
    if (iVar1 != 0) {
      *unaff_x21 = *unaff_x21 | 0x80;
    }
    iVar1 = iswxdigit_l(__wc_00,*(__locale_t *)(unaff_x22 + 0x10));
    if (iVar1 != 0) {
      *unaff_x21 = *unaff_x21 | 0x100;
    }
    iVar1 = iswblank_l(__wc_00,*(__locale_t *)(unaff_x22 + 0x10));
    if (iVar1 == 0) goto LAB_040f2b50;
    uVar2 = *unaff_x21 | 0x200;
    while( true ) {
      *unaff_x21 = uVar2;
LAB_040f2b50:
      unaff_x19 = unaff_x19 + 1;
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x19 == unaff_x20) {
        return;
      }
      __wc = *unaff_x19;
      param_1 = (ulong)__wc;
      if (0x7f < __wc) break;
      uVar2 = *(ulong *)(unaff_x24 + param_1 * 8);
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
    param_2 = *(__locale_t *)(unaff_x22 + 0x10);
    unaff_x23 = param_1;
  } while( true );
}


