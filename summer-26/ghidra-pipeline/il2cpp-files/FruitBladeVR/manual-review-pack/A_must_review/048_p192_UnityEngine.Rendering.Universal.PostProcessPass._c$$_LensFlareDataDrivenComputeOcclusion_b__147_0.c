/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessPass.<>c$$<LensFlareDataDrivenComputeOcclusion>b__147_0
ENTRY_POINT: 034d099c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Rendering_Universal_PostProcessPass_<>c__<LensFlareDataDrivenComputeOcclusion>b__147_0
               (undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
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
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
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
  
                    /* try { // try from 034d09b8 to 035d09bb has its CatchHandler @ 034d13b0 */
                    /* try { // try from 034d09bc to 035d09cb has its CatchHandler @ 034d13e8 */
  if ((DAT_03ef5f7b & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_LensFlareCommonSRP_TypeInfo_03cd50f8);
    DAT_03ef5f7b = 1;
  }
                    /* try { // try from 034d09f4 to 035d09f7 has its CatchHandler @ 034d13ac */
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
                    /* try { // try from 034d0a08 to 035d0a2f has its CatchHandler @ 034d13ec */
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  if (((param_2 == 0) || (lVar9 = *(long *)(param_2 + 0x58), lVar9 == 0)) ||
     (lVar10 = *(long *)(lVar9 + 0x1a0), lVar10 == 0)) goto LAB_034d0f00;
  lVar9 = *(long *)(lVar9 + 0xd8);
  uVar5 = UnityEngine_Experimental_Rendering_XRPass__get_enabled(lVar10,0);
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_2 + 0x58) == 0) goto LAB_034d0f00;
    UnityEngine_Rendering_Universal_UniversalCameraData__GetProjectionMatrixNoJitter
              (&local_150,*(long *)(param_2 + 0x58),0,0);
                    /* try { // try from 034d0afc to 035d0b07 has its CatchHandler @ 034d13c4 */
                    /* try { // try from 034d0b10 to 035d0b17 has its CatchHandler @ 034d13c0 */
    uStack_3c8 = uStack_148;
    local_3d0 = local_150;
    uStack_3b8 = uStack_138;
    uStack_3c0 = local_140;
    uStack_3a8 = uStack_128;
    local_3b0 = local_130;
    uStack_398 = uStack_118;
    uStack_3a0 = local_120;
    UnityEngine_GL__GetGPUProjectionMatrix(&local_190,&local_3d0,1,0);
    if (*(long *)(param_2 + 0x58) == 0) goto LAB_034d0f00;
    UnityEngine_Rendering_Universal_UniversalCameraData__GetViewMatrix
              (&local_210,*(long *)(param_2 + 0x58),0,0);
    puVar6 = &local_410;
    puVar8 = &local_450;
                    /* try { // try from 034d0b58 to 035d0b87 has its CatchHandler @ 034d1370 */
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
    uStack_440 = uStack_200;
    uStack_428 = uStack_1e8;
    local_430 = local_1f0;
    uStack_418 = uStack_1d8;
    uStack_420 = uStack_1e0;
