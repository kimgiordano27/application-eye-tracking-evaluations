/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 039fe198
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__set_Item<OVRPlugin_EyeGazeState>(void)

{
  long lVar1;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = **(long **)(unaff_x20 + 0x38);
  lVar1 = *(long *)(lVar3 + 0x38);
  if (lVar1 == 0) {
    FUN_0367ca58(lVar3);
    lVar1 = *(long *)(lVar3 + 0x38);
  }
  lVar1 = *(long *)(lVar1 + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar1 = *(long *)(*(long *)(lVar3 + 0x38) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar2 = **(undefined8 **)(lVar1 + 0xb8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc(lVar3);
  }
  FUN_04e3efd0(unaff_w19,uVar2,0,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
  return;
}


