/*
FUNCTION_NAME: FUN_06aef138
ENTRY_POINT: 06aef138
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_21;functionality_gaze_retrieval_or_extraction
*/


uint FUN_06aef138(long param_1,long param_2,undefined8 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  int *piVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  int iVar28;
  undefined4 uVar29;
  int iVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  uint local_424;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined4 local_3d0;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined4 local_3b0;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 local_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
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
  undefined8 local_2d0;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined4 local_250;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  undefined8 local_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  puVar1 = OVRPlugin_OVRP_0_1_0_TypeInfo;
  if ((DAT_073ab33e & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f9c5b0);
    FUN_02fe925c(PTR_DAT_06f6d618);
    FUN_02fe925c(OVRPlugin_OVRP_0_1_1_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_0_1_2_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_0_1_3_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_0_5_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_0_1_0_TypeInfo);
    FUN_02fe925c(ARGameManager_<IncrementalGarbageCollection>d__80_TypeInfo);
    FUN_02fe925c(ARGameManager_<MonitorValidPathRoutine>d__93_TypeInfo);
    FUN_02fe925c(ARGameManager_<GameOverRoutine>d__100_TypeInfo);
    FUN_02fe925c(ARGameManager_<InstantiateWaveEnemies>d__96_TypeInfo);
    FUN_02fe925c(ARGameManager_<InstantiateItem>d__110_TypeInfo);
    DAT_073ab33e = 1;
  }
  uVar5 = FUN_04bc3464(param_2,*param_3,*(undefined8 *)puVar1);
  puVar1 = ARGameManager_<InstantiateItem>d__110_TypeInfo;
  if ((uVar5 & 1) == 0) {
    puVar9 = (undefined8 *)
             FUN_04bc3258(param_2,*(undefined8 *)ARGameManager_<InstantiateItem>d__110_TypeInfo);
    puVar11 = (undefined8 *)FUN_04bc3258(param_3,*(undefined8 *)puVar1);
    fVar19 = DAT_01369900;
    fVar20 = (float)*puVar9 - (float)*puVar11;
    fVar26 = (float)((ulong)*puVar9 >> 0x20) - (float)((ulong)*puVar11 >> 0x20);
    fVar27 = (float)puVar9[1] - (float)puVar11[1];
    fVar23 = (float)((ulong)puVar9[1] >> 0x20) - (float)((ulong)puVar11[1] >> 0x20);
    if (fVar23 * fVar23 + fVar27 * fVar27 + fVar20 * fVar20 + fVar26 * fVar26 < DAT_01369900) {
      local_424 = 0;
      uVar16 = 0;
    }
    else {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      uVar31 = *(undefined4 *)(puVar11 + 1);
      uVar29 = *(undefined4 *)((long)puVar11 + 0xc);
      uVar33 = *(undefined4 *)puVar11;
      uVar32 = *(undefined4 *)((long)puVar11 + 4);
      uVar35 = *(undefined4 *)(puVar9 + 1);
      uVar34 = *(undefined4 *)((long)puVar9 + 0xc);
      lVar13 = *plVar8;
      uVar37 = *(undefined4 *)puVar9;
      uVar36 = *(undefined4 *)((long)puVar9 + 4);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_06aef344;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,3);
LAB_06aef344:
      uVar2 = (*(code *)*puVar12)(uVar37,uVar36,uVar35,uVar34,uVar33,uVar32,uVar31,uVar29,plVar8,
                                  0x10000,param_4,param_5,param_6,puVar12[1]);
      uVar16 = uVar2 & 1;
      local_424 = 8;
      if ((uVar2 & 1) == 0) {
        local_424 = 0;
      }
    }
    uVar5 = FUN_06b1f030(puVar9[2],puVar11[2],0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = puVar9[2];
      uVar17 = puVar11[2];
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_06aef420;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06aef420:
      uVar2 = (*(code *)*puVar12)(plVar8,0x10001,uVar18,uVar17,param_4,param_5,param_6,puVar12[1]);
      uVar16 = uVar16 | uVar2 & 1;
    }
    uVar5 = FUN_06b1f030(puVar9[3],puVar11[3],0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = puVar9[3];
      uVar17 = puVar11[3];
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_06aef4dc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06aef4dc:
      uVar2 = (*(code *)*puVar12)(plVar8,0x10002,uVar18,uVar17,param_4,param_5,param_6,puVar12[1]);
      uVar16 = uVar16 | uVar2 & 1;
    }
    uStack_ec = *(undefined8 *)((long)puVar9 + 0x34);
    uStack_100 = puVar9[4];
    uStack_f0 = (undefined4)((ulong)*(undefined8 *)((long)puVar9 + 0x2c) >> 0x20);
    uStack_f8 = (undefined4)puVar9[5];
    local_f4 = (undefined4)((ulong)puVar9[5] >> 0x20);
    uStack_10c = *(undefined8 *)((long)puVar11 + 0x34);
    uStack_120 = puVar11[4];
                    /* try { // try from 06aef530 to 06bef7df has its CatchHandler @ 06aef530
                       catch() { ... } // from try @ 06aef530 with catch @ 06aef530
                       catch() { ... } // from try @ 06aef804 with catch @ 06aef530
                       catch() { ... } // from try @ 06aef88c with catch @ 06aef530
                       catch() { ... } // from try @ 06aef92c with catch @ 06aef530 */
    uStack_110 = (undefined4)((ulong)*(undefined8 *)((long)puVar11 + 0x2c) >> 0x20);
    uStack_118 = (undefined4)puVar11[5];
    local_114 = (undefined4)((ulong)puVar11[5] >> 0x20);
    uVar5 = FUN_06a1e458(&uStack_100,&uStack_120,0);
    if ((uVar5 & 1) != 0) {
      if (param_1 == 0) goto LAB_06af312c;
      plVar8 = (long *)FUN_06b0af1c(param_1,0);
      uVar17 = *(undefined8 *)((long)puVar9 + 0x34);
      local_340 = puVar9[4];
      uStack_32c = (undefined4)uVar17;
      uStack_328 = (undefined4)((ulong)uVar17 >> 0x20);
      local_330 = (undefined4)((ulong)*(undefined8 *)((long)puVar9 + 0x2c) >> 0x20);
      uStack_338 = (undefined4)puVar9[5];
      uStack_334 = (undefined4)((ulong)puVar9[5] >> 0x20);
      uVar18 = *(undefined8 *)((long)puVar11 + 0x34);
      local_360 = puVar11[4];
      uStack_34c = (undefined4)uVar18;
      uStack_348 = (undefined4)((ulong)uVar18 >> 0x20);
      local_350 = (undefined4)((ulong)*(undefined8 *)((long)puVar11 + 0x2c) >> 0x20);
      uStack_358 = (undefined4)puVar11[5];
      uStack_354 = (undefined4)((ulong)puVar11[5] >> 0x20);
      if (plVar8 == (long *)0x0) goto LAB_06af312c;
      uStack_134 = uStack_334;
      uStack_130 = local_330;
      uStack_154 = uStack_354;
      uStack_150 = local_350;
      lVar13 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      local_160 = local_360;
      uStack_158 = uStack_358;
      uStack_14c = uVar18;
      local_140 = local_340;
      uStack_138 = uStack_338;
      uStack_12c = uVar17;
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 8) * 0x10 + 0x138);
            goto LAB_06aef61c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,8);
LAB_06aef61c:
      uStack_b8 = uStack_138;
      local_c0 = local_140;
      uStack_ac = (undefined4)uStack_12c;
      uStack_a8 = (undefined4)((ulong)uStack_12c >> 0x20);
      uStack_b4 = uStack_134;
      local_b0 = uStack_130;
      uStack_d8 = uStack_158;
      local_e0 = local_160;
      uStack_cc = (undefined4)uStack_14c;
      uStack_c8 = (undefined4)((ulong)uStack_14c >> 0x20);
      uStack_d4 = uStack_154;
      local_d0 = uStack_150;
      uVar2 = (*(code *)*puVar12)(plVar8,0x10003,&local_c0,&local_e0,param_4,param_5,param_6,
                                  puVar12[1]);
      uVar16 = uVar16 | uVar2 & 1;
    }
    uVar17 = puVar9[8];
    uVar18 = puVar11[8];
    if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar5 = FUN_068f8810(uVar17,uVar18,0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = puVar9[8];
      uVar17 = puVar11[8];
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 7) * 0x10 + 0x138);
            goto LAB_06aef720;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,7);
