/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.RoomFace>$$.ctor
ENTRY_POINT: 047a425c
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


void Unity_Collections_NativeArray<OVRPlugin_RoomFace>___ctor(undefined8 param_1)

{
  int in_w9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w23;
  long unaff_x24;
  int unaff_w25;
  long unaff_x26;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  uVar2 = *(undefined8 *)(unaff_x24 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x24 + 0x20);
  *(undefined8 *)(unaff_x26 + 0x30) = param_1;
  *(undefined8 *)(unaff_x26 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x26 + 0x20) = uVar1;
  thunk_FUN_036b7ad0(unaff_x21 + (long)unaff_w25 * (long)in_w9,0);
  if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined8 *)(unaff_x24 + 0x28) = in_stack_00000048;
    *(undefined8 *)(unaff_x24 + 0x20) = in_stack_00000040;
    *(undefined8 *)(unaff_x24 + 0x30) = in_stack_00000050;
    thunk_FUN_036b7ad0(unaff_x21 + (long)unaff_w23 * 0x18,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


