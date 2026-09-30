/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<LoadRoomMesh>d__6$$System.IDisposable.Dispose
ENTRY_POINT: 04a1eb34
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__6__System_IDisposable_Dispose(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int unaff_w20;
  
  FUN_04a1e548();
  if (unaff_w20 < 0) {
    thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
    uVar1 = thunk_FUN_02b79644();
    uVar2 = thunk_FUN_02ba3594(PTR_DAT_06320a00);
    FUN_04cf60a0(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar1);
  }
  if (unaff_w20 != 0) {
    FUN_04a20d98();
    return;
  }
  return;
}


