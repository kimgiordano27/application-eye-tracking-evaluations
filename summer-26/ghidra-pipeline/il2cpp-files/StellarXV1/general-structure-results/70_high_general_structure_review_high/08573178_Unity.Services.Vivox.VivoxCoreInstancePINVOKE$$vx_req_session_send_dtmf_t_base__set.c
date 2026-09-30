/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_send_dtmf_t_base__set
ENTRY_POINT: 08573178
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_send_dtmf_t_base__set(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  uint in_w8;
  long lVar20;
  undefined8 *puVar21;
  int iVar22;
  uint uVar23;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar24;
  int unaff_w22;
  int unaff_w23;
  long lVar25;
  int unaff_w25;
  long lVar26;
  byte bVar27;
  uint unaff_w26;
  long lVar28;
  long lVar29;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  uint uStack000000000000001c;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000038;
  uint in_stack_00000040;
  uint uStack0000000000000044;
  int iStack0000000000000048;
  byte bStack000000000000004c;
  long in_stack_00000050;
  uint in_stack_00000058;
  uint uStack000000000000005c;
  long in_stack_00000060;
  ulong in_stack_00000068;
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
  undefined8 in_stack_000003c0;
  undefined4 in_stack_000006ec;
  long in_stack_00000728;
  undefined4 in_stack_0000073c;
  int in_stack_00000834;
  long in_stack_00000838;
  undefined4 in_stack_00000948;
  byte in_stack_00000950;
  byte in_stack_00000953;
  byte in_stack_00000955;
  int in_stack_00000958;
  int in_stack_0000095c;
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
  
  uStack000000000000005c = in_w8;
  if (unaff_w25 == 0) {
    if ((unaff_w23 == 0 & (bStack000000000000004c ^ 1)) == 0) {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
      bVar4 = false;
      *(undefined4 *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) = 500;
    }
    else {
      bVar4 = false;
    }
  }
  else {
    lVar20 = *(long *)(unaff_x19 + 0x1b0);
    if (lVar20 == 0) goto LAB_0857503c;
    iVar9 = in_stack_0000095c + -1;
    iVar22 = 500;
    if (*(int *)(unaff_x19 + 0x2a8) != 1) {
      iVar22 = 300;
    }
    if (499 < iVar9) {
      iVar9 = 500;
    }
    if ((in_stack_00000950 & 1) != 0) {
      iVar22 = iVar9;
    }
    *(int *)(lVar20 + 0x10) = iVar22;
    if (iVar22 < 500) {
      *(undefined1 *)(lVar20 + 0xd8) = 0;
      bVar4 = true;
      *(undefined4 *)(unaff_x19 + 0x2a8) = 0;
    }
    else {
      bVar4 = true;
    }
  }
  uVar8 = FUN_08575450();
  cVar3 = *(char *)(unaff_x20 + 0x1e0);
  uVar24 = 0;
  if (bVar4 || unaff_w22 != 0) {
    uVar24 = uStack000000000000005c ^ 1;
  }
  iVar9 = FUN_08570428();
  if (iVar9 == 1) {
    bVar7 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  else {
    bVar7 = 0;
  }
  uVar23 = unaff_w28;
  if ((bVar7 != 0 || *(char *)(unaff_x19 + 0x140) != '\0') || (cVar3 != '\x01' || uVar24 != 0)) {
    uVar23 = 1;
  }
  if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_0857503c;
  uVar24 = (unaff_w21 | unaff_w26 | uVar8) & (in_stack_00000068._4_4_ ^ 1);
  uStack000000000000001c = unaff_w29;
  uStack0000000000000044 = unaff_w28;
  uVar12 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0);
  uVar8 = uVar24 | uVar23;
  iVar9 = FUN_089d6e4c(0);
  puVar5 = PTR_DAT_09326d38;
  if (iVar9 == 0x15) {
    uVar10 = uVar8;
    if ((uVar12 & 1) == 0) {
      uVar10 = uVar24;
    }
    if (*(char *)(unaff_x19 + 0x2d4) != '\0') goto LAB_085732d0;
  }
  else {
LAB_085732d0:
    uVar10 = uVar8;
  }
  if (*(int *)(*(long *)PTR_DAT_09326d38 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0844aae0(&stack0x000003a0,0);
  if ((float)in_stack_000003c0 == 1.0) {
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0844aae0(&stack0x000003a0,0);
    if ((float)((ulong)in_stack_000003c0 >> 0x20) != 1.0) goto LAB_08573334;
  }
  else {
LAB_08573334:
    uVar10 = uVar8;
  }
  if ((*(char *)(unaff_x19 + 0x134) != '\0') || (*(char *)(unaff_x19 + 0x140) != '\0')) {
    uVar10 = uVar23 | uVar10;
  }
  uVar12 = FUN_089d6e9c(0);
  uVar24 = uVar23 | uVar10;
  uVar8 = uVar24;
  if ((uVar12 & 1) == 0) {
    uVar8 = uVar10;
  }
  FUN_089afec0(&stack0x00000910,0,0);
  FUN_089afedc(&stack0x00000910,0,0);
  if (*(long *)(unaff_x19 + 0x220) == 0) goto LAB_0857503c;
  plVar15 = (long *)(unaff_x19 + 0x220);
  FUN_085b2fd0(*(long *)(unaff_x19 + 0x220),&stack0x000005f0,1,0);
  if (*(int *)(unaff_x20 + 0xe8) == 0) {
    if (in_stack_00000050 == 0) goto LAB_0857503c;
    iVar9 = thunk_FUN_0897b814(in_stack_00000050,0);
    FUN_089ea1dc(&stack0x000003a0,2,0);
    if ((*(long *)(unaff_x20 + 0x1a0) == 0) ||
       ((uVar12 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0), (uVar12 & 1) != 0 &&
        (*(long *)(unaff_x20 + 0x1a0) == 0)))) goto LAB_0857503c;
    uVar23 = uVar24 & iVar9 != 1;
    puVar21 = (undefined8 *)(unaff_x19 + 0x250);
    if (*(long *)(unaff_x19 + 0x250) == 0) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar14 = FUN_08449f30(&stack0x000005c0,0);
      *puVar21 = uVar14;
      thunk_FUN_040ec700(puVar21,uVar14);
    }
    else {
      uVar12 = FUN_089ea6f4(&stack0x00000590,&stack0x00000560,0);
      if ((uVar12 & 1) != 0) {
        FUN_0844a000(puVar21,&stack0x00000530,0);
      }
    }
    puVar1 = (undefined8 *)(unaff_x19 + 600);
    if (*(long *)(unaff_x19 + 600) == 0) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar14 = FUN_08449f30(&stack0x00000500,0);
      *puVar1 = uVar14;
      thunk_FUN_040ec700(puVar1,uVar14);
    }
    else {
      uVar12 = FUN_089ea6f4(&stack0x000004d0,&stack0x000004a0,0);
      if ((uVar12 & 1) != 0) {
        FUN_0844a000(puVar1,&stack0x00000470,0);
      }
    }
    if (uVar23 != 0) {
      FUN_08575640();
    }
    if (*(long *)(unaff_x19 + 0x198) == 0) goto LAB_0857503c;
    bVar7 = (byte)uVar23 ^ 1;
    *(byte *)(*(long *)(unaff_x19 + 0x198) + 0x151) = bVar7;
    if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_0857503c;
    *(byte *)(*(long *)(unaff_x19 + 0x1c8) + 0x151) = bVar7;
    if (*(long *)(unaff_x19 + 0x1e8) == 0) goto LAB_0857503c;
    *(byte *)(*(long *)(unaff_x19 + 0x1e8) + 0xc0) = bVar7;
    if ((uVar8 & 1) == 0) {
      uVar14 = *puVar21;
    }
    else {
      if (*plVar15 == 0) goto LAB_0857503c;
      uVar14 = FUN_085b2bdc(*plVar15,0);
    }
    *(undefined8 *)(unaff_x19 + 0x228) = uVar14;
    thunk_FUN_040ec700(unaff_x19 + 0x228);
    lVar20 = 0x240;
    if ((uVar24 & 1) == 0) {
      lVar20 = 600;
    }
    *(undefined8 *)(unaff_x19 + 0x238) = *(undefined8 *)(unaff_x19 + lVar20);
    thunk_FUN_040ec700(unaff_x19 + 0x238);
  }
  else {
    if (((*(long *)(unaff_x20 + 0x230) == 0) ||
        (FUN_04f38fe8(*(long *)(unaff_x20 + 0x230),&stack0x00000838,*(undefined8 *)PTR_DAT_0932c828)
        , in_stack_00000838 == 0)) || (plVar13 = (long *)FUN_0856edc4(), plVar13 == (long *)0x0))
    goto LAB_0857503c;
    if (*plVar13 != *(long *)PTR_DAT_0932c850) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar13);
    }
    lVar20 = *plVar15;
    if (lVar20 != plVar13[0x44]) {
      if (lVar20 == 0) goto LAB_0857503c;
      FUN_085b2b88(lVar20,0);
      *plVar15 = plVar13[0x44];
      thunk_FUN_040ec700(plVar15);
      lVar20 = *plVar15;
    }
    if (lVar20 == 0) goto LAB_0857503c;
    uVar14 = FUN_085b2bdc(lVar20,0);
    *(undefined8 *)(unaff_x19 + 0x228) = uVar14;
    thunk_FUN_040ec700(unaff_x19 + 0x228,uVar14);
    *(long *)(unaff_x19 + 0x238) = plVar13[0x47];
    thunk_FUN_040ec700(unaff_x19 + 0x238);
    *(long *)(unaff_x19 + 0x250) = plVar13[0x4a];
    thunk_FUN_040ec700(unaff_x19 + 0x250);
    *(long *)(unaff_x19 + 600) = plVar13[0x4b];
    thunk_FUN_040ec700(unaff_x19 + 600);
    uVar24 = uVar23;
  }
  if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_0857503c;
  if (*(int *)(*(long *)(unaff_x19 + 0x110) + 0x18) != 0 && (in_stack_00000068 & 0x100000000) == 0)
  {
    if (*plVar15 == 0) goto LAB_0857503c;
    uVar14 = FUN_085b2bdc(*plVar15,0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar14;
    thunk_FUN_040ec700(unaff_x19 + 0x118,uVar14);
  }
  cVar3 = *(char *)(unaff_x20 + 0x191);
  FUN_0850cd8c();
  iVar9 = FUN_089d6e4c(0);
  if (iVar9 == 2) {
    FUN_08447f84(&stack0x000003a0,*(undefined8 *)(unaff_x19 + 0x240),0);
    FUN_08447f84(&stack0x000001a8,*(undefined8 *)(unaff_x19 + 0x248),0);
    if (in_stack_00000060 == 0) goto LAB_0857503c;
    FUN_089fb9ac(in_stack_00000060,&stack0x00000440,&stack0x00000410,0);
  }
  puVar5 = PTR_DAT_0932efa0;
  lVar25 = *(long *)(unaff_x19 + 0x108);
  lVar20 = *(long *)PTR_DAT_0932efa0;
  if (*(int *)(lVar20 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar20 = *(long *)puVar5;
  }
  puVar21 = *(undefined8 **)(lVar20 + 0xb8);
  lVar28 = puVar21[1];
  if (lVar28 == 0) {
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar21 = *(undefined8 **)(*(long *)PTR_DAT_0932efa0 + 0xb8);
    }
    uVar14 = *puVar21;
    lVar28 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ef88);
    FUN_061da510(lVar28,uVar14,*(undefined8 *)PTR_DAT_0932ef90,0);
    plVar15 = (long *)(*(long *)(*(long *)PTR_DAT_0932efa0 + 0xb8) + 8);
    *plVar15 = lVar28;
    thunk_FUN_040ec700(plVar15,lVar28);
  }
  if (lVar25 == 0) goto LAB_0857503c;
  lVar20 = FUN_05c273e4(lVar25,lVar28,*(undefined8 *)PTR_DAT_0932ef80);
  if ((in_stack_00000038 & 0x100000000) != 0) {
    FUN_08511854();
  }
  if ((in_stack_00000058 & 1) != 0) {
    FUN_08511854();
  }
  uVar23 = uStack000000000000005c;
  uVar8 = (uint)(cVar3 != '\0' | in_stack_00000953) & (in_stack_00000068._4_4_ ^ 1);
  if ((uStack000000000000005c & 1) == 0) {
    if (*(char *)(unaff_x20 + 400) == '\0' && unaff_w22 == 0) {
      bVar7 = in_stack_00000950 & 1;
    }
    else {
      bVar7 = 1;
    }
  }
  else {
    bVar7 = 0;
  }
  lVar25 = *(long *)(unaff_x19 + 0xe8);
  uVar24 = uVar24 & bVar7 != 0;
  if (lVar25 != 0) {
    uVar10 = FUN_085189ec();
    uVar12 = FUN_084eea60(lVar25,uVar10 & 1,0);
    if ((uVar12 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_0857503c;
      FUN_084eea88(*(long *)(unaff_x19 + 0xe8),&stack0x00000834,0);
      if (in_stack_00000834 == 1) {
        uVar23 = 1;
      }
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_0857503c;
      uVar12 = FUN_084ee410(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar12 & 1) == 0) && ((_iStack0000000000000048 & 0x100000000) == 0)) {
        uVar24 = 0;
        uVar8 = 0;
        uVar23 = 0;
        in_stack_00000040 = 0;
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
  iVar9 = FUN_08570428();
  if (iVar9 == 1) {
    lVar25 = *(long *)(unaff_x19 + 0x298);
    if (lVar25 == 0) goto LAB_0857503c;
    if ((*(char *)(lVar25 + 0x15) != '\0') &&
       ((in_stack_00000958 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_085916e8(lVar25,0);
    }
  }
  iVar9 = FUN_08570428();
  if (iVar9 == 1) {
    bVar7 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  else {
    bVar7 = 0;
  }
  if (bVar7 != 0 || (uVar23 != 0 || uVar24 != 0)) {
    if ((uVar23 == 0) || (iVar9 = FUN_08570428(), iVar9 == 1)) {
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
    lVar25 = *(long *)(unaff_x19 + 0x260);
    if ((lVar25 == 0) || (in_stack_00000060 == 0)) goto LAB_0857503c;
    FUN_089fc120(in_stack_00000060,*(undefined8 *)(lVar25 + 0x58),&stack0x000003e0,0);
    if (*(int *)(*(long *)PTR_DAT_09327f08 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08a06884(&stack0x000009a8,in_stack_00000060,0);
    FUN_089f0620(in_stack_00000060,0);
  }
  if ((in_stack_00000038 & 1) == 0) {
    iVar9 = FUN_08570428();
    puVar21 = (undefined8 *)PTR_DAT_0932e3e0;
    if (iVar9 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar12 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      puVar21 = (undefined8 *)PTR_DAT_0932e3e0;
      if ((uVar12 & 1) != 0) goto LAB_08573bb0;
    }
  }
  else {
LAB_08573bb0:
    puVar5 = PTR_DAT_0932efa8;
    plVar15 = (long *)(unaff_x19 + 0x270);
    uVar14 = *(undefined8 *)PTR_DAT_0932efa8;
    iVar9 = FUN_08570428();
    if (iVar9 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar12 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      if ((uVar12 & 1) != 0) {
        lVar25 = *(long *)(unaff_x19 + 0x298);
        if (lVar25 == 0) goto LAB_0857503c;
        lVar28 = *(long *)(lVar25 + 0x30);
        uVar10 = FUN_0858fd30(lVar25,0);
        if (lVar28 == 0) goto LAB_0857503c;
        if (*(uint *)(lVar28 + 0x18) <= uVar10) goto LAB_0857504c;
        plVar15 = (long *)(lVar28 + (long)(int)uVar10 * 8 + 0x20);
        if (*plVar15 == 0) goto LAB_0857503c;
        uVar14 = *(undefined8 *)(*plVar15 + 0x58);
      }
    }
    iVar9 = FUN_08570428();
    if (iVar9 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar12 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      if ((uVar12 & 1) == 0) goto LAB_08573cd0;
      lVar25 = *(long *)(unaff_x19 + 0x298);
      if (lVar25 == 0) goto LAB_0857503c;
      uVar11 = FUN_0858fd30(lVar25,0);
      uVar11 = FUN_0858fe3c(lVar25,uVar11,0);
    }
    else {
LAB_08573cd0:
      uVar11 = FUN_08557684(in_stack_00000948,0);
    }
    FUN_089af748(&stack0x000007c0,uVar11,0);
    iVar9 = FUN_08570428();
    if (iVar9 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar12 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      if ((uVar12 & 1) == 0) goto LAB_08573d70;
      lVar25 = *(long *)(unaff_x19 + 0x298);
      if (lVar25 == 0) goto LAB_0857503c;
      uVar11 = FUN_0858fd30(lVar25,0);
      FUN_0859177c(lVar25,&stack0x00000360,uVar11,0);
    }
    else {
LAB_08573d70:
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0855b8d0(0,plVar15,&stack0x000007c0,0,1,1,uVar14,0);
    }
    if ((*plVar15 == 0) || (in_stack_00000060 == 0)) goto LAB_0857503c;
    FUN_089fc120(in_stack_00000060,*(undefined8 *)(*plVar15 + 0x58),&stack0x00000330,0);
    puVar6 = PTR_DAT_093247c0;
    if (*(int *)(*(long *)PTR_DAT_093247c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (DAT_0989d7e8 == '\0') {
      FUN_04077588(PTR_DAT_093247c0);
      DAT_0989d7e8 = '\x01';
    }
    lVar25 = *(long *)puVar6;
    if (*(int *)(lVar25 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar25 = *(long *)puVar6;
    }
    if (**(long **)(lVar25 + 0xb8) == 0) goto LAB_0857503c;
    plVar13 = (long *)(**(long **)(lVar25 + 0xb8) + 0x10);
    *plVar13 = in_stack_00000060;
    thunk_FUN_040ec700(plVar13,in_stack_00000060);
    FUN_08557570(**(undefined8 **)(*(long *)puVar6 + 0xb8),in_stack_00000948,0);
    iVar9 = FUN_08570428();
    if (iVar9 == 1) {
      if (*plVar15 == 0) goto LAB_0857503c;
      FUN_089fc120(in_stack_00000060,*(undefined8 *)puVar5,&stack0x00000300,0);
    }
    if (*(int *)(*(long *)PTR_DAT_09327f08 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08a06884(&stack0x000009a8,in_stack_00000060,0);
    FUN_089f0620(in_stack_00000060,0);
    puVar21 = (undefined8 *)PTR_DAT_0932e3e0;
  }
  PTR_DAT_0932e3e0 = (undefined *)puVar21;
  if (uVar23 != 0) {
    if ((uStack000000000000001c & 1) == 0) {
      iVar9 = FUN_08570428();
      if (iVar9 == 1) goto LAB_0857435c;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_0857503c;
      FUN_085a7844(*(long *)(unaff_x19 + 0x148),&stack0x00000220,*(undefined8 *)(unaff_x19 + 0x260),
                   0);
    }
    else {
      uVar14 = *puVar21;
      iVar9 = FUN_08570428();
      if (iVar9 == 1) {
        lVar25 = *(long *)(unaff_x19 + 0x298);
        if (lVar25 == 0) goto LAB_0857503c;
        lVar28 = *(long *)(lVar25 + 0x30);
        uVar10 = FUN_0858fd0c(lVar25,0);
        if (lVar28 == 0) goto LAB_0857503c;
        if (*(uint *)(lVar28 + 0x18) <= uVar10) goto LAB_0857504c;
        plVar15 = (long *)(lVar28 + (long)(int)uVar10 * 8 + 0x20);
        if (*plVar15 == 0) goto LAB_0857503c;
        uVar14 = *(undefined8 *)(*plVar15 + 0x58);
      }
      else {
        plVar15 = (long *)(unaff_x19 + 0x268);
      }
      iVar9 = FUN_08570428();
      if (iVar9 == 1) {
        lVar25 = *(long *)(unaff_x19 + 0x298);
        if (lVar25 == 0) goto LAB_0857503c;
        uVar11 = FUN_0858fd0c(lVar25,0);
        uVar11 = FUN_0858fe3c(lVar25,uVar11,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0932eec8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar11 = FUN_085a5d90(0);
      }
      FUN_089af748(&stack0x00000780,uVar11,0);
      iVar9 = FUN_08570428();
      if (iVar9 == 1) {
        lVar25 = *(long *)(unaff_x19 + 0x298);
        if (lVar25 == 0) goto LAB_0857503c;
        uVar11 = FUN_0858fd0c(lVar25,0);
        FUN_0859177c(lVar25,&stack0x000002c0,uVar11,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_0855b8d0(0,plVar15,&stack0x00000780,0,1,1,uVar14,0);
      }
      if ((*plVar15 == 0) || (in_stack_00000060 == 0)) goto LAB_0857503c;
      FUN_089fc120(in_stack_00000060,*(undefined8 *)(*plVar15 + 0x58),&stack0x00000290,0);
      iVar9 = FUN_08570428();
      if (iVar9 == 1) {
        if (*plVar15 == 0) goto LAB_0857503c;
        FUN_089fc120(in_stack_00000060,*puVar21,&stack0x00000260,0);
      }
      if (*(int *)(*(long *)PTR_DAT_09327f08 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_08a06884(&stack0x000009a8,in_stack_00000060,0);
      FUN_089f0620(in_stack_00000060,0);
      iVar9 = FUN_08570428();
      if (iVar9 != 1) {
        lVar25 = *(long *)(unaff_x19 + 0x150);
        if (in_stack_00000028._4_4_ == 0) {
          if (lVar25 == 0) goto LAB_0857503c;
          FUN_085a5dd8(lVar25,*(undefined8 *)(unaff_x19 + 0x260),*(undefined8 *)(unaff_x19 + 0x268),
                       0);
        }
        else {
          if (lVar25 == 0) goto LAB_0857503c;
          FUN_085a5e10(lVar25,*(undefined8 *)(unaff_x19 + 0x260),*(undefined8 *)(unaff_x19 + 0x268),
                       *(undefined8 *)(unaff_x19 + 0x270),0);
        }
        goto LAB_0857434c;
      }
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar10 = FUN_0858fd0c(*(long *)(unaff_x19 + 0x298),0);
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar12 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      lVar28 = *(long *)(unaff_x19 + 0x150);
      uVar14 = *(undefined8 *)(unaff_x19 + 0x238);
      lVar25 = *(long *)(unaff_x19 + 0x298);
      if ((uVar12 & 1) == 0) {
        if (in_stack_00000028._4_4_ != 0) {
          if ((lVar25 == 0) || (lVar25 = *(long *)(lVar25 + 0x30), lVar25 == 0)) goto LAB_0857503c;
          if (*(uint *)(lVar25 + 0x18) <= uVar10) goto LAB_0857504c;
          if (lVar28 == 0) goto LAB_0857503c;
          uVar19 = *(undefined8 *)(unaff_x19 + 0x270);
          uVar16 = *(undefined8 *)(lVar25 + (long)(int)uVar10 * 8 + 0x20);
          goto LAB_085742bc;
        }
        if ((lVar25 == 0) || (lVar25 = *(long *)(lVar25 + 0x30), lVar25 == 0)) goto LAB_0857503c;
        if (*(uint *)(lVar25 + 0x18) <= uVar10) goto LAB_0857504c;
        if (lVar28 == 0) goto LAB_0857503c;
        FUN_085a5dd8(lVar28,uVar14,*(undefined8 *)(lVar25 + (long)(int)uVar10 * 8 + 0x20),0);
      }
      else {
        if ((lVar25 == 0) || (lVar26 = *(long *)(lVar25 + 0x30), lVar26 == 0)) goto LAB_0857503c;
        if (*(uint *)(lVar26 + 0x18) <= uVar10) {
LAB_0857504c:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        uVar16 = *(undefined8 *)(lVar26 + (long)(int)uVar10 * 8 + 0x20);
        uVar10 = FUN_0858fd30(lVar25,0);
        if (*(uint *)(lVar26 + 0x18) <= uVar10) goto LAB_0857504c;
        if (lVar28 == 0) goto LAB_0857503c;
        uVar19 = *(undefined8 *)(lVar26 + (long)(int)uVar10 * 8 + 0x20);
LAB_085742bc:
        FUN_085a5e10(lVar28,uVar14,uVar16,uVar19,0);
      }
      puVar5 = PTR_DAT_0932c850;
      if (0xffffffe0 < in_stack_00000958 - 0xfbU) {
        lVar25 = *(long *)(unaff_x19 + 0x150);
        if (*(int *)(*(long *)PTR_DAT_0932c850 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (lVar25 == 0) goto LAB_0857503c;
        puVar21 = (undefined8 *)(lVar25 + 0xb8);
        *puVar21 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
        thunk_FUN_040ec700(puVar21);
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
  uVar12 = FUN_083e7eb4(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar12 & 1) != 0) {
    FUN_08511854();
  }
  bVar7 = *(byte *)(unaff_x20 + 0x1e0);
  iVar9 = FUN_08570428();
  if (iVar9 == 1) {
    lVar25 = *(long *)(unaff_x19 + 0x298);
    if (lVar25 == 0) goto LAB_0857503c;
    if ((*(char *)(lVar25 + 0x15) != '\0') &&
       ((in_stack_00000958 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_085916e8(lVar25,0);
    }
    in_stack_000001e8 = in_stack_00000020[1];
    in_stack_000001e0 = *in_stack_00000020;
    FUN_08575c08();
    uVar10 = (uint)bVar7;
  }
  else {
    uStack000000000000005c = (uint)bVar7;
    uVar11 = 2;
    if ((uVar8 & 1) == 0) {
      uVar11 = 0;
    }
    uVar2 = 0;
    if (1 < in_stack_00000968) {
      uVar2 = uVar11;
    }
    iVar9 = 0;
    if ((uVar24 == 0 && (uVar8 & 1) == 0) && uStack000000000000005c != 0) {
      iVar9 = 3;
    }
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_0857503c;
    uVar12 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar12 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_0857503c;
      if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x20) != '\0') {
        iVar9 = 0;
      }
    }
    uVar10 = 0;
    if (1 < in_stack_00000968) {
      uVar10 = uVar24;
    }
    if (uVar10 == 1) {
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar12 = FUN_0855a324(0);
      if ((uVar12 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (uVar8 & 1) == 0) {
          if (iVar9 == 0) {
            iVar9 = 2;
          }
          else if (iVar9 == 3) {
            iVar9 = 1;
          }
        }
      }
    }
    if (uStack0000000000000044 == 0) {
      lVar25 = *(long *)(unaff_x19 + 0x198);
      if (lVar25 == 0) goto LAB_0857503c;
    }
    else {
      lVar25 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar25 == 0) goto LAB_0857503c;
      FUN_085aa8d8(lVar25,*(undefined8 *)(unaff_x19 + 0x228),*(undefined8 *)(unaff_x19 + 0x270),
                   *(undefined8 *)(unaff_x19 + 0x238),0);
    }
    FUN_08505824(lVar25,uVar2,0,0);
    FUN_0850595c(lVar25,iVar9,0);
    puVar5 = PTR_DAT_0932efa0;
    lVar26 = *(long *)(unaff_x19 + 0x108);
    lVar28 = *(long *)PTR_DAT_0932efa0;
    if (*(int *)(lVar28 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar28 = *(long *)puVar5;
    }
    puVar21 = *(undefined8 **)(lVar28 + 0xb8);
    lVar29 = puVar21[2];
    if (lVar29 == 0) {
      if (*(int *)(lVar28 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        puVar21 = *(undefined8 **)(*(long *)PTR_DAT_0932efa0 + 0xb8);
      }
      uVar14 = *puVar21;
      lVar29 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ef88);
      FUN_061da510(lVar29,uVar14,*(undefined8 *)PTR_DAT_0932ef98,0);
      plVar15 = (long *)(*(long *)(*(long *)PTR_DAT_0932efa0 + 0xb8) + 0x10);
      *plVar15 = lVar29;
      thunk_FUN_040ec700(plVar15,lVar29);
    }
    if (lVar26 == 0) goto LAB_0857503c;
    lVar28 = FUN_05c273e4(lVar26,lVar29,*(undefined8 *)PTR_DAT_0932ef80);
    if ((lVar28 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
      if (in_stack_00000050 == 0) goto LAB_0857503c;
      iVar9 = FUN_089791c8(in_stack_00000050,0);
      if (iVar9 == 4) goto LAB_085746d8;
      uVar11 = 1;
    }
    else {
LAB_085746d8:
      uVar11 = 0;
    }
    uVar12 = FUN_089d77f0(0);
    if ((uVar12 & 1) != 0) {
      FUN_08505e50(0,0,0,0x3f800000,lVar25,uVar11,0);
    }
    FUN_08511854();
    uVar10 = uStack000000000000005c;
  }
  if (in_stack_00000050 == 0) goto LAB_0857503c;
  iVar9 = FUN_089791c8(in_stack_00000050,0);
  if ((iVar9 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar14 = FUN_08992c4c(0);
    puVar5 = PTR_DAT_09285bb0;
    if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_09285bb0);
    }
    uVar12 = FUN_089ca704(uVar14,0,0);
    if ((uVar12 & 1) == 0) {
      uVar12 = FUN_04f38fe8(in_stack_00000050,&stack0x00000728,*(undefined8 *)PTR_DAT_0932ef78);
      if ((uVar12 & 1) != 0) {
        if (in_stack_00000728 == 0) goto LAB_0857503c;
        uVar14 = FUN_0899b330(in_stack_00000728,0);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*(long *)puVar5);
        }
        uVar12 = FUN_089ca704(uVar14,0,0);
        if ((uVar12 & 1) != 0) goto LAB_0857477c;
      }
    }
    else {
LAB_0857477c:
      FUN_08511854();
    }
  }
  if (uVar24 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) != 0) {
      uVar23 = 1;
    }
    if ((uVar23 & 1) == 0) {
      uVar12 = FUN_089d73c4(0);
      uVar14 = *(undefined8 *)PTR_DAT_0932d9b0;
      if ((uVar12 & 1) == 0) {
        uVar16 = FUN_089a58d8(0);
      }
      else {
        uVar16 = FUN_089a5960(0);
      }
      FUN_089942c4(uVar14,uVar16,0);
    }
  }
  else {
    iVar9 = FUN_08570428();
    if (((iVar9 != 1) || (*(char *)(unaff_x19 + 0x134) == '\0')) || ((in_stack_00000950 & 1) != 0))
    {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
      FUN_085a38d0(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x238),
                   *(undefined8 *)(unaff_x19 + 0x260),0);
      FUN_08511854();
    }
  }
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_092871d8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar25 = FUN_08581e30(0);
    if (lVar25 == 0) goto LAB_0857503c;
    uVar11 = *(undefined4 *)(lVar25 + 0x48);
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
    FUN_0852bae0(in_stack_00000060);
    if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_0857503c;
    FUN_0852a4bc(*(long *)(unaff_x19 + 0x160),*(undefined8 *)(unaff_x19 + 0x280),
                 *(undefined8 *)(unaff_x19 + 0x288),0);
    FUN_08511854();
  }
  if ((unaff_w27 & 1) != 0) {
    FUN_08511854();
  }
  uVar8 = 0;
  if (uVar10 != 0) {
    uVar8 = 3;
  }
  uVar23 = (uint)(uVar10 == 0);
  if (in_stack_00000968 < 2) {
    uVar23 = 1;
  }
  if (uVar24 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar8 = 0, 1 < in_stack_00000968))
    {
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar8 = FUN_0855a324(0);
      uVar8 = uVar8 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_0857503c;
  FUN_08505824(*(long *)(unaff_x19 + 0x1c8),((uVar23 | in_stack_00000068._4_4_) ^ 0xffffffff) & 1,0,
               0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_0857503c;
  FUN_0850595c(*(long *)(unaff_x19 + 0x1c8),uVar8,0);
  FUN_08511854();
  FUN_08511854();
  FUN_08575d60();
  uVar12 = FUN_08518cf0();
  uVar17 = FUN_08518ab8();
  if (((uVar12 & 1) != 0) && ((uVar17 & 1) != 0)) {
    lVar25 = *(long *)(unaff_x19 + 0x200);
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_archive_query_t_application_stanza_namespace_get
              ();
    if (lVar25 == 0) goto LAB_0857503c;
    FUN_08524e38(lVar25);
    FUN_08511854();
  }
  uVar24 = (uint)(uVar10 == 0);
  if (*(long *)(unaff_x20 + 0x1b0) == 0) {
    uVar24 = 1;
  }
  if (((uVar10 == 0) != 0 || ((in_stack_00000030._4_4_ ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar18 = FUN_08519004(), (uVar18 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    bVar7 = 0;
joined_r0x08574c60:
    if (uVar24 != 0) goto LAB_08574c64;
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_delete_auto_accept_rule_t_base__get:
    bVar27 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar7 = FUN_084ee3f4(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x08574c60;
    }
    bVar7 = 1;
    if (uVar24 == 0)
    goto 
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_delete_auto_accept_rule_t_base__get
    ;
LAB_08574c64:
    bVar27 = lVar20 == 0 & (bVar7 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar8 = 1;
  }
  else {
    uVar8 = FUN_084ee4e4(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar8 = uVar8 ^ 1;
  }
  plVar15 = (long *)(unaff_x19 + 0x228);
  plVar13 = (long *)(unaff_x19 + 0x238);
  if (iStack0000000000000048 == 0) {
    if (uVar10 == 0) {
      return;
    }
    FUN_08571d58();
  }
  else {
    uStack000000000000005c = uVar24;
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
    if (uVar10 == 0) {
      if (*(long *)(unaff_x19 + 0x308) == 0) goto LAB_0857503c;
      FUN_0852d128(*(long *)(unaff_x19 + 0x308),&stack0x00000960,plVar15,0,plVar13,&stack0x00000730,
                   unaff_x19 + 0x280,0);
      goto LAB_08572d60;
    }
    FUN_08571d58();
    if (*(long *)(unaff_x19 + 0x308) == 0) goto LAB_0857503c;
    FUN_0852d128(*(long *)(unaff_x19 + 0x308),&stack0x00000960,plVar15,bVar27,plVar13,
                 &stack0x00000730,unaff_x19 + 0x280,bVar7 & 1);
    FUN_08511854();
    uVar24 = uStack000000000000005c;
  }
  lVar25 = *plVar15;
  if ((bVar7 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x310) == 0) goto LAB_0857503c;
    FUN_0852d270(*(long *)(unaff_x19 + 0x310),&stack0x00000628,1,uVar8 & 1,0);
    FUN_08511854();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_08511854();
  }
  if (((bVar7 & 1) == 0) && (((iStack0000000000000048 == 0 || (lVar20 != 0)) || (uVar24 != 1)))) {
    lVar20 = *plVar15;
    if ((lVar20 == 0) || (lVar28 = *(long *)(unaff_x19 + 0x250), lVar28 == 0)) goto LAB_0857503c;
    in_stack_00000118 = *(undefined8 *)(lVar28 + 0x30);
    in_stack_00000110 = *(undefined8 *)(lVar28 + 0x28);
    in_stack_00000128 = *(undefined8 *)(lVar28 + 0x40);
    in_stack_00000120 = *(undefined8 *)(lVar28 + 0x38);
    in_stack_00000130 = *(undefined8 *)(lVar28 + 0x48);
    in_stack_00000148 = *(undefined8 *)(lVar20 + 0x30);
    in_stack_00000140 = *(undefined8 *)(lVar20 + 0x28);
    in_stack_00000158 = *(undefined8 *)(lVar20 + 0x40);
    in_stack_00000150 = *(undefined8 *)(lVar20 + 0x38);
    in_stack_00000160 = *(undefined8 *)(lVar20 + 0x48);
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
      FUN_085abda4(*(long *)(unaff_x19 + 0x1d8),&stack0x000000d0,lVar25,0);
      FUN_08511854();
    }
  }
  if (((uVar12 & 1) != 0) && ((uVar17 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_08511854();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar12 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar12 & 1) == 0) {
      return;
    }
    lVar20 = *plVar13;
    if ((lVar20 != 0) && (lVar25 = *(long *)(unaff_x20 + 0x1a0), lVar25 != 0)) {
      in_stack_00000078 = *(undefined8 *)(lVar25 + 0x38);
      in_stack_00000070 = *(undefined8 *)(lVar25 + 0x30);
      in_stack_00000088 = *(undefined8 *)(lVar25 + 0x48);
      in_stack_00000080 = *(undefined8 *)(lVar25 + 0x40);
      in_stack_00000090 = *(undefined8 *)(lVar25 + 0x50);
      in_stack_000000a8 = *(undefined8 *)(lVar20 + 0x30);
      in_stack_000000a0 = *(undefined8 *)(lVar20 + 0x28);
      in_stack_000000b8 = *(undefined8 *)(lVar20 + 0x40);
      in_stack_000000b0 = *(undefined8 *)(lVar20 + 0x38);
      in_stack_000000c0 = *(undefined8 *)(lVar20 + 0x48);
      uVar12 = FUN_089ea6c4(&stack0x000000a0,&stack0x00000070,0);
      if ((uVar12 & 1) != 0) {
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


