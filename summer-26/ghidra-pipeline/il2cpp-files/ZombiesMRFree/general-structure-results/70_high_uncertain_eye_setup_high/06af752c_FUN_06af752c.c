/*
FUNCTION_NAME: FUN_06af752c
ENTRY_POINT: 06af752c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_12
*/


uint FUN_06af752c(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                 undefined8 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_238 [24];
  undefined8 local_220 [2];
  float local_210;
  undefined1 auStack_200 [32];
  undefined8 local_1e0 [4];
  undefined8 local_1c0;
  float fStack_1b4;
  float local_1b0;
  undefined8 local_1a0 [2];
  undefined4 local_190;
  undefined8 local_180 [2];
  float local_170;
  undefined8 local_160 [4];
  undefined8 local_140 [4];
  undefined8 local_120 [4];
  undefined8 local_100 [4];
  undefined8 local_e0 [4];
  undefined8 local_c0 [4];
  undefined8 local_a0;
  float fStack_94;
  undefined4 local_90;
  
  puVar1 = OVRPlugin_OVRP_1_0_0_TypeInfo;
  if ((DAT_073ab347 & 1) == 0) {
    FUN_02fe925c(Mono_Security_X509_X509Extension_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d618);
    FUN_02fe925c(OVRPlugin_OVRP_1_100_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_0_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_101_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_102_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_103_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_104_0_TypeInfo);
    DAT_073ab347 = 1;
  }
  puVar2 = OVRPlugin_OVRP_1_101_0_TypeInfo;
  uVar5 = FUN_04bc3a44(param_5 + 8,param_6[1],*(undefined8 *)puVar1);
  if ((uVar5 & 1) == 0) {
    fVar14 = (float)FUN_06adf8e4(param_5);
    fVar12 = (float)FUN_06adf8e4(param_6);
    if (fVar14 == fVar12) {
      fVar14 = (float)FUN_06adf934(param_5);
      fVar12 = (float)FUN_06adf934(param_6);
      if (fVar14 != fVar12) goto LAB_06af79a0;
      iVar3 = FUN_06ae02e4(param_5);
      iVar4 = FUN_06ae02e4(param_6);
      if (iVar3 != iVar4) goto LAB_06af79a0;
                    /* try { // try from 06af7654 to 06bf767b has its CatchHandler @ 06af77ac */
      iVar3 = FUN_06ae01a4(param_5);
      iVar4 = FUN_06ae01a4(param_6);
      if (iVar3 != iVar4) goto LAB_06af79a0;
      iVar3 = FUN_06ae0294(param_5);
      iVar4 = FUN_06ae0294(param_6);
      if (iVar3 != iVar4) goto LAB_06af79a0;
      uVar6 = FUN_06adfac4(param_5);
      uVar7 = FUN_06adfac4(param_6);
      uVar5 = FUN_06b1f030(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_06af79a0;
                    /* try { // try from 06af76b0 to 06bf76d7 has its CatchHandler @ 06af77a8 */
      uVar6 = FUN_06adf9d4(param_5);
      uVar7 = FUN_06adf9d4(param_6);
      uVar5 = FUN_06b1f030(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_06af79a0;
                    /* try { // try from 06af76d8 to 06bf7797 has its CatchHandler @ 06af74e0 */
      uVar6 = FUN_06adfa74(param_5);
      uVar7 = FUN_06adfa74(param_6);
      uVar5 = FUN_06b1f030(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_06af79a0;
      uVar6 = FUN_06adfa24(param_5);
      uVar7 = FUN_06adfa24(param_6);
      uVar5 = FUN_06b1f030(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_06af79a0;
      uVar6 = FUN_06adff24(param_5);
      uVar7 = FUN_06adff24(param_6);
      uVar5 = FUN_06b1f030(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_06af79a0;
      uVar6 = FUN_06adfed4(param_5);
      uVar7 = FUN_06adfed4(param_6);
      uVar5 = FUN_06b1f030(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_06af79a0;
      uVar6 = FUN_06adfd44(param_5);
      uVar7 = FUN_06adfd44(param_6);
                    /* try { // try from 06af7798 to 06bf779b has its CatchHandler @ 06af77a4 */
      uVar5 = FUN_06b1f030(uVar6,uVar7,0);
                    /* try { // try from 06af779c to 06bf77c3 has its CatchHandler @ 06af74e0 */
      if ((uVar5 & 1) != 0) goto LAB_06af79a0;
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06af7798 with catch @ 06af77a4
                        */
      uVar6 = FUN_06adfc54(param_5);
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06af76b0 with catch @ 06af77a8
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06af7654 with catch @ 06af77ac
                        */
      uVar7 = FUN_06adfc54(param_6);
      uVar5 = FUN_06b1f030(uVar6,uVar7,0);
                    /* try { // try from 06af77c4 to 06bf77c7 has its CatchHandler @ 06af77e0 */
      if ((uVar5 & 1) != 0) goto LAB_06af79a0;
      uVar6 = FUN_06adfcf4(param_5);
      uVar7 = FUN_06adfcf4(param_6);
                    /* catch() { ... } // from try @ 06af77c4 with catch @ 06af77e0 */
      uVar5 = FUN_06b1f030(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_06af79a0;
      uVar6 = FUN_06adfca4(param_5);
      uVar7 = FUN_06adfca4(param_6);
      uVar5 = FUN_06b1f030(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_06af79a0;
      uVar6 = FUN_06adfc04(param_5);
                    /* try { // try from 06af7820 to 06bf7847 has its CatchHandler @ 06af785c */
      uVar7 = FUN_06adfc04(param_6);
      uVar5 = FUN_06b1f030(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_06af79a0;
      uVar6 = FUN_06adfb14(param_5);
                    /* try { // try from 06af7848 to 06bf7853 has its CatchHandler @ 06af74e0 */
      uVar7 = FUN_06adfb14(param_6);
                    /* try { // try from 06af7854 to 06bf785b has its CatchHandler @ 06af785c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06af7820 with catch @ 06af785c
                       catch(type#2 @ 00000000) { ... } // from try @ 06af7854 with catch @ 06af785c
                        */
      uVar5 = FUN_06b1f030(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_06af79a0;
      uVar6 = FUN_06adfbb4(param_5);
      uVar7 = FUN_06adfbb4(param_6);
      uVar5 = FUN_06b1f030(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_06af79a0;
      uVar6 = FUN_06adfb64(param_5);
      uVar7 = FUN_06adfb64(param_6);
      uVar5 = FUN_06b1f030(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_06af79a0;
      iVar3 = FUN_06adff74(param_5);
      iVar4 = FUN_06adff74(param_6);
      if (iVar3 != iVar4) goto LAB_06af79a0;
      iVar3 = FUN_06ae01f4(param_5);
      iVar4 = FUN_06ae01f4(param_6);
      if (iVar3 != iVar4) goto LAB_06af79a0;
      iVar3 = FUN_06ae0244(param_5);
      iVar4 = FUN_06ae0244(param_6);
      if (iVar3 != iVar4) goto LAB_06af79a0;
      iVar3 = FUN_06ae0014(param_5);
      iVar4 = FUN_06ae0014(param_6);
      if (iVar3 != iVar4) goto LAB_06af79a0;
      uVar6 = FUN_06adf984(param_5);
                    /* try { // try from 06af7934 to 06bf7a7b has its CatchHandler @ 06af7934
                       catch() { ... } // from try @ 06af7934 with catch @ 06af7934
                       catch() { ... } // from try @ 06af7d8c with catch @ 06af7934
                       catch() { ... } // from try @ 06af7ddc with catch @ 06af7934
                       catch() { ... } // from try @ 06af7e08 with catch @ 06af7934
                       catch() { ... } // from try @ 06af7ef4 with catch @ 06af7934
                       catch() { ... } // from try @ 06af7f58 with catch @ 06af7934 */
      uVar7 = FUN_06adf984(param_6);
      uVar5 = FUN_06b1f030(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_06af79a0;
      uVar6 = FUN_06ae00b4(param_5);
      uVar7 = FUN_06ae00b4(param_6);
      uVar5 = FUN_06b1f030(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_06af79a0;
      uVar6 = FUN_06ae0064(param_5);
      uVar7 = FUN_06ae0064(param_6);
      uVar5 = FUN_06b1f030(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_06af79a0;
      uVar6 = FUN_06ae0154(param_5);
      uVar7 = FUN_06ae0154(param_6);
      uVar5 = FUN_06b1f030(uVar6,uVar7,0);
      uVar8 = 0x28;
      if ((uVar5 & 1) == 0) {
        uVar6 = FUN_06ae0104(param_5);
        uVar7 = FUN_06ae0104(param_6);
        uVar5 = FUN_06b1f030(uVar6,uVar7,0);
        if ((uVar5 & 1) == 0) {
          uVar8 = 0x20;
        }
      }
    }
    else {
LAB_06af79a0:
      uVar8 = 0x28;
    }
    fVar14 = (float)FUN_06adfe84(param_5);
    fVar12 = (float)FUN_06adfe84(param_6);
    if (fVar14 == fVar12) {
      fVar14 = (float)FUN_06adfd94(param_5);
      fVar12 = (float)FUN_06adfd94(param_6);
      if (fVar14 != fVar12) goto LAB_06af7a1c;
      fVar14 = (float)FUN_06adfe34(param_5);
      fVar12 = (float)FUN_06adfe34(param_6);
      uVar9 = 0x928;
      if (fVar14 == fVar12) {
        fVar14 = (float)FUN_06adfde4(param_5);
        fVar12 = (float)FUN_06adfde4(param_6);
        uVar9 = uVar8;
        if (fVar14 != fVar12) {
          uVar9 = 0x928;
        }
      }
    }
    else {
LAB_06af7a1c:
      uVar9 = 0x928;
    }
    iVar3 = FUN_06ae0334(param_5);
    iVar4 = FUN_06ae0334(param_6);
    if (iVar3 != iVar4) {
      uVar9 = uVar9 | 0x808;
    }
  }
  else {
    uVar9 = 0x20;
  }
  puVar1 = OVRPlugin_OVRP_1_103_0_TypeInfo;
  uVar5 = FUN_04bc3584(param_5,*param_6,*(undefined8 *)puVar2);
  if ((uVar5 & 1) == 0) {
    fVar10 = (float)FUN_06ae2d58(param_5);
    fVar12 = param_2;
    fVar13 = param_3;
    fVar15 = param_4;
                    /* try { // try from 06af7a7c to 06bf7aa3 has its CatchHandler @ 06af7e48 */
    fVar11 = (float)FUN_06ae2d58(param_6);
    fVar14 = DAT_01369900;
    param_2 = (param_2 - fVar12) * (param_2 - fVar12);
    param_3 = (param_3 - fVar13) * (param_3 - fVar13);
    param_4 = (param_4 - fVar15) * (param_4 - fVar15);
    uVar8 = uVar9 | 0x2000;
    if (param_4 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + param_2 < DAT_01369900) {
      uVar8 = uVar9;
    }
    if ((uVar8 & 0x8080808) == 0) {
      uVar6 = FUN_06ae328c(param_5);
      uVar7 = FUN_06ae328c(param_6);
      if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
                    /* try { // try from 06af7afc to 06bf7b23 has its CatchHandler @ 06af7e68 */
        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
      }
      uVar5 = FUN_068f8810(uVar6,uVar7,0);
      if ((uVar5 & 1) == 0) {
        uVar6 = FUN_06adf4b0(param_5);
        uVar7 = FUN_06adf4b0(param_6);
        uVar5 = FUN_06b1f030(uVar6,uVar7,0);
        if ((uVar5 & 1) == 0) {
          auVar16 = FUN_06ae32dc(param_5);
          auVar17 = FUN_06ae32dc(param_6);
                    /* try { // try from 06af7b58 to 06bf7b7f has its CatchHandler @ 06af7e64 */
          uVar5 = FUN_06b06788(auVar16._0_8_,auVar16._8_8_,auVar17._0_8_,auVar17._8_8_,0);
          if ((uVar5 & 1) == 0) {
            iVar3 = FUN_06ae3330(param_5);
            iVar4 = FUN_06ae3330(param_6);
            if (iVar3 == iVar4) {
                    /* try { // try from 06af7b90 to 06bf7b9b has its CatchHandler @ 06af7e60 */
              fVar12 = (float)FUN_06ae3654(param_5);
              fVar13 = (float)FUN_06ae3654(param_6);
                    /* try { // try from 06af7ba4 to 06bf7bb3 has its CatchHandler @ 06af7e34 */
              if (fVar12 == fVar13) {
                uVar6 = FUN_06ae2e14(param_5);
                uVar7 = FUN_06ae2e14(param_6);
                uVar5 = FUN_06b1f030(uVar6,uVar7,0);
                if ((uVar5 & 1) == 0) {
                  uVar6 = FUN_06ae3794(param_5);
                  uVar7 = FUN_06ae3794(param_6);
                  uVar5 = FUN_06b1f030(uVar6,uVar7,0);
                  if ((uVar5 & 1) == 0) {
                    uVar6 = FUN_06ae33d0(param_5);
                    uVar7 = FUN_06ae33d0(param_6);
                    uVar5 = FUN_06b1f030(uVar6,uVar7,0);
                    if ((uVar5 & 1) == 0) goto LAB_06af7c2c;
                  }
                }
              }
            }
          }
        }
      }
      uVar8 = uVar8 | 0x808;
    }
LAB_06af7c2c:
    if ((uVar8 >> 0xb & 1) == 0) {
                    /* try { // try from 06af7c30 to 06bf7c5f has its CatchHandler @ 06af7e38 */
      FUN_06ae2fc0(&local_1c0,param_5);
      FUN_06ae2fc0(&local_a0,param_6);
      local_c0[0] = local_1c0;
      local_e0[0] = local_a0;
      uVar6 = local_a0;
      param_2 = fStack_1b4;
      param_4 = fStack_94;
                    /* try { // try from 06af7c74 to 06bf7c7b has its CatchHandler @ 06af7e40 */
      uVar5 = FUN_06a1e458(local_c0,local_e0,0);
      param_3 = (float)uVar6;
      if ((uVar5 & 1) == 0) {
                    /* try { // try from 06af7c7c to 06bf7c83 has its CatchHandler @ 06af7e30 */
        iVar3 = FUN_06ae35b0(param_5);
        iVar4 = FUN_06ae35b0(param_6);
        if (iVar3 == iVar4) {
                    /* try { // try from 06af7c9c to 06bf7ca3 has its CatchHandler @ 06af7e28 */
          fVar10 = (float)FUN_06ae3600(param_5);
          fVar12 = param_2;
          fVar13 = param_3;
          fVar15 = param_4;
                    /* try { // try from 06af7cac to 06bf7cbb has its CatchHandler @ 06af7e20 */
          fVar11 = (float)FUN_06ae3600(param_6);
          fVar12 = param_2 - fVar12;
                    /* try { // try from 06af7ccc to 06bf7cd3 has its CatchHandler @ 06af7e18 */
          param_4 = param_4 - fVar15;
          param_3 = (param_3 - fVar13) * (param_3 - fVar13);
                    /* try { // try from 06af7cd8 to 06bf7ce3 has its CatchHandler @ 06af7e14 */
          param_2 = param_4 * param_4;
                    /* try { // try from 06af7ce8 to 06bf7cf7 has its CatchHandler @ 06af7e0c */
          if (param_2 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar12 * fVar12 < fVar14)
          goto LAB_06af7cf0;
        }
      }
      uVar8 = uVar8 | 0x800;
    }
LAB_06af7cf0:
    iVar3 = FUN_06ae36f4(param_5);
    iVar4 = FUN_06ae36f4(param_6);
                    /* try { // try from 06af7d04 to 06bf7d0f has its CatchHandler @ 06af7e10 */
                    /* try { // try from 06af7d10 to 06bf7d1f has its CatchHandler @ 06af7e08 */
    if (iVar3 != iVar4) {
      uVar8 = uVar8 | 0x100800;
    }
    iVar3 = FUN_06ae3744(param_5);
    iVar4 = FUN_06ae3744(param_6);
    uVar9 = uVar8;
    if (iVar3 != iVar4) {
      uVar9 = uVar8 | 8;
    }
  }
  puVar2 = OVRPlugin_OVRP_1_102_0_TypeInfo;
  uVar5 = FUN_04bc43c4(param_5 + 0x18,param_6[3],*(undefined8 *)puVar1);
  uVar8 = uVar9;
  if ((uVar5 & 1) == 0) {
    auVar16 = FUN_06ae2f1c(param_5);
                    /* try { // try from 06af7d64 to 06bf7d8b has its CatchHandler @ 06af7e50 */
    auVar17 = FUN_06ae2f1c(param_6);
    uVar5 = FUN_06b1f798(auVar16._0_8_,auVar16._8_8_,auVar17._0_8_,auVar17._8_8_,0);
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 06af7d8c to 06bf7dd7 has its CatchHandler @ 06af7934 */
      FUN_06ae2eb4(&local_1c0,param_5);
      FUN_06ae2eb4(&local_a0,param_6);
      local_100[0] = local_1c0;
      local_120[0] = local_a0;
      uVar6 = local_a0;
      uVar5 = FUN_06b1f448(local_100,local_120,0);
      param_2 = (float)uVar6;
      if ((uVar5 & 1) == 0) {
                    /* try { // try from 06af7dd8 to 06bf7ddb has its CatchHandler @ 06af7e5c */
                    /* try { // try from 06af7ddc to 06bf7de3 has its CatchHandler @ 06af7934 */
        FUN_06ae31d0(&local_1c0,param_5);
                    /* try { // try from 06af7de4 to 06bf7de7 has its CatchHandler @ 06af7e44 */
                    /* try { // try from 06af7de8 to 06bf7def has its CatchHandler @ 06af7e50 */
        FUN_06ae31d0(&local_a0,param_6);
                    /* try { // try from 06af7df0 to 06bf7df3 has its CatchHandler @ 06af7e3c */
                    /* try { // try from 06af7df4 to 06bf7dfb has its CatchHandler @ 06af7e4c */
                    /* try { // try from 06af7dfc to 06bf7dff has its CatchHandler @ 06af7e2c */
                    /* try { // try from 06af7e00 to 06bf7e03 has its CatchHandler @ 06af7e24 */
                    /* try { // try from 06af7e04 to 06bf7e07 has its CatchHandler @ 06af7e1c */
                    /* catch() { ... } // from try @ 06af7d10 with catch @ 06af7e08
                       try { // try from 06af7e08 to 06bf7e83 has its CatchHandler @ 06af7934 */
        local_140[0] = local_1c0;
                    /* catch() { ... } // from try @ 06af7ce8 with catch @ 06af7e0c */
                    /* catch() { ... } // from try @ 06af7d04 with catch @ 06af7e10 */
        local_160[0] = local_a0;
        uVar6 = local_a0;
                    /* catch() { ... } // from try @ 06af7cd8 with catch @ 06af7e14 */
                    /* catch() { ... } // from try @ 06af7ccc with catch @ 06af7e18 */
        uVar5 = FUN_06b226e4(local_140,local_160,0);
        param_2 = (float)uVar6;
                    /* catch() { ... } // from try @ 06af7e04 with catch @ 06af7e1c */
        if ((uVar5 & 1) == 0) {
          FUN_06ae3028(&local_1c0,param_5);
          FUN_06ae3028(&local_a0,param_6);
          local_180[0] = local_1c0;
          local_170 = local_1b0;
          local_1a0[0] = local_a0;
          local_190 = local_90;
          uVar5 = FUN_06b22380(local_180,local_1a0,0);
          param_2 = (float)local_a0;
          uVar8 = uVar9 | 0x200;
          if ((uVar5 & 1) == 0) {
            uVar8 = uVar9;
          }
          goto LAB_06af7e24;
        }
      }
    }
                    /* catch() { ... } // from try @ 06af7cac with catch @ 06af7e20 */
    uVar8 = uVar9 | 0x200;
  }
LAB_06af7e24:
  puVar1 = OVRPlugin_OVRP_1_100_0_TypeInfo;
                    /* catch() { ... } // from try @ 06af7e00 with catch @ 06af7e24 */
                    /* catch() { ... } // from try @ 06af7c9c with catch @ 06af7e28 */
                    /* catch() { ... } // from try @ 06af7dfc with catch @ 06af7e2c */
                    /* catch() { ... } // from try @ 06af7c7c with catch @ 06af7e30 */
                    /* catch() { ... } // from try @ 06af7ba4 with catch @ 06af7e34 */
                    /* catch() { ... } // from try @ 06af7c30 with catch @ 06af7e38 */
  uVar5 = FUN_04bc487c(param_5 + 0x20,param_6[4],*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 06af7df0 with catch @ 06af7e3c */
  if ((uVar5 & 1) == 0) {
                    /* catch() { ... } // from try @ 06af7c74 with catch @ 06af7e40 */
                    /* catch() { ... } // from try @ 06af7de4 with catch @ 06af7e44 */
                    /* catch() { ... } // from try @ 06af7a7c with catch @ 06af7e48 */
                    /* catch() { ... } // from try @ 06af7df4 with catch @ 06af7e4c */
                    /* catch() { ... } // from try @ 06af7d64 with catch @ 06af7e50
                       catch() { ... } // from try @ 06af7de8 with catch @ 06af7e50 */
    if (*(int *)(*(long *)Mono_Security_X509_X509Extension_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
                    /* catch() { ... } // from try @ 06af7dd8 with catch @ 06af7e5c */
                    /* catch() { ... } // from try @ 06af7b90 with catch @ 06af7e60 */
                    /* catch() { ... } // from try @ 06af7b58 with catch @ 06af7e64 */
    uVar5 = FUN_06b04f34(param_5,param_6,0);
                    /* catch() { ... } // from try @ 06af7afc with catch @ 06af7e68 */
    if ((uVar5 & 1) == 0) {
      uVar8 = uVar8 | 0x8000;
    }
  }
  puVar2 = OVRPlugin_OVRP_1_104_0_TypeInfo;
                    /* try { // try from 06af7e84 to 06bf7e87 has its CatchHandler @ 06af7f24 */
  uVar5 = FUN_04bc4d3c(param_5 + 0x28,param_6[5],*(undefined8 *)puVar1);
  if ((uVar5 & 1) != 0) goto LAB_06af8218;
  if ((uVar8 >> 0xd & 1) == 0) {
    fVar10 = (float)FUN_06ae28ac(param_5);
    fVar12 = param_2;
    fVar13 = param_3;
    fVar15 = param_4;
    fVar11 = (float)FUN_06ae28ac(param_6);
    fVar14 = DAT_01369900;
    fVar12 = param_2 - fVar12;
                    /* try { // try from 06af7ecc to 06bf7ef3 has its CatchHandler @ 06af7f6c */
    param_4 = param_4 - fVar15;
    param_3 = (param_3 - fVar13) * (param_3 - fVar13);
    param_2 = param_4 * param_4;
    if (param_2 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar12 * fVar12 < DAT_01369900)
    {
      fVar10 = (float)FUN_06ae2ac8(param_5);
      fVar12 = param_2;
      fVar13 = param_3;
      fVar15 = param_4;
                    /* try { // try from 06af7ef4 to 06bf7f0b has its CatchHandler @ 06af7934 */
      fVar11 = (float)FUN_06ae2ac8(param_6);
                    /* try { // try from 06af7f0c to 06bf7f0f has its CatchHandler @ 06af7f34 */
      fVar12 = param_2 - fVar12;
                    /* try { // try from 06af7f1c to 06bf7f57 has its CatchHandler @ 06af7f6c */
      param_4 = param_4 - fVar15;
                    /* catch() { ... } // from try @ 06af7e84 with catch @ 06af7f24 */
      param_3 = (param_3 - fVar13) * (param_3 - fVar13);
      param_2 = param_4 * param_4;
                    /* catch() { ... } // from try @ 06af7f0c with catch @ 06af7f34 */
      if (param_2 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar12 * fVar12 < fVar14) {
        fVar10 = (float)FUN_06ae2bbc(param_5);
        fVar12 = param_2;
        fVar13 = param_3;
        fVar15 = param_4;
                    /* try { // try from 06af7f58 to 06bf7f63 has its CatchHandler @ 06af7934 */
        fVar11 = (float)FUN_06ae2bbc(param_6);
                    /* try { // try from 06af7f64 to 06bf7f6b has its CatchHandler @ 06af7f6c */
        fVar12 = param_2 - fVar12;
                    /* catch() { ... } // from try @ 06af7ecc with catch @ 06af7f6c
                       catch() { ... } // from try @ 06af7f1c with catch @ 06af7f6c
                       catch() { ... } // from try @ 06af7f64 with catch @ 06af7f6c */
        param_4 = param_4 - fVar15;
        param_3 = (param_3 - fVar13) * (param_3 - fVar13);
        param_2 = param_4 * param_4;
        if (param_2 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar12 * fVar12 < fVar14) {
          fVar10 = (float)FUN_06ae2c10(param_5);
          fVar12 = param_2;
          fVar13 = param_3;
          fVar15 = param_4;
          fVar11 = (float)FUN_06ae2c10(param_6);
          fVar12 = param_2 - fVar12;
          param_4 = param_4 - fVar15;
          param_3 = (param_3 - fVar13) * (param_3 - fVar13);
          param_2 = param_4 * param_4;
          if (param_2 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar12 * fVar12 < fVar14)
          {
            fVar10 = (float)FUN_06ae2c64(param_5);
            fVar12 = param_2;
            fVar13 = param_3;
            fVar15 = param_4;
            fVar11 = (float)FUN_06ae2c64(param_6);
            fVar12 = param_2 - fVar12;
            param_4 = param_4 - fVar15;
            param_3 = (param_3 - fVar13) * (param_3 - fVar13);
            param_2 = param_4 * param_4;
            if (param_2 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar12 * fVar12 < fVar14
               ) goto LAB_06af8040;
          }
        }
      }
    }
    uVar8 = uVar8 | 0x2000;
  }
LAB_06af8040:
  if ((uVar8 >> 0xb & 1) == 0) {
    FUN_06ae2900(&local_1c0,param_5);
    FUN_06ae2900(auStack_200,param_6);
    local_1e0[0] = local_1c0;
    param_2 = local_1b0;
    uVar5 = FUN_06b040a4(local_1e0,auStack_200,0);
    if ((uVar5 & 1) == 0) {
      auVar16 = FUN_06ae2960(param_5);
      auVar17 = FUN_06ae2960(param_6);
      uVar5 = FUN_069ec9a0(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,auVar17._0_8_,
                           auVar17._8_8_ & 0xffffffff,0);
      if ((uVar5 & 1) == 0) {
        auVar16 = FUN_06ae29b8(param_5);
        auVar17 = FUN_06ae29b8(param_6);
        uVar5 = FUN_069ec9a0(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,auVar17._0_8_,
                             auVar17._8_8_ & 0xffffffff,0);
        if ((uVar5 & 1) == 0) {
          uVar6 = FUN_06ae2a10(param_5);
          uVar7 = FUN_06ae2a10(param_6);
          uVar5 = FUN_069ed0b8(uVar6,uVar7,0);
          if ((uVar5 & 1) == 0) {
            FUN_06ae2a60(&local_1c0,param_5);
            FUN_06ae2a60(auStack_238,param_6);
            local_220[0] = local_1c0;
            local_210 = local_1b0;
            uVar5 = FUN_069ed394(local_220,auStack_238,0);
            if ((uVar5 & 1) == 0) goto LAB_06af8154;
          }
        }
      }
    }
    uVar8 = uVar8 | 0x800;
  }
LAB_06af8154:
  uVar6 = FUN_06ae2b1c(param_5);
  uVar7 = FUN_06ae2b1c(param_6);
  uVar5 = FUN_06b1f030(uVar6,uVar7,0);
  if ((uVar5 & 1) == 0) {
    uVar6 = FUN_06ae2b6c(param_5);
    uVar7 = FUN_06ae2b6c(param_6);
    uVar5 = FUN_06b1f030(uVar6,uVar7,0);
    if ((uVar5 & 1) != 0) goto LAB_06af81cc;
    uVar6 = FUN_06ae2cb8(param_5);
    uVar7 = FUN_06ae2cb8(param_6);
    uVar5 = FUN_06b1f030(uVar6,uVar7,0);
    if ((uVar5 & 1) != 0) goto LAB_06af81cc;
    uVar6 = FUN_06ae2d08(param_5);
    uVar7 = FUN_06ae2d08(param_6);
    uVar5 = FUN_06b1f030(uVar6,uVar7,0);
    uVar9 = uVar8 | 0x880;
    if ((uVar5 & 1) == 0) {
      uVar9 = uVar8;
    }
  }
  else {
LAB_06af81cc:
    uVar9 = uVar8 | 0x880;
  }
  fVar14 = (float)FUN_06ae2e64(param_5);
  fVar12 = (float)FUN_06ae2e64(param_6);
  uVar8 = uVar9 | 0x1000;
  if (fVar14 == fVar12) {
    uVar8 = uVar9;
  }
  iVar3 = FUN_06adffc4(param_5);
  iVar4 = FUN_06adffc4(param_6);
  if (iVar3 != iVar4) {
    uVar8 = uVar8 | 0x48;
  }
LAB_06af8218:
  uVar5 = FUN_04bc3f04(param_5 + 0x10,param_6[2],*(undefined8 *)puVar2);
  if ((uVar5 & 1) == 0) {
    iVar3 = FUN_06ae2f70(param_5);
    iVar4 = FUN_06ae2f70(param_6);
    if (iVar3 == iVar4) {
      fVar14 = (float)FUN_06ae3510(param_5);
      fVar12 = (float)FUN_06ae3510(param_6);
      uVar9 = uVar8;
      if (fVar14 != fVar12) {
        uVar9 = uVar8 | 0x808;
      }
    }
    else {
      uVar9 = uVar8 | 0x808;
    }
    fVar15 = (float)FUN_06ae3238(param_5);
    fVar14 = param_2;
    fVar12 = param_3;
    fVar13 = param_4;
    fVar10 = (float)FUN_06ae3238(param_6);
    uVar8 = uVar9 | 0x2000;
    if ((param_4 - fVar13) * (param_4 - fVar13) +
        (param_3 - fVar12) * (param_3 - fVar12) +
        (fVar15 - fVar10) * (fVar15 - fVar10) + (param_2 - fVar14) * (param_2 - fVar14) <
        DAT_01369900) {
      uVar8 = uVar9;
    }
    if ((uVar8 >> 0xb & 1) == 0) {
      iVar3 = FUN_06ae3380(param_5);
      iVar4 = FUN_06ae3380(param_6);
      if (iVar3 == iVar4) {
        iVar3 = FUN_06ae3420(param_5);
        iVar4 = FUN_06ae3420(param_6);
        if (iVar3 == iVar4) {
          iVar3 = FUN_06ae3470(param_5);
          iVar4 = FUN_06ae3470(param_6);
          if (iVar3 == iVar4) {
            iVar3 = FUN_06ae34c0(param_5);
            iVar4 = FUN_06ae34c0(param_6);
            if (iVar3 == iVar4) {
              iVar3 = FUN_06ae3560(param_5);
              iVar4 = FUN_06ae3560(param_6);
              if (iVar3 == iVar4) {
                iVar3 = FUN_06ae36a4(param_5);
                iVar4 = FUN_06ae36a4(param_6);
                if (iVar3 == iVar4) {
                  return uVar8;
                }
              }
            }
          }
        }
      }
      uVar8 = uVar8 | 0x800;
    }
  }
  return uVar8;
}