LAB_06aef720:
      uVar2 = (*(code *)*puVar12)(plVar8,0x10004,uVar18,uVar17,param_4,param_5,param_6,puVar12[1]);
      uVar16 = uVar16 | uVar2 & 1;
    }
    uVar5 = FUN_06b06788(puVar9[9],puVar9[10],puVar11[9],puVar11[10],0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      uVar17 = puVar11[9];
      uVar21 = puVar11[10];
      lVar13 = *plVar8;
      uVar18 = puVar9[9];
      uVar22 = puVar9[10];
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
                    /* try { // try from 06aef7e0 to 06bef7ef has its CatchHandler @ 06aef898 */
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 6) * 0x10 + 0x138);
            goto LAB_06aef7e8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,6);
LAB_06aef7e8:
                    /* try { // try from 06aef7f8 to 06bef803 has its CatchHandler @ 06aef894 */
                    /* try { // try from 06aef804 to 06bef887 has its CatchHandler @ 06aef530 */
      uVar2 = (*(code *)*puVar12)(plVar8,0x10005,uVar18,uVar22,uVar17,uVar21,param_4,param_5,param_6
                                  ,puVar12[1]);
      uVar16 = uVar16 | uVar2 & 1;
    }
    if (*(int *)(puVar9 + 0xb) != *(int *)(puVar11 + 0xb)) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar29 = *(undefined4 *)(puVar9 + 0xb);
      uVar31 = *(undefined4 *)(puVar11 + 0xb);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
                    /* try { // try from 06aef888 to 06bef88b has its CatchHandler @ 06aef898 */
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
                    /* try { // try from 06aef88c to 06bef8af has its CatchHandler @ 06aef530 */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06aef7f8 with catch @ 06aef894
                        */
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_06aef8c4;
          }
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06aef7e0 with catch @ 06aef898
                       catch(type#1 @ 06b7e988) { ... } // from try @ 06aef888 with catch @ 06aef898
                        */
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,4);
                    /* try { // try from 06aef8b0 to 06bef8b3 has its CatchHandler @ 06aef8c4 */
LAB_06aef8c4:
                    /* catch() { ... } // from try @ 06aef8b0 with catch @ 06aef8c4 */
      uVar2 = (*(code *)*puVar12)(plVar8,0x10006,uVar29,uVar31,param_4,param_5,param_6,puVar12[1]);
      uVar16 = uVar16 | uVar2 & 1;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)((long)puVar9 + 0x5c),*(undefined8 *)((long)puVar11 + 0x5c),
                         0);
                    /* try { // try from 06aef904 to 06bef92b has its CatchHandler @ 06aef940 */
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)((long)puVar9 + 0x5c);
      uVar17 = *(undefined8 *)((long)puVar11 + 0x5c);
                    /* try { // try from 06aef92c to 06bef937 has its CatchHandler @ 06aef530 */
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    /* try { // try from 06aef938 to 06bef93f has its CatchHandler @ 06aef940 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06aef904 with catch @ 06aef940
                       catch(type#2 @ 00000000) { ... } // from try @ 06aef938 with catch @ 06aef940
                        */
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_06aef984;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06aef984:
      uVar2 = (*(code *)*puVar12)(plVar8,0x10007,uVar18,uVar17,param_4,param_5,param_6,puVar12[1]);
      uVar16 = uVar16 | uVar2 & 1;
    }
    if (*(int *)((long)puVar9 + 100) != *(int *)((long)puVar11 + 100)) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar29 = *(undefined4 *)((long)puVar9 + 100);
      uVar31 = *(undefined4 *)((long)puVar11 + 100);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_06aefa40;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,4);
LAB_06aefa40:
      uVar2 = (*(code *)*puVar12)(plVar8,0x10008,uVar29,uVar31,param_4,param_5,param_6,puVar12[1]);
      uVar16 = uVar16 | uVar2 & 1;
    }
    fVar20 = (float)puVar9[0xd] - (float)puVar11[0xd];
    fVar26 = (float)((ulong)puVar9[0xd] >> 0x20) - (float)((ulong)puVar11[0xd] >> 0x20);
    fVar27 = (float)puVar9[0xe] - (float)puVar11[0xe];
    fVar23 = (float)((ulong)puVar9[0xe] >> 0x20) - (float)((ulong)puVar11[0xe] >> 0x20);
    if (fVar19 <= fVar23 * fVar23 + fVar27 * fVar27 + fVar20 * fVar20 + fVar26 * fVar26) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      uVar31 = *(undefined4 *)(puVar11 + 0xe);
      uVar29 = *(undefined4 *)((long)puVar11 + 0x74);
      uVar33 = *(undefined4 *)(puVar11 + 0xd);
      uVar32 = *(undefined4 *)((long)puVar11 + 0x6c);
      uVar35 = *(undefined4 *)(puVar9 + 0xe);
      uVar34 = *(undefined4 *)((long)puVar9 + 0x74);
      lVar13 = *plVar8;
      uVar37 = *(undefined4 *)(puVar9 + 0xd);
      uVar36 = *(undefined4 *)((long)puVar9 + 0x6c);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_06aefb28;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,3);
LAB_06aefb28:
      uVar2 = (*(code *)*puVar12)(uVar37,uVar36,uVar35,uVar34,uVar33,uVar32,uVar31,uVar29,plVar8,
                                  0x10009,param_4,param_5,param_6,puVar12[1]);
      uVar16 = uVar16 | uVar2 & 1;
    }
    if (*(float *)(puVar9 + 0xf) != *(float *)(puVar11 + 0xf)) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar31 = *(undefined4 *)(puVar9 + 0xf);
      uVar29 = *(undefined4 *)(puVar11 + 0xf);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_06aefbf8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,0);
LAB_06aefbf8:
      uVar2 = (*(code *)*puVar12)(uVar31,uVar29,plVar8,0x1000a,param_4,param_5,param_6,puVar12[1]);
      uVar16 = uVar16 | uVar2 & 1;
    }
    if (*(int *)((long)puVar9 + 0x7c) != *(int *)((long)puVar11 + 0x7c)) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar29 = *(undefined4 *)((long)puVar9 + 0x7c);
      uVar31 = *(undefined4 *)((long)puVar11 + 0x7c);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_06aefcb4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,4);
LAB_06aefcb4:
      uVar2 = (*(code *)*puVar12)(plVar8,0x1000b,uVar29,uVar31,param_4,param_5,param_6,puVar12[1]);
      uVar16 = uVar16 | uVar2 & 1;
    }
    if (*(int *)(puVar9 + 0x10) != *(int *)(puVar11 + 0x10)) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar29 = *(undefined4 *)(puVar9 + 0x10);
      uVar31 = *(undefined4 *)(puVar11 + 0x10);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_06aefd70;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,4);
LAB_06aefd70:
      uVar2 = (*(code *)*puVar12)(plVar8,0x1000c,uVar29,uVar31,param_4,param_5,param_6,puVar12[1]);
      uVar16 = uVar16 | uVar2 & 1;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)((long)puVar9 + 0x84),*(undefined8 *)((long)puVar11 + 0x84),
                         0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)((long)puVar9 + 0x84);
      uVar17 = *(undefined8 *)((long)puVar11 + 0x84);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_06aefe3c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06aefe3c:
      uVar2 = (*(code *)*puVar9)(plVar8,0x1000d,uVar18,uVar17,param_4,param_5,param_6,puVar9[1]);
      uVar16 = (uint)((uVar2 & 1) != 0 || uVar16 != 0);
    }
  }
  else {
    local_424 = 0;
    uVar16 = 0;
  }
  uVar5 = FUN_04bc3924(param_2 + 8,param_3[1],*(undefined8 *)OVRPlugin_OVRP_0_5_0_TypeInfo);
  puVar1 = ARGameManager_<GameOverRoutine>d__100_TypeInfo;
  if ((uVar5 & 1) == 0) {
    piVar6 = (int *)FUN_04bc3718(param_2 + 8,
                                 *(undefined8 *)ARGameManager_<GameOverRoutine>d__100_TypeInfo);
    piVar7 = (int *)FUN_04bc3718(param_3 + 1,*(undefined8 *)puVar1);
    if (*piVar6 != *piVar7) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      iVar28 = *piVar6;
      iVar30 = *piVar7;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 4) * 0x10 + 0x138);
            goto LAB_06aeff44;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,4);
