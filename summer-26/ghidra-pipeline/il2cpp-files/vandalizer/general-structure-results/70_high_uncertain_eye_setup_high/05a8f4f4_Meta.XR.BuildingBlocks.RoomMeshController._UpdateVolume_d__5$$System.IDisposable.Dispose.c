/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<UpdateVolume>d__5$$System.IDisposable.Dispose
ENTRY_POINT: 05a8f4f4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_IDisposable_Dispose
               (undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long unaff_x20;
  
  *param_1 = param_2;
  thunk_FUN_0329bf60();
  if (unaff_x20 != 0) {
    uVar1 = *(undefined4 *)(unaff_x20 + 0x2c);
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((long)param_1 + 0xc) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


