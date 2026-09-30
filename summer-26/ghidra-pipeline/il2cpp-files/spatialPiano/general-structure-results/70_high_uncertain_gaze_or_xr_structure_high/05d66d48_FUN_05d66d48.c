/*
FUNCTION_NAME: FUN_05d66d48
ENTRY_POINT: 05d66d48
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_21;functionality_gaze_retrieval_or_extraction
*/


void FUN_05d66d48(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar25;
  undefined8 uVar24;
  undefined8 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint local_b8;
  uint uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  if ((DAT_06bc3969 & 1) == 0) {
    FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
    FUN_02f08768(PTR_DAT_067c8f48);
    FUN_02f08768(PTR_DAT_067c97a8);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__);
    FUN_02f08768(Method_OVRTask_SetResult<bool>__);
    FUN_02f08768(Method_UnityEngine_Object_FindObjectsByType<BuildingBlock>__);
    FUN_02f08768(Method_UnityEngine_Object_FindObjectsByType<Camera>__);
    DAT_06bc3969 = 1;
  }
  local_90 = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  if (param_4 == 0) goto LAB_05d67ae4;
  if (*(int *)(*(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__ + 0xe4) == 0)
  {
    thunk_FUN_02f6670c();
  }
  uVar6 = FUN_05d66364(param_4);
  if (param_3 == 0) goto LAB_05d67ae4;
  uVar19 = *(undefined8 *)(param_3 + 0x80);
  if (*(int *)(*(long *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
              + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar7 = FUN_05dad3e4(uVar19,0);
  if (iVar7 == 0) {
    return;
  }
  uVar19 = *(undefined8 *)(param_3 + 0x80);
  if (*(int *)(*(long *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
              + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar10 = FUN_05dad4f4(uVar19,0);
  if ((uVar10 & 1) != 0) {
    uVar19 = *(undefined8 *)(param_3 + 0x80);
    uVar20 = *(undefined8 *)(param_1 + 0x118);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar8 = FUN_05dad76c(uVar19,uVar20,0);
    if ((uVar8 == 0xffffffff) || (*(char *)(param_1 + 0x130) == '\0')) {
      bVar4 = false;
    }
    else {
      *(undefined1 *)(param_1 + 0x130) = 0;
      if (((*(uint *)(param_3 + 0xa4) ^ uVar6) & 1) == 0) {
        fVar21 = (float)*(undefined8 *)(param_4 + 0x1f0) - (float)*(undefined8 *)(param_3 + 0xa8);
        fVar22 = (float)((ulong)*(undefined8 *)(param_4 + 0x1f0) >> 0x20) -
                 (float)((ulong)*(undefined8 *)(param_3 + 0xa8) >> 0x20);
        fVar23 = (float)*(undefined8 *)(param_4 + 0x1f8) - (float)*(undefined8 *)(param_3 + 0xb0);
        fVar25 = (float)((ulong)*(undefined8 *)(param_4 + 0x1f8) >> 0x20) -
                 (float)((ulong)*(undefined8 *)(param_3 + 0xb0) >> 0x20);
        bVar4 = DAT_011afbb8 <=
                fVar25 * fVar25 + fVar23 * fVar23 + fVar21 * fVar21 + fVar22 * fVar22;
      }
      else {
        bVar4 = true;
      }
    }
    lVar13 = *(long *)(param_1 + 0x120);
    if (lVar13 == 0) goto LAB_05d67ae4;
    uStack_a8 = *(undefined8 *)(lVar13 + 0x30);
    local_b0 = *(undefined8 *)(lVar13 + 0x28);
    uStack_98 = *(undefined8 *)(lVar13 + 0x40);
    local_a0 = *(undefined8 *)(lVar13 + 0x38);
    local_90 = *(undefined8 *)(lVar13 + 0x48);
    if (*(long *)(param_4 + 0x1a0) == 0) goto LAB_05d67ae4;
    uVar10 = FUN_05c35d3c(*(long *)(param_4 + 0x1a0),0);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uStack_f8 = uStack_a8;
      local_100 = local_b0;
      uStack_e8 = uStack_98;
      local_f0 = local_a0;
      local_e0 = local_90;
      FUN_0610ceb0(&local_b0,&local_100,0,0xffffffff,0xffffffff,0);
    }
    lVar13 = *(long *)(param_3 + 0x98);
    if (lVar13 == 0) goto LAB_05d67ae4;
    uStack_158 = *(undefined8 *)(lVar13 + 0x30);
    local_160 = *(undefined8 *)(lVar13 + 0x28);
    uStack_148 = *(undefined8 *)(lVar13 + 0x40);
    local_150 = *(undefined8 *)(lVar13 + 0x38);
    local_140 = *(undefined8 *)(lVar13 + 0x48);
    local_110 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_128 = 0;
    local_130 = 0;
    FUN_0610ceb0(&local_130,&local_160,0,0xffffffff,0,0);
    uStack_1b8 = uStack_a8;
    local_1c0 = local_b0;
    uStack_1a8 = uStack_98;
    local_1b0 = local_a0;
    local_1a0 = local_90;
    local_170 = 0;
    uStack_178 = 0;
    local_180 = 0;
    uStack_188 = 0;
    local_190 = 0;
    FUN_0610ceb0(&local_190,&local_1c0,0,0xffffffff,0,0);
    puVar1 = PTR_DAT_067c97a8;
    if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uStack_1e8 = uStack_128;
    local_1f0 = local_130;
    uStack_1d8 = uStack_118;
    local_1e0 = local_120;
    local_1d0 = local_110;
    uStack_218 = uStack_188;
    local_220 = local_190;
    uStack_208 = uStack_178;
    local_210 = local_180;
    local_200 = local_170;
    uVar10 = FUN_0610d5f4(&local_1f0,&local_220,0);
    if (((uVar10 & 1) == 0) || (*(char *)(param_1 + 0x131) == '\0')) {
      bVar3 = false;
    }
    else {
      *(undefined1 *)(param_1 + 0x131) = 0;
      bVar3 = ((*(uint *)(param_3 + 0xa4) ^ uVar6) & 6) != 0;
    }
    if (bVar4 != false) {
      if (((uVar6 & 1) != 0) &&
         (((*(char *)(param_3 + 0x52) == '\0' || (*(char *)(param_1 + 0x134) == '\0')) ||
          (uVar10 = FUN_05d6d2dc(param_4,0), (uVar10 & 1) == 0)))) {
        lVar13 = *(long *)(param_3 + 0x80);
        if (lVar13 == 0) goto LAB_05d67ae4;
        if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_05d682c8;
        uVar20 = *(undefined8 *)(param_3 + 0x98);
        uVar27 = *(undefined4 *)(param_4 + 0x1f0);
        uVar19 = *(undefined8 *)(lVar13 + (long)(int)uVar8 * 8 + 0x20);
        uVar28 = *(undefined4 *)(param_4 + 500);
        uVar29 = *(undefined4 *)(param_4 + 0x1f8);
        uVar30 = *(undefined4 *)(param_4 + 0x1fc);
        if (*(int *)(*(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__ + 0xe4)
            == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05d682e0(uVar27,uVar28,uVar29,uVar30,param_2,uVar19,uVar20,1);
      }
      if ((*(byte *)(param_3 + 0xa4) & 1) != 0) {
        uVar19 = *(undefined8 *)(param_3 + 0x80);
        uVar20 = *(undefined8 *)(param_1 + 0x118);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uStack_b4 = FUN_05dad7f0(uVar19,uVar20,0);
        puVar2 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
        lVar13 = *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02f6670c(lVar13);
          lVar13 = *(long *)puVar2;
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x48);
        if (lVar13 != 0) {
          if (uStack_b4 < *(uint *)(lVar13 + 0x18)) {
            lVar14 = *(long *)(param_3 + 0x80);
            local_b8 = 0;
            plVar18 = *(long **)(lVar13 + (ulong)uStack_b4 * 8 + 0x20);
            if (lVar14 != 0) {
              lVar13 = 4;
              do {
                puVar2 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
                uVar10 = lVar13 - 4;
                if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar10) {
                  lVar13 = *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
                  if (*(int *)(lVar13 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                    lVar13 = *(long *)puVar2;
                  }
                  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x40);
                  if (lVar13 != 0) {
                    uVar10 = (ulong)uStack_b4;
                    if (*(uint *)(lVar13 + 0x18) <= uStack_b4) goto LAB_05d682c8;
                    lVar13 = *(long *)(lVar13 + uVar10 * 8 + 0x20);
                    if (uStack_b4 == 0) goto LAB_05d67b8c;
                    if (plVar18 != (long *)0x0) {
                      lVar14 = 0;
                      uVar8 = 0;
                      goto LAB_05d67b3c;
                    }
                  }
                  break;
                }
                if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_05d682c8;
                lVar17 = *(long *)(lVar14 + lVar13 * 8);
                if (lVar17 != 0) {
                  uStack_128 = *(undefined8 *)(lVar17 + 0x30);
                  local_130 = *(undefined8 *)(lVar17 + 0x28);
                  uStack_118 = *(undefined8 *)(lVar17 + 0x40);
                  local_120 = *(undefined8 *)(lVar17 + 0x38);
                  local_110 = *(undefined8 *)(lVar17 + 0x48);
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  FUN_0610d1a0(&local_190,0,0);
                  uStack_248 = uStack_128;
                  local_250 = local_130;
                  uStack_238 = uStack_118;
                  local_240 = local_120;
                  local_230 = local_110;
                  uStack_278 = uStack_188;
                  local_280 = local_190;
                  uStack_268 = uStack_178;
                  local_270 = local_180;
                  local_260 = local_170;
                  uVar11 = FUN_0610d678(&local_250,&local_280,0);
                  lVar14 = *(long *)(param_3 + 0x80);
                  if ((uVar11 & 1) != 0) {
                    if (lVar14 == 0) break;
                    if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_05d682c8;
                    lVar14 = *(long *)(lVar14 + lVar13 * 8);
                    if (lVar14 == 0) break;
                    uStack_128 = *(undefined8 *)(lVar14 + 0x30);
                    local_130 = *(undefined8 *)(lVar14 + 0x28);
                    uStack_118 = *(undefined8 *)(lVar14 + 0x40);
                    local_120 = *(undefined8 *)(lVar14 + 0x38);
                    local_110 = *(undefined8 *)(lVar14 + 0x48);
                    lVar14 = *(long *)(param_1 + 0x118);
                    if (lVar14 == 0) break;
                    uStack_188 = *(undefined8 *)(lVar14 + 0x30);
                    local_190 = *(undefined8 *)(lVar14 + 0x28);
                    uStack_178 = *(undefined8 *)(lVar14 + 0x40);
                    local_180 = *(undefined8 *)(lVar14 + 0x38);
                    local_170 = *(undefined8 *)(lVar14 + 0x48);
                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                      thunk_FUN_02f6670c();
                    }
                    uStack_2a8 = uStack_128;
                    local_2b0 = local_130;
                    uStack_298 = uStack_118;
                    local_2a0 = local_120;
                    local_290 = local_110;
                    uStack_2d8 = uStack_188;
                    local_2e0 = local_190;
                    uStack_2c8 = uStack_178;
                    local_2d0 = local_180;
                    local_2c0 = local_170;
                    uVar11 = FUN_0610d678(&local_2b0,&local_2e0,0);
                    uVar8 = local_b8;
                    lVar14 = *(long *)(param_3 + 0x80);
                    if ((uVar11 & 1) != 0) {
                      if (lVar14 == 0) break;
                      if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_05d682c8;
                      if (plVar18 == (long *)0x0) break;
                      lVar14 = *(long *)(lVar14 + lVar13 * 8);
                      lVar17 = (long)(int)local_b8;
                      if ((lVar14 != 0) &&
                         (lVar12 = thunk_FUN_02f45174(lVar14,*(undefined8 *)(*plVar18 + 0x40)),
                         lVar12 == 0)) goto LAB_05d682cc;
                      if (*(uint *)(plVar18 + 3) <= uVar8) goto LAB_05d682c8;
                      plVar18[lVar17 + 4] = lVar14;
                      local_b8 = local_b8 + 1;
                      lVar14 = *(long *)(param_3 + 0x80);
                    }
                  }
                }
                lVar13 = lVar13 + 1;
              } while (lVar14 != 0);
            }
            goto LAB_05d67ae4;
          }
          goto LAB_05d682c8;
        }
        goto LAB_05d67ae4;
      }
    }
    goto LAB_05d67c84;
  }
  lVar13 = FUN_05d5a36c(param_3);
  puVar1 = PTR_DAT_067c97a8;
  if (*(char *)(param_3 + 0x50) == '\0') {
    if (*(int *)(param_3 + 0x10) < 0x96) {
      return;
    }
    lVar13 = *(long *)(param_1 + 0x118);
    plVar18 = (long *)(param_1 + 0x120);
  }
  else {
    plVar18 = (long *)(param_3 + 0x98);
  }
  if (lVar13 == 0) goto LAB_05d67ae4;
  uStack_128 = *(undefined8 *)(lVar13 + 0x30);
  local_130 = *(undefined8 *)(lVar13 + 0x28);
  uStack_118 = *(undefined8 *)(lVar13 + 0x40);
  local_120 = *(undefined8 *)(lVar13 + 0x38);
  local_110 = *(undefined8 *)(lVar13 + 0x48);
  lVar14 = *(long *)(param_1 + 0x118);
  lVar17 = *plVar18;
  if (lVar14 == 0) goto LAB_05d67ae4;
  uStack_188 = *(undefined8 *)(lVar14 + 0x30);
  local_190 = *(undefined8 *)(lVar14 + 0x28);
  uStack_178 = *(undefined8 *)(lVar14 + 0x40);
  local_180 = *(undefined8 *)(lVar14 + 0x38);
  local_170 = *(undefined8 *)(lVar14 + 0x48);
  if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uStack_398 = uStack_128;
  local_3a0 = local_130;
  uStack_388 = uStack_118;
  uStack_390 = local_120;
  local_380 = local_110;
  uStack_3c8 = uStack_188;
  local_3d0 = local_190;
  uStack_3b8 = uStack_178;
  uStack_3c0 = local_180;
  local_3b0 = local_170;
  uVar10 = FUN_0610d5f4(&local_3a0,&local_3d0,0);
  if (((uVar10 & 1) == 0) || (*(char *)(param_1 + 0x130) == '\0')) {
    uStack_c8 = *(ulong *)(param_3 + 0xb0);
    local_d0 = *(ulong *)(param_3 + 0xa8);
    uVar8 = *(uint *)(param_3 + 0xa4) & 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x130) = 0;
    uVar8 = uVar6 & 1;
    uVar10 = UnityEngine_UIElements_ConverterGroups_<>c__<RegisterUInt16Converters>b__22_10(0);
    if ((uVar10 & 1) != 0) {
      uStack_3f8 = *(undefined8 *)(lVar13 + 0x30);
      local_400 = *(undefined8 *)(lVar13 + 0x28);
      uStack_3e8 = *(undefined8 *)(lVar13 + 0x40);
      uStack_3f0 = *(undefined8 *)(lVar13 + 0x38);
      local_3e0 = *(undefined8 *)(lVar13 + 0x48);
      local_110 = 0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_128 = 0;
      local_130 = 0;
      FUN_0610ceb0(&local_130,&local_400,0,0xffffffff,0,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_0610d14c(&local_190,2,0);
      uStack_428 = uStack_128;
      local_430 = local_130;
      uStack_418 = uStack_118;
      uStack_420 = local_120;
      local_410 = local_110;
      uStack_458 = uStack_188;
      local_460 = local_190;
      uStack_448 = uStack_178;
      uStack_450 = local_180;
      local_440 = local_170;
      uVar10 = FUN_0610d678(&local_430,&local_460,0);
      if ((uVar10 & 1) != 0) {
        uVar8 = *(uint *)(param_3 + 0xa4) | uVar8;
      }
    }
    uStack_c8 = *(ulong *)(param_4 + 0x1f8);
    local_d0 = *(ulong *)(param_4 + 0x1f0);
    if (*(char *)(param_1 + 0x131) != '\0') {
      *(undefined1 *)(param_1 + 0x131) = 0;
      uVar8 = uVar8 | uVar6 & 6;
    }
  }
  lVar14 = *(long *)(param_1 + 0x120);
  if (lVar14 == 0) goto LAB_05d67ae4;
  uStack_488 = *(undefined8 *)(lVar14 + 0x30);
  local_490 = *(undefined8 *)(lVar14 + 0x28);
  uStack_478 = *(undefined8 *)(lVar14 + 0x40);
  uStack_480 = *(undefined8 *)(lVar14 + 0x38);
  local_470 = *(undefined8 *)(lVar14 + 0x48);
  local_110 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = 0;
  FUN_0610ceb0(&local_130,&local_490,0,0xffffffff,0,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_0610d14c(&local_190,2,0);
  uStack_4b8 = uStack_128;
  local_4c0 = local_130;
  uStack_4a8 = uStack_118;
  uStack_4b0 = local_120;
  local_4a0 = local_110;
  uStack_4e8 = uStack_188;
  local_4f0 = local_190;
  uStack_4d8 = uStack_178;
  uStack_4e0 = local_180;
  local_4d0 = local_170;
  uVar10 = FUN_0610d678(&local_4c0,&local_4f0,0);
  if ((uVar10 & 1) == 0) {
LAB_05d672a8:
    uVar6 = *(uint *)(param_3 + 0xa4);
  }
  else {
    if (lVar17 == 0) goto LAB_05d67ae4;
    uStack_128 = *(undefined8 *)(lVar17 + 0x30);
    local_130 = *(undefined8 *)(lVar17 + 0x28);
    uStack_118 = *(undefined8 *)(lVar17 + 0x40);
    local_120 = *(undefined8 *)(lVar17 + 0x38);
    local_110 = *(undefined8 *)(lVar17 + 0x48);
    lVar14 = *(long *)(param_1 + 0x120);
    if (lVar14 == 0) goto LAB_05d67ae4;
    uStack_188 = *(undefined8 *)(lVar14 + 0x30);
    local_190 = *(undefined8 *)(lVar14 + 0x28);
    uStack_178 = *(undefined8 *)(lVar14 + 0x40);
    local_180 = *(undefined8 *)(lVar14 + 0x38);
    local_170 = *(undefined8 *)(lVar14 + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uStack_518 = uStack_128;
    local_520 = local_130;
    uStack_508 = uStack_118;
    uStack_510 = local_120;
    local_500 = local_110;
    uStack_548 = uStack_188;
    local_550 = local_190;
    uStack_538 = uStack_178;
    uStack_540 = local_180;
    local_530 = local_170;
    uVar10 = FUN_0610d5f4(&local_520,&local_550,0);
    if ((uVar10 & 1) == 0) {
      uStack_128 = *(undefined8 *)(lVar13 + 0x30);
      local_130 = *(undefined8 *)(lVar13 + 0x28);
      uStack_118 = *(undefined8 *)(lVar13 + 0x40);
      local_120 = *(undefined8 *)(lVar13 + 0x38);
      local_110 = *(undefined8 *)(lVar13 + 0x48);
      lVar14 = *(long *)(param_1 + 0x120);
      if (lVar14 == 0) goto LAB_05d67ae4;
      uStack_188 = *(undefined8 *)(lVar14 + 0x30);
      local_190 = *(undefined8 *)(lVar14 + 0x28);
      uStack_178 = *(undefined8 *)(lVar14 + 0x40);
      local_180 = *(undefined8 *)(lVar14 + 0x38);
      local_170 = *(undefined8 *)(lVar14 + 0x48);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uStack_578 = uStack_128;
      local_580 = local_130;
      uStack_568 = uStack_118;
      uStack_570 = local_120;
      local_560 = local_110;
      uStack_5a8 = uStack_188;
      local_5b0 = local_190;
      uStack_598 = uStack_178;
      uStack_5a0 = local_180;
      local_590 = local_170;
      uVar10 = FUN_0610d5f4(&local_580,&local_5b0,0);
      if ((uVar10 & 1) == 0) goto LAB_05d672a8;
    }
    if (*(char *)(param_1 + 0x131) == '\0') goto LAB_05d672a8;
    *(undefined1 *)(param_1 + 0x131) = 0;
  }
  lVar14 = *(long *)(param_1 + 0xe8);
  if (lVar14 != 0) {
    uVar9 = FUN_05d6d2cc(param_4,0);
    uVar10 = FUN_05d43fe0(lVar14,uVar9 & 1,0);
    if ((uVar10 & 1) != 0) {
      if (*(long *)(param_1 + 0xe8) == 0) goto LAB_05d67ae4;
      FUN_05d43a54(*(long *)(param_1 + 0xe8),&local_d0,0);
    }
  }
  uVar8 = uVar6 & 6 | uVar8;
  if (((*(char *)(param_3 + 0x52) != '\0') && (*(char *)(param_1 + 0x134) != '\0')) &&
     (uVar10 = FUN_05d6d2dc(param_4,0), (uVar10 & 1) != 0)) {
    FUN_05d5d368(local_d0 & 0xffffffff,local_d0._4_4_,uStack_c8 & 0xffffffff,uStack_c8._4_4_,param_1
                 ,param_3,param_4,lVar13,lVar17,uVar8);
    return;
  }
  puVar2 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
  uStack_128 = *(undefined8 *)(lVar13 + 0x30);
  local_130 = *(undefined8 *)(lVar13 + 0x28);
  uStack_118 = *(undefined8 *)(lVar13 + 0x40);
  local_120 = *(undefined8 *)(lVar13 + 0x38);
  local_110 = *(undefined8 *)(lVar13 + 0x48);
  lVar14 = *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar14 = *(long *)puVar2;
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x20);
  if (lVar14 != 0) {
    if (*(int *)(lVar14 + 0x18) == 0) {
LAB_05d682c8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    FUN_05c9ac9c(&local_190,*(undefined8 *)(lVar14 + 0x20),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uStack_5d8 = uStack_128;
    local_5e0 = local_130;
    uStack_5c8 = uStack_118;
    uStack_5d0 = local_120;
    local_5c0 = local_110;
    uStack_608 = uStack_188;
    local_610 = local_190;
    uStack_5f8 = uStack_178;
    uStack_600 = local_180;
    local_5f0 = local_170;
    uVar10 = FUN_0610d678(&local_5e0,&local_610,0);
    lVar14 = *(long *)puVar2;
    uVar6 = 0;
    do {
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar14 = *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
      }
      puVar2 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
      lVar15 = *(long *)(lVar14 + 0xb8);
      lVar12 = *(long *)(lVar15 + 0x20);
      if (lVar12 == 0) goto LAB_05d67ae4;
      uVar9 = uVar6 + 1;
      if (*(int *)(lVar12 + 0x18) <= (int)uVar9) {
        if ((uVar10 & 1) == 0) {
          if (lVar17 == 0) goto LAB_05d67ae4;
          uStack_128 = *(undefined8 *)(lVar17 + 0x30);
          local_130 = *(undefined8 *)(lVar17 + 0x28);
          uStack_118 = *(undefined8 *)(lVar17 + 0x40);
          local_120 = *(undefined8 *)(lVar17 + 0x38);
          local_110 = *(undefined8 *)(lVar17 + 0x48);
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar15 = *(long *)(*(long *)puVar2 + 0xb8);
          }
          FUN_05c9ac9c(&local_190,*(undefined8 *)(lVar15 + 0x28),0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uStack_638 = uStack_128;
          local_640 = local_130;
          uStack_628 = uStack_118;
          uStack_630 = local_120;
          local_620 = local_110;
          uStack_668 = uStack_188;
          local_670 = local_190;
          uStack_658 = uStack_178;
          uStack_660 = local_180;
          local_650 = local_170;
          uVar10 = FUN_0610d678(&local_640,&local_670,0);
          puVar2 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
          if (((uVar10 & 1) == 0) && (uVar8 == 0)) {
            lVar14 = *(long *)(param_3 + 0x18);
            if (lVar14 == 0) goto LAB_05d67ae4;
            if (*(int *)(lVar14 + 0x18) == 0) goto LAB_05d682c8;
            lVar12 = *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
            iVar7 = *(int *)(lVar14 + 0x20);
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
              lVar12 = *(long *)puVar2;
            }
            lVar14 = *(long *)(lVar12 + 0xb8);
            lVar15 = *(long *)(lVar14 + 0x30);
            if (lVar15 == 0) goto LAB_05d67ae4;
            if (*(int *)(lVar15 + 0x18) == 0) goto LAB_05d682c8;
            if (iVar7 == *(int *)(lVar15 + 0x20)) {
              iVar7 = *(int *)(param_3 + 0x20);
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
                lVar14 = *(long *)(*(long *)
                                    Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__ +
                                  0xb8);
              }
              if (iVar7 == *(int *)(lVar14 + 0x38)) {
                return;
              }
            }
          }
        }
        break;
      }
      lVar15 = *(long *)(param_3 + 0x80);
      if (lVar15 == 0) goto LAB_05d67ae4;
      if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_05d682c8;
      lVar15 = *(long *)(lVar15 + (long)(int)uVar9 * 8 + 0x20);
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar14 = *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
        lVar12 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x20);
        if (lVar12 == 0) goto LAB_05d67ae4;
      }
      uVar6 = uVar6 + 1;
      if (*(uint *)(lVar12 + 0x18) <= uVar6) goto LAB_05d682c8;
    } while (lVar15 == *(long *)(lVar12 + (long)(int)uVar9 * 8 + 0x20));
    uVar11 = uStack_c8;
    uVar10 = local_d0;
    lVar14 = *(long *)(param_3 + 0x18);
    if (lVar14 != 0) {
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_05d682c8;
      uVar29 = local_d0._4_4_;
      uVar30 = uStack_c8._4_4_;
      uVar27 = *(undefined4 *)(lVar14 + 0x20);
      uVar28 = *(undefined4 *)(param_3 + 0x20);
      if (*(int *)(*(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__ + 0xe4) ==
          0) {
        thunk_FUN_02f6670c();
      }
      FUN_05d68828(uVar10 & 0xffffffff,uVar29,uVar11 & 0xffffffff,uVar30,param_2,lVar13,lVar17,uVar8
                   ,uVar27,uVar28);
      if (*(long *)(param_4 + 0x1a0) != 0) {
        uVar10 = FUN_05c35d3c(*(long *)(param_4 + 0x1a0),0);
        if ((uVar10 & 1) == 0) {
          return;
        }
        uStack_128 = *(undefined8 *)(lVar13 + 0x30);
        local_130 = *(undefined8 *)(lVar13 + 0x28);
        uStack_118 = *(undefined8 *)(lVar13 + 0x40);
        local_120 = *(undefined8 *)(lVar13 + 0x38);
        local_110 = *(undefined8 *)(lVar13 + 0x48);
        lVar13 = *(long *)(param_4 + 0x1a0);
        if (lVar13 != 0) {
          uStack_188 = *(undefined8 *)(lVar13 + 0x48);
          local_190 = *(undefined8 *)(lVar13 + 0x40);
          uStack_178 = *(undefined8 *)(lVar13 + 0x58);
          local_180 = *(undefined8 *)(lVar13 + 0x50);
          local_170 = *(undefined8 *)(lVar13 + 0x60);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uStack_698 = uStack_128;
          local_6a0 = local_130;
          uStack_688 = uStack_118;
          uStack_690 = local_120;
          local_680 = local_110;
          uStack_6c8 = uStack_188;
          local_6d0 = local_190;
          uStack_6b8 = uStack_178;
          uStack_6c0 = local_180;
          local_6b0 = local_170;
          bVar5 = FUN_0610d678(&local_6a0,&local_6d0,0);
          puVar1 = Method_System_DateTimeOffset_ValidateStyles__;
          if (*(int *)(*(long *)Method_System_DateTimeOffset_ValidateStyles__ + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)Method_System_DateTimeOffset_ValidateStyles__);
          }
          if (DAT_06bc38b4 == '\0') {
            FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
            DAT_06bc38b4 = '\x01';
          }
          lVar13 = *(long *)puVar1;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar13 = *(long *)puVar1;
          }
          lVar13 = **(long **)(lVar13 + 0xb8);
          if (lVar13 != 0) {
            *(undefined8 *)(lVar13 + 0x10) = param_2;
            FUN_05d6c650(param_4,lVar13,bVar5 & 1,0);
            if (DAT_06bc38b4 == '\0') {
              FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
              DAT_06bc38b4 = '\x01';
            }
            lVar13 = *(long *)puVar1;
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
              lVar13 = *(long *)puVar1;
            }
            lVar13 = **(long **)(lVar13 + 0xb8);
            if (lVar13 != 0) {
              *(undefined8 *)(lVar13 + 0x10) = param_2;
              uVar19 = FUN_05d6a67c(param_4,0);
              if (*(int *)(*(long *)Method_OVRTask_SetResult<bool>__ + 0xe4) == 0) {
                thunk_FUN_02f6670c(*(long *)Method_OVRTask_SetResult<bool>__);
              }
              bVar4 = (bool)(bVar5 & 1);
LAB_05d68290:
              FUN_05de3308(lVar13,uVar19,bVar4,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_05d67ae4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
  while( true ) {
    lVar17 = plVar18[lVar14 + 4];
    if ((lVar17 == 0) || (lVar13 == 0)) goto LAB_05d67ae4;
    if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_05d682c8;
    lVar12 = lVar13 + lVar14 * 0x28;
    uVar8 = uVar8 + 1;
    lVar14 = (long)(int)uVar8;
    uVar20 = *(undefined8 *)(lVar17 + 0x40);
    uVar19 = *(undefined8 *)(lVar17 + 0x38);
    uVar26 = *(undefined8 *)(lVar17 + 0x30);
    uVar24 = *(undefined8 *)(lVar17 + 0x28);
    *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)(lVar17 + 0x48);
    *(undefined8 *)(lVar12 + 0x28) = uVar26;
    *(undefined8 *)(lVar12 + 0x20) = uVar24;
    *(undefined8 *)(lVar12 + 0x38) = uVar20;
    *(undefined8 *)(lVar12 + 0x30) = uVar19;
    if ((long)uVar10 <= lVar14) break;
LAB_05d67b3c:
    if (*(uint *)(plVar18 + 3) <= uVar8) goto LAB_05d682c8;
  }
LAB_05d67b8c:
  if ((long)(int)local_b8 != uVar10) {
    uVar19 = FUN_050d2c48(&local_b8,0);
    uVar20 = FUN_050f1a48(&uStack_b4,0);
    uVar19 = FUN_04f6fc18(*(undefined8 *)Method_UnityEngine_Object_FindObjectsByType<Camera>__,
                          uVar19,*(undefined8 *)
                                  Method_UnityEngine_Object_FindObjectsByType<BuildingBlock>__,
                          uVar20,0);
    if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f48);
    }
    UnityEngine_TextCore_Text_TextGenerator__get_m_LineOffset(uVar19,0);
  }
  if (((*(char *)(param_3 + 0x52) == '\0') || (*(char *)(param_1 + 0x134) == '\0')) ||
     (uVar10 = FUN_05d6d2dc(param_4,0), (uVar10 & 1) == 0)) {
    uVar27 = *(undefined4 *)(param_3 + 0xa8);
    uVar28 = *(undefined4 *)(param_3 + 0xac);
    uVar29 = *(undefined4 *)(param_3 + 0xb0);
    uVar30 = *(undefined4 *)(param_3 + 0xb4);
    uVar19 = *(undefined8 *)(param_1 + 0x120);
    if (*(int *)(*(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__ + 0xe4) == 0
       ) {
      thunk_FUN_02f6670c();
    }
    FUN_05d68740(uVar27,uVar28,uVar29,uVar30,param_2,plVar18,lVar13,uVar19,1);
  }
LAB_05d67c84:
  uVar8 = uVar6;
  if (!bVar3) {
    uVar8 = *(uint *)(param_3 + 0xa4);
  }
  uVar8 = uVar8 & 6;
  if (bVar4 == false) {
    uVar8 = *(uint *)(param_3 + 0xa4) & 1 | uVar8;
    if (*(char *)(param_3 + 0x52) != '\0') goto LAB_05d67cd0;
  }
  else if (*(char *)(param_3 + 0x52) != '\0') {
    uVar9 = 0;
    if (*(char *)(param_1 + 0x134) != '\0') {
      uVar9 = uVar6 & 1;
    }
    uVar8 = uVar9 | uVar8;
LAB_05d67cd0:
    if ((*(char *)(param_1 + 0x134) != '\0') &&
       (uVar10 = FUN_05d6d2dc(param_4,0), (uVar10 & 1) != 0)) {
      FUN_05d5c498(param_1,param_3,param_4,bVar4,uVar8);
    }
  }
  puVar2 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
  uVar19 = *(undefined8 *)(param_3 + 0x80);
  lVar13 = *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar13 = *(long *)puVar2;
  }
  uVar20 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x20);
  if (*(int *)(*(long *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
              + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)
                        Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                      );
  }
  uVar10 = UnityEngine_XR_ARFoundation_AROcclusionFrameEventArgs__TryGetFovs(uVar19,uVar20,0);
  puVar2 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
  if ((uVar10 & 1) != 0) {
    lVar13 = *(long *)(param_3 + 0x98);
    if (lVar13 == 0) goto LAB_05d67ae4;
    uStack_128 = *(undefined8 *)(lVar13 + 0x30);
    local_130 = *(undefined8 *)(lVar13 + 0x28);
    uStack_118 = *(undefined8 *)(lVar13 + 0x40);
    local_120 = *(undefined8 *)(lVar13 + 0x38);
    local_110 = *(undefined8 *)(lVar13 + 0x48);
    lVar13 = *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar13 = *(long *)puVar2;
    }
    FUN_05c9ac9c(&local_190,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x28),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uStack_308 = uStack_128;
    local_310 = local_130;
    uStack_2f8 = uStack_118;
    uStack_300 = local_120;
    local_2f0 = local_110;
    uStack_338 = uStack_188;
    local_340 = local_190;
    uStack_328 = uStack_178;
    uStack_330 = local_180;
    local_320 = local_170;
    uVar10 = FUN_0610d678(&local_310,&local_340,0);
    if (((uVar10 & 1) == 0) && (uVar8 == 0)) {
      return;
    }
  }
  uVar19 = *(undefined8 *)(param_3 + 0x80);
  if (*(int *)(*(long *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
              + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar7 = FUN_05dad990(uVar19,0);
  puVar1 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
  if (iVar7 < 0) {
    return;
  }
  lVar13 = *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar13 = *(long *)puVar1;
  }
  lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x48);
  if (lVar14 == 0) goto LAB_05d67ae4;
  uVar6 = iVar7 + 1;
  if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_05d682c8;
  plVar18 = *(long **)(lVar14 + (long)(int)uVar6 * 8 + 0x20);
  if (iVar7 != 0x7fffffff) {
    uVar10 = 0;
    do {
      lVar13 = *(long *)(param_3 + 0x80);
      if (lVar13 == 0) goto LAB_05d67ae4;
      if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_05d682c8;
      if (plVar18 == (long *)0x0) goto LAB_05d67ae4;
      lVar13 = *(long *)(lVar13 + uVar10 * 8 + 0x20);
      if ((lVar13 != 0) &&
         (lVar14 = thunk_FUN_02f45174(lVar13,*(undefined8 *)(*plVar18 + 0x40)), lVar14 == 0)) {
LAB_05d682cc:
        uVar19 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar19,0);
      }
      if (*(uint *)(plVar18 + 3) <= uVar10) goto LAB_05d682c8;
      uVar11 = uVar10 + 1;
      plVar18[uVar10 + 4] = lVar13;
      uVar10 = uVar11;
    } while (uVar6 != uVar11);
    lVar13 = *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
  }
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar13 = *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x40);
  if (lVar13 == 0) goto LAB_05d67ae4;
  if (*(uint *)(lVar13 + 0x18) <= uVar6) goto LAB_05d682c8;
  lVar13 = *(long *)(lVar13 + (long)(int)uVar6 * 8 + 0x20);
  if (iVar7 != 0x7fffffff) {
    if (plVar18 == (long *)0x0) goto LAB_05d67ae4;
    lVar14 = 0;
    if ((int)uVar6 < 2) {
      uVar6 = 1;
    }
    puVar16 = (undefined8 *)(lVar13 + 0x20);
    do {
      if (*(uint *)(plVar18 + 3) <= (uint)lVar14) goto LAB_05d682c8;
      lVar17 = plVar18[lVar14 + 4];
      if ((lVar17 == 0) || (lVar13 == 0)) goto LAB_05d67ae4;
      if (*(uint *)(lVar13 + 0x18) <= (uint)lVar14) goto LAB_05d682c8;
      uVar20 = *(undefined8 *)(lVar17 + 0x40);
      uVar19 = *(undefined8 *)(lVar17 + 0x38);
      lVar14 = lVar14 + 1;
      uVar26 = *(undefined8 *)(lVar17 + 0x30);
      uVar24 = *(undefined8 *)(lVar17 + 0x28);
      puVar16[4] = *(undefined8 *)(lVar17 + 0x48);
      puVar16[1] = uVar26;
      *puVar16 = uVar24;
      puVar16[3] = uVar20;
      puVar16[2] = uVar19;
      puVar16 = puVar16 + 5;
    } while (uVar6 != (uint)lVar14);
  }
  if (((*(char *)(param_3 + 0x52) == '\0') || (*(char *)(param_1 + 0x134) == '\0')) ||
     (uVar10 = FUN_05d6d2dc(param_4,0), (uVar10 & 1) == 0)) {
    if (*(char *)(param_3 + 0x50) == '\0') {
      uVar19 = *(undefined8 *)(param_1 + 0x120);
      *(undefined1 *)(param_1 + 0x131) = 0;
    }
    else {
      uVar19 = *(undefined8 *)(param_3 + 0x98);
    }
    uVar27 = *(undefined4 *)(param_3 + 0xa8);
    uVar28 = *(undefined4 *)(param_3 + 0xac);
    uVar29 = *(undefined4 *)(param_3 + 0xb0);
    uVar30 = *(undefined4 *)(param_3 + 0xb4);
    if (*(int *)(*(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__ + 0xe4) == 0
       ) {
      thunk_FUN_02f6670c();
    }
    FUN_05d68740(uVar27,uVar28,uVar29,uVar30,param_2,plVar18,lVar13,uVar19,uVar8);
  }
  if (*(long *)(param_4 + 0x1a0) == 0) goto LAB_05d67ae4;
  uVar10 = FUN_05c35d3c(*(long *)(param_4 + 0x1a0),0);
  if ((uVar10 & 1) == 0) {
    return;
  }
  lVar13 = *(long *)(param_4 + 0x1a0);
  if (lVar13 == 0) goto LAB_05d67ae4;
  uStack_128 = *(undefined8 *)(lVar13 + 0x48);
  local_130 = *(undefined8 *)(lVar13 + 0x40);
  uStack_118 = *(undefined8 *)(lVar13 + 0x58);
  local_120 = *(undefined8 *)(lVar13 + 0x50);
  local_110 = *(undefined8 *)(lVar13 + 0x60);
  uVar19 = *(undefined8 *)(param_3 + 0x80);
  if (*(int *)(*(long *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
              + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uStack_368 = uStack_128;
  local_370 = local_130;
  uStack_358 = uStack_118;
  uStack_360 = local_120;
  local_350 = local_110;
  iVar7 = FUN_05dad664(uVar19,&local_370,0);
  puVar1 = Method_System_DateTimeOffset_ValidateStyles__;
  if (*(int *)(*(long *)Method_System_DateTimeOffset_ValidateStyles__ + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)Method_System_DateTimeOffset_ValidateStyles__);
  }
  if (DAT_06bc38b4 == '\0') {
    FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
    DAT_06bc38b4 = '\x01';
  }
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar13 = *(long *)puVar1;
  }
  lVar13 = **(long **)(lVar13 + 0xb8);
  if (lVar13 == 0) goto LAB_05d67ae4;
  *(undefined8 *)(lVar13 + 0x10) = param_2;
  FUN_05d6c650(param_4,lVar13,iVar7 == -1,0);
  if (DAT_06bc38b4 == '\0') {
    FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
    DAT_06bc38b4 = '\x01';
  }
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar13 = *(long *)puVar1;
  }
  lVar13 = **(long **)(lVar13 + 0xb8);
  if (lVar13 == 0) goto LAB_05d67ae4;
  *(undefined8 *)(lVar13 + 0x10) = param_2;
  uVar19 = FUN_05d6a67c(param_4,0);
  if (*(int *)(*(long *)Method_OVRTask_SetResult<bool>__ + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)Method_OVRTask_SetResult<bool>__);
  }
  bVar4 = iVar7 == -1;
  goto LAB_05d68290;
}


