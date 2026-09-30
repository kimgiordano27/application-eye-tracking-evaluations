/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_account_create_block_rule_t_account_handle_get
ENTRY_POINT: 08573798
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_create_block_rule_t_account_handle_get
               (void)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long unaff_x19;
  long unaff_x20;
  byte unaff_w21;
  int unaff_w22;
  uint unaff_w23;
  long lVar21;
  uint unaff_w25;
  long lVar22;
  long lVar23;
  long lVar24;
  long unaff_x27;
  uint unaff_w28;
  undefined8 uVar25;
  ulong in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  ulong in_stack_00000038;
  uint uStack0000000000000040;
  int iStack0000000000000044;
  int iStack0000000000000048;
  long in_stack_00000050;
  ulong in_stack_00000058;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined4 in_stack_00000100;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined4 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined4 in_stack_000006ec;
  long in_stack_00000728;
  undefined4 in_stack_0000073c;
  int in_stack_00000834;
  undefined4 in_stack_00000948;
  byte in_stack_00000950;
  byte in_stack_00000955;
  int in_stack_00000958;
  undefined4 in_stack_00000960;
  undefined4 in_stack_00000964;
  int in_stack_00000968;
  undefined4 in_stack_0000096c;
  undefined8 in_stack_00000970;
  undefined4 in_stack_00000978;
  undefined4 in_stack_0000097c;
  undefined8 in_stack_00000980;
  undefined8 in_stack_00000988;
  undefined4 in_stack_00000990;
  
                    /* try { // try from 085737a8 to 0867380f has its CatchHandler @ 08573884 */
  FUN_089fb9ac();
  puVar4 = PTR_DAT_0932efa0;
  lVar21 = *(long *)(unaff_x19 + 0x108);
  lVar13 = *(long *)PTR_DAT_0932efa0;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar13 = *(long *)puVar4;
  }
  puVar20 = *(undefined8 **)(lVar13 + 0xb8);
  lVar23 = puVar20[1];
  if (lVar23 == 0) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
                    /* try { // try from 08573810 to 0867383b has its CatchHandler @ 0857350c */
      puVar20 = *(undefined8 **)(*(long *)PTR_DAT_0932efa0 + 0xb8);
    }
    uVar25 = *puVar20;
    lVar23 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ef88);
    FUN_061da510(lVar23,uVar25,*(undefined8 *)PTR_DAT_0932ef90,0);
    plVar14 = (long *)(*(long *)(*(long *)PTR_DAT_0932efa0 + 0xb8) + 8);
    *plVar14 = lVar23;
    thunk_FUN_040ec700(plVar14,lVar23);
  }
  if (lVar21 == 0) goto LAB_0857503c;
  lVar13 = FUN_05c273e4(lVar21,lVar23,*(undefined8 *)PTR_DAT_0932ef80);
  if ((in_stack_00000038 & 0x100000000) != 0) {
    FUN_08511854();
  }
  if ((in_stack_00000058 & 1) != 0) {
    FUN_08511854();
  }
  uVar12 = (unaff_w25 | unaff_w23) & unaff_w28;
  if ((in_stack_00000058 & 0x100000000) == 0) {
    if (*(char *)(unaff_x20 + 400) == '\0' && unaff_w22 == 0) {
      bVar8 = in_stack_00000950 & 1;
    }
    else {
      bVar8 = 1;
    }
  }
  else {
    bVar8 = 0;
  }
  lVar21 = *(long *)(unaff_x19 + 0xe8);
  bVar8 = unaff_w21 & bVar8 != 0;
  if (lVar21 != 0) {
    uVar9 = FUN_085189ec();
    uVar15 = FUN_084eea60(lVar21,uVar9 & 1,0);
    if ((uVar15 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_0857503c;
      FUN_084eea88(*(long *)(unaff_x19 + 0xe8),&stack0x00000834,0);
      if (in_stack_00000834 == 1) {
        in_stack_00000058._4_4_ = 1;
      }
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_0857503c;
      uVar15 = FUN_084ee410(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar15 & 1) == 0) && ((_iStack0000000000000048 & 0x100000000) == 0)) {
        bVar8 = 0;
        uVar12 = 0;
        in_stack_00000058._4_4_ = 0;
        uStack0000000000000040 = 0;
        *(undefined1 *)(unaff_x19 + 0x140) = 0;
      }
      if (*(char *)(unaff_x19 + 0x134) != '\0') {
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_0857503c;
        bVar7 = FUN_084ee558(*(long *)(unaff_x19 + 0xe8),0);
        *(byte *)(unaff_x19 + 0x134) = bVar7 & 1;
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x1d8) == 0) goto LAB_0857503c;
  *(undefined1 *)(*(long *)(unaff_x20 + 0x1d8) + 0x140) = *(undefined1 *)(unaff_x19 + 0x140);
  iVar10 = FUN_08570428();
  if (iVar10 == 1) {
    lVar21 = *(long *)(unaff_x19 + 0x298);
    if (lVar21 == 0) goto LAB_0857503c;
    if ((*(char *)(lVar21 + 0x15) != '\0') &&
       ((in_stack_00000958 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_085916e8(lVar21,0);
    }
  }
  iVar10 = FUN_08570428();
  if (iVar10 == 1) {
    bVar7 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  else {
    bVar7 = 0;
  }
  if (bVar7 != 0 || (in_stack_00000058._4_4_ != 0 || bVar8 != 0)) {
    if ((in_stack_00000058._4_4_ == 0) || (iVar10 = FUN_08570428(), iVar10 == 1)) {
      FUN_089af748(&stack0x00000800,0x31,0);
    }
    else {
      FUN_089af748(&stack0x00000800,0,0);
      Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_archive_query_t_application_stanza_namespace_get
                ();
    }
    if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_0932c538);
    }
    FUN_0855b8d0(0,(long *)(unaff_x19 + 0x260),&stack0x00000800,0,1,1,
                 *(undefined8 *)PTR_DAT_0932d9b0,0);
    if ((*(long *)(unaff_x19 + 0x260) == 0) || (unaff_x27 == 0)) goto LAB_0857503c;
    FUN_089fc120();
    if (*(int *)(*(long *)PTR_DAT_09327f08 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08a06884(&stack0x000009a8);
    FUN_089f0620();
  }
  if ((in_stack_00000038 & 1) == 0) {
    iVar10 = FUN_08570428();
    if (iVar10 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar15 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      if ((uVar15 & 1) != 0) goto LAB_08573bb0;
    }
  }
  else {
LAB_08573bb0:
    plVar14 = (long *)(unaff_x19 + 0x270);
    uVar25 = *(undefined8 *)PTR_DAT_0932efa8;
    iVar10 = FUN_08570428();
    if (iVar10 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar15 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      if ((uVar15 & 1) != 0) {
        lVar21 = *(long *)(unaff_x19 + 0x298);
        if (lVar21 == 0) goto LAB_0857503c;
        lVar23 = *(long *)(lVar21 + 0x30);
        uVar9 = FUN_0858fd30(lVar21,0);
        if (lVar23 == 0) goto LAB_0857503c;
        if (*(uint *)(lVar23 + 0x18) <= uVar9) goto LAB_0857504c;
        plVar14 = (long *)(lVar23 + (long)(int)uVar9 * 8 + 0x20);
        if (*plVar14 == 0) goto LAB_0857503c;
        uVar25 = *(undefined8 *)(*plVar14 + 0x58);
      }
    }
    iVar10 = FUN_08570428();
    if (iVar10 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar15 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      if ((uVar15 & 1) == 0) goto LAB_08573cd0;
      lVar21 = *(long *)(unaff_x19 + 0x298);
      if (lVar21 == 0) goto LAB_0857503c;
      uVar11 = FUN_0858fd30(lVar21,0);
      uVar11 = FUN_0858fe3c(lVar21,uVar11,0);
    }
    else {
LAB_08573cd0:
      uVar11 = FUN_08557684(in_stack_00000948,0);
    }
    FUN_089af748(&stack0x000007c0,uVar11,0);
    iVar10 = FUN_08570428();
    if (iVar10 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar15 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      if ((uVar15 & 1) == 0) goto LAB_08573d70;
      lVar21 = *(long *)(unaff_x19 + 0x298);
      if (lVar21 == 0) goto LAB_0857503c;
      uVar11 = FUN_0858fd30(lVar21,0);
      FUN_0859177c(lVar21,&stack0x00000360,uVar11,0);
    }
    else {
LAB_08573d70:
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0855b8d0(0,plVar14,&stack0x000007c0,0,1,1,uVar25,0);
    }
    if ((*plVar14 == 0) || (unaff_x27 == 0)) goto LAB_0857503c;
    FUN_089fc120();
    puVar4 = PTR_DAT_093247c0;
    if (*(int *)(*(long *)PTR_DAT_093247c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (DAT_0989d7e8 == '\0') {
      FUN_04077588(PTR_DAT_093247c0);
      DAT_0989d7e8 = '\x01';
    }
    lVar21 = *(long *)puVar4;
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar21 = *(long *)puVar4;
    }
    if (**(long **)(lVar21 + 0xb8) == 0) goto LAB_0857503c;
    *(long *)(**(long **)(lVar21 + 0xb8) + 0x10) = unaff_x27;
    thunk_FUN_040ec700();
    FUN_08557570(**(undefined8 **)(*(long *)puVar4 + 0xb8),in_stack_00000948,0);
    iVar10 = FUN_08570428();
    if (iVar10 == 1) {
      if (*plVar14 == 0) goto LAB_0857503c;
      FUN_089fc120();
    }
    if (*(int *)(*(long *)PTR_DAT_09327f08 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08a06884(&stack0x000009a8);
    FUN_089f0620();
  }
  if (in_stack_00000058._4_4_ != 0) {
    if ((in_stack_00000018 & 0x100000000) == 0) {
      iVar10 = FUN_08570428();
      if (iVar10 == 1) goto LAB_0857435c;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_0857503c;
      FUN_085a7844(*(long *)(unaff_x19 + 0x148),&stack0x00000220,*(undefined8 *)(unaff_x19 + 0x260),
                   0);
    }
    else {
      uVar25 = *(undefined8 *)PTR_DAT_0932e3e0;
      iVar10 = FUN_08570428();
      if (iVar10 == 1) {
        lVar21 = *(long *)(unaff_x19 + 0x298);
        if (lVar21 == 0) goto LAB_0857503c;
        lVar23 = *(long *)(lVar21 + 0x30);
        uVar9 = FUN_0858fd0c(lVar21,0);
        if (lVar23 == 0) goto LAB_0857503c;
        if (*(uint *)(lVar23 + 0x18) <= uVar9) goto LAB_0857504c;
        plVar14 = (long *)(lVar23 + (long)(int)uVar9 * 8 + 0x20);
        if (*plVar14 == 0) goto LAB_0857503c;
        uVar25 = *(undefined8 *)(*plVar14 + 0x58);
      }
      else {
        plVar14 = (long *)(unaff_x19 + 0x268);
      }
      iVar10 = FUN_08570428();
      if (iVar10 == 1) {
        lVar21 = *(long *)(unaff_x19 + 0x298);
        if (lVar21 == 0) goto LAB_0857503c;
        uVar11 = FUN_0858fd0c(lVar21,0);
        uVar11 = FUN_0858fe3c(lVar21,uVar11,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0932eec8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar11 = FUN_085a5d90(0);
      }
      FUN_089af748(&stack0x00000780,uVar11,0);
      iVar10 = FUN_08570428();
      if (iVar10 == 1) {
        lVar21 = *(long *)(unaff_x19 + 0x298);
        if (lVar21 == 0) goto LAB_0857503c;
        uVar11 = FUN_0858fd0c(lVar21,0);
        FUN_0859177c(lVar21,&stack0x000002c0,uVar11,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_0855b8d0(0,plVar14,&stack0x00000780,0,1,1,uVar25,0);
      }
      if ((*plVar14 == 0) || (unaff_x27 == 0)) goto LAB_0857503c;
      FUN_089fc120();
      iVar10 = FUN_08570428();
      if (iVar10 == 1) {
        if (*plVar14 == 0) goto LAB_0857503c;
        FUN_089fc120();
      }
      if (*(int *)(*(long *)PTR_DAT_09327f08 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_08a06884(&stack0x000009a8);
      FUN_089f0620();
      iVar10 = FUN_08570428();
      if (iVar10 != 1) {
        lVar21 = *(long *)(unaff_x19 + 0x150);
        if (in_stack_00000028._4_4_ == 0) {
          if (lVar21 == 0) goto LAB_0857503c;
          FUN_085a5dd8(lVar21,*(undefined8 *)(unaff_x19 + 0x260),*(undefined8 *)(unaff_x19 + 0x268),
                       0);
        }
        else {
          if (lVar21 == 0) goto LAB_0857503c;
          FUN_085a5e10(lVar21,*(undefined8 *)(unaff_x19 + 0x260),*(undefined8 *)(unaff_x19 + 0x268),
                       *(undefined8 *)(unaff_x19 + 0x270),0);
        }
        goto LAB_0857434c;
      }
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar9 = FUN_0858fd0c(*(long *)(unaff_x19 + 0x298),0);
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar15 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      lVar23 = *(long *)(unaff_x19 + 0x150);
      uVar25 = *(undefined8 *)(unaff_x19 + 0x238);
      lVar21 = *(long *)(unaff_x19 + 0x298);
      if ((uVar15 & 1) == 0) {
        if (in_stack_00000028._4_4_ != 0) {
          if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0x30), lVar21 == 0)) goto LAB_0857503c;
          if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_0857504c;
          if (lVar23 == 0) goto LAB_0857503c;
          uVar19 = *(undefined8 *)(unaff_x19 + 0x270);
          uVar16 = *(undefined8 *)(lVar21 + (long)(int)uVar9 * 8 + 0x20);
          goto LAB_085742bc;
        }
        if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0x30), lVar21 == 0)) goto LAB_0857503c;
        if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_0857504c;
        if (lVar23 == 0) goto LAB_0857503c;
        FUN_085a5dd8(lVar23,uVar25,*(undefined8 *)(lVar21 + (long)(int)uVar9 * 8 + 0x20),0);
      }
      else {
        if ((lVar21 == 0) || (lVar22 = *(long *)(lVar21 + 0x30), lVar22 == 0)) goto LAB_0857503c;
        if (*(uint *)(lVar22 + 0x18) <= uVar9) {
LAB_0857504c:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        uVar16 = *(undefined8 *)(lVar22 + (long)(int)uVar9 * 8 + 0x20);
        uVar9 = FUN_0858fd30(lVar21,0);
        if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_0857504c;
        if (lVar23 == 0) goto LAB_0857503c;
        uVar19 = *(undefined8 *)(lVar22 + (long)(int)uVar9 * 8 + 0x20);
LAB_085742bc:
        FUN_085a5e10(lVar23,uVar25,uVar16,uVar19,0);
      }
      puVar4 = PTR_DAT_0932c850;
      if (0xffffffe0 < in_stack_00000958 - 0xfbU) {
        lVar21 = *(long *)(unaff_x19 + 0x150);
        if (*(int *)(*(long *)PTR_DAT_0932c850 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (lVar21 == 0) goto LAB_0857503c;
        puVar20 = (undefined8 *)(lVar21 + 0xb8);
        *puVar20 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
        thunk_FUN_040ec700(puVar20);
      }
    }
LAB_0857434c:
    FUN_08511854();
  }
LAB_0857435c:
  if (*(char *)(unaff_x19 + 0x140) != '\0') {
    if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_0857503c;
    FUN_085a38d0(*(long *)(unaff_x19 + 0x158),*(undefined8 *)(unaff_x19 + 0x238),
                 *(undefined8 *)(unaff_x19 + 0x260),0);
    FUN_08511854();
  }
  if ((uStack0000000000000040 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x300) == 0) goto LAB_0857503c;
    FUN_085a0298(*(long *)(unaff_x19 + 0x300),&stack0x000009a0,&stack0x00000740,&stack0x0000073c,0);
    if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0855b8d0(0,unaff_x19 + 800,&stack0x00000740,in_stack_0000073c,1,0,
                 *(undefined8 *)PTR_DAT_0932efc0,0);
    if (*(long *)(unaff_x19 + 0x300) == 0) goto LAB_0857503c;
    FUN_085a0234(*(long *)(unaff_x19 + 0x300),&stack0x00000730,0);
    FUN_08511854();
  }
  if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_0857503c;
  uVar15 = FUN_083e7eb4(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar15 & 1) != 0) {
    FUN_08511854();
  }
  cVar3 = *(char *)(unaff_x20 + 0x1e0);
  iVar10 = FUN_08570428();
  if (iVar10 == 1) {
    lVar21 = *(long *)(unaff_x19 + 0x298);
    if (lVar21 == 0) goto LAB_0857503c;
    if ((*(char *)(lVar21 + 0x15) != '\0') &&
       ((in_stack_00000958 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_085916e8(lVar21,0);
    }
    in_stack_000001e8 = in_stack_00000020[1];
    in_stack_000001e0 = *in_stack_00000020;
    FUN_08575c08();
  }
  else {
    uVar11 = 2;
    if ((uVar12 & 1) == 0) {
      uVar11 = 0;
    }
    uVar2 = 0;
    if (1 < in_stack_00000968) {
      uVar2 = uVar11;
    }
    iVar10 = 0;
    if ((bVar8 == 0 && (uVar12 & 1) == 0) && cVar3 != '\0') {
      iVar10 = 3;
    }
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_0857503c;
    uVar15 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar15 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_0857503c;
      if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x20) != '\0') {
        iVar10 = 0;
      }
    }
    bVar7 = 0;
    if (1 < in_stack_00000968) {
      bVar7 = bVar8;
    }
    if (bVar7 == 1) {
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar15 = FUN_0855a324(0);
      if ((uVar15 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (uVar12 & 1) == 0) {
          if (iVar10 == 0) {
            iVar10 = 2;
          }
          else if (iVar10 == 3) {
            iVar10 = 1;
          }
        }
      }
    }
    if (iStack0000000000000044 == 0) {
      lVar21 = *(long *)(unaff_x19 + 0x198);
      if (lVar21 == 0) goto LAB_0857503c;
    }
    else {
      lVar21 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar21 == 0) goto LAB_0857503c;
      FUN_085aa8d8(lVar21,*(undefined8 *)(unaff_x19 + 0x228),*(undefined8 *)(unaff_x19 + 0x270),
                   *(undefined8 *)(unaff_x19 + 0x238),0);
    }
    FUN_08505824(lVar21,uVar2,0,0);
    FUN_0850595c(lVar21,iVar10,0);
    puVar4 = PTR_DAT_0932efa0;
    lVar22 = *(long *)(unaff_x19 + 0x108);
    lVar23 = *(long *)PTR_DAT_0932efa0;
    if (*(int *)(lVar23 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar23 = *(long *)puVar4;
    }
    puVar20 = *(undefined8 **)(lVar23 + 0xb8);
    lVar24 = puVar20[2];
    if (lVar24 == 0) {
      if (*(int *)(lVar23 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        puVar20 = *(undefined8 **)(*(long *)PTR_DAT_0932efa0 + 0xb8);
      }
      uVar25 = *puVar20;
      lVar24 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ef88);
      FUN_061da510(lVar24,uVar25,*(undefined8 *)PTR_DAT_0932ef98,0);
      plVar14 = (long *)(*(long *)(*(long *)PTR_DAT_0932efa0 + 0xb8) + 0x10);
      *plVar14 = lVar24;
      thunk_FUN_040ec700(plVar14,lVar24);
    }
    if (lVar22 == 0) goto LAB_0857503c;
    lVar23 = FUN_05c273e4(lVar22,lVar24,*(undefined8 *)PTR_DAT_0932ef80);
    if ((lVar23 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
      if (in_stack_00000050 == 0) goto LAB_0857503c;
      iVar10 = FUN_089791c8(in_stack_00000050,0);
      if (iVar10 == 4) goto LAB_085746d8;
      uVar11 = 1;
    }
    else {
LAB_085746d8:
      uVar11 = 0;
    }
    uVar15 = FUN_089d77f0(0);
    if ((uVar15 & 1) != 0) {
      FUN_08505e50(0,0,0,0x3f800000,lVar21,uVar11,0);
    }
    FUN_08511854();
  }
  if (in_stack_00000050 == 0) goto LAB_0857503c;
  iVar10 = FUN_089791c8(in_stack_00000050,0);
  if ((iVar10 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar25 = FUN_08992c4c(0);
    puVar4 = PTR_DAT_09285bb0;
    if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_09285bb0);
    }
    uVar15 = FUN_089ca704(uVar25,0,0);
    if ((uVar15 & 1) == 0) {
      uVar15 = FUN_04f38fe8(in_stack_00000050,&stack0x00000728,*(undefined8 *)PTR_DAT_0932ef78);
      if ((uVar15 & 1) != 0) {
        if (in_stack_00000728 == 0) goto LAB_0857503c;
        uVar25 = FUN_0899b330(in_stack_00000728,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*(long *)puVar4);
        }
        uVar15 = FUN_089ca704(uVar25,0,0);
        if ((uVar15 & 1) != 0) goto LAB_0857477c;
      }
    }
    else {
LAB_0857477c:
      FUN_08511854();
    }
  }
  if (bVar8 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) != 0) {
      in_stack_00000058._4_4_ = 1;
    }
    if ((in_stack_00000058._4_4_ & 1) == 0) {
      uVar15 = FUN_089d73c4(0);
      uVar25 = *(undefined8 *)PTR_DAT_0932d9b0;
      if ((uVar15 & 1) == 0) {
        uVar16 = FUN_089a58d8(0);
      }
      else {
        uVar16 = FUN_089a5960(0);
      }
      FUN_089942c4(uVar25,uVar16,0);
    }
  }
  else {
    iVar10 = FUN_08570428();
    if (((iVar10 != 1) || (*(char *)(unaff_x19 + 0x134) == '\0')) || ((in_stack_00000950 & 1) != 0))
    {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
      FUN_085a38d0(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x238),
                   *(undefined8 *)(unaff_x19 + 0x260),0);
      FUN_08511854();
    }
  }
  if ((uVar12 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_092871d8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar21 = FUN_08581e30(0);
    if (lVar21 == 0) goto LAB_0857503c;
    uVar11 = *(undefined4 *)(lVar21 + 0x48);
    FUN_085a2560(uVar11,&stack0x000006f0,&stack0x000006ec,0);
    if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0855b8d0(0,unaff_x19 + 0x278,&stack0x000006f0,in_stack_000006ec,1,1,
                 *(undefined8 *)PTR_DAT_0932d9b8,0);
    if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_0857503c;
    FUN_085a2600(*(long *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x19 + 0x228),
                 *(undefined8 *)(unaff_x19 + 0x278),uVar11,0);
    FUN_08511854();
  }
  if ((in_stack_00000955 & 1) != 0) {
    FUN_089af748(&stack0x000006b0,0x2e,0);
    if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0855b8d0(0,unaff_x19 + 0x280,&stack0x000006b0,0,1,1,*(undefined8 *)PTR_DAT_0932db20,0);
    FUN_089af748(&stack0x00000670,0,0);
    FUN_0855b8d0(0,unaff_x19 + 0x288,&stack0x00000670,0,1,1,*(undefined8 *)PTR_DAT_0932db18,0);
    if (*(int *)(*(long *)PTR_DAT_0932dae0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0852bae0();
    if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_0857503c;
    FUN_0852a4bc(*(long *)(unaff_x19 + 0x160),*(undefined8 *)(unaff_x19 + 0x280),
                 *(undefined8 *)(unaff_x19 + 0x288),0);
    FUN_08511854();
  }
  if ((in_stack_00000030 & 1) != 0) {
    FUN_08511854();
  }
  uVar12 = 0;
  if (cVar3 != '\0') {
    uVar12 = 3;
  }
  if (bVar8 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar12 = 0, 1 < in_stack_00000968)
       ) {
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar12 = FUN_0855a324(0);
      uVar12 = uVar12 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_0857503c;
  FUN_08505824(*(long *)(unaff_x19 + 0x1c8),
               (((in_stack_00000968 < 2 || cVar3 == '\0') | in_stack_00000068._4_1_) ^ 0xff) & 1,0,0
              );
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_0857503c;
  FUN_0850595c(*(long *)(unaff_x19 + 0x1c8),uVar12,0);
  FUN_08511854();
  FUN_08511854();
  FUN_08575d60();
  uVar15 = FUN_08518cf0();
  uVar17 = FUN_08518ab8();
  if (((uVar15 & 1) != 0) && ((uVar17 & 1) != 0)) {
    lVar21 = *(long *)(unaff_x19 + 0x200);
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_archive_query_t_application_stanza_namespace_get
              ();
    if (lVar21 == 0) goto LAB_0857503c;
    FUN_08524e38(lVar21);
    FUN_08511854();
  }
  bVar5 = cVar3 == '\0';
  bVar6 = *(long *)(unaff_x20 + 0x1b0) != 0;
  if ((bVar5 || ((in_stack_00000030._4_4_ ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar18 = FUN_08519004(), (uVar18 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    bVar8 = 0;
joined_r0x08574c60:
    if (!bVar6 || bVar5) goto LAB_08574c64;
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_delete_auto_accept_rule_t_base__get:
    bVar7 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar8 = FUN_084ee3f4(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x08574c60;
    }
    bVar8 = 1;
    if (bVar6 && !bVar5)
    goto 
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_delete_auto_accept_rule_t_base__get
    ;
LAB_08574c64:
    bVar7 = lVar13 == 0 & (bVar8 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar12 = 1;
  }
  else {
    uVar12 = FUN_084ee4e4(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar12 = uVar12 ^ 1;
  }
  plVar14 = (long *)(unaff_x19 + 0x228);
  plVar1 = (long *)(unaff_x19 + 0x238);
  if (iStack0000000000000048 == 0) {
    if (cVar3 == '\0') {
      return;
    }
    FUN_08571d58();
  }
  else {
    uVar11 = FUN_089af740(&stack0x00000960,0);
    if (*(int *)(*(long *)PTR_DAT_0932db88 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_0932db88);
    }
    in_stack_00000170 = CONCAT44(in_stack_00000964,in_stack_00000960);
    in_stack_00000178 = CONCAT44(in_stack_0000096c,in_stack_00000968);
    in_stack_00000180 = in_stack_00000970;
    in_stack_00000188 = CONCAT44(in_stack_0000097c,in_stack_00000978);
    in_stack_00000190 = in_stack_00000980;
    in_stack_00000198 = in_stack_00000988;
    in_stack_000001a0 = in_stack_00000990;
    FUN_0852fb58(&stack0x000001a8,&stack0x00000170,in_stack_00000960,in_stack_00000964,uVar11,0,0);
    if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0855b8d0(0,unaff_x19 + 0x318,&stack0x00000630,0,1,1,*(undefined8 *)PTR_DAT_0932efb0,0);
    if (cVar3 == '\0') {
      if (*(long *)(unaff_x19 + 0x308) == 0) goto LAB_0857503c;
      FUN_0852d128(*(long *)(unaff_x19 + 0x308),&stack0x00000960,plVar14,0,plVar1,&stack0x00000730,
                   unaff_x19 + 0x280,0);
      goto LAB_08572d60;
    }
    FUN_08571d58();
    if (*(long *)(unaff_x19 + 0x308) == 0) goto LAB_0857503c;
    FUN_0852d128(*(long *)(unaff_x19 + 0x308),&stack0x00000960,plVar14,bVar7,plVar1,&stack0x00000730
                 ,unaff_x19 + 0x280,bVar8 & 1);
    FUN_08511854();
  }
  lVar21 = *plVar14;
  if ((bVar8 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x310) == 0) goto LAB_0857503c;
    FUN_0852d270(*(long *)(unaff_x19 + 0x310),&stack0x00000628,1,uVar12 & 1,0);
    FUN_08511854();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_08511854();
  }
  if (((bVar8 & 1) == 0) && (((iStack0000000000000048 == 0 || (lVar13 != 0)) || (bVar6 && !bVar5))))
  {
    lVar13 = *plVar14;
    if ((lVar13 == 0) || (lVar23 = *(long *)(unaff_x19 + 0x250), lVar23 == 0)) goto LAB_0857503c;
    in_stack_00000118 = *(undefined8 *)(lVar23 + 0x30);
    in_stack_00000110 = *(undefined8 *)(lVar23 + 0x28);
    in_stack_00000128 = *(undefined8 *)(lVar23 + 0x40);
    in_stack_00000120 = *(undefined8 *)(lVar23 + 0x38);
    in_stack_00000130 = *(undefined8 *)(lVar23 + 0x48);
    in_stack_00000148 = *(undefined8 *)(lVar13 + 0x30);
    in_stack_00000140 = *(undefined8 *)(lVar13 + 0x28);
    in_stack_00000158 = *(undefined8 *)(lVar13 + 0x40);
    in_stack_00000150 = *(undefined8 *)(lVar13 + 0x38);
    in_stack_00000160 = *(undefined8 *)(lVar13 + 0x48);
    uVar18 = FUN_089ea6c4(&stack0x00000140,&stack0x00000110,0);
    if ((uVar18 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_0857503c;
      in_stack_000000d8 = CONCAT44(in_stack_0000096c,in_stack_00000968);
      in_stack_000000d0 = CONCAT44(in_stack_00000964,in_stack_00000960);
      in_stack_000000e8 = CONCAT44(in_stack_0000097c,in_stack_00000978);
      in_stack_000000e0 = in_stack_00000970;
      in_stack_000000f0 = in_stack_00000980;
      in_stack_000000f8 = in_stack_00000988;
      in_stack_00000100 = in_stack_00000990;
      FUN_085abda4(*(long *)(unaff_x19 + 0x1d8),&stack0x000000d0,lVar21,0);
      FUN_08511854();
    }
  }
  if (((uVar15 & 1) != 0) && ((uVar17 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_08511854();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar15 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar15 & 1) == 0) {
      return;
    }
    lVar13 = *plVar1;
    if ((lVar13 != 0) && (lVar21 = *(long *)(unaff_x20 + 0x1a0), lVar21 != 0)) {
      in_stack_00000078 = *(undefined8 *)(lVar21 + 0x38);
      in_stack_00000070 = *(undefined8 *)(lVar21 + 0x30);
      in_stack_00000088 = *(undefined8 *)(lVar21 + 0x48);
      in_stack_00000080 = *(undefined8 *)(lVar21 + 0x40);
      in_stack_00000090 = *(undefined8 *)(lVar21 + 0x50);
      in_stack_000000a8 = *(undefined8 *)(lVar13 + 0x30);
      in_stack_000000a0 = *(undefined8 *)(lVar13 + 0x28);
      in_stack_000000b8 = *(undefined8 *)(lVar13 + 0x40);
      in_stack_000000b0 = *(undefined8 *)(lVar13 + 0x38);
      in_stack_000000c0 = *(undefined8 *)(lVar13 + 0x48);
      uVar15 = FUN_089ea6c4(&stack0x000000a0,&stack0x00000070,0);
      if ((uVar15 & 1) != 0) {
        return;
      }
      if (*(long *)(unaff_x20 + 0x1a0) != 0) {
        if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x20) == '\0') {
          return;
        }
        if (*(long *)(unaff_x19 + 0x1f0) != 0) {
          FUN_085a38d0(*(long *)(unaff_x19 + 0x1f0),*(undefined8 *)(unaff_x19 + 0x238),
                       *(undefined8 *)(unaff_x19 + 600),0);
          if (*(long *)(unaff_x19 + 0x1f0) != 0) {
            *(undefined1 *)(*(long *)(unaff_x19 + 0x1f0) + 0xcd) = 1;
LAB_08572d60:
            FUN_08511854();
            return;
          }
        }
      }
    }
  }
LAB_0857503c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