LAB_06aeff44:
      uVar2 = (*(code *)*puVar9)(plVar8,0x20000,iVar28,iVar30,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    if (piVar6[1] != piVar7[1]) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      iVar28 = piVar6[1];
      iVar30 = piVar7[1];
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 4) * 0x10 + 0x138);
            goto LAB_06aefff4;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,4);
LAB_06aefff4:
      uVar2 = (*(code *)*puVar9)(plVar8,0x20001,iVar28,iVar30,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    if (piVar6[2] != piVar7[2]) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      iVar28 = piVar6[2];
      iVar30 = piVar7[2];
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
                    /* try { // try from 06af009c to 06bf0143 has its CatchHandler @ 06af009c
                       catch() { ... } // from try @ 06af009c with catch @ 06af009c
                       catch() { ... } // from try @ 06af017c with catch @ 06af009c
                       catch() { ... } // from try @ 06af01a8 with catch @ 06af009c
                       catch() { ... } // from try @ 06af01d8 with catch @ 06af009c
                       catch() { ... } // from try @ 06af0208 with catch @ 06af009c */
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 4) * 0x10 + 0x138);
            goto LAB_06af00ac;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,4);
LAB_06af00ac:
      uVar2 = (*(code *)*puVar9)(plVar8,0x20002,iVar28,iVar30,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    if ((float)piVar6[3] != (float)piVar7[3]) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      iVar30 = piVar6[3];
      iVar28 = piVar7[3];
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_06af0158;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
                    /* try { // try from 06af0144 to 06bf014b has its CatchHandler @ 06af01bc */
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,0);
LAB_06af0158:
                    /* try { // try from 06af0168 to 06bf016f has its CatchHandler @ 06af01b4 */
                    /* try { // try from 06af0174 to 06bf017b has its CatchHandler @ 06af01ac */
      uVar2 = (*(code *)*puVar9)(iVar30,iVar28,plVar8,0x20003,param_4,param_5,param_6,puVar9[1]);
                    /* try { // try from 06af017c to 06bf019f has its CatchHandler @ 06af009c */
      uVar16 = uVar16 | uVar2;
    }
    if ((float)piVar6[4] != (float)piVar7[4]) {
                    /* try { // try from 06af01a0 to 06bf01a3 has its CatchHandler @ 06af01b8 */
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
                    /* try { // try from 06af01a4 to 06bf01a7 has its CatchHandler @ 06af01b0 */
                    /* try { // try from 06af01a8 to 06bf01d3 has its CatchHandler @ 06af009c */
      lVar13 = *plVar8;
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06af0174 with catch @ 06af01ac
                        */
      iVar30 = piVar6[4];
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06af01a4 with catch @ 06af01b0
                        */
      iVar28 = piVar7[4];
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06af0168 with catch @ 06af01b4
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06af01a0 with catch @ 06af01b8
                        */
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06af0144 with catch @ 06af01bc
                        */
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
                    /* try { // try from 06af01d4 to 06bf01d7 has its CatchHandler @ 06af01f8 */
                    /* try { // try from 06af01d8 to 06bf01ff has its CatchHandler @ 06af009c */
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
                    /* catch() { ... } // from try @ 06af01d4 with catch @ 06af01f8 */
                    /* try { // try from 06af0200 to 06bf0207 has its CatchHandler @ 06af021c */
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_06af0204;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,0);
LAB_06af0204:
                    /* try { // try from 06af0208 to 06bf0213 has its CatchHandler @ 06af009c */
                    /* try { // try from 06af0214 to 06bf021b has its CatchHandler @ 06af021c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06af0200 with catch @ 06af021c
                       catch(type#2 @ 00000000) { ... } // from try @ 06af0214 with catch @ 06af021c
                        */
      uVar2 = (*(code *)*puVar9)(iVar30,iVar28,plVar8,0x20004,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    if ((float)piVar6[5] != (float)piVar7[5]) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      iVar30 = piVar6[5];
      iVar28 = piVar7[5];
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_06af02b0;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,0);
LAB_06af02b0:
      uVar2 = (*(code *)*puVar9)(iVar30,iVar28,plVar8,0x20005,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    if ((float)piVar6[6] != (float)piVar7[6]) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      iVar30 = piVar6[6];
      iVar28 = piVar7[6];
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_06af035c;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,0);
LAB_06af035c:
      uVar2 = (*(code *)*puVar9)(iVar30,iVar28,plVar8,0x20006,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)(piVar6 + 7),*(undefined8 *)(piVar7 + 7),0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)(piVar6 + 7);
      uVar17 = *(undefined8 *)(piVar7 + 7);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06af0410;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af0410:
      uVar2 = (*(code *)*puVar9)(plVar8,0x20007,uVar18,uVar17,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    if (piVar6[9] != piVar7[9]) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      iVar28 = piVar6[9];
      iVar30 = piVar7[9];
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 4) * 0x10 + 0x138);
            goto LAB_06af04c0;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,4);
LAB_06af04c0:
      uVar2 = (*(code *)*puVar9)(plVar8,0x20008,iVar28,iVar30,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)(piVar6 + 10),*(undefined8 *)(piVar7 + 10),0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)(piVar6 + 10);
      uVar17 = *(undefined8 *)(piVar7 + 10);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06af0574;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af0574:
      uVar2 = (*(code *)*puVar9)(plVar8,0x20009,uVar18,uVar17,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    if (piVar6[0xc] != piVar7[0xc]) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      iVar28 = piVar6[0xc];
      iVar30 = piVar7[0xc];
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 4) * 0x10 + 0x138);
            goto LAB_06af0624;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,4);
LAB_06af0624:
      uVar2 = (*(code *)*puVar9)(plVar8,0x2000a,iVar28,iVar30,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    if ((float)piVar6[0xd] != (float)piVar7[0xd]) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      iVar30 = piVar6[0xd];
      iVar28 = piVar7[0xd];
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_06af06d0;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,0);
LAB_06af06d0:
      uVar2 = (*(code *)*puVar9)(iVar30,iVar28,plVar8,0x2000b,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    if ((float)piVar6[0xe] != (float)piVar7[0xe]) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      iVar30 = piVar6[0xe];
      iVar28 = piVar7[0xe];
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_06af077c;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,0);
LAB_06af077c:
      uVar2 = (*(code *)*puVar9)(iVar30,iVar28,plVar8,0x2000c,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    if (piVar6[0xf] != piVar7[0xf]) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      iVar28 = piVar6[0xf];
      iVar30 = piVar7[0xf];
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 4) * 0x10 + 0x138);
            goto LAB_06af082c;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,4);
LAB_06af082c:
      uVar2 = (*(code *)*puVar9)(plVar8,0x2000d,iVar28,iVar30,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)(piVar6 + 0x10),*(undefined8 *)(piVar7 + 0x10),0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)(piVar6 + 0x10);
      uVar17 = *(undefined8 *)(piVar7 + 0x10);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06af08e0;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af08e0:
      uVar2 = (*(code *)*puVar9)(plVar8,0x2000e,uVar18,uVar17,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    if (piVar6[0x12] != piVar7[0x12]) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      iVar28 = piVar6[0x12];
      iVar30 = piVar7[0x12];
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 4) * 0x10 + 0x138);
            goto LAB_06af0990;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,4);
