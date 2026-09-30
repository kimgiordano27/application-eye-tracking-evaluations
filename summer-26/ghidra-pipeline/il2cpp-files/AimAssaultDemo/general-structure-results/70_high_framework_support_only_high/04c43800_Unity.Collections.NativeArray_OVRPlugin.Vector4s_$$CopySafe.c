/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopySafe
ENTRY_POINT: 04c43800
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


undefined1  [16] Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe(long param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  ulong in_x9;
  undefined8 *in_x10;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *unaff_x28;
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
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000110;
  undefined8 *in_stack_00000118;
  
  pcVar6 = *(code **)*in_x10;
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_03775678(param_1);
  }
  lVar2 = (*pcVar6)(**(undefined8 **)(param_1 + 0xc0));
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar5 = *unaff_x28;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*unaff_x28 + 0x135);
    lVar3 = *unaff_x28;
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x20);
                    /* try { // try from 04c43864 to 04d4386f has its CatchHandler @ 04c43940 */
  if ((uVar1 & 1) == 0) {
    FUN_03775678(lVar3);
                    /* try { // try from 04c43870 to 04d4392f has its CatchHandler @ 04c434ac */
  }
  (*pcVar6)(lVar2);
  lVar5 = *unaff_x28;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*unaff_x28 + 0x135);
    lVar3 = *unaff_x28;
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x20);
  if ((uVar1 & 1) == 0) {
    FUN_03775678(lVar3);
  }
  (*pcVar6)(lVar2);
  lVar5 = *unaff_x28;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*unaff_x28 + 0x135);
    lVar3 = *unaff_x28;
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x20);
  if ((uVar1 & 1) == 0) {
    FUN_03775678(lVar3);
  }
  (*pcVar6)(lVar2);
  lVar5 = *unaff_x28;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*unaff_x28 + 0x135);
    lVar3 = *unaff_x28;
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x20);
  if ((uVar1 & 1) == 0) {
    FUN_03775678(lVar3);
  }
  (*pcVar6)(lVar2);
  lVar3 = *unaff_x28;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = *unaff_x28;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  uVar9 = **(undefined8 **)(lVar3 + 0xb8);
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  lVar3 = *unaff_x28;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  FUN_056ec910(&stack0x000000b8,&stack0x00000110,lVar2,
               *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x60));
  lVar3 = *unaff_x28;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x70);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar5 = *unaff_x28;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*unaff_x28 + 0x135);
    lVar3 = *unaff_x28;
  }
  uVar7 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x68);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x68);
  in_stack_00000118 = &stack0x000000a0;
  in_stack_000000a8 = in_stack_000000c0;
  in_stack_000000a0 = in_stack_000000b8;
  in_stack_000000b0 = in_stack_000000c8;
  in_stack_00000110 = uVar9;
  (**(code **)(lVar3 + 0x10))(uVar7,lVar3,&stack0x00000100,&stack0x00000110,&stack0x000000a0);
  lVar3 = *unaff_x28;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  uVar7 = in_stack_000000f8;
  uVar9 = in_stack_000000f0;
  uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  lVar3 = *unaff_x28;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  in_stack_00000110 = uVar9;
  in_stack_00000118 = (undefined8 *)uVar7;
  FUN_056ec910(&stack0x00000088,&stack0x00000110,lVar2,
               *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x60));
  lVar3 = *unaff_x28;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x88);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar5 = *unaff_x28;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*unaff_x28 + 0x135);
    lVar3 = *unaff_x28;
  }
  uVar9 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x80);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x80);
  in_stack_00000118 = &stack0x00000070;
  in_stack_00000078 = in_stack_00000090;
  in_stack_00000070 = in_stack_00000088;
  in_stack_00000080 = in_stack_00000098;
  in_stack_00000110 = uVar8;
  (**(code **)(lVar3 + 0x10))(uVar9,lVar3,&stack0x000000f0,&stack0x00000110,&stack0x00000070);
  lVar3 = *unaff_x28;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  uVar7 = in_stack_000000e8;
  uVar9 = in_stack_000000e0;
  uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  lVar3 = *unaff_x28;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  in_stack_00000110 = uVar9;
  in_stack_00000118 = (undefined8 *)uVar7;
  FUN_056ec910(&stack0x00000058,&stack0x00000110,lVar2,
               *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x60));
  lVar3 = *unaff_x28;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xa0);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar5 = *unaff_x28;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*unaff_x28 + 0x135);
    lVar3 = *unaff_x28;
  }
  uVar9 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x98);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x98);
  in_stack_00000118 = &stack0x00000040;
  in_stack_00000048 = in_stack_00000060;
  in_stack_00000040 = in_stack_00000058;
  in_stack_00000050 = in_stack_00000068;
  in_stack_00000110 = uVar8;
  (**(code **)(lVar3 + 0x10))(uVar9,lVar3,&stack0x000000e0,&stack0x00000110,&stack0x00000040);
  lVar3 = *unaff_x28;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  uVar7 = in_stack_000000d8;
  uVar9 = in_stack_000000d0;
  uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  lVar3 = *unaff_x28;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  in_stack_00000110 = uVar9;
  in_stack_00000118 = (undefined8 *)uVar7;
  FUN_056ec910(&stack0x00000028,&stack0x00000110,lVar2,
               *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x60));
  lVar3 = *unaff_x28;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xb8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar5 = *unaff_x28;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*unaff_x28 + 0x135);
    lVar3 = *unaff_x28;
  }
  uVar9 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xb0);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xb0);
  in_stack_00000118 = &stack0x00000010;
  in_stack_00000018 = in_stack_00000030;
  in_stack_00000010 = in_stack_00000028;
  in_stack_00000020 = in_stack_00000038;
  in_stack_00000110 = uVar8;
  (**(code **)(lVar3 + 0x10))(uVar9,lVar3,&stack0x000000d0,&stack0x00000110,&stack0x00000010);
  lVar3 = *unaff_x28;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  pauVar4 = (undefined1 (*) [16])
            thunk_FUN_03799158(lVar2,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0x80));
  return *pauVar4;
}


