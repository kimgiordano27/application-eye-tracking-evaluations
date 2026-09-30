/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 05cce590
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long in_x9;
  long *in_x10;
  long unaff_x19;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x25;
  undefined8 *puVar6;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  uVar4 = *(undefined8 *)(unaff_x19 + 0x138);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(*(long *)(in_x9 + 0xc0) + 0xd0);
  puVar6 = *(undefined8 **)(unaff_x25 + 0xbb0);
  if (*(int *)(*in_x10 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar5 = FUN_07186ef4(uVar5,0);
  FUN_07f098b0(&stack0x00000060,uVar4,uVar1,uVar2,uVar5,0);
  in_stack_00000048 = in_stack_00000068;
  in_stack_00000040 = in_stack_00000060;
  in_stack_00000050 = in_stack_00000070;
  uVar3 = FUN_06093294(&stack0x00000040,*puVar6);
  if ((uVar3 & 1) == 0) {
    in_stack_00000068 = in_stack_00000048;
    in_stack_00000060 = in_stack_00000040;
    in_stack_00000070 = in_stack_00000050;
    FUN_060921c8(&stack0x00000008,&stack0x00000060,*(undefined8 *)PTR_DAT_091fcbb8);
    in_stack_00000070 = in_stack_00000018;
    in_stack_00000068 = in_stack_00000010;
    in_stack_00000060 = in_stack_00000008;
    *(undefined8 *)(unaff_x19 + 0xa8) = in_stack_00000018;
    *(undefined8 *)(unaff_x19 + 0xa0) = in_stack_00000010;
    *(undefined8 *)(unaff_x19 + 0x98) = in_stack_00000008;
    thunk_FUN_03d1023c(unaff_x19 + 0x98,0);
    FUN_06092a44(&stack0x00000040,*(undefined8 *)(unaff_x19 + 0xd8),*(undefined8 *)PTR_DAT_091f8ac0)
    ;
  }
  else {
    in_stack_00000028 = in_stack_00000048;
    in_stack_00000020 = in_stack_00000040;
    in_stack_00000030 = in_stack_00000050;
    in_stack_00000068 = in_stack_00000048;
    in_stack_00000060 = in_stack_00000040;
    in_stack_00000070 = in_stack_00000050;
    Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Length();
  }
  return;
}