LAB_06af0990:
      uVar2 = (*(code *)*puVar9)(plVar8,0x2000f,iVar28,iVar30,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)(piVar6 + 0x13),*(undefined8 *)(piVar7 + 0x13),0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)(piVar6 + 0x13);
      uVar17 = *(undefined8 *)(piVar7 + 0x13);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06af0a44;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af0a44:
      uVar2 = (*(code *)*puVar9)(plVar8,0x20010,uVar18,uVar17,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)(piVar6 + 0x15),*(undefined8 *)(piVar7 + 0x15),0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)(piVar6 + 0x15);
      uVar17 = *(undefined8 *)(piVar7 + 0x15);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06af0af8;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af0af8:
      uVar2 = (*(code *)*puVar9)(plVar8,0x20011,uVar18,uVar17,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)(piVar6 + 0x17),*(undefined8 *)(piVar7 + 0x17),0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)(piVar6 + 0x17);
      uVar17 = *(undefined8 *)(piVar7 + 0x17);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06af0bac;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af0bac:
      uVar2 = (*(code *)*puVar9)(plVar8,0x20012,uVar18,uVar17,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)(piVar6 + 0x19),*(undefined8 *)(piVar7 + 0x19),0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)(piVar6 + 0x19);
      uVar17 = *(undefined8 *)(piVar7 + 0x19);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06af0c60;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af0c60:
      uVar2 = (*(code *)*puVar9)(plVar8,0x20013,uVar18,uVar17,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)(piVar6 + 0x1b),*(undefined8 *)(piVar7 + 0x1b),0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)(piVar6 + 0x1b);
      uVar17 = *(undefined8 *)(piVar7 + 0x1b);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06af0d14;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af0d14:
      uVar2 = (*(code *)*puVar9)(plVar8,0x20014,uVar18,uVar17,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)(piVar6 + 0x1d),*(undefined8 *)(piVar7 + 0x1d),0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)(piVar6 + 0x1d);
      uVar17 = *(undefined8 *)(piVar7 + 0x1d);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06af0dc8;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af0dc8:
      uVar2 = (*(code *)*puVar9)(plVar8,0x20015,uVar18,uVar17,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)(piVar6 + 0x1f),*(undefined8 *)(piVar7 + 0x1f),0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)(piVar6 + 0x1f);
      uVar17 = *(undefined8 *)(piVar7 + 0x1f);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06af0e7c;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af0e7c:
      uVar2 = (*(code *)*puVar9)(plVar8,0x20016,uVar18,uVar17,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)(piVar6 + 0x21),*(undefined8 *)(piVar7 + 0x21),0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)(piVar6 + 0x21);
      uVar17 = *(undefined8 *)(piVar7 + 0x21);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06af0f30;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af0f30:
      uVar2 = (*(code *)*puVar9)(plVar8,0x20017,uVar18,uVar17,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)(piVar6 + 0x23),*(undefined8 *)(piVar7 + 0x23),0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)(piVar6 + 0x23);
      uVar17 = *(undefined8 *)(piVar7 + 0x23);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06af0fe4;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af0fe4:
      uVar2 = (*(code *)*puVar9)(plVar8,0x20018,uVar18,uVar17,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)(piVar6 + 0x25),*(undefined8 *)(piVar7 + 0x25),0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)(piVar6 + 0x25);
      uVar17 = *(undefined8 *)(piVar7 + 0x25);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06af1098;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af1098:
      uVar2 = (*(code *)*puVar9)(plVar8,0x20019,uVar18,uVar17,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)(piVar6 + 0x27),*(undefined8 *)(piVar7 + 0x27),0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)(piVar6 + 0x27);
      uVar17 = *(undefined8 *)(piVar7 + 0x27);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06af114c;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af114c:
      uVar2 = (*(code *)*puVar9)(plVar8,0x2001a,uVar18,uVar17,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)(piVar6 + 0x29),*(undefined8 *)(piVar7 + 0x29),0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)(piVar6 + 0x29);
      uVar17 = *(undefined8 *)(piVar7 + 0x29);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06af1200;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af1200:
      uVar2 = (*(code *)*puVar9)(plVar8,0x2001b,uVar18,uVar17,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)(piVar6 + 0x2b),*(undefined8 *)(piVar7 + 0x2b),0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)(piVar6 + 0x2b);
      uVar17 = *(undefined8 *)(piVar7 + 0x2b);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06af12b4;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af12b4:
      uVar2 = (*(code *)*puVar9)(plVar8,0x2001c,uVar18,uVar17,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    if (piVar6[0x2d] != piVar7[0x2d]) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      iVar28 = piVar6[0x2d];
      iVar30 = piVar7[0x2d];
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 4) * 0x10 + 0x138);
            goto LAB_06af1364;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,4);
LAB_06af1364:
      uVar2 = (*(code *)*puVar9)(plVar8,0x2001d,iVar28,iVar30,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)(piVar6 + 0x2e),*(undefined8 *)(piVar7 + 0x2e),0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)(piVar6 + 0x2e);
      uVar17 = *(undefined8 *)(piVar7 + 0x2e);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06af1418;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af1418:
      uVar2 = (*(code *)*puVar9)(plVar8,0x2001e,uVar18,uVar17,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)(piVar6 + 0x30),*(undefined8 *)(piVar7 + 0x30),0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)(piVar6 + 0x30);
      uVar17 = *(undefined8 *)(piVar7 + 0x30);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_06af14cc;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af14cc:
      uVar2 = (*(code *)*puVar9)(plVar8,0x2001f,uVar18,uVar17,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)(piVar6 + 0x32),*(undefined8 *)(piVar7 + 0x32),0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)(piVar6 + 0x32);
      uVar17 = *(undefined8 *)(piVar7 + 0x32);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_06af158c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af158c:
      uVar2 = (*(code *)*puVar9)(plVar8,0x20020,uVar18,uVar17,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
  }
  uVar5 = FUN_04bc3de4(param_2 + 0x10,param_3[2],*(undefined8 *)OVRPlugin_OVRP_0_1_3_TypeInfo);
  puVar1 = ARGameManager_<InstantiateWaveEnemies>d__96_TypeInfo;
  if ((uVar5 & 1) == 0) {
    lVar13 = FUN_04bc3bd8(param_2 + 0x10,
                          *(undefined8 *)ARGameManager_<InstantiateWaveEnemies>d__96_TypeInfo);
    lVar10 = FUN_04bc3bd8(param_3 + 2,*(undefined8 *)puVar1);
    if (*(int *)(lVar13 + 0x18) != *(int *)(lVar10 + 0x18)) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar14 = *plVar8;
      uVar29 = *(undefined4 *)(lVar13 + 0x18);
      uVar31 = *(undefined4 *)(lVar10 + 0x18);
      uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_06af1690;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,4);
LAB_06af1690:
      uVar2 = (*(code *)*puVar9)(plVar8,0x30001,uVar29,uVar31,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    fVar19 = (float)*(undefined8 *)(lVar13 + 0x1c) - (float)*(undefined8 *)(lVar10 + 0x1c);
    fVar20 = (float)((ulong)*(undefined8 *)(lVar13 + 0x1c) >> 0x20) -
             (float)((ulong)*(undefined8 *)(lVar10 + 0x1c) >> 0x20);
    fVar26 = (float)*(undefined8 *)(lVar13 + 0x24) - (float)*(undefined8 *)(lVar10 + 0x24);
    fVar27 = (float)((ulong)*(undefined8 *)(lVar13 + 0x24) >> 0x20) -
             (float)((ulong)*(undefined8 *)(lVar10 + 0x24) >> 0x20);
    uVar2 = local_424;
    if (DAT_01369900 <= fVar27 * fVar27 + fVar26 * fVar26 + fVar19 * fVar19 + fVar20 * fVar20) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      uVar31 = *(undefined4 *)(lVar10 + 0x24);
      uVar29 = *(undefined4 *)(lVar10 + 0x28);
      uVar33 = *(undefined4 *)(lVar10 + 0x1c);
      uVar32 = *(undefined4 *)(lVar10 + 0x20);
      uVar35 = *(undefined4 *)(lVar13 + 0x24);
      uVar34 = *(undefined4 *)(lVar13 + 0x28);
      lVar14 = *plVar8;
      uVar37 = *(undefined4 *)(lVar13 + 0x1c);
      uVar36 = *(undefined4 *)(lVar13 + 0x20);
      uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_06af1780;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,3);
LAB_06af1780:
      uVar3 = (*(code *)*puVar9)(uVar37,uVar36,uVar35,uVar34,uVar33,uVar32,uVar31,uVar29,plVar8,
                                 0x30002,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar3;
      uVar2 = 8;
      if ((uVar3 & 1) == 0) {
        uVar2 = local_424;
      }
    }
    local_424 = uVar2;
    if (*(int *)(lVar13 + 0x2c) != *(int *)(lVar10 + 0x2c)) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar14 = *plVar8;
      uVar29 = *(undefined4 *)(lVar13 + 0x2c);
      uVar31 = *(undefined4 *)(lVar10 + 0x2c);
      uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_06af185c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,4);
LAB_06af185c:
      uVar2 = (*(code *)*puVar9)(plVar8,0x30003,uVar29,uVar31,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    if (*(int *)(lVar13 + 0x30) != *(int *)(lVar10 + 0x30)) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar14 = *plVar8;
      uVar29 = *(undefined4 *)(lVar13 + 0x30);
      uVar31 = *(undefined4 *)(lVar10 + 0x30);
      uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_06af190c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,1);
