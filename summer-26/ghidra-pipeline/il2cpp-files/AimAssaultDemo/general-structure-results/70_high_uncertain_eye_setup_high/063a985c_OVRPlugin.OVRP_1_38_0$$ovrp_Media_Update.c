/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Update
ENTRY_POINT: 063a985c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_Update(long param_1)

{
  long *unaff_x19;
  long unaff_x22;
  int iVar1;
  
  (**(code **)(param_1 + 0x5d8))();
  (**(code **)(*unaff_x19 + 0x598))();
  if (0 < *(int *)(unaff_x22 + 0x18)) {
    iVar1 = 0;
    do {
      FUN_049cec24();
      FUN_063a6bb4();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(unaff_x22 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x063a98fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x5a8))();
  return;
}


