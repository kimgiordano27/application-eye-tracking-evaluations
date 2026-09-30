/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyFrom
ENTRY_POINT: 05cce908
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyFrom(void)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  
  thunk_FUN_03d1023c();
  uVar1 = FUN_06093294();
  if ((uVar1 & 1) == 0) {
    in_stack_00000100 = unaff_x22[2];
    in_stack_000000f8 = unaff_x22[1];
    in_stack_000000f0 = *unaff_x22;
    FUN_060921c8(&stack0x000000d8,&stack0x000000f0,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 200));
    uVar3 = unaff_x23[1];
    uVar2 = *unaff_x23;
    *(undefined8 *)(unaff_x19 + 0xa8) = in_stack_000000e8;
    *(undefined8 *)(unaff_x19 + 0xa0) = uVar3;
    *(undefined8 *)(unaff_x19 + 0x98) = uVar2;
    thunk_FUN_03d1023c(unaff_x19 + 0x98,0);
    FUN_06092a44();
  }
  else {
    in_stack_00000100 = unaff_x22[2];
    in_stack_000000f8 = unaff_x22[1];
    in_stack_000000f0 = *unaff_x22;
    FUN_05cceb2c();
  }
  in_stack_00000100 = unaff_x21[2];
  in_stack_000000f8 = unaff_x21[1];
  in_stack_000000f0 = *unaff_x21;
  FUN_060921c8(&stack0x000000d8,&stack0x000000f0,*unaff_x24);
  FUN_07f09544();
  return;
}