LAB_06af190c:
      uVar2 = (*(code *)*puVar9)(plVar8,0x30004,uVar29,uVar31,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    if (*(int *)(lVar13 + 0x34) != *(int *)(lVar10 + 0x34)) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar14 = *plVar8;
      uVar29 = *(undefined4 *)(lVar13 + 0x34);
      uVar31 = *(undefined4 *)(lVar10 + 0x34);
      uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_06af19bc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,1);
LAB_06af19bc:
      uVar2 = (*(code *)*puVar9)(plVar8,0x30005,uVar29,uVar31,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    if (*(int *)(lVar13 + 0x38) != *(int *)(lVar10 + 0x38)) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar14 = *plVar8;
      uVar29 = *(undefined4 *)(lVar13 + 0x38);
      uVar31 = *(undefined4 *)(lVar10 + 0x38);
      uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_06af1a6c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,1);
LAB_06af1a6c:
      uVar2 = (*(code *)*puVar9)(plVar8,0x30006,uVar29,uVar31,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    if (*(float *)(lVar13 + 0x3c) != *(float *)(lVar10 + 0x3c)) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar14 = *plVar8;
      uVar31 = *(undefined4 *)(lVar13 + 0x3c);
      uVar29 = *(undefined4 *)(lVar10 + 0x3c);
      uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar14 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_06af1b18;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,0);
LAB_06af1b18:
      uVar2 = (*(code *)*puVar9)(uVar31,uVar29,plVar8,0x30007,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    if (*(int *)(lVar13 + 0x40) != *(int *)(lVar10 + 0x40)) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar14 = *plVar8;
      uVar29 = *(undefined4 *)(lVar13 + 0x40);
      uVar31 = *(undefined4 *)(lVar10 + 0x40);
      uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_06af1bc8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,1);
LAB_06af1bc8:
      uVar2 = (*(code *)*puVar9)(plVar8,0x30008,uVar29,uVar31,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
    if (*(int *)(lVar13 + 0x44) != *(int *)(lVar10 + 0x44)) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar14 = *plVar8;
      uVar29 = *(undefined4 *)(lVar13 + 0x44);
      uVar31 = *(undefined4 *)(lVar10 + 0x44);
      uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_06af1c84;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,4);
LAB_06af1c84:
      uVar2 = (*(code *)*puVar9)(plVar8,0x30009,uVar29,uVar31,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
  }
  uVar5 = FUN_04bc42a4(param_2 + 0x18,param_3[3],*(undefined8 *)OVRPlugin_OVRP_0_1_1_TypeInfo);
  puVar1 = ARGameManager_<MonitorValidPathRoutine>d__93_TypeInfo;
  if ((uVar5 & 1) == 0) {
    puVar9 = (undefined8 *)
             FUN_04bc4098(param_2 + 0x18,
                          *(undefined8 *)ARGameManager_<MonitorValidPathRoutine>d__93_TypeInfo);
    puVar11 = (undefined8 *)FUN_04bc4098(param_3 + 3,*(undefined8 *)puVar1);
    local_170 = puVar9[2];
    uStack_178 = puVar9[1];
    local_180 = *puVar9;
    local_b0 = (undefined4)local_170;
    uStack_ac = (undefined4)((ulong)local_170 >> 0x20);
    uStack_b8 = (undefined4)uStack_178;
    uStack_b4 = (undefined4)((ulong)uStack_178 >> 0x20);
    local_190 = puVar11[2];
    uStack_198 = puVar11[1];
    local_1a0 = *puVar11;
    local_d0 = (undefined4)local_190;
    uStack_cc = (undefined4)((ulong)local_190 >> 0x20);
    uStack_d8 = (undefined4)uStack_198;
    uStack_d4 = (undefined4)((ulong)uStack_198 >> 0x20);
    local_e0 = local_1a0;
    local_c0 = local_180;
    uVar5 = FUN_06b1f448(&local_180,&local_1a0,0);
    if ((uVar5 & 1) != 0) {
      if (param_1 == 0) goto LAB_06af312c;
      plVar8 = (long *)FUN_06b0af1c(param_1,0);
      uVar17 = puVar9[2];
      uVar21 = puVar9[1];
      local_340 = *puVar9;
      local_330 = (undefined4)uVar17;
      uStack_32c = (undefined4)((ulong)uVar17 >> 0x20);
      uStack_338 = (undefined4)uVar21;
      uStack_334 = (undefined4)((ulong)uVar21 >> 0x20);
      uVar18 = puVar11[2];
      uVar22 = puVar11[1];
      local_360 = *puVar11;
      local_350 = (undefined4)uVar18;
      uStack_34c = (undefined4)((ulong)uVar18 >> 0x20);
      uStack_358 = (undefined4)uVar22;
      uStack_354 = (undefined4)((ulong)uVar22 >> 0x20);
      if (plVar8 == (long *)0x0) goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      local_1e0 = local_360;
      uStack_1d8 = uVar22;
      local_1d0 = uVar18;
      local_1c0 = local_340;
      uStack_1b8 = uVar21;
      local_1b0 = uVar17;
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 0xb) * 0x10 + 0x138);
            goto LAB_06af1df4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,0xb);
LAB_06af1df4:
      uStack_b8 = (undefined4)uStack_1b8;
      uStack_b4 = (undefined4)((ulong)uStack_1b8 >> 0x20);
      local_c0 = local_1c0;
      local_b0 = (undefined4)local_1b0;
      uStack_ac = (undefined4)((ulong)local_1b0 >> 0x20);
      uStack_d8 = (undefined4)uStack_1d8;
      uStack_d4 = (undefined4)((ulong)uStack_1d8 >> 0x20);
      local_e0 = local_1e0;
      local_d0 = (undefined4)local_1d0;
      uStack_cc = (undefined4)((ulong)local_1d0 >> 0x20);
      uVar2 = (*(code *)*puVar12)(plVar8,0x50000,&local_c0,&local_e0,param_4,param_5,param_6,
                                  puVar12[1]);
      uVar16 = uVar16 | uVar2;
      local_424 = local_424 | uVar2 & 1;
    }
    uVar5 = FUN_06b1f798(puVar9[3],puVar9[4],puVar11[3],puVar11[4],0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      uVar17 = puVar11[3];
      uVar21 = puVar11[4];
      lVar13 = *plVar8;
      uVar18 = puVar9[3];
      uVar22 = puVar9[4];
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 9) * 0x10 + 0x138);
            goto LAB_06af1ee4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,9);
LAB_06af1ee4:
      uVar2 = (*(code *)*puVar12)(plVar8,0x50001,uVar18,uVar22,uVar17,uVar21,param_4,param_5,param_6
                                  ,puVar12[1]);
      uVar16 = uVar16 | uVar2;
      local_424 = local_424 | uVar2 & 1;
    }
    local_1f0 = *(undefined4 *)(puVar9 + 7);
    uStack_1f8 = puVar9[6];
    local_200 = puVar9[5];
    local_210 = *(undefined4 *)(puVar11 + 7);
    uStack_218 = puVar11[6];
    local_220 = puVar11[5];
    uVar5 = FUN_06b22380(&local_200,&local_220,0);
    if ((uVar5 & 1) != 0) {
      if (param_1 == 0) goto LAB_06af312c;
      plVar8 = (long *)FUN_06b0af1c(param_1,0);
      local_330 = *(undefined4 *)(puVar9 + 7);
      uVar17 = puVar9[6];
      local_340 = puVar9[5];
      uStack_338 = (undefined4)uVar17;
      uStack_334 = (undefined4)((ulong)uVar17 >> 0x20);
      local_350 = *(undefined4 *)(puVar11 + 7);
      uVar18 = puVar11[6];
      local_360 = puVar11[5];
      uStack_358 = (undefined4)uVar18;
      uStack_354 = (undefined4)((ulong)uVar18 >> 0x20);
      if (plVar8 == (long *)0x0) goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      local_260 = local_360;
      uStack_258 = uVar18;
      local_250 = local_350;
      local_240 = local_340;
      uStack_238 = uVar17;
      local_230 = local_330;
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
            goto LAB_06af2030;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,0xc);
