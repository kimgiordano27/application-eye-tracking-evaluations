/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$AsReadOnly
ENTRY_POINT: 05cce418
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


undefined8
Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__AsReadOnly
          (long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  uVar1 = FUN_06093334(param_2,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0xa8));
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
                    /* try { // try from 05cce428 to 05dce44f has its CatchHandler @ 05cce3a4 */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 05cce3d0 with catch @ 05cce438
                        */
    uVar1 = FUN_06093294();
    if ((uVar1 & 1) == 0) {
      FUN_06092a44();
      in_stack_00000080 = unaff_x21[2];
      in_stack_00000078 = unaff_x21[1];
      in_stack_00000070 = *unaff_x21;
      FUN_060921c8(&stack0x00000058,&stack0x00000070,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 200));
      *(undefined8 *)(unaff_x19 + 0xa8) = in_stack_00000068;
      *(undefined8 *)(unaff_x19 + 0xa0) = in_stack_00000060;
      *(undefined8 *)(unaff_x19 + 0x98) = in_stack_00000058;
      thunk_FUN_03d1023c(unaff_x19 + 0x98,0);
    }
    else {
      in_stack_00000080 = unaff_x21[2];
      in_stack_00000078 = unaff_x21[1];
      in_stack_00000070 = *unaff_x21;
                    /* try { // try from 05cce450 to 05dce467 has its CatchHandler @ 05cce538 */
                    /* try { // try from 05cce468 to 05dce487 has its CatchHandler @ 05cce3a4 */
      FUN_05ccea28();
    }
    uVar2 = 1;
  }
  return uVar2;
}


