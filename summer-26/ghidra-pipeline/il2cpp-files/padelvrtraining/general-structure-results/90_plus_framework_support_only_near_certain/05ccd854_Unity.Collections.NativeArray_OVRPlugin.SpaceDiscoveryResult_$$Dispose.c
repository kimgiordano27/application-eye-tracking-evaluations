/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 05ccd854
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 93
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Dispose(undefined1 param_1 [16])

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  *(long *)(unaff_x19 + 0xe0) = param_1._8_8_;
  *(long *)(unaff_x19 + 0xd8) = param_1._0_8_;
  thunk_FUN_03d1023c();
  uVar1 = FUN_06093294();
  if ((uVar1 & 1) == 0) {
    in_stack_00000080 = unaff_x21[2];
    in_stack_00000078 = unaff_x21[1];
    in_stack_00000070 = *unaff_x21;
    FUN_060921c8(&stack0x00000058,&stack0x00000070,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70));
    *(undefined8 *)(unaff_x19 + 0xa8) = in_stack_00000068;
    *(undefined8 *)(unaff_x19 + 0xa0) = in_stack_00000060;
    *(undefined8 *)(unaff_x19 + 0x98) = in_stack_00000058;
    thunk_FUN_03d1023c(unaff_x19 + 0x98,0);
    FUN_06092a44();
  }
  else {
    in_stack_00000080 = unaff_x21[2];
    in_stack_00000078 = unaff_x21[1];
    in_stack_00000070 = *unaff_x21;
    FUN_05ccd9c0();
  }
  return;
}


