/*
FUNCTION_NAME: FUN_08572df8
ENTRY_POINT: 08572df8
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


void FUN_08572df8(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 uVar26;
  long *plVar27;
  undefined8 uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined8 uVar31;
  byte bVar32;
  int in_w8;
  undefined8 *puVar33;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  char cVar34;
  uint uVar35;
  undefined8 *unaff_x23;
  long lVar36;
  char cVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  undefined1 auVar41 [16];
  uint uStack0000000000000034;
  uint uStack0000000000000040;
  uint uStack000000000000004c;
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
  
                    /* catch() { ... } // from try @ 08572d28 with catch @ 08572df8 */
                    /* catch() { ... } // from try @ 08572d1c with catch @ 08572dfc */
  uVar13 = FUN_085725ac();
                    /* try { // try from 08572e10 to 08672e13 has its CatchHandler @ 08572edc */
                    /* try { // try from 08572e14 to 08672e43 has its CatchHandler @ 08572794 */
  FUN_085750e8();
  FUN_08519004();
  if (in_stack_000009a0 == 0) goto LAB_0857503c;
                    /* catch() { ... } // from try @ 08572d14 with catch @ 08572e30 */
  FUN_085189dc();
                    /* try { // try from 08572e44 to 08672e47 has its CatchHandler @ 08572eec */
                    /* try { // try from 08572e48 to 08672e77 has its CatchHandler @ 08572794 */
  auVar41 = FUN_085751a4();
  uVar29 = auVar41._0_8_;
                    /* catch() { ... } // from try @ 08572d0c with catch @ 08572e64 */
                    /* try { // try from 08572e78 to 08672e7b has its CatchHandler @ 08572efc */
                    /* try { // try from 08572e7c to 08672edf has its CatchHandler @ 08572794 */
  bVar11 = FUN_0855712c();
  iVar14 = FUN_089d6e4c(0);
  bVar12 = auVar41[2];
  if ((iVar14 == 0xb) || (iVar14 = FUN_089d6e4c(0), (iVar14 != 0x11 & bVar11) != 1)) {
    bVar9 = false;
    uVar22 = 0;
    bVar10 = false;
  }
  else {
    iVar14 = FUN_08570428();
    if (iVar14 == 1) {
      uVar22 = 0;
    }
    else {
      uVar22 = 1;
      if (in_stack_0000094c == 0) {
        uVar29 = CONCAT53(auVar41._3_5_,CONCAT12(1,auVar41._0_2_));
        bVar12 = 1;
        bVar10 = true;
        uVar22 = 0;
        bVar9 = true;
        goto LAB_08572ef0;
      }
      if (in_stack_0000094c != 1) {
        thunk_FUN_040dedf8(PTR_DAT_09288c08);
        uVar26 = thunk_FUN_040b4efc();
        FUN_075d60dc(uVar26,0);
        uVar28 = thunk_FUN_040dedf8(PTR_DAT_0932efd0);
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar26,uVar28);
      }
    }
    bVar9 = false;
    bVar10 = true;
  }