LAB_06af2030:
      uStack_b8 = (undefined4)uStack_238;
      uStack_b4 = (undefined4)((ulong)uStack_238 >> 0x20);
      local_c0 = local_240;
      local_b0 = local_230;
      uStack_d8 = (undefined4)uStack_258;
      uStack_d4 = (undefined4)((ulong)uStack_258 >> 0x20);
      local_e0 = local_260;
      local_d0 = local_250;
      uVar2 = (*(code *)*puVar12)(plVar8,0x50002,&local_c0,&local_e0,param_4,param_5,param_6,
                                  puVar12[1]);
      uVar16 = uVar16 | uVar2;
      local_424 = local_424 | uVar2 & 1;
    }
    local_270 = *(undefined8 *)((long)puVar9 + 0x4c);
    uStack_278 = *(undefined8 *)((long)puVar9 + 0x44);
    local_280 = *(undefined8 *)((long)puVar9 + 0x3c);
    local_290 = *(undefined8 *)((long)puVar11 + 0x4c);
    uStack_298 = *(undefined8 *)((long)puVar11 + 0x44);
    local_2a0 = *(undefined8 *)((long)puVar11 + 0x3c);
    uVar5 = FUN_06b226e4(&local_280,&local_2a0,0);
    if ((uVar5 & 1) != 0) {
      if (param_1 == 0) goto LAB_06af312c;
      plVar8 = (long *)FUN_06b0af1c(param_1,0);
      uVar17 = *(undefined8 *)((long)puVar9 + 0x4c);
      uVar21 = *(undefined8 *)((long)puVar9 + 0x44);
      local_340 = *(undefined8 *)((long)puVar9 + 0x3c);
      local_330 = (undefined4)uVar17;
      uStack_32c = (undefined4)((ulong)uVar17 >> 0x20);
      uStack_338 = (undefined4)uVar21;
      uStack_334 = (undefined4)((ulong)uVar21 >> 0x20);
      uVar18 = *(undefined8 *)((long)puVar11 + 0x4c);
      uVar22 = *(undefined8 *)((long)puVar11 + 0x44);
      local_360 = *(undefined8 *)((long)puVar11 + 0x3c);
      local_350 = (undefined4)uVar18;
      uStack_34c = (undefined4)((ulong)uVar18 >> 0x20);
      uStack_358 = (undefined4)uVar22;
      uStack_354 = (undefined4)((ulong)uVar22 >> 0x20);
      if (plVar8 == (long *)0x0) goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      local_2e0 = local_360;
      uStack_2d8 = uVar22;
      local_2d0 = uVar18;
      local_2c0 = local_340;
      uStack_2b8 = uVar21;
      local_2b0 = uVar17;
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar6 + 10) * 0x10 + 0x138);
            goto LAB_06af2188;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,10);
LAB_06af2188:
      uStack_b8 = (undefined4)uStack_2b8;
      uStack_b4 = (undefined4)((ulong)uStack_2b8 >> 0x20);
      local_c0 = local_2c0;
      local_b0 = (undefined4)local_2b0;
      uStack_ac = (undefined4)((ulong)local_2b0 >> 0x20);
      uStack_d8 = (undefined4)uStack_2d8;
      uStack_d4 = (undefined4)((ulong)uStack_2d8 >> 0x20);
      local_e0 = local_2e0;
      local_d0 = (undefined4)local_2d0;
      uStack_cc = (undefined4)((ulong)local_2d0 >> 0x20);
      uVar2 = (*(code *)*puVar9)(plVar8,0x50003,&local_c0,&local_e0,param_4,param_5,param_6,
                                 puVar9[1]);
      uVar16 = uVar16 | uVar2;
      local_424 = local_424 | uVar2 & 1;
    }
  }
  uVar5 = FUN_04bc4c1c(param_2 + 0x28,param_3[5],*(undefined8 *)OVRPlugin_OVRP_0_1_2_TypeInfo);
  puVar1 = ARGameManager_<IncrementalGarbageCollection>d__80_TypeInfo;
  if ((uVar5 & 1) == 0) {
    puVar9 = (undefined8 *)
             FUN_04bc4a10(param_2 + 0x28,
                          *(undefined8 *)ARGameManager_<IncrementalGarbageCollection>d__80_TypeInfo)
    ;
    puVar11 = (undefined8 *)FUN_04bc4a10(param_3 + 5,*(undefined8 *)puVar1);
    fVar19 = DAT_01369900;
    fVar20 = (float)*puVar9 - (float)*puVar11;
    fVar26 = (float)((ulong)*puVar9 >> 0x20) - (float)((ulong)*puVar11 >> 0x20);
    fVar27 = (float)puVar9[1] - (float)puVar11[1];
    fVar23 = (float)((ulong)puVar9[1] >> 0x20) - (float)((ulong)puVar11[1] >> 0x20);
    uVar2 = local_424;
    if (DAT_01369900 <= fVar23 * fVar23 + fVar27 * fVar27 + fVar20 * fVar20 + fVar26 * fVar26) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      uVar31 = *(undefined4 *)(puVar11 + 1);
      uVar29 = *(undefined4 *)((long)puVar11 + 0xc);
      uVar33 = *(undefined4 *)puVar11;
      uVar32 = *(undefined4 *)((long)puVar11 + 4);
      uVar35 = *(undefined4 *)(puVar9 + 1);
      uVar34 = *(undefined4 *)((long)puVar9 + 0xc);
      lVar13 = *plVar8;
      uVar37 = *(undefined4 *)puVar9;
      uVar36 = *(undefined4 *)((long)puVar9 + 4);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_06af22fc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,3);
LAB_06af22fc:
      uVar3 = (*(code *)*puVar12)(uVar37,uVar36,uVar35,uVar34,uVar33,uVar32,uVar31,uVar29,plVar8,
                                  0x70000,param_4,param_5,param_6,puVar12[1]);
      uVar16 = uVar16 | uVar3;
      uVar2 = local_424 | 8;
      if ((uVar3 & 1) == 0) {
        uVar2 = local_424;
      }
    }
    local_424 = uVar2;
    uStack_2f8 = puVar9[3];
    local_300 = puVar9[2];
    uStack_2e8 = puVar9[5];
    uStack_2f0 = puVar9[4];
    uStack_b8 = (undefined4)uStack_2f8;
    uStack_b4 = (undefined4)((ulong)uStack_2f8 >> 0x20);
    uStack_a8 = (undefined4)uStack_2e8;
    uStack_a4 = (undefined4)((ulong)uStack_2e8 >> 0x20);
    local_b0 = (undefined4)uStack_2f0;
    uStack_ac = (undefined4)((ulong)uStack_2f0 >> 0x20);
    uStack_318 = puVar11[3];
    local_320 = puVar11[2];
    uStack_308 = puVar11[5];
    uStack_310 = puVar11[4];
    uStack_d8 = (undefined4)uStack_318;
    uStack_d4 = (undefined4)((ulong)uStack_318 >> 0x20);
    uStack_c8 = (undefined4)uStack_308;
    uStack_c4 = (undefined4)((ulong)uStack_308 >> 0x20);
    local_d0 = (undefined4)uStack_310;
    uStack_cc = (undefined4)((ulong)uStack_310 >> 0x20);
    local_e0 = local_320;
    local_c0 = local_300;
    uVar5 = FUN_06b040a4(&local_300,&local_320,0);
    if ((uVar5 & 1) != 0) {
      if (param_1 == 0) goto LAB_06af312c;
      plVar8 = (long *)FUN_06b0af1c(param_1,0);
      uVar24 = puVar9[3];
      local_340 = puVar9[2];
      uVar21 = puVar9[5];
      uVar17 = puVar9[4];
      uStack_338 = (undefined4)uVar24;
      uStack_334 = (undefined4)((ulong)uVar24 >> 0x20);
      uStack_328 = (undefined4)uVar21;
      uStack_324 = (undefined4)((ulong)uVar21 >> 0x20);
      local_330 = (undefined4)uVar17;
      uStack_32c = (undefined4)((ulong)uVar17 >> 0x20);
      uVar25 = puVar11[3];
      local_360 = puVar11[2];
      uVar22 = puVar11[5];
      uVar18 = puVar11[4];
      uStack_358 = (undefined4)uVar25;
      uStack_354 = (undefined4)((ulong)uVar25 >> 0x20);
      uStack_348 = (undefined4)uVar22;
      uStack_344 = (undefined4)((ulong)uVar22 >> 0x20);
      local_350 = (undefined4)uVar18;
      uStack_34c = (undefined4)((ulong)uVar18 >> 0x20);
      if (plVar8 == (long *)0x0) goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      local_3a0 = local_360;
      uStack_398 = uVar25;
      uStack_390 = uVar18;
      uStack_388 = uVar22;
      local_380 = local_340;
      uStack_378 = uVar24;
      uStack_370 = uVar17;
      uStack_368 = uVar21;
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 5) * 0x10 + 0x138);
            goto LAB_06af2418;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,5);
