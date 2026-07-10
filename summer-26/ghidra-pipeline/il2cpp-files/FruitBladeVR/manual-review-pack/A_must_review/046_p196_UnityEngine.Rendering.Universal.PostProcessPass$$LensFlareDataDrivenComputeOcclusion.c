/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessPass$$LensFlareDataDrivenComputeOcclusion
ENTRY_POINT: 034befc0
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Rendering_Universal_PostProcessPass__LensFlareDataDrivenComputeOcclusion
               (undefined4 param_1,undefined4 param_2,long param_3,long *param_4,long param_5,
               undefined8 param_6,uint param_7)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
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
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  puVar2 = PTR_UnityEngine_Rendering_LensFlareCommonSRP_TypeInfo_03cd50f8;
  if ((DAT_03ef5f3e & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_LensFlareCommonSRP_TypeInfo_03cd50f8);
    DAT_03ef5f3e = 1;
  }
  uStack_98 = 0;
  local_a0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar4 = UnityEngine_Rendering_LensFlareCommonSRP__IsOcclusionRTCompatible(0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar6 = *param_4;
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x1a0) == 0)) goto LAB_034bf5e8;
  lVar7 = *(long *)(lVar6 + 0xd8);
  uVar4 = UnityEngine_Experimental_Rendering_XRPass__get_enabled(*(long *)(lVar6 + 0x1a0),0);
  lVar6 = *param_4;
  if ((uVar4 & 1) == 0) {
    if (lVar6 == 0) goto LAB_034bf5e8;
    UnityEngine_Rendering_Universal_UniversalCameraData__GetProjectionMatrixNoJitter
              (&local_150,lVar6,0,0);
    uStack_3c8 = uStack_148;
    local_3d0 = local_150;
    uStack_3b8 = uStack_138;
    uStack_3c0 = local_140;
    uStack_3a8 = uStack_128;
    local_3b0 = local_130;
    uStack_398 = uStack_118;
    uStack_3a0 = local_120;
    UnityEngine_GL__GetGPUProjectionMatrix(&local_190,&local_3d0,1,0);
    if (*param_4 == 0) goto LAB_034bf5e8;
    UnityEngine_Rendering_Universal_UniversalCameraData__GetViewMatrix(&local_210,*param_4,0,0);
    uStack_408 = uStack_188;
    local_410 = local_190;
    uStack_3f8 = uStack_178;
    uStack_400 = local_180;
    uStack_3e8 = uStack_168;
    local_3f0 = local_170;
    uStack_3d8 = uStack_158;
    uStack_3e0 = local_160;
    uStack_448 = uStack_208;
    local_450 = local_210;
    uStack_438 = uStack_1f8;
    uStack_440 = local_200;
    uStack_428 = uStack_1e8;
    local_430 = local_1f0;
    uStack_418 = uStack_1d8;
    uStack_420 = local_1e0;
    UnityEngine_Matrix4x4__op_Multiply(&local_310,&local_410,&local_450,0);
    uStack_c8 = uStack_308;
    local_d0 = local_310;
    uStack_b8 = uStack_2f8;
    local_c0 = uStack_300;
    uStack_a8 = uStack_2e8;
    local_b0 = local_2f0;
    uStack_98 = uStack_2d8;
    local_a0 = uStack_2e0;
    uVar9 = uStack_2e0;
  }
  else {
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x1a0) == 0)) goto LAB_034bf5e8;
    uVar4 = UnityEngine_Experimental_Rendering_XRPass__get_singlePassEnabled
                      (*(long *)(lVar6 + 0x1a0),0);
    if ((uVar4 & 1) == 0) {
      if (lVar7 == 0) goto LAB_034bf5e8;
      UnityEngine_Camera__get_projectionMatrix(&local_150,lVar7,0);
      uStack_2c8 = uStack_148;
      local_2d0 = local_150;
      uStack_2b8 = uStack_138;
      uStack_2c0 = local_140;
      uStack_2a8 = uStack_128;
      local_2b0 = local_130;
      uStack_298 = uStack_118;
      uStack_2a0 = local_120;
      UnityEngine_GL__GetGPUProjectionMatrix(&local_190,&local_2d0,1,0);
      UnityEngine_Camera__get_worldToCameraMatrix(&local_210,lVar7,0);
      uStack_348 = uStack_188;
      local_350 = local_190;
      uStack_338 = uStack_178;
      uStack_340 = local_180;
      uStack_328 = uStack_168;
      local_330 = local_170;
      uStack_318 = uStack_158;
      uStack_320 = local_160;
      uStack_388 = uStack_208;
      local_390 = local_210;
      uStack_378 = uStack_1f8;
      uStack_380 = local_200;
      uStack_368 = uStack_1e8;
      local_370 = local_1f0;
      uStack_358 = uStack_1d8;
      uStack_360 = local_1e0;
      UnityEngine_Matrix4x4__op_Multiply(&local_310,&local_350,&local_390,0);
      uStack_c8 = uStack_308;
      local_d0 = local_310;
      uStack_b8 = uStack_2f8;
      local_c0 = uStack_300;
      uStack_a8 = uStack_2e8;
      local_b0 = local_2f0;
      uStack_98 = uStack_2d8;
      local_a0 = uStack_2e0;
      if ((*param_4 == 0) || (uVar9 = uStack_2e0, *(long *)(*param_4 + 0x1a0) == 0))
      goto LAB_034bf5e8;
    }
    else {
      if (*param_4 == 0) goto LAB_034bf5e8;
      UnityEngine_Rendering_Universal_UniversalCameraData__GetProjectionMatrixNoJitter
                (&local_150,*param_4,0,0);
      uStack_1c8 = uStack_148;
      local_1d0 = local_150;
      uStack_1b8 = uStack_138;
      local_1c0 = local_140;
      uStack_1a8 = uStack_128;
      local_1b0 = local_130;
      uStack_198 = uStack_118;
      local_1a0 = local_120;
      UnityEngine_GL__GetGPUProjectionMatrix(&local_190,&local_1d0,1,0);
      if (*param_4 == 0) goto LAB_034bf5e8;
      UnityEngine_Rendering_Universal_UniversalCameraData__GetViewMatrix(&local_210,*param_4,0,0);
      uStack_248 = uStack_188;
      local_250 = local_190;
      uStack_238 = uStack_178;
      uStack_240 = local_180;
      uStack_228 = uStack_168;
      local_230 = local_170;
      uStack_218 = uStack_158;
      uStack_220 = local_160;
      uStack_288 = uStack_208;
      local_290 = local_210;
      uStack_278 = uStack_1f8;
      uStack_280 = local_200;
      uStack_268 = uStack_1e8;
      local_270 = local_1f0;
      uStack_258 = uStack_1d8;
      uStack_260 = local_1e0;
      uVar9 = local_1f0;
      UnityEngine_Matrix4x4__op_Multiply(&local_d0,&local_250,&local_290,0);
    }
  }
  uVar14 = (undefined4)uVar9;
  lVar6 = *(long *)(param_3 + 0x100);
  if ((lVar6 != 0) && (param_5 != 0)) {
    uStack_478 = *(undefined8 *)(lVar6 + 0x30);
    local_480 = *(undefined8 *)(lVar6 + 0x28);
    uStack_468 = *(undefined8 *)(lVar6 + 0x40);
    uVar9 = *(undefined8 *)(lVar6 + 0x38);
    local_460 = *(undefined8 *)(lVar6 + 0x48);
    uStack_470 = uVar9;
    UnityEngine_Rendering_CommandBuffer__SetGlobalTexture
              (param_5,*(undefined8 *)(lVar6 + 0x58),&local_480,0);
    uVar13 = (undefined4)uVar9;
    if ((*(long *)(param_3 + 0x1a0) != 0) &&
       (((*param_4 != 0 && (lVar6 = *(long *)(*param_4 + 0x1a0), lVar6 != 0)) && (lVar7 != 0)))) {
      iVar8 = *(int *)(param_3 + 0xb8);
      iVar3 = *(int *)(param_3 + 0xbc);
      uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x1a0) + 0x88);
      uVar12 = *(undefined4 *)(lVar6 + 0x24);
      lVar5 = UnityEngine_Component__get_transform(lVar7,0);
      if (lVar5 != 0) {
        uVar11 = UnityEngine_Transform__get_position(lVar5,0);
        uStack_148 = uStack_c8;
        local_150 = local_d0;
        uStack_138 = uStack_b8;
        local_140 = local_c0;
        uStack_128 = uStack_a8;
        local_130 = local_b0;
        uStack_118 = uStack_98;
        local_120 = local_a0;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uStack_4b8 = uStack_148;
        local_4c0 = local_150;
        uStack_4a8 = uStack_138;
        uStack_4b0 = local_140;
        uStack_498 = uStack_128;
        local_4a0 = local_130;
        uStack_488 = uStack_118;
        uStack_490 = local_120;
        UnityEngine_Rendering_LensFlareCommonSRP__ComputeOcclusion
                  ((float)iVar8,(float)iVar3,param_1,param_2,uVar11,uVar13,uVar14,uVar9,lVar7,lVar6,
                   uVar12,param_7 & 1,1,&local_4c0,param_5,0,0,0,0,0);
        if ((*param_4 != 0) && (lVar6 = *(long *)(*param_4 + 0x1a0), lVar6 != 0)) {
          uVar4 = UnityEngine_Experimental_Rendering_XRPass__get_enabled(lVar6,0);
          if ((uVar4 & 1) == 0) {
            return;
          }
          if ((*param_4 != 0) && (lVar6 = *(long *)(*param_4 + 0x1a0), lVar6 != 0)) {
            uVar4 = UnityEngine_Experimental_Rendering_XRPass__get_singlePassEnabled(lVar6,0);
            if ((uVar4 & 1) == 0) {
              return;
            }
            lVar6 = *param_4;
            if (lVar6 != 0) {
              iVar8 = 1;
              while (*(long *)(lVar6 + 0x1a0) != 0) {
                iVar3 = UnityEngine_Experimental_Rendering_XRPass__get_viewCount
                                  (*(long *)(lVar6 + 0x1a0),0);
                if (iVar3 <= iVar8) {
                  return;
                }
                if (*param_4 == 0) break;
                UnityEngine_Rendering_Universal_UniversalCameraData__GetProjectionMatrixNoJitter
                          (&local_150,*param_4,iVar8,0);
                uStack_4f8 = uStack_148;
                local_500 = local_150;
                uStack_4e8 = uStack_138;
                uStack_4f0 = local_140;
                uStack_4d8 = uStack_128;
                local_4e0 = local_130;
                uStack_4c8 = uStack_118;
                uStack_4d0 = local_120;
                UnityEngine_GL__GetGPUProjectionMatrix(&local_190,&local_500,1,0);
                if (*param_4 == 0) break;
                UnityEngine_Rendering_Universal_UniversalCameraData__GetViewMatrix
                          (&local_210,*param_4,iVar8,0);
                uStack_538 = uStack_188;
                local_540 = local_190;
                uStack_528 = uStack_178;
                uStack_530 = local_180;
                uStack_518 = uStack_168;
                local_520 = local_170;
                uStack_508 = uStack_158;
                uStack_510 = local_160;
                uStack_578 = uStack_208;
                local_580 = local_210;
                uStack_568 = uStack_1f8;
                uStack_570 = local_200;
                uStack_558 = uStack_1e8;
                local_560 = local_1f0;
                uStack_548 = uStack_1d8;
                uStack_550 = local_1e0;
                UnityEngine_Matrix4x4__op_Multiply(&local_310,&local_540,&local_580,0);
                lVar6 = *(long *)(param_3 + 0x100);
                uStack_108 = uStack_308;
                local_110 = local_310;
                uStack_f8 = uStack_2f8;
                local_100 = uStack_300;
                uStack_e8 = uStack_2e8;
                local_f0 = local_2f0;
                uStack_d8 = uStack_2d8;
                local_e0 = uStack_2e0;
                if (lVar6 == 0) break;
                uStack_5a8 = *(undefined8 *)(lVar6 + 0x30);
                local_5b0 = *(undefined8 *)(lVar6 + 0x28);
                uStack_598 = *(undefined8 *)(lVar6 + 0x40);
                uVar10 = *(undefined8 *)(lVar6 + 0x38);
                local_590 = *(undefined8 *)(lVar6 + 0x48);
                uVar9 = uStack_2e0;
                uStack_5a0 = uVar10;
                UnityEngine_Rendering_CommandBuffer__SetGlobalTexture
                          (param_5,*(undefined8 *)(lVar6 + 0x58),&local_5b0,0);
                uVar13 = (undefined4)uVar9;
                uVar14 = (undefined4)uVar10;
                if ((*(long *)(param_3 + 0x1a0) == 0) || (*param_4 == 0)) break;
                iVar3 = *(int *)(param_3 + 0xb8);
                iVar1 = *(int *)(param_3 + 0xbc);
                uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x1a0) + 0x88);
                uVar10 = *(undefined8 *)(*param_4 + 0x1a0);
                lVar6 = UnityEngine_Component__get_transform(lVar7,0);
                if (lVar6 == 0) break;
                uVar12 = UnityEngine_Transform__get_position(lVar6,0);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_01cb0d4c();
                }
                uStack_5e8 = uStack_108;
                local_5f0 = local_110;
                uStack_5d8 = uStack_f8;
                uStack_5e0 = local_100;
                uStack_5c8 = uStack_e8;
                local_5d0 = local_f0;
                uStack_5b8 = uStack_d8;
                uStack_5c0 = local_e0;
                UnityEngine_Rendering_LensFlareCommonSRP__ComputeOcclusion
                          ((float)iVar3,(float)iVar1,param_1,param_2,uVar12,uVar14,uVar13,uVar9,
                           lVar7,uVar10,iVar8,param_7 & 1,1,&local_5f0,param_5,0,0,0,0,0);
                lVar6 = *param_4;
                iVar8 = iVar8 + 1;
                if (lVar6 == 0) break;
              }
            }
          }
        }
      }
    }
  }
LAB_034bf5e8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


