/*
FUNCTION_NAME: FUN_065edafc
ENTRY_POINT: 065edafc
PROGRAM: Untangled-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_16
*/


undefined1  [16] FUN_065edafc(undefined8 param_1,float *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  undefined8 *puVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong in_d3;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  int local_1d4;
  undefined8 local_1a0;
  float fStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined8 uStack_18c;
  undefined8 local_180;
  undefined8 uStack_178;
  ulong local_170;
  undefined8 uStack_168;
  ulong local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  float fStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  if ((DAT_071ced8a & 1) == 0) {
    FUN_02f07e70(PlayFab_AddonModels_GetSteamResponse_TypeInfo);
    FUN_02f07e70(PlayFab_MultiplayerModels_EnableMultiplayerServersForTitleRequest_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_GetStoreItemsRequest_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_GetStoreItemsResult_TypeInfo);
    FUN_02f07e70(PlayFab_EventsModels_GetTelemetryKeyRequest_TypeInfo);
    FUN_02f07e70(PlayFab_EventsModels_GetTelemetryKeyResponse_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_GetTimeRequest_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d454a8);
    FUN_02f07e70(PlayFab_ClientModels_GetTimeResult_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_GetTitleDataRequest_TypeInfo);
    DAT_071ced8a = 1;
  }
  puVar6 = PlayFab_ClientModels_GetTitleDataRequest_TypeInfo;
  puVar5 = PlayFab_ClientModels_GetTimeResult_TypeInfo;
  puVar4 = PlayFab_ClientModels_GetTimeRequest_TypeInfo;
  local_c0 = 0;
  local_b8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_d8 = 0;
  local_130 = 0;
  fStack_128 = 0.0;
  uStack_124 = 0;
  local_118 = 0;
  local_120 = 0;
  uStack_11c = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  local_140 = 0;
  uStack_138 = 0;
  if ((param_3 & 0xf) == 0) {
    local_b0 = 0;
    uStack_a8 = 0;
    FUN_04262554(&local_b0,0,param_4,1,*(undefined8 *)PlayFab_ClientModels_GetTimeRequest_TypeInfo);
  }
  else {
    local_b8 = FUN_04afac2c(param_1,*(undefined8 *)PlayFab_AddonModels_GetSteamResponse_TypeInfo);
    uVar8 = FUN_046f3b50(&local_b8,*(undefined8 *)puVar6);
    FUN_04262554(&local_c8,uVar8,2,1,*(undefined8 *)puVar4);
    FUN_046f3aac(&local_180,&local_b8,*(undefined8 *)puVar5);
    puVar7 = PlayFab_ClientModels_GetStoreItemsRequest_TypeInfo;
    puVar6 = PTR_DAT_06d034e8;
    puVar5 = PTR_DAT_06d03010;
    puVar4 = PTR_DAT_06d02c10;
    fVar3 = DAT_013f6cfc;
    fVar2 = DAT_013f6c1c;
    local_1d4 = 0;
    uVar1 = param_3 & 4;
    uStack_108 = uStack_178;
    local_110 = local_180;
    uStack_f8 = uStack_168;
    local_100 = local_170;
    uStack_e8 = uStack_158;
    local_f0 = local_160;
    uVar25 = local_170;
    uVar27 = local_160;
LAB_065edce4:
    uVar10 = FUN_04df876c(&local_110,*(undefined8 *)puVar7);
    if ((uVar10 & 1) != 0) {
      lVar11 = FUN_04df87a0(&local_110,
                            *(undefined8 *)PlayFab_ClientModels_GetStoreItemsResult_TypeInfo);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar12 = FUN_066c67b0(lVar11,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar21 = FUN_066d4b64(lVar12,0);
      if (DAT_071bab7b == '\0') {
        FUN_02f07e70(puVar4);
        DAT_071bab7b = '\x01';
      }
      lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
      fVar17 = (float)FUN_066bde7c(uVar21,uVar25,uVar27,in_d3,*(undefined4 *)(lVar13 + 0x18),
                                   *(undefined4 *)(lVar13 + 0x1c),*(undefined4 *)(lVar13 + 0x20),0);
      fVar29 = (float)uVar25;
      fVar30 = (float)uVar27;
      fVar24 = fVar30;
      fVar34 = fVar29;
      fVar18 = (float)FUN_066d3ed0(lVar12,0);
      if (DAT_071babf2 == '\0') {
        FUN_02f07e70(puVar5);
        DAT_071babf2 = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      fVar19 = SQRT(fVar30 * fVar30 + fVar17 * fVar17 + fVar29 * fVar29);
      if (fVar19 <= fVar2) {
        if (DAT_071babf5 == '\0') {
          FUN_02f07e70(puVar4);
          DAT_071babf5 = '\x01';
        }
        pfVar14 = *(float **)(*(long *)puVar4 + 0xb8);
        fVar17 = *pfVar14;
        fVar29 = pfVar14[1];
        fVar30 = pfVar14[2];
      }
      else {
        fVar17 = fVar17 / fVar19;
        fVar29 = fVar29 / fVar19;
        fVar30 = fVar30 / fVar19;
      }
      fVar22 = *param_2;
      fVar19 = param_2[1];
      fVar28 = param_2[4];
      fVar33 = param_2[5];
      fVar20 = param_2[2];
      fVar31 = param_2[3];
      if (DAT_071bac60 == '\0') {
        FUN_02f07e70(puVar6);
        DAT_071bac60 = '\x01';
      }
      fVar28 = fVar30 * fVar33 + fVar17 * fVar31 + fVar29 * fVar28;
      fVar31 = ABS(fVar28);
      in_d3 = 0;
      if (fVar31 <= 0.0) {
        fVar31 = 0.0;
      }
      fVar23 = **(float **)(*(long *)puVar6 + 0xb8) * 8.0;
      fVar33 = fVar31 * fVar3;
      if (fVar31 * fVar3 <= fVar23) {
        fVar33 = fVar23;
      }
      uVar25 = (ulong)(uint)fVar33;
      uVar27 = (ulong)(uint)ABS(0.0 - fVar28);
      if (fVar33 <= ABS(0.0 - fVar28)) {
        in_d3 = (ulong)(uint)(fVar24 * fVar30);
        fVar19 = fVar30 * fVar20 + fVar17 * fVar22 + fVar29 * fVar19;
        fVar24 = (fVar24 * fVar30 + fVar18 * fVar17 + fVar34 * fVar29) - fVar19;
        fVar28 = fVar24 / fVar28;
        uVar25 = (ulong)(uint)fVar24;
        uVar27 = (ulong)(uint)fVar19;
        if (0.0 < fVar28) {
          uVar21 = *(undefined8 *)param_2;
          fVar24 = param_2[2];
          uVar32 = *(undefined8 *)(param_2 + 3);
          fVar34 = param_2[5];
          lVar12 = FUN_066c67b0(lVar11,0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          in_d3 = FUN_066d4b64(lVar12,0);
          if (*(int *)(*(long *)PTR_DAT_06d454a8 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar26 = (ulong)(uint)(fVar24 + fVar28 * fVar34);
          uVar10 = (ulong)(uint)((float)((ulong)uVar21 >> 0x20) +
                                (float)((ulong)uVar32 >> 0x20) * fVar28);
          FUN_066d2d84(&local_130,0);
          lVar12 = FUN_066c67b0(lVar11,0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_066d4b64(lVar12,0);
          uVar21 = FUN_066bd6e0(0);
          fVar17 = fStack_128;
          fVar24 = (float)local_130;
          fVar34 = local_130._4_4_;
          uVar25 = uVar10;
          uVar27 = uVar26;
          lVar12 = FUN_066c67b0(lVar11,0);
          fVar29 = (float)uVar27;
          fVar18 = (float)uVar25;
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          fVar30 = (float)FUN_066d3ed0(lVar12,0);
          uVar21 = FUN_066bde7c(uVar21,uVar10,uVar26,in_d3,fVar24 - fVar30,fVar34 - fVar18,
                                fVar17 - fVar29,0);
          uVar25 = uVar10;
          uVar27 = uVar26;
          uVar16 = uVar1;
          if ((param_3 & 10) != 0) {
            fVar24 = (float)FUN_065eccbc(lVar11);
            fVar34 = (float)FUN_065ecd88(lVar11);
            fVar24 = ABS((float)uVar21 - fVar24);
            uVar25 = (ulong)(uint)fVar24;
            if ((fVar24 <= fVar34) &&
               (FUN_065ecd88(lVar11), ABS((float)uVar26 - (float)uVar10) <= (float)uVar25)) {
              uVar16 = param_3 & 0xe;
            }
          }
          if ((param_3 & 1) == 0) {
LAB_065ee058:
            if (uVar16 == 0) goto LAB_065edce4;
          }
          else {
            FUN_065ecffc(lVar11);
            iVar9 = FUN_065ee2ac(uVar21);
            uVar25 = uVar26;
            if (iVar9 == 0) goto LAB_065ee058;
            uVar16 = uVar16 | 1;
          }
          auVar35 = FUN_04bfd76c(lVar11,*(undefined8 *)
                                         PlayFab_MultiplayerModels_EnableMultiplayerServersForTitleRequest_TypeInfo
                                );
          uStack_18c = CONCAT44(local_118,uStack_11c);
          local_150 = 0;
          uStack_168 = 0;
          local_170 = 0;
          uStack_158 = 0;
          local_160 = 0;
          fStack_198 = fStack_128;
          local_1a0 = local_130;
          uStack_194 = uStack_124;
          uStack_190 = local_120;
          uStack_178 = 0;
          local_180 = 0;
          FUN_06615324(fVar28,&local_180,auVar35._0_8_,auVar35._8_8_,&local_1a0,uVar16,0);
          puVar15 = (undefined8 *)(local_c8 + (long)local_1d4 * 0x38);
          local_1d4 = local_1d4 + 1;
          puVar15[6] = local_150;
          puVar15[3] = uStack_168;
          puVar15[2] = local_170;
          puVar15[5] = uStack_158;
          puVar15[4] = local_160;
          puVar15[1] = uStack_178;
          *puVar15 = local_180;
          uVar25 = local_170;
          uVar27 = local_160;
        }
      }
      goto LAB_065edce4;
    }
    FUN_04262554(&local_d8,local_1d4,param_4,1,
                 *(undefined8 *)PlayFab_ClientModels_GetTimeRequest_TypeInfo);
    puVar4 = PlayFab_EventsModels_GetTelemetryKeyResponse_TypeInfo;
    FUN_04262f94(local_c8,local_c0,local_d8,uStack_d0,local_1d4,
                 *(undefined8 *)PlayFab_EventsModels_GetTelemetryKeyRequest_TypeInfo);
    uStack_138 = uStack_d0;
    local_140 = local_d8;
    FUN_042628a0(&local_c8,*(undefined8 *)puVar4);
    uStack_a8 = uStack_138;
    local_b0 = local_140;
  }
  auVar35._8_8_ = uStack_a8;
  auVar35._0_8_ = local_b0;
  return auVar35;
}


