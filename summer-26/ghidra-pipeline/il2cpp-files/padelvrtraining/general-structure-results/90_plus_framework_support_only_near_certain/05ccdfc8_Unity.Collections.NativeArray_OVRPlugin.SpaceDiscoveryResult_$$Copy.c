/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 05ccdfc8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long *unaff_x22;
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
  
  puVar1 = (undefined8 *)(unaff_x19 + 0x130);
  uVar3 = FUN_07f3e57c(0);
                    /* try { // try from 05ccdfd8 to 05dce0c7 has its CatchHandler @ 05cce0d4 */
  *puVar1 = uVar3;
  thunk_FUN_03d1023c(puVar1,uVar3);
  uVar3 = *puVar1;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar4 = FUN_08a52164(uVar3,0,0);
  puVar2 = PTR_DAT_091a50e8;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_091a50e8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if (*(int *)(unaff_x19 + 0x104) == 1) {
      lVar5 = *(long *)(unaff_x19 + 0xf0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_05cdaf60(&stack0x00000060,lVar5,*(undefined8 *)(unaff_x19 + 0x108),
                   *(undefined8 *)(unaff_x19 + 0x110),
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x68));
      in_stack_00000048 = in_stack_00000068;
      in_stack_00000040 = in_stack_00000060;
      in_stack_00000050 = in_stack_00000070;
      uVar4 = FUN_06093294(&stack0x00000040,*(undefined8 *)PTR_DAT_091fcb88);
      if ((uVar4 & 1) == 0) {
        in_stack_00000068 = in_stack_00000048;
        in_stack_00000060 = in_stack_00000040;
        in_stack_00000070 = in_stack_00000050;
        FUN_060921c8(&stack0x00000008,&stack0x00000060,*(undefined8 *)PTR_DAT_091fcb90);
        in_stack_00000070 = in_stack_00000018;
        in_stack_00000068 = in_stack_00000010;
        in_stack_00000060 = in_stack_00000008;
        *(undefined8 *)(unaff_x19 + 0xa8) = in_stack_00000018;
        *(undefined8 *)(unaff_x19 + 0xa0) = in_stack_00000010;
        *(undefined8 *)(unaff_x19 + 0x98) = in_stack_00000008;
        thunk_FUN_03d1023c(unaff_x19 + 0x98,0);
        FUN_06092a44(&stack0x00000040,*(undefined8 *)(unaff_x19 + 0xd0),
                     *(undefined8 *)PTR_DAT_091fcb80);
      }
      else {
        in_stack_00000028 = in_stack_00000048;
        in_stack_00000020 = in_stack_00000040;
        in_stack_00000030 = in_stack_00000050;
        in_stack_00000068 = in_stack_00000048;
        in_stack_00000060 = in_stack_00000040;
        in_stack_00000070 = in_stack_00000050;
        FUN_05cce1a4();
      }
    }
    else {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_07f16614(unaff_x19 + 0xf8,0);
      FUN_05cce2d8();
    }
  }
  else {
    FUN_05fbbdc8();
  }
  return;
}


