/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.RoomFace>$$CopySafe
ENTRY_POINT: 047a4e58
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_RoomFace>__CopySafe(void)

{
  uint in_w8;
  long lVar1;
  long unaff_x19;
  uint unaff_w22;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  if (unaff_w22 < in_w8) {
    lVar1 = unaff_x19 + (long)(int)unaff_w22 * 0x18;
    *(undefined8 *)(lVar1 + 0x28) = in_stack_00000088;
    *(undefined8 *)(lVar1 + 0x20) = in_stack_00000080;
    *(undefined8 *)(lVar1 + 0x30) = in_stack_00000090;
    thunk_FUN_036b7ad0(lVar1 + 0x20,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