LAB_08572ef0:
  lVar23 = *(long *)(unaff_x19 + 0x298);
  if (lVar23 != 0) {
    *(bool *)(lVar23 + 0x14) = bVar10;
    *(byte *)(lVar23 + 0x17) = bVar12 & 1;
    *(undefined4 *)(lVar23 + 0x10) = in_stack_00000948;
    FUN_0859128c();
    lVar23 = *(long *)(unaff_x19 + 0x298);
    if (lVar23 == 0) goto LAB_0857503c;
    *(bool *)(lVar23 + 0x19) = *(int *)(unaff_x20 + 0xe8) == 1;
    if (*(char *)(lVar23 + 0x15) != '\0') {
      if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_0857503c;
      FUN_05c27784(&stack0x000003a0,*(long *)(unaff_x19 + 0x108),*(undefined8 *)PTR_DAT_0932d278);
      puVar6 = PTR_DAT_0932d268;
      do {
        uVar24 = FUN_07161154(&stack0x00000870,*(undefined8 *)puVar6);
        if ((uVar24 & 1) == 0) goto LAB_08572fb4;
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
    uVar15 = 0;
  }
  else {
    uVar15 = FUN_0854e1b8(unaff_x19 + 0x300,0);
    uVar15 = uVar15 & 1;
  }
  if (in_stack_000009a0 == 0) goto LAB_0857503c;
  if (*(char *)(in_stack_000009a0 + 0x10) == '\0') {
    uStack0000000000000034 = 0;
    if (uVar15 == 0)
    goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_session_send_notification_t;
LAB_0857300c:
    cVar34 = *(char *)(unaff_x20 + 0x192);
  }
  else {
    uStack0000000000000034 = FUN_0854e1b8(unaff_x19 + 0x300,0);
    if (uVar15 != 0) goto LAB_0857300c;
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_session_send_notification_t:
    cVar34 = '\0';
  }
  if (*(char *)(unaff_x20 + 0x1ac) == '\0') {
    uStack0000000000000040 = 0;
  }
  else {
    uStack0000000000000040 = FUN_0854e1b8(unaff_x19 + 0x300,0);
  }
  uVar24 = FUN_085189dc();
  if ((uVar24 & 1) == 0) {
    uStack000000000000004c = FUN_085189ec();
  }
  else {
    uStack000000000000004c = 1;
  }
  if ((*(char *)(unaff_x20 + 400) == '\0') && ((uVar29 & 1) == 0)) {
    cVar37 = *(char *)(unaff_x19 + 0x140);
  }
  else {
    cVar37 = '\x01';
  }
  if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_0857503c;
  uVar16 = FUN_085aff74();
  if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_0857503c;
  uVar17 = FUN_08597924(*(long *)(unaff_x19 + 0x170));
  if (*(long *)(unaff_x19 + 0x1c0) == 0) goto LAB_0857503c;
  bVar8 = cVar34 != '\0';
  uVar18 = FUN_0854be1c(*(long *)(unaff_x19 + 0x1c0),0);
  if (cVar37 == '\0' && !bVar8) {
    cVar37 = '\0';
    uVar19 = 0;
  }
  else {
    iVar14 = *(int *)(unaff_x19 + 0x2a8);
    uVar19 = FUN_08572330();
    uVar19 = (uint)(iVar14 == 2) | uVar19 ^ 1;
  }
  bVar11 = (byte)(uVar29 >> 0x10);
  if ((((uint)(byte)(bVar11 | (byte)(uVar29 >> 8)) |
       in_stack_00000068._4_4_ | uVar19 | uStack000000000000004c) & 1) == 0) {
    bVar11 = 0;
  }
  else {
    iVar14 = FUN_08570428();
    if (iVar14 == 1) {
      bVar11 = bVar11 & 1;
    }
    else {
      bVar11 = 1;
    }
  }
  if (*(char *)(unaff_x19 + 0x140) != '\0') {
    bVar11 = 1;
  }
  if (cVar37 == '\0') {
    if (((uint)(cVar34 == '\0') & (uStack000000000000004c ^ 1)) == 0) {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
      bVar5 = false;
      *(undefined4 *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) = 500;
    }
    else {
      bVar5 = false;
    }
  }
  else {
    lVar23 = *(long *)(unaff_x19 + 0x1b0);
    if (lVar23 == 0) goto LAB_0857503c;
    iVar14 = auVar41._12_4_ + -1;
    iVar20 = 500;
    if (*(int *)(unaff_x19 + 0x2a8) != 1) {
      iVar20 = 300;
    }
    if (499 < iVar14) {
      iVar14 = 500;
    }
    if ((uVar29 & 1) != 0) {
      iVar20 = iVar14;
    }
    *(int *)(lVar23 + 0x10) = iVar20;
    if (iVar20 < 500) {
      *(undefined1 *)(lVar23 + 0xd8) = 0;
      bVar5 = true;
      *(undefined4 *)(unaff_x19 + 0x2a8) = 0;
    }
    else {
      bVar5 = true;
    }
  }
  uVar19 = FUN_08575450();
  cVar34 = *(char *)(unaff_x20 + 0x1e0);
  bVar12 = 0;
  if (bVar5 || bVar8) {
    bVar12 = bVar11 ^ 1;
  }
  iVar14 = FUN_08570428();
  if (iVar14 == 1) {
    bVar32 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  else {
    bVar32 = 0;
  }
  uVar4 = uVar22;
  if ((bVar32 != 0 || *(char *)(unaff_x19 + 0x140) != '\0') || (cVar34 != '\x01' || bVar12 != 0)) {
    uVar4 = 1;
  }
  if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_0857503c;
  uVar13 = (in_w8 != 0 | uVar13 | uVar19) & (in_stack_00000068._4_4_ ^ 1);
  uVar24 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0);
  uVar19 = uVar13 | uVar4;
  iVar14 = FUN_089d6e4c(0);
  puVar6 = PTR_DAT_09326d38;
  if (iVar14 == 0x15) {
    uVar35 = uVar19;
    if ((uVar24 & 1) == 0) {
      uVar35 = uVar13;
    }
    if (*(char *)(unaff_x19 + 0x2d4) != '\0') goto LAB_085732d0;
  }
  else {
LAB_085732d0:
    uVar35 = uVar19;
  }
  if (*(int *)(*(long *)PTR_DAT_09326d38 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0844aae0(&stack0x000003a0,0);
  if ((float)in_stack_000003c0 == 1.0) {
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0844aae0(&stack0x000003a0,0);
    if ((float)((ulong)in_stack_000003c0 >> 0x20) != 1.0) goto LAB_08573334;
  }
  else {
LAB_08573334:
    uVar35 = uVar19;
  }
  if ((*(char *)(unaff_x19 + 0x134) != '\0') || (*(char *)(unaff_x19 + 0x140) != '\0')) {
    uVar35 = uVar4 | uVar35;
  }
  uVar24 = FUN_089d6e9c(0);
  uVar13 = uVar4 | uVar35;
  uVar19 = uVar13;
  if ((uVar24 & 1) == 0) {
    uVar19 = uVar35;
  }
  FUN_089afec0(&stack0x00000910,0,0);
  FUN_089afedc(&stack0x00000910,0,0);
  if (*(long *)(unaff_x19 + 0x220) == 0) goto LAB_0857503c;
  plVar27 = (long *)(unaff_x19 + 0x220);
  FUN_085b2fd0(*(long *)(unaff_x19 + 0x220),&stack0x000005f0,1,0);
  if (*(int *)(unaff_x20 + 0xe8) == 0) {
    if (unaff_x21 == 0) goto LAB_0857503c;
    iVar14 = thunk_FUN_0897b814(unaff_x21,0);
    FUN_089ea1dc(&stack0x000003a0,2,0);
    if ((*(long *)(unaff_x20 + 0x1a0) == 0) ||
       ((uVar24 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0), (uVar24 & 1) != 0 &&
        (*(long *)(unaff_x20 + 0x1a0) == 0)))) goto LAB_0857503c;
    uVar2 = uVar13 & iVar14 != 1;
    puVar33 = (undefined8 *)(unaff_x19 + 0x250);
    if (*(long *)(unaff_x19 + 0x250) == 0) {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar26 = FUN_08449f30(&stack0x000005c0,0);
      *puVar33 = uVar26;
      thunk_FUN_040ec700(puVar33,uVar26);
    }
    else {
      uVar24 = FUN_089ea6f4(&stack0x00000590,&stack0x00000560,0);
      if ((uVar24 & 1) != 0) {
        FUN_0844a000(puVar33,&stack0x00000530,0);
      }
    }
    puVar1 = (undefined8 *)(unaff_x19 + 600);
    if (*(long *)(unaff_x19 + 600) == 0) {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar26 = FUN_08449f30(&stack0x00000500,0);
      *puVar1 = uVar26;
      thunk_FUN_040ec700(puVar1,uVar26);
    }
    else {
      uVar24 = FUN_089ea6f4(&stack0x000004d0,&stack0x000004a0,0);
      if ((uVar24 & 1) != 0) {
        FUN_0844a000(puVar1,&stack0x00000470,0);
      }
    }
    if (uVar2 != 0) {
      FUN_08575640();
    }
    if (*(long *)(unaff_x19 + 0x198) == 0) goto LAB_0857503c;
    bVar12 = (byte)uVar2 ^ 1;
    *(byte *)(*(long *)(unaff_x19 + 0x198) + 0x151) = bVar12;
    if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_0857503c;
    *(byte *)(*(long *)(unaff_x19 + 0x1c8) + 0x151) = bVar12;
    if (*(long *)(unaff_x19 + 0x1e8) == 0) goto LAB_0857503c;
    *(byte *)(*(long *)(unaff_x19 + 0x1e8) + 0xc0) = bVar12;
    if ((uVar19 & 1) == 0) {
      uVar26 = *puVar33;
    }
    else {
      if (*plVar27 == 0) goto LAB_0857503c;
      uVar26 = FUN_085b2bdc(*plVar27,0);
    }
    *(undefined8 *)(unaff_x19 + 0x228) = uVar26;
    thunk_FUN_040ec700(unaff_x19 + 0x228);
    lVar23 = 0x240;
    if (uVar4 == 0 && (uVar35 & 1) == 0) {
      lVar23 = 600;
    }
    *(undefined8 *)(unaff_x19 + 0x238) = *(undefined8 *)(unaff_x19 + lVar23);
    thunk_FUN_040ec700(unaff_x19 + 0x238);
  }
  else {
    if (((*(long *)(unaff_x20 + 0x230) == 0) ||
        (FUN_04f38fe8(*(long *)(unaff_x20 + 0x230),&stack0x00000838,*(undefined8 *)PTR_DAT_0932c828)
        , in_stack_00000838 == 0)) || (plVar25 = (long *)FUN_0856edc4(), plVar25 == (long *)0x0))
    goto LAB_0857503c;
    if (*plVar25 != *(long *)PTR_DAT_0932c850) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar25);
    }
    lVar23 = *plVar27;
    if (lVar23 != plVar25[0x44]) {
      if (lVar23 == 0) goto LAB_0857503c;
      FUN_085b2b88(lVar23,0);
      *plVar27 = plVar25[0x44];
      thunk_FUN_040ec700(plVar27);
      lVar23 = *plVar27;
    }
    if (lVar23 == 0) goto LAB_0857503c;
    uVar26 = FUN_085b2bdc(lVar23,0);
    *(undefined8 *)(unaff_x19 + 0x228) = uVar26;
    thunk_FUN_040ec700(unaff_x19 + 0x228,uVar26);
    *(long *)(unaff_x19 + 0x238) = plVar25[0x47];
    thunk_FUN_040ec700(unaff_x19 + 0x238);
    *(long *)(unaff_x19 + 0x250) = plVar25[0x4a];
    thunk_FUN_040ec700(unaff_x19 + 0x250);
    *(long *)(unaff_x19 + 600) = plVar25[0x4b];
    thunk_FUN_040ec700(unaff_x19 + 600);
    uVar13 = uVar4;
  }
  iVar14 = auVar41._8_4_;
  if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_0857503c;
  if (*(int *)(*(long *)(unaff_x19 + 0x110) + 0x18) != 0 && (in_stack_00000068 & 0x100000000) == 0)
  {
    if (*plVar27 == 0) goto LAB_0857503c;
    uVar26 = FUN_085b2bdc(*plVar27,0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar26;
    thunk_FUN_040ec700(unaff_x19 + 0x118,uVar26);
  }
  cVar34 = *(char *)(unaff_x20 + 0x191);
  FUN_0850cd8c();
  iVar20 = FUN_089d6e4c(0);
  if (iVar20 == 2) {
    FUN_08447f84(&stack0x000003a0,*(undefined8 *)(unaff_x19 + 0x240),0);
    FUN_08447f84(&stack0x000001a8,*(undefined8 *)(unaff_x19 + 0x248),0);
    if (in_stack_00000060 == 0) goto LAB_0857503c;
    FUN_089fb9ac(in_stack_00000060,&stack0x00000440,&stack0x00000410,0);
  }
  puVar6 = PTR_DAT_0932efa0;
  lVar36 = *(long *)(unaff_x19 + 0x108);
  lVar23 = *(long *)PTR_DAT_0932efa0;
  if (*(int *)(lVar23 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar23 = *(long *)puVar6;
  }
  puVar33 = *(undefined8 **)(lVar23 + 0xb8);
  lVar39 = puVar33[1];
  if (lVar39 == 0) {
    if (*(int *)(lVar23 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar33 = *(undefined8 **)(*(long *)PTR_DAT_0932efa0 + 0xb8);
    }
    uVar26 = *puVar33;
    lVar39 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ef88);
    FUN_061da510(lVar39,uVar26,*(undefined8 *)PTR_DAT_0932ef90,0);
    plVar27 = (long *)(*(long *)(*(long *)PTR_DAT_0932efa0 + 0xb8) + 8);
    *plVar27 = lVar39;
    thunk_FUN_040ec700(plVar27,lVar39);
  }
  if (lVar36 == 0) goto LAB_0857503c;
  lVar23 = FUN_05c273e4(lVar36,lVar39,*(undefined8 *)PTR_DAT_0932ef80);
  if ((uVar16 & 1) != 0) {
    FUN_08511854();
  }
  if ((uVar17 & 1) != 0) {
    FUN_08511854();
  }
  uVar16 = (uint)(byte)(cVar34 != '\0' | (byte)(uVar29 >> 0x18)) & (in_stack_00000068._4_4_ ^ 1);
  if (bVar11 == 0) {
    if (*(char *)(unaff_x20 + 400) == '\0' && !bVar8) {
      bVar12 = (byte)uVar29 & 1;
    }
    else {
      bVar12 = 1;
    }
  }
  else {
    bVar12 = 0;
  }
  lVar36 = *(long *)(unaff_x19 + 0xe8);
  uVar13 = uVar13 & bVar12 != 0;
  if (lVar36 != 0) {
    uVar17 = FUN_085189ec();
    uVar24 = FUN_084eea60(lVar36,uVar17 & 1,0);
    if ((uVar24 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_0857503c;
      FUN_084eea88(*(long *)(unaff_x19 + 0xe8),&stack0x00000834,0);
      if (in_stack_00000834 == 1) {
        bVar11 = 1;
      }
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_0857503c;
      uVar24 = FUN_084ee410(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar24 & 1) == 0) && ((uStack000000000000004c & 1) == 0)) {
        uVar13 = 0;
        uVar16 = 0;
        bVar11 = 0;
        uStack0000000000000040 = 0;
        *(undefined1 *)(unaff_x19 + 0x140) = 0;
      }
      if (*(char *)(unaff_x19 + 0x134) != '\0') {
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_0857503c;
        bVar12 = FUN_084ee558(*(long *)(unaff_x19 + 0xe8),0);
        *(byte *)(unaff_x19 + 0x134) = bVar12 & 1;
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x1d8) == 0) goto LAB_0857503c;
  *(undefined1 *)(*(long *)(unaff_x20 + 0x1d8) + 0x140) = *(undefined1 *)(unaff_x19 + 0x140);
  iVar20 = FUN_08570428();
  if (iVar20 == 1) {
    lVar36 = *(long *)(unaff_x19 + 0x298);
    if (lVar36 == 0) goto LAB_0857503c;
    if ((*(char *)(lVar36 + 0x15) != '\0') &&
       ((iVar14 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_085916e8(lVar36,0);
    }
  }
  iVar20 = FUN_08570428();
  if (iVar20 == 1) {
    bVar12 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  else {
    bVar12 = 0;
  }
  if (bVar12 != 0 || (bVar11 != 0 || uVar13 != 0)) {
    if ((bVar11 == 0) || (iVar20 = FUN_08570428(), iVar20 == 1)) {
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
    lVar36 = *(long *)(unaff_x19 + 0x260);
    if ((lVar36 == 0) || (in_stack_00000060 == 0)) goto LAB_0857503c;
    FUN_089fc120(in_stack_00000060,*(undefined8 *)(lVar36 + 0x58),&stack0x000003e0,0);
    if (*(int *)(*(long *)PTR_DAT_09327f08 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08a06884(&stack0x000009a8,in_stack_00000060,0);
    FUN_089f0620(in_stack_00000060,0);
  }
  if (bVar10) {
LAB_08573bb0:
    puVar6 = PTR_DAT_0932efa8;
    plVar27 = (long *)(unaff_x19 + 0x270);
    uVar26 = *(undefined8 *)PTR_DAT_0932efa8;
    iVar20 = FUN_08570428();
    if (iVar20 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar24 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      if ((uVar24 & 1) != 0) {
        lVar36 = *(long *)(unaff_x19 + 0x298);
        if (lVar36 == 0) goto LAB_0857503c;
        lVar39 = *(long *)(lVar36 + 0x30);
        uVar17 = FUN_0858fd30(lVar36,0);
        if (lVar39 == 0) goto LAB_0857503c;
        if (*(uint *)(lVar39 + 0x18) <= uVar17) goto LAB_0857504c;
        plVar27 = (long *)(lVar39 + (long)(int)uVar17 * 8 + 0x20);
        if (*plVar27 == 0) goto LAB_0857503c;
        uVar26 = *(undefined8 *)(*plVar27 + 0x58);
      }
    }
    iVar20 = FUN_08570428();
    if (iVar20 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar24 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      if ((uVar24 & 1) == 0) goto LAB_08573cd0;
      lVar36 = *(long *)(unaff_x19 + 0x298);
      if (lVar36 == 0) goto LAB_0857503c;
      uVar21 = FUN_0858fd30(lVar36,0);
      uVar21 = FUN_0858fe3c(lVar36,uVar21,0);
    }
    else {
LAB_08573cd0:
      uVar21 = FUN_08557684(in_stack_00000948,0);
    }
    FUN_089af748(&stack0x000007c0,uVar21,0);
    iVar20 = FUN_08570428();
    if (iVar20 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar24 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      if ((uVar24 & 1) == 0) goto LAB_08573d70;
      lVar36 = *(long *)(unaff_x19 + 0x298);
      if (lVar36 == 0) goto LAB_0857503c;
      uVar21 = FUN_0858fd30(lVar36,0);
      FUN_0859177c(lVar36,&stack0x00000360,uVar21,0);
    }
    else {
LAB_08573d70:
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0855b8d0(0,plVar27,&stack0x000007c0,0,1,1,uVar26,0);
    }
    if ((*plVar27 == 0) || (in_stack_00000060 == 0)) goto LAB_0857503c;
    FUN_089fc120(in_stack_00000060,*(undefined8 *)(*plVar27 + 0x58),&stack0x00000330,0);
    puVar7 = PTR_DAT_093247c0;
    if (*(int *)(*(long *)PTR_DAT_093247c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (DAT_0989d7e8 == '\0') {
      FUN_04077588(PTR_DAT_093247c0);
      DAT_0989d7e8 = '\x01';
    }
    lVar36 = *(long *)puVar7;
    if (*(int *)(lVar36 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar36 = *(long *)puVar7;
    }
    if (**(long **)(lVar36 + 0xb8) == 0) goto LAB_0857503c;
    plVar25 = (long *)(**(long **)(lVar36 + 0xb8) + 0x10);
    *plVar25 = in_stack_00000060;
    thunk_FUN_040ec700(plVar25,in_stack_00000060);
    FUN_08557570(**(undefined8 **)(*(long *)puVar7 + 0xb8),in_stack_00000948,0);
    iVar20 = FUN_08570428();
    if (iVar20 == 1) {
      if (*plVar27 == 0) goto LAB_0857503c;
      FUN_089fc120(in_stack_00000060,*(undefined8 *)puVar6,&stack0x00000300,0);
    }
    if (*(int *)(*(long *)PTR_DAT_09327f08 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08a06884(&stack0x000009a8,in_stack_00000060,0);
    FUN_089f0620(in_stack_00000060,0);
    puVar33 = (undefined8 *)PTR_DAT_0932e3e0;
  }
  else {
    iVar20 = FUN_08570428();
    puVar33 = (undefined8 *)PTR_DAT_0932e3e0;
    if (iVar20 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar24 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      puVar33 = (undefined8 *)PTR_DAT_0932e3e0;
      if ((uVar24 & 1) != 0) goto LAB_08573bb0;
    }
  }
  PTR_DAT_0932e3e0 = (undefined *)puVar33;
  if (bVar11 != 0) {
    if ((uVar29 & 0x10000) == 0) {
      iVar20 = FUN_08570428();
      if (iVar20 == 1) goto LAB_0857435c;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_0857503c;
      FUN_085a7844(*(long *)(unaff_x19 + 0x148),&stack0x00000220,*(undefined8 *)(unaff_x19 + 0x260),
                   0);
    }
    else {
      uVar26 = *puVar33;
      iVar20 = FUN_08570428();
      if (iVar20 == 1) {
        lVar36 = *(long *)(unaff_x19 + 0x298);
        if (lVar36 == 0) goto LAB_0857503c;
        lVar39 = *(long *)(lVar36 + 0x30);
        uVar17 = FUN_0858fd0c(lVar36,0);
        if (lVar39 == 0) goto LAB_0857503c;
        if (*(uint *)(lVar39 + 0x18) <= uVar17) goto LAB_0857504c;
        plVar27 = (long *)(lVar39 + (long)(int)uVar17 * 8 + 0x20);
        if (*plVar27 == 0) goto LAB_0857503c;
        uVar26 = *(undefined8 *)(*plVar27 + 0x58);
      }
      else {
        plVar27 = (long *)(unaff_x19 + 0x268);
      }
      iVar20 = FUN_08570428();
      if (iVar20 == 1) {
        lVar36 = *(long *)(unaff_x19 + 0x298);
        if (lVar36 == 0) goto LAB_0857503c;
        uVar21 = FUN_0858fd0c(lVar36,0);
        uVar21 = FUN_0858fe3c(lVar36,uVar21,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0932eec8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar21 = FUN_085a5d90(0);
      }
      FUN_089af748(&stack0x00000780,uVar21,0);
      iVar20 = FUN_08570428();
      if (iVar20 == 1) {
        lVar36 = *(long *)(unaff_x19 + 0x298);
        if (lVar36 == 0) goto LAB_0857503c;
        uVar21 = FUN_0858fd0c(lVar36,0);
        FUN_0859177c(lVar36,&stack0x000002c0,uVar21,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_0855b8d0(0,plVar27,&stack0x00000780,0,1,1,uVar26,0);
      }
      if ((*plVar27 == 0) || (in_stack_00000060 == 0)) goto LAB_0857503c;
      FUN_089fc120(in_stack_00000060,*(undefined8 *)(*plVar27 + 0x58),&stack0x00000290,0);
      iVar20 = FUN_08570428();
      if (iVar20 == 1) {
        if (*plVar27 == 0) goto LAB_0857503c;
        FUN_089fc120(in_stack_00000060,*puVar33,&stack0x00000260,0);
      }
      if (*(int *)(*(long *)PTR_DAT_09327f08 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_08a06884(&stack0x000009a8,in_stack_00000060,0);
      FUN_089f0620(in_stack_00000060,0);
      iVar20 = FUN_08570428();
      if (iVar20 != 1) {
        lVar36 = *(long *)(unaff_x19 + 0x150);
        if (bVar9) {
          if (lVar36 == 0) goto LAB_0857503c;
          FUN_085a5e10(lVar36,*(undefined8 *)(unaff_x19 + 0x260),*(undefined8 *)(unaff_x19 + 0x268),
                       *(undefined8 *)(unaff_x19 + 0x270),0);
        }
        else {
          if (lVar36 == 0) goto LAB_0857503c;
          FUN_085a5dd8(lVar36,*(undefined8 *)(unaff_x19 + 0x260),*(undefined8 *)(unaff_x19 + 0x268),
                       0);
        }
        goto LAB_0857434c;
      }
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar17 = FUN_0858fd0c(*(long *)(unaff_x19 + 0x298),0);
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar24 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      lVar39 = *(long *)(unaff_x19 + 0x150);
      uVar26 = *(undefined8 *)(unaff_x19 + 0x238);
      lVar36 = *(long *)(unaff_x19 + 0x298);
      if ((uVar24 & 1) == 0) {
        if (bVar9) {
          if ((lVar36 == 0) || (lVar36 = *(long *)(lVar36 + 0x30), lVar36 == 0)) goto LAB_0857503c;
          if (*(uint *)(lVar36 + 0x18) <= uVar17) goto LAB_0857504c;
          if (lVar39 == 0) goto LAB_0857503c;
          uVar31 = *(undefined8 *)(unaff_x19 + 0x270);
          uVar28 = *(undefined8 *)(lVar36 + (long)(int)uVar17 * 8 + 0x20);
          goto LAB_085742bc;
        }
        if ((lVar36 == 0) || (lVar36 = *(long *)(lVar36 + 0x30), lVar36 == 0)) goto LAB_0857503c;
        if (*(uint *)(lVar36 + 0x18) <= uVar17) goto LAB_0857504c;
        if (lVar39 == 0) goto LAB_0857503c;
        FUN_085a5dd8(lVar39,uVar26,*(undefined8 *)(lVar36 + (long)(int)uVar17 * 8 + 0x20),0);
      }
      else {
        if ((lVar36 == 0) || (lVar38 = *(long *)(lVar36 + 0x30), lVar38 == 0)) goto LAB_0857503c;
        if (*(uint *)(lVar38 + 0x18) <= uVar17) {
LAB_0857504c:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        uVar28 = *(undefined8 *)(lVar38 + (long)(int)uVar17 * 8 + 0x20);
        uVar17 = FUN_0858fd30(lVar36,0);
        if (*(uint *)(lVar38 + 0x18) <= uVar17) goto LAB_0857504c;
        if (lVar39 == 0) goto LAB_0857503c;
        uVar31 = *(undefined8 *)(lVar38 + (long)(int)uVar17 * 8 + 0x20);
LAB_085742bc:
        FUN_085a5e10(lVar39,uVar26,uVar28,uVar31,0);
      }
      puVar6 = PTR_DAT_0932c850;
      if (0xffffffe0 < iVar14 - 0xfbU) {
        lVar36 = *(long *)(unaff_x19 + 0x150);
        if (*(int *)(*(long *)PTR_DAT_0932c850 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (lVar36 == 0) goto LAB_0857503c;
        puVar33 = (undefined8 *)(lVar36 + 0xb8);
        *puVar33 = **(undefined8 **)(*(long *)puVar6 + 0xb8);
        thunk_FUN_040ec700(puVar33);
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
  uVar24 = FUN_083e7eb4(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar24 & 1) != 0) {
    FUN_08511854();
  }
  cVar34 = *(char *)(unaff_x20 + 0x1e0);
  iVar20 = FUN_08570428();
  if (iVar20 == 1) {
    lVar36 = *(long *)(unaff_x19 + 0x298);
    if (lVar36 == 0) goto LAB_0857503c;
    if ((*(char *)(lVar36 + 0x15) != '\0') &&
       ((iVar14 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_085916e8(lVar36,0);
    }
    in_stack_000001e8 = unaff_x23[1];
    in_stack_000001e0 = *unaff_x23;
    FUN_08575c08();
  }
  else {
    uVar21 = 2;
    if ((uVar16 & 1) == 0) {
      uVar21 = 0;
    }
    uVar3 = 0;
    if (1 < in_stack_00000968) {
      uVar3 = uVar21;
    }
    iVar14 = 0;
    if ((uVar13 == 0 && (uVar16 & 1) == 0) && cVar34 != '\0') {
      iVar14 = 3;
    }
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_0857503c;
    uVar24 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar24 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_0857503c;
      if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x20) != '\0') {
        iVar14 = 0;
      }
    }
    uVar17 = 0;
    if (1 < in_stack_00000968) {
      uVar17 = uVar13;
    }
    if (uVar17 == 1) {
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar24 = FUN_0855a324(0);
      if ((uVar24 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (uVar16 & 1) == 0) {
          if (iVar14 == 0) {
            iVar14 = 2;
          }
          else if (iVar14 == 3) {
            iVar14 = 1;
          }
        }
      }
    }
    if (uVar22 == 0) {
      lVar36 = *(long *)(unaff_x19 + 0x198);
      if (lVar36 == 0) goto LAB_0857503c;
    }
    else {
      lVar36 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar36 == 0) goto LAB_0857503c;
      FUN_085aa8d8(lVar36,*(undefined8 *)(unaff_x19 + 0x228),*(undefined8 *)(unaff_x19 + 0x270),
                   *(undefined8 *)(unaff_x19 + 0x238),0);
    }
    FUN_08505824(lVar36,uVar3,0,0);
    FUN_0850595c(lVar36,iVar14,0);
    puVar6 = PTR_DAT_0932efa0;
    lVar38 = *(long *)(unaff_x19 + 0x108);
    lVar39 = *(long *)PTR_DAT_0932efa0;
    if (*(int *)(lVar39 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar39 = *(long *)puVar6;
    }
    puVar33 = *(undefined8 **)(lVar39 + 0xb8);
    lVar40 = puVar33[2];
    if (lVar40 == 0) {
      if (*(int *)(lVar39 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        puVar33 = *(undefined8 **)(*(long *)PTR_DAT_0932efa0 + 0xb8);
      }
      uVar26 = *puVar33;
      lVar40 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ef88);
      FUN_061da510(lVar40,uVar26,*(undefined8 *)PTR_DAT_0932ef98,0);
      plVar27 = (long *)(*(long *)(*(long *)PTR_DAT_0932efa0 + 0xb8) + 0x10);
      *plVar27 = lVar40;
      thunk_FUN_040ec700(plVar27,lVar40);
    }
    if (lVar38 == 0) goto LAB_0857503c;
    lVar39 = FUN_05c273e4(lVar38,lVar40,*(undefined8 *)PTR_DAT_0932ef80);
    if ((lVar39 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
      if (unaff_x21 == 0) goto LAB_0857503c;
      iVar14 = FUN_089791c8(unaff_x21,0);
      if (iVar14 == 4) goto LAB_085746d8;
      uVar21 = 1;
    }
    else {
LAB_085746d8:
      uVar21 = 0;
    }
    uVar24 = FUN_089d77f0(0);
    if ((uVar24 & 1) != 0) {
      FUN_08505e50(0,0,0,0x3f800000,lVar36,uVar21,0);
    }
    FUN_08511854();
  }
  if (unaff_x21 == 0) goto LAB_0857503c;
  iVar14 = FUN_089791c8(unaff_x21,0);
  if ((iVar14 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar26 = FUN_08992c4c(0);
    puVar6 = PTR_DAT_09285bb0;
    if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_09285bb0);
    }
    uVar24 = FUN_089ca704(uVar26,0,0);
    if ((uVar24 & 1) == 0) {
      uVar24 = FUN_04f38fe8(unaff_x21,&stack0x00000728,*(undefined8 *)PTR_DAT_0932ef78);
      if ((uVar24 & 1) != 0) {
        if (in_stack_00000728 == 0) goto LAB_0857503c;
        uVar26 = FUN_0899b330(in_stack_00000728,0);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*(long *)puVar6);
        }
        uVar24 = FUN_089ca704(uVar26,0,0);
        if ((uVar24 & 1) != 0) goto LAB_0857477c;
      }
    }
    else {
LAB_0857477c:
      FUN_08511854();
    }
  }
  if (uVar13 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) != 0) {
      bVar11 = 1;
    }
    if (bVar11 == 0) {
      uVar24 = FUN_089d73c4(0);
      uVar26 = *(undefined8 *)PTR_DAT_0932d9b0;
      if ((uVar24 & 1) == 0) {
        uVar28 = FUN_089a58d8(0);
      }
      else {
        uVar28 = FUN_089a5960(0);
      }
      FUN_089942c4(uVar26,uVar28,0);
    }
  }
  else {
    iVar14 = FUN_08570428();
    if (((iVar14 != 1) || (*(char *)(unaff_x19 + 0x134) == '\0')) || ((uVar29 & 1) != 0)) {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
      FUN_085a38d0(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x238),
                   *(undefined8 *)(unaff_x19 + 0x260),0);
      FUN_08511854();
    }
  }
  if ((uVar16 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_092871d8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar36 = FUN_08581e30(0);
    if (lVar36 == 0) goto LAB_0857503c;
    uVar21 = *(undefined4 *)(lVar36 + 0x48);
    FUN_085a2560(uVar21,&stack0x000006f0,&stack0x000006ec,0);
    if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0855b8d0(0,unaff_x19 + 0x278,&stack0x000006f0,in_stack_000006ec,1,1,
                 *(undefined8 *)PTR_DAT_0932d9b8,0);
    if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_0857503c;
    FUN_085a2600(*(long *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x19 + 0x228),
                 *(undefined8 *)(unaff_x19 + 0x278),uVar21,0);
    FUN_08511854();
  }
  if ((uVar29 & 0x10000000000) != 0) {
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
  if ((uVar18 & 1) != 0) {
    FUN_08511854();
  }
  uVar22 = 0;
  if (cVar34 != '\0') {
    uVar22 = 3;
  }
  uVar16 = (uint)(cVar34 == '\0');
  if (in_stack_00000968 < 2) {
    uVar16 = 1;
  }
  if (uVar13 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar22 = 0, 1 < in_stack_00000968)
       ) {
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar22 = FUN_0855a324(0);
      uVar22 = uVar22 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_0857503c;
  FUN_08505824(*(long *)(unaff_x19 + 0x1c8),((uVar16 | in_stack_00000068._4_4_) ^ 0xffffffff) & 1,0,
               0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_0857503c;
  FUN_0850595c(*(long *)(unaff_x19 + 0x1c8),uVar22,0);
  FUN_08511854();
  FUN_08511854();
  FUN_08575d60();
  uVar29 = FUN_08518cf0();
  uVar24 = FUN_08518ab8();
  if (((uVar29 & 1) != 0) && ((uVar24 & 1) != 0)) {
    lVar36 = *(long *)(unaff_x19 + 0x200);
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_archive_query_t_application_stanza_namespace_get
              ();
    if (lVar36 == 0) goto LAB_0857503c;
    FUN_08524e38(lVar36);
    FUN_08511854();
  }
  bVar9 = cVar34 == '\0';
  bVar10 = *(long *)(unaff_x20 + 0x1b0) != 0;
  if ((bVar9 || ((uStack0000000000000034 ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar30 = FUN_08519004(), (uVar30 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    bVar11 = 0;
joined_r0x08574c60:
    if (!bVar10 || bVar9) goto LAB_08574c64;
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_delete_auto_accept_rule_t_base__get:
    bVar12 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar11 = FUN_084ee3f4(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x08574c60;
    }
    bVar11 = 1;
    if (bVar10 && !bVar9)
    goto 
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_delete_auto_accept_rule_t_base__get
    ;
LAB_08574c64:
    bVar12 = lVar23 == 0 & (bVar11 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar13 = 1;
  }
  else {
    uVar13 = FUN_084ee4e4(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar13 = uVar13 ^ 1;
  }
  plVar27 = (long *)(unaff_x19 + 0x228);
  plVar25 = (long *)(unaff_x19 + 0x238);
  if (uVar15 == 0) {
    if (cVar34 == '\0') {
      return;
    }
    FUN_08571d58();
  }
  else {
    uVar21 = FUN_089af740(&stack0x00000960,0);
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
    FUN_0852fb58(&stack0x000001a8,&stack0x00000170,in_stack_00000960,in_stack_00000964,uVar21,0,0);
    if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0855b8d0(0,unaff_x19 + 0x318,&stack0x00000630,0,1,1,*(undefined8 *)PTR_DAT_0932efb0,0);
    if (cVar34 == '\0') {
      if (*(long *)(unaff_x19 + 0x308) == 0) goto LAB_0857503c;
      FUN_0852d128(*(long *)(unaff_x19 + 0x308),&stack0x00000960,plVar27,0,plVar25,&stack0x00000730,
                   unaff_x19 + 0x280,0);
      goto LAB_08572d60;
    }
    FUN_08571d58();
    if (*(long *)(unaff_x19 + 0x308) == 0) goto LAB_0857503c;
    FUN_0852d128(*(long *)(unaff_x19 + 0x308),&stack0x00000960,plVar27,bVar12,plVar25,
                 &stack0x00000730,unaff_x19 + 0x280,bVar11 & 1);
    FUN_08511854();
  }
  lVar36 = *plVar27;
  if ((bVar11 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x310) == 0) goto LAB_0857503c;
    FUN_0852d270(*(long *)(unaff_x19 + 0x310),&stack0x00000628,1,uVar13 & 1,0);
    FUN_08511854();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_08511854();
  }
  if (((bVar11 & 1) == 0) && (((uVar15 == 0 || (lVar23 != 0)) || (bVar10 && !bVar9)))) {
    lVar23 = *plVar27;
    if ((lVar23 == 0) || (lVar39 = *(long *)(unaff_x19 + 0x250), lVar39 == 0)) goto LAB_0857503c;
    in_stack_00000118 = *(undefined8 *)(lVar39 + 0x30);
    in_stack_00000110 = *(undefined8 *)(lVar39 + 0x28);
    in_stack_00000128 = *(undefined8 *)(lVar39 + 0x40);
    in_stack_00000120 = *(undefined8 *)(lVar39 + 0x38);
    in_stack_00000130 = *(undefined8 *)(lVar39 + 0x48);
    in_stack_00000148 = *(undefined8 *)(lVar23 + 0x30);
    in_stack_00000140 = *(undefined8 *)(lVar23 + 0x28);
    in_stack_00000158 = *(undefined8 *)(lVar23 + 0x40);
    in_stack_00000150 = *(undefined8 *)(lVar23 + 0x38);
    in_stack_00000160 = *(undefined8 *)(lVar23 + 0x48);
    uVar30 = FUN_089ea6c4(&stack0x00000140,&stack0x00000110,0);
    if ((uVar30 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_0857503c;
      in_stack_000000d8 = CONCAT44(in_stack_0000096c,in_stack_00000968);
      in_stack_000000d0 = CONCAT44(in_stack_00000964,in_stack_00000960);
      in_stack_000000e8 = CONCAT44(in_stack_0000097c,in_stack_00000978);
      in_stack_000000e0 = in_stack_00000970;
      in_stack_000000f0 = in_stack_00000980;
      in_stack_000000f8 = in_stack_00000988;
      in_stack_00000100 = in_stack_00000990;
      FUN_085abda4(*(long *)(unaff_x19 + 0x1d8),&stack0x000000d0,lVar36,0);
      FUN_08511854();
    }
  }
  if (((uVar29 & 1) != 0) && ((uVar24 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_08511854();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar29 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar29 & 1) == 0) {
      return;
    }
    lVar23 = *plVar25;
    if ((lVar23 != 0) && (lVar36 = *(long *)(unaff_x20 + 0x1a0), lVar36 != 0)) {
      in_stack_00000078 = *(undefined8 *)(lVar36 + 0x38);
      in_stack_00000070 = *(undefined8 *)(lVar36 + 0x30);
      in_stack_00000088 = *(undefined8 *)(lVar36 + 0x48);
      in_stack_00000080 = *(undefined8 *)(lVar36 + 0x40);
      in_stack_00000090 = *(undefined8 *)(lVar36 + 0x50);
      in_stack_000000a8 = *(undefined8 *)(lVar23 + 0x30);
      in_stack_000000a0 = *(undefined8 *)(lVar23 + 0x28);
      in_stack_000000b8 = *(undefined8 *)(lVar23 + 0x40);
      in_stack_000000b0 = *(undefined8 *)(lVar23 + 0x38);
      in_stack_000000c0 = *(undefined8 *)(lVar23 + 0x48);
      uVar29 = FUN_089ea6c4(&stack0x000000a0,&stack0x00000070,0);
      if ((uVar29 & 1) != 0) {
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


