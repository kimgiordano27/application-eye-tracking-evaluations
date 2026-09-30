/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_account_send_subscription_reply_t_subscription_handle_get
ENTRY_POINT: 08572b00
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_5
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_send_subscription_reply_t_subscription_handle_get
               (undefined8 param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  ulong uVar26;
  long *plVar27;
  long *plVar28;
  undefined8 uVar29;
  ulong uVar30;
  undefined8 uVar31;
  char cVar32;
  byte bVar33;
  undefined8 *puVar34;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar35;
  char cVar36;
  undefined8 *unaff_x23;
  long lVar37;
  char cVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  undefined1 auVar42 [16];
  uint uStack0000000000000034;
  uint uStack0000000000000040;
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
  byte bVar43;
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
  
  lVar23 = FUN_08519308(param_1,0);
  lVar35 = *(long *)(unaff_x19 + 0xe8);
  if (lVar35 != 0) {
    uVar16 = FUN_085189ec();
    uVar24 = FUN_084eea60(lVar35,uVar16 & 1,0);
    if ((uVar24 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_0857503c;
      uVar24 = thunk_FUN_084ee4e4(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
                    /* try { // try from 08572b48 to 08672b4f has its CatchHandler @ 08572da0 */
      if ((uVar24 & 1) != 0) {
                    /* try { // try from 08572b50 to 08672bc7 has its CatchHandler @ 08572794 */
        uVar17 = *(undefined4 *)(unaff_x20 + 0x160);
        uVar3 = *(undefined4 *)(unaff_x20 + 0x164);
        if (*(int *)(*(long *)PTR_DAT_0932c480 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_084eeae0(&stack0x000008d0,uVar17,uVar3,0);
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_0857503c;
        uVar25 = FUN_084ee4cc(*(long *)(unaff_x19 + 0xe8),0);
        if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*(long *)PTR_DAT_0932c538);
        }
        FUN_0855b8d0(0,uVar25,&stack0x000008d0,0,0,1,*(undefined8 *)PTR_DAT_0932efc8,0);
        uVar17 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_archive_query_t_application_stanza_namespace_get
                           ();
        FUN_084eeb24(&stack0x00000890,uVar17,*(undefined4 *)(unaff_x20 + 0x160),
                     *(undefined4 *)(unaff_x20 + 0x164),0);
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_0857503c;
        uVar25 = FUN_084ee4d4(*(long *)(unaff_x19 + 0xe8),0);
        FUN_0855b8d0(0,uVar25,&stack0x00000890,0,0,1,*(undefined8 *)PTR_DAT_0932efb8,0);
      }
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_0857503c;
      uVar24 = FUN_084ee4e4(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
      if ((uVar24 & 1) != 0) {
        lVar35 = *(long *)(unaff_x19 + 0xe8);
        if ((((lVar35 == 0) || (*(long *)(lVar35 + 0x90) == 0)) ||
            (*(long *)(*(long *)(lVar35 + 0x90) + 0x30) == 0)) ||
           ((*(long *)(lVar35 + 0x30) == 0 || (FUN_085286d0(), *(long *)(unaff_x19 + 0xe8) == 0))))
        goto LAB_0857503c;
        FUN_08511854();
      }
    }
  }
  puVar5 = PTR_DAT_0932c850;
  if (*(int *)(unaff_x20 + 0x188) != 1) {
    *(undefined1 *)(unaff_x19 + 0x134) = 0;
  }
  bVar10 = FUN_08572248();
  lVar35 = *(long *)puVar5;
  *(byte *)(unaff_x19 + 0x140) = bVar10 & 1;
  if (*(int *)(lVar35 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar24 = FUN_085721b8();
  if ((uVar24 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_0932d040 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0850cd8c();
    FUN_08511854();
    goto LAB_08572d60;
  }
  bVar10 = FUN_085189ec();
  uVar24 = FUN_08572460();
  if (((uVar24 & 1) == 0) || (*(int *)(unaff_x19 + 0x2d0) != 1 || (bVar10 & 1) != 0)) {
    if (*(int *)(*(long *)PTR_DAT_09285d28 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar24 = FUN_08975f04(0);
    if ((uVar24 & 1) == 0) {
      cVar32 = '\0';
    }
    else {
      cVar32 = *(char *)(unaff_x19 + 0x143);
    }
  }
  else {
    cVar32 = '\x01';
  }
  bVar11 = FUN_085725ac();
  FUN_085750e8();
  FUN_08519004();
  if (in_stack_000009a0 == 0) goto LAB_0857503c;
  FUN_085189dc();
  auVar42 = FUN_085751a4();
  uVar24 = auVar42._0_8_;
  bVar12 = FUN_0855712c();
  iVar18 = FUN_089d6e4c(0);
  bVar15 = auVar42[2];
  if ((iVar18 == 0xb) || (iVar18 = FUN_089d6e4c(0), (iVar18 != 0x11 & bVar12) != 1)) {
    bVar8 = false;
    bVar12 = 0;
    bVar9 = false;
  }
  else {
    iVar18 = FUN_08570428();
    if (iVar18 == 1) {
      bVar12 = 0;
    }
    else {
      bVar12 = 1;
      if (in_stack_0000094c == 0) {
        uVar24 = CONCAT53(auVar42._3_5_,CONCAT12(1,auVar42._0_2_));
        bVar15 = 1;
        bVar9 = true;
        bVar12 = 0;
        bVar8 = true;
        goto LAB_08572ef0;
      }
      if (in_stack_0000094c != 1) {
        thunk_FUN_040dedf8(PTR_DAT_09288c08);
        uVar25 = thunk_FUN_040b4efc();
        FUN_075d60dc(uVar25,0);
        uVar29 = thunk_FUN_040dedf8(PTR_DAT_0932efd0);
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar25,uVar29);
      }
    }
    bVar8 = false;
    bVar9 = true;
  }
LAB_08572ef0:
  lVar35 = *(long *)(unaff_x19 + 0x298);
  if (lVar35 != 0) {
    *(bool *)(lVar35 + 0x14) = bVar9;
    *(byte *)(lVar35 + 0x17) = bVar15 & 1;
    *(undefined4 *)(lVar35 + 0x10) = in_stack_00000948;
    FUN_0859128c();
    lVar35 = *(long *)(unaff_x19 + 0x298);
    if (lVar35 == 0) goto LAB_0857503c;
    *(bool *)(lVar35 + 0x19) = *(int *)(unaff_x20 + 0xe8) == 1;
    if (*(char *)(lVar35 + 0x15) != '\0') {
      if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_0857503c;
      FUN_05c27784(&stack0x000003a0,*(long *)(unaff_x19 + 0x108),*(undefined8 *)PTR_DAT_0932d278);
      puVar5 = PTR_DAT_0932d268;
      do {
        uVar26 = FUN_07161154(&stack0x00000870,*(undefined8 *)puVar5);
        if ((uVar26 & 1) == 0) goto LAB_08572fb4;
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
    uVar16 = 0;
  }
  else {
    uVar16 = FUN_0854e1b8(unaff_x19 + 0x300,0);
    uVar16 = uVar16 & 1;
  }
  if (in_stack_000009a0 == 0) goto LAB_0857503c;
  if (*(char *)(in_stack_000009a0 + 0x10) == '\0') {
    uStack0000000000000034 = 0;
    if (uVar16 != 0) goto LAB_0857300c;
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_session_send_notification_t:
    cVar36 = '\0';
  }
  else {
    uStack0000000000000034 = FUN_0854e1b8(unaff_x19 + 0x300,0);
    if (uVar16 == 0)
    goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_session_send_notification_t;
LAB_0857300c:
    cVar36 = *(char *)(unaff_x20 + 0x192);
  }
  if (*(char *)(unaff_x20 + 0x1ac) == '\0') {
    uStack0000000000000040 = 0;
  }
  else {
    uStack0000000000000040 = FUN_0854e1b8(unaff_x19 + 0x300,0);
  }
  uVar26 = FUN_085189dc();
  if ((uVar26 & 1) == 0) {
    bVar15 = FUN_085189ec();
  }
  else {
    bVar15 = 1;
  }
  if ((*(char *)(unaff_x20 + 400) == '\0') && ((uVar24 & 1) == 0)) {
    cVar38 = *(char *)(unaff_x19 + 0x140);
  }
  else {
    cVar38 = '\x01';
  }
  if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_0857503c;
  uVar19 = FUN_085aff74();
  if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_0857503c;
  uVar20 = FUN_08597924(*(long *)(unaff_x19 + 0x170));
  if (*(long *)(unaff_x19 + 0x1c0) == 0) goto LAB_0857503c;
  bVar7 = cVar36 != '\0';
  uVar21 = FUN_0854be1c(*(long *)(unaff_x19 + 0x1c0),0);
  if (cVar38 == '\0' && !bVar7) {
    cVar38 = '\0';
    bVar13 = 0;
  }
  else {
    iVar18 = *(int *)(unaff_x19 + 0x2a8);
    bVar13 = FUN_08572330();
    bVar13 = iVar18 == 2 | bVar13 ^ 1;
  }
  bVar43 = (byte)(uVar24 >> 0x10);
  if (((bVar43 | (byte)(uVar24 >> 8) | bVar10 | bVar13 | bVar15) & 1) == 0) {
    bVar43 = 0;
  }
  else {
    iVar18 = FUN_08570428();
    if (iVar18 == 1) {
      bVar43 = bVar43 & 1;
    }
    else {
      bVar43 = 1;
    }
  }
  if (*(char *)(unaff_x19 + 0x140) != '\0') {
    bVar43 = 1;
  }
  if (cVar38 == '\0') {
    if ((cVar36 == '\0' & (bVar15 ^ 1)) == 0) {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
      bVar4 = false;
      *(undefined4 *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) = 500;
    }
    else {
      bVar4 = false;
    }
  }
  else {
    lVar35 = *(long *)(unaff_x19 + 0x1b0);
    if (lVar35 == 0) goto LAB_0857503c;
    iVar18 = auVar42._12_4_ + -1;
    iVar22 = 500;
    if (*(int *)(unaff_x19 + 0x2a8) != 1) {
      iVar22 = 300;
    }
    if (499 < iVar18) {
      iVar18 = 500;
    }
    if ((uVar24 & 1) != 0) {
      iVar22 = iVar18;
    }
    *(int *)(lVar35 + 0x10) = iVar22;
    if (iVar22 < 500) {
      *(undefined1 *)(lVar35 + 0xd8) = 0;
      bVar4 = true;
      *(undefined4 *)(unaff_x19 + 0x2a8) = 0;
    }
    else {
      bVar4 = true;
    }
  }
  bVar14 = FUN_08575450();
  cVar36 = *(char *)(unaff_x20 + 0x1e0);
  bVar13 = 0;
  if (bVar4 || bVar7) {
    bVar13 = bVar43 ^ 1;
  }
  iVar18 = FUN_08570428();
  if (iVar18 == 1) {
    bVar33 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  else {
    bVar33 = 0;
  }
  bVar2 = bVar12;
  if ((bVar33 != 0 || *(char *)(unaff_x19 + 0x140) != '\0') || (cVar36 != '\x01' || bVar13 != 0)) {
    bVar2 = 1;
  }
  if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_0857503c;
  bVar11 = (cVar32 != '\0' | bVar11 | bVar14) & (bVar10 ^ 1);
  uVar26 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0);
  bVar13 = bVar11 | bVar2;
  iVar18 = FUN_089d6e4c(0);
  puVar5 = PTR_DAT_09326d38;
  if (iVar18 == 0x15) {
    bVar14 = bVar13;
    if ((uVar26 & 1) == 0) {
      bVar14 = bVar11;
    }
    if (*(char *)(unaff_x19 + 0x2d4) != '\0') goto LAB_085732d0;
  }
  else {
LAB_085732d0:
    bVar14 = bVar13;
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
    bVar14 = bVar13;
  }
  if ((*(char *)(unaff_x19 + 0x134) != '\0') || (*(char *)(unaff_x19 + 0x140) != '\0')) {
    bVar14 = bVar2 | bVar14;
  }
  uVar26 = FUN_089d6e9c(0);
  bVar11 = bVar2 | bVar14;
  bVar13 = bVar11;
  if ((uVar26 & 1) == 0) {
    bVar13 = bVar14;
  }
  FUN_089afec0(&stack0x00000910,0,0);
  FUN_089afedc(&stack0x00000910,0,0);
  if (*(long *)(unaff_x19 + 0x220) == 0) goto LAB_0857503c;
  plVar28 = (long *)(unaff_x19 + 0x220);
  FUN_085b2fd0(*(long *)(unaff_x19 + 0x220),&stack0x000005f0,1,0);
  if (*(int *)(unaff_x20 + 0xe8) == 0) {
    if (unaff_x21 == 0) goto LAB_0857503c;
    iVar18 = thunk_FUN_0897b814(unaff_x21,0);
    FUN_089ea1dc(&stack0x000003a0,2,0);
    if ((*(long *)(unaff_x20 + 0x1a0) == 0) ||
       ((uVar26 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0), (uVar26 & 1) != 0 &&
        (*(long *)(unaff_x20 + 0x1a0) == 0)))) goto LAB_0857503c;
    bVar33 = bVar11 & iVar18 != 1;
    puVar34 = (undefined8 *)(unaff_x19 + 0x250);
    if (*(long *)(unaff_x19 + 0x250) == 0) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar25 = FUN_08449f30(&stack0x000005c0,0);
      *puVar34 = uVar25;
      thunk_FUN_040ec700(puVar34,uVar25);
    }
    else {
      uVar26 = FUN_089ea6f4(&stack0x00000590,&stack0x00000560,0);
      if ((uVar26 & 1) != 0) {
        FUN_0844a000(puVar34,&stack0x00000530,0);
      }
    }
    puVar1 = (undefined8 *)(unaff_x19 + 600);
    if (*(long *)(unaff_x19 + 600) == 0) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar25 = FUN_08449f30(&stack0x00000500,0);
      *puVar1 = uVar25;
      thunk_FUN_040ec700(puVar1,uVar25);
    }
    else {
      uVar26 = FUN_089ea6f4(&stack0x000004d0,&stack0x000004a0,0);
      if ((uVar26 & 1) != 0) {
        FUN_0844a000(puVar1,&stack0x00000470,0);
      }
    }
    if (bVar33 != 0) {
      FUN_08575640();
    }
    if (*(long *)(unaff_x19 + 0x198) == 0) goto LAB_0857503c;
    bVar33 = bVar33 ^ 1;
    *(byte *)(*(long *)(unaff_x19 + 0x198) + 0x151) = bVar33;
    if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_0857503c;
    *(byte *)(*(long *)(unaff_x19 + 0x1c8) + 0x151) = bVar33;
    if (*(long *)(unaff_x19 + 0x1e8) == 0) goto LAB_0857503c;
    *(byte *)(*(long *)(unaff_x19 + 0x1e8) + 0xc0) = bVar33;
    if ((bVar13 & 1) == 0) {
      uVar25 = *puVar34;
    }
    else {
      if (*plVar28 == 0) goto LAB_0857503c;
      uVar25 = FUN_085b2bdc(*plVar28,0);
    }
    *(undefined8 *)(unaff_x19 + 0x228) = uVar25;
    thunk_FUN_040ec700(unaff_x19 + 0x228);
    lVar35 = 0x240;
    if (bVar2 == 0 && (bVar14 & 1) == 0) {
      lVar35 = 600;
    }
    *(undefined8 *)(unaff_x19 + 0x238) = *(undefined8 *)(unaff_x19 + lVar35);
    thunk_FUN_040ec700(unaff_x19 + 0x238);
  }
  else {
    if (((*(long *)(unaff_x20 + 0x230) == 0) ||
        (FUN_04f38fe8(*(long *)(unaff_x20 + 0x230),&stack0x00000838,*(undefined8 *)PTR_DAT_0932c828)
        , in_stack_00000838 == 0)) || (plVar27 = (long *)FUN_0856edc4(), plVar27 == (long *)0x0))
    goto LAB_0857503c;
    if (*plVar27 != *(long *)PTR_DAT_0932c850) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar27);
    }
    lVar35 = *plVar28;
    if (lVar35 != plVar27[0x44]) {
      if (lVar35 == 0) goto LAB_0857503c;
      FUN_085b2b88(lVar35,0);
      *plVar28 = plVar27[0x44];
      thunk_FUN_040ec700(plVar28);
      lVar35 = *plVar28;
    }
    if (lVar35 == 0) goto LAB_0857503c;
    uVar25 = FUN_085b2bdc(lVar35,0);
    *(undefined8 *)(unaff_x19 + 0x228) = uVar25;
    thunk_FUN_040ec700(unaff_x19 + 0x228,uVar25);
    *(long *)(unaff_x19 + 0x238) = plVar27[0x47];
    thunk_FUN_040ec700(unaff_x19 + 0x238);
    *(long *)(unaff_x19 + 0x250) = plVar27[0x4a];
    thunk_FUN_040ec700(unaff_x19 + 0x250);
    *(long *)(unaff_x19 + 600) = plVar27[0x4b];
    thunk_FUN_040ec700(unaff_x19 + 600);
    bVar11 = bVar2;
  }
  iVar18 = auVar42._8_4_;
  if (*(long *)(unaff_x19 + 0x110) == 0) goto LAB_0857503c;
  if (*(int *)(*(long *)(unaff_x19 + 0x110) + 0x18) != 0 && (bVar10 & 1) == 0) {
    if (*plVar28 == 0) goto LAB_0857503c;
    uVar25 = FUN_085b2bdc(*plVar28,0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar25;
    thunk_FUN_040ec700(unaff_x19 + 0x118,uVar25);
  }
  cVar32 = *(char *)(unaff_x20 + 0x191);
  FUN_0850cd8c();
  iVar22 = FUN_089d6e4c(0);
  if (iVar22 == 2) {
    FUN_08447f84(&stack0x000003a0,*(undefined8 *)(unaff_x19 + 0x240),0);
    FUN_08447f84(&stack0x000001a8,*(undefined8 *)(unaff_x19 + 0x248),0);
    if (lVar23 == 0) goto LAB_0857503c;
    FUN_089fb9ac(lVar23,&stack0x00000440,&stack0x00000410,0);
  }
  puVar5 = PTR_DAT_0932efa0;
  lVar37 = *(long *)(unaff_x19 + 0x108);
  lVar35 = *(long *)PTR_DAT_0932efa0;
  if (*(int *)(lVar35 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar35 = *(long *)puVar5;
  }
  puVar34 = *(undefined8 **)(lVar35 + 0xb8);
  lVar40 = puVar34[1];
  if (lVar40 == 0) {
    if (*(int *)(lVar35 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar34 = *(undefined8 **)(*(long *)PTR_DAT_0932efa0 + 0xb8);
    }
    uVar25 = *puVar34;
    lVar40 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ef88);
    FUN_061da510(lVar40,uVar25,*(undefined8 *)PTR_DAT_0932ef90,0);
    plVar28 = (long *)(*(long *)(*(long *)PTR_DAT_0932efa0 + 0xb8) + 8);
    *plVar28 = lVar40;
    thunk_FUN_040ec700(plVar28,lVar40);
  }
  if (lVar37 == 0) goto LAB_0857503c;
  lVar35 = FUN_05c273e4(lVar37,lVar40,*(undefined8 *)PTR_DAT_0932ef80);
  if ((uVar19 & 1) != 0) {
    FUN_08511854();
  }
  if ((uVar20 & 1) != 0) {
    FUN_08511854();
  }
  bVar13 = (cVar32 != '\0' | (byte)(uVar24 >> 0x18)) & (bVar10 ^ 1);
  if (bVar43 == 0) {
    if (*(char *)(unaff_x20 + 400) == '\0' && !bVar7) {
      bVar14 = (byte)uVar24 & 1;
    }
    else {
      bVar14 = 1;
    }
  }
  else {
    bVar14 = 0;
  }
  lVar37 = *(long *)(unaff_x19 + 0xe8);
  bVar11 = bVar11 & bVar14 != 0;
  if (lVar37 != 0) {
    uVar19 = FUN_085189ec();
    uVar26 = FUN_084eea60(lVar37,uVar19 & 1,0);
    if ((uVar26 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_0857503c;
      FUN_084eea88(*(long *)(unaff_x19 + 0xe8),&stack0x00000834,0);
      if (in_stack_00000834 == 1) {
        bVar43 = 1;
      }
      if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_0857503c;
      uVar26 = FUN_084ee410(*(long *)(unaff_x19 + 0xe8),0);
      if (((uVar26 & 1) == 0) && ((bVar15 & 1) == 0)) {
        bVar11 = 0;
        bVar13 = 0;
        bVar43 = 0;
        uStack0000000000000040 = 0;
        *(undefined1 *)(unaff_x19 + 0x140) = 0;
      }
      if (*(char *)(unaff_x19 + 0x134) != '\0') {
        if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_0857503c;
        bVar15 = FUN_084ee558(*(long *)(unaff_x19 + 0xe8),0);
        *(byte *)(unaff_x19 + 0x134) = bVar15 & 1;
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x1d8) == 0) goto LAB_0857503c;
  *(undefined1 *)(*(long *)(unaff_x20 + 0x1d8) + 0x140) = *(undefined1 *)(unaff_x19 + 0x140);
  iVar22 = FUN_08570428();
  if (iVar22 == 1) {
    lVar37 = *(long *)(unaff_x19 + 0x298);
    if (lVar37 == 0) goto LAB_0857503c;
    if ((*(char *)(lVar37 + 0x15) != '\0') &&
       ((iVar18 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_085916e8(lVar37,0);
    }
  }
  iVar22 = FUN_08570428();
  if (iVar22 == 1) {
    bVar15 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  else {
    bVar15 = 0;
  }
  if (bVar15 != 0 || (bVar43 != 0 || bVar11 != 0)) {
    if ((bVar43 == 0) || (iVar22 = FUN_08570428(), iVar22 == 1)) {
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
    lVar37 = *(long *)(unaff_x19 + 0x260);
    if ((lVar37 == 0) || (lVar23 == 0)) goto LAB_0857503c;
    FUN_089fc120(lVar23,*(undefined8 *)(lVar37 + 0x58),&stack0x000003e0,0);
    if (*(int *)(*(long *)PTR_DAT_09327f08 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08a06884(&stack0x000009a8,lVar23,0);
    FUN_089f0620(lVar23,0);
  }
  if (bVar9) {
LAB_08573bb0:
    puVar5 = PTR_DAT_0932efa8;
    plVar28 = (long *)(unaff_x19 + 0x270);
    uVar25 = *(undefined8 *)PTR_DAT_0932efa8;
    iVar22 = FUN_08570428();
    if (iVar22 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar26 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      if ((uVar26 & 1) != 0) {
        lVar37 = *(long *)(unaff_x19 + 0x298);
        if (lVar37 == 0) goto LAB_0857503c;
        lVar40 = *(long *)(lVar37 + 0x30);
        uVar19 = FUN_0858fd30(lVar37,0);
        if (lVar40 == 0) goto LAB_0857503c;
        if (*(uint *)(lVar40 + 0x18) <= uVar19) goto LAB_0857504c;
        plVar28 = (long *)(lVar40 + (long)(int)uVar19 * 8 + 0x20);
        if (*plVar28 == 0) goto LAB_0857503c;
        uVar25 = *(undefined8 *)(*plVar28 + 0x58);
      }
    }
    iVar22 = FUN_08570428();
    if (iVar22 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar26 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      if ((uVar26 & 1) == 0) goto LAB_08573cd0;
      lVar37 = *(long *)(unaff_x19 + 0x298);
      if (lVar37 == 0) goto LAB_0857503c;
      uVar17 = FUN_0858fd30(lVar37,0);
      uVar17 = FUN_0858fe3c(lVar37,uVar17,0);
    }
    else {
LAB_08573cd0:
      uVar17 = FUN_08557684(in_stack_00000948,0);
    }
    FUN_089af748(&stack0x000007c0,uVar17,0);
    iVar22 = FUN_08570428();
    if (iVar22 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar26 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      if ((uVar26 & 1) == 0) goto LAB_08573d70;
      lVar37 = *(long *)(unaff_x19 + 0x298);
      if (lVar37 == 0) goto LAB_0857503c;
      uVar17 = FUN_0858fd30(lVar37,0);
      FUN_0859177c(lVar37,&stack0x00000360,uVar17,0);
    }
    else {
LAB_08573d70:
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0855b8d0(0,plVar28,&stack0x000007c0,0,1,1,uVar25,0);
    }
    if ((*plVar28 == 0) || (lVar23 == 0)) goto LAB_0857503c;
    FUN_089fc120(lVar23,*(undefined8 *)(*plVar28 + 0x58),&stack0x00000330,0);
    puVar6 = PTR_DAT_093247c0;
    if (*(int *)(*(long *)PTR_DAT_093247c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (DAT_0989d7e8 == '\0') {
      FUN_04077588(PTR_DAT_093247c0);
      DAT_0989d7e8 = '\x01';
    }
    lVar37 = *(long *)puVar6;
    if (*(int *)(lVar37 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar37 = *(long *)puVar6;
    }
    if (**(long **)(lVar37 + 0xb8) == 0) goto LAB_0857503c;
    plVar27 = (long *)(**(long **)(lVar37 + 0xb8) + 0x10);
    *plVar27 = lVar23;
    thunk_FUN_040ec700(plVar27,lVar23);
    FUN_08557570(**(undefined8 **)(*(long *)puVar6 + 0xb8),in_stack_00000948,0);
    iVar22 = FUN_08570428();
    if (iVar22 == 1) {
      if (*plVar28 == 0) goto LAB_0857503c;
      FUN_089fc120(lVar23,*(undefined8 *)puVar5,&stack0x00000300,0);
    }
    if (*(int *)(*(long *)PTR_DAT_09327f08 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08a06884(&stack0x000009a8,lVar23,0);
    FUN_089f0620(lVar23,0);
    puVar34 = (undefined8 *)PTR_DAT_0932e3e0;
  }
  else {
    iVar22 = FUN_08570428();
    puVar34 = (undefined8 *)PTR_DAT_0932e3e0;
    if (iVar22 == 1) {
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar26 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      puVar34 = (undefined8 *)PTR_DAT_0932e3e0;
      if ((uVar26 & 1) != 0) goto LAB_08573bb0;
    }
  }
  PTR_DAT_0932e3e0 = (undefined *)puVar34;
  if (bVar43 != 0) {
    if ((uVar24 & 0x10000) == 0) {
      iVar22 = FUN_08570428();
      if (iVar22 == 1) goto LAB_0857435c;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_0857503c;
      FUN_085a7844(*(long *)(unaff_x19 + 0x148),&stack0x00000220,*(undefined8 *)(unaff_x19 + 0x260),
                   0);
    }
    else {
      uVar25 = *puVar34;
      iVar22 = FUN_08570428();
      if (iVar22 == 1) {
        lVar37 = *(long *)(unaff_x19 + 0x298);
        if (lVar37 == 0) goto LAB_0857503c;
        lVar40 = *(long *)(lVar37 + 0x30);
        uVar19 = FUN_0858fd0c(lVar37,0);
        if (lVar40 == 0) goto LAB_0857503c;
        if (*(uint *)(lVar40 + 0x18) <= uVar19) goto LAB_0857504c;
        plVar28 = (long *)(lVar40 + (long)(int)uVar19 * 8 + 0x20);
        if (*plVar28 == 0) goto LAB_0857503c;
        uVar25 = *(undefined8 *)(*plVar28 + 0x58);
      }
      else {
        plVar28 = (long *)(unaff_x19 + 0x268);
      }
      iVar22 = FUN_08570428();
      if (iVar22 == 1) {
        lVar37 = *(long *)(unaff_x19 + 0x298);
        if (lVar37 == 0) goto LAB_0857503c;
        uVar17 = FUN_0858fd0c(lVar37,0);
        uVar17 = FUN_0858fe3c(lVar37,uVar17,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0932eec8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar17 = FUN_085a5d90(0);
      }
      FUN_089af748(&stack0x00000780,uVar17,0);
      iVar22 = FUN_08570428();
      if (iVar22 == 1) {
        lVar37 = *(long *)(unaff_x19 + 0x298);
        if (lVar37 == 0) goto LAB_0857503c;
        uVar17 = FUN_0858fd0c(lVar37,0);
        FUN_0859177c(lVar37,&stack0x000002c0,uVar17,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_0855b8d0(0,plVar28,&stack0x00000780,0,1,1,uVar25,0);
      }
      if ((*plVar28 == 0) || (lVar23 == 0)) goto LAB_0857503c;
      FUN_089fc120(lVar23,*(undefined8 *)(*plVar28 + 0x58),&stack0x00000290,0);
      iVar22 = FUN_08570428();
      if (iVar22 == 1) {
        if (*plVar28 == 0) goto LAB_0857503c;
        FUN_089fc120(lVar23,*puVar34,&stack0x00000260,0);
      }
      if (*(int *)(*(long *)PTR_DAT_09327f08 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_08a06884(&stack0x000009a8,lVar23,0);
      FUN_089f0620(lVar23,0);
      iVar22 = FUN_08570428();
      if (iVar22 != 1) {
        lVar37 = *(long *)(unaff_x19 + 0x150);
        if (bVar8) {
          if (lVar37 == 0) goto LAB_0857503c;
          FUN_085a5e10(lVar37,*(undefined8 *)(unaff_x19 + 0x260),*(undefined8 *)(unaff_x19 + 0x268),
                       *(undefined8 *)(unaff_x19 + 0x270),0);
        }
        else {
          if (lVar37 == 0) goto LAB_0857503c;
          FUN_085a5dd8(lVar37,*(undefined8 *)(unaff_x19 + 0x260),*(undefined8 *)(unaff_x19 + 0x268),
                       0);
        }
        goto LAB_0857434c;
      }
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar19 = FUN_0858fd0c(*(long *)(unaff_x19 + 0x298),0);
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_0857503c;
      uVar26 = FUN_0858fd60(*(long *)(unaff_x19 + 0x298),0);
      lVar40 = *(long *)(unaff_x19 + 0x150);
      uVar25 = *(undefined8 *)(unaff_x19 + 0x238);
      lVar37 = *(long *)(unaff_x19 + 0x298);
      if ((uVar26 & 1) == 0) {
        if (bVar8) {
          if ((lVar37 == 0) || (lVar37 = *(long *)(lVar37 + 0x30), lVar37 == 0)) goto LAB_0857503c;
          if (*(uint *)(lVar37 + 0x18) <= uVar19) goto LAB_0857504c;
          if (lVar40 == 0) goto LAB_0857503c;
          uVar31 = *(undefined8 *)(unaff_x19 + 0x270);
          uVar29 = *(undefined8 *)(lVar37 + (long)(int)uVar19 * 8 + 0x20);
          goto LAB_085742bc;
        }
        if ((lVar37 == 0) || (lVar37 = *(long *)(lVar37 + 0x30), lVar37 == 0)) goto LAB_0857503c;
        if (*(uint *)(lVar37 + 0x18) <= uVar19) goto LAB_0857504c;
        if (lVar40 == 0) goto LAB_0857503c;
        FUN_085a5dd8(lVar40,uVar25,*(undefined8 *)(lVar37 + (long)(int)uVar19 * 8 + 0x20),0);
      }
      else {
        if ((lVar37 == 0) || (lVar39 = *(long *)(lVar37 + 0x30), lVar39 == 0)) goto LAB_0857503c;
        if (*(uint *)(lVar39 + 0x18) <= uVar19) {
LAB_0857504c:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        uVar29 = *(undefined8 *)(lVar39 + (long)(int)uVar19 * 8 + 0x20);
        uVar19 = FUN_0858fd30(lVar37,0);
        if (*(uint *)(lVar39 + 0x18) <= uVar19) goto LAB_0857504c;
        if (lVar40 == 0) goto LAB_0857503c;
        uVar31 = *(undefined8 *)(lVar39 + (long)(int)uVar19 * 8 + 0x20);
LAB_085742bc:
        FUN_085a5e10(lVar40,uVar25,uVar29,uVar31,0);
      }
      puVar5 = PTR_DAT_0932c850;
      if (0xffffffe0 < iVar18 - 0xfbU) {
        lVar37 = *(long *)(unaff_x19 + 0x150);
        if (*(int *)(*(long *)PTR_DAT_0932c850 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (lVar37 == 0) goto LAB_0857503c;
        puVar34 = (undefined8 *)(lVar37 + 0xb8);
        *puVar34 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
        thunk_FUN_040ec700(puVar34);
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
  uVar26 = FUN_083e7eb4(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar26 & 1) != 0) {
    FUN_08511854();
  }
  cVar32 = *(char *)(unaff_x20 + 0x1e0);
  iVar22 = FUN_08570428();
  if (iVar22 == 1) {
    lVar37 = *(long *)(unaff_x19 + 0x298);
    if (lVar37 == 0) goto LAB_0857503c;
    if ((*(char *)(lVar37 + 0x15) != '\0') &&
       ((iVar18 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_085916e8(lVar37,0);
    }
    in_stack_000001e8 = unaff_x23[1];
    in_stack_000001e0 = *unaff_x23;
    FUN_08575c08();
  }
  else {
    uVar17 = 2;
    if ((bVar13 & 1) == 0) {
      uVar17 = 0;
    }
    uVar3 = 0;
    if (1 < in_stack_00000968) {
      uVar3 = uVar17;
    }
    iVar18 = 0;
    if ((bVar11 == 0 && (bVar13 & 1) == 0) && cVar32 != '\0') {
      iVar18 = 3;
    }
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_0857503c;
    uVar26 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar26 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_0857503c;
      if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x20) != '\0') {
        iVar18 = 0;
      }
    }
    bVar15 = 0;
    if (1 < in_stack_00000968) {
      bVar15 = bVar11;
    }
    if (bVar15 == 1) {
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar26 = FUN_0855a324(0);
      if ((uVar26 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (bVar13 & 1) == 0) {
          if (iVar18 == 0) {
            iVar18 = 2;
          }
          else if (iVar18 == 3) {
            iVar18 = 1;
          }
        }
      }
    }
    if (bVar12 == 0) {
      lVar37 = *(long *)(unaff_x19 + 0x198);
      if (lVar37 == 0) goto LAB_0857503c;
    }
    else {
      lVar37 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar37 == 0) goto LAB_0857503c;
      FUN_085aa8d8(lVar37,*(undefined8 *)(unaff_x19 + 0x228),*(undefined8 *)(unaff_x19 + 0x270),
                   *(undefined8 *)(unaff_x19 + 0x238),0);
    }
    FUN_08505824(lVar37,uVar3,0,0);
    FUN_0850595c(lVar37,iVar18,0);
    puVar5 = PTR_DAT_0932efa0;
    lVar39 = *(long *)(unaff_x19 + 0x108);
    lVar40 = *(long *)PTR_DAT_0932efa0;
    if (*(int *)(lVar40 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar40 = *(long *)puVar5;
    }
    puVar34 = *(undefined8 **)(lVar40 + 0xb8);
    lVar41 = puVar34[2];
    if (lVar41 == 0) {
      if (*(int *)(lVar40 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        puVar34 = *(undefined8 **)(*(long *)PTR_DAT_0932efa0 + 0xb8);
      }
      uVar25 = *puVar34;
      lVar41 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ef88);
      FUN_061da510(lVar41,uVar25,*(undefined8 *)PTR_DAT_0932ef98,0);
      plVar28 = (long *)(*(long *)(*(long *)PTR_DAT_0932efa0 + 0xb8) + 0x10);
      *plVar28 = lVar41;
      thunk_FUN_040ec700(plVar28,lVar41);
    }
    if (lVar39 == 0) goto LAB_0857503c;
    lVar40 = FUN_05c273e4(lVar39,lVar41,*(undefined8 *)PTR_DAT_0932ef80);
    if ((lVar40 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
      if (unaff_x21 == 0) goto LAB_0857503c;
      iVar18 = FUN_089791c8(unaff_x21,0);
      if (iVar18 == 4) goto LAB_085746d8;
      uVar17 = 1;
    }
    else {
LAB_085746d8:
      uVar17 = 0;
    }
    uVar26 = FUN_089d77f0(0);
    if ((uVar26 & 1) != 0) {
      FUN_08505e50(0,0,0,0x3f800000,lVar37,uVar17,0);
    }
    FUN_08511854();
  }
  if (unaff_x21 == 0) goto LAB_0857503c;
  iVar18 = FUN_089791c8(unaff_x21,0);
  if ((iVar18 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar25 = FUN_08992c4c(0);
    puVar5 = PTR_DAT_09285bb0;
    if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_09285bb0);
    }
    uVar26 = FUN_089ca704(uVar25,0,0);
    if ((uVar26 & 1) == 0) {
      uVar26 = FUN_04f38fe8(unaff_x21,&stack0x00000728,*(undefined8 *)PTR_DAT_0932ef78);
      if ((uVar26 & 1) != 0) {
        if (in_stack_00000728 == 0) goto LAB_0857503c;
        uVar25 = FUN_0899b330(in_stack_00000728,0);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*(long *)puVar5);
        }
        uVar26 = FUN_089ca704(uVar25,0,0);
        if ((uVar26 & 1) != 0) goto LAB_0857477c;
      }
    }
    else {
LAB_0857477c:
      FUN_08511854();
    }
  }
  if (bVar11 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) != 0) {
      bVar43 = 1;
    }
    if (bVar43 == 0) {
      uVar26 = FUN_089d73c4(0);
      uVar25 = *(undefined8 *)PTR_DAT_0932d9b0;
      if ((uVar26 & 1) == 0) {
        uVar29 = FUN_089a58d8(0);
      }
      else {
        uVar29 = FUN_089a5960(0);
      }
      FUN_089942c4(uVar25,uVar29,0);
    }
  }
  else {
    iVar18 = FUN_08570428();
    if (((iVar18 != 1) || (*(char *)(unaff_x19 + 0x134) == '\0')) || ((uVar24 & 1) != 0)) {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
      FUN_085a38d0(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x238),
                   *(undefined8 *)(unaff_x19 + 0x260),0);
      FUN_08511854();
    }
  }
  if ((bVar13 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_092871d8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar37 = FUN_08581e30(0);
    if (lVar37 == 0) goto LAB_0857503c;
    uVar17 = *(undefined4 *)(lVar37 + 0x48);
    FUN_085a2560(uVar17,&stack0x000006f0,&stack0x000006ec,0);
    if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0855b8d0(0,unaff_x19 + 0x278,&stack0x000006f0,in_stack_000006ec,1,1,
                 *(undefined8 *)PTR_DAT_0932d9b8,0);
    if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_0857503c;
    FUN_085a2600(*(long *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x19 + 0x228),
                 *(undefined8 *)(unaff_x19 + 0x278),uVar17,0);
    FUN_08511854();
  }
  if ((uVar24 & 0x10000000000) != 0) {
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
    FUN_0852bae0(lVar23);
    if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_0857503c;
    FUN_0852a4bc(*(long *)(unaff_x19 + 0x160),*(undefined8 *)(unaff_x19 + 0x280),
                 *(undefined8 *)(unaff_x19 + 0x288),0);
    FUN_08511854();
  }
  if ((uVar21 & 1) != 0) {
    FUN_08511854();
  }
  uVar19 = 0;
  if (cVar32 != '\0') {
    uVar19 = 3;
  }
  if (bVar11 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_0857503c;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar19 = 0, 1 < in_stack_00000968)
       ) {
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar19 = FUN_0855a324(0);
      uVar19 = uVar19 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_0857503c;
  FUN_08505824(*(long *)(unaff_x19 + 0x1c8),
               (((in_stack_00000968 < 2 || cVar32 == '\0') | bVar10) ^ 0xff) & 1,0,0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_0857503c;
  FUN_0850595c(*(long *)(unaff_x19 + 0x1c8),uVar19,0);
  FUN_08511854();
  FUN_08511854();
  FUN_08575d60();
  uVar24 = FUN_08518cf0();
  uVar26 = FUN_08518ab8();
  if (((uVar24 & 1) != 0) && ((uVar26 & 1) != 0)) {
    lVar23 = *(long *)(unaff_x19 + 0x200);
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_archive_query_t_application_stanza_namespace_get
              ();
    if (lVar23 == 0) goto LAB_0857503c;
    FUN_08524e38(lVar23);
    FUN_08511854();
  }
  bVar8 = cVar32 == '\0';
  bVar9 = *(long *)(unaff_x20 + 0x1b0) != 0;
  if ((bVar8 || ((uStack0000000000000034 ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar30 = FUN_08519004(), (uVar30 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    bVar10 = 0;
joined_r0x08574c60:
    if (!bVar9 || bVar8) goto LAB_08574c64;
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_delete_auto_accept_rule_t_base__get:
    bVar11 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar10 = FUN_084ee3f4(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x08574c60;
    }
    bVar10 = 1;
    if (bVar9 && !bVar8)
    goto 
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_delete_auto_accept_rule_t_base__get
    ;
LAB_08574c64:
    bVar11 = lVar35 == 0 & (bVar10 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar19 = 1;
  }
  else {
    uVar19 = FUN_084ee4e4(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar19 = uVar19 ^ 1;
  }
  plVar28 = (long *)(unaff_x19 + 0x228);
  plVar27 = (long *)(unaff_x19 + 0x238);
  if (uVar16 == 0) {
    if (cVar32 == '\0') {
      return;
    }
    FUN_08571d58();
  }
  else {
    uVar17 = FUN_089af740(&stack0x00000960,0);
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
    FUN_0852fb58(&stack0x000001a8,&stack0x00000170,in_stack_00000960,in_stack_00000964,uVar17,0,0);
    if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0855b8d0(0,unaff_x19 + 0x318,&stack0x00000630,0,1,1,*(undefined8 *)PTR_DAT_0932efb0,0);
    if (cVar32 == '\0') {
      if (*(long *)(unaff_x19 + 0x308) == 0) goto LAB_0857503c;
      FUN_0852d128(*(long *)(unaff_x19 + 0x308),&stack0x00000960,plVar28,0,plVar27,&stack0x00000730,
                   unaff_x19 + 0x280,0);
      goto LAB_08572d60;
    }
    FUN_08571d58();
    if (*(long *)(unaff_x19 + 0x308) == 0) goto LAB_0857503c;
    FUN_0852d128(*(long *)(unaff_x19 + 0x308),&stack0x00000960,plVar28,bVar11,plVar27,
                 &stack0x00000730,unaff_x19 + 0x280,bVar10 & 1);
    FUN_08511854();
  }
  lVar23 = *plVar28;
  if ((bVar10 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x310) == 0) goto LAB_0857503c;
    FUN_0852d270(*(long *)(unaff_x19 + 0x310),&stack0x00000628,1,uVar19 & 1,0);
    FUN_08511854();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_08511854();
  }
  if (((bVar10 & 1) == 0) && (((uVar16 == 0 || (lVar35 != 0)) || (bVar9 && !bVar8)))) {
    lVar35 = *plVar28;
    if ((lVar35 == 0) || (lVar37 = *(long *)(unaff_x19 + 0x250), lVar37 == 0)) goto LAB_0857503c;
    in_stack_00000118 = *(undefined8 *)(lVar37 + 0x30);
    in_stack_00000110 = *(undefined8 *)(lVar37 + 0x28);
    in_stack_00000128 = *(undefined8 *)(lVar37 + 0x40);
    in_stack_00000120 = *(undefined8 *)(lVar37 + 0x38);
    in_stack_00000130 = *(undefined8 *)(lVar37 + 0x48);
    in_stack_00000148 = *(undefined8 *)(lVar35 + 0x30);
    in_stack_00000140 = *(undefined8 *)(lVar35 + 0x28);
    in_stack_00000158 = *(undefined8 *)(lVar35 + 0x40);
    in_stack_00000150 = *(undefined8 *)(lVar35 + 0x38);
    in_stack_00000160 = *(undefined8 *)(lVar35 + 0x48);
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
      FUN_085abda4(*(long *)(unaff_x19 + 0x1d8),&stack0x000000d0,lVar23,0);
      FUN_08511854();
    }
  }
  if (((uVar24 & 1) != 0) && ((uVar26 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_08511854();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar24 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar24 & 1) == 0) {
      return;
    }
    lVar23 = *plVar27;
    if ((lVar23 != 0) && (lVar35 = *(long *)(unaff_x20 + 0x1a0), lVar35 != 0)) {
      in_stack_00000078 = *(undefined8 *)(lVar35 + 0x38);
      in_stack_00000070 = *(undefined8 *)(lVar35 + 0x30);
      in_stack_00000088 = *(undefined8 *)(lVar35 + 0x48);
      in_stack_00000080 = *(undefined8 *)(lVar35 + 0x40);
      in_stack_00000090 = *(undefined8 *)(lVar35 + 0x50);
      in_stack_000000a8 = *(undefined8 *)(lVar23 + 0x30);
      in_stack_000000a0 = *(undefined8 *)(lVar23 + 0x28);
      in_stack_000000b8 = *(undefined8 *)(lVar23 + 0x40);
      in_stack_000000b0 = *(undefined8 *)(lVar23 + 0x38);
      in_stack_000000c0 = *(undefined8 *)(lVar23 + 0x48);
      uVar24 = FUN_089ea6c4(&stack0x000000a0,&stack0x00000070,0);
      if ((uVar24 & 1) != 0) {
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


