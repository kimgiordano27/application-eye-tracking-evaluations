/*
FUNCTION_NAME: Unity.Multiplayer.Tools.MetricEvents.MetricEventPublisher$$remove_OnMetricsReceived
ENTRY_POINT: 07176a34
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_6
*/


void Unity_Multiplayer_Tools_MetricEvents_MetricEventPublisher__remove_OnMetricsReceived(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined4 *puVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 unaff_x19;
  long unaff_x20;
  uint *puVar20;
  int iVar21;
  undefined8 unaff_x22;
  long lVar22;
  long *unaff_x25;
  uint uVar23;
  uint *puVar24;
  ulong uVar25;
  undefined1 auVar26 [16];
  uint uStack000000000000000c;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  int in_stack_00000080;
  int in_stack_00000090;
  undefined8 in_stack_000000a8;
  int in_stack_000000b0;
  int in_stack_000000d0;
  int in_stack_000000e0;
  undefined8 in_stack_000000f8;
  int in_stack_00000100;
  
  FUN_053f7250();
  *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x10) = unaff_x22;
  thunk_FUN_03afed3c();
  FUN_04886970(&stack0x00000080);
  iVar2 = in_stack_00000100;
  iVar7 = in_stack_000000b0;
  uStack000000000000000c = (uint)(in_stack_000000d0 != 0x30 || in_stack_00000080 != 0x31);
  if (in_stack_000000d0 == 0x30 && in_stack_00000080 == 0x31) {
    if (in_stack_000000b0 < in_stack_00000100) {
      iVar21 = (in_stack_000000f8._4_4_ + in_stack_00000100) - in_stack_000000a8._4_4_;
      iVar3 = in_stack_000000b0;
    }
    else {
      iVar21 = (in_stack_000000b0 - in_stack_00000100) + in_stack_000000a8._4_4_;
      iVar3 = in_stack_00000100;
    }
    iVar1 = iVar3 + 7;
    if (-1 < iVar3) {
      iVar1 = iVar3;
    }
    iVar1 = iVar1 >> 3;
    _in_stack_00000070 = FUN_0719a264();
    puVar4 = PTR_DAT_084e3ad0;
    auVar26 = FUN_0719a6c0(&stack0x00000070,*(undefined8 *)PTR_DAT_084e3ad0,0);
    _in_stack_00000070 = auVar26;
    auVar26 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                        (&stack0x00000070,*(undefined8 *)puVar4,0);
    _in_stack_00000070 = auVar26;
    auVar26 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                        (&stack0x00000070,iVar3 % 8,0);
    _in_stack_00000070 = auVar26;
    auVar26 = FUN_0719a878(&stack0x00000070,iVar1,0);
    _in_stack_00000070 = auVar26;
    auVar26 = FUN_0719aa28(&stack0x00000070,iVar21,0);
    _in_stack_00000070 = auVar26;
    lVar9 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084e2178,1);
    puVar4 = PTR_DAT_08499480;
    lVar15 = *(long *)PTR_DAT_08499480;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar15);
      lVar15 = *(long *)puVar4;
    }
    if (lVar9 == 0) goto LAB_0717736c;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_07177368;
    uVar10 = **(undefined8 **)(lVar15 + 0xb8);
    *(undefined8 *)(lVar9 + 0x28) = (*(undefined8 **)(lVar15 + 0xb8))[1];
    *(undefined8 *)(lVar9 + 0x20) = uVar10;
    thunk_FUN_03afed3c((undefined8 *)(lVar9 + 0x20),0);
    FUN_0719ab0c(&stack0x00000070,lVar9,0);
    uVar10 = FUN_07177370(&stack0x000000d0);
    uVar11 = FUN_07177370(&stack0x00000080);
    auVar26 = FUN_0719a264();
    puVar4 = PTR_DAT_084920f8;
    lVar9 = *(long *)PTR_DAT_084920f8;
    _in_stack_00000070 = auVar26;
    if (in_stack_000000e0 < 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar9 = *(long *)puVar4;
      }
      puVar16 = (undefined4 *)(*(long *)(lVar9 + 0xb8) + 8);
    }
    else {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar9 = *(long *)puVar4;
      }
      puVar16 = (undefined4 *)(*(long *)(lVar9 + 0xb8) + 4);
    }
    auVar26 = FUN_0719a7fc(&stack0x00000070,*puVar16,0);
    iVar21 = iVar2 + 7;
    if (-1 < iVar2) {
      iVar21 = iVar2;
    }
    _in_stack_00000070 = auVar26;
    auVar26 = FUN_0719a878(&stack0x00000070,(iVar21 >> 3) - iVar1,0);
    _in_stack_00000070 = auVar26;
    auVar26 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                        (&stack0x00000070,iVar2 % 8,0);
    _in_stack_00000070 = auVar26;
    auVar26 = FUN_0719aa28(&stack0x00000070,in_stack_000000f8._4_4_,0);
    _in_stack_00000070 = auVar26;
    auVar26 = FUN_0719ae14(&stack0x00000070,uVar10,0);
    _in_stack_00000070 = auVar26;
    auVar26 = FUN_071774c4(&stack0x000000d0);
    auVar26 = FUN_0719afb0(&stack0x00000070,auVar26._0_8_,auVar26._8_8_,0);
    _in_stack_00000070 = auVar26;
    uVar12 = FUN_07177590(&stack0x000000d0);
    FUN_0719aed4(&stack0x00000070,uVar12,0);
    auVar26 = FUN_0719a264();
    lVar9 = *(long *)puVar4;
    _in_stack_00000070 = auVar26;
    if (in_stack_00000090 < 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar9 = *(long *)puVar4;
      }
      puVar16 = (undefined4 *)(*(long *)(lVar9 + 0xb8) + 8);
    }
    else {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar9 = *(long *)puVar4;
      }
      puVar16 = (undefined4 *)(*(long *)(lVar9 + 0xb8) + 4);
    }
    auVar26 = FUN_0719a7fc(&stack0x00000070,*puVar16,0);
    iVar2 = iVar7 + 7;
    if (-1 < iVar7) {
      iVar2 = iVar7;
    }
    _in_stack_00000070 = auVar26;
    auVar26 = FUN_0719a878(&stack0x00000070,(iVar2 >> 3) - iVar1,0);
    _in_stack_00000070 = auVar26;
    auVar26 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                        (&stack0x00000070,iVar7 % 8,0);
    _in_stack_00000070 = auVar26;
    auVar26 = FUN_0719aa28(&stack0x00000070,in_stack_000000a8._4_4_,0);
    _in_stack_00000070 = auVar26;
    auVar26 = FUN_0719ae14(&stack0x00000070,uVar11,0);
    _in_stack_00000070 = auVar26;
    auVar26 = FUN_071774c4(&stack0x00000080);
    auVar26 = FUN_0719afb0(&stack0x00000070,auVar26._0_8_,auVar26._8_8_,0);
    _in_stack_00000070 = auVar26;
    uVar12 = FUN_07177590(&stack0x00000080);
    FUN_0719aed4(&stack0x00000070,uVar12,0);
    auVar26 = FUN_0719a264();
    puVar4 = PTR_DAT_084867c8;
    _in_stack_00000070 = auVar26;
    lVar9 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,2);
    if (lVar9 == 0) goto LAB_0717736c;
    if (*(int *)(lVar9 + 0x18) == 0) {
LAB_07177368:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    *(undefined8 *)(lVar9 + 0x20) = uVar11;
    thunk_FUN_03afed3c((undefined8 *)(lVar9 + 0x20),uVar11);
    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_07177368;
    *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)PTR_DAT_084e4e68;
    thunk_FUN_03afed3c();
    puVar6 = PTR_DAT_084e0660;
    puVar5 = PTR_DAT_084902d8;
    uVar12 = FUN_04760f28(*(undefined8 *)PTR_DAT_084902d8,lVar9,*(undefined8 *)PTR_DAT_084e0660);
    FUN_0719ae14(&stack0x00000070,uVar12,0);
    auVar26 = FUN_0719a264();
    _in_stack_00000070 = auVar26;
    lVar9 = FUN_03a8a804(*(undefined8 *)puVar4,2);
    if (lVar9 == 0) goto LAB_0717736c;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_07177368;
    *(undefined8 *)(lVar9 + 0x20) = uVar11;
    thunk_FUN_03afed3c((undefined8 *)(lVar9 + 0x20),uVar11);
    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_07177368;
    *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)PTR_DAT_084e4e78;
    thunk_FUN_03afed3c();
    uVar11 = FUN_04760f28(*(undefined8 *)puVar5,lVar9,*(undefined8 *)puVar6);
    FUN_0719ae14(&stack0x00000070,uVar11,0);
    auVar26 = FUN_0719a264();
    _in_stack_00000070 = auVar26;
    lVar9 = FUN_03a8a804(*(undefined8 *)puVar4,2);
    if (lVar9 == 0) goto LAB_0717736c;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_07177368;
    *(undefined8 *)(lVar9 + 0x20) = uVar10;
    thunk_FUN_03afed3c((undefined8 *)(lVar9 + 0x20),uVar10);
    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_07177368;
    *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)PTR_DAT_084e4e38;
    thunk_FUN_03afed3c();
    uVar11 = FUN_04760f28(*(undefined8 *)puVar5,lVar9,*(undefined8 *)puVar6);
    FUN_0719ae14(&stack0x00000070,uVar11,0);
    auVar26 = FUN_0719a264();
    _in_stack_00000070 = auVar26;
    lVar9 = FUN_03a8a804(*(undefined8 *)puVar4,2);
    if (lVar9 == 0) goto LAB_0717736c;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_07177368;
    *(undefined8 *)(lVar9 + 0x20) = uVar10;
    thunk_FUN_03afed3c((undefined8 *)(lVar9 + 0x20),uVar10);
    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_07177368;
    *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)PTR_DAT_084e4e40;
    thunk_FUN_03afed3c();
    uVar10 = FUN_04760f28(*(undefined8 *)puVar5,lVar9,*(undefined8 *)puVar6);
    FUN_0719ae14(&stack0x00000070,uVar10,0);
  }
  lVar9 = *(long *)(unaff_x20 + 0x38);
  if (lVar9 != 0) {
    uVar17 = *(ulong *)(lVar9 + 0x18);
    if (0 < (int)uVar17) {
      uVar25 = 0;
      puVar24 = (uint *)(lVar9 + 0x50);
      uVar23 = uStack000000000000000c;
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar25) goto LAB_07177368;
        if ((puVar24[-4] == 1) &&
           (((puVar20 = puVar24 + -0xc, (uVar23 & 1) != 0 || (puVar24[-0xb] != 1)) ||
            ((*puVar20 & 0xfffffffe) != 0x30)))) {
          lVar15 = FUN_07177624(puVar20);
          if (lVar15 != 0) {
            uVar10 = FUN_0717772c(puVar20);
            auVar26 = FUN_0719a1fc(unaff_x19,0);
            _in_stack_00000018 = auVar26;
            uVar11 = thunk_FUN_03ac70f4(*(undefined8 *)PTR_DAT_084e4df8,&stack0x00000018);
            lVar18 = *unaff_x25;
            if (*(int *)(lVar18 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(lVar18);
              lVar18 = *unaff_x25;
            }
            puVar19 = *(undefined8 **)(lVar18 + 0xb8);
            lVar22 = puVar19[3];
            if (lVar22 == 0) {
              if (*(int *)(lVar18 + 0xe4) == 0) {
                thunk_FUN_03ae8be4(lVar18);
                puVar19 = *(undefined8 **)(*unaff_x25 + 0xb8);
              }
              uVar12 = *puVar19;
              lVar22 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084e4de8);
              FUN_04968870(lVar22,uVar12,*(undefined8 *)PTR_DAT_084e4e18,0);
              plVar13 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0x18);
              *plVar13 = lVar22;
              thunk_FUN_03afed3c(plVar13,lVar22);
              uVar23 = uStack000000000000000c;
            }
            uVar10 = FUN_04761f9c(uVar10,uVar11,lVar22,*(undefined8 *)PTR_DAT_084e4e00);
            auVar26 = FUN_0719a264(unaff_x19,uVar10,0);
            _in_stack_00000070 = auVar26;
            uVar11 = FUN_07177924(puVar20);
            auVar26 = FUN_0719a6c0(&stack0x00000070,uVar11,0);
            _in_stack_00000070 = auVar26;
            auVar26 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000070,lVar15,0);
            _in_stack_00000070 = auVar26;
            auVar26 = FUN_0719a878(&stack0x00000070,*puVar24 >> 3,0);
            _in_stack_00000070 = auVar26;
            auVar26 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                                (&stack0x00000070,*puVar24 & 7,0);
            _in_stack_00000070 = auVar26;
            auVar26 = FUN_0719aa28(&stack0x00000070,puVar24[-1],0);
            _in_stack_00000070 = auVar26;
            uVar8 = Unity_Multiplayer_Tools_MetricTypes_NetworkVariableEvent___ctor(puVar20);
            auVar26 = FUN_0719a7fc(&stack0x00000070,uVar8,0);
            _in_stack_00000070 = auVar26;
            auVar26 = FUN_071774c4(puVar20);
            auVar26 = FUN_0719afb0(&stack0x00000070,auVar26._0_8_,auVar26._8_8_,0);
            _in_stack_00000070 = auVar26;
            uVar11 = FUN_07177590(puVar20);
            auVar26 = FUN_0719aed4(&stack0x00000070,uVar11,0);
            _in_stack_00000060 = auVar26;
            uVar11 = FUN_07177370(puVar20);
            uVar14 = FUN_065cd268(uVar11,0);
            if ((uVar14 & 1) == 0) {
              FUN_0719ae14(&stack0x00000060,uVar11,0);
            }
            lVar15 = FUN_07177b68(puVar20);
            if (lVar15 != 0) {
              FUN_0719ab0c(&stack0x00000060,lVar15,0);
            }
            FUN_07177d50(puVar20,puVar20,uVar10,&stack0x00000118);
          }
        }
        uVar25 = uVar25 + 1;
        puVar24 = puVar24 + 0x12;
      } while ((uVar17 & 0xffffffff) != uVar25);
    }
    FUN_0719a488(unaff_x19,0);
    return;
  }
LAB_0717736c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


