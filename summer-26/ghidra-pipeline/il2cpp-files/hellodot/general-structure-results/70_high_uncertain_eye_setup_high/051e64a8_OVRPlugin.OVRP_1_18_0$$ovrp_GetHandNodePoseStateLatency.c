/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_GetHandNodePoseStateLatency
ENTRY_POINT: 051e64a8
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_18_0__ovrp_GetHandNodePoseStateLatency
               (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  *(long *)(unaff_x20 + 0x358) = param_2._8_8_;
  *(long *)(unaff_x20 + 0x350) = param_2._0_8_;
  param_1[1] = param_3._8_8_;
  *param_1 = param_3._0_8_;
  if (unaff_x19 != 0) {
    *(long *)(unaff_x19 + 0x10) = unaff_x20;
    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


