/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$<ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations|36_0
ENTRY_POINT: 06dfd568
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_EnvironmentDepthRaycaster__<ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations_36_0
          (long param_1)

{
  int iVar1;
  int in_w9;
  int in_w10;
  long *unaff_x19;
  
  if (in_w9 != in_w10) {
    FUN_07199bdc(0);
    param_1 = *unaff_x19;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  unaff_x19[2] = 0;
  unaff_x19[3] = 0;
  *(int *)(unaff_x19 + 1) = iVar1 + 1;
  return 0;
}


