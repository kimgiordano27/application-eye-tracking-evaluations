/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 054dc1c0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Dispose(ulong param_1)

{
  int iVar1;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  if ((param_1 & 1) == 0) {
    FUN_03cf1244();
  }
  in_stack_000000c8 = in_stack_00000048;
  in_stack_000000c0 = in_stack_00000040;
  in_stack_000000d0 = in_stack_00000050;
  in_stack_000000a8 = in_stack_00000028;
  in_stack_000000a0 = in_stack_00000020;
  in_stack_000000b0 = in_stack_00000030;
  iVar1 = (**(code **)(unaff_x22 + 0x18))
                    (*(undefined8 *)(unaff_x22 + 0x40),&stack0x000000c0,&stack0x000000a0,
                     *(undefined8 *)(unaff_x22 + 0x28));
  if (iVar1 < 1) {
    return;
  }
  if (unaff_w21 < *(uint *)(unaff_x20 + 0x18)) {
    in_stack_000000d0 = *(undefined8 *)(unaff_x23 + 0x30);
    in_stack_000000c8 = *(undefined8 *)(unaff_x23 + 0x28);
    in_stack_000000c0 = *(undefined8 *)(unaff_x23 + 0x20);
    if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      uVar3 = *(undefined8 *)(unaff_x24 + 0x28);
      uVar2 = *(undefined8 *)(unaff_x24 + 0x20);
      *(undefined8 *)(unaff_x23 + 0x30) = *(undefined8 *)(unaff_x24 + 0x30);
      *(undefined8 *)(unaff_x23 + 0x28) = uVar3;
      *(undefined8 *)(unaff_x23 + 0x20) = uVar2;
      if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(unaff_x24 + 0x30) = in_stack_000000d0;
        *(undefined8 *)(unaff_x24 + 0x28) = in_stack_000000c8;
        *(undefined8 *)(unaff_x24 + 0x20) = in_stack_000000c0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


