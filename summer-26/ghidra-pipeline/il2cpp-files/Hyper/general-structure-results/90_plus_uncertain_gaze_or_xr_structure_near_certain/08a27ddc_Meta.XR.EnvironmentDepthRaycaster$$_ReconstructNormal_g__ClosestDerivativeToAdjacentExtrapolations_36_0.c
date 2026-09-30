/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$<ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations|36_0
ENTRY_POINT: 08a27ddc
PROGRAM: Hyper-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__<ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations_36_0
               (void)

{
  undefined8 uVar1;
  long lVar2;
  int in_w8;
  undefined4 *unaff_x19;
  long *unaff_x25;
  long unaff_x26;
  
  if (in_w8 == 0) {
    thunk_FUN_049a583c();
  }
  uVar1 = FUN_08d59ac8(0);
  *(undefined8 *)(unaff_x26 + 0x88) = uVar1;
  lVar2 = *unaff_x25;
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08c7f478(unaff_x19 + 2,0);
  return;
}


