/*
FUNCTION_NAME: FUN_05d5d368
ENTRY_POINT: 05d5d368
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d5d368(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,long param_7,long param_8,long param_9,uint param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  uint local_4e8;
  undefined1 auStack_4d8 [120];
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
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
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  ulong uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  undefined8 local_250;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  long local_1e0;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  ulong uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_84 [4];
  
  puVar4 = Method_OVRSpatialAnchor_ShareAsync__;
  if ((DAT_06bc393a & 1) == 0) {
    FUN_02f08768(Method_OVRTask_SetResult<OVRResult<OVRAnchor_EraseResult>>__);
    FUN_02f08768(Method_OVRTask_FromGuid<OVRSpatialAnchor_OperationResult>__);
    FUN_02f08768(Method_OVRTask_SetResult<OVRResult<OVRAnchor_SaveResult>>__);
    FUN_02f08768(Method_System_Collections_Generic_List<XRPokeInteractor_PokeCollision>_Add__);
    FUN_02f08768(PTR_DAT_067cb238);
    FUN_02f08768(Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_OVRSpatialAnchor_ShareAsync__);
    FUN_02f08768(PTR_DAT_067c97a8);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__);
    FUN_02f08768(PTR_DAT_067cb280);
    DAT_06bc393a = 1;
  }
  lVar11 = *(long *)puVar4;
                    /* try { // try from 05d5d46c to 05e5d477 has its CatchHandler @ 05d5e028 */
  local_84[0] = 0;
  local_90 = 0;
  local_110 = 0;
  local_140 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_168 = 0;
  local_170 = 0;
                    /* try { // try from 05d5d4a0 to 05e5d4a3 has its CatchHandler @ 05d5e024 */
  local_180 = 0;
  local_1b0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
                    /* try { // try from 05d5d4b4 to 05e5d4bf has its CatchHandler @ 05d5df18 */
    lVar11 = *(long *)puVar4;
  }
  FUN_05c5cb44(local_84,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),0);
  local_1e0 = 0;
  local_1d8 = local_84;
  if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05d5ddfc to 05e5de03 has its CatchHandler @ 05d5df10 */
    FUN_02f089c8();
  }
  lVar11 = *(long *)(param_5 + 0x28);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar10 = *(uint *)(param_6 + 0x54);
                    /* try { // try from 05d5d4e8 to 05e5d4ff has its CatchHandler @ 05d5df04 */
  if (*(uint *)(lVar11 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  if (*(long *)(param_5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar11 = lVar11 + (long)(int)uVar10 * 0x10;
  uVar1 = *(undefined8 *)(lVar11 + 0x20);
  uVar2 = *(undefined8 *)(lVar11 + 0x28);
  lVar11 = FUN_04818a9c(*(long *)(param_5 + 0x18),uVar1,uVar2,
                        *(undefined8 *)Method_OVRTask_FromGuid<OVRSpatialAnchor_OperationResult>__);
                    /* try { // try from 05d5d524 to 05e5d52f has its CatchHandler @ 05d5df0c */
  uVar7 = FUN_0339313c(lVar11,*(undefined8 *)
                               Method_System_Collections_Generic_List<XRPokeInteractor_PokeCollision>_Add__
                      );
  if (uVar7 == uVar10) {
    if (*(long *)(param_5 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
                    /* try { // try from 05d5d54c to 05e5d557 has its CatchHandler @ 05d5df08 */
    Unity_Collections_ArrayOfArrays<IntPtr>__get_BlockSizeInElements
              (*(long *)(param_5 + 0x30),uVar1,uVar2,0,
               *(undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRAnchor_SaveResult>>__);
                    /* try { // try from 05d5d570 to 05e5d57b has its CatchHandler @ 05d5df14 */
    FUN_05d5c0b8(param_5,lVar11,param_7,uVar10 == *(uint *)(param_5 + 0x38));
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar10 = *(uint *)(lVar11 + 0x18);
    if (0 < (int)uVar10) {
      uVar7 = 0;
      local_4e8 = 0;
      do {
        if (uVar10 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        iVar8 = *(int *)(lVar11 + (long)(int)uVar7 * 4 + 0x20);
        if (iVar8 == -1) break;
        if (*(long *)(param_5 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar12 = FUN_03abf644(*(long *)(param_5 + 0x108),iVar8,
                              *(undefined8 *)
                               Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (0 < *(int *)(lVar12 + 0x60)) {
          lVar14 = *(long *)(lVar12 + 0x58);
          lVar16 = 0;
          do {
            *(undefined4 *)(lVar14 + lVar16 * 4) = 0xffffffff;
            lVar16 = lVar16 + 1;
          } while (lVar16 < *(int *)(lVar12 + 0x60));
        }
        if (param_7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar17 = *(undefined8 *)(param_7 + 0xf0);
        if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        bVar6 = FUN_060f078c(uVar17,0,0);
        lVar16 = FUN_05d5a36c(lVar12);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar13 = FUN_060f078c(*(undefined8 *)(lVar16 + 0x18),0,0);
        if ((uVar13 & 1) == 0) {
          if ((bVar6 & 1) != 0) goto LAB_05d5d69c;
          bVar5 = false;
        }
        else {
          lVar16 = FUN_05d5a36c(lVar12);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(long *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          iVar8 = FUN_060d3708(*(long *)(lVar16 + 0x18),0);
          bVar5 = iVar8 == 0;
          if ((!bVar5 & bVar6) != 0) {
LAB_05d5d69c:
            if (*(long *)(param_7 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            iVar8 = FUN_060d3708(*(long *)(param_7 + 0xf0),0);
            bVar5 = iVar8 == 0;
          }
        }
        if (param_8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        local_330 = 0;
        uStack_208 = *(undefined8 *)(param_8 + 0x30);
        local_210 = *(undefined8 *)(param_8 + 0x28);
        uStack_1f8 = *(undefined8 *)(param_8 + 0x40);
        uStack_200 = *(undefined8 *)(param_8 + 0x38);
        local_1f0 = *(undefined8 *)(param_8 + 0x48);
        uStack_348 = 0;
        local_350 = 0;
        uStack_338 = 0;
        local_340 = 0;
        FUN_0610ceb0(&local_350,&local_210,0,0xffffffff,0,0);
        if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_0610d14c(&local_240,2,0);
        local_280 = local_220;
        uStack_298 = uStack_238;
        local_2a0 = local_240;
        uStack_288 = uStack_228;
        uStack_290 = uStack_230;
        local_250 = local_330;
        uStack_268 = uStack_348;
        local_270 = local_350;
        uStack_258 = uStack_338;
        uStack_260 = local_340;
        uVar13 = FUN_0610d678(&local_270,&local_2a0,0);
        if ((uVar13 & 1) == 0) {
          lVar16 = *(long *)(lVar12 + 0x78);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          iVar8 = *(int *)(lVar16 + 0x20);
          if (iVar8 == 0) {
            cVar3 = *(char *)(param_7 + 0x18d);
            uVar9 = *(undefined4 *)(param_7 + 0x180);
            if (*(int *)(*(long *)PTR_DAT_067cb238 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar10 = FUN_060b2158(0);
            if (*(int *)(*(long *)PTR_DAT_067cb280 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            iVar8 = FUN_05dddafc(cVar3 != '\0',uVar9,uVar10 & 1,0);
          }
          FUN_06121030(&local_100,iVar8,0);
          iVar8 = *(int *)(param_7 + 0x100);
          if ((bVar6 & 1) == 0) {
            if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_0610d14c(&local_350,2,0);
          }
          else {
            local_330 = 0;
            uStack_348 = 0;
            local_350 = 0;
            uStack_338 = 0;
            local_340 = 0;
            FUN_0610cedc(&local_350,*(undefined8 *)(param_7 + 0xf0),0);
          }
          local_180 = local_330;
          puVar15 = &local_1a0;
          uStack_198 = uStack_348;
          local_1a0 = local_350;
          uStack_188 = uStack_338;
          uStack_190 = local_340;
        }
        else {
          lVar16 = *(long *)(param_8 + 0x18);
          if (bVar5) {
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            FUN_060d597c(&local_350,lVar16,0);
            uStack_168 = uStack_348;
            local_170 = local_350;
            uStack_158 = uStack_338;
            local_160 = local_340;
            uStack_148 = uStack_328;
            local_150 = local_330;
            uVar13 = uStack_338 >> 0x20;
            local_140 = (undefined4)local_320;
          }
          else {
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            FUN_060d597c(&local_350,lVar16,0);
            uStack_148 = uStack_328;
            local_150 = local_330;
            uStack_168 = uStack_348;
            local_170 = local_350;
            uStack_158 = uStack_338;
            local_160 = local_340;
            local_140 = (undefined4)local_320;
            uVar13 = FUN_060d65a4(&local_170,0);
          }
          FUN_06121030(&local_100,uVar13 & 0xffffffff,0);
          if (*(long *)(param_8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_060d597c(&local_350,*(long *)(param_8 + 0x18),0);
          uStack_148 = uStack_328;
          local_150 = local_330;
          uStack_168 = uStack_348;
          uVar17 = uStack_168;
          local_170 = local_350;
          uStack_158 = uStack_338;
          local_160 = local_340;
          uStack_168._0_4_ = (int)uStack_348;
          local_140 = (undefined4)local_320;
          puVar15 = (undefined8 *)(param_8 + 0x28);
          iVar8 = (int)uStack_168;
          uStack_168 = uVar17;
        }
        uStack_2c8 = puVar15[1];
        local_2d0 = *puVar15;
        uStack_2b8 = puVar15[3];
        uStack_2c0 = puVar15[2];
        local_2b0 = puVar15[4];
        local_130 = local_2d0;
        uStack_128 = uStack_2c8;
        uStack_120 = uStack_2c0;
        uStack_118 = uStack_2b8;
        local_110 = local_2b0;
        FUN_06120fa4(&local_100,&local_2d0,(param_10 & 1) == 0,1,0);
        if (*(int *)(*(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__ + 0xe4)
            == 0) {
          thunk_FUN_02f6670c();
        }
        uVar13 = FUN_05d5cfdc(lVar12);
        if ((uVar13 & 1) != 0) {
          FUN_05d5d018(param_5,lVar12);
        }
        uVar9 = FUN_060fbd98(2,0);
        local_2e0 = 0;
        uStack_338 = 0;
        local_340 = 0;
        uStack_328 = 0;
        local_330 = 0;
        uStack_318 = 0;
        local_320 = 0;
        uStack_308 = 0;
        uStack_310 = 0;
        uStack_2f8 = 0;
        local_300 = 0;
        uStack_2e8 = 0;
        uStack_2f0 = 0;
        uStack_348 = 0;
        local_350 = 0;
        FUN_06121030(&local_350,uVar9,0);
        memcpy((void *)(param_5 + 0x48),&local_350,0x78);
        if (param_9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uStack_238 = *(undefined8 *)(param_9 + 0x30);
        local_240 = *(undefined8 *)(param_9 + 0x28);
        uStack_228 = *(undefined8 *)(param_9 + 0x40);
        uStack_230 = *(undefined8 *)(param_9 + 0x38);
        local_220 = *(undefined8 *)(param_9 + 0x48);
        if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_0610d14c(&local_378,2,0);
        uStack_3c8 = uStack_370;
        local_3d0 = local_378;
        uStack_3b8 = uStack_360;
        uStack_3c0 = local_368;
        local_3b0 = local_358;
        uStack_398 = uStack_238;
        local_3a0 = local_240;
        uStack_388 = uStack_228;
        uStack_390 = uStack_230;
        local_380 = local_220;
        uVar13 = FUN_0610d678(&local_3a0,&local_3d0,0);
        if ((uVar13 & 1) == 0) {
          if ((bVar6 & 1) == 0) {
            if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_0610d14c(&local_350,3,0);
            local_3e0 = local_330;
            local_400 = local_350;
            uStack_3f8 = uStack_348;
            uStack_3f0 = local_340;
            uStack_3e8 = uStack_338;
          }
          else {
            if (*(long *)(param_7 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            auVar18 = UnityEngine_Font__Internal_CreateFont(*(long *)(param_7 + 0xf0),0);
            local_330 = 0;
            uStack_348 = 0;
            local_350 = 0;
            uStack_338 = 0;
            local_340 = 0;
            FUN_0610d12c(&local_350,auVar18._0_8_,auVar18._8_8_,0,0xffffffff,0,0);
            local_3e0 = local_330;
            local_400 = local_350;
            uStack_3f8 = uStack_348;
            uStack_3f0 = local_340;
            uStack_3e8 = uStack_338;
          }
        }
        else {
          local_3e0 = *(undefined8 *)(param_9 + 0x48);
          local_400 = *(undefined8 *)(param_9 + 0x28);
          uStack_3f8 = *(undefined8 *)(param_9 + 0x30);
          uStack_3f0 = *(undefined8 *)(param_9 + 0x38);
          uStack_3e8 = *(undefined8 *)(param_9 + 0x40);
        }
        local_1d0 = local_400;
        uStack_1c8 = uStack_3f8;
        uStack_1c0 = uStack_3f0;
        uStack_1b8 = uStack_3e8;
        local_1b0 = local_3e0;
        FUN_06120fa4(param_5 + 0x48,&local_400,(param_10 & 2) == 0,1,0);
        if (param_10 != 0) {
          bVar5 = (bool)(bVar5 ^ 1);
          if ((param_10 & 1) == 0) {
            bVar5 = true;
          }
          if ((*(int *)(param_7 + 0xe8) != 1) || (!bVar5)) {
            FUN_06121014(param_1,param_2,param_3,param_4,0x3f800000,&local_100,0,0);
          }
          if ((param_10 >> 1 & 1) != 0) {
            FUN_06121014(0,0,0,0x3f800000,0x3f800000,param_5 + 0x48,0,0);
          }
        }
        if (1 < iVar8) {
          local_410 = local_110;
          uStack_428 = uStack_128;
          local_430 = local_130;
          uStack_418 = uStack_118;
          uStack_420 = uStack_120;
          FUN_06120fe8(&local_100,&local_430,0);
          if (*(int *)(*(long *)
                        Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                      + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar13 = FUN_05dadd80(0);
          if ((uVar13 & 1) != 0) {
            FUN_06120f48(&local_350,param_5 + 0x48,0);
            local_440 = local_330;
            uStack_458 = uStack_348;
            local_460 = local_350;
            uStack_448 = uStack_338;
            local_450 = local_340;
            FUN_06120fe8(param_5 + 0x48,&local_460,0);
          }
        }
        lVar16 = *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_02f6670c(lVar16);
          lVar16 = *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
        }
        if (*(char *)(*(long *)(lVar16 + 0xb8) + 8) != '\0') {
          lVar16 = *(long *)(param_5 + 200);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          FUN_06120f38(&local_100,*(undefined4 *)(lVar16 + 0x20),0);
          FUN_06120f38(param_5 + 0x48,*(undefined4 *)(param_5 + 0xd0),0);
          lVar16 = *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
        }
        memcpy(&local_350,&local_100,0x78);
        uVar17 = *(undefined8 *)(param_5 + 0x40);
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_02f6670c(lVar16);
        }
        memcpy(auStack_4d8,&local_350,0x78);
        uVar10 = FUN_05d5df78(local_4e8,auStack_4d8,uVar17);
        if (uVar10 == 0xffffffff) {
          **(uint **)(lVar12 + 0x58) = local_4e8;
          lVar12 = *(long *)(param_5 + 0x40);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(uint *)(lVar12 + 0x18) <= local_4e8) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          memmove((void *)(lVar12 + (long)(int)local_4e8 * 0x78 + 0x20),&local_100,0x78);
          lVar12 = *(long *)(param_5 + 0x30);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          iVar8 = FUN_048155b4(lVar12,uVar1,uVar2,
                               *(undefined8 *)
                                Method_OVRTask_SetResult<OVRResult<OVRAnchor_EraseResult>>__);
          Unity_Collections_ArrayOfArrays<IntPtr>__get_BlockSizeInElements
                    (lVar12,uVar1,uVar2,iVar8 + 1,
                     *(undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRAnchor_SaveResult>>__);
          local_4e8 = local_4e8 + 1;
        }
        else {
          **(uint **)(lVar12 + 0x58) = uVar10;
        }
        uVar7 = uVar7 + 1;
        uVar10 = *(uint *)(lVar11 + 0x18);
      } while ((int)uVar7 < (int)uVar10);
    }
    lVar11 = local_1e0;
    FUN_05c5cb50(local_1d8,0);
    if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c0(lVar11);
    }
  }
  else {
    FUN_05c5cb50(local_1d8,0);
  }
  return;
}


