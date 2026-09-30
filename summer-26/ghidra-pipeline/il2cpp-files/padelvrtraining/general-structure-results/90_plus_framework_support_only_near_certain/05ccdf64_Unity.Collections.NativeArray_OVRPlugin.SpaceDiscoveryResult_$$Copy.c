/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 05ccdf64
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
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
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0xb90));
  FUN_03d2d2b0(PTR_DAT_091a0c40);
  FUN_03d2d2b0(PTR_DAT_091a50e8);
                    /* catch() { ... } // from try @ 05cce0c8 with catch @ 05ccdf88
                       catch() { ... } // from try @ 05cce104 with catch @ 05ccdf88
                       catch() { ... } // from try @ 05cce140 with catch @ 05ccdf88
                       catch() { ... } // from try @ 05cce16c with catch @ 05ccdf88
                       catch() { ... } // from try @ 05cce1e0 with catch @ 05ccdf88 */
  FUN_03d2d2b0(PTR_DAT_091fcb10);
  *(undefined1 *)(unaff_x21 + 0x4e9) = 1;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  uVar4 = *(undefined8 *)(unaff_x19 + 0x130);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
                    /* try { // try from 05ccdfbc to 05dcdfbf has its CatchHandler @ 05cce0c8 */
  uVar3 = FUN_08a52164(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    puVar1 = (undefined8 *)(unaff_x19 + 0x130);
    uVar4 = FUN_07f3e57c(0);
    *puVar1 = uVar4;
    thunk_FUN_03d1023c(puVar1,uVar4);
    uVar4 = *puVar1;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar3 = FUN_08a52164(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      FUN_05fbbdc8();
      return;
    }
  }
  puVar2 = PTR_DAT_091a50e8;
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
    uVar3 = FUN_06093294(&stack0x00000040,*(undefined8 *)PTR_DAT_091fcb88);
    if ((uVar3 & 1) == 0) {
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
  return;
}