LAB_034d0b74:
    uVar11 = local_210;
    uVar13 = local_1f0;
    UnityEngine_Matrix4x4__op_Multiply(&local_d0,puVar6,puVar8,0);
  }
  else {
                    /* try { // try from 034d0a44 to 035d0a5f has its CatchHandler @ 034d13d0 */
    uVar5 = UnityEngine_Experimental_Rendering_XRPass__get_singlePassEnabled(lVar10,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_2 + 0x58) == 0) goto LAB_034d0f00;
                    /* try { // try from 034d0a60 to 035d0a6f has its CatchHandler @ 034d13b8 */
      UnityEngine_Rendering_Universal_UniversalCameraData__GetProjectionMatrixNoJitter
                (&local_150,*(long *)(param_2 + 0x58),0,0);
                    /* try { // try from 034d0a78 to 035d0a83 has its CatchHandler @ 034d1388 */
      uStack_1c8 = uStack_148;
      local_1d0 = local_150;
      uStack_1b8 = uStack_138;
      uStack_1c0 = local_140;
      uStack_198 = uStack_118;
      local_1a0 = local_120;
      uStack_1a8 = uStack_128;
      local_1b0 = local_130;
      UnityEngine_GL__GetGPUProjectionMatrix(&local_190,&local_1d0,1,0);
                    /* try { // try from 034d0a98 to 035d0a9b has its CatchHandler @ 034d12fc */
      if (*(long *)(param_2 + 0x58) == 0) goto LAB_034d0f00;
                    /* try { // try from 034d0a9c to 035d0ab7 has its CatchHandler @ 034d1394 */
      UnityEngine_Rendering_Universal_UniversalCameraData__GetViewMatrix
                (&local_210,*(long *)(param_2 + 0x58),0,0);
      puVar6 = &local_250;
      puVar8 = &local_290;
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
      uStack_280 = uStack_200;
      uStack_268 = uStack_1e8;
      local_270 = local_1f0;
      uStack_258 = uStack_1d8;
      uStack_260 = uStack_1e0;
      goto LAB_034d0b74;
    }
    if (lVar9 == 0) goto LAB_034d0f00;
    UnityEngine_Camera__get_projectionMatrix(&local_150,lVar9,0);
    uStack_2c8 = uStack_148;
    local_2d0 = local_150;
    uStack_2b8 = uStack_138;
    uStack_2c0 = local_140;
                    /* try { // try from 034d0bb8 to 035d0bc3 has its CatchHandler @ 034d1310 */
    uStack_2a8 = uStack_128;
    local_2b0 = local_130;
    uStack_298 = uStack_118;
    uStack_2a0 = local_120;
    UnityEngine_GL__GetGPUProjectionMatrix(&local_190,&local_2d0,1,0);
    UnityEngine_Camera__get_worldToCameraMatrix(&local_210,lVar9,0);
                    /* try { // try from 034d0bd4 to 035d0be7 has its CatchHandler @ 034d12f4 */
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
                    /* try { // try from 034d0bfc to 035d0c03 has its CatchHandler @ 034d1344 */
    uStack_378 = uStack_1f8;
    uStack_380 = uStack_200;
    uStack_368 = uStack_1e8;
    local_370 = local_1f0;
    uStack_358 = uStack_1d8;
    uStack_360 = uStack_1e0;
    UnityEngine_Matrix4x4__op_Multiply(&local_310,&local_350,&local_390,0);
                    /* try { // try from 034d0c14 to 035d0c27 has its CatchHandler @ 034d12ec */
    uStack_c8 = uStack_308;
    local_d0 = local_310;
    uStack_b8 = uStack_2f8;
    local_c0 = uStack_300;
    uStack_a8 = uStack_2e8;
    local_b0 = local_2f0;
    uStack_98 = uStack_2d8;
    local_a0 = uStack_2e0;
    if ((*(long *)(param_2 + 0x58) == 0) ||
       (uVar11 = uStack_300, uVar13 = uStack_2e0, *(long *)(*(long *)(param_2 + 0x58) + 0x1a0) == 0)
       ) goto LAB_034d0f00;
  }
  uVar16 = (undefined4)uVar13;
  uVar15 = (undefined4)uVar11;
  if (lVar9 != 0) {
    uVar17 = *(undefined4 *)(param_2 + 0x80);
    uVar19 = *(undefined4 *)(param_2 + 0x84);
    uVar20 = *(undefined4 *)(param_2 + 0x78);
    uVar21 = *(undefined4 *)(param_2 + 0x7c);
                    /* try { // try from 034d0c44 to 035d0c47 has its CatchHandler @ 034d1304 */
                    /* try { // try from 034d0c48 to 035d0c57 has its CatchHandler @ 034d13a0 */
    uVar11 = *(undefined8 *)(param_2 + 0x60);
    uVar18 = *(undefined4 *)(lVar10 + 0x24);
    cVar1 = *(char *)(param_2 + 0x88);
    lVar7 = UnityEngine_Component__get_transform(lVar9,0);
    if (lVar7 != 0) {
      uVar14 = UnityEngine_Transform__get_position(lVar7,0);
      puVar2 = PTR_UnityEngine_Rendering_LensFlareCommonSRP_TypeInfo_03cd50f8;
                    /* try { // try from 034d0c7c to 035d0ce3 has its CatchHandler @ 034d12d8 */
      uStack_148 = uStack_c8;
      local_150 = local_d0;
      uStack_138 = uStack_b8;
      local_140 = local_c0;
      uStack_128 = uStack_a8;
      local_130 = local_b0;
      uStack_118 = uStack_98;
      local_120 = local_a0;
      if (param_3 != 0) {
        uVar13 = *(undefined8 *)(param_3 + 0x18);
        if (*(int *)(*(long *)PTR_UnityEngine_Rendering_LensFlareCommonSRP_TypeInfo_03cd50f8 + 0xe4)
            == 0) {
          thunk_FUN_01cb0d4c();
        }
        uStack_488 = uStack_148;
        local_490 = local_150;
        uStack_478 = uStack_138;
        uStack_480 = local_140;
        uStack_468 = uStack_128;
        local_470 = local_130;
        uStack_458 = uStack_118;
        uStack_460 = local_120;
        UnityEngine_Rendering_LensFlareCommonSRP__ComputeOcclusion
                  (uVar17,uVar19,uVar20,uVar21,uVar14,uVar15,uVar16,uVar11,lVar9,lVar10,uVar18,
                   cVar1 != '\0',1,&local_490,uVar13,0,0,0,0,0);
        uVar5 = UnityEngine_Experimental_Rendering_XRPass__get_enabled(lVar10,0);
                    /* try { // try from 034d0d28 to 035d0d37 has its CatchHandler @ 034d12e8 */
                    /* try { // try from 034d0d38 to 035d0d3f has its CatchHandler @ 034d139c */
        if ((((uVar5 & 1) != 0) &&
            (uVar5 = UnityEngine_Experimental_Rendering_XRPass__get_singlePassEnabled(lVar10,0),
            (uVar5 & 1) != 0)) &&
           (iVar3 = UnityEngine_Experimental_Rendering_XRPass__get_viewCount(lVar10,0), 1 < iVar3))
        {
          iVar3 = 1;
          do {
            if (*(long *)(param_2 + 0x58) == 0) goto LAB_034d0f00;
            UnityEngine_Rendering_Universal_UniversalCameraData__GetProjectionMatrixNoJitter
                      (&local_150,*(long *)(param_2 + 0x58),iVar3,0);
                    /* try { // try from 034d0d84 to 035d0d8b has its CatchHandler @ 034d13a4 */
            uStack_4c8 = uStack_148;
            local_4d0 = local_150;
            uStack_4b8 = uStack_138;
            uStack_4c0 = local_140;
            uStack_4a8 = uStack_128;
            local_4b0 = local_130;
            uStack_498 = uStack_118;
            uStack_4a0 = local_120;
            UnityEngine_GL__GetGPUProjectionMatrix(&local_190,&local_4d0,1,0);
                    /* try { // try from 034d0d9c to 035d0da7 has its CatchHandler @ 034d136c */
            if (*(long *)(param_2 + 0x58) == 0) goto LAB_034d0f00;
            UnityEngine_Rendering_Universal_UniversalCameraData__GetViewMatrix
                      (&local_210,*(long *)(param_2 + 0x58),iVar3,0);
            uStack_508 = uStack_188;
            local_510 = local_190;
            uStack_4f8 = uStack_178;
            uStack_500 = local_180;
                    /* try { // try from 034d0dcc to 035d0dd7 has its CatchHandler @ 034d132c */
            uStack_4e8 = uStack_168;
            local_4f0 = local_170;
            uStack_4d8 = uStack_158;
            uStack_4e0 = local_160;
            uStack_548 = uStack_208;
            local_550 = local_210;
                    /* try { // try from 034d0ddc to 035d0de3 has its CatchHandler @ 034d130c */
            uStack_538 = uStack_1f8;
            uStack_540 = uStack_200;
            uStack_528 = uStack_1e8;
            local_530 = local_1f0;
                    /* try { // try from 034d0de4 to 035d0dfb has its CatchHandler @ 034d1360 */
            uStack_518 = uStack_1d8;
            uStack_520 = uStack_1e0;
            UnityEngine_Matrix4x4__op_Multiply(&local_310,&local_510,&local_550,0);
            uVar18 = *(undefined4 *)(param_2 + 0x80);
            uVar17 = *(undefined4 *)(param_2 + 0x84);
            uVar19 = *(undefined4 *)(param_2 + 0x78);
            uVar20 = *(undefined4 *)(param_2 + 0x7c);
                    /* try { // try from 034d0e00 to 035d0e07 has its CatchHandler @ 034d1340 */
            uVar12 = *(undefined8 *)(param_2 + 0x60);
            uStack_108 = uStack_308;
            local_110 = local_310;
            cVar1 = *(char *)(param_2 + 0x88);
            uStack_f8 = uStack_2f8;
            local_100 = uStack_300;
            uStack_e8 = uStack_2e8;
            local_f0 = local_2f0;
            uStack_d8 = uStack_2d8;
            local_e0 = uStack_2e0;
            uVar11 = uStack_300;
            uVar13 = uStack_2e0;
            lVar7 = UnityEngine_Component__get_transform(lVar9,0);
            uVar16 = (undefined4)uVar13;
            uVar15 = (undefined4)uVar11;
                    /* try { // try from 034d0e20 to 035d0ea7 has its CatchHandler @ 034d1308 */
            if (lVar7 == 0) goto LAB_034d0f00;
            uVar21 = UnityEngine_Transform__get_position(lVar7,0);
            uVar11 = *(undefined8 *)(param_3 + 0x18);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            uStack_588 = uStack_108;
            local_590 = local_110;
            uStack_578 = uStack_f8;
            uStack_580 = local_100;
            uStack_568 = uStack_e8;
            local_570 = local_f0;
            uStack_558 = uStack_d8;
            uStack_560 = local_e0;
            UnityEngine_Rendering_LensFlareCommonSRP__ComputeOcclusion
                      (uVar18,uVar17,uVar19,uVar20,uVar21,uVar15,uVar16,uVar12,lVar9,lVar10,iVar3,
                       cVar1 != '\0',1,&local_590,uVar11,0,0,0,0,0);
            iVar3 = iVar3 + 1;
            iVar4 = UnityEngine_Experimental_Rendering_XRPass__get_viewCount(lVar10,0);
          } while (iVar3 < iVar4);
        }
                    /* try { // try from 034d0eec to 035d0eef has its CatchHandler @ 034d12b8 */
        return;
      }
    }
  }
LAB_034d0f00:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


