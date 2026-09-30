/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 04c4378c
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


undefined1  [16]
Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
          undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
          undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
          undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
          undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
          undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
          undefined8 param_33,undefined8 param_34)

{
  ushort uVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 in_stack_00000110;
  undefined8 *in_stack_00000118;
  long in_stack_00000180;
  
                    /* try { // try from 04c437ac to 04d437d3 has its CatchHandler @ 04c43944 */
  plVar10 = (long *)(in_stack_00000180 + 0x20);
  lVar4 = *plVar10;
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar2 = lVar4;
  uStack00000000000000d0 = param_7;
  uStack00000000000000d8 = param_8;
  uStack00000000000000e0 = param_5;
  uStack00000000000000e8 = param_6;
  uStack00000000000000f0 = param_3;
  uStack00000000000000f8 = param_4;
  uStack0000000000000100 = param_1;
  uStack0000000000000108 = param_2;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
                    /* try { // try from 04c437ec to 04d4384b has its CatchHandler @ 04c43948 */
    uVar1 = *(ushort *)(*plVar10 + 0x135);
    lVar2 = *plVar10;
  }
  pcVar6 = *(code **)**(undefined8 **)(lVar4 + 0xc0);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_03775678(lVar2);
  }
  lVar2 = (*pcVar6)(**(undefined8 **)(lVar2 + 0xc0));
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar5 = *plVar10;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar4 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*plVar10 + 0x135);
    lVar4 = *plVar10;
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x20);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
  }
  (*pcVar6)(lVar2,param_1,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20));
  lVar5 = *plVar10;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar4 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*plVar10 + 0x135);
    lVar4 = *plVar10;
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x20);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
  }
  (*pcVar6)(lVar2,param_3,param_4,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20));
  lVar5 = *plVar10;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar4 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*plVar10 + 0x135);
    lVar4 = *plVar10;
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x20);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
  }
  (*pcVar6)(lVar2,param_5,param_6,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20));
  lVar5 = *plVar10;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar4 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*plVar10 + 0x135);
    lVar4 = *plVar10;
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x20);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
  }
  (*pcVar6)(lVar2,param_7,param_8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20));
  lVar4 = *plVar10;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar4 = *plVar10;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  uVar9 = **(undefined8 **)(lVar4 + 0xb8);
  param_32 = 0;
  param_33 = 0;
  param_34 = 0;
  lVar4 = *plVar10;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  in_stack_00000110 = param_1;
  in_stack_00000118 = (undefined8 *)param_2;
  FUN_056ec910(&param_32,&stack0x00000110,lVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x60));
  lVar4 = *plVar10;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x70);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar5 = *plVar10;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar4 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*plVar10 + 0x135);
    lVar4 = *plVar10;
  }
  uVar7 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x68);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x68);
  in_stack_00000118 = &param_29;
  param_30 = param_33;
  param_29 = param_32;
  param_31 = param_34;
  in_stack_00000110 = uVar9;
  (**(code **)(lVar4 + 0x10))(uVar7,lVar4,&stack0x00000100,&stack0x00000110,&param_29);
  lVar4 = *plVar10;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  uVar7 = uStack00000000000000f8;
  uVar9 = uStack00000000000000f0;
  uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
  param_26 = 0;
  param_27 = 0;
  param_28 = 0;
  lVar4 = *plVar10;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  in_stack_00000110 = uVar9;
  in_stack_00000118 = (undefined8 *)uVar7;
  FUN_056ec910(&param_26,&stack0x00000110,lVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x60));
  lVar4 = *plVar10;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x88);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar5 = *plVar10;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar4 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*plVar10 + 0x135);
    lVar4 = *plVar10;
  }
  uVar9 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x80);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x80);
  in_stack_00000118 = &param_23;
  param_24 = param_27;
  param_23 = param_26;
  param_25 = param_28;
  in_stack_00000110 = uVar8;
  (**(code **)(lVar4 + 0x10))(uVar9,lVar4,&stack0x000000f0,&stack0x00000110,&param_23);
  lVar4 = *plVar10;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  uVar7 = uStack00000000000000e8;
  uVar9 = uStack00000000000000e0;
  uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
  param_20 = 0;
  param_21 = 0;
  param_22 = 0;
  lVar4 = *plVar10;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  in_stack_00000110 = uVar9;
  in_stack_00000118 = (undefined8 *)uVar7;
  FUN_056ec910(&param_20,&stack0x00000110,lVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x60));
  lVar4 = *plVar10;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0xa0);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar5 = *plVar10;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar4 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*plVar10 + 0x135);
    lVar4 = *plVar10;
  }
  uVar9 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x98);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x98);
  in_stack_00000118 = &param_17;
  param_18 = param_21;
  param_17 = param_20;
  param_19 = param_22;
  in_stack_00000110 = uVar8;
  (**(code **)(lVar4 + 0x10))(uVar9,lVar4,&stack0x000000e0,&stack0x00000110,&param_17);
  lVar4 = *plVar10;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  uVar7 = uStack00000000000000d8;
  uVar9 = uStack00000000000000d0;
  uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18);
  param_14 = 0;
  param_15 = 0;
  param_16 = 0;
  lVar4 = *plVar10;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  in_stack_00000110 = uVar9;
  in_stack_00000118 = (undefined8 *)uVar7;
  FUN_056ec910(&param_14,&stack0x00000110,lVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x60));
  lVar4 = *plVar10;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0xb8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar5 = *plVar10;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar4 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar1 = *(ushort *)(*plVar10 + 0x135);
    lVar4 = *plVar10;
  }
  uVar9 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xb0);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_03775678(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0xb0);
  in_stack_00000118 = &param_11;
  param_12 = param_15;
  param_11 = param_14;
  param_13 = param_16;
  in_stack_00000110 = uVar8;
  (**(code **)(lVar4 + 0x10))(uVar9,lVar4,&stack0x000000d0,&stack0x00000110,&param_11);
  lVar4 = *plVar10;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  pauVar3 = (undefined1 (*) [16])
            thunk_FUN_03799158(lVar2,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar4 + 0xc0) + 0x18) + 0x80));
  return *pauVar3;
}


