/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionStateChange
ENTRY_POINT: 06351ad0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionStateChange(undefined8 *param_1)

{
  long unaff_x26;
  undefined8 in_stack_00000018;
  
  FUN_05d64e94(&stack0x00000060,*param_1);
  if (unaff_x26 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7ac();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0381d6e4(in_stack_00000018);
}


