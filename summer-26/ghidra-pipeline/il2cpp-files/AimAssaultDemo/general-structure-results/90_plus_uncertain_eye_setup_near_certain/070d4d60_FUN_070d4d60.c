/*
FUNCTION_NAME: FUN_070d4d60
ENTRY_POINT: 070d4d60
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 125
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_070d4d60(long param_1,long *param_2,long *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined *puVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  byte bStack_b8;
  byte bStack_b7;
  undefined2 uStack_b6;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  
  if ((DAT_08267c0a & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d8dc68);
    FUN_0373b518(System_Drawing_Size_var);
    FUN_0373b518(OVRPlugin_Vector3f_var);
    FUN_0373b518(OVRPlugin_VirtualKeyboardModelAnimationState_var);
    FUN_0373b518(OVRRaycaster_RaycastHit_var);
    FUN_0373b518(OVRSceneLoader_SceneInfo_var);
    FUN_0373b518(OVRSpaceQuery_Options_var);
    FUN_0373b518(OVRSpatialAnchor_LoadOptions_var);
    FUN_0373b518(OVRSpatialAnchor_MultiAnchorDelegatePair_var);
    FUN_0373b518(OVRVirtualKeyboard_VirtualKeyboardTextureInfo_var);
    FUN_0373b518(OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup_var);
    FUN_0373b518(
                UnityEngine_XR_OpenXR_Features_Interactions_OculusTouchControllerProfile_OculusTouchController_var
                );
    DAT_08267c0a = 1;
  }
  bStack_b8 = 0;
  bStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b4 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  if ((*param_3 != 0) && (lVar12 = *(long *)(*param_3 + 0x1a0), lVar12 != 0)) {
    uVar13 = FUN_06f2c330(lVar12,0);
    if ((uVar13 & 1) == 0) {
      uVar13 = 1;
    }
    else {
      if ((*param_3 == 0) || (lVar12 = *(long *)(*param_3 + 0x1a0), lVar12 == 0)) goto LAB_070d5618;
      uVar14 = FUN_06f2c478(lVar12,0);
      uVar13 = 1;
      if ((uVar14 & 1) != 0) {
        uVar13 = 2;
      }
    }
    puVar6 = System_Drawing_Size_var;
    uVar14 = 0;
    lVar17 = 0x20;
    lVar12 = 0x20;
    do {
      if (*param_3 == 0) goto LAB_070d5618;
      FUN_070a32bc(&local_240,*param_3,uVar14 & 0xffffffff,0);
      uStack_f8 = CONCAT44(uStack_234,uStack_238);
      uStack_e8 = CONCAT44(uStack_224,local_228);
      uStack_f0 = CONCAT44(uStack_22c,local_230);
      local_100 = local_240;
      uStack_d8 = uStack_218;
      local_e0 = local_220;
      uStack_c8 = uStack_208;
      uStack_d0 = uStack_210;
      if (*param_3 == 0) goto LAB_070d5618;
      FUN_070a31c8(&local_240,*param_3,uVar14 & 0xffffffff,0);
      uStack_2b8 = CONCAT44(uStack_234,uStack_238);
      uStack_2a8 = CONCAT44(uStack_224,local_228);
      uStack_2b0 = CONCAT44(uStack_22c,local_230);
      uStack_118 = uStack_218;
      local_120 = local_220;
      uStack_108 = uStack_208;
      uStack_110 = uStack_210;
      local_140 = local_240;
      lVar18 = *(long *)(param_1 + 0x108);
      local_2c0 = local_240;
      uStack_298 = uStack_218;
      local_2a0 = local_220;
      uStack_288 = uStack_208;
      uStack_290 = uStack_210;
      uStack_2f8 = uStack_f8;
      local_300 = local_100;
      uStack_2e8 = uStack_e8;
      uStack_2f0 = uStack_f0;
      uStack_2d8 = uStack_d8;
      local_2e0 = local_e0;
      uStack_2c8 = uStack_c8;
      uStack_2d0 = uStack_d0;
      uStack_138 = uStack_2b8;
      uStack_130 = uStack_2b0;
      uStack_128 = uStack_2a8;
      FUN_075970f4(&local_280,&local_2c0,&local_300,0);
      uStack_238 = (undefined4)uStack_278;
      uStack_234 = (undefined4)((ulong)uStack_278 >> 0x20);
      local_240 = local_280;
      local_228 = (undefined4)uStack_268;
      uStack_224 = (undefined4)((ulong)uStack_268 >> 0x20);
      local_230 = (undefined4)uStack_270;
      uStack_22c = (undefined4)((ulong)uStack_270 >> 0x20);
      uStack_218 = uStack_258;
      local_220 = local_260;
      uStack_208 = uStack_248;
      uStack_210 = uStack_250;
      if (lVar18 == 0) goto LAB_070d5618;
      local_340 = local_280;
      uStack_318 = uStack_258;
      local_320 = local_260;
      uStack_308 = uStack_248;
      uStack_310 = uStack_250;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_070d561c;
      puVar2 = (undefined8 *)(lVar18 + lVar12);
      puVar2[5] = uStack_258;
      puVar2[4] = local_260;
      puVar2[7] = uStack_248;
      puVar2[6] = uStack_250;
      puVar2[1] = uStack_278;
      *puVar2 = local_280;
      puVar2[3] = uStack_268;
      puVar2[2] = uStack_270;
      uStack_178 = uStack_f8;
      local_180 = local_100;
      uStack_168 = uStack_e8;
      uStack_170 = uStack_f0;
      uStack_158 = uStack_d8;
      local_160 = local_e0;
      uStack_148 = uStack_c8;
      uStack_150 = uStack_d0;
      FUN_075973e4(0,0,0,0x3f800000,&local_180,3,0);
      uStack_378 = uStack_138;
      local_380 = local_140;
      uStack_368 = uStack_128;
      uStack_370 = uStack_130;
      uStack_358 = uStack_118;
      local_360 = local_120;
      uStack_348 = uStack_108;
      uStack_350 = uStack_110;
      uStack_3b8 = uStack_178;
      local_3c0 = local_180;
      uStack_3a8 = uStack_168;
      uStack_3b0 = uStack_170;
      uStack_398 = uStack_158;
      local_3a0 = local_160;
      uStack_388 = uStack_148;
      uStack_390 = uStack_150;
      FUN_075970f4(&local_280,&local_380,&local_3c0,0);
      uStack_1b8 = uStack_278;
      local_1c0 = local_280;
      uStack_1a8 = uStack_268;
      uStack_1b0 = uStack_270;
      uStack_198 = uStack_258;
      local_1a0 = local_260;
      uStack_188 = uStack_248;
      uStack_190 = uStack_250;
      FUN_07596330(&local_280,&local_1c0,0);
      uStack_1f8 = uStack_278;
      local_200 = local_280;
      uStack_1e8 = uStack_268;
      uStack_1f0 = uStack_270;
      uStack_1d8 = uStack_258;
      local_1e0 = local_260;
      uStack_1c8 = uStack_248;
      uStack_1d0 = uStack_250;
      fVar25 = 1.0;
      fVar29 = -1.0;
      fVar19 = (float)FUN_0759745c(0xbf800000,&local_200,0);
      fVar26 = 1.0;
      fVar30 = -1.0;
      fVar20 = (float)FUN_0759745c(0x3f800000,&local_200,0);
      fVar27 = -1.0;
      fVar31 = -1.0;
      fVar21 = (float)FUN_0759745c(0xbf800000,&local_200,0);
      uVar28 = 0;
      uVar32 = 0x3f800000;
      uVar22 = FUN_0759745c(0,&local_200,0);
      lVar18 = *(long *)(param_1 + 0xd8);
      if (lVar18 == 0) goto LAB_070d5618;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_070d561c;
      pfVar3 = (float *)(lVar18 + lVar17);
      *pfVar3 = fVar19;
      pfVar3[1] = fVar25;
      pfVar3[2] = fVar29;
      pfVar3[3] = 0.0;
      lVar18 = *(long *)(param_1 + 0xe0);
      if (lVar18 == 0) goto LAB_070d5618;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_070d561c;
      pfVar3 = (float *)(lVar18 + lVar17);
      *pfVar3 = fVar20 - fVar19;
      pfVar3[1] = fVar26 - fVar25;
      pfVar3[2] = fVar30 - fVar29;
      pfVar3[3] = 0.0;
      lVar18 = *(long *)(param_1 + 0xe8);
      if (lVar18 == 0) goto LAB_070d5618;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_070d561c;
      pfVar3 = (float *)(lVar18 + lVar17);
      *pfVar3 = fVar21 - fVar19;
      pfVar3[1] = fVar27 - fVar25;
      pfVar3[2] = fVar31 - fVar29;
      pfVar3[3] = 0.0;
      lVar18 = *(long *)(param_1 + 0xf0);
      if (lVar18 == 0) goto LAB_070d5618;
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_070d561c;
      uVar14 = uVar14 + 1;
      puVar4 = (undefined4 *)(lVar18 + lVar17);
      lVar12 = lVar12 + 0x40;
      lVar17 = lVar17 + 0x10;
      *puVar4 = uVar22;
      puVar4[1] = uVar28;
      puVar4[2] = uVar32;
      puVar4[3] = 0;
    } while (uVar13 != uVar14);
    lVar12 = *(long *)puVar6;
    lVar17 = *(long *)(param_1 + 0xc0);
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar12 = *(long *)puVar6;
    }
    if ((*param_3 != 0) && (lVar18 = *(long *)(*param_3 + 0xd8), lVar18 != 0)) {
      uVar22 = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x20);
      fVar19 = (float)FUN_075566a0(lVar18,0);
      if (lVar17 != 0) {
        thunk_FUN_07576abc(1.0 / fVar19,0,0,0,lVar17,uVar22,0);
        if (*(long *)(param_1 + 0xc0) != 0) {
          FUN_075780c4(*(long *)(param_1 + 0xc0),
                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x24),
                       *(undefined8 *)(param_1 + 0x108),0);
          if (*(long *)(param_1 + 0xc0) != 0) {
            FUN_075780ac(*(long *)(param_1 + 0xc0),
                         *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x28),
                         *(undefined8 *)(param_1 + 0xd8),0);
            if (*(long *)(param_1 + 0xc0) != 0) {
              FUN_075780ac(*(long *)(param_1 + 0xc0),
                           *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x14),
                           *(undefined8 *)(param_1 + 0xe0),0);
              if (*(long *)(param_1 + 0xc0) != 0) {
                FUN_075780ac(*(long *)(param_1 + 0xc0),
                             *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18),
                             *(undefined8 *)(param_1 + 0xe8),0);
                if (*(long *)(param_1 + 0xc0) != 0) {
                  FUN_075780ac(*(long *)(param_1 + 0xc0),
                               *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x1c),
                               *(undefined8 *)(param_1 + 0xf0),0);
                  if (*param_2 != 0) {
                    if (*(int *)(*param_2 + 0x10) == 0) {
                      lVar12 = *(long *)(param_1 + 0xd0);
                      if (lVar12 == 0) goto LAB_070d5618;
                      uVar10 = *(uint *)(lVar12 + 0x18);
                      iVar1 = *(int *)(param_1 + 0xbc) + 1;
                      iVar8 = 0;
                      if (uVar10 != 0) {
                        iVar8 = iVar1 / (int)uVar10;
                      }
                      uVar11 = iVar1 - iVar8 * uVar10;
                      *(uint *)(param_1 + 0xbc) = uVar11;
                      if (uVar10 <= uVar11) {
LAB_070d561c:
                    /* WARNING: Subroutine does not return */
                        FUN_0373b7bc();
                      }
                      if ((*param_3 == 0) ||
                         (plVar16 = *(long **)(lVar12 + (long)(int)uVar11 * 8 + 0x20),
                         plVar16 == (long *)0x0)) goto LAB_070d5618;
                      iVar1 = *(int *)(*param_3 + 0x160);
                      iVar8 = (**(code **)(*plVar16 + 0x188))
                                        (plVar16,*(undefined8 *)(*plVar16 + 400));
                      if ((*param_3 == 0) || (lVar12 = *(long *)(param_1 + 0xd0), lVar12 == 0))
                      goto LAB_070d5618;
                      if (*(uint *)(lVar12 + 0x18) <= *(uint *)(param_1 + 0xbc)) goto LAB_070d561c;
                      plVar15 = *(long **)(lVar12 + (long)(int)*(uint *)(param_1 + 0xbc) * 8 + 0x20)
                      ;
                      if (plVar15 == (long *)0x0) goto LAB_070d5618;
                      iVar5 = *(int *)(*param_3 + 0x164);
                      iVar9 = (**(code **)(*plVar15 + 0x1a8))
                                        (plVar15,*(undefined8 *)(*plVar15 + 0x1b0));
                      uVar23 = FUN_075a2644(0);
                      uVar24 = FUN_075a2644(0);
                      lVar12 = *(long *)(param_1 + 0xc0);
                      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                        thunk_FUN_03798b70();
                      }
                      if (lVar12 == 0) goto LAB_070d5618;
                      thunk_FUN_07576cdc(lVar12,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar6 + 0xb8) + 0xc),plVar16,0
                                        );
                      if (*(long *)(param_1 + 0xc0) == 0) goto LAB_070d5618;
                      thunk_FUN_07576abc((float)iVar1 / (float)iVar8,(float)iVar5 / (float)iVar9,
                                         uVar23,uVar24,*(long *)(param_1 + 0xc0),
                                         *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8),0);
                    }
                    if ((*param_3 != 0) && (lVar12 = *(long *)(*param_3 + 0xd8), lVar12 != 0)) {
                      uVar10 = FUN_075571ec(lVar12,0);
                      local_240 = 0;
                      uStack_238 = 0;
                      uStack_234 = 0;
                      local_228 = 0;
                      local_230 = 0;
                      uStack_22c = 0;
                      FUN_070d5620(&local_240,param_2,uVar10 & 1);
                      bStack_b8 = (byte)uStack_238;
                      bStack_b7 = (byte)((uint)uStack_238 >> 8);
                      uStack_b6 = (undefined2)((uint)uStack_238 >> 0x10);
                      local_c0 = local_240;
                      uStack_ac = uStack_22c;
                      local_a8 = local_228;
                      uStack_b4 = uStack_234;
                      local_b0 = local_230;
                      uVar10 = FUN_070d570c((undefined8 *)(param_1 + 0x160),&local_c0);
                      lVar12 = *(long *)(param_1 + 0xc0);
                      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                        thunk_FUN_03798b70(*(long *)puVar6);
                      }
                      if (lVar12 != 0) {
                        uVar11 = FUN_07575020(lVar12,*(undefined4 *)
                                                      (*(long *)(*(long *)puVar6 + 0xb8) + 4),0);
                        if ((uVar10 & uVar11 & 1) == 0) {
                          *(ulong *)(param_1 + 0x174) = CONCAT44(local_a8,uStack_ac);
                          *(ulong *)(param_1 + 0x16c) = CONCAT44(local_b0,uStack_b4);
                          *(ulong *)(param_1 + 0x168) =
                               CONCAT44(uStack_b4,CONCAT22(uStack_b6,CONCAT11(bStack_b7,bStack_b8)))
                          ;
                          *(undefined8 *)(param_1 + 0x160) = local_c0;
                          uVar23 = *(undefined8 *)(param_1 + 0xc0);
                          bVar7 = (byte)local_c0;
                          if (*(int *)(*(long *)PTR_DAT_07d8dc68 + 0xe4) == 0) {
                            thunk_FUN_03798b70();
                          }
                          FUN_06fa838c(uVar23,*(undefined8 *)
                                               OVRPlugin_VirtualKeyboardModelAnimationState_var,
                                       bVar7 & 1,0);
                          FUN_06fa838c(*(undefined8 *)(param_1 + 0xc0),
                                       *(undefined8 *)
                                        UnityEngine_XR_OpenXR_Features_Interactions_OculusTouchControllerProfile_OculusTouchController_var
                                       ,local_c0._1_1_ & 1,0);
                          FUN_06fa838c(*(undefined8 *)(param_1 + 0xc0),
                                       *(undefined8 *)OVRSpatialAnchor_MultiAnchorDelegatePair_var,
                                       local_c0._2_1_ & 1,0);
                          FUN_06fa838c(*(undefined8 *)(param_1 + 0xc0),
                                       *(undefined8 *)
                                        OVRVirtualKeyboard_VirtualKeyboardTextureInfo_var,
                                       local_c0._3_1_ & 1,0);
                          FUN_06fa838c(*(undefined8 *)(param_1 + 0xc0),
                                       *(undefined8 *)OVRSpaceQuery_Options_var,local_c0._4_1_ & 1,0
                                      );
                          FUN_06fa838c(*(undefined8 *)(param_1 + 0xc0),
                                       *(undefined8 *)OVRSpatialAnchor_LoadOptions_var,
                                       local_c0._5_1_ & 1,0);
                          FUN_06fa838c(*(undefined8 *)(param_1 + 0xc0),
                                       *(undefined8 *)OVRPlugin_Vector3f_var,local_c0._6_1_ & 1,0);
                          FUN_06fa838c(*(undefined8 *)(param_1 + 0xc0),
                                       *(undefined8 *)OVRSceneLoader_SceneInfo_var,
                                       local_c0._7_1_ & 1,0);
                          FUN_06fa838c(*(undefined8 *)(param_1 + 0xc0),
                                       *(undefined8 *)OVRRaycaster_RaycastHit_var,bStack_b8 & 1,0);
                          FUN_06fa838c(*(undefined8 *)(param_1 + 0xc0),
                                       *(undefined8 *)
                                        OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup_var
                                       ,bStack_b7 & 1,0);
                          lVar12 = *(long *)(param_1 + 0xc0);
                          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                            thunk_FUN_03798b70();
                          }
                          if (lVar12 == 0) goto LAB_070d5618;
                          thunk_FUN_07576abc(uStack_b4,local_b0,uStack_ac,local_a8,lVar12,
                                             *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 4),
                                             0);
                        }
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_070d5618:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


