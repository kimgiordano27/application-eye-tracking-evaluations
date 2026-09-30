/*
FUNCTION_NAME: OVRManager$$InitOVRManager
ENTRY_POINT: 02c05dd0
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__InitOVRManager
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  ulong uVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 *unaff_x27;
  undefined4 uStack000000000000001c;
  
  FUN_02adff8c(param_2,*param_1,param_4,param_5,0);
  FUN_02bddb5c(*unaff_x27,0);
  FUN_02adff8c();
  FUN_02bddb5c(*unaff_x27,0);
  FUN_02adff8c();
  FUN_02bddb5c(*unaff_x27,0);
  FUN_02adff8c();
  uStack000000000000001c = *(undefined4 *)(unaff_x22 + 0x50);
  thunk_FUN_018617ec(*(undefined8 *)PTR_DAT_037f2f90,&stack0x0000001c);
  FUN_02bddb5c(*(undefined8 *)PTR_DAT_037f8820,0);
  FUN_02adff8c();
                    /* try { // try from 02c05ecc to 02d05f93 has its CatchHandler @ 02c05ecc
                       catch() { ... } // from try @ 02c05ecc with catch @ 02c05ecc
                       catch() { ... } // from try @ 02c05fcc with catch @ 02c05ecc
                       catch() { ... } // from try @ 02c06068 with catch @ 02c05ecc
                       catch() { ... } // from try @ 02c060f8 with catch @ 02c05ecc
                       catch() { ... } // from try @ 02c06150 with catch @ 02c05ecc
                       catch() { ... } // from try @ 02c06160 with catch @ 02c05ecc
                       catch() { ... } // from try @ 02c06174 with catch @ 02c05ecc
                       catch() { ... } // from try @ 02c061d0 with catch @ 02c05ecc
                       catch() { ... } // from try @ 02c06238 with catch @ 02c05ecc
                       catch() { ... } // from try @ 02c06298 with catch @ 02c05ecc */
  FUN_02ae137c();
  FUN_02ae16b4();
  FUN_02bddb5c(*unaff_x27,0);
  FUN_02adff8c();
  if ((*(long *)(unaff_x22 + 0x70) != 0) &&
     (uVar1 = FUN_02adfdf4(*(long *)(unaff_x22 + 0x70),0), (uVar1 & 1) != 0)) {
    uVar2 = *(undefined8 *)PTR_DAT_03803548;
    if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02bddb5c(uVar2,0);
    FUN_02adff8c();
                    /* try { // try from 02c05f94 to 02d05fa3 has its CatchHandler @ 02c06248 */
    if (*(long *)(unaff_x22 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    FUN_02adfe04();
  }
                    /* try { // try from 02c05fb0 to 02d05fb7 has its CatchHandler @ 02c06240 */
                    /* try { // try from 02c05fc4 to 02d05fcb has its CatchHandler @ 02c06238 */
  return;
}


