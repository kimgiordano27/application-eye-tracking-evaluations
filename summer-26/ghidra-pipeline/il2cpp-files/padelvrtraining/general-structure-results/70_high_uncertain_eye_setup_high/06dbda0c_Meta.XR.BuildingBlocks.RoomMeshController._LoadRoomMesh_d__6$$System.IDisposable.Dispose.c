/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<LoadRoomMesh>d__6$$System.IDisposable.Dispose
ENTRY_POINT: 06dbda0c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__6__System_IDisposable_Dispose
               (long *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  
  if ((int)param_1[1] != 0) {
    if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if ((int)param_1[1] != *(int *)(*param_1 + 0x18) + 1) goto LAB_06dbda40;
  }
  FUN_07199c28(0);
LAB_06dbda40:
  lVar2 = *(long *)(param_2 + 0x20);
  uVar1 = *(ushort *)(lVar2 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_03d8f26c();
    lVar2 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_03d8f26c();
  }
  thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10));
  return;
}