LAB_06af2418:
      uStack_b8 = (undefined4)uStack_378;
      uStack_b4 = (undefined4)((ulong)uStack_378 >> 0x20);
      local_c0 = local_380;
      uStack_a8 = (undefined4)uStack_368;
      uStack_a4 = (undefined4)((ulong)uStack_368 >> 0x20);
      local_b0 = (undefined4)uStack_370;
      uStack_ac = (undefined4)((ulong)uStack_370 >> 0x20);
      uStack_d8 = (undefined4)uStack_398;
      uStack_d4 = (undefined4)((ulong)uStack_398 >> 0x20);
      local_e0 = local_3a0;
      uStack_c8 = (undefined4)uStack_388;
      uStack_c4 = (undefined4)((ulong)uStack_388 >> 0x20);
      local_d0 = (undefined4)uStack_390;
      uStack_cc = (undefined4)((ulong)uStack_390 >> 0x20);
      uVar2 = (*(code *)*puVar12)(plVar8,0x70001,&local_c0,&local_e0,param_4,param_5,param_6,
                                  puVar12[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_069ec9a0(puVar9[6],*(undefined4 *)(puVar9 + 7),puVar11[6],
                         *(undefined4 *)(puVar11 + 7),0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      uVar29 = *(undefined4 *)(puVar11 + 7);
      uVar17 = puVar11[6];
      lVar13 = *plVar8;
      uVar31 = *(undefined4 *)(puVar9 + 7);
      uVar18 = puVar9[6];
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
            goto LAB_06af2504;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,0xd);
LAB_06af2504:
      uVar2 = (*(code *)*puVar12)(plVar8,0x70002,uVar18,uVar31,uVar17,uVar29,param_4,param_5,param_6
                                  ,puVar12[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_069ec9a0(*(undefined8 *)((long)puVar9 + 0x3c),*(undefined4 *)((long)puVar9 + 0x44),
                         *(undefined8 *)((long)puVar11 + 0x3c),*(undefined4 *)((long)puVar11 + 0x44)
                         ,0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      uVar29 = *(undefined4 *)((long)puVar11 + 0x44);
      uVar17 = *(undefined8 *)((long)puVar11 + 0x3c);
      lVar13 = *plVar8;
      uVar31 = *(undefined4 *)((long)puVar9 + 0x44);
      uVar18 = *(undefined8 *)((long)puVar9 + 0x3c);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
            goto LAB_06af25e4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,0xd);
LAB_06af25e4:
      uVar2 = (*(code *)*puVar12)(plVar8,0x70003,uVar18,uVar31,uVar17,uVar29,param_4,param_5,param_6
                                  ,puVar12[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_069ed0b8(puVar9[9],puVar11[9],0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = puVar9[9];
      uVar17 = puVar11[9];
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 0xe) * 0x10 + 0x138);
            goto LAB_06af26bc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,0xe);
LAB_06af26bc:
      uVar2 = (*(code *)*puVar12)(plVar8,0x70004,uVar18,uVar17,param_4,param_5,param_6,puVar12[1]);
      uVar16 = uVar16 | uVar2;
    }
    local_3b0 = *(undefined4 *)(puVar9 + 0xc);
    uStack_3b8 = puVar9[0xb];
    local_3c0 = puVar9[10];
    local_3d0 = *(undefined4 *)(puVar11 + 0xc);
    uStack_3d8 = puVar11[0xb];
    local_3e0 = puVar11[10];
    uVar5 = FUN_069ed394(&local_3c0,&local_3e0,0);
    if ((uVar5 & 1) != 0) {
      if (param_1 == 0) goto LAB_06af312c;
      plVar8 = (long *)FUN_06b0af1c(param_1,0);
      uVar29 = *(undefined4 *)(puVar9 + 0xc);
      uVar17 = puVar9[10];
      uStack_338 = (undefined4)puVar9[0xb];
      uVar34 = uStack_338;
      uStack_334 = (undefined4)((ulong)puVar9[0xb] >> 0x20);
      uVar35 = uStack_334;
      uVar31 = *(undefined4 *)(puVar11 + 0xc);
      uVar18 = puVar11[10];
      uStack_358 = (undefined4)puVar11[0xb];
      uVar32 = uStack_358;
      uStack_354 = (undefined4)((ulong)puVar11[0xb] >> 0x20);
      uVar33 = uStack_354;
      local_360 = uVar18;
      local_350 = uVar31;
      local_340 = uVar17;
      local_330 = uVar29;
      if (plVar8 == (long *)0x0) goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 0xf) * 0x10 + 0x138);
            goto LAB_06af27d8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,0xf);
LAB_06af27d8:
      local_e0 = uVar18;
      uStack_d8 = uVar32;
      uStack_d4 = uVar33;
      local_d0 = uVar31;
      local_c0 = uVar17;
      uStack_b8 = uVar34;
      uStack_b4 = uVar35;
      local_b0 = uVar29;
      uVar2 = (*(code *)*puVar12)(plVar8,0x70005,&local_c0,&local_e0,param_4,param_5,param_6,
                                  puVar12[1]);
      uVar16 = uVar16 | uVar2;
    }
    fVar20 = (float)*(undefined8 *)((long)puVar9 + 100) -
             (float)*(undefined8 *)((long)puVar11 + 100);
    fVar26 = (float)((ulong)*(undefined8 *)((long)puVar9 + 100) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 100) >> 0x20);
    fVar27 = (float)*(undefined8 *)((long)puVar9 + 0x6c) -
             (float)*(undefined8 *)((long)puVar11 + 0x6c);
    fVar23 = (float)((ulong)*(undefined8 *)((long)puVar9 + 0x6c) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0x6c) >> 0x20);
    uVar2 = local_424;
    if (fVar19 <= fVar23 * fVar23 + fVar27 * fVar27 + fVar20 * fVar20 + fVar26 * fVar26) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      uVar31 = *(undefined4 *)((long)puVar11 + 0x6c);
      uVar29 = *(undefined4 *)(puVar11 + 0xe);
      uVar33 = *(undefined4 *)((long)puVar11 + 100);
      uVar32 = *(undefined4 *)(puVar11 + 0xd);
      uVar35 = *(undefined4 *)((long)puVar9 + 0x6c);
      uVar34 = *(undefined4 *)(puVar9 + 0xe);
      lVar13 = *plVar8;
      uVar37 = *(undefined4 *)((long)puVar9 + 100);
      uVar36 = *(undefined4 *)(puVar9 + 0xd);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_06af28e8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,3);
LAB_06af28e8:
      uVar3 = (*(code *)*puVar12)(uVar37,uVar36,uVar35,uVar34,uVar33,uVar32,uVar31,uVar29,plVar8,
                                  0x70006,param_4,param_5,param_6,puVar12[1]);
      uVar2 = local_424 | 8;
      if ((uVar3 & 1) == 0) {
        uVar2 = local_424;
      }
      uVar16 = uVar16 | uVar3;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)((long)puVar9 + 0x74),*(undefined8 *)((long)puVar11 + 0x74),
                         0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)((long)puVar9 + 0x74);
      uVar17 = *(undefined8 *)((long)puVar11 + 0x74);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_06af29cc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af29cc:
      uVar3 = (*(code *)*puVar12)(plVar8,0x70007,uVar18,uVar17,param_4,param_5,param_6,puVar12[1]);
      uVar16 = uVar16 | uVar3;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)((long)puVar9 + 0x7c),*(undefined8 *)((long)puVar11 + 0x7c),
                         0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)((long)puVar9 + 0x7c);
      uVar17 = *(undefined8 *)((long)puVar11 + 0x7c);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_06af2a88;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af2a88:
      uVar3 = (*(code *)*puVar12)(plVar8,0x70008,uVar18,uVar17,param_4,param_5,param_6,puVar12[1]);
      uVar16 = uVar16 | uVar3;
    }
    fVar20 = (float)*(undefined8 *)((long)puVar9 + 0x84) -
             (float)*(undefined8 *)((long)puVar11 + 0x84);
    fVar26 = (float)((ulong)*(undefined8 *)((long)puVar9 + 0x84) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0x84) >> 0x20);
    fVar27 = (float)*(undefined8 *)((long)puVar9 + 0x8c) -
             (float)*(undefined8 *)((long)puVar11 + 0x8c);
    fVar23 = (float)((ulong)*(undefined8 *)((long)puVar9 + 0x8c) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0x8c) >> 0x20);
    uVar3 = uVar2;
    if (fVar19 <= fVar23 * fVar23 + fVar27 * fVar27 + fVar20 * fVar20 + fVar26 * fVar26) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      uVar31 = *(undefined4 *)((long)puVar11 + 0x8c);
      uVar29 = *(undefined4 *)(puVar11 + 0x12);
      uVar33 = *(undefined4 *)((long)puVar11 + 0x84);
      uVar32 = *(undefined4 *)(puVar11 + 0x11);
      uVar35 = *(undefined4 *)((long)puVar9 + 0x8c);
      uVar34 = *(undefined4 *)(puVar9 + 0x12);
      lVar13 = *plVar8;
      uVar37 = *(undefined4 *)((long)puVar9 + 0x84);
      uVar36 = *(undefined4 *)(puVar9 + 0x11);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_06af2b74;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,3);
