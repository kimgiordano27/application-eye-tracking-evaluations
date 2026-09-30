/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_ShutdownMixedReality
ENTRY_POINT: 02c4f478
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_ShutdownMixedReality(long param_1)

{
  uint uVar1;
  ulong uVar2;
  uint unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  
  if (unaff_w19 != 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = 0;
    do {
      if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      *(undefined1 *)(param_1 + 0x20 + uVar2) = *(undefined1 *)(unaff_x21 + uVar2);
      uVar2 = uVar2 + 1;
    } while (unaff_w19 != uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x02c4f4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x188))();
  return;
}


