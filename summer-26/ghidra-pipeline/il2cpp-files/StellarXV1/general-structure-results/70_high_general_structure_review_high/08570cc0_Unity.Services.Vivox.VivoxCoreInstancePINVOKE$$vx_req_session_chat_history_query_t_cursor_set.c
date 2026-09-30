/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_chat_history_query_t_cursor_set
ENTRY_POINT: 08570cc0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_cursor_set
               (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  byte bVar12;
  undefined4 uVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 extraout_x1;
  undefined8 uVar19;
  long unaff_x19;
  long *unaff_x20;
  long *plVar20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar21;
  undefined4 uStack0000000000000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000b8;
  undefined1 uStack00000000000000c0;
  undefined7 uStack00000000000000c1;
  
  bVar12 = (**(code **)(param_1 + 0x178))(param_2,*(undefined8 *)(param_1 + 0x180));
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*unaff_x25);
  }
  *(byte *)(unaff_x19 + 0x141) = bVar12 & 1;
  bVar12 = (**(code **)(*unaff_x20 + 0x198))();
  lVar15 = *unaff_x24;
  *(byte *)(unaff_x19 + 0x142) = bVar12 & 1;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_0989d8a8 == '\0') {
    FUN_04077588(PTR_DAT_0932d1e8);
    DAT_0989d8a8 = '\x01';
  }
  puVar10 = PTR_DAT_0932ef38;
  puVar8 = PTR_DAT_0932eef8;
  puVar7 = PTR_DAT_0932e408;
  puVar6 = PTR_DAT_0932e400;
  lVar15 = *unaff_x24;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar15 = *unaff_x24;
  }
  puVar9 = PTR_DAT_0932eed0;
  in_stack_000000b8 = *(undefined8 *)(unaff_x19 + 0x2c8);
  *(byte *)(unaff_x19 + 0x142) = *(byte *)(*(long *)(lVar15 + 0xb8) + 8) ^ 1;
  thunk_FUN_040ec700(&stack0x000000b8);
  uVar17 = in_stack_000000b8;
  uVar16 = *(undefined8 *)puVar8;
  uStack00000000000000c0 = *(int *)((long)unaff_x20 + 0x74) == 2;
  uVar19 = CONCAT71(uStack00000000000000c1,uStack00000000000000c0);
  *(undefined1 *)(unaff_x19 + 0x143) = uStack00000000000000c0;
  uVar16 = thunk_FUN_040b4efc(uVar16);
  FUN_0859c040(uVar16,uVar17,uVar19,0);
  *(undefined8 *)(unaff_x19 + 0x290) = uVar16;
  thunk_FUN_040ec700(unaff_x19 + 0x290,uVar16);
  *(undefined8 *)(unaff_x19 + 0x2a0) = *(undefined8 *)((long)unaff_x20 + 0x74);
  *(undefined4 *)(unaff_x19 + 0x2a8) = *(undefined4 *)((long)unaff_x20 + 0x7c);
  uVar13 = FUN_08516590();
  *(undefined4 *)(unaff_x19 + 0x2ac) = uVar13;
  uVar13 = FUN_085166e8();
  uVar19 = *(undefined8 *)puVar6;
  *(undefined4 *)(unaff_x19 + 0x2b0) = uVar13;
  lVar15 = unaff_x20[8];
  *(undefined1 *)(unaff_x19 + 0x2b4) = 0;
  *(char *)(unaff_x19 + 0x134) = (char)lVar15;
  uVar19 = thunk_FUN_040b4efc(uVar19);
  FUN_085afbe4(uVar19,0x32,0);
  *(undefined8 *)(unaff_x19 + 0x168) = uVar19;
  thunk_FUN_040ec700(unaff_x19 + 0x168,uVar19);
  uVar19 = thunk_FUN_040b4efc(*(undefined8 *)puVar7);
  Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_aux_set_mic_level_t_base__set
            (uVar19,0x32,0);
  *(undefined8 *)(unaff_x19 + 0x170) = uVar19;
  thunk_FUN_040ec700(unaff_x19 + 0x170,uVar19);
  uVar19 = thunk_FUN_040b4efc(*(undefined8 *)puVar10);
  FUN_0854d7c8(uVar19,0xfa,0);
  *(undefined8 *)(unaff_x19 + 0x1e8) = uVar19;
  thunk_FUN_040ec700(unaff_x19 + 0x1e8,uVar19);
  puVar6 = PTR_DAT_0932eeb0;
  uVar19 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eeb0);
  FUN_085a36cc(uVar19,0x3ea,unaff_x26,0,0,0,0,0);
  *(undefined8 *)(unaff_x19 + 0x1f0) = uVar19;
  thunk_FUN_040ec700(unaff_x19 + 0x1f0,uVar19);
  if (*(int *)(*(long *)PTR_DAT_092ba880 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar19 = FUN_08a03c40(0);
  uVar13 = *(undefined4 *)((long)unaff_x20 + 0x5c);
  uVar17 = thunk_FUN_040b4efc(*(undefined8 *)puVar9);
  FUN_085a7674(uVar17,0x96,uVar19,uVar13,0);
  *(undefined8 *)(unaff_x19 + 0x148) = uVar17;
  thunk_FUN_040ec700(unaff_x19 + 0x148,uVar17);
  uVar19 = FUN_08a03c40(0);
  uVar13 = *(undefined4 *)((long)unaff_x20 + 0x5c);
  uVar17 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eec8);
  FUN_085a5bec(uVar17,0x96,uVar19,uVar13,0);
  *(undefined8 *)(unaff_x19 + 0x150) = uVar17;
  thunk_FUN_040ec700(unaff_x19 + 0x150,uVar17);
  uVar14 = *(uint *)(unaff_x19 + 0x2a0);
  if ((uVar14 | 2) == 2) {
    uVar19 = thunk_FUN_040b4efc(*(undefined8 *)puVar6);
    FUN_085a36cc(uVar19,200,unaff_x26,1,1,0,0,0);
    *(undefined8 *)(unaff_x19 + 0x158) = uVar19;
    thunk_FUN_040ec700(unaff_x19 + 0x158,uVar19);
    uVar14 = *(uint *)(unaff_x19 + 0x2a0);
  }
  if (uVar14 == 1) {
    in_stack_00000090 = *(undefined8 *)(unaff_x19 + 0x2f0);
    in_stack_00000098 = 0;
    thunk_FUN_040ec700(&stack0x00000090);
    in_stack_00000098 = *(undefined8 *)(unaff_x19 + 0x2c8);
    thunk_FUN_040ec700(&stack0x00000098);
    uVar17 = in_stack_00000098;
    uVar19 = in_stack_00000090;
    uVar4 = *(undefined1 *)(unaff_x19 + 0x134);
    uVar16 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eeb8);
    FUN_08590108(uVar16,uVar19,uVar17,uVar4,0);
    *(undefined8 *)(unaff_x19 + 0x298) = uVar16;
    thunk_FUN_040ec700(unaff_x19 + 0x298,uVar16);
    puVar6 = PTR_DAT_092ba880;
    if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_08571948;
    *(char *)(*(long *)(unaff_x19 + 0x298) + 0x1a) = (char)unaff_x20[0x11];
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar19 = FUN_08a03c40(0);
    uVar13 = *(undefined4 *)((long)unaff_x20 + 0x5c);
    uVar16 = *unaff_x22;
    uVar1 = *(undefined4 *)(unaff_x22 + 1);
    uVar2 = *(undefined4 *)(unaff_x21 + 0x14);
    uVar21 = *(undefined8 *)(unaff_x19 + 0x298);
    uVar17 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ef08);
    FUN_085adc28(uVar17,0xd2,uVar19,uVar13,uVar16,uVar1,uVar2,uVar21);
    *(undefined8 *)(unaff_x19 + 0x178) = uVar17;
    thunk_FUN_040ec700(unaff_x19 + 0x178,uVar17);
    uVar19 = *unaff_x22;
    uVar13 = *(undefined4 *)(unaff_x22 + 1);
    if (*(int *)(*(long *)PTR_DAT_0932eeb8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08592070(uVar19,uVar13,0x60,0);
    lVar15 = FUN_04077674(*(undefined8 *)PTR_DAT_0932e980,3);
    _uStack0000000000000030 = _uStack0000000000000030 & 0xffffffff00000000;
    FUN_08a07820(&stack0x00000030,*(undefined8 *)PTR_DAT_0932e258,0);
    puVar6 = PTR_DAT_0932e250;
    if (lVar15 == 0) goto LAB_08571948;
    if (*(int *)(lVar15 + 0x18) == 0) {
LAB_0857194c:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    *(undefined4 *)(lVar15 + 0x20) = uStack0000000000000030;
    uStack000000000000007c = 0;
    FUN_08a07820((long)&stack0x00000078 + 4,*(undefined8 *)puVar6,0);
    puVar6 = PTR_DAT_0932ef48;
    if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_0857194c;
    *(undefined4 *)(lVar15 + 0x24) = uStack000000000000007c;
    uStack0000000000000078 = 0;
    FUN_08a07820(&stack0x00000078,*(undefined8 *)puVar6,0);
    if (*(uint *)(lVar15 + 0x18) < 3) goto LAB_0857194c;
    *(undefined4 *)(lVar15 + 0x28) = uStack0000000000000078;
    uVar19 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eeb0);
    FUN_085a36cc(uVar19,0xd3,unaff_x26,1,0,0,*(undefined8 *)PTR_DAT_0932ef50,0);
    *(undefined8 *)(unaff_x19 + 0x180) = uVar19;
    thunk_FUN_040ec700(unaff_x19 + 0x180,uVar19);
    uVar17 = *(undefined8 *)(unaff_x19 + 0x298);
    uVar19 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eec0);
    FUN_085a5024(uVar19,0xe6,uVar17,0);
    *(undefined8 *)(unaff_x19 + 0x188) = uVar19;
    thunk_FUN_040ec700(unaff_x19 + 0x188,uVar19);
    uVar19 = FUN_08a03c40(0);
    uVar13 = *(undefined4 *)((long)unaff_x20 + 0x5c);
    uVar17 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eed8);
    FUN_085a8844(uVar17,*(undefined8 *)PTR_DAT_0932ef70,lVar15,1,0xfa,uVar19,uVar13);
    *(undefined8 *)(unaff_x19 + 400) = uVar17;
    thunk_FUN_040ec700(unaff_x19 + 400,uVar17);
  }
  puVar6 = PTR_DAT_0932eee0;
  if (*(int *)(*(long *)PTR_DAT_092ba880 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar19 = FUN_08a03c40(0);
  uVar13 = *(undefined4 *)((long)unaff_x20 + 0x5c);
  uVar16 = *unaff_x22;
  uVar1 = *(undefined4 *)(unaff_x22 + 1);
  uVar17 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eed8);
  FUN_085a8cfc(uVar17,10,1,0xfa,uVar19,uVar13,uVar16,uVar1);
  *(undefined8 *)(unaff_x19 + 0x198) = uVar17;
  thunk_FUN_040ec700(unaff_x19 + 0x198,uVar17);
  uVar19 = FUN_08a03c40(0);
  uVar13 = *(undefined4 *)((long)unaff_x20 + 0x5c);
  uVar16 = *unaff_x22;
  uVar1 = *(undefined4 *)(unaff_x22 + 1);
  uVar17 = thunk_FUN_040b4efc(*(undefined8 *)puVar6);
  FUN_085aa7ec(uVar17,10,1,0xfa,uVar19,uVar13,uVar16,uVar1);
  *(undefined8 *)(unaff_x19 + 0x1a0) = uVar17;
  thunk_FUN_040ec700(unaff_x19 + 0x1a0,uVar17);
  iVar3 = *(int *)(unaff_x19 + 0x2a8);
  uVar14 = 500;
  if (iVar3 != 1) {
    uVar14 = 400;
  }
  if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  puVar6 = PTR_DAT_0932d918;
  bVar12 = FUN_0855a324(0);
  puVar7 = PTR_DAT_0932eeb0;
  uVar19 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eeb0);
  FUN_085a36cc(uVar19,uVar14,unaff_x26,1,0,iVar3 == 1 & bVar12,0,0);
  *(undefined8 *)(unaff_x19 + 0x1b0) = uVar19;
  thunk_FUN_040ec700(unaff_x19 + 0x1b0,uVar19);
  uVar17 = *(undefined8 *)(unaff_x19 + 0x2f8);
  uVar13 = *(undefined4 *)((long)unaff_x20 + 0x5c);
  uVar19 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932dae0);
  FUN_0852a314(uVar19,uVar14 | 1,uVar17,uVar13,0);
  *(undefined8 *)(unaff_x19 + 0x160) = uVar19;
  thunk_FUN_040ec700(unaff_x19 + 0x160,uVar19);
  uVar19 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eee8);
  FUN_08526df8(uVar19,0x15e,0);
  *(undefined8 *)(unaff_x19 + 0x1a8) = uVar19;
  thunk_FUN_040ec700(unaff_x19 + 0x1a8,uVar19);
  uVar17 = *(undefined8 *)(unaff_x19 + 0x2e8);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x2d8);
  uVar19 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eea8);
  FUN_085a23d4(uVar19,400,uVar17,uVar16,0,0);
  *(undefined8 *)(unaff_x19 + 0x1b8) = uVar19;
  thunk_FUN_040ec700(unaff_x19 + 0x1b8,uVar19);
  lVar15 = unaff_x20[0xe];
  uVar19 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ef30);
  FUN_0854bd4c(uVar19,0x1c2,(char)lVar15,0);
  *(undefined8 *)(unaff_x19 + 0x1c0) = uVar19;
  thunk_FUN_040ec700(unaff_x19 + 0x1c0,uVar19);
  if (*(int *)(*(long *)PTR_DAT_092ba880 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar19 = FUN_08a03c48(0);
  lVar15 = unaff_x20[0xc];
  uVar16 = *unaff_x22;
  uVar13 = *(undefined4 *)(unaff_x22 + 1);
  uVar17 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eed8);
  FUN_085a8cfc(uVar17,0xb,0,0x1c2,uVar19,(int)lVar15,uVar16,uVar13);
  *(undefined8 *)(unaff_x19 + 0x1c8) = uVar17;
  thunk_FUN_040ec700(unaff_x19 + 0x1c8,uVar17);
  uVar19 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ef20);
  FUN_08529c70(uVar19,0x226,0);
  *(undefined8 *)(unaff_x19 + 0x1d0) = uVar19;
  thunk_FUN_040ec700(unaff_x19 + 0x1d0,uVar19);
  uVar17 = *(undefined8 *)(unaff_x19 + 0x2e8);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x2d8);
  uVar19 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eea8);
  FUN_085a23d4(uVar19,0x226,uVar17,uVar16,*(undefined8 *)PTR_DAT_0932ef58,0);
  *(undefined8 *)(unaff_x19 + 0x210) = uVar19;
  thunk_FUN_040ec700(unaff_x19 + 0x210,uVar19);
  uVar14 = FUN_0855a324(0);
  uVar19 = thunk_FUN_040b4efc(*(undefined8 *)puVar7);
  FUN_085a36cc(uVar19,0x226,unaff_x26,0,uVar14 & 1,0,*(undefined8 *)PTR_DAT_0932ef68,0);
  *(undefined8 *)(unaff_x19 + 0x218) = uVar19;
  thunk_FUN_040ec700(unaff_x19 + 0x218,uVar19);
  uVar19 = thunk_FUN_040b4efc(*(undefined8 *)puVar6);
  FUN_08524c38(uVar19,0x226,1,0);
  *(undefined8 *)(unaff_x19 + 0x200) = uVar19;
  thunk_FUN_040ec700(unaff_x19 + 0x200,uVar19);
  uVar19 = thunk_FUN_040b4efc(*(undefined8 *)puVar6);
  FUN_08524c38(uVar19,0x3ea,0,0);
  *(undefined8 *)(unaff_x19 + 0x208) = uVar19;
  thunk_FUN_040ec700(unaff_x19 + 0x208,uVar19);
  FUN_0854e164(0);
  in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0x2d8);
  in_stack_00000088 = extraout_x1;
  thunk_FUN_040ec700(&stack0x00000080,in_stack_00000080);
  puVar6 = PTR_DAT_092871d8;
  in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,0x4a);
  if (*(int *)(*(long *)PTR_DAT_092871d8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar15 = FUN_08581e30(0);
  puVar7 = PTR_DAT_09288658;
  if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)PTR_DAT_09285bb0);
  }
  uVar18 = UnityEngine_UIElements_AtlasBase__SetDynamicTexture(lVar15,0);
  if ((uVar18 & 1) != 0) {
    if (lVar15 == 0) goto LAB_08571948;
    cVar5 = *(char *)(lVar15 + 0x4d);
    uVar13 = *(undefined4 *)(lVar15 + 0x50);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar13 = FUN_08589f6c(cVar5 != '\0',uVar13,0,0);
    in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,uVar13);
  }
  puVar11 = PTR_DAT_0932ef60;
  puVar9 = PTR_DAT_0932ef28;
  puVar10 = PTR_DAT_0932eef0;
  puVar8 = PTR_DAT_0932eea0;
  puVar6 = PTR_DAT_0932d130;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  _uStack0000000000000030 = 0;
  FUN_0854e218(&stack0x00000030,unaff_x20[10],&stack0x00000080,0);
  *(undefined8 *)(unaff_x19 + 0x308) = in_stack_00000038;
  *(ulong *)(unaff_x19 + 0x300) = _uStack0000000000000030;
  *(undefined8 *)(unaff_x19 + 0x318) = in_stack_00000048;
  *(undefined8 *)(unaff_x19 + 0x310) = in_stack_00000040;
  *(undefined8 *)(unaff_x19 + 0x328) = in_stack_00000058;
  *(undefined8 *)(unaff_x19 + 800) = in_stack_00000050;
  *(undefined8 *)(unaff_x19 + 0x338) = in_stack_00000068;
  *(undefined8 *)(unaff_x19 + 0x330) = in_stack_00000060;
  thunk_FUN_040ec700(unaff_x19 + 0x300,0);
  uVar19 = thunk_FUN_040b4efc(*(undefined8 *)puVar8);
  FUN_08524154(uVar19,1000,0);
  *(undefined8 *)(unaff_x19 + 0x1e0) = uVar19;
  thunk_FUN_040ec700(unaff_x19 + 0x1e0,uVar19);
  uVar17 = *(undefined8 *)(unaff_x19 + 0x2d8);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x2e0);
  uVar19 = thunk_FUN_040b4efc(*(undefined8 *)puVar10);
  FUN_085abb2c(uVar19,0x3e9,uVar17,uVar16,0);
  *(undefined8 *)(unaff_x19 + 0x1d8) = uVar19;
  thunk_FUN_040ec700(unaff_x19 + 0x1d8,uVar19);
  uVar19 = thunk_FUN_040b4efc(*(undefined8 *)puVar9);
  FUN_085b2ad8(uVar19,*(undefined8 *)puVar11,0);
  *(undefined8 *)(unaff_x19 + 0x220) = uVar19;
  thunk_FUN_040ec700(unaff_x19 + 0x220,uVar19);
  lVar15 = thunk_FUN_040b4efc(*(undefined8 *)puVar6);
  FUN_085153c4(lVar15,0);
  puVar6 = PTR_DAT_0932d040;
  if (*(int *)(*(long *)PTR_DAT_0932d040 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  plVar20 = (long *)(unaff_x19 + 0xf0);
  *plVar20 = lVar15;
  thunk_FUN_040ec700(plVar20,lVar15);
  if (*(int *)(unaff_x19 + 0x2a0) == 1) {
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (*plVar20 == 0) {
LAB_08571948:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(undefined1 *)(*plVar20 + 0x11) = 0;
  }
  puVar6 = PTR_DAT_09326d30;
  lVar15 = *(long *)PTR_DAT_09326d30;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar15 = *(long *)puVar6;
  }
  *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x24) = DAT_01aedc50;
  FUN_08437344(0);
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  bVar12 = FUN_089eaf28(0x1d,0);
  *(byte *)(unaff_x19 + 0x2d4) = bVar12 & 1;
  return;
}


