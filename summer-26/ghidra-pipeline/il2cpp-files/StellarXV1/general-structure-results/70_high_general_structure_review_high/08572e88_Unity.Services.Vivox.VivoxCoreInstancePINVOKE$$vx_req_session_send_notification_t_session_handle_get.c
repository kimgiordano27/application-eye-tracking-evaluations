/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_send_notification_t_session_handle_get
ENTRY_POINT: 08572e88
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_8
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_send_notification_t_session_handle_get
               (void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 uVar24;
  long *plVar25;
  undefined8 uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 uVar29;
  byte bVar30;
  undefined8 *puVar31;
  int iVar32;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  char cVar33;
  uint uVar34;
  long lVar35;
  byte unaff_w25;
  char cVar36;
  long lVar37;
  uint unaff_w26;
  long lVar38;
  long lVar39;
  undefined8 unaff_x28;
  undefined8 *in_stack_00000020;
  int iStack000000000000002c;
  uint uStack0000000000000034;
  uint uStack0000000000000040;
  uint uStack000000000000004c;
  long in_stack_00000050;
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
  long in_stack_000003b0;
  undefined8 in_stack_000003c0;
  undefined4 in_stack_000006ec;
  long in_stack_00000728;
  undefined4 in_stack_0000073c;
  int in_stack_00000834;
  long in_stack_00000838;
  undefined4 in_stack_00000948;
  int in_stack_0000094c;
  byte in_stack_00000950;
  byte in_stack_00000951;
  byte in_stack_00000952;
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
  long in_stack_000009a0;
  
  iVar13 = FUN_089d6e4c(0);
  bVar12 = (byte)((ulong)unaff_x28 >> 0x10);
  if ((iVar13 == 0xb) || (iVar13 = FUN_089d6e4c(0), (iVar13 != 0x11 & unaff_w25) != 1)) {
    iStack000000000000002c = 0;
                    /* catch() { ... } // from try @ 08572e44 with catch @ 08572eec */
    uVar20 = 0;
    bVar10 = false;
  }
  else {
    iVar13 = FUN_08570428();
    if (iVar13 == 1) {
                    /* catch() { ... } // from try @ 08572e10 with catch @ 08572edc */
      uVar20 = 0;
                    /* try { // try from 08572ee0 to 08672f07 has its CatchHandler @ 08572f10 */
    }
    else {
      uVar20 = 1;
      if (in_stack_0000094c == 0) {
        in_stack_00000952 = 1;
        bVar12 = 1;
        bVar10 = true;
        uVar20 = 0;
        iStack000000000000002c = 1;
        goto LAB_08572ef0;
      }
      if (in_stack_0000094c != 1) {
        thunk_FUN_040dedf8(PTR_DAT_09288c08);
        uVar24 = thunk_FUN_040b4efc();
        FUN_075d60dc(uVar24,0);
        uVar26 = thunk_FUN_040dedf8(PTR_DAT_0932efd0);
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar24,uVar26);
      }
    }
    iStack000000000000002c = 0;
    bVar10 = true;
  }
