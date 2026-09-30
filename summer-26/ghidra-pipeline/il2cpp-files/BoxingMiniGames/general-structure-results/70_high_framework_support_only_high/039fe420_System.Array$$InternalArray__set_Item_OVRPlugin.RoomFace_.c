/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.RoomFace>
ENTRY_POINT: 039fe420
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__set_Item<OVRPlugin_RoomFace>(long param_1)

{
  undefined8 *in_x9;
  ushort *in_x10;
  undefined4 unaff_w19;
  undefined8 uVar1;
  
  uVar1 = *in_x9;
  if ((*in_x10 & 1) == 0) {
    param_1 = FUN_0367c9fc(param_1);
  }
  FUN_04e3efd0(unaff_w19,uVar1,0,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x18));
  return;
}


