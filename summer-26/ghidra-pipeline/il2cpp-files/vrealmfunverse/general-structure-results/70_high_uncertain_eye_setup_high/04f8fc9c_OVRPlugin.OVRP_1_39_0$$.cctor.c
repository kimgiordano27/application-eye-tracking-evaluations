/*
FUNCTION_NAME: OVRPlugin.OVRP_1_39_0$$.cctor
ENTRY_POINT: 04f8fc9c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_39_0___cctor(long param_1,undefined8 param_2)

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
  
  lVar1 = FUN_031d8020(param_2,**(undefined8 **)(param_1 + 0xed8));
  if (lVar1 != 0) {
    FUN_05d0d8b8(lVar1,*(undefined1 *)(unaff_x19 + 0x48),0);
    fVar4 = unaff_s15 - unaff_s10;
    FUN_05c7bb74(fVar4,0);
    if (DAT_066c1d9c == '\0') {
      FUN_02b3c81c(PTR_DAT_06312c90);
      DAT_066c1d9c = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    fVar4 = SQRT((unaff_s13 - unaff_s8) * (unaff_s13 - unaff_s8) +
                 fVar4 * fVar4 + (unaff_s14 - unaff_s9) * (unaff_s14 - unaff_s9)) - ABS(unaff_s11);
    UnityEngine_UIElements_StyleBackgroundPosition___ctor(unaff_s12,lVar1,0);
    FUN_05d0bed4(unaff_s12 + unaff_s12 + fVar4,lVar1,0);
    FUN_05d0c05c(lVar1,2,0);
    if (DAT_066c1d9f == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1d9f = '\x01';
    }
    fVar3 = 0.0;
    if (0.0 <= unaff_s11) {
      fVar3 = unaff_s11;
    }
    lVar2 = *(long *)(*(long *)PTR_DAT_06312438 + 0xb8);
    fVar3 = fVar3 + fVar4 * 0.5;
    FUN_05d0bbc4(fVar3 * *(float *)(lVar2 + 0x48),fVar3 * *(float *)(lVar2 + 0x4c),
                 fVar3 * *(float *)(lVar2 + 0x50),lVar1,0);
    lVar2 = FUN_05c89340(lVar1,0);
    if (lVar2 != 0) {
      FUN_05c9caa4();
      FUN_05c9cce4(unaff_s10,lVar2,0);
      lVar2 = FUN_05c89410(lVar1,0);
      if (lVar2 != 0) {
        FUN_05c8ca64(lVar2,*(undefined4 *)(unaff_x19 + 0x4c),0);
        return lVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


