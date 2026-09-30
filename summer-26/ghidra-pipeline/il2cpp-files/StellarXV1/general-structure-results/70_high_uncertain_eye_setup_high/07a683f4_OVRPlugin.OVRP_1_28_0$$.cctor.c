/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$.cctor
ENTRY_POINT: 07a683f4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_28_0___cctor(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  float fVar4;
  float unaff_s8;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0xe18));
  FUN_04077588(PTR_DAT_092f0e20);
  *(undefined1 *)(unaff_x20 + 0x5e0) = 1;
  if (unaff_s8 < *(float *)(unaff_x19 + 0x20)) {
    lVar2 = *(long *)(unaff_x19 + 0x18);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (0 < *(int *)(lVar2 + 0x18)) {
      fVar4 = (unaff_s8 / *(float *)(unaff_x19 + 0x20)) * (float)*(int *)(lVar2 + 0x18);
      iVar1 = -0x80000000;
      if (fVar4 != INFINITY) {
        iVar1 = (int)fVar4;
      }
      uVar3 = FUN_05c26ab8(lVar2,iVar1,*(undefined8 *)PTR_DAT_092f0e20);
      return uVar3;
    }
  }
  return 0;
}


