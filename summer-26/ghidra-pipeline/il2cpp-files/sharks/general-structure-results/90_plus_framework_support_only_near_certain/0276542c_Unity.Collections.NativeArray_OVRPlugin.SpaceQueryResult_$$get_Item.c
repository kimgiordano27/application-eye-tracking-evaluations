/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_Item
ENTRY_POINT: 0276542c
PROGRAM: sharks-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Item
               (code *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack00000000000000a0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  uStack00000000000000a0 = param_3;
  iVar1 = (*param_1)(param_4,&stack0x000000c0,&stack0x000000a0,*(undefined8 *)(unaff_x22 + 0x28));
  if (iVar1 < 1) {
    return;
  }
  if (unaff_w21 < *(uint *)(unaff_x19 + 0x18)) {
    in_stack_000000d0 = *(undefined8 *)(unaff_x25 + 0x30);
    in_stack_000000c8 = *(undefined8 *)(unaff_x25 + 0x28);
    in_stack_000000c0 = *(undefined8 *)(unaff_x25 + 0x20);
    if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
      uVar3 = *(undefined8 *)(unaff_x26 + 0x28);
      uVar2 = *(undefined8 *)(unaff_x26 + 0x20);
      *(undefined8 *)(unaff_x25 + 0x30) = *(undefined8 *)(unaff_x26 + 0x30);
      *(undefined8 *)(unaff_x25 + 0x28) = uVar3;
      *(undefined8 *)(unaff_x25 + 0x20) = uVar2;
      thunk_FUN_0188fd20(unaff_x19 + unaff_x24 * 0x18 + 0x20,0);
      if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x26 + 0x30) = in_stack_000000d0;
        *(undefined8 *)(unaff_x26 + 0x28) = in_stack_000000c8;
        *(undefined8 *)(unaff_x26 + 0x20) = in_stack_000000c0;
        thunk_FUN_0188fd20(unaff_x19 + unaff_x23 * 0x18 + 0x20,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


