/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetClosestSeatPoseDebugger
ENTRY_POINT: 06e15910
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetClosestSeatPoseDebugger
               (long *param_1,long param_2)

{
  undefined4 uVar1;
  
  *param_1 = param_2;
  thunk_FUN_03d1023c();
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x1c);
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0xc) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


