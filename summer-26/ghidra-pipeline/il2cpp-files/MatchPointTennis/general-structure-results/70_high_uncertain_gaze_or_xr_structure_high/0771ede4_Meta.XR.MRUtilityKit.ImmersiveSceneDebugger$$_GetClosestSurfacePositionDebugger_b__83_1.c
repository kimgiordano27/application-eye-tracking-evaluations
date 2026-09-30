/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<GetClosestSurfacePositionDebugger>b__83_1
ENTRY_POINT: 0771ede4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<GetClosestSurfacePositionDebugger>b__83_1
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint in_w9;
  uint in_w10;
  undefined4 in_register_00004054;
  long unaff_x19;
  
  if (in_w9 <= in_w10) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  *(undefined8 *)(param_1 + CONCAT44(in_register_00004054,in_w10) * 8 + 0x20) = param_3;
  thunk_FUN_044bb4b4();
  iVar1 = *(int *)(unaff_x19 + 0x10) + 1;
  *(int *)(unaff_x19 + 0x10) = iVar1;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    if (*(int *)(*(long *)(unaff_x19 + 0x18) + 0x18) <= iVar1) {
      *(undefined4 *)(unaff_x19 + 0x10) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


