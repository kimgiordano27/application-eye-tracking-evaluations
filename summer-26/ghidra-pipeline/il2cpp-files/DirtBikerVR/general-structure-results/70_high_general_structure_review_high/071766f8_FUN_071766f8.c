/*
FUNCTION_NAME: FUN_071766f8
ENTRY_POINT: 071766f8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_6
*/


void FUN_071766f8(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  ulong uVar20;
  long lVar21;
  uint *puVar22;
  int iVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  uint *puVar28;
  ulong uVar29;
  undefined1 auVar30 [16];
  undefined1 local_168 [4] [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  puVar7 = PTR_DAT_084e4388;
  if ((DAT_08984315 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084e4de0);
    FUN_03a8a718(PTR_DAT_084e4388);
    FUN_03a8a718(PTR_DAT_08499480);
    FUN_03a8a718(PTR_DAT_084e4de8);
    FUN_03a8a718(PTR_DAT_084920f8);
    FUN_03a8a718(PTR_DAT_084e2178);
    FUN_03a8a718(PTR_DAT_084e4df0);
    FUN_03a8a718(PTR_DAT_084e4df8);
    FUN_03a8a718(PTR_DAT_084e0660);
    FUN_03a8a718(PTR_DAT_084e4e00);
    FUN_03a8a718(PTR_DAT_084867c8);
    FUN_03a8a718(PTR_DAT_084e4e08);
    FUN_03a8a718(PTR_DAT_084e4e10);
    FUN_03a8a718(PTR_DAT_084e4e18);
    FUN_03a8a718(PTR_DAT_084e4e20);
    FUN_03a8a718(PTR_DAT_084e4e28);
    FUN_03a8a718(PTR_DAT_084e4e30);
    FUN_03a8a718(PTR_DAT_084e3ad0);
    FUN_03a8a718(PTR_DAT_084e4e38);
    FUN_03a8a718(PTR_DAT_084e4e40);
    FUN_03a8a718(PTR_DAT_084e4e48);
    FUN_03a8a718(PTR_DAT_084902d8);
    FUN_03a8a718(PTR_DAT_084e4e50);
    FUN_03a8a718(PTR_DAT_084e4e58);
    FUN_03a8a718(PTR_DAT_084e4e60);
    FUN_03a8a718(PTR_DAT_084e4e68);
    FUN_03a8a718(PTR_DAT_084e4e70);
    FUN_03a8a718(PTR_DAT_084e4e78);
    DAT_08984315 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_c0 = 0;
  local_110._0_8_ = 0;
  local_110._8_8_ = 0;
  local_120._0_8_ = 0;
  local_120._8_8_ = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)puVar7);
  FUN_0719a6b8(lVar13,0);
  puVar7 = PTR_DAT_084e4e20;
  if (lVar13 != 0) {
    *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)(param_1 + 0x10);
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(param_1 + 0x50);
    thunk_FUN_03afed3c();
    FUN_0719a1b4(lVar13,*(undefined8 *)(param_1 + 0x48),0);
    local_168[0]._0_8_ = (ulong)(uint)local_168[0]._4_4_ << 0x20;
    FUN_070cd290(local_168,0x48,0x49,0x44,0x20,0);
    lVar14 = *(long *)puVar7;
    *(undefined4 *)(lVar13 + 0x28) = local_168[0]._0_4_;
    uVar24 = *(undefined8 *)(param_1 + 0x38);
    local_68 = lVar13;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar14 = *(long *)puVar7;
    }
    puVar4 = PTR_DAT_084e4de0;
    puVar18 = *(undefined8 **)(lVar14 + 0xb8);
    lVar25 = puVar18[1];
    if (lVar25 == 0) {
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar18 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar26 = *puVar18;
      lVar25 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084e4df0);
      FUN_053f7250(lVar25,uVar26,*(undefined8 *)PTR_DAT_084e4e08,0);
      plVar15 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
      *plVar15 = lVar25;
      thunk_FUN_03afed3c(plVar15,lVar25);
    }
    FUN_04886970(local_168,uVar24,lVar25,*(undefined8 *)puVar4);
    memcpy(&local_b0,local_168,0x48);
    lVar14 = *(long *)puVar7;
    uVar24 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar14 = *(long *)puVar7;
    }
    puVar18 = *(undefined8 **)(lVar14 + 0xb8);
    lVar25 = puVar18[2];
    if (lVar25 == 0) {
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar18 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar26 = *puVar18;
      lVar25 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084e4df0);
      FUN_053f7250(lVar25,uVar26,*(undefined8 *)PTR_DAT_084e4e10,0);
      plVar15 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
      *plVar15 = lVar25;
      thunk_FUN_03afed3c(plVar15,lVar25);
    }
    FUN_04886970(&local_100,uVar24,lVar25,*(undefined8 *)puVar4);
    bVar10 = (int)local_b0 != 0x30;
    bVar11 = (int)local_100 != 0x31;
    if (!bVar10 && !bVar11) {
      iVar2 = (int)local_80;
      iVar9 = (int)local_d0;
      iVar8 = uStack_d8._4_4_;
      if ((int)local_d0 < (int)local_80) {
        iVar23 = (uStack_88._4_4_ + (int)local_80) - uStack_d8._4_4_;
        iVar3 = (int)local_d0;
      }
      else {
        iVar23 = ((int)local_d0 - (int)local_80) + uStack_d8._4_4_;
        iVar3 = (int)local_80;
      }
      iVar1 = iVar3 + 7;
      if (-1 < iVar3) {
        iVar1 = iVar3;
      }
      iVar1 = iVar1 >> 3;
      local_110 = FUN_0719a264(lVar13,*(undefined8 *)PTR_DAT_084e4e30,0);
      puVar4 = PTR_DAT_084e3ad0;
      auVar30 = FUN_0719a6c0(local_110,*(undefined8 *)PTR_DAT_084e3ad0,0);
      local_110 = auVar30;
      auVar30 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                          (local_110,*(undefined8 *)puVar4,0);
      local_110 = auVar30;
      auVar30 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                          (local_110,iVar3 % 8,0);
      local_110 = auVar30;
      auVar30 = FUN_0719a878(local_110,iVar1,0);
      local_110 = auVar30;
      auVar30 = FUN_0719aa28(local_110,iVar23,0);
      local_110 = auVar30;
      lVar14 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084e2178,1);
      puVar4 = PTR_DAT_08499480;
      lVar25 = *(long *)PTR_DAT_08499480;
      if (*(int *)(lVar25 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar25);
        lVar25 = *(long *)puVar4;
      }
      if (lVar14 == 0) goto LAB_0717736c;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_07177368;
      uVar24 = **(undefined8 **)(lVar25 + 0xb8);
      *(undefined8 *)(lVar14 + 0x28) = (*(undefined8 **)(lVar25 + 0xb8))[1];
      *(undefined8 *)(lVar14 + 0x20) = uVar24;
      thunk_FUN_03afed3c((undefined8 *)(lVar14 + 0x20),0);
      FUN_0719ab0c(local_110,lVar14,0);
      uVar24 = FUN_07177370(&local_b0);
      uVar26 = FUN_07177370(&local_100);
      auVar30 = FUN_0719a264(lVar13,*(undefined8 *)PTR_DAT_084e4e48,0);
      puVar4 = PTR_DAT_084920f8;
      lVar14 = *(long *)PTR_DAT_084920f8;
      local_110 = auVar30;
      if ((int)local_a0 < 0) {
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar14 = *(long *)puVar4;
        }
        puVar19 = (undefined4 *)(*(long *)(lVar14 + 0xb8) + 8);
      }
      else {
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar14 = *(long *)puVar4;
        }
        puVar19 = (undefined4 *)(*(long *)(lVar14 + 0xb8) + 4);
      }
      auVar30 = FUN_0719a7fc(local_110,*puVar19,0);
      iVar23 = iVar2 + 7;
      if (-1 < iVar2) {
        iVar23 = iVar2;
      }
      local_110 = auVar30;
      auVar30 = FUN_0719a878(local_110,(iVar23 >> 3) - iVar1,0);
      local_110 = auVar30;
      auVar30 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                          (local_110,iVar2 % 8,0);
      local_110 = auVar30;
      auVar30 = FUN_0719aa28(local_110,uStack_88._4_4_,0);
      local_110 = auVar30;
      auVar30 = FUN_0719ae14(local_110,uVar24,0);
      local_110 = auVar30;
      auVar30 = FUN_071774c4(&local_b0);
      auVar30 = FUN_0719afb0(local_110,auVar30._0_8_,auVar30._8_8_,0);
      local_110 = auVar30;
      uVar16 = FUN_07177590(&local_b0);
      FUN_0719aed4(local_110,uVar16,0);
      auVar30 = FUN_0719a264(lVar13,*(undefined8 *)PTR_DAT_084e4e60,0);
      lVar14 = *(long *)puVar4;
      local_110 = auVar30;
      if ((int)local_f0 < 0) {
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar14 = *(long *)puVar4;
        }
        puVar19 = (undefined4 *)(*(long *)(lVar14 + 0xb8) + 8);
      }
      else {
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar14 = *(long *)puVar4;
        }
        puVar19 = (undefined4 *)(*(long *)(lVar14 + 0xb8) + 4);
      }
      auVar30 = FUN_0719a7fc(local_110,*puVar19,0);
      iVar2 = iVar9 + 7;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      local_110 = auVar30;
      auVar30 = FUN_0719a878(local_110,(iVar2 >> 3) - iVar1,0);
      local_110 = auVar30;
      auVar30 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                          (local_110,iVar9 % 8,0);
      local_110 = auVar30;
      auVar30 = FUN_0719aa28(local_110,iVar8,0);
      local_110 = auVar30;
      auVar30 = FUN_0719ae14(local_110,uVar26,0);
      local_110 = auVar30;
      auVar30 = FUN_071774c4(&local_100);
      auVar30 = FUN_0719afb0(local_110,auVar30._0_8_,auVar30._8_8_,0);
      local_110 = auVar30;
      uVar16 = FUN_07177590(&local_100);
      FUN_0719aed4(local_110,uVar16,0);
      auVar30 = FUN_0719a264(lVar13,*(undefined8 *)PTR_DAT_084e4e28,0);
      puVar4 = PTR_DAT_084867c8;
      local_110 = auVar30;
      lVar14 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,2);
      if (lVar14 == 0) goto LAB_0717736c;
      if (*(int *)(lVar14 + 0x18) == 0) {
LAB_07177368:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      *(undefined8 *)(lVar14 + 0x20) = uVar26;
      thunk_FUN_03afed3c((undefined8 *)(lVar14 + 0x20),uVar26);
      if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) goto LAB_07177368;
      *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)PTR_DAT_084e4e68;
      thunk_FUN_03afed3c();
      puVar6 = PTR_DAT_084e0660;
      puVar5 = PTR_DAT_084902d8;
      uVar16 = FUN_04760f28(*(undefined8 *)PTR_DAT_084902d8,lVar14,*(undefined8 *)PTR_DAT_084e0660);
      FUN_0719ae14(local_110,uVar16,0);
      auVar30 = FUN_0719a264(lVar13,*(undefined8 *)PTR_DAT_084e4e50,0);
      local_110 = auVar30;
      lVar14 = FUN_03a8a804(*(undefined8 *)puVar4,2);
      if (lVar14 == 0) goto LAB_0717736c;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_07177368;
      *(undefined8 *)(lVar14 + 0x20) = uVar26;
      thunk_FUN_03afed3c((undefined8 *)(lVar14 + 0x20),uVar26);
      if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) goto LAB_07177368;
      *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)PTR_DAT_084e4e78;
      thunk_FUN_03afed3c();
      uVar26 = FUN_04760f28(*(undefined8 *)puVar5,lVar14,*(undefined8 *)puVar6);
      FUN_0719ae14(local_110,uVar26,0);
      auVar30 = FUN_0719a264(lVar13,*(undefined8 *)PTR_DAT_084e4e70,0);
      local_110 = auVar30;
      lVar14 = FUN_03a8a804(*(undefined8 *)puVar4,2);
      if (lVar14 == 0) goto LAB_0717736c;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_07177368;
      *(undefined8 *)(lVar14 + 0x20) = uVar24;
      thunk_FUN_03afed3c((undefined8 *)(lVar14 + 0x20),uVar24);
      if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) goto LAB_07177368;
      *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)PTR_DAT_084e4e38;
      thunk_FUN_03afed3c();
      uVar26 = FUN_04760f28(*(undefined8 *)puVar5,lVar14,*(undefined8 *)puVar6);
      FUN_0719ae14(local_110,uVar26,0);
      auVar30 = FUN_0719a264(lVar13,*(undefined8 *)PTR_DAT_084e4e58,0);
      local_110 = auVar30;
      lVar14 = FUN_03a8a804(*(undefined8 *)puVar4,2);
      if (lVar14 == 0) goto LAB_0717736c;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_07177368;
      *(undefined8 *)(lVar14 + 0x20) = uVar24;
      thunk_FUN_03afed3c((undefined8 *)(lVar14 + 0x20),uVar24);
      if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) goto LAB_07177368;
      *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)PTR_DAT_084e4e40;
      thunk_FUN_03afed3c();
      uVar24 = FUN_04760f28(*(undefined8 *)puVar5,lVar14,*(undefined8 *)puVar6);
      FUN_0719ae14(local_110,uVar24,0);
    }
    lVar14 = *(long *)(param_1 + 0x38);
    if (lVar14 != 0) {
      uVar20 = *(ulong *)(lVar14 + 0x18);
      if (0 < (int)uVar20) {
        uVar29 = 0;
        puVar28 = (uint *)(lVar14 + 0x50);
        do {
          if (*(uint *)(lVar14 + 0x18) <= uVar29) goto LAB_07177368;
          if ((puVar28[-4] == 1) &&
             (((puVar22 = puVar28 + -0xc, bVar10 || bVar11 || (puVar28[-0xb] != 1)) ||
              ((*puVar22 & 0xfffffffe) != 0x30)))) {
            lVar25 = FUN_07177624(puVar22);
            if (lVar25 != 0) {
              uVar24 = FUN_0717772c(puVar22);
              auVar30 = FUN_0719a1fc(lVar13,0);
              local_168[0] = auVar30;
              uVar26 = thunk_FUN_03ac70f4(*(undefined8 *)PTR_DAT_084e4df8,local_168);
              lVar21 = *(long *)puVar7;
              if (*(int *)(lVar21 + 0xe4) == 0) {
                thunk_FUN_03ae8be4(lVar21);
                lVar21 = *(long *)puVar7;
              }
              puVar18 = *(undefined8 **)(lVar21 + 0xb8);
              lVar27 = puVar18[3];
              if (lVar27 == 0) {
                if (*(int *)(lVar21 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4(lVar21);
                  puVar18 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
                }
                uVar16 = *puVar18;
                lVar27 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084e4de8);
                FUN_04968870(lVar27,uVar16,*(undefined8 *)PTR_DAT_084e4e18,0);
                plVar15 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18);
                *plVar15 = lVar27;
                thunk_FUN_03afed3c(plVar15,lVar27);
              }
              uVar24 = FUN_04761f9c(uVar24,uVar26,lVar27,*(undefined8 *)PTR_DAT_084e4e00);
              auVar30 = FUN_0719a264(lVar13,uVar24,0);
              local_110 = auVar30;
              uVar26 = FUN_07177924(puVar22);
              auVar30 = FUN_0719a6c0(local_110,uVar26,0);
              local_110 = auVar30;
              auVar30 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                  (local_110,lVar25,0);
              local_110 = auVar30;
              auVar30 = FUN_0719a878(local_110,*puVar28 >> 3,0);
              local_110 = auVar30;
              auVar30 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                                  (local_110,*puVar28 & 7,0);
              local_110 = auVar30;
              auVar30 = FUN_0719aa28(local_110,puVar28[-1],0);
              local_110 = auVar30;
              uVar12 = Unity_Multiplayer_Tools_MetricTypes_NetworkVariableEvent___ctor(puVar22);
              auVar30 = FUN_0719a7fc(local_110,uVar12,0);
              local_110 = auVar30;
              auVar30 = FUN_071774c4(puVar22);
              auVar30 = FUN_0719afb0(local_110,auVar30._0_8_,auVar30._8_8_,0);
              local_110 = auVar30;
              uVar26 = FUN_07177590(puVar22);
              auVar30 = FUN_0719aed4(local_110,uVar26,0);
              local_120 = auVar30;
              uVar26 = FUN_07177370(puVar22);
              uVar17 = FUN_065cd268(uVar26,0);
              if ((uVar17 & 1) == 0) {
                FUN_0719ae14(local_120,uVar26,0);
              }
              lVar25 = FUN_07177b68(puVar22);
              if (lVar25 != 0) {
                FUN_0719ab0c(local_120,lVar25,0);
              }
              FUN_07177d50(puVar22,puVar22,uVar24,&local_68);
            }
          }
          uVar29 = uVar29 + 1;
          puVar28 = puVar28 + 0x12;
        } while ((uVar20 & 0xffffffff) != uVar29);
      }
      FUN_0719a488(lVar13,0);
      return;
    }
  }
LAB_0717736c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


