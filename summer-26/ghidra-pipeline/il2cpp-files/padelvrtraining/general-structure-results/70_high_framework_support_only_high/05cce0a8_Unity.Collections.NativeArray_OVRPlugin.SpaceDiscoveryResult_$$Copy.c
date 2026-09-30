/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 05cce0a8
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *in_x9;
  long unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 uStack0000000000000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  uStack0000000000000050 = param_1;
  uVar1 = FUN_06093294(param_2,*in_x9);
  if ((uVar1 & 1) == 0) {
    in_stack_00000068 = in_stack_00000048;
    in_stack_00000060 = in_stack_00000040;
    in_stack_00000070 = uStack0000000000000050;
    FUN_060921c8(&stack0x00000008,&stack0x00000060,*(undefined8 *)PTR_DAT_091fcb90);
    in_stack_00000070 = in_stack_00000018;
    in_stack_00000068 = in_stack_00000010;
    in_stack_00000060 = in_stack_00000008;
    *(undefined8 *)(unaff_x19 + 0xa8) = in_stack_00000018;
    *(undefined8 *)(unaff_x19 + 0xa0) = in_stack_00000010;
    *(undefined8 *)(unaff_x19 + 0x98) = in_stack_00000008;
    thunk_FUN_03d1023c(unaff_x19 + 0x98,0);
    FUN_06092a44(&stack0x00000040,*(undefined8 *)(unaff_x19 + 0xd0),*(undefined8 *)PTR_DAT_091fcb80)
    ;
  }
  else {
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 05ccdfbc with catch @ 05cce0c8
                       try { // try from 05cce0c8 to 05dce0eb has its CatchHandler @ 05ccdf88 */
    in_stack_00000028 = in_stack_00000048;
    in_stack_00000020 = in_stack_00000040;
    in_stack_00000030 = uStack0000000000000050;
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 05ccdfd8 with catch @ 05cce0d4
                        */
    in_stack_00000068 = in_stack_00000048;
    in_stack_00000060 = in_stack_00000040;
    in_stack_00000070 = uStack0000000000000050;
    FUN_05cce1a4();
  }
  return;
}


