/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerAnnotation
ENTRY_POINT: 07ca19e8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Qpl__MarkerAnnotation(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar3;
  
  lVar1 = FUN_04d7a120();
  if (lVar1 != 0) {
    FUN_095af67c(lVar1,*(undefined1 *)(unaff_x19 + 0x48),0);
    fVar3 = unaff_s15 - unaff_s10;
    FUN_09516c60(fVar3,0);
    if (DAT_0a51c009 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51c009 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar3 = SQRT((unaff_s13 - unaff_s8) * (unaff_s13 - unaff_s8) +
                 fVar3 * fVar3 + (unaff_s14 - unaff_s9) * (unaff_s14 - unaff_s9)) - ABS(unaff_s11);
    FUN_095ae4c0(lVar1,0);
    FUN_095ae648(unaff_s12 + unaff_s12 + fVar3,lVar1,0);
    FUN_095ae7d0(lVar1,2,0);
    if (DAT_0a51bf41 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf41 = '\x01';
    }
    fVar3 = unaff_s11 + fVar3 * 0.5;
    lVar2 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    FUN_095ae338(fVar3 * *(float *)(lVar2 + 0x48),fVar3 * *(float *)(lVar2 + 0x4c),
                 fVar3 * *(float *)(lVar2 + 0x50),lVar1,0);
    lVar2 = FUN_095258d0(lVar1,0);
    if (lVar2 != 0) {
      FUN_0953acf8();
      FUN_0953af30(lVar2,0);
      lVar2 = FUN_095259a0(lVar1,0);
      if (lVar2 != 0) {
        FUN_0952a218(lVar2,*(undefined4 *)(unaff_x19 + 0x4c),0);
        return lVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