LAB_06af2b74:
      uVar4 = (*(code *)*puVar12)(uVar37,uVar36,uVar35,uVar34,uVar33,uVar32,uVar31,uVar29,plVar8,
                                  0x70009,param_4,param_5,param_6,puVar12[1]);
      uVar3 = uVar2 | 8;
      if ((uVar4 & 1) == 0) {
        uVar3 = uVar2;
      }
      uVar16 = uVar16 | uVar4;
    }
    fVar20 = (float)*(undefined8 *)((long)puVar9 + 0x94) -
             (float)*(undefined8 *)((long)puVar11 + 0x94);
    fVar26 = (float)((ulong)*(undefined8 *)((long)puVar9 + 0x94) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0x94) >> 0x20);
    fVar27 = (float)*(undefined8 *)((long)puVar9 + 0x9c) -
             (float)*(undefined8 *)((long)puVar11 + 0x9c);
    fVar23 = (float)((ulong)*(undefined8 *)((long)puVar9 + 0x9c) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0x9c) >> 0x20);
    uVar2 = uVar3;
    if (fVar19 <= fVar23 * fVar23 + fVar27 * fVar27 + fVar20 * fVar20 + fVar26 * fVar26) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      uVar31 = *(undefined4 *)((long)puVar11 + 0x9c);
      uVar29 = *(undefined4 *)(puVar11 + 0x14);
      uVar33 = *(undefined4 *)((long)puVar11 + 0x94);
      uVar32 = *(undefined4 *)(puVar11 + 0x13);
      uVar35 = *(undefined4 *)((long)puVar9 + 0x9c);
      uVar34 = *(undefined4 *)(puVar9 + 0x14);
      lVar13 = *plVar8;
      uVar37 = *(undefined4 *)((long)puVar9 + 0x94);
      uVar36 = *(undefined4 *)(puVar9 + 0x13);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_06af2c88;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,3);
LAB_06af2c88:
      uVar4 = (*(code *)*puVar12)(uVar37,uVar36,uVar35,uVar34,uVar33,uVar32,uVar31,uVar29,plVar8,
                                  0x7000a,param_4,param_5,param_6,puVar12[1]);
      uVar2 = uVar3 | 8;
      if ((uVar4 & 1) == 0) {
        uVar2 = uVar3;
      }
      uVar16 = uVar16 | uVar4;
    }
    fVar20 = (float)*(undefined8 *)((long)puVar9 + 0xa4) -
             (float)*(undefined8 *)((long)puVar11 + 0xa4);
    fVar26 = (float)((ulong)*(undefined8 *)((long)puVar9 + 0xa4) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0xa4) >> 0x20);
    fVar27 = (float)*(undefined8 *)((long)puVar9 + 0xac) -
             (float)*(undefined8 *)((long)puVar11 + 0xac);
    fVar23 = (float)((ulong)*(undefined8 *)((long)puVar9 + 0xac) >> 0x20) -
             (float)((ulong)*(undefined8 *)((long)puVar11 + 0xac) >> 0x20);
    local_424 = uVar2;
    if (fVar19 <= fVar23 * fVar23 + fVar27 * fVar27 + fVar20 * fVar20 + fVar26 * fVar26) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      uVar31 = *(undefined4 *)((long)puVar11 + 0xac);
      uVar29 = *(undefined4 *)(puVar11 + 0x16);
      uVar33 = *(undefined4 *)((long)puVar11 + 0xa4);
      uVar32 = *(undefined4 *)(puVar11 + 0x15);
      uVar35 = *(undefined4 *)((long)puVar9 + 0xac);
      uVar34 = *(undefined4 *)(puVar9 + 0x16);
      lVar13 = *plVar8;
      uVar37 = *(undefined4 *)((long)puVar9 + 0xa4);
      uVar36 = *(undefined4 *)(puVar9 + 0x15);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_06af2d9c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,3);
LAB_06af2d9c:
      uVar3 = (*(code *)*puVar12)(uVar37,uVar36,uVar35,uVar34,uVar33,uVar32,uVar31,uVar29,plVar8,
                                  0x7000b,param_4,param_5,param_6,puVar12[1]);
      local_424 = uVar2 | 8;
      if ((uVar3 & 1) == 0) {
        local_424 = uVar2;
      }
      uVar16 = uVar16 | uVar3;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)((long)puVar9 + 0xb4),*(undefined8 *)((long)puVar11 + 0xb4),
                         0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)((long)puVar9 + 0xb4);
      uVar17 = *(undefined8 *)((long)puVar11 + 0xb4);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_06af2e7c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af2e7c:
      uVar2 = (*(code *)*puVar12)(plVar8,0x7000c,uVar18,uVar17,param_4,param_5,param_6,puVar12[1]);
      uVar16 = uVar16 | uVar2;
    }
    uVar5 = FUN_06b1f030(*(undefined8 *)((long)puVar9 + 0xbc),*(undefined8 *)((long)puVar11 + 0xbc),
                         0);
    if ((uVar5 & 1) != 0) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar18 = *(undefined8 *)((long)puVar9 + 0xbc);
      uVar17 = *(undefined8 *)((long)puVar11 + 0xbc);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_06af2f38;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,2);
LAB_06af2f38:
      uVar2 = (*(code *)*puVar12)(plVar8,0x7000d,uVar18,uVar17,param_4,param_5,param_6,puVar12[1]);
      uVar16 = uVar16 | uVar2;
    }
    if (*(float *)((long)puVar9 + 0xc4) != *(float *)((long)puVar11 + 0xc4)) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar31 = *(undefined4 *)((long)puVar9 + 0xc4);
      uVar29 = *(undefined4 *)((long)puVar11 + 0xc4);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar12 = (undefined8 *)(lVar13 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_06af2fec;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,0);
LAB_06af2fec:
      uVar2 = (*(code *)*puVar12)(uVar31,uVar29,plVar8,0x7000e,param_4,param_5,param_6,puVar12[1]);
      uVar16 = uVar16 | uVar2;
    }
    if (*(int *)(puVar9 + 0x19) != *(int *)(puVar11 + 0x19)) {
      if ((param_1 == 0) || (plVar8 = (long *)FUN_06b0af1c(param_1,0), plVar8 == (long *)0x0))
      goto LAB_06af312c;
      lVar13 = *plVar8;
      uVar29 = *(undefined4 *)(puVar9 + 0x19);
      uVar31 = *(undefined4 *)(puVar11 + 0x19);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f9c5b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_06af30a4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f9c5b0,4);
LAB_06af30a4:
      uVar2 = (*(code *)*puVar9)(plVar8,0x7000f,uVar29,uVar31,param_4,param_5,param_6,puVar9[1]);
      uVar16 = uVar16 | uVar2;
    }
  }
  if (local_424 != 0) {
    if (param_1 == 0) {
LAB_06af312c:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar2 = FUN_06b0d960(param_1,0);
    FUN_06b0d988(param_1,uVar2 | local_424,0);
  }
                    /* try { // try from 06af311c to 06bf329b has its CatchHandler @ 06af311c
                       catch() { ... } // from try @ 06af311c with catch @ 06af311c
                       catch() { ... } // from try @ 06af36e4 with catch @ 06af311c
                       catch() { ... } // from try @ 06af3770 with catch @ 06af311c
                       catch() { ... } // from try @ 06af37b0 with catch @ 06af311c
                       catch() { ... } // from try @ 06af387c with catch @ 06af311c */
  return uVar16 & 1;
}


