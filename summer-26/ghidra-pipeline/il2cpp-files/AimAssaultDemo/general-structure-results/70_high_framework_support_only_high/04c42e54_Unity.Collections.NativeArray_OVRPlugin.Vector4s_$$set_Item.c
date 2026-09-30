/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$set_Item
ENTRY_POINT: 04c42e54
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] Unity_Collections_NativeArray<OVRPlugin_Vector4s>__set_Item(undefined8 param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  long *unaff_x19;
  code *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  
  lVar2 = FUN_03775678(param_1);
  lVar2 = (*unaff_x20)(**(undefined8 **)(lVar2 + 0xc0));
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 04c43348 to 04d4338f has its CatchHandler @ 04c43348
                       catch() { ... } // from try @ 04c43348 with catch @ 04c43348
                       catch() { ... } // from try @ 04c433f4 with catch @ 04c43348
                       catch() { ... } // from try @ 04c43424 with catch @ 04c43348
                       catch() { ... } // from try @ 04c434a0 with catch @ 04c43348 */
    FUN_0373b7b4();
  }
  lVar5 = *unaff_x19;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar3 = *unaff_x19;
  }
  pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x20);
  if ((uVar1 & 1) == 0) {
    FUN_03775678(lVar3);
  }
  (*pcVar9)(lVar2);
  lVar5 = *unaff_x19;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar3 = *unaff_x19;
  }
  pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x20);
  if ((uVar1 & 1) == 0) {
    FUN_03775678(lVar3);
  }
  (*pcVar9)(lVar2);
  lVar5 = *unaff_x19;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar3 = *unaff_x19;
  }
  pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x20);
  if ((uVar1 & 1) == 0) {
    FUN_03775678(lVar3);
  }
  (*pcVar9)(lVar2);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x40);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x40);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  uVar8 = **(undefined8 **)(lVar3 + 0xb8);
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  FUN_056ec910(&stack0x00000078,&stack0x000000c0,lVar2,
               *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x58));
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x68);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar5 = *unaff_x19;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar3 = *unaff_x19;
  }
  uVar6 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x60);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x60);
  in_stack_000000c8 = &stack0x00000060;
  in_stack_00000068 = in_stack_00000080;
  in_stack_00000060 = in_stack_00000078;
  in_stack_00000070 = in_stack_00000088;
  in_stack_000000c0 = uVar8;
  (**(code **)(lVar3 + 0x10))(uVar6,lVar3,&stack0x000000b0,&stack0x000000c0,&stack0x00000060);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x40);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  uVar6 = in_stack_000000a8;
  uVar8 = in_stack_000000a0;
  uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  in_stack_000000c0 = uVar8;
  in_stack_000000c8 = (undefined8 *)uVar6;
  FUN_056ec910(&stack0x00000048,&stack0x000000c0,lVar2,
               *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x58));
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x80);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar5 = *unaff_x19;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar3 = *unaff_x19;
  }
  uVar8 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x78);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x78);
  in_stack_000000c8 = &stack0x00000030;
  in_stack_00000038 = in_stack_00000050;
  in_stack_00000030 = in_stack_00000048;
  in_stack_00000040 = in_stack_00000058;
  in_stack_000000c0 = uVar7;
  (**(code **)(lVar3 + 0x10))(uVar8,lVar3,&stack0x000000a0,&stack0x000000c0,&stack0x00000030);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x40);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  uVar6 = in_stack_00000098;
  uVar8 = in_stack_00000090;
  uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  in_stack_000000c0 = uVar8;
  in_stack_000000c8 = (undefined8 *)uVar6;
  FUN_056ec910(&stack0x00000018,&stack0x000000c0,lVar2,
               *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x58));
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x98);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar5 = *unaff_x19;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    lVar3 = *unaff_x19;
  }
  uVar8 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x90);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x90);
  in_stack_00000008 = in_stack_00000020;
  in_stack_00000000 = in_stack_00000018;
  in_stack_00000010 = in_stack_00000028;
  in_stack_000000c0 = uVar7;
  in_stack_000000c8 = (undefined8 *)register0x00000008;
  (**(code **)(lVar3 + 0x10))(uVar8,lVar3,&stack0x00000090,&stack0x000000c0);
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  pauVar4 = (undefined1 (*) [16])
            thunk_FUN_03799158(lVar2,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0x80));
  return *pauVar4;
}


