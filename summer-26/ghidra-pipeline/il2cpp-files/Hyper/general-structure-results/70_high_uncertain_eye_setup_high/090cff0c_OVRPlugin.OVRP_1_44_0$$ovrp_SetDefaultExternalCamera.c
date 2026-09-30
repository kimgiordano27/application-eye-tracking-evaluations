/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_SetDefaultExternalCamera
ENTRY_POINT: 090cff0c
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_44_0__ovrp_SetDefaultExternalCamera(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar4;
  
  lVar1 = FUN_05bde8d8(param_2,*param_1);
  if (lVar1 != 0) {
    FUN_0a1edcd8(lVar1,*(undefined1 *)(unaff_x19 + 0x48),0);
    fVar4 = unaff_s15 - unaff_s10;
                    /* try { // try from 090cff38 to 091cff3b has its CatchHandler @ 090cff74 */
                    /* try { // try from 090cff3c to 091cff3f has its CatchHandler @ 090cff70 */
                    /* try { // try from 090cff40 to 091cff43 has its CatchHandler @ 090cff6c */
                    /* try { // try from 090cff44 to 091cff47 has its CatchHandler @ 090cff5c */
    FUN_0a16abe8(fVar4,0);
                    /* try { // try from 090cff48 to 091cff4f has its CatchHandler @ 090cfb50 */
                    /* try { // try from 090cff50 to 091cff53 has its CatchHandler @ 090cff78 */
                    /* try { // try from 090cff54 to 091cff9b has its CatchHandler @ 090cfb50 */
                    /* catch() { ... } // from try @ 090cfe6c with catch @ 090cff58 */
    if (DAT_0b32d33b == '\0') {
                    /* catch() { ... } // from try @ 090cff44 with catch @ 090cff5c */
                    /* catch() { ... } // from try @ 090cfe50 with catch @ 090cff60 */
                    /* catch() { ... } // from try @ 090cfe48 with catch @ 090cff64 */
      FUN_04947ee4(PTR_DAT_0ac0a830);
                    /* catch() { ... } // from try @ 090cfe34 with catch @ 090cff68 */
                    /* catch() { ... } // from try @ 090cff40 with catch @ 090cff6c */
      DAT_0b32d33b = '\x01';
    }
                    /* catch() { ... } // from try @ 090cff3c with catch @ 090cff70 */
                    /* catch() { ... } // from try @ 090cff38 with catch @ 090cff74 */
                    /* catch() { ... } // from try @ 090cff50 with catch @ 090cff78 */
                    /* catch() { ... } // from try @ 090cfdf4 with catch @ 090cff7c */
                    /* catch() { ... } // from try @ 090cfd90 with catch @ 090cff80 */
    if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
                    /* try { // try from 090cff9c to 091cff9f has its CatchHandler @ 090cffa8 */
                    /* catch() { ... } // from try @ 090cff9c with catch @ 090cffa8 */
                    /* try { // try from 090cffac to 091cffb3 has its CatchHandler @ 090cffbc */
    fVar4 = SQRT((unaff_s13 - unaff_s8) * (unaff_s13 - unaff_s8) +
                 fVar4 * fVar4 + (unaff_s14 - unaff_s9) * (unaff_s14 - unaff_s9)) - ABS(unaff_s11);
                    /* try { // try from 090cffb4 to 091cffbf has its CatchHandler @ 090cfb50 */
    FUN_0a1ece68(unaff_s12,lVar1,0);
    FUN_0a1ecff0(unaff_s12 + unaff_s12 + fVar4,lVar1,0);
    FUN_0a1ed178(lVar1,2,0);
    if (DAT_0b32d23b == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b32d23b = '\x01';
    }
    fVar3 = 0.0;
    if (0.0 <= unaff_s11) {
      fVar3 = unaff_s11;
    }
    lVar2 = *(long *)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
    fVar3 = fVar3 + fVar4 * 0.5;
    FUN_0a1ecce0(fVar3 * *(float *)(lVar2 + 0x48),fVar3 * *(float *)(lVar2 + 0x4c),
                 fVar3 * *(float *)(lVar2 + 0x50),lVar1,0);
    lVar2 = FUN_0a17834c(lVar1,0);
    if (lVar2 != 0) {
      FUN_0a18ac70();
      FUN_0a18aea0(unaff_s10,lVar2,0);
      lVar2 = FUN_0a178414(lVar1,0);
      if (lVar2 != 0) {
        FUN_0a17b958(lVar2,*(undefined4 *)(unaff_x19 + 0x4c),0);
        return lVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


