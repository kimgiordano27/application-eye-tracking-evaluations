/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_req_account_create_block_rule_t
ENTRY_POINT: 08573a58
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_account_create_block_rule_t(void)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  long unaff_x19;
  long unaff_x20;
  long lVar19;
  uint unaff_w23;
  long *plVar20;
  undefined8 uVar21;
  byte bVar22;
  uint unaff_w26;
  long lVar23;
  long unaff_x27;
  long unaff_x28;
  uint unaff_w29;
  ulong in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  uint in_stack_00000038;
  ulong in_stack_00000040;
  int in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000060;
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
  
                    /* try { // try from 08573a58 to 08673b23 has its CatchHandler @ 08573a58
                       catch() { ... } // from try @ 08573a58 with catch @ 08573a58
                       catch() { ... } // from try @ 08573b48 with catch @ 08573a58
                       catch() { ... } // from try @ 08573b8c with catch @ 08573a58
                       catch() { ... } // from try @ 08573bc0 with catch @ 08573a58
                       catch() { ... } // from try @ 08573be4 with catch @ 08573a58 */
  iVar8 = FUN_08570428();
  if (iVar8 == 1) {
    bVar7 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  else {
    bVar7 = 0;
  }
  if (bVar7 != 0 || (unaff_w23 != 0 || unaff_w29 != 0)) {
    if ((unaff_w23 == 0) || (iVar8 = FUN_08570428(), iVar8 == 1)) {
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
    iVar8 = FUN_08570428();
    if (iVar8 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar11 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      if ((uVar11 & 1) != 0) goto LAB_08573bb0;
    }
  }
  else {
LAB_08573bb0:
    plVar20 = (long *)(unaff_x19 + 0x270);
    uVar21 = *(undefined8 *)PTR_DAT_0932efa8;
    iVar8 = FUN_08570428();
    if (iVar8 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar11 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      if ((uVar11 & 1) != 0) {
        lVar12 = *(long *)(unaff_x19 + 0x298);
        if (lVar12 == 0) goto LAB_0857503c;
        lVar19 = *(long *)(lVar12 + 0x30);
        uVar9 = FUN_0858fd30(lVar12,0);
        if (lVar19 == 0) goto LAB_0857503c;
        if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_0857504c;
        plVar20 = (long *)(lVar19 + (long)(int)uVar9 * 8 + 0x20);
        if (*plVar20 == 0) goto LAB_0857503c;
        uVar21 = *(undefined8 *)(*plVar20 + 0x58);
      }
    }
    iVar8 = FUN_08570428();
    if (iVar8 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar11 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      if ((uVar11 & 1) == 0) goto LAB_08573cd0;
      lVar12 = *(long *)(unaff_x19 + 0x298);
      if (lVar12 == 0) goto LAB_0857503c;
      uVar10 = FUN_0858fd30(lVar12,0);
      uVar10 = FUN_0858fe3c(lVar12,uVar10,0);
    }
    else {
LAB_08573cd0:
      uVar10 = FUN_08557684(in_stack_00000948,0);
    }
    FUN_089af748(&stack0x000007c0,uVar10,0);
    iVar8 = FUN_08570428();
    if (iVar8 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar11 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      if ((uVar11 & 1) == 0) goto LAB_08573d70;
      lVar12 = *(long *)(unaff_x19 + 0x298);
      if (lVar12 == 0) goto LAB_0857503c;
      uVar10 = FUN_0858fd30(lVar12,0);
      FUN_0859177c(lVar12,&stack0x00000360,uVar10,0);
    }
    else {
LAB_08573d70:
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0855b8d0(0,plVar20,&stack0x000007c0,0,1,1,uVar21,0);
    }
    if ((*plVar20 == 0) || (unaff_x27 == 0)) goto LAB_0857503c;
    FUN_089fc120();
    puVar4 = PTR_DAT_093247c0;
    if (*(int *)(*(long *)PTR_DAT_093247c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (DAT_0989d7e8 == '\0') {
      FUN_04077588(PTR_DAT_093247c0);
      DAT_0989d7e8 = '\x01';
    }
    lVar12 = *(long *)puVar4;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar12 = *(long *)puVar4;
    }
    if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_0857503c;
    *(long *)(**(long **)(lVar12 + 0xb8) + 0x10) = unaff_x27;
    thunk_FUN_040ec700();
    FUN_08557570(**(undefined8 **)(*(long *)puVar4 + 0xb8),in_stack_00000948,0);
    iVar8 = FUN_08570428();
    if (iVar8 == 1) {
      if (*plVar20 == 0) goto LAB_0857503c;
      FUN_089fc120();
    }
    if (*(int *)(*(long *)PTR_DAT_09327f08 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08a06884(&stack0x000009a8);
    FUN_089f0620();
  }
  if (unaff_w23 != 0) {
    if ((in_stack_00000018 & 0x100000000) == 0) {
      iVar8 = FUN_08570428();
      if (iVar8 == 1) goto LAB_0857435c;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_0857503c;
      FUN_085a7844(*(long *)(unaff_x19 + 0x148),&stack0x00000220,*(undefined8 *)(unaff_x19 + 0x260),
                   0);
    }
    else {
      uVar21 = *(undefined8 *)PTR_DAT_0932e3e0;
      iVar8 = FUN_08570428();
      if (iVar8 == 1) {
        lVar12 = *(long *)(unaff_x19 + 0x298);
        if (lVar12 == 0) goto LAB_0857503c;
        lVar19 = *(long *)(lVar12 + 0x30);
        uVar9 = FUN_0858fd0c(lVar12,0);
        if (lVar19 == 0) goto LAB_0857503c;
        if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_0857504c;
        plVar20 = (long *)(lVar19 + (long)(int)uVar9 * 8 + 0x20);
        if (*plVar20 == 0) goto LAB_0857503c;
        uVar21 = *(undefined8 *)(*plVar20 + 0x58);
      }
      else {
        plVar20 = (long *)(unaff_x19 + 0x268);
      }
      iVar8 = FUN_08570428();
      if (iVar8 == 1) {
        lVar12 = *(long *)(unaff_x19 + 0x298);
        if (lVar12 == 0) goto LAB_0857503c;
        uVar10 = FUN_0858fd0c(lVar12,0);
        uVar10 = FUN_0858fe3c(lVar12,uVar10,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0932eec8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar10 = FUN_085a5d90(0);
      }
      FUN_089af748(&stack0x00000780,uVar10,0);
      iVar8 = FUN_08570428();
      if (iVar8 == 1) {
        lVar12 = *(long *)(unaff_x19 + 0x298);
        if (lVar12 == 0) goto LAB_0857503c;
        uVar10 = FUN_0858fd0c(lVar12,0);
        FUN_0859177c(lVar12,&stack0x000002c0,uVar10,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_0855b8d0(0,plVar20,&stack0x00000780,0,1,1,uVar21,0);
      }
      if ((*plVar20 == 0) || (unaff_x27 == 0)) goto LAB_0857503c;
      FUN_089fc120();
      iVar8 = FUN_08570428();
      if (iVar8 == 1) {
        if (*plVar20 == 0) goto LAB_0857503c;
        FUN_089fc120();
      }
      if (*(int *)(*(long *)PTR_DAT_09327f08 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_08a06884(&stack0x000009a8);
      FUN_089f0620();
      iVar8 = FUN_08570428();
      if (iVar8 != 1) {
        lVar12 = *(long *)(unaff_x19 + 0x150);
        if (in_stack_00000028._4_4_ == 0) {
          if (lVar12 == 0) goto LAB_0857503c;
          FUN_085a5dd8(lVar12,*(undefined8 *)(unaff_x19 + 0x260),*(undefined8 *)(unaff_x19 + 0x268),
                       0);
        }
        else {
          if (lVar12 == 0) goto LAB_0857503c;
          FUN_085a5e10(lVar12,*(undefined8 *)(unaff_x19 + 0x260),*(undefined8 *)(unaff_x19 + 0x268),
                       *(undefined8 *)(unaff_x19 + 0x270),0);
        }
        goto LAB_0857434c;
      }
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar9 = FUN_0858fd0c(*(long *)(unaff_x19 + 0x298),0);
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar11 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      lVar19 = *(long *)(unaff_x19 + 0x150);
      uVar21 = *(undefined8 *)(unaff_x19 + 0x238);
      lVar12 = *(long *)(unaff_x19 + 0x298);
      if ((uVar11 & 1) == 0) {
        if (in_stack_00000028._4_4_ != 0) {
          if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x30), lVar12 == 0)) goto LAB_0857503c;
          if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_0857504c;
          if (lVar19 == 0) goto LAB_0857503c;
          uVar16 = *(undefined8 *)(unaff_x19 + 0x270);
          uVar13 = *(undefined8 *)(lVar12 + (long)(int)uVar9 * 8 + 0x20);
          goto LAB_085742bc;
        }
        if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x30), lVar12 == 0)) goto LAB_0857503c;
        if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_0857504c;
        if (lVar19 == 0) goto LAB_0857503c;
        FUN_085a5dd8(lVar19,uVar21,*(undefined8 *)(lVar12 + (long)(int)uVar9 * 8 + 0x20),0);
      }
      else {
        if ((lVar12 == 0) || (lVar18 = *(long *)(lVar12 + 0x30), lVar18 == 0)) goto LAB_0857503c;
        if (*(uint *)(lVar18 + 0x18) <= uVar9) {
LAB_0857504c:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        uVar13 = *(undefined8 *)(lVar18 + (long)(int)uVar9 * 8 + 0x20);
        uVar9 = FUN_0858fd30(lVar12,0);
        if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_0857504c;
        if (lVar19 == 0) goto LAB_0857503c;
        uVar16 = *(undefined8 *)(lVar18 + (long)(int)uVar9 * 8 + 0x20);
LAB_085742bc:
        FUN_085a5e10(lVar19,uVar21,uVar13,uVar16,0);
      }
      puVar4 = PTR_DAT_0932c850;
      if (0xffffffe0 < in_stack_00000958 - 0xfbU) {
        lVar12 = *(long *)(unaff_x19 + 0x150);
        if (*(int *)(*(long *)PTR_DAT_0932c850 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (lVar12 == 0) goto LAB_0857503c;
        puVar17 = (undefined8 *)(lVar12 + 0xb8);
        *puVar17 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
        thunk_FUN_040ec700(puVar17);
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
  if ((in_stack_00000040 & 1) != 0) {
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
  uVar11 = FUN_083e7eb4(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar11 & 1) != 0) {
    FUN_08511854();
  }
  cVar3 = *(char *)(unaff_x20 + 0x1e0);
  iVar8 = FUN_08570428();
  if (iVar8 == 1) {
    lVar12 = *(long *)(unaff_x19 + 0x298);
    if (lVar12 == 0) goto LAB_0857503c;
    if ((*(char *)(lVar12 + 0x15) != '\0') &&
       ((in_stack_00000958 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_085916e8(lVar12,0);
    }
    in_stack_000001e8 = in_stack_00000020[1];
    in_stack_000001e0 = *in_stack_00000020;
    FUN_08575c08();
  }
  else {
    uVar10 = 2;
    if ((unaff_w26 & 1) == 0) {
      uVar10 = 0;
    }
    uVar2 = 0;
    if (1 < in_stack_00000968) {
      uVar2 = uVar10;
    }
    iVar8 = 0;
    if (((unaff_w29 | unaff_w26) & 1) == 0 && cVar3 != '\0') {
      iVar8 = 3;
    }
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_0857503c;
    uVar11 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar11 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_0857503c;
      if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x20) != '\0') {
        iVar8 = 0;
      }
    }
    uVar9 = 0;
    if (1 < in_stack_00000968) {
      uVar9 = unaff_w29;
    }
    if (uVar9 == 1) {
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar11 = FUN_0855a324(0);
      if ((uVar11 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (unaff_w26 & 1) == 0) {
          if (iVar8 == 0) {
            iVar8 = 2;
          }
          else if (iVar8 == 3) {
            iVar8 = 1;
          }
        }
      }
    }
    if (in_stack_00000040._4_4_ == 0) {
      lVar12 = *(long *)(unaff_x19 + 0x198);
      if (lVar12 == 0) goto LAB_0857503c;
    }
    else {
      lVar12 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar12 == 0) goto LAB_0857503c;
      FUN_085aa8d8(lVar12,*(undefined8 *)(unaff_x19 + 0x228),*(undefined8 *)(unaff_x19 + 0x270),
                   *(undefined8 *)(unaff_x19 + 0x238),0);
    }
    FUN_08505824(lVar12,uVar2,0,0);
    FUN_0850595c(lVar12,iVar8,0);
    puVar4 = PTR_DAT_0932efa0;
    lVar18 = *(long *)(unaff_x19 + 0x108);
    lVar19 = *(long *)PTR_DAT_0932efa0;
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar19 = *(long *)puVar4;
    }
    puVar17 = *(undefined8 **)(lVar19 + 0xb8);
    lVar23 = puVar17[2];
    if (lVar23 == 0) {
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        puVar17 = *(undefined8 **)(*(long *)PTR_DAT_0932efa0 + 0xb8);
      }
      uVar21 = *puVar17;
      lVar23 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ef88);
      FUN_061da510(lVar23,uVar21,*(undefined8 *)PTR_DAT_0932ef98,0);
      plVar20 = (long *)(*(long *)(*(long *)PTR_DAT_0932efa0 + 0xb8) + 0x10);
      *plVar20 = lVar23;
      thunk_FUN_040ec700(plVar20,lVar23);
      unaff_x28 = in_stack_00000050;
    }
    if (lVar18 == 0) goto LAB_0857503c;
    lVar19 = FUN_05c273e4(lVar18,lVar23,*(undefined8 *)PTR_DAT_0932ef80);
    if ((lVar19 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
      if (unaff_x28 == 0) goto LAB_0857503c;
      iVar8 = FUN_089791c8(unaff_x28,0);
      if (iVar8 == 4) goto LAB_085746d8;
      uVar10 = 1;
    }
    else {
LAB_085746d8:
      uVar10 = 0;
    }
    uVar11 = FUN_089d77f0(0);
    if ((uVar11 & 1) != 0) {
      FUN_08505e50(0,0,0,0x3f800000,lVar12,uVar10,0);
    }
    FUN_08511854();
  }
  if (unaff_x28 == 0) goto LAB_0857503c;
  iVar8 = FUN_089791c8(unaff_x28,0);
  if ((iVar8 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar21 = FUN_08992c4c(0);
    puVar4 = PTR_DAT_09285bb0;
    if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_09285bb0);
    }
    uVar11 = FUN_089ca704(uVar21,0,0);
    if ((uVar11 & 1) == 0) {
      uVar11 = FUN_04f38fe8(unaff_x28,&stack0x00000728,*(undefined8 *)PTR_DAT_0932ef78);
      if ((uVar11 & 1) != 0) {
        if (in_stack_00000728 == 0) goto LAB_0857503c;
        uVar21 = FUN_0899b330(in_stack_00000728,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*(long *)puVar4);
        }
        uVar11 = FUN_089ca704(uVar21,0,0);
        if ((uVar11 & 1) != 0) goto LAB_0857477c;
      }
    }
    else {
LAB_0857477c:
      FUN_08511854();
    }
  }
  if (unaff_w29 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) != 0) {
      unaff_w23 = 1;
    }
    if ((unaff_w23 & 1) == 0) {
      uVar11 = FUN_089d73c4(0);
      uVar21 = *(undefined8 *)PTR_DAT_0932d9b0;
      if ((uVar11 & 1) == 0) {
        uVar13 = FUN_089a58d8(0);
      }
      else {
        uVar13 = FUN_089a5960(0);
      }
      FUN_089942c4(uVar21,uVar13,0);
    }
  }
  else {
    iVar8 = FUN_08570428();
    if (((iVar8 != 1) || (*(char *)(unaff_x19 + 0x134) == '\0')) || ((in_stack_00000950 & 1) != 0))
    {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
      FUN_085a38d0(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x238),
                   *(undefined8 *)(unaff_x19 + 0x260),0);
      FUN_08511854();
    }
  }
  if ((unaff_w26 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_092871d8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar12 = FUN_08581e30(0);
    if (lVar12 == 0) goto LAB_0857503c;
    uVar10 = *(undefined4 *)(lVar12 + 0x48);
    FUN_085a2560(uVar10,&stack0x000006f0,&stack0x000006ec,0);
    if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0855b8d0(0,unaff_x19 + 0x278,&stack0x000006f0,in_stack_000006ec,1,1,
                 *(undefined8 *)PTR_DAT_0932d9b8,0);
    if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_0857503c;
    FUN_085a2600(*(long *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x19 + 0x228),
                 *(undefined8 *)(unaff_x19 + 0x278),uVar10,0);
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
  uVar9 = 0;
  if (cVar3 != '\0') {
    uVar9 = 3;
  }
  if (unaff_w29 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar9 = 0, 1 < in_stack_00000968))
    {
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar9 = FUN_0855a324(0);
      uVar9 = uVar9 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_0857503c;
  FUN_08505824(*(long *)(unaff_x19 + 0x1c8),
               (((in_stack_00000968 < 2 || cVar3 == '\0') | in_stack_00000068._4_1_) ^ 0xff) & 1,0,0
              );
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_0857503c;
  FUN_0850595c(*(long *)(unaff_x19 + 0x1c8),uVar9,0);
  FUN_08511854();
  FUN_08511854();
  FUN_08575d60();
  uVar11 = FUN_08518cf0();
  uVar14 = FUN_08518ab8();
  if (((uVar11 & 1) != 0) && ((uVar14 & 1) != 0)) {
    lVar12 = *(long *)(unaff_x19 + 0x200);
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_archive_query_t_application_stanza_namespace_get
              ();
    if (lVar12 == 0) goto LAB_0857503c;
    FUN_08524e38(lVar12);
    FUN_08511854();
  }
  bVar5 = cVar3 == '\0';
  bVar6 = *(long *)(unaff_x20 + 0x1b0) != 0;
  if ((bVar5 || ((in_stack_00000030._4_4_ ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar15 = FUN_08519004(), (uVar15 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    bVar7 = 0;
joined_r0x08574c60:
    if (!bVar6 || bVar5) goto LAB_08574c64;
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_delete_auto_accept_rule_t_base__get:
    bVar22 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar7 = FUN_084ee3f4(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x08574c60;
    }
    bVar7 = 1;
    if (bVar6 && !bVar5)
    goto 
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_delete_auto_accept_rule_t_base__get
    ;
LAB_08574c64:
    bVar22 = in_stack_00000060 == 0 & (bVar7 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar9 = 1;
  }
  else {
    uVar9 = FUN_084ee4e4(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar9 = uVar9 ^ 1;
  }
  plVar20 = (long *)(unaff_x19 + 0x228);
  plVar1 = (long *)(unaff_x19 + 0x238);
  if (in_stack_00000048 == 0) {
    if (cVar3 == '\0') {
      return;
    }
    FUN_08571d58();
  }
  else {
    uVar10 = FUN_089af740(&stack0x00000960,0);
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
    FUN_0852fb58(&stack0x000001a8,&stack0x00000170,in_stack_00000960,in_stack_00000964,uVar10,0,0);
    if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0855b8d0(0,unaff_x19 + 0x318,&stack0x00000630,0,1,1,*(undefined8 *)PTR_DAT_0932efb0,0);
    if (cVar3 == '\0') {
      if (*(long *)(unaff_x19 + 0x308) == 0) goto LAB_0857503c;
      FUN_0852d128(*(long *)(unaff_x19 + 0x308),&stack0x00000960,plVar20,0,plVar1,&stack0x00000730,
                   unaff_x19 + 0x280,0);
      goto LAB_08572d60;
    }
    FUN_08571d58();
    if (*(long *)(unaff_x19 + 0x308) == 0) goto LAB_0857503c;
    FUN_0852d128(*(long *)(unaff_x19 + 0x308),&stack0x00000960,plVar20,bVar22,plVar1,
                 &stack0x00000730,unaff_x19 + 0x280,bVar7 & 1);
    FUN_08511854();
  }
  lVar12 = *plVar20;
  if ((bVar7 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x310) == 0) goto LAB_0857503c;
    FUN_0852d270(*(long *)(unaff_x19 + 0x310),&stack0x00000628,1,uVar9 & 1,0);
    FUN_08511854();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_08511854();
  }
  if (((bVar7 & 1) == 0) &&
     (((in_stack_00000048 == 0 || (in_stack_00000060 != 0)) || (bVar6 && !bVar5)))) {
    lVar19 = *plVar20;
    if ((lVar19 == 0) || (lVar18 = *(long *)(unaff_x19 + 0x250), lVar18 == 0)) goto LAB_0857503c;
    in_stack_00000118 = *(undefined8 *)(lVar18 + 0x30);
    in_stack_00000110 = *(undefined8 *)(lVar18 + 0x28);
    in_stack_00000128 = *(undefined8 *)(lVar18 + 0x40);
    in_stack_00000120 = *(undefined8 *)(lVar18 + 0x38);
    in_stack_00000130 = *(undefined8 *)(lVar18 + 0x48);
    in_stack_00000148 = *(undefined8 *)(lVar19 + 0x30);
    in_stack_00000140 = *(undefined8 *)(lVar19 + 0x28);
    in_stack_00000158 = *(undefined8 *)(lVar19 + 0x40);
    in_stack_00000150 = *(undefined8 *)(lVar19 + 0x38);
    in_stack_00000160 = *(undefined8 *)(lVar19 + 0x48);
    uVar15 = FUN_089ea6c4(&stack0x00000140,&stack0x00000110,0);
    if ((uVar15 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_0857503c;
      in_stack_000000d8 = CONCAT44(in_stack_0000096c,in_stack_00000968);
      in_stack_000000d0 = CONCAT44(in_stack_00000964,in_stack_00000960);
      in_stack_000000e8 = CONCAT44(in_stack_0000097c,in_stack_00000978);
      in_stack_000000e0 = in_stack_00000970;
      in_stack_000000f0 = in_stack_00000980;
      in_stack_000000f8 = in_stack_00000988;
      in_stack_00000100 = in_stack_00000990;
      FUN_085abda4(*(long *)(unaff_x19 + 0x1d8),&stack0x000000d0,lVar12,0);
      FUN_08511854();
    }
  }
  if (((uVar11 & 1) != 0) && ((uVar14 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_08511854();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar11 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar11 & 1) == 0) {
      return;
    }
    lVar12 = *plVar1;
    if ((lVar12 != 0) && (lVar19 = *(long *)(unaff_x20 + 0x1a0), lVar19 != 0)) {
      in_stack_00000078 = *(undefined8 *)(lVar19 + 0x38);
      in_stack_00000070 = *(undefined8 *)(lVar19 + 0x30);
      in_stack_00000088 = *(undefined8 *)(lVar19 + 0x48);
      in_stack_00000080 = *(undefined8 *)(lVar19 + 0x40);
      in_stack_00000090 = *(undefined8 *)(lVar19 + 0x50);
      in_stack_000000a8 = *(undefined8 *)(lVar12 + 0x30);
      in_stack_000000a0 = *(undefined8 *)(lVar12 + 0x28);
      in_stack_000000b8 = *(undefined8 *)(lVar12 + 0x40);
      in_stack_000000b0 = *(undefined8 *)(lVar12 + 0x38);
      in_stack_000000c0 = *(undefined8 *)(lVar12 + 0x48);
      uVar11 = FUN_089ea6c4(&stack0x000000a0,&stack0x00000070,0);
      if ((uVar11 & 1) != 0) {
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


