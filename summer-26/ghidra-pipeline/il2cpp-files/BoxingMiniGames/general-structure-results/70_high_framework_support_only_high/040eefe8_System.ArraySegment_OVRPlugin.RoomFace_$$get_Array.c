/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.RoomFace>$$get_Array
ENTRY_POINT: 040eefe8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ArraySegment<OVRPlugin_RoomFace>__get_Array
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined1 param_5,
               long param_6)

{
  uint uVar1;
  undefined8 unaff_x22;
  
  uVar1 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 8))();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x10))
            (param_2,uVar1 & 1);
  *(undefined8 *)(param_2 + 0x18) = unaff_x22;
  thunk_FUN_036b7ad0();
  *(undefined8 *)(param_2 + 0x28) = param_4;
  thunk_FUN_036b7ad0((undefined8 *)(param_2 + 0x28),param_4);
  *(undefined1 *)(param_2 + 0x20) = param_5;
  return;
}


