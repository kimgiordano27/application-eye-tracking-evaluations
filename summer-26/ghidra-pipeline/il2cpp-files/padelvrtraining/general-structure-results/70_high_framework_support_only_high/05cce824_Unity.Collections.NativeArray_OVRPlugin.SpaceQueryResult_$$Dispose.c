/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 05cce824
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Dispose(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uVar4;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  
  puVar1 = (undefined8 *)FUN_03d8f370();
  uVar2 = (*(code *)*puVar1)();
  FUN_051b1c20(&stack0x000000d8,uVar2,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xd8));
  in_stack_000000f8 = unaff_x23[1];
  in_stack_000000f0 = *unaff_x23;
  puVar1 = (undefined8 *)(unaff_x19 + 0x118);
  in_stack_00000100 = in_stack_000000e8;
  *(undefined8 *)(unaff_x19 + 0x128) = in_stack_000000e8;
  *(undefined8 *)(unaff_x19 + 0x120) = in_stack_000000f8;
  *puVar1 = in_stack_000000f0;
  thunk_FUN_03d1023c(puVar1,0);
  uVar3 = FUN_06093294(puVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xb8))
  ;
  if ((uVar3 & 1) == 0) {
    in_stack_00000100 = *(undefined8 *)(unaff_x19 + 0x128);
    in_stack_000000f8 = *(undefined8 *)(unaff_x19 + 0x120);
    in_stack_000000f0 = *puVar1;
    FUN_060921c8(&stack0x000000d8,&stack0x000000f0,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 200));
    uVar4 = unaff_x23[1];
    uVar2 = *unaff_x23;
    *(undefined8 *)(unaff_x19 + 0xa8) = in_stack_000000e8;
    *(undefined8 *)(unaff_x19 + 0xa0) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x98) = uVar2;
    thunk_FUN_03d1023c(unaff_x19 + 0x98,0);
    FUN_06092a44(puVar1,*(undefined8 *)(unaff_x19 + 0xe0),
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xc0));
  }
  else {
    in_stack_00000100 = *(undefined8 *)(unaff_x19 + 0x128);
    in_stack_000000f8 = *(undefined8 *)(unaff_x19 + 0x120);
    in_stack_000000f0 = *puVar1;
    FUN_05cceb2c();
  }
  in_stack_00000100 = unaff_x21[2];
  in_stack_000000f8 = unaff_x21[1];
  in_stack_000000f0 = *unaff_x21;
  FUN_060921c8(&stack0x000000d8,&stack0x000000f0,*unaff_x24);
  FUN_07f09544();
  return;
}