LAB_08572ef0:
  lVar21 = *(long *)(unaff_x19 + 0x298);
  if (lVar21 != 0) {
                    /* catch() { ... } // from try @ 08572e78 with catch @ 08572efc */
    *(bool *)(lVar21 + 0x14) = bVar10;
                    /* try { // try from 08572f08 to 08672f13 has its CatchHandler @ 08572794 */
                    /* catch() { ... } // from try @ 08572ee0 with catch @ 08572f10 */
    *(byte *)(lVar21 + 0x17) = bVar12 & 1;
                    /* try { // try from 08572f14 to 08673223 has its CatchHandler @ 08572f14
                       catch() { ... } // from try @ 08572f14 with catch @ 08572f14
                       catch() { ... } // from try @ 08573380 with catch @ 08572f14
                       catch() { ... } // from try @ 085733bc with catch @ 08572f14
                       catch() { ... } // from try @ 0857344c with catch @ 08572f14
                       catch() { ... } // from try @ 085734a0 with catch @ 08572f14
                       catch() { ... } // from try @ 08573500 with catch @ 08572f14 */
    *(undefined4 *)(lVar21 + 0x10) = in_stack_00000948;
    FUN_0859128c();
    lVar21 = *(long *)(unaff_x19 + 0x298);
    if (lVar21 == 0) goto LAB_0857503c;
    *(bool *)(lVar21 + 0x19) = *(int *)(unaff_x20 + 0xe8) == 1;
    if (*(char *)(lVar21 + 0x15) != '\0') {
      if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_0857503c;
      FUN_05c27784(&stack0x000003a0,*(long *)(unaff_x19 + 0x108),*(undefined8 *)PTR_DAT_0932d278);
      puVar7 = PTR_DAT_0932d268;
      do {
        uVar22 = FUN_07161154(&stack0x00000870,*(undefined8 *)puVar7);
        if ((uVar22 & 1) == 0) goto LAB_08572fb4;
        if (in_stack_000003b0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
      } while (*(int *)(in_stack_000003b0 + 0x10) - 0xe7U < 0xfffffff5);
      if (*(long *)(unaff_x19 + 0x298) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_085916e8(*(long *)(unaff_x19 + 0x298),0);
LAB_08572fb4:
      FUN_07161150(&stack0x00000870,*(undefined8 *)PTR_DAT_0932d260);
    }
  }
  if (*(char *)(unaff_x20 + 0x1ac) == '\0') {
    uVar14 = 0;
  }
  else {
    uVar14 = FUN_0854e1b8(unaff_x19 + 0x300,0);
    uVar14 = uVar14 & 1;
  }
  if (in_stack_000009a0 == 0) goto LAB_0857503c;
  if (*(char *)(in_stack_000009a0 + 0x10) == '\0') {
    uStack0000000000000034 = 0;
    if (uVar14 == 0)
    goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_session_send_notification_t;
LAB_0857300c:
    cVar33 = *(char *)(unaff_x20 + 0x192);
  }
  else {
    uStack0000000000000034 = FUN_0854e1b8(unaff_x19 + 0x300,0);
    if (uVar14 != 0) goto LAB_0857300c;
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_session_send_notification_t:
    cVar33 = '\0';
  }
  if (*(char *)(unaff_x20 + 0x1ac) == '\0') {
    uStack0000000000000040 = 0;
  }
  else {
    uStack0000000000000040 = FUN_0854e1b8(unaff_x19 + 0x300,0);
  }
  uVar22 = FUN_085189dc();
  if ((uVar22 & 1) == 0) {
    uStack000000000000004c = FUN_085189ec();
  }
  else {
    uStack000000000000004c = 1;
  }
  if ((*(char *)(unaff_x20 + 400) == '\0') && ((in_stack_00000950 & 1) == 0)) {
    cVar36 = *(char *)(unaff_x19 + 0x140);
  }
  else {
    cVar36 = '\x01';
  }
  if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_0857503c;
  uVar15 = FUN_085aff74();
  if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_0857503c;
  uVar16 = FUN_08597924(*(long *)(unaff_x19 + 0x170));
  if (*(long *)(unaff_x19 + 0x1c0) == 0) goto LAB_0857503c;
  bVar9 = cVar33 != '\0';
  uVar17 = FUN_0854be1c(*(long *)(unaff_x19 + 0x1c0),0);
  if (cVar36 == '\0' && !bVar9) {
    cVar36 = '\0';
    uVar18 = 0;
  }
  else {
    iVar13 = *(int *)(unaff_x19 + 0x2a8);
    uVar18 = FUN_08572330();
    uVar18 = (uint)(iVar13 == 2) | uVar18 ^ 1;
  }
  if ((((uint)(in_stack_00000952 | in_stack_00000951) |
       in_stack_00000068._4_4_ | uVar18 | uStack000000000000004c) & 1) == 0) {
    bVar12 = 0;
  }
  else {
    iVar13 = FUN_08570428();
    if (iVar13 == 1) {
      bVar12 = in_stack_00000952 & 1;
    }
    else {
      bVar12 = 1;
    }
  }
  if (*(char *)(unaff_x19 + 0x140) != '\0') {
    bVar12 = 1;
  }
  if (cVar36 == '\0') {
    if (((uint)(cVar33 == '\0') & (uStack000000000000004c ^ 1)) == 0) {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
      bVar6 = false;
      *(undefined4 *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) = 500;
    }
    else {
      bVar6 = false;
    }
  }
  else {
    lVar21 = *(long *)(unaff_x19 + 0x1b0);
    if (lVar21 == 0) goto LAB_0857503c;
    iVar13 = in_stack_0000095c + -1;
    iVar32 = 500;
    if (*(int *)(unaff_x19 + 0x2a8) != 1) {
      iVar32 = 300;
    }
    if (499 < iVar13) {
      iVar13 = 500;
    }
    if ((in_stack_00000950 & 1) != 0) {
      iVar32 = iVar13;
    }
    *(int *)(lVar21 + 0x10) = iVar32;
    if (iVar32 < 500) {
      *(undefined1 *)(lVar21 + 0xd8) = 0;
      bVar6 = true;
      *(undefined4 *)(unaff_x19 + 0x2a8) = 0;
    }
    else {
      bVar6 = true;
    }
  }
  uVar18 = FUN_08575450();
  cVar33 = *(char *)(unaff_x20 + 0x1e0);
  bVar11 = 0;
  if (bVar6 || bVar9) {
    bVar11 = bVar12 ^ 1;
  }
  iVar13 = FUN_08570428();
  if (iVar13 == 1) {
    bVar30 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  else {
    bVar30 = 0;
  }
  uVar4 = uVar20;
  if ((bVar30 != 0 || *(char *)(unaff_x19 + 0x140) != '\0') || (cVar33 != '\x01' || bVar11 != 0)) {
    uVar4 = 1;
  }
  if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_0857503c;
  uVar18 = (unaff_w21 | unaff_w26 | uVar18) & (in_stack_00000068._4_4_ ^ 1);
  uVar22 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0);
  uVar5 = uVar18 | uVar4;
  iVar13 = FUN_089d6e4c(0);
  puVar7 = PTR_DAT_09326d38;
  if (iVar13 == 0x15) {
    uVar34 = uVar5;
    if ((uVar22 & 1) == 0) {
      uVar34 = uVar18;
    }
    if (*(char *)(unaff_x19 + 0x2d4) != '\0') goto LAB_085732d0;
  }
  else {
LAB_085732d0:
    uVar34 = uVar5;
  }
  if (*(int *)(*(long *)PTR_DAT_09326d38 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0844aae0(&stack0x000003a0,0);
  if ((float)in_stack_000003c0 == 1.0) {
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0844aae0(&stack0x000003a0,0);
    if ((float)((ulong)in_stack_000003c0 >> 0x20) != 1.0) goto LAB_08573334;
  }
  else {
LAB_08573334:
    uVar34 = uVar5;
  }
  if ((*(char *)(unaff_x19 + 0x134) != '\0') || (*(char *)(unaff_x19 + 0x140) != '\0')) {
    uVar34 = uVar4 | uVar34;
  }
  uVar22 = FUN_089d6e9c(0);
  uVar18 = uVar4 | uVar34;
  uVar5 = uVar18;
  if ((uVar22 & 1) == 0) {
    uVar5 = uVar34;
  }
  FUN_089afec0(&stack0x00000910,0,0);
  FUN_089afedc(&stack0x00000910,0,0);
  if (*(long *)(unaff_x19 + 0x220) == 0) goto LAB_0857503c;
  plVar25 = (long *)(unaff_x19 + 0x220);
  FUN_085b2fd0(*(long *)(unaff_x19 + 0x220),&stack0x000005f0,1,0);
  if (*(int *)(unaff_x20 + 0xe8) == 0) {
    if (in_stack_00000050 == 0) goto LAB_0857503c;
    iVar13 = thunk_FUN_0897b814(in_stack_00000050,0);
    FUN_089ea1dc(&stack0x000003a0,2,0);
    if ((*(long *)(unaff_x20 + 0x1a0) == 0) ||
       ((uVar22 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0), (uVar22 & 1) != 0 &&
        (*(long *)(unaff_x20 + 0x1a0) == 0)))) goto LAB_0857503c;
    uVar2 = uVar18 & iVar13 != 1;
    puVar31 = (undefined8 *)(unaff_x19 + 0x250);
    if (*(long *)(unaff_x19 + 0x250) == 0) {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar24 = FUN_08449f30(&stack0x000005c0,0);
      *puVar31 = uVar24;
      thunk_FUN_040ec700(puVar31,uVar24);
    }
    else {
      uVar22 = FUN_089ea6f4(&stack0x00000590,&stack0x00000560,0);
      if ((uVar22 & 1) != 0) {
        FUN_0844a000(puVar31,&stack0x00000530,0);
      }
    }
    puVar1 = (undefined8 *)(unaff_x19 + 600);
    if (*(long *)(unaff_x19 + 600) == 0) {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar24 = FUN_08449f30(&stack0x00000500,0);
      *puVar1 = uVar24;
      thunk_FUN_040ec700(puVar1,uVar24);
    }
    else {
      uVar22 = FUN_089ea6f4(&stack0x000004d0,&stack0x000004a0,0);
      if ((uVar22 & 1) != 0) {
        FUN_0844a000(puVar1,&stack0x00000470,0);
      }
    }
    if (uVar2 != 0) {
      FUN_08575640();
    }
    if (*(long *)(unaff_x19 + 0x198) == 0) goto LAB_0857503c;
    bVar11 = (byte)uVar2 ^ 1;
    *(byte *)(*(long *)(unaff_x19 + 0x198) + 0x151) = bVar11;
    if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_0857503c;
    *(byte *)(*(long *)(unaff_x19 + 0x1c8) + 0x151) = bVar11;
    if (*(long *)(unaff_x19 + 0x1e8) == 0) goto LAB_0857503c;
    *(byte *)(*(long *)(unaff_x19 + 0x1e8) + 0xc0) = bVar11;
    if ((uVar5 & 1) == 0) {
      uVar24 = *puVar31;
    }
    else {
      if (*plVar25 == 0) goto LAB_0857503c;
      uVar24 = FUN_085b2bdc(*plVar25,0);
    }
    *(undefined8 *)(unaff_x19 + 0x228) = uVar24;
    thunk_FUN_040ec700(unaff_x19 + 0x228);
    lVar21 = 0x240;
    if (uVar4 == 0 && (uVar34 & 1) == 0) {
      lVar21 = 600;
    }
    *(undefined8 *)(unaff_x19 + 0x238) = *(undefined8 *)(unaff_x19 + lVar21);
    thunk_FUN_040ec700(unaff_x19 + 0x238);
  }
  else {
    if (((*(long *)(unaff_x20 + 0x230) == 0) ||
        (FUN_04f38fe8(*(long *)(unaff_x20 + 0x230),&stack0x00000838,*(undefined8 *)PTR_DAT_0932c828)
        , in_stack_00000838 == 0)) || (plVar23 = (long *)FUN_0856edc4(), plVar23 == (long *)0x0))
    goto LAB_0857503c;
    if (*plVar23 != *(long *)PTR_DAT_0932c850) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar23);
    }
    lVar21 = *plVar25;
    if (lVar21 != plVar23[0x44]) {
      if (lVar21 == 0) goto LAB_0857503c;
      FUN_085b2b88(lVar21,0);
      *plVar25 = plVar23[0x44];
      thunk_FUN_040ec700(plVar25);
      lVar21 = *plVar25;
    }
    if (lVar21 == 0) goto LAB_0857503c;
    uVar24 = FUN_085b2bdc(lVar21,0);
    *(undefined8 *)(unaff_x19 + 0x228) = uVar24;
    thunk_FUN_040ec700(unaff_x19 + 0x228,uVar24);
    *(long *)(unaff_x19 + 0x238) = plVar23[0x47];
    thunk_FUN_040ec700(unaff_x19 + 0x238);
    *(long *)(unaff_x19 + 0x250) = plVar23[0x4a];
    thunk_FUN_040ec700(unaff_x19 + 0x250);
    *(long *)(unaff_x19 + 600) = plVar23[0x4b];
    thunk_FUN_040ec700(unaff_x19 + 600);
    uVar18 = uVar4;
  }
  if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_0857503c;
  if (*(int *)(*(long *)(unaff_x19 + 0x110) + 0x18) != 0 && (in_stack_00000068 & 0x100000000) == 0)
  {
    if (*plVar25 == 0) goto LAB_0857503c;
    uVar24 = FUN_085b2bdc(*plVar25,0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar24;
    thunk_FUN_040ec700(unaff_x19 + 0x118,uVar24);
  }
  cVar33 = *(char *)(unaff_x20 + 0x191);
  FUN_0850cd8c();
  iVar13 = FUN_089d6e4c(0);
  if (iVar13 == 2) {
    FUN_08447f84(&stack0x000003a0,*(undefined8 *)(unaff_x19 + 0x240),0);
    FUN_08447f84(&stack0x000001a8,*(undefined8 *)(unaff_x19 + 0x248),0);
    if (in_stack_00000060 == 0) goto LAB_0857503c;
    FUN_089fb9ac(in_stack_00000060,&stack0x00000440,&stack0x00000410,0);
  }
  puVar7 = PTR_DAT_0932efa0;
  lVar35 = *(long *)(unaff_x19 + 0x108);
  lVar21 = *(long *)PTR_DAT_0932efa0;
  if (*(int *)(lVar21 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar21 = *(long *)puVar7;
  }
  puVar31 = *(undefined8 **)(lVar21 + 0xb8);
  lVar38 = puVar31[1];
  if (lVar38 == 0) {
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar31 = *(undefined8 **)(*(long *)PTR_DAT_0932efa0 + 0xb8);
    }
    uVar24 = *puVar31;
    lVar38 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ef88);
    FUN_061da510(lVar38,uVar24,*(undefined8 *)PTR_DAT_0932ef90,0);
    plVar25 = (long *)(*(long *)(*(long *)PTR_DAT_0932efa0 + 0xb8) + 8);
    *plVar25 = lVar38;
    thunk_FUN_040ec700(plVar25,lVar38);
  }
  if (lVar35 == 0) goto LAB_0857503c;
  lVar21 = FUN_05c273e4(lVar35,lVar38,*(undefined8 *)PTR_DAT_0932ef80);
  if ((uVar15 & 1) != 0) {
    FUN_08511854();
  }
  if ((uVar16 & 1) != 0) {
    FUN_08511854();
  }
  uVar15 = (uint)(cVar33 != '\0' | in_stack_00000953) & (in_stack_00000068._4_4_ ^ 1);
  if (bVar12 == 0) {
    if (*(char *)(unaff_x20 + 400) == '\0' && !bVar9) {
      bVar11 = in_stack_00000950 & 1;
    }
    else {
      bVar11 = 1;
    }
  }
  else {
    bVar11 = 0;
  }
  lVar35 = *(long *)(unaff_x19 + 0xe8);
  uVar18 = uVar18 & bVar11 != 0;
  if (lVar35 != 0) {
    uVar16 = FUN_085189ec();
    uVar22 = FUN_084eea60(lVar35,uVar16 & 1,0);
    if ((uVar22 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_0857503c;
      FUN_084eea88(*(long *)(unaff_x19 + 0xe8),&stack0x00000834,0);
      if (in_stack_00000834 == 1) {
        bVar12 = 1;
      }
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_0857503c;
      uVar22 = FUN_084ee410(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar22 & 1) == 0) && ((uStack000000000000004c & 1) == 0)) {
        uVar18 = 0;
        uVar15 = 0;
        bVar12 = 0;
        uStack0000000000000040 = 0;
        *(undefined1 *)(unaff_x19 + 0x140) = 0;
      }
      if (*(char *)(unaff_x19 + 0x134) != '\0') {
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_0857503c;
        bVar11 = FUN_084ee558(*(long *)(unaff_x19 + 0xe8),0);
        *(byte *)(unaff_x19 + 0x134) = bVar11 & 1;
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x1d8) == 0) goto LAB_0857503c;
  *(undefined1 *)(*(long *)(unaff_x20 + 0x1d8) + 0x140) = *(undefined1 *)(unaff_x19 + 0x140);
  iVar13 = FUN_08570428();
  if (iVar13 == 1) {
    lVar35 = *(long *)(unaff_x19 + 0x298);
    if (lVar35 == 0) goto LAB_0857503c;
    if ((*(char *)(lVar35 + 0x15) != '\0') &&
       ((in_stack_00000958 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_085916e8(lVar35,0);
    }
  }
  iVar13 = FUN_08570428();
  if (iVar13 == 1) {
    bVar11 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  else {
    bVar11 = 0;
  }
  if (bVar11 != 0 || (bVar12 != 0 || uVar18 != 0)) {
    if ((bVar12 == 0) || (iVar13 = FUN_08570428(), iVar13 == 1)) {
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
    lVar35 = *(long *)(unaff_x19 + 0x260);
    if ((lVar35 == 0) || (in_stack_00000060 == 0)) goto LAB_0857503c;
    FUN_089fc120(in_stack_00000060,*(undefined8 *)(lVar35 + 0x58),&stack0x000003e0,0);
    if (*(int *)(*(long *)PTR_DAT_09327f08 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08a06884(&stack0x000009a8,in_stack_00000060,0);
    FUN_089f0620(in_stack_00000060,0);
  }
  if (bVar10) {
LAB_08573bb0:
    puVar7 = PTR_DAT_0932efa8;
    plVar25 = (long *)(unaff_x19 + 0x270);
    uVar24 = *(undefined8 *)PTR_DAT_0932efa8;
    iVar13 = FUN_08570428();
    if (iVar13 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar22 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      if ((uVar22 & 1) != 0) {
        lVar35 = *(long *)(unaff_x19 + 0x298);
        if (lVar35 == 0) goto LAB_0857503c;
        lVar38 = *(long *)(lVar35 + 0x30);
        uVar16 = FUN_0858fd30(lVar35,0);
        if (lVar38 == 0) goto LAB_0857503c;
        if (*(uint *)(lVar38 + 0x18) <= uVar16) goto LAB_0857504c;
        plVar25 = (long *)(lVar38 + (long)(int)uVar16 * 8 + 0x20);
        if (*plVar25 == 0) goto LAB_0857503c;
        uVar24 = *(undefined8 *)(*plVar25 + 0x58);
      }
    }
    iVar13 = FUN_08570428();
    if (iVar13 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar22 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      if ((uVar22 & 1) == 0) goto LAB_08573cd0;
      lVar35 = *(long *)(unaff_x19 + 0x298);
      if (lVar35 == 0) goto LAB_0857503c;
      uVar19 = FUN_0858fd30(lVar35,0);
      uVar19 = FUN_0858fe3c(lVar35,uVar19,0);
    }
    else {
LAB_08573cd0:
      uVar19 = FUN_08557684(in_stack_00000948,0);
    }
    FUN_089af748(&stack0x000007c0,uVar19,0);
    iVar13 = FUN_08570428();
    if (iVar13 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar22 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      if ((uVar22 & 1) == 0) goto LAB_08573d70;
      lVar35 = *(long *)(unaff_x19 + 0x298);
      if (lVar35 == 0) goto LAB_0857503c;
      uVar19 = FUN_0858fd30(lVar35,0);
      FUN_0859177c(lVar35,&stack0x00000360,uVar19,0);
    }
    else {
LAB_08573d70:
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0855b8d0(0,plVar25,&stack0x000007c0,0,1,1,uVar24,0);
    }
    if ((*plVar25 == 0) || (in_stack_00000060 == 0)) goto LAB_0857503c;
    FUN_089fc120(in_stack_00000060,*(undefined8 *)(*plVar25 + 0x58),&stack0x00000330,0);
    puVar8 = PTR_DAT_093247c0;
    if (*(int *)(*(long *)PTR_DAT_093247c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (DAT_0989d7e8 == '\0') {
      FUN_04077588(PTR_DAT_093247c0);
      DAT_0989d7e8 = '\x01';
    }
    lVar35 = *(long *)puVar8;
    if (*(int *)(lVar35 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar35 = *(long *)puVar8;
    }
    if (**(long **)(lVar35 + 0xb8) == 0) goto LAB_0857503c;
    plVar23 = (long *)(**(long **)(lVar35 + 0xb8) + 0x10);
    *plVar23 = in_stack_00000060;
    thunk_FUN_040ec700(plVar23,in_stack_00000060);
    FUN_08557570(**(undefined8 **)(*(long *)puVar8 + 0xb8),in_stack_00000948,0);
    iVar13 = FUN_08570428();
    if (iVar13 == 1) {
      if (*plVar25 == 0) goto LAB_0857503c;
      FUN_089fc120(in_stack_00000060,*(undefined8 *)puVar7,&stack0x00000300,0);
    }
    if (*(int *)(*(long *)PTR_DAT_09327f08 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08a06884(&stack0x000009a8,in_stack_00000060,0);
    FUN_089f0620(in_stack_00000060,0);
    puVar31 = (undefined8 *)PTR_DAT_0932e3e0;
  }
  else {
    iVar13 = FUN_08570428();
    puVar31 = (undefined8 *)PTR_DAT_0932e3e0;
    if (iVar13 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar22 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      puVar31 = (undefined8 *)PTR_DAT_0932e3e0;
      if ((uVar22 & 1) != 0) goto LAB_08573bb0;
    }
  }
  PTR_DAT_0932e3e0 = (undefined *)puVar31;
  if (bVar12 != 0) {
    if ((in_stack_00000952 & 1) == 0) {
      iVar13 = FUN_08570428();
      if (iVar13 == 1) goto LAB_0857435c;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_0857503c;
      FUN_085a7844(*(long *)(unaff_x19 + 0x148),&stack0x00000220,*(undefined8 *)(unaff_x19 + 0x260),
                   0);
    }
    else {
      uVar24 = *puVar31;
      iVar13 = FUN_08570428();
      if (iVar13 == 1) {
        lVar35 = *(long *)(unaff_x19 + 0x298);
        if (lVar35 == 0) goto LAB_0857503c;
        lVar38 = *(long *)(lVar35 + 0x30);
        uVar16 = FUN_0858fd0c(lVar35,0);
        if (lVar38 == 0) goto LAB_0857503c;
        if (*(uint *)(lVar38 + 0x18) <= uVar16) goto LAB_0857504c;
        plVar25 = (long *)(lVar38 + (long)(int)uVar16 * 8 + 0x20);
        if (*plVar25 == 0) goto LAB_0857503c;
        uVar24 = *(undefined8 *)(*plVar25 + 0x58);
      }
      else {
        plVar25 = (long *)(unaff_x19 + 0x268);
      }
      iVar13 = FUN_08570428();
      if (iVar13 == 1) {
        lVar35 = *(long *)(unaff_x19 + 0x298);
        if (lVar35 == 0) goto LAB_0857503c;
        uVar19 = FUN_0858fd0c(lVar35,0);
        uVar19 = FUN_0858fe3c(lVar35,uVar19,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0932eec8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar19 = FUN_085a5d90(0);
      }
      FUN_089af748(&stack0x00000780,uVar19,0);
      iVar13 = FUN_08570428();
      if (iVar13 == 1) {
        lVar35 = *(long *)(unaff_x19 + 0x298);
        if (lVar35 == 0) goto LAB_0857503c;
        uVar19 = FUN_0858fd0c(lVar35,0);
        FUN_0859177c(lVar35,&stack0x000002c0,uVar19,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_0855b8d0(0,plVar25,&stack0x00000780,0,1,1,uVar24,0);
      }
      if ((*plVar25 == 0) || (in_stack_00000060 == 0)) goto LAB_0857503c;
      FUN_089fc120(in_stack_00000060,*(undefined8 *)(*plVar25 + 0x58),&stack0x00000290,0);
      iVar13 = FUN_08570428();
      if (iVar13 == 1) {
        if (*plVar25 == 0) goto LAB_0857503c;
        FUN_089fc120(in_stack_00000060,*puVar31,&stack0x00000260,0);
      }
      if (*(int *)(*(long *)PTR_DAT_09327f08 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_08a06884(&stack0x000009a8,in_stack_00000060,0);
      FUN_089f0620(in_stack_00000060,0);
      iVar13 = FUN_08570428();
      if (iVar13 != 1) {
        lVar35 = *(long *)(unaff_x19 + 0x150);
        if (iStack000000000000002c == 0) {
          if (lVar35 == 0) goto LAB_0857503c;
          FUN_085a5dd8(lVar35,*(undefined8 *)(unaff_x19 + 0x260),*(undefined8 *)(unaff_x19 + 0x268),
                       0);
        }
        else {
          if (lVar35 == 0) goto LAB_0857503c;
          FUN_085a5e10(lVar35,*(undefined8 *)(unaff_x19 + 0x260),*(undefined8 *)(unaff_x19 + 0x268),
                       *(undefined8 *)(unaff_x19 + 0x270),0);
        }
        goto LAB_0857434c;
      }
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar16 = FUN_0858fd0c(*(long *)(unaff_x19 + 0x298),0);
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar22 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      lVar38 = *(long *)(unaff_x19 + 0x150);
      uVar24 = *(undefined8 *)(unaff_x19 + 0x238);
      lVar35 = *(long *)(unaff_x19 + 0x298);
      if ((uVar22 & 1) == 0) {
        if (iStack000000000000002c != 0) {
          if ((lVar35 == 0) || (lVar35 = *(long *)(lVar35 + 0x30), lVar35 == 0)) goto LAB_0857503c;
          if (*(uint *)(lVar35 + 0x18) <= uVar16) goto LAB_0857504c;
          if (lVar38 == 0) goto LAB_0857503c;
          uVar29 = *(undefined8 *)(unaff_x19 + 0x270);
          uVar26 = *(undefined8 *)(lVar35 + (long)(int)uVar16 * 8 + 0x20);
          goto LAB_085742bc;
        }
        if ((lVar35 == 0) || (lVar35 = *(long *)(lVar35 + 0x30), lVar35 == 0)) goto LAB_0857503c;
        if (*(uint *)(lVar35 + 0x18) <= uVar16) goto LAB_0857504c;
        if (lVar38 == 0) goto LAB_0857503c;
        FUN_085a5dd8(lVar38,uVar24,*(undefined8 *)(lVar35 + (long)(int)uVar16 * 8 + 0x20),0);
      }
      else {
        if ((lVar35 == 0) || (lVar37 = *(long *)(lVar35 + 0x30), lVar37 == 0)) goto LAB_0857503c;
        if (*(uint *)(lVar37 + 0x18) <= uVar16) {
LAB_0857504c:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        uVar26 = *(undefined8 *)(lVar37 + (long)(int)uVar16 * 8 + 0x20);
        uVar16 = FUN_0858fd30(lVar35,0);
        if (*(uint *)(lVar37 + 0x18) <= uVar16) goto LAB_0857504c;
        if (lVar38 == 0) goto LAB_0857503c;
        uVar29 = *(undefined8 *)(lVar37 + (long)(int)uVar16 * 8 + 0x20);
LAB_085742bc:
        FUN_085a5e10(lVar38,uVar24,uVar26,uVar29,0);
      }
      puVar7 = PTR_DAT_0932c850;
      if (0xffffffe0 < in_stack_00000958 - 0xfbU) {
        lVar35 = *(long *)(unaff_x19 + 0x150);
        if (*(int *)(*(long *)PTR_DAT_0932c850 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (lVar35 == 0) goto LAB_0857503c;
        puVar31 = (undefined8 *)(lVar35 + 0xb8);
        *puVar31 = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        thunk_FUN_040ec700(puVar31);
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
  uVar22 = FUN_083e7eb4(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar22 & 1) != 0) {
    FUN_08511854();
  }
  cVar33 = *(char *)(unaff_x20 + 0x1e0);
  iVar13 = FUN_08570428();
  if (iVar13 == 1) {
    lVar35 = *(long *)(unaff_x19 + 0x298);
    if (lVar35 == 0) goto LAB_0857503c;
    if ((*(char *)(lVar35 + 0x15) != '\0') &&
       ((in_stack_00000958 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_085916e8(lVar35,0);
    }
    in_stack_000001e8 = in_stack_00000020[1];
    in_stack_000001e0 = *in_stack_00000020;
    FUN_08575c08();
  }
  else {
    uVar19 = 2;
    if ((uVar15 & 1) == 0) {
      uVar19 = 0;
    }
    uVar3 = 0;
    if (1 < in_stack_00000968) {
      uVar3 = uVar19;
    }
    iVar13 = 0;
    if ((uVar18 == 0 && (uVar15 & 1) == 0) && cVar33 != '\0') {
      iVar13 = 3;
    }
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_0857503c;
    uVar22 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar22 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_0857503c;
      if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x20) != '\0') {
        iVar13 = 0;
      }
    }
    uVar16 = 0;
    if (1 < in_stack_00000968) {
      uVar16 = uVar18;
    }
    if (uVar16 == 1) {
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar22 = FUN_0855a324(0);
      if ((uVar22 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (uVar15 & 1) == 0) {
          if (iVar13 == 0) {
            iVar13 = 2;
          }
          else if (iVar13 == 3) {
            iVar13 = 1;
          }
        }
      }
    }
    if (uVar20 == 0) {
      lVar35 = *(long *)(unaff_x19 + 0x198);
      if (lVar35 == 0) goto LAB_0857503c;
    }
    else {
      lVar35 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar35 == 0) goto LAB_0857503c;
      FUN_085aa8d8(lVar35,*(undefined8 *)(unaff_x19 + 0x228),*(undefined8 *)(unaff_x19 + 0x270),
                   *(undefined8 *)(unaff_x19 + 0x238),0);
    }
    FUN_08505824(lVar35,uVar3,0,0);
    FUN_0850595c(lVar35,iVar13,0);
    puVar7 = PTR_DAT_0932efa0;
    lVar37 = *(long *)(unaff_x19 + 0x108);
    lVar38 = *(long *)PTR_DAT_0932efa0;
    if (*(int *)(lVar38 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar38 = *(long *)puVar7;
    }
    puVar31 = *(undefined8 **)(lVar38 + 0xb8);
    lVar39 = puVar31[2];
    if (lVar39 == 0) {
      if (*(int *)(lVar38 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        puVar31 = *(undefined8 **)(*(long *)PTR_DAT_0932efa0 + 0xb8);
      }
      uVar24 = *puVar31;
      lVar39 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ef88);
      FUN_061da510(lVar39,uVar24,*(undefined8 *)PTR_DAT_0932ef98,0);
      plVar25 = (long *)(*(long *)(*(long *)PTR_DAT_0932efa0 + 0xb8) + 0x10);
      *plVar25 = lVar39;
      thunk_FUN_040ec700(plVar25,lVar39);
    }
    if (lVar37 == 0) goto LAB_0857503c;
    lVar38 = FUN_05c273e4(lVar37,lVar39,*(undefined8 *)PTR_DAT_0932ef80);
    if ((lVar38 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
      if (in_stack_00000050 == 0) goto LAB_0857503c;
      iVar13 = FUN_089791c8(in_stack_00000050,0);
      if (iVar13 == 4) goto LAB_085746d8;
      uVar19 = 1;
    }
    else {
LAB_085746d8:
      uVar19 = 0;
    }
    uVar22 = FUN_089d77f0(0);
    if ((uVar22 & 1) != 0) {
      FUN_08505e50(0,0,0,0x3f800000,lVar35,uVar19,0);
    }
    FUN_08511854();
  }
  if (in_stack_00000050 == 0) goto LAB_0857503c;
  iVar13 = FUN_089791c8(in_stack_00000050,0);
  if ((iVar13 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar24 = FUN_08992c4c(0);
    puVar7 = PTR_DAT_09285bb0;
    if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_09285bb0);
    }
    uVar22 = FUN_089ca704(uVar24,0,0);
    if ((uVar22 & 1) == 0) {
      uVar22 = FUN_04f38fe8(in_stack_00000050,&stack0x00000728,*(undefined8 *)PTR_DAT_0932ef78);
      if ((uVar22 & 1) != 0) {
        if (in_stack_00000728 == 0) goto LAB_0857503c;
        uVar24 = FUN_0899b330(in_stack_00000728,0);
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*(long *)puVar7);
        }
        uVar22 = FUN_089ca704(uVar24,0,0);
        if ((uVar22 & 1) != 0) goto LAB_0857477c;
      }
    }
    else {
LAB_0857477c:
      FUN_08511854();
    }
  }
  if (uVar18 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) != 0) {
      bVar12 = 1;
    }
    if (bVar12 == 0) {
      uVar22 = FUN_089d73c4(0);
      uVar24 = *(undefined8 *)PTR_DAT_0932d9b0;
      if ((uVar22 & 1) == 0) {
        uVar26 = FUN_089a58d8(0);
      }
      else {
        uVar26 = FUN_089a5960(0);
      }
      FUN_089942c4(uVar24,uVar26,0);
    }
  }
  else {
    iVar13 = FUN_08570428();
    if (((iVar13 != 1) || (*(char *)(unaff_x19 + 0x134) == '\0')) || ((in_stack_00000950 & 1) != 0))
    {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
      FUN_085a38d0(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x238),
                   *(undefined8 *)(unaff_x19 + 0x260),0);
      FUN_08511854();
    }
  }
  if ((uVar15 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_092871d8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar35 = FUN_08581e30(0);
    if (lVar35 == 0) goto LAB_0857503c;
    uVar19 = *(undefined4 *)(lVar35 + 0x48);
    FUN_085a2560(uVar19,&stack0x000006f0,&stack0x000006ec,0);
    if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0855b8d0(0,unaff_x19 + 0x278,&stack0x000006f0,in_stack_000006ec,1,1,
                 *(undefined8 *)PTR_DAT_0932d9b8,0);
    if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_0857503c;
    FUN_085a2600(*(long *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x19 + 0x228),
                 *(undefined8 *)(unaff_x19 + 0x278),uVar19,0);
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
  if ((uVar17 & 1) != 0) {
    FUN_08511854();
  }
  uVar20 = 0;
  if (cVar33 != '\0') {
    uVar20 = 3;
  }
  uVar15 = (uint)(cVar33 == '\0');
  if (in_stack_00000968 < 2) {
    uVar15 = 1;
  }
  if (uVar18 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar20 = 0, 1 < in_stack_00000968)
       ) {
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar20 = FUN_0855a324(0);
      uVar20 = uVar20 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_0857503c;
  FUN_08505824(*(long *)(unaff_x19 + 0x1c8),((uVar15 | in_stack_00000068._4_4_) ^ 0xffffffff) & 1,0,
               0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_0857503c;
  FUN_0850595c(*(long *)(unaff_x19 + 0x1c8),uVar20,0);
  FUN_08511854();
  FUN_08511854();
  FUN_08575d60();
  uVar22 = FUN_08518cf0();
  uVar27 = FUN_08518ab8();
  if (((uVar22 & 1) != 0) && ((uVar27 & 1) != 0)) {
    lVar35 = *(long *)(unaff_x19 + 0x200);
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_archive_query_t_application_stanza_namespace_get
              ();
    if (lVar35 == 0) goto LAB_0857503c;
    FUN_08524e38(lVar35);
    FUN_08511854();
  }
  bVar10 = cVar33 == '\0';
  bVar9 = *(long *)(unaff_x20 + 0x1b0) != 0;
  if ((bVar10 || ((uStack0000000000000034 ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar28 = FUN_08519004(), (uVar28 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    bVar12 = 0;
joined_r0x08574c60:
    if (!bVar9 || bVar10) goto LAB_08574c64;
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_delete_auto_accept_rule_t_base__get:
    bVar11 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar12 = FUN_084ee3f4(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x08574c60;
    }
    bVar12 = 1;
    if (bVar9 && !bVar10)
    goto 
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_delete_auto_accept_rule_t_base__get
    ;
LAB_08574c64:
    bVar11 = lVar21 == 0 & (bVar12 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar20 = 1;
  }
  else {
    uVar20 = FUN_084ee4e4(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar20 = uVar20 ^ 1;
  }
  plVar25 = (long *)(unaff_x19 + 0x228);
  plVar23 = (long *)(unaff_x19 + 0x238);
  if (uVar14 == 0) {
    if (cVar33 == '\0') {
      return;
    }
    FUN_08571d58();
  }
  else {
    uVar19 = FUN_089af740(&stack0x00000960,0);
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
    FUN_0852fb58(&stack0x000001a8,&stack0x00000170,in_stack_00000960,in_stack_00000964,uVar19,0,0);
    if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0855b8d0(0,unaff_x19 + 0x318,&stack0x00000630,0,1,1,*(undefined8 *)PTR_DAT_0932efb0,0);
    if (cVar33 == '\0') {
      if (*(long *)(unaff_x19 + 0x308) == 0) goto LAB_0857503c;
      FUN_0852d128(*(long *)(unaff_x19 + 0x308),&stack0x00000960,plVar25,0,plVar23,&stack0x00000730,
                   unaff_x19 + 0x280,0);
      goto LAB_08572d60;
    }
    FUN_08571d58();
    if (*(long *)(unaff_x19 + 0x308) == 0) goto LAB_0857503c;
    FUN_0852d128(*(long *)(unaff_x19 + 0x308),&stack0x00000960,plVar25,bVar11,plVar23,
                 &stack0x00000730,unaff_x19 + 0x280,bVar12 & 1);
    FUN_08511854();
  }
  lVar35 = *plVar25;
  if ((bVar12 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x310) == 0) goto LAB_0857503c;
    FUN_0852d270(*(long *)(unaff_x19 + 0x310),&stack0x00000628,1,uVar20 & 1,0);
    FUN_08511854();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_08511854();
  }
  if (((bVar12 & 1) == 0) && (((uVar14 == 0 || (lVar21 != 0)) || (bVar9 && !bVar10)))) {
    lVar21 = *plVar25;
    if ((lVar21 == 0) || (lVar38 = *(long *)(unaff_x19 + 0x250), lVar38 == 0)) goto LAB_0857503c;
    in_stack_00000118 = *(undefined8 *)(lVar38 + 0x30);
    in_stack_00000110 = *(undefined8 *)(lVar38 + 0x28);
    in_stack_00000128 = *(undefined8 *)(lVar38 + 0x40);
    in_stack_00000120 = *(undefined8 *)(lVar38 + 0x38);
    in_stack_00000130 = *(undefined8 *)(lVar38 + 0x48);
    in_stack_00000148 = *(undefined8 *)(lVar21 + 0x30);
    in_stack_00000140 = *(undefined8 *)(lVar21 + 0x28);
    in_stack_00000158 = *(undefined8 *)(lVar21 + 0x40);
    in_stack_00000150 = *(undefined8 *)(lVar21 + 0x38);
    in_stack_00000160 = *(undefined8 *)(lVar21 + 0x48);
    uVar28 = FUN_089ea6c4(&stack0x00000140,&stack0x00000110,0);
    if ((uVar28 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_0857503c;
      in_stack_000000d8 = CONCAT44(in_stack_0000096c,in_stack_00000968);
      in_stack_000000d0 = CONCAT44(in_stack_00000964,in_stack_00000960);
      in_stack_000000e8 = CONCAT44(in_stack_0000097c,in_stack_00000978);
      in_stack_000000e0 = in_stack_00000970;
      in_stack_000000f0 = in_stack_00000980;
      in_stack_000000f8 = in_stack_00000988;
      in_stack_00000100 = in_stack_00000990;
      FUN_085abda4(*(long *)(unaff_x19 + 0x1d8),&stack0x000000d0,lVar35,0);
      FUN_08511854();
    }
  }
  if (((uVar22 & 1) != 0) && ((uVar27 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_08511854();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar22 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar22 & 1) == 0) {
      return;
    }
    lVar21 = *plVar23;
    if ((lVar21 != 0) && (lVar35 = *(long *)(unaff_x20 + 0x1a0), lVar35 != 0)) {
      in_stack_00000078 = *(undefined8 *)(lVar35 + 0x38);
      in_stack_00000070 = *(undefined8 *)(lVar35 + 0x30);
      in_stack_00000088 = *(undefined8 *)(lVar35 + 0x48);
      in_stack_00000080 = *(undefined8 *)(lVar35 + 0x40);
      in_stack_00000090 = *(undefined8 *)(lVar35 + 0x50);
      in_stack_000000a8 = *(undefined8 *)(lVar21 + 0x30);
      in_stack_000000a0 = *(undefined8 *)(lVar21 + 0x28);
      in_stack_000000b8 = *(undefined8 *)(lVar21 + 0x40);
      in_stack_000000b0 = *(undefined8 *)(lVar21 + 0x38);
      in_stack_000000c0 = *(undefined8 *)(lVar21 + 0x48);
      uVar22 = FUN_089ea6c4(&stack0x000000a0,&stack0x00000070,0);
      if ((uVar22 & 1) != 0) {
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


