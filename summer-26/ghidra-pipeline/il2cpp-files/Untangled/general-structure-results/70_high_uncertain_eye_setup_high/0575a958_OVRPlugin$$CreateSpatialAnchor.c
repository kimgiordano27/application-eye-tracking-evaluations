/*
FUNCTION_NAME: OVRPlugin$$CreateSpatialAnchor
ENTRY_POINT: 0575a958
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreateSpatialAnchor(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *unaff_x19;
  long unaff_x21;
  ulong uVar2;
  
  (**(code **)(param_1 + 0x598))(param_2,*(undefined8 *)(param_1 + 0x5a0));
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (0 < (int)*(ulong *)(unaff_x21 + 0x18)) {
    uVar2 = 0;
    uVar1 = *(ulong *)(unaff_x21 + 0x18) & 0xffffffff;
    do {
      if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      FUN_0569d504();
      uVar1 = (ulong)*(uint *)(unaff_x21 + 0x18);
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)(int)*(uint *)(unaff_x21 + 0x18));
  }
  (**(code **)(*unaff_x19 + 0x5a8))();
                    /* WARNING: Could not recover jumptable at 0x0575a9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x588))();
  return;
}


