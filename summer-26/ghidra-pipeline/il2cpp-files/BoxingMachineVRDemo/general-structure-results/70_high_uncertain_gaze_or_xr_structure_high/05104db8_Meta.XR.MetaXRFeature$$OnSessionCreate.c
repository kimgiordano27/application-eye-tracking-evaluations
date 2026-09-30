/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionCreate
ENTRY_POINT: 05104db8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionCreate(long param_1)

{
  long unaff_x23;
  
  FUN_04b38c38(&stack0x00000030,**(undefined8 **)(param_1 + 0x380));
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e42304();
}


