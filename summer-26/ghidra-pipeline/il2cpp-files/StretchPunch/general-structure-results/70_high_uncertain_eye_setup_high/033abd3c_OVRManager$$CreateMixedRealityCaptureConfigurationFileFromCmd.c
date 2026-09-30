/*
FUNCTION_NAME: OVRManager$$CreateMixedRealityCaptureConfigurationFileFromCmd
ENTRY_POINT: 033abd3c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__CreateMixedRealityCaptureConfigurationFileFromCmd(long *param_1)

{
  short sVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_x9;
  long *unaff_x21;
  
                    /* try { // try from 033abd44 to 034abd4b has its CatchHandler @ 033abebc */
  if (in_x9 != *param_1) {
                    /* try { // try from 033abe30 to 034abe33 has its CatchHandler @ 033abe68 */
                    /* try { // try from 033abe34 to 034abe37 has its CatchHandler @ 033ab314 */
                    /* try { // try from 033abe38 to 034abe3b has its CatchHandler @ 033abe60 */
    thunk_FUN_01dd295c(StringLiteral_6081);
                    /* try { // try from 033abe3c to 034abedf has its CatchHandler @ 033ab314 */
    uVar5 = thunk_FUN_01de27b8();
                    /* catch() { ... } // from try @ 033abbd0 with catch @ 033abe44 */
    uVar6 = thunk_FUN_01dd295c(StringLiteral_6082);
                    /* catch() { ... } // from try @ 033abbf8 with catch @ 033abe50 */
                    /* catch() { ... } // from try @ 033abdf4 with catch @ 033abe5c */
    FUN_03308044(uVar5,uVar6,0);
                    /* catch() { ... } // from try @ 033abe38 with catch @ 033abe60 */
                    /* catch() { ... } // from try @ 033ab4e4 with catch @ 033abe64 */
                    /* catch() { ... } // from try @ 033abe30 with catch @ 033abe68 */
    uVar6 = thunk_FUN_01dd295c(StringLiteral_8489);
                    /* catch() { ... } // from try @ 033abdc0 with catch @ 033abe6c */
                    /* catch() { ... } // from try @ 033ab578 with catch @ 033abe70 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033abe2c with catch @ 033abe74 */
    FUN_01d7da3c(uVar5,uVar6);
  }
  lVar3 = FUN_0327d400();
  if (unaff_x21 != (long *)0x0) {
                    /* try { // try from 033abd5c to 034abd93 has its CatchHandler @ 033abf74 */
    lVar4 = (**(code **)(*unaff_x21 + 0x1a8))();
    iVar2 = (**(code **)(*unaff_x21 + 0x198))();
    if (iVar2 == 0x80) {
      if (lVar4 == 0) goto LAB_033abe2c;
                    /* try { // try from 033abd94 to 034abd9b has its CatchHandler @ 033abeac */
      iVar2 = FUN_0327e148(lVar4,0x2b,0);
                    /* try { // try from 033abd9c to 034abd9f has its CatchHandler @ 033abea0 */
                    /* try { // try from 033abda0 to 034abda7 has its CatchHandler @ 033abe9c */
                    /* try { // try from 033abda8 to 034abdaf has its CatchHandler @ 033abe94 */
      lVar4 = FUN_0327d024(lVar4,iVar2 + 1,0);
    }
                    /* try { // try from 033abdb0 to 034abdb3 has its CatchHandler @ 033abe90 */
    if (lVar3 != 0) {
                    /* try { // try from 033abdb4 to 034abdb7 has its CatchHandler @ 033abe88 */
                    /* try { // try from 033abdb8 to 034abdbb has its CatchHandler @ 033abe7c */
      if (0 < *(int *)(lVar3 + 0x10)) {
                    /* try { // try from 033abdc0 to 034abdef has its CatchHandler @ 033abe6c */
        sVar1 = FUN_03271744(lVar3,*(int *)(lVar3 + 0x10) + -1,0);
        if (sVar1 == 0x2a) {
          uVar5 = System_DateTime__GetDatePart(lVar3,0,*(int *)(lVar3 + 0x10) + -1,0);
          if (lVar4 != 0) {
            FUN_032792e0(lVar4,uVar5,4,0);
            return;
          }
          goto LAB_033abe2c;
        }
      }
      if (lVar4 != 0) {
        FUN_03278c78(lVar4,lVar3,0);
        return;
      }
    }
  }
LAB_033abe2c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033abe2c to 034abe2f has its CatchHandler @ 033abe74 */
  FUN_01d7db70();
}


