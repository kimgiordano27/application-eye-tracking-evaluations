/*
FUNCTION_NAME: Unity.Multiplayer.Tools.MetricEvents.MetricEventPublisher$$add_OnMetricsReceived
ENTRY_POINT: 07176968
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_6
*/


void Unity_Multiplayer_Tools_MetricEvents_MetricEventPublisher__add_OnMetricsReceived
               (undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 unaff_x19;
  long unaff_x20;
  uint *puVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 *unaff_x24;
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
  
  uVar21 = *param_1;
  uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084e4df0);
  FUN_053f7250(uVar9,uVar21,*(undefined8 *)PTR_DAT_084e4e08,0);
  puVar10 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 8);
  *puVar10 = uVar9;
  thunk_FUN_03afed3c(puVar10,uVar9);
  FUN_04886970(&stack0x00000018);
  memcpy(&stack0x000000d0,&stack0x00000018,0x48);
  lVar11 = *unaff_x25;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar11 = *unaff_x25;
  }
  puVar10 = *(undefined8 **)(lVar11 + 0xb8);
  lVar20 = puVar10[2];
  if (lVar20 == 0) {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar10 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar21 = *puVar10;
    lVar20 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084e4df0);
    FUN_053f7250(lVar20,uVar21,*(undefined8 *)PTR_DAT_084e4e10,0);
    plVar12 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0x10);
    *plVar12 = lVar20;
    thunk_FUN_03afed3c(plVar12,lVar20);
  }
  FUN_04886970(&stack0x00000080,uVar9,lVar20,*unaff_x24);
  iVar2 = in_stack_00000100;
  iVar7 = in_stack_000000b0;
  uStack000000000000000c = (uint)(in_stack_000000d0 != 0x30 || in_stack_00000080 != 0x31);
  if (in_stack_000000d0 == 0x30 && in_stack_00000080 == 0x31) {
    if (in_stack_000000b0 < in_stack_00000100) {
      iVar19 = (in_stack_000000f8._4_4_ + in_stack_00000100) - in_stack_000000a8._4_4_;
      iVar3 = in_stack_000000b0;
    }
    else {
      iVar19 = (in_stack_000000b0 - in_stack_00000100) + in_stack_000000a8._4_4_;
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
    auVar26 = FUN_0719aa28(&stack0x00000070,iVar19,0);
    _in_stack_00000070 = auVar26;
    lVar11 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084e2178,1);
    puVar4 = PTR_DAT_08499480;
    lVar20 = *(long *)PTR_DAT_08499480;
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar20);
      lVar20 = *(long *)puVar4;
    }
    if (lVar11 == 0) goto LAB_0717736c;
    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_07177368;
    uVar9 = **(undefined8 **)(lVar20 + 0xb8);
    *(undefined8 *)(lVar11 + 0x28) = (*(undefined8 **)(lVar20 + 0xb8))[1];
    *(undefined8 *)(lVar11 + 0x20) = uVar9;
    thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x20),0);
    FUN_0719ab0c(&stack0x00000070,lVar11,0);
    uVar9 = FUN_07177370(&stack0x000000d0);
    uVar21 = FUN_07177370(&stack0x00000080);
    auVar26 = FUN_0719a264();
    puVar4 = PTR_DAT_084920f8;
    lVar11 = *(long *)PTR_DAT_084920f8;
    _in_stack_00000070 = auVar26;
    if (in_stack_000000e0 < 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar11 = *(long *)puVar4;
      }
      puVar15 = (undefined4 *)(*(long *)(lVar11 + 0xb8) + 8);
    }
    else {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar11 = *(long *)puVar4;
      }
      puVar15 = (undefined4 *)(*(long *)(lVar11 + 0xb8) + 4);
    }
    auVar26 = FUN_0719a7fc(&stack0x00000070,*puVar15,0);
    iVar19 = iVar2 + 7;
    if (-1 < iVar2) {
      iVar19 = iVar2;
    }
    _in_stack_00000070 = auVar26;
    auVar26 = FUN_0719a878(&stack0x00000070,(iVar19 >> 3) - iVar1,0);
    _in_stack_00000070 = auVar26;
    auVar26 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                        (&stack0x00000070,iVar2 % 8,0);
    _in_stack_00000070 = auVar26;
    auVar26 = FUN_0719aa28(&stack0x00000070,in_stack_000000f8._4_4_,0);
    _in_stack_00000070 = auVar26;
    auVar26 = FUN_0719ae14(&stack0x00000070,uVar9,0);
    _in_stack_00000070 = auVar26;
    auVar26 = FUN_071774c4(&stack0x000000d0);
    auVar26 = FUN_0719afb0(&stack0x00000070,auVar26._0_8_,auVar26._8_8_,0);
    _in_stack_00000070 = auVar26;
    uVar13 = FUN_07177590(&stack0x000000d0);
    FUN_0719aed4(&stack0x00000070,uVar13,0);
    auVar26 = FUN_0719a264();
    lVar11 = *(long *)puVar4;
    _in_stack_00000070 = auVar26;
    if (in_stack_00000090 < 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar11 = *(long *)puVar4;
      }
      puVar15 = (undefined4 *)(*(long *)(lVar11 + 0xb8) + 8);
    }
    else {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar11 = *(long *)puVar4;
      }
      puVar15 = (undefined4 *)(*(long *)(lVar11 + 0xb8) + 4);
    }
    auVar26 = FUN_0719a7fc(&stack0x00000070,*puVar15,0);
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
    auVar26 = FUN_0719ae14(&stack0x00000070,uVar21,0);
    _in_stack_00000070 = auVar26;
    auVar26 = FUN_071774c4(&stack0x00000080);
    auVar26 = FUN_0719afb0(&stack0x00000070,auVar26._0_8_,auVar26._8_8_,0);
    _in_stack_00000070 = auVar26;
    uVar13 = FUN_07177590(&stack0x00000080);
    FUN_0719aed4(&stack0x00000070,uVar13,0);
    auVar26 = FUN_0719a264();
    puVar4 = PTR_DAT_084867c8;
    _in_stack_00000070 = auVar26;
    lVar11 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,2);
    if (lVar11 == 0) goto LAB_0717736c;
    if (*(int *)(lVar11 + 0x18) == 0) {
LAB_07177368:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    *(undefined8 *)(lVar11 + 0x20) = uVar21;
    thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x20),uVar21);
    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) == 0) goto LAB_07177368;
    *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)PTR_DAT_084e4e68;
    thunk_FUN_03afed3c();
    puVar6 = PTR_DAT_084e0660;
    puVar5 = PTR_DAT_084902d8;
    uVar13 = FUN_04760f28(*(undefined8 *)PTR_DAT_084902d8,lVar11,*(undefined8 *)PTR_DAT_084e0660);
    FUN_0719ae14(&stack0x00000070,uVar13,0);
    auVar26 = FUN_0719a264();
    _in_stack_00000070 = auVar26;
    lVar11 = FUN_03a8a804(*(undefined8 *)puVar4,2);
    if (lVar11 == 0) goto LAB_0717736c;
    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_07177368;
    *(undefined8 *)(lVar11 + 0x20) = uVar21;
    thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x20),uVar21);
    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) == 0) goto LAB_07177368;
    *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)PTR_DAT_084e4e78;
    thunk_FUN_03afed3c();
    uVar21 = FUN_04760f28(*(undefined8 *)puVar5,lVar11,*(undefined8 *)puVar6);
    FUN_0719ae14(&stack0x00000070,uVar21,0);
    auVar26 = FUN_0719a264();
    _in_stack_00000070 = auVar26;
    lVar11 = FUN_03a8a804(*(undefined8 *)puVar4,2);
    if (lVar11 == 0) goto LAB_0717736c;
    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_07177368;
    *(undefined8 *)(lVar11 + 0x20) = uVar9;
    thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x20),uVar9);
    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) == 0) goto LAB_07177368;
    *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)PTR_DAT_084e4e38;
    thunk_FUN_03afed3c();
    uVar21 = FUN_04760f28(*(undefined8 *)puVar5,lVar11,*(undefined8 *)puVar6);
    FUN_0719ae14(&stack0x00000070,uVar21,0);
    auVar26 = FUN_0719a264();
    _in_stack_00000070 = auVar26;
    lVar11 = FUN_03a8a804(*(undefined8 *)puVar4,2);
    if (lVar11 == 0) goto LAB_0717736c;
    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_07177368;
    *(undefined8 *)(lVar11 + 0x20) = uVar9;
    thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x20),uVar9);
    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) == 0) goto LAB_07177368;
    *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)PTR_DAT_084e4e40;
    thunk_FUN_03afed3c();
    uVar9 = FUN_04760f28(*(undefined8 *)puVar5,lVar11,*(undefined8 *)puVar6);
    FUN_0719ae14(&stack0x00000070,uVar9,0);
  }
  lVar11 = *(long *)(unaff_x20 + 0x38);
  if (lVar11 != 0) {
    uVar16 = *(ulong *)(lVar11 + 0x18);
    if (0 < (int)uVar16) {
      uVar25 = 0;
      puVar24 = (uint *)(lVar11 + 0x50);
      uVar23 = uStack000000000000000c;
      do {
        if (*(uint *)(lVar11 + 0x18) <= uVar25) goto LAB_07177368;
        if ((puVar24[-4] == 1) &&
           (((puVar18 = puVar24 + -0xc, (uVar23 & 1) != 0 || (puVar24[-0xb] != 1)) ||
            ((*puVar18 & 0xfffffffe) != 0x30)))) {
          lVar20 = FUN_07177624(puVar18);
          if (lVar20 != 0) {
            uVar9 = FUN_0717772c(puVar18);
            auVar26 = FUN_0719a1fc(unaff_x19,0);
            _in_stack_00000018 = auVar26;
            uVar21 = thunk_FUN_03ac70f4(*(undefined8 *)PTR_DAT_084e4df8,&stack0x00000018);
            lVar17 = *unaff_x25;
            if (*(int *)(lVar17 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(lVar17);
              lVar17 = *unaff_x25;
            }
            puVar10 = *(undefined8 **)(lVar17 + 0xb8);
            lVar22 = puVar10[3];
            if (lVar22 == 0) {
              if (*(int *)(lVar17 + 0xe4) == 0) {
                thunk_FUN_03ae8be4(lVar17);
                puVar10 = *(undefined8 **)(*unaff_x25 + 0xb8);
              }
              uVar13 = *puVar10;
              lVar22 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084e4de8);
              FUN_04968870(lVar22,uVar13,*(undefined8 *)PTR_DAT_084e4e18,0);
              plVar12 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0x18);
              *plVar12 = lVar22;
              thunk_FUN_03afed3c(plVar12,lVar22);
              uVar23 = uStack000000000000000c;
            }
            uVar9 = FUN_04761f9c(uVar9,uVar21,lVar22,*(undefined8 *)PTR_DAT_084e4e00);
            auVar26 = FUN_0719a264(unaff_x19,uVar9,0);
            _in_stack_00000070 = auVar26;
            uVar21 = FUN_07177924(puVar18);
            auVar26 = FUN_0719a6c0(&stack0x00000070,uVar21,0);
            _in_stack_00000070 = auVar26;
            auVar26 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000070,lVar20,0);
            _in_stack_00000070 = auVar26;
            auVar26 = FUN_0719a878(&stack0x00000070,*puVar24 >> 3,0);
            _in_stack_00000070 = auVar26;
            auVar26 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                                (&stack0x00000070,*puVar24 & 7,0);
            _in_stack_00000070 = auVar26;
            auVar26 = FUN_0719aa28(&stack0x00000070,puVar24[-1],0);
            _in_stack_00000070 = auVar26;
            uVar8 = Unity_Multiplayer_Tools_MetricTypes_NetworkVariableEvent___ctor(puVar18);
            auVar26 = FUN_0719a7fc(&stack0x00000070,uVar8,0);
            _in_stack_00000070 = auVar26;
            auVar26 = FUN_071774c4(puVar18);
            auVar26 = FUN_0719afb0(&stack0x00000070,auVar26._0_8_,auVar26._8_8_,0);
            _in_stack_00000070 = auVar26;
            uVar21 = FUN_07177590(puVar18);
            auVar26 = FUN_0719aed4(&stack0x00000070,uVar21,0);
            _in_stack_00000060 = auVar26;
            uVar21 = FUN_07177370(puVar18);
            uVar14 = FUN_065cd268(uVar21,0);
            if ((uVar14 & 1) == 0) {
              FUN_0719ae14(&stack0x00000060,uVar21,0);
            }
            lVar20 = FUN_07177b68(puVar18);
            if (lVar20 != 0) {
              FUN_0719ab0c(&stack0x00000060,lVar20,0);
            }
            FUN_07177d50(puVar18,puVar18,uVar9,&stack0x00000118);
          }
        }
        uVar25 = uVar25 + 1;
        puVar24 = puVar24 + 0x12;
      } while ((uVar16 & 0xffffffff) != uVar25);
    }
    FUN_0719a488(unaff_x19,0);
    return;
  }
LAB_0717736c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


