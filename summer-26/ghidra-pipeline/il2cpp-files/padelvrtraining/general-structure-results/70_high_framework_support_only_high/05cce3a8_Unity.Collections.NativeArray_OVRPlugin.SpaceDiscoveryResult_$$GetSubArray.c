/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$GetSubArray
ENTRY_POINT: 05cce3a8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__GetSubArray(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  lVar2 = FUN_03d8f370();
  lVar2 = thunk_FUN_03d6c7f0(*(undefined8 *)(lVar2 + 8));
                    /* try { // try from 05cce3d0 to 05dce427 has its CatchHandler @ 05cce438 */
  (**(code **)(lVar2 + 8))(&stack0x00000058);
  puVar1 = (undefined8 *)(unaff_x19 + 0x118);
  in_stack_00000080 = in_stack_00000068;
  in_stack_00000078 = in_stack_00000060;
  in_stack_00000070 = in_stack_00000058;
  *(undefined8 *)(unaff_x19 + 0x128) = in_stack_00000068;
  *(undefined8 *)(unaff_x19 + 0x120) = in_stack_00000060;
  *puVar1 = in_stack_00000058;
  thunk_FUN_03d1023c(puVar1,0);
  uVar3 = FUN_06093334(puVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa8))
  ;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_06093294(puVar1,*(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xb8));
    if ((uVar3 & 1) == 0) {
      FUN_06092a44(puVar1,*(undefined8 *)(unaff_x19 + 0xe8),
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xc0));
      in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0x128);
      in_stack_00000078 = *(undefined8 *)(unaff_x19 + 0x120);
      in_stack_00000070 = *puVar1;
      FUN_060921c8(&stack0x00000058,&stack0x00000070,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 200));
      *(undefined8 *)(unaff_x19 + 0xa8) = in_stack_00000068;
      *(undefined8 *)(unaff_x19 + 0xa0) = in_stack_00000060;
      *(undefined8 *)(unaff_x19 + 0x98) = in_stack_00000058;
      thunk_FUN_03d1023c(unaff_x19 + 0x98,0);
    }
    else {
      in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0x128);
      in_stack_00000078 = *(undefined8 *)(unaff_x19 + 0x120);
      in_stack_00000070 = *puVar1;
      FUN_05ccea28();
    }
    uVar4 = 1;
  }
  return uVar4;
}


