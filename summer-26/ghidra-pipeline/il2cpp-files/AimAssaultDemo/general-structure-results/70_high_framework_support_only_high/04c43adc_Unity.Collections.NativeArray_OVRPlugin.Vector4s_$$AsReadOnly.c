/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$AsReadOnly
ENTRY_POINT: 04c43adc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] Unity_Collections_NativeArray<OVRPlugin_Vector4s>__AsReadOnly(code *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000110;
  undefined8 *in_stack_00000118;
  
  (*param_1)();
  lVar3 = *unaff_x28;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  uVar2 = in_stack_000000f8;
  uVar6 = in_stack_000000f0;
  uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  if ((*(byte *)(*unaff_x28 + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  in_stack_00000110 = uVar6;
  in_stack_00000118 = (undefined8 *)uVar2;
  FUN_056ec910(&stack0x00000088,&stack0x00000110);
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
  uVar6 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x80);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x80);
  in_stack_00000118 = &stack0x00000070;
  in_stack_00000078 = in_stack_00000090;
  in_stack_00000070 = in_stack_00000088;
  in_stack_00000080 = in_stack_00000098;
  in_stack_00000110 = uVar7;
  (**(code **)(lVar3 + 0x10))(uVar6,lVar3,&stack0x000000f0,&stack0x00000110,&stack0x00000070);
  lVar3 = *unaff_x28;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  uVar2 = in_stack_000000e8;
  uVar6 = in_stack_000000e0;
  uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  if ((*(byte *)(*unaff_x28 + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  in_stack_00000110 = uVar6;
  in_stack_00000118 = (undefined8 *)uVar2;
  FUN_056ec910(&stack0x00000058,&stack0x00000110);
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
  uVar6 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x98);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x98);
  in_stack_00000118 = &stack0x00000040;
  in_stack_00000048 = in_stack_00000060;
  in_stack_00000040 = in_stack_00000058;
  in_stack_00000050 = in_stack_00000068;
  in_stack_00000110 = uVar7;
  (**(code **)(lVar3 + 0x10))(uVar6,lVar3,&stack0x000000e0,&stack0x00000110,&stack0x00000040);
  lVar3 = *unaff_x28;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
  }
  uVar2 = in_stack_000000d8;
  uVar6 = in_stack_000000d0;
  uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  if ((*(byte *)(*unaff_x28 + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  in_stack_00000110 = uVar6;
  in_stack_00000118 = (undefined8 *)uVar2;
  FUN_056ec910(&stack0x00000028,&stack0x00000110);
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
  uVar6 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xb0);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xb0);
  in_stack_00000118 = &stack0x00000010;
  in_stack_00000018 = in_stack_00000030;
  in_stack_00000010 = in_stack_00000028;
  in_stack_00000020 = in_stack_00000038;
  in_stack_00000110 = uVar7;
  (**(code **)(lVar3 + 0x10))(uVar6,lVar3,&stack0x000000d0,&stack0x00000110,&stack0x00000010);
  if ((*(byte *)(*unaff_x28 + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  pauVar4 = (undefined1 (*) [16])thunk_FUN_03799158();
  return *pauVar4;
}


