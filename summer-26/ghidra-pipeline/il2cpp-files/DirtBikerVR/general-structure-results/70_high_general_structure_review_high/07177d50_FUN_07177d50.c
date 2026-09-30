/*
FUNCTION_NAME: FUN_07177d50
ENTRY_POINT: 07177d50
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_8
*/


void FUN_07177d50(int *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  int local_58;
  int local_54;
  
  if ((DAT_08984321 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084883b0);
    FUN_03a8a718(PTR_DAT_084920f8);
    FUN_03a8a718(PTR_DAT_08486858);
    FUN_03a8a718(PTR_DAT_084e4eb0);
    FUN_03a8a718(PTR_DAT_084e4eb8);
    FUN_03a8a718(PTR_DAT_084e4ec0);
    FUN_03a8a718(PTR_DAT_084e4ec8);
    FUN_03a8a718(PTR_DAT_084e4ed0);
    FUN_03a8a718(PTR_DAT_084e4ed8);
    FUN_03a8a718(PTR_DAT_084e2950);
    DAT_08984321 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  if ((param_1[1] != 1) || (*param_1 != 0x39)) {
    return;
  }
  local_70 = FUN_071774c4(param_1);
  uVar5 = Unity_Mathematics_math__mul(local_70,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar11 = *param_4;
  uVar6 = FUN_065c0764(param_3,*(undefined8 *)PTR_DAT_084e4ed0,0);
  if (lVar11 == 0) {
LAB_071783cc:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  local_80 = FUN_0719a264(lVar11,uVar6,0);
  puVar2 = PTR_DAT_084920f8;
  lVar11 = *(long *)PTR_DAT_084920f8;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar11 = *(long *)puVar2;
  }
  auVar12 = FUN_0719a7fc(local_80,*(undefined4 *)(*(long *)(lVar11 + 0xb8) + 4),0);
  puVar3 = PTR_DAT_084e2950;
  local_80 = auVar12;
  auVar12 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                      (local_80,*(undefined8 *)PTR_DAT_084e2950,0);
  local_80 = auVar12;
  if (*(int *)(*(long *)PTR_DAT_084883b0 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar6 = FUN_066e1a5c(0);
  plVar7 = (long *)FUN_03a8a804(*(undefined8 *)PTR_DAT_08486858,4);
  puVar1 = PTR_DAT_08486760;
  local_54 = param_1[5];
  lVar11 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x48),&local_54);
  if (plVar7 == (long *)0x0) goto LAB_071783cc;
  if (lVar11 != 0) {
    lVar8 = thunk_FUN_03ac73c0(lVar11,*(undefined8 *)(*plVar7 + 0x40));
    if (lVar8 == 0) goto LAB_071783d4;
  }
  if ((int)plVar7[3] != 0) {
    plVar7[4] = lVar11;
    thunk_FUN_03afed3c(plVar7 + 4,lVar11);
    local_58 = param_1[4] + 1;
    lVar11 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&local_58);
    if (lVar11 != 0) {
      lVar8 = thunk_FUN_03ac73c0(lVar11,*(undefined8 *)(*plVar7 + 0x40));
      if (lVar8 == 0) goto LAB_071783d4;
    }
    if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_071783d0;
    plVar7[5] = lVar11;
    thunk_FUN_03afed3c(plVar7 + 5,lVar11);
    lVar11 = FUN_070d8b70(local_70,0);
    if (lVar11 != 0) {
      lVar8 = thunk_FUN_03ac73c0(lVar11,*(undefined8 *)(*plVar7 + 0x40));
      if (lVar8 == 0) goto LAB_071783d4;
    }
    if (2 < *(uint *)(plVar7 + 3)) {
      plVar7[6] = lVar11;
      thunk_FUN_03afed3c(plVar7 + 6,lVar11);
      local_84 = param_1[5];
      lVar11 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&local_84);
      if (lVar11 != 0) {
        lVar8 = thunk_FUN_03ac73c0(lVar11,*(undefined8 *)(*plVar7 + 0x40));
        if (lVar8 == 0) {
LAB_071783d4:
          uVar6 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
          FUN_03a8a884(uVar6,0);
        }
      }
      if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
        plVar7[7] = lVar11;
        thunk_FUN_03afed3c(plVar7 + 7,lVar11);
        uVar6 = FUN_065ce98c(uVar6,*(undefined8 *)PTR_DAT_084e4ed8,plVar7,0);
        auVar12 = FUN_0719ae14(local_80,uVar6,0);
        local_80 = auVar12;
        auVar12 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                            (local_80,*(uint *)(param_2 + 0x30) & 7,0);
        local_80 = auVar12;
        FUN_0719aa28(local_80,param_1[0xb],0);
        lVar11 = *param_4;
        uVar6 = FUN_065c0764(param_3,*(undefined8 *)PTR_DAT_084e4eb8,0);
        if (lVar11 != 0) {
          auVar12 = FUN_0719a264(lVar11,uVar6,0);
          local_80 = auVar12;
          auVar12 = FUN_0719a7fc(local_80,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),0);
          local_80 = auVar12;
          auVar12 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                              (local_80,*(undefined8 *)puVar3,0);
          local_80 = auVar12;
          uVar6 = FUN_066e1a5c(0);
          local_88 = param_1[4] + 1;
          uVar9 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&local_88);
          local_8c = param_1[4] + 3;
          uVar10 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&local_8c);
          puVar4 = PTR_DAT_084e4ec0;
          uVar6 = FUN_065ce8d8(uVar6,*(undefined8 *)PTR_DAT_084e4ec0,uVar9,uVar10,0);
          auVar12 = FUN_0719ae14(local_80,uVar6,0);
          local_80 = auVar12;
          auVar12 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                              (local_80,*(uint *)(param_2 + 0x30) & 7,0);
          local_80 = auVar12;
          FUN_0719aa28(local_80,param_1[0xb],0);
          lVar11 = *param_4;
          uVar6 = FUN_065c0764(param_3,*(undefined8 *)PTR_DAT_084e4ec8,0);
          if (lVar11 != 0) {
            auVar12 = FUN_0719a264(lVar11,uVar6,0);
            local_80 = auVar12;
            auVar12 = FUN_0719a7fc(local_80,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),0
                                  );
            local_80 = auVar12;
            auVar12 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (local_80,*(undefined8 *)puVar3,0);
            local_80 = auVar12;
            uVar6 = FUN_066e1a5c(0);
            local_90 = param_1[4] + 3;
            uVar9 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&local_90);
            local_94 = param_1[4] + 5;
            uVar10 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&local_94);
            uVar6 = FUN_065ce8d8(uVar6,*(undefined8 *)puVar4,uVar9,uVar10,0);
            auVar12 = FUN_0719ae14(local_80,uVar6,0);
            local_80 = auVar12;
            auVar12 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                                (local_80,*(uint *)(param_2 + 0x30) & 7,0);
            local_80 = auVar12;
            FUN_0719aa28(local_80,param_1[0xb],0);
            lVar11 = *param_4;
            uVar6 = FUN_065c0764(param_3,*(undefined8 *)PTR_DAT_084e4eb0,0);
            if (lVar11 != 0) {
              auVar12 = FUN_0719a264(lVar11,uVar6,0);
              local_80 = auVar12;
              auVar12 = FUN_0719a7fc(local_80,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4)
                                     ,0);
              local_80 = auVar12;
              auVar12 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                  (local_80,*(undefined8 *)puVar3,0);
              local_80 = auVar12;
              uVar6 = FUN_066e1a5c(0);
              local_98 = param_1[4] + 5;
              uVar9 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&local_98);
              local_9c = param_1[4] + 7;
              uVar10 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&local_9c);
              uVar6 = FUN_065ce8d8(uVar6,*(undefined8 *)puVar4,uVar9,uVar10,0);
              auVar12 = FUN_0719ae14(local_80,uVar6,0);
              local_80 = auVar12;
              auVar12 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                                  (local_80,*(uint *)(param_2 + 0x30) & 7,0);
              local_80 = auVar12;
              FUN_0719aa28(local_80,param_1[0xb],0);
              return;
            }
          }
        }
        goto LAB_071783cc;
      }
    }
  }
LAB_071783d0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


