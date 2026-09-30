/*
FUNCTION_NAME: UnityEngine.LightProbesQuery$$CalculateInterpolatedLightAndOcclusionProbe
ENTRY_POINT: 0358657c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 141
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x03588018) */
/* WARNING: Removing unreachable block (ram,0x03588024) */
/* WARNING: Removing unreachable block (ram,0x0358b2e8) */
/* WARNING: Removing unreachable block (ram,0x03588030) */
/* WARNING: Removing unreachable block (ram,0x03588048) */
/* WARNING: Removing unreachable block (ram,0x0358804c) */
/* WARNING: Removing unreachable block (ram,0x03588050) */
/* WARNING: Removing unreachable block (ram,0x0358b328) */
/* WARNING: Removing unreachable block (ram,0x0358b344) */
/* WARNING: Removing unreachable block (ram,0x0358b348) */
/* WARNING: Removing unreachable block (ram,0x0358a4bc) */
/* WARNING: Removing unreachable block (ram,0x0358a4c8) */
/* WARNING: Removing unreachable block (ram,0x0358b354) */
/* WARNING: Removing unreachable block (ram,0x0358a4d4) */
/* WARNING: Removing unreachable block (ram,0x0358a4ec) */
/* WARNING: Removing unreachable block (ram,0x0358a4f0) */
/* WARNING: Removing unreachable block (ram,0x0358a4f4) */
/* WARNING: Removing unreachable block (ram,0x0358b0ec) */
/* WARNING: Removing unreachable block (ram,0x0358b0f8) */
/* WARNING: Removing unreachable block (ram,0x0358b124) */
/* WARNING: Removing unreachable block (ram,0x0358b150) */
/* WARNING: Removing unreachable block (ram,0x0358b174) */
/* WARNING: Removing unreachable block (ram,0x0358b178) */
/* WARNING: Removing unreachable block (ram,0x0358ada4) */
/* WARNING: Removing unreachable block (ram,0x0358adc0) */
/* WARNING: Removing unreachable block (ram,0x0358adc4) */
/* WARNING: Removing unreachable block (ram,0x035896e8) */
/* WARNING: Removing unreachable block (ram,0x0358b034) */
/* WARNING: Removing unreachable block (ram,0x0358b050) */
/* WARNING: Removing unreachable block (ram,0x0358b054) */
/* WARNING: Removing unreachable block (ram,0x0358b088) */
/* WARNING: Removing unreachable block (ram,0x0358b0a4) */
/* WARNING: Removing unreachable block (ram,0x0358b0a8) */
/* WARNING: Removing unreachable block (ram,0x03589958) */
/* WARNING: Removing unreachable block (ram,0x03589964) */
/* WARNING: Removing unreachable block (ram,0x0358b0b8) */
/* WARNING: Removing unreachable block (ram,0x03589970) */
/* WARNING: Removing unreachable block (ram,0x0358b220) */
/* WARNING: Removing unreachable block (ram,0x0358afe8) */
/* WARNING: Removing unreachable block (ram,0x0358afcc) */
/* WARNING: Removing unreachable block (ram,0x0358b240) */
/* WARNING: Removing unreachable block (ram,0x0358b260) */
/* WARNING: Removing unreachable block (ram,0x03587c4c) */
/* WARNING: Removing unreachable block (ram,0x03587c68) */
/* WARNING: Removing unreachable block (ram,0x03587c6c) */
/* WARNING: Removing unreachable block (ram,0x03587c40) */
/* WARNING: Removing unreachable block (ram,0x035896f4) */
/* WARNING: Removing unreachable block (ram,0x03589700) */
/* WARNING: Removing unreachable block (ram,0x0358a754) */
/* WARNING: Removing unreachable block (ram,0x0358b77c) */
/* WARNING: Removing unreachable block (ram,0x0358b798) */
/* WARNING: Removing unreachable block (ram,0x0358b79c) */
/* WARNING: Removing unreachable block (ram,0x0358a760) */
/* WARNING: Removing unreachable block (ram,0x0358b7a8) */
/* WARNING: Removing unreachable block (ram,0x0358a76c) */
/* WARNING: Removing unreachable block (ram,0x0358a784) */
/* WARNING: Removing unreachable block (ram,0x0358a788) */
/* WARNING: Removing unreachable block (ram,0x0358a78c) */
/* WARNING: Removing unreachable block (ram,0x0358ad70) */
/* WARNING: Removing unreachable block (ram,0x0358ad90) */
/* WARNING: Removing unreachable block (ram,0x0358ad94) */
/* WARNING: Removing unreachable block (ram,0x03587f48) */
/* WARNING: Removing unreachable block (ram,0x03587f54) */
/* WARNING: Removing unreachable block (ram,0x03587f60) */
/* WARNING: Removing unreachable block (ram,0x0358b1b4) */
/* WARNING: Removing unreachable block (ram,0x0358b1d0) */
/* WARNING: Removing unreachable block (ram,0x0358b1d4) */
/* WARNING: Removing unreachable block (ram,0x0358af80) */
/* WARNING: Removing unreachable block (ram,0x0358af9c) */
/* WARNING: Removing unreachable block (ram,0x0358afa0) */
/* WARNING: Removing unreachable block (ram,0x03588eac) */
/* WARNING: Removing unreachable block (ram,0x03588eb8) */
/* WARNING: Removing unreachable block (ram,0x0358afb0) */
/* WARNING: Removing unreachable block (ram,0x03588ec4) */
/* WARNING: Removing unreachable block (ram,0x0358b2bc) */
/* WARNING: Removing unreachable block (ram,0x0358b2d8) */
/* WARNING: Removing unreachable block (ram,0x0358b2dc) */

ulong UnityEngine_LightProbesQuery__CalculateInterpolatedLightAndOcclusionProbe
                (long param_1,long param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  undefined4 *puVar19;
  uint *puVar20;
  long lVar21;
  uint uVar22;
  int *piVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  ulong uVar32;
  ulong in_d3;
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  undefined4 uVar36;
  int iStack_310;
  undefined4 uStack_30c;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  ulong uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2b8;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_4c;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  if ((DAT_0412e082 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(Crosstales_BWF_Manager_PunctuationManager_<containsAsync>d__26_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(PTR_DAT_03cbe248);
    FUN_01ab69ac(Crosstales_BWF_Manager_PunctuationManager_<getAllAsync>d__27_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_95_0_TypeInfo);
    FUN_01ab69ac(Crosstales_BWF_Manager_PunctuationManager_<replaceAllAsync>d__28_TypeInfo);
    FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
    FUN_01ab69ac(QFSW_QC_QuantumConsoleProcessor_<>c_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_0_1_1_TypeInfo);
    FUN_01ab69ac(QFSW_QC_QuantumConsoleProcessor_<>c__DisplayClass27_0_TypeInfo);
    FUN_01ab69ac(QFSW_QC_QuantumConsoleProcessor_<>c__DisplayClass37_0_TypeInfo);
    FUN_01ab69ac(QFSW_QC_QuantumConsoleProcessor_<>c__DisplayClass3_0_TypeInfo);
    FUN_01ab69ac(QFSW_QC_QuantumConsoleProcessor_<CreateCommandOverloads>d__33_TypeInfo);
    FUN_01ab69ac(QFSW_QC_QuantumConsoleProcessor_<ExtractCommandMethods>d__28_TypeInfo);
    FUN_01ab69ac(QFSW_QC_QuantumMacros_<>c_TypeInfo);
    FUN_01ab69ac(QFSW_QC_QuantumParser_<>c_TypeInfo);
    FUN_01ab69ac(QFSW_QC_QuantumPreprocessor_<>c_TypeInfo);
    FUN_01ab69ac(QFSW_QC_QuantumSerializer_<>c_TypeInfo);
    FUN_01ab69ac(QFSW_QC_QuantumSuggestor_<>c_TypeInfo);
    FUN_01ab69ac(QFSW_QC_QuantumSuggestor_<>c__DisplayClass5_0_TypeInfo);
    FUN_01ab69ac(QFSW_QC_QuantumSuggestor_<>c__DisplayClass5_1_TypeInfo);
    FUN_01ab69ac(Mono_CSharp_Linq_QueryBlock_TransparentParameter_TypeInfo);
    FUN_01ab69ac(System_Collections_Queue_QueueEnumerator_TypeInfo);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_QuoteInstruction_ExpressionQuoter_TypeInfo);
    FUN_01ab69ac(Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_TypeInfo);
    FUN_01ab69ac(RengeGames_HealthBars_RadialSegmentedHealthBar_<UpdateShader>d__333_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_RadioButton_UxmlFactory_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_RadioButtonGroup_UxmlFactory_TypeInfo);
    FUN_01ab69ac(RootMotion_FinalIK_RagdollUtility_<DisableRagdollSmooth>d__21_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_31_0_TypeInfo);
    FUN_01ab69ac(RootMotion_FinalIK_RagdollUtility_Child_TypeInfo);
    FUN_01ab69ac(RootMotion_FinalIK_RagdollUtility_Rigidbone_TypeInfo);
    FUN_01ab69ac(Unity_Entities_RateUtils_FixedRateCatchUpManager_TypeInfo);
    FUN_01ab69ac(Unity_Entities_RateUtils_VariableRateManager_TypeInfo);
    DAT_0412e082 = 1;
  }
  lVar12 = *(long *)puVar6;
  uStack_8 = 0;
  uStack_10 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar12 = *(long *)puVar6;
  }
  lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
  if (lVar17 != 0) {
    uVar10 = *(uint *)(lVar17 + 0x18);
    if (uVar10 != 0) {
      *(undefined8 *)(lVar17 + 0x20) = 0;
      *(undefined8 *)(lVar17 + 0x28) = 0;
      *(undefined8 *)(lVar17 + 0x30) = 0;
      if ((((uVar10 != 1) && (*(undefined4 *)(lVar17 + 0x38) = 0, 2 < uVar10)) &&
          (*(undefined4 *)(lVar17 + 0x50) = 0, uVar10 != 3)) &&
         (*(undefined4 *)(lVar17 + 0x68) = 0, 4 < uVar10)) {
        *(undefined4 *)(lVar17 + 0x80) = 0;
        *param_4 = param_3;
        if (param_2 != 0) {
          uVar10 = *(uint *)(param_2 + 0x18);
          if (param_3 < (int)uVar10) {
            bVar7 = false;
            uVar22 = 0;
            iVar11 = 0;
            uVar26 = 0;
            do {
              uVar5 = (uint)uVar26;
              uVar27 = param_3 + uVar5;
              if (uVar10 <= uVar27) goto LAB_0358bfac;
              piVar23 = (int *)(param_2 + (long)(int)uVar27 * 0xc + 0x20);
              if (*piVar23 == 0) break;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              lVar17 = *(long *)(lVar12 + 0xb8);
              lVar21 = *(long *)(lVar17 + 0x80);
              if (lVar21 == 0) goto LAB_0358c010;
              if ((long)*(int *)(lVar21 + 0x18) <= (long)uVar26) break;
              if (*(uint *)(param_2 + 0x18) <= uVar27) goto LAB_0358bfac;
              iVar2 = *piVar23;
              if (iVar2 == 0x3c) break;
              if (iVar2 == 0x3e) {
                *param_4 = param_3 + uVar5;
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  lVar17 = *(long *)(lVar12 + 0xb8);
                  lVar21 = *(long *)(lVar17 + 0x80);
                  if (lVar21 == 0) goto LAB_0358c010;
                }
                puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(uint *)(lVar21 + 0x18) <= uVar5) goto LAB_0358bfac;
                *(undefined2 *)(lVar21 + uVar26 * 2 + 0x20) = 0;
                if (*(char *)(param_1 + 0x430) != '\0') {
                  if (*(int *)(lVar12 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar12 = *(long *)puVar6;
                    lVar17 = *(long *)(lVar12 + 0xb8);
                  }
                  lVar17 = *(long *)(lVar17 + 0x88);
                  if (lVar17 == 0) goto LAB_0358c010;
                  if (*(int *)(lVar17 + 0x18) == 0) goto LAB_0358bfac;
                  if (*(int *)(lVar17 + 0x20) != 0x33542d3) {
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar12 = *(long *)puVar6;
                      lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                      if (lVar17 == 0) goto LAB_0358c010;
                    }
                    if (*(int *)(lVar17 + 0x18) == 0) goto LAB_0358bfac;
                    if (*(int *)(lVar17 + 0x20) != 0x2f23db3) break;
                  }
                }
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar12 = *(long *)puVar6;
                }
                lVar17 = *(long *)(lVar12 + 0xb8);
                lVar21 = *(long *)(lVar17 + 0x88);
                if (lVar21 == 0) goto LAB_0358c010;
                if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                if (*(int *)(lVar21 + 0x20) != 0x33542d3) {
                  if (*(int *)(lVar12 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar12 = *(long *)puVar6;
                    lVar17 = *(long *)(lVar12 + 0xb8);
                    lVar21 = *(long *)(lVar17 + 0x88);
                    if (lVar21 == 0) goto LAB_0358c010;
                  }
                  if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                  if (*(int *)(lVar21 + 0x20) != 0x2f23db3) {
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar12 = *(long *)puVar6;
                      lVar17 = *(long *)(lVar12 + 0xb8);
                    }
                    lVar21 = *(long *)(lVar17 + 0x80);
                    if (lVar21 == 0) goto LAB_0358c010;
                    if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                    sVar4 = *(short *)(lVar21 + 0x20);
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar12 = *(long *)puVar6;
                      lVar17 = *(long *)(lVar12 + 0xb8);
                      lVar21 = *(long *)(lVar17 + 0x80);
                    }
                    if (uVar5 == 4 && sVar4 == 0x23) {
                      uVar16 = 4;
LAB_035870c4:
                      uVar9 = FUN_0359237c(lVar12,lVar21,uVar16);
                      *(undefined4 *)(param_1 + 0x4ec) = uVar9;
                      uVar16 = *(undefined8 *)
                                QFSW_QC_QuantumConsoleProcessor_<ExtractCommandMethods>d__28_TypeInfo
                      ;
                    }
                    else {
                      if (lVar21 == 0) goto LAB_0358c010;
                      if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                      sVar4 = *(short *)(lVar21 + 0x20);
                      if (*(int *)(lVar12 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar12 = *(long *)puVar6;
                        lVar17 = *(long *)(lVar12 + 0xb8);
                        lVar21 = *(long *)(lVar17 + 0x80);
                      }
                      if (uVar5 == 5 && sVar4 == 0x23) {
                        uVar16 = 5;
                        goto LAB_035870c4;
                      }
                      if (lVar21 == 0) goto LAB_0358c010;
                      if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                      sVar4 = *(short *)(lVar21 + 0x20);
                      if (*(int *)(lVar12 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar12 = *(long *)puVar6;
                        lVar17 = *(long *)(lVar12 + 0xb8);
                        lVar21 = *(long *)(lVar17 + 0x80);
                      }
                      if (uVar5 == 7 && sVar4 == 0x23) {
                        uVar16 = 7;
                        goto LAB_035870c4;
                      }
                      if (lVar21 == 0) goto LAB_0358c010;
                      if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                      sVar4 = *(short *)(lVar21 + 0x20);
                      if (*(int *)(lVar12 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar12 = *(long *)puVar6;
                        lVar17 = *(long *)(lVar12 + 0xb8);
                      }
                      if (uVar5 == 9 && sVar4 == 0x23) {
                        lVar21 = *(long *)(lVar17 + 0x80);
                        uVar16 = 9;
                        goto LAB_035870c4;
                      }
                      lVar21 = *(long *)(lVar17 + 0x88);
                      if (lVar21 == 0) goto LAB_0358c010;
                      if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                      uVar10 = *(uint *)(lVar21 + 0x20);
                      if ((int)uVar10 < 0x2d8ff) {
                        if ((int)uVar10 < 0xb94) {
                          if (0x62 < (int)uVar10) {
                            if ((int)uVar10 < 0x1b3) {
                              if ((int)uVar10 < 0x193) {
                                if ((int)uVar10 < 0x74) {
                                  if (uVar10 == 0x69) goto LAB_0358953c;
                                  if (uVar10 == 0x73) {
LAB_03589148:
                                    *(uint *)(param_1 + 0x25c) = *(uint *)(param_1 + 0x25c) | 0x40;
                                    FUN_035a050c(param_1 + 0x260,0x40,0);
                                    lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (*(int *)(lVar12 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    }
                                    lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                                    if (lVar17 == 0) goto LAB_0358c010;
                                    if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_0358bfac;
                                    if (*(int *)(lVar17 + 0x38) == 0x44d63) {
LAB_035891fc:
                                      if (*(int *)(lVar12 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      }
                                      lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                                      if (lVar17 == 0) goto LAB_0358c010;
                                      if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_0358bfac;
                                      uVar16 = FUN_03592790(lVar12,*(undefined8 *)
                                                                    (*(long *)(lVar12 + 0xb8) + 0x80
                                                                    ),*(undefined4 *)(lVar17 + 0x44)
                                                            ,*(undefined4 *)(lVar17 + 0x48));
                                      *(int *)(param_1 + 0x15c) = (int)uVar16;
                                      bVar3 = *(byte *)(param_1 + 0x4ef);
                                      if (((uint)((ulong)uVar16 >> 0x18) & 0xff) <=
                                          (uint)*(byte *)(param_1 + 0x4ef)) {
                                        bVar3 = (byte)((ulong)uVar16 >> 0x18);
                                      }
                                      *(byte *)(param_1 + 0x15f) = bVar3;
                                      uVar10 = *(uint *)(param_1 + 0x15c);
                                    }
                                    else {
                                      if (*(int *)(lVar12 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                                        if (lVar17 == 0) goto LAB_0358c010;
                                      }
                                      if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_0358bfac;
                                      if (*(int *)(lVar17 + 0x38) == 0x2ef43) goto LAB_035891fc;
                                      uVar10 = *(uint *)(param_1 + 0x4ec);
                                      *(uint *)(param_1 + 0x15c) = uVar10;
                                    }
                                    uVar16 = *(undefined8 *)
                                              QFSW_QC_QuantumConsoleProcessor_<ExtractCommandMethods>d__28_TypeInfo
                                    ;
                                    plVar18 = (long *)(param_1 + 0x530);
                                    goto LAB_0358b3c8;
                                  }
                                }
                                else {
                                  if (uVar10 == 0x75) {
LAB_0358a2e0:
                                    *(uint *)(param_1 + 0x25c) = *(uint *)(param_1 + 0x25c) | 4;
                                    FUN_035a050c(param_1 + 0x260,4,0);
                                    lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (*(int *)(lVar12 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    }
                                    lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                                    if (lVar17 == 0) goto LAB_0358c010;
                                    if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_0358bfac;
                                    if (*(int *)(lVar17 + 0x38) == 0x44d63) {
LAB_0358a394:
                                      if (*(int *)(lVar12 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      }
                                      lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                                      if (lVar17 == 0) goto LAB_0358c010;
                                      if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_0358bfac;
                                      uVar16 = FUN_03592790(lVar12,*(undefined8 *)
                                                                    (*(long *)(lVar12 + 0xb8) + 0x80
                                                                    ),*(undefined4 *)(lVar17 + 0x44)
                                                            ,*(undefined4 *)(lVar17 + 0x48));
                                      *(int *)(param_1 + 0x158) = (int)uVar16;
                                      bVar3 = *(byte *)(param_1 + 0x4ef);
                                      if (((uint)((ulong)uVar16 >> 0x18) & 0xff) <=
                                          (uint)*(byte *)(param_1 + 0x4ef)) {
                                        bVar3 = (byte)((ulong)uVar16 >> 0x18);
                                      }
                                      *(byte *)(param_1 + 0x15b) = bVar3;
                                      uVar10 = *(uint *)(param_1 + 0x158);
                                    }
                                    else {
                                      if (*(int *)(lVar12 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                                        if (lVar17 == 0) goto LAB_0358c010;
                                      }
                                      if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_0358bfac;
                                      if (*(int *)(lVar17 + 0x38) == 0x2ef43) goto LAB_0358a394;
                                      uVar10 = *(uint *)(param_1 + 0x4ec);
                                      *(uint *)(param_1 + 0x158) = uVar10;
                                    }
                                    uVar16 = *(undefined8 *)
                                              QFSW_QC_QuantumConsoleProcessor_<ExtractCommandMethods>d__28_TypeInfo
                                    ;
                                    plVar18 = (long *)(param_1 + 0x510);
                                    goto LAB_0358b3c8;
                                  }
                                  if (uVar10 == 0x18b) goto LAB_0358a3f8;
                                  if (uVar10 == 0x192) goto LAB_03587c98;
                                }
                                break;
                              }
                              if (0x19e < (int)uVar10) {
                                if (uVar10 == 0x1aa) goto LAB_035870ec;
                                if (uVar10 == 0x1ab) {
LAB_0358a3f8:
                                  if ((*(byte *)(param_1 + 600) & 1) != 0) goto LAB_035870ec;
                                  uVar22 = 1;
                                  cVar8 = UnityEngine_Light__set_cookieSize(param_1 + 0x260,1,0);
                                  if (cVar8 != '\0') goto LAB_0358c0b8;
                                  *(uint *)(param_1 + 0x25c) =
                                       *(uint *)(param_1 + 0x25c) & 0xfffffffe;
                                  FUN_0209bd58(param_1 + 0x218,&uStack_2d0,
                                               *(undefined8 *)QFSW_QC_QuantumSerializer_<>c_TypeInfo
                                              );
                                  *(undefined4 *)(param_1 + 0x214) = (undefined4)uStack_2d0;
                                  goto LAB_035870ec;
                                }
                                if (uVar10 == 0x1b2) {
LAB_03587c98:
                                  if ((*(byte *)(param_1 + 600) >> 1 & 1) == 0) {
                                    FUN_0209afdc(param_1 + 0x5d0,&uStack_2d0,
                                                 *(undefined8 *)
                                                  System_Collections_Queue_QueueEnumerator_TypeInfo)
                                    ;
                                    *(undefined4 *)(param_1 + 0x5f0) = (undefined4)uStack_2d0;
                                    cVar8 = UnityEngine_Light__set_cookieSize(param_1 + 0x260,2,0);
                                    if (cVar8 == '\0') {
                                      uVar10 = *(uint *)(param_1 + 0x25c) & 0xfffffffd;
                                      goto LAB_03589864;
                                    }
                                  }
                                  goto LAB_035870ec;
                                }
                                break;
                              }
                              if (uVar10 == 0x19c) goto LAB_03589494;
                              if (uVar10 != 0x19e) break;
                            }
                            else {
                              if (0x29e < (int)uVar10) {
                                bVar7 = uVar10 == 0x394;
                                if ((int)uVar10 < 0x395) {
LAB_03589294:
                                  uVar22 = (uint)bVar7;
                                  goto LAB_0358c0b8;
                                }
                                uVar22 = 1;
                                if ((uVar10 == 0x39e) || ((uVar10 != 0xb8f && (uVar10 == 0xb93))))
                                goto LAB_0358c0b8;
                                break;
                              }
                              if (0x1be < (int)uVar10) {
                                if (uVar10 - 0x290 < 0xf) {
                                  uVar22 = 0x4010U >> (ulong)(uVar10 - 0x290 & 0x1f) & 1;
                                  goto LAB_0358c0b8;
                                }
                                break;
                              }
                              if (uVar10 == 0x1bc) {
LAB_03589494:
                                if (((*(byte *)(param_1 + 600) >> 6 & 1) == 0) &&
                                   (cVar8 = UnityEngine_Light__set_cookieSize
                                                      (param_1 + 0x260,0x40,0), cVar8 == '\0')) {
                                  *(uint *)(param_1 + 0x25c) =
                                       *(uint *)(param_1 + 0x25c) & 0xffffffbf;
                                }
                                FUN_0209afdc(param_1 + 0x530,&uStack_2d0,
                                             *(undefined8 *)
                                              System_Linq_Expressions_Interpreter_QuoteInstruction_ExpressionQuoter_TypeInfo
                                            );
                                *(undefined4 *)(param_1 + 0x15c) = (undefined4)uStack_2d0;
                                goto LAB_035870ec;
                              }
                              if (uVar10 != 0x1be) break;
                            }
                            if ((*(byte *)(param_1 + 600) >> 2 & 1) == 0) {
                              FUN_0209afdc(param_1 + 0x510,&uStack_2d0,
                                           *(undefined8 *)
                                            System_Linq_Expressions_Interpreter_QuoteInstruction_ExpressionQuoter_TypeInfo
                                          );
                              *(undefined4 *)(param_1 + 0x158) = (undefined4)uStack_2d0;
                              cVar8 = UnityEngine_Light__set_cookieSize(param_1 + 0x260,4,0);
                              if (cVar8 == '\0') {
                                *(uint *)(param_1 + 0x25c) = *(uint *)(param_1 + 0x25c) & 0xfffffffb
                                ;
                              }
                            }
                            FUN_0209afdc(param_1 + 0x510,&uStack_2d0,
                                         *(undefined8 *)
                                          System_Linq_Expressions_Interpreter_QuoteInstruction_ExpressionQuoter_TypeInfo
                                        );
                            *(undefined4 *)(param_1 + 0x158) = (undefined4)uStack_2d0;
                            goto LAB_035870ec;
                          }
                          if ((int)uVar10 < -0x32f64d99) {
                            if ((int)uVar10 < -0x64bbe162) {
                              if ((int)uVar10 < -0x70449a55) {
                                if (uVar10 == 0x8f9a8677) {
LAB_03589e0c:
                                  FUN_0209afdc(param_1 + 0x218,&uStack_2d0,
                                               *(undefined8 *)
                                                RootMotion_FinalIK_RagdollUtility_<DisableRagdollSmooth>d__21_TypeInfo
                                              );
                                  if (*(int *)(param_1 + 0x25c) == 1) {
                                    uStack_2d0._0_4_ = 700;
                                  }
                                  else {
                                    FUN_0209bd58(param_1 + 0x218,&uStack_2d0,
                                                 *(undefined8 *)
                                                  QFSW_QC_QuantumSerializer_<>c_TypeInfo);
                                  }
                                  *(undefined4 *)(param_1 + 0x214) = (undefined4)uStack_2d0;
                                  goto LAB_035870ec;
                                }
                                if (uVar10 == 0x8fbb65aa) goto LAB_035893f0;
                                break;
                              }
                              if (uVar10 == 0x91e417d1) goto LAB_03588a38;
                              if (uVar10 != 0x92d31273) {
                                if (uVar10 == 0x9b441e9d) goto LAB_03587fc0;
                                break;
                              }
                            }
                            else {
                              if ((int)uVar10 < -0x6147ec0e) {
                                if (uVar10 == 0x9c8f61ca) {
LAB_035893f0:
                                  if (((*(byte *)(param_1 + 600) >> 3 & 1) == 0) &&
                                     (cVar8 = UnityEngine_Light__set_cookieSize(param_1 + 0x260,8,0)
                                     , cVar8 == '\0')) {
                                    uVar10 = *(uint *)(param_1 + 0x25c) & 0xfffffff7;
                                    goto LAB_03589864;
                                  }
                                  goto LAB_035870ec;
                                }
                                if (uVar10 == 0x9eb813f1) {
LAB_03588a38:
                                  if (((*(byte *)(param_1 + 600) >> 5 & 1) == 0) &&
                                     (cVar8 = UnityEngine_Light__set_cookieSize
                                                        (param_1 + 0x260,0x20,0), cVar8 == '\0')) {
                                    uVar10 = *(uint *)(param_1 + 0x25c) & 0xffffffdf;
                                    goto LAB_03589864;
                                  }
                                  goto LAB_035870ec;
                                }
                                break;
                              }
                              if (uVar10 != 0x9fa70e93) {
                                if (uVar10 == 0xcb42bfbd) {
LAB_03587fc0:
                                  if (*(int *)(lVar12 + 0xe0) == 0) {
                                    lVar12 = thunk_FUN_01a58e78();
                                    lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo +
                                                      0xb8);
                                    lVar21 = *(long *)(lVar17 + 0x88);
                                    if (lVar21 == 0) goto LAB_0358c010;
                                  }
                                  if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                                  uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                                  fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar17 + 0x80)
                                                               ,*(undefined4 *)(lVar21 + 0x2c),
                                                               *(undefined4 *)(lVar21 + 0x30),
                                                               &uStack_2d0);
                                  if (fVar28 != -32768.0) {
                                    fVar31 = DAT_00d389a8;
                                    if (*(char *)(param_1 + 0x305) != '\0') {
                                      fVar31 = 1.0;
                                    }
                                    fVar29 = fVar28 * fVar31;
                                    if (fVar28 * fVar31 < 0.0) {
                                      fVar29 = 0.0;
                                    }
                                    goto LAB_0358b7c4;
                                  }
                                }
                                else if (uVar10 == 0xcd09b266) goto LAB_0358a464;
                                break;
                              }
                            }
LAB_035881fc:
                            if (((*(byte *)(param_1 + 600) >> 4 & 1) == 0) &&
                               (cVar8 = UnityEngine_Light__set_cookieSize(param_1 + 0x260,0x10,0),
                               cVar8 == '\0')) {
                              uVar10 = *(uint *)(param_1 + 0x25c) & 0xffffffef;
                              goto LAB_03589864;
                            }
                            goto LAB_035870ec;
                          }
                          if (-0x13b73942 < (int)uVar10) {
                            if ((int)uVar10 < 0x4a) {
                              if (uVar10 != 0x42) {
                                if (uVar10 == 0x49) {
LAB_0358953c:
                                  *(uint *)(param_1 + 0x25c) = *(uint *)(param_1 + 0x25c) | 2;
                                  FUN_035a050c(param_1 + 0x260,2,0);
                                  lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  if (*(int *)(lVar12 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                    lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  }
                                  lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                                  if (lVar17 == 0) goto LAB_0358c010;
                                  if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_0358bfac;
                                  if (*(int *)(lVar17 + 0x38) == 0x43833) {
LAB_035895f0:
                                    if (*(int *)(lVar12 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    }
                                    lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                                    if (lVar17 == 0) goto LAB_0358c010;
                                    if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_0358bfac;
                                    uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                                    fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)
                                                                         (*(long *)(lVar12 + 0xb8) +
                                                                         0x80),
                                                                 *(undefined4 *)(lVar17 + 0x44),
                                                                 *(undefined4 *)(lVar17 + 0x48),
                                                                 &uStack_2d0);
                                    uVar10 = 0x80000000;
                                    if (fVar28 != INFINITY) {
                                      uVar10 = (int)fVar28;
                                    }
                                    uVar22 = 0;
                                    *(uint *)(param_1 + 0x5f0) = uVar10;
                                    if (0x168 < uVar10 + 0xb4) goto LAB_0358c0b8;
                                  }
                                  else {
                                    if (*(int *)(lVar12 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                                      if (lVar17 == 0) goto LAB_0358c010;
                                    }
                                    if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_0358bfac;
                                    if (*(int *)(lVar17 + 0x38) == 0x2da13) goto LAB_035895f0;
                                    if (*(long *)(param_1 + 0x100) == 0) goto LAB_0358c010;
                                    bVar3 = *(byte *)(*(long *)(param_1 + 0x100) + 0x1b8);
                                    uVar10 = (uint)bVar3;
                                    *(uint *)(param_1 + 0x5f0) = (uint)bVar3;
                                  }
                                  uVar16 = *(undefined8 *)
                                            QFSW_QC_QuantumConsoleProcessor_<>c__DisplayClass37_0_TypeInfo
                                  ;
                                  plVar18 = (long *)(param_1 + 0x5d0);
                                  goto LAB_0358b3c8;
                                }
                                break;
                              }
                            }
                            else {
                              if (uVar10 == 0x53) goto LAB_03589148;
                              if (uVar10 == 0x55) goto LAB_0358a2e0;
                              if (uVar10 != 0x62) break;
                            }
                            uVar22 = 1;
                            *(uint *)(param_1 + 0x25c) = *(uint *)(param_1 + 0x25c) | 1;
                            FUN_035a050c(param_1 + 0x260,1,0);
                            *(undefined4 *)(param_1 + 0x214) = 700;
                            goto LAB_0358c0b8;
                          }
                          if (-0x3239ec63 < (int)uVar10) {
                            if (uVar10 == 0xe5711531) goto LAB_03589f18;
                            if (uVar10 == 0xe571a456) goto LAB_03589f2c;
                            uVar22 = 0xec48c6be;
                            goto FUN_03587930;
                          }
                          if (uVar10 != 0xcdc58478) {
                            uVar22 = 0xcdc6139d;
                            goto UnityEngine_Graphics__DrawTexture;
                          }
LAB_03589c04:
                          if (*(int *)(lVar12 + 0xe0) == 0) {
                            lVar12 = thunk_FUN_01a58e78();
                            lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                            lVar21 = *(long *)(lVar17 + 0x88);
                            if (lVar21 == 0) goto LAB_0358c010;
                          }
                          if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                          uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                          fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar17 + 0x80),
                                                       *(undefined4 *)(lVar21 + 0x2c),
                                                       *(undefined4 *)(lVar21 + 0x30),&uStack_2d0);
                          if (fVar28 != -32768.0) {
                            fVar31 = DAT_00d389a8;
                            if (*(char *)(param_1 + 0x305) != '\0') {
                              fVar31 = 1.0;
                            }
                            *(float *)(param_1 + 0x2c0) = fVar28 * fVar31;
                            goto LAB_035870ec;
                          }
                          break;
                        }
                        if ((int)uVar10 < 0x79c2) {
                          if ((int)uVar10 < 0x19a7) {
                            if ((int)uVar10 < 0x11cd) {
                              if ((int)uVar10 < 0xc90) {
                                bVar7 = uVar10 == 0xb9d;
                                goto LAB_03589294;
                              }
                              uVar22 = 1;
                              if ((uVar10 == 0xc93) || (uVar10 == 0xc9d)) goto LAB_0358c0b8;
                              if (uVar10 == 0x11cc) {
LAB_03587e20:
                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                  lVar12 = thunk_FUN_01a58e78();
                                  lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8)
                                  ;
                                  lVar21 = *(long *)(lVar17 + 0x88);
                                  if (lVar21 == 0) goto LAB_0358c010;
                                }
                                if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                                uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                                fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar17 + 0x80),
                                                             *(undefined4 *)(lVar21 + 0x2c),
                                                             *(undefined4 *)(lVar21 + 0x30),
                                                             &uStack_2d0);
                                if (fVar28 != -32768.0) {
                                  fVar31 = DAT_00d389a8;
                                  if (*(char *)(param_1 + 0x305) != '\0') {
                                    fVar31 = 1.0;
                                  }
                                  fVar28 = fVar28 * fVar31;
LAB_0358b268:
                                  *(float *)(param_1 + 0x640) = fVar28;
                                  goto LAB_035870ec;
                                }
                              }
                              break;
                            }
                            if ((int)uVar10 < 0x1287) {
                              if (uVar10 != 0x1278) {
                                uVar22 = 0x1286;
                                goto LAB_035887f0;
                              }
LAB_035899f4:
                              if (*(long *)(param_1 + 0x100) == 0) goto LAB_0358c010;
                              fVar29 = *(float *)(param_1 + 0x404);
                              memmove(&uStack_b0,(void *)(*(long *)(param_1 + 0x100) + 0x50),0x60);
                              fVar28 = (float)FUN_03776a00(&uStack_b0,0);
                              fVar31 = 1.0;
                              if (0.0 < fVar28) {
                                if (*(long *)(param_1 + 0x100) == 0) goto LAB_0358c010;
                                memmove(&uStack_b0,(void *)(*(long *)(param_1 + 0x100) + 0x50),0x60)
                                ;
                                fVar31 = (float)FUN_03776a00(&uStack_b0,0);
                              }
                              *(float *)(param_1 + 0x404) = fVar29 * fVar31;
                              uStack_2d0 = CONCAT44(uStack_2d0._4_4_,
                                                    *(undefined4 *)(param_1 + 0x61c));
                              FUN_0209b210(param_1 + 0x620,&uStack_2d0,
                                           *(undefined8 *)
                                            QFSW_QC_QuantumSuggestor_<>c__DisplayClass5_1_TypeInfo);
                              if (*(long *)(param_1 + 0x100) == 0) goto LAB_0358c010;
                              fVar28 = *(float *)(param_1 + 0x1e8);
                              memmove(&uStack_b0,(void *)(*(long *)(param_1 + 0x100) + 0x50),0x60);
                              iVar11 = FUN_03776950(&uStack_b0,0);
                              if (*(long *)(param_1 + 0x100) == 0) goto LAB_0358c010;
                              memmove(&uStack_b0,(void *)(*(long *)(param_1 + 0x100) + 0x50),0x60);
                              fVar31 = (float)FUN_03776960(&uStack_b0,0);
                              if (*(long *)(param_1 + 0x100) == 0) goto LAB_0358c010;
                              fVar35 = *(float *)(param_1 + 0x61c);
                              fVar29 = DAT_00d389a8;
                              if (*(char *)(param_1 + 0x305) != '\0') {
                                fVar29 = 1.0;
                              }
                              memmove(&uStack_b0,(void *)(*(long *)(param_1 + 0x100) + 0x50),0x60);
                              fVar30 = (float)FUN_037769f0(&uStack_b0,0);
                              *(float *)(param_1 + 0x61c) =
                                   fVar35 + (fVar28 / (float)iVar11) * fVar31 * fVar29 * fVar30 *
                                            *(float *)(param_1 + 0x404);
                              FUN_035a050c(param_1 + 0x260,0x100,0);
                              uVar10 = *(uint *)(param_1 + 0x25c) | 0x100;
                            }
                            else {
                              if (uVar10 == 0x18ec) goto LAB_03587e20;
                              if (uVar10 == 0x1998) goto LAB_035899f4;
                              uVar22 = 0x19a6;
LAB_035887f0:
                              if (uVar10 != uVar22) break;
                              if (*(long *)(param_1 + 0x100) == 0) goto LAB_0358c010;
                              fVar29 = *(float *)(param_1 + 0x404);
                              memmove(&uStack_b0,(void *)(*(long *)(param_1 + 0x100) + 0x50),0x60);
                              fVar28 = (float)FUN_037769e0(&uStack_b0,0);
                              fVar31 = 1.0;
                              if (0.0 < fVar28) {
                                if (*(long *)(param_1 + 0x100) == 0) goto LAB_0358c010;
                                memmove(&uStack_b0,(void *)(*(long *)(param_1 + 0x100) + 0x50),0x60)
                                ;
                                fVar31 = (float)FUN_037769e0(&uStack_b0,0);
                              }
                              *(float *)(param_1 + 0x404) = fVar29 * fVar31;
                              uStack_2d0 = CONCAT44(uStack_2d0._4_4_,
                                                    *(undefined4 *)(param_1 + 0x61c));
                              FUN_0209b210(param_1 + 0x620,&uStack_2d0,
                                           *(undefined8 *)
                                            QFSW_QC_QuantumSuggestor_<>c__DisplayClass5_1_TypeInfo);
                              if (*(long *)(param_1 + 0x100) == 0) goto LAB_0358c010;
                              fVar28 = *(float *)(param_1 + 0x1e8);
                              memmove(&uStack_b0,(void *)(*(long *)(param_1 + 0x100) + 0x50),0x60);
                              iVar11 = FUN_03776950(&uStack_b0,0);
                              if (*(long *)(param_1 + 0x100) == 0) goto LAB_0358c010;
                              memmove(&uStack_b0,(void *)(*(long *)(param_1 + 0x100) + 0x50),0x60);
                              fVar31 = (float)FUN_03776960(&uStack_b0,0);
                              if (*(long *)(param_1 + 0x100) == 0) goto LAB_0358c010;
                              fVar35 = *(float *)(param_1 + 0x61c);
                              fVar29 = DAT_00d389a8;
                              if (*(char *)(param_1 + 0x305) != '\0') {
                                fVar29 = 1.0;
                              }
                              memmove(&uStack_b0,(void *)(*(long *)(param_1 + 0x100) + 0x50),0x60);
                              fVar30 = (float)FUN_037769d0(&uStack_b0,0);
                              *(float *)(param_1 + 0x61c) =
                                   fVar35 + (fVar28 / (float)iVar11) * fVar31 * fVar29 * fVar30 *
                                            *(float *)(param_1 + 0x404);
                              FUN_035a050c(param_1 + 0x260,0x80,0);
                              uVar10 = *(uint *)(param_1 + 0x25c) | 0x80;
                            }
                            *(uint *)(param_1 + 0x25c) = uVar10;
                            goto LAB_035870ec;
                          }
                          if ((int)uVar10 < 0x5892) {
                            if ((int)uVar10 < 0x5172) {
                              if (uVar10 == 0x50c5) {
LAB_03589bf8:
                                *(undefined1 *)(param_1 + 0x2db) = 0;
                                goto LAB_035870ec;
                              }
                              uVar22 = 0x5171;
                            }
                            else {
                              if (uVar10 == 0x517f) goto LAB_0358978c;
                              if (uVar10 == 0x57e5) goto LAB_03589bf8;
                              uVar22 = 0x5891;
                            }
                            if (uVar10 != uVar22) break;
                            if ((*(byte *)(param_1 + 0x25d) & 1) == 0) goto LAB_035870ec;
                            if (*(float *)(param_1 + 0x404) < 1.0) {
                              FUN_0209b778(param_1 + 0x620,&uStack_2d0,
                                           *(undefined8 *)QFSW_QC_QuantumSuggestor_<>c_TypeInfo);
                              *(undefined4 *)(param_1 + 0x61c) = (undefined4)uStack_2d0;
                              if (*(long *)(param_1 + 0x100) == 0) goto LAB_0358c010;
                              fVar29 = *(float *)(param_1 + 0x404);
                              memmove(&uStack_b0,(void *)(*(long *)(param_1 + 0x100) + 0x50),0x60);
                              fVar28 = (float)FUN_03776a00(&uStack_b0,0);
                              fVar31 = 1.0;
                              if (0.0 < fVar28) {
                                if (*(long *)(param_1 + 0x100) == 0) goto LAB_0358c010;
                                memmove(&uStack_b0,(void *)(*(long *)(param_1 + 0x100) + 0x50),0x60)
                                ;
                                fVar31 = (float)FUN_03776a00(&uStack_b0,0);
                              }
                              *(float *)(param_1 + 0x404) = fVar29 / fVar31;
                            }
                            cVar8 = UnityEngine_Light__set_cookieSize(param_1 + 0x260,0x100,0);
                            if (cVar8 != '\0') goto LAB_035870ec;
                            uVar10 = *(uint *)(param_1 + 0x25c) & 0xfffffeff;
                          }
                          else {
                            if (0x6f5f < (int)uVar10) {
                              if (uVar10 == 0x7625) goto LAB_03589f38;
                              if (uVar10 == 0x763a) goto LAB_03587a3c;
                              if (uVar10 == 0x79c1) {
LAB_035898f0:
                                uVar22 = 1;
                                *(undefined1 *)(param_1 + 0x2da) = 1;
                                goto LAB_0358c0b8;
                              }
                              break;
                            }
                            if (uVar10 != 0x589f) {
                              if (uVar10 == 0x6f5f) goto LAB_0358824c;
                              break;
                            }
LAB_0358978c:
                            if (-1 < *(char *)(param_1 + 0x25c)) goto LAB_035870ec;
                            if (*(float *)(param_1 + 0x404) < 1.0) {
                              FUN_0209b778(param_1 + 0x620,&uStack_2d0,
                                           *(undefined8 *)QFSW_QC_QuantumSuggestor_<>c_TypeInfo);
                              *(undefined4 *)(param_1 + 0x61c) = (undefined4)uStack_2d0;
                              if (*(long *)(param_1 + 0x100) == 0) goto LAB_0358c010;
                              fVar29 = *(float *)(param_1 + 0x404);
                              memmove(&uStack_b0,(void *)(*(long *)(param_1 + 0x100) + 0x50),0x60);
                              fVar28 = (float)FUN_037769e0(&uStack_b0,0);
                              fVar31 = 1.0;
                              if (0.0 < fVar28) {
                                if (*(long *)(param_1 + 0x100) == 0) goto LAB_0358c010;
                                memmove(&uStack_b0,(void *)(*(long *)(param_1 + 0x100) + 0x50),0x60)
                                ;
                                fVar31 = (float)FUN_037769e0(&uStack_b0,0);
                              }
                              *(float *)(param_1 + 0x404) = fVar29 / fVar31;
                            }
                            cVar8 = UnityEngine_Light__set_cookieSize(param_1 + 0x260,0x80,0);
                            if (cVar8 != '\0') goto LAB_035870ec;
                            uVar10 = *(uint *)(param_1 + 0x25c) & 0xffffff7f;
                          }
LAB_03589864:
                          *(uint *)(param_1 + 0x25c) = uVar10;
                          goto LAB_035870ec;
                        }
                        if (0x22ef4 < (int)uVar10) {
                          if ((int)uVar10 < 0x260f5) {
                            if ((int)uVar10 < 0x23291) {
                              if (uVar10 == 0x22f09) goto LAB_03589428;
                              uVar22 = 0x3290;
                              goto LAB_03588aa8;
                            }
                            if (uVar10 != 0x238b8) {
                              if (uVar10 == 0x25a2e) goto LAB_03589e8c;
                              uVar22 = 0x60f4;
                              goto LAB_0358776c;
                            }
                          }
                          else {
                            if ((int)uVar10 < 0x26491) {
                              if (uVar10 == 0x26109) {
LAB_03589428:
                                if ((*(char *)(param_1 + 0x431) == '\0') ||
                                   (*(char *)(param_1 + 0x3f5) != '\0')) goto LAB_035870ec;
                                lVar12 = *(long *)(param_1 + 0x368);
                                if ((lVar12 == 0) ||
                                   (lVar17 = *(long *)(lVar12 + 0x48), lVar17 == 0))
                                goto LAB_0358c010;
                                uVar10 = *(uint *)(lVar12 + 0x28);
                                if ((int)*(uint *)(lVar17 + 0x18) <= (int)uVar10) goto LAB_035870ec;
                                if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_0358bfac;
                                lVar17 = lVar17 + (long)(int)uVar10 * 0x28;
                                *(int *)(lVar17 + 0x38) =
                                     *(int *)(param_1 + 0x494) - *(int *)(lVar17 + 0x34);
                                *(uint *)(lVar12 + 0x28) = uVar10 + 1;
                                goto LAB_035870ec;
                              }
                              uVar22 = 0x6490;
LAB_03588aa8:
                              if (uVar10 == (uVar22 | 0x20000)) {
                                *(undefined1 *)(param_1 + 0x2da) = 0;
                                goto LAB_035870ec;
                              }
                              break;
                            }
                            if (uVar10 != 0x26ab8) {
                              if (uVar10 != 0x2d7ad) {
                                uVar22 = 0x2d8fe;
                                goto LAB_0358897c;
                              }
                              goto LAB_03589b64;
                            }
                          }
                          FUN_0209afdc(param_1 + 0x1f0,&uStack_2d0,
                                       *(undefined8 *)
                                        RengeGames_HealthBars_RadialSegmentedHealthBar_<UpdateShader>d__333_TypeInfo
                                      );
                          *(undefined4 *)(param_1 + 0x1e8) = (undefined4)uStack_2d0;
                          goto LAB_035870ec;
                        }
                        if ((int)uVar10 < 0xa83b) {
                          if (0x7fe9 < (int)uVar10) {
                            if (uVar10 != 0xa15f) {
                              if (uVar10 == 0xa825) {
LAB_03589f38:
                                *(uint *)(param_1 + 0x25c) = *(uint *)(param_1 + 0x25c) | 0x200;
                                FUN_035a050c(param_1 + 0x260,0x200,0);
                                puVar6 = OVRPlugin_Mesh_TypeInfo;
                                if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (DAT_0412df1c == '\0') {
                                  FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
                                  DAT_0412df1c = '\x01';
                                }
                                lVar12 = *(long *)puVar6;
                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar12 = *(long *)puVar6;
                                }
                                uStack_8 = (*(ulong **)(lVar12 + 0xb8))[1];
                                uStack_10 = **(ulong **)(lVar12 + 0xb8);
                                uVar10 = 0;
                                uVar26 = 0x4000ffff;
                                goto LAB_03589fec;
                              }
                              if (uVar10 == 0xa83a) {
LAB_03587a3c:
                                if ((*(char *)(param_1 + 0x431) == '\0') ||
                                   (*(char *)(param_1 + 0x3f5) != '\0')) goto LAB_035870ec;
                                lVar12 = *(long *)(param_1 + 0x368);
                                if (lVar12 == 0) goto LAB_0358c010;
                                lVar17 = *(long *)(lVar12 + 0x48);
                                if (lVar17 == 0) goto LAB_0358c010;
                                uVar10 = *(uint *)(lVar12 + 0x28);
                                lVar21 = (long)(int)uVar10;
                                if (*(int *)(lVar17 + 0x18) < (int)(uVar10 + 1)) {
                                  if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0)
                                  {
                                    thunk_FUN_01a58e78();
                                  }
                                  FUN_01ff025c((long *)(lVar12 + 0x48),uVar10 + 1,
                                               *(undefined8 *)
                                                QFSW_QC_QuantumConsoleProcessor_<>c_TypeInfo);
                                  lVar12 = *(long *)(param_1 + 0x368);
                                  if (lVar12 == 0) goto LAB_0358c010;
                                }
                                lVar12 = *(long *)(lVar12 + 0x48);
                                if (lVar12 == 0) goto LAB_0358c010;
                                if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_0358bfac;
                                plVar18 = (long *)(lVar12 + lVar21 * 0x28 + 0x20);
                                *plVar18 = param_1;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          (plVar18,param_1);
                                if ((*(long *)(param_1 + 0x368) == 0) ||
                                   (lVar12 = *(long *)(*(long *)(param_1 + 0x368) + 0x48),
                                   lVar12 == 0)) goto LAB_0358c010;
                                lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar17 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                }
                                lVar17 = *(long *)(lVar17 + 0xb8);
                                lVar25 = *(long *)(lVar17 + 0x88);
                                if (lVar25 == 0) goto LAB_0358c010;
                                if ((*(int *)(lVar25 + 0x18) == 0) ||
                                   (*(uint *)(lVar12 + 0x18) <= uVar10)) goto LAB_0358bfac;
                                *(undefined4 *)(lVar12 + lVar21 * 0x28 + 0x28) =
                                     *(undefined4 *)(lVar25 + 0x24);
                                if ((*(long *)(param_1 + 0x368) == 0) ||
                                   (lVar12 = *(long *)(*(long *)(param_1 + 0x368) + 0x48),
                                   lVar12 == 0)) goto LAB_0358c010;
                                if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_0358bfac;
                                lVar12 = lVar12 + lVar21 * 0x28;
                                *(undefined4 *)(lVar12 + 0x34) = *(undefined4 *)(param_1 + 0x494);
                                iVar11 = *(int *)(lVar25 + 0x2c);
                                *(int *)(lVar12 + 0x2c) = iVar11 + param_3;
                                uVar9 = *(undefined4 *)(lVar25 + 0x30);
                                *(undefined4 *)(lVar12 + 0x30) = uVar9;
                                FUN_03567c88(lVar12 + 0x20,*(undefined8 *)(lVar17 + 0x80),iVar11,
                                             uVar9,0);
                                goto LAB_035870ec;
                              }
                              break;
                            }
LAB_0358824c:
                            if (*(int *)(lVar12 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              lVar21 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                              if (lVar21 == 0) goto LAB_0358c010;
                            }
                            if ((*(int *)(lVar21 + 0x18) == 0) || (*(int *)(lVar21 + 0x18) == 1))
                            goto LAB_0358bfac;
                            iVar11 = *(int *)(lVar21 + 0x24);
                            if ((iVar11 == 0x2d93756b) || (iVar11 == 0x1f31f54b)) {
                              if (*(int *)(lVar12 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              }
                              lVar12 = **(long **)(lVar12 + 0xb8);
                              if (lVar12 == 0) goto LAB_0358c010;
                              if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0358bfac;
                              *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(lVar12 + 0x28);
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        (param_1 + 0x100);
                              lVar12 = **(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                              if (lVar12 == 0) goto LAB_0358c010;
                              if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0358bfac;
                              *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(lVar12 + 0x38);
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        (param_1 + 0x118);
                              *(undefined4 *)(param_1 + 0x120) = 0;
                              lVar12 = **(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                              if (lVar12 == 0) goto LAB_0358c010;
                              if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0358bfac;
                              plVar18 = *(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) +
                                        2;
                              uStack_108 = *(undefined8 *)(lVar12 + 0x28);
                              uStack_110 = *(ulong *)(lVar12 + 0x20);
                              uStack_f8 = *(undefined8 *)(lVar12 + 0x38);
                              uStack_100 = *(undefined8 *)(lVar12 + 0x30);
                              uStack_e0 = *(undefined8 *)(lVar12 + 0x50);
                              uStack_e8 = *(undefined8 *)(lVar12 + 0x48);
                              uStack_f0 = *(undefined8 *)(lVar12 + 0x40);
                              uVar16 = *(undefined8 *)QFSW_QC_QuantumMacros_<>c_TypeInfo;
                              puVar14 = &uStack_110;
                              goto LAB_035870e8;
                            }
                            iVar2 = *(int *)(lVar21 + 0x38);
                            iVar1 = *(int *)(lVar21 + 0x3c);
                            FUN_03557c60(iVar11,&uStack_30,0);
                            uVar26 = uStack_30;
                            puVar6 = PTR_DAT_03cbdf88;
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar26 = FUN_036d35a8(uVar26,0,0);
                            if ((uVar26 & 1) != 0) {
                              lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar12 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              }
                              lVar17 = *(long *)(lVar12 + 0xb8);
                              lVar21 = *(long *)(lVar17 + 0x70);
                              if (lVar21 == 0) {
                                uVar26 = 0;
                              }
                              else {
                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8)
                                  ;
                                }
                                lVar12 = *(long *)(lVar17 + 0x88);
                                if (lVar12 == 0) goto LAB_0358c010;
                                if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0358bfac;
                                uVar16 = FUN_025c65fc(0,*(undefined8 *)(lVar17 + 0x80),
                                                      *(undefined4 *)(lVar12 + 0x2c),
                                                      *(undefined4 *)(lVar12 + 0x30),0);
                                iStack_310 = iVar11;
                                (**(code **)(lVar21 + 0x18))
                                          (*(undefined8 *)(lVar21 + 0x40),&iStack_310,uVar16,
                                           &uStack_2d0,*(undefined8 *)(lVar21 + 0x28));
                                uVar26 = uStack_2d0;
                              }
                              uStack_30 = uVar26;
                              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              uVar26 = FUN_036d35a8(uVar26,0,0);
                              if ((uVar26 & 1) != 0) {
                                uVar16 = FUN_0359766c(0);
                                lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78(lVar12);
                                  lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                }
                                lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                                if (lVar17 == 0) goto LAB_0358c010;
                                if (*(int *)(lVar17 + 0x18) == 0) goto LAB_0358bfac;
                                uVar24 = FUN_025c65fc(0,*(undefined8 *)
                                                         (*(long *)(lVar12 + 0xb8) + 0x80),
                                                      *(undefined4 *)(lVar17 + 0x2c),
                                                      *(undefined4 *)(lVar17 + 0x30),0);
                                uVar16 = FUN_025b1328(uVar16,uVar24,0);
                                uStack_30 = FUN_01fe050c(uVar16,*(undefined8 *)
                                                                 OVRPlugin_OVRP_1_95_0_TypeInfo);
                              }
                              uVar26 = uStack_30;
                              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              uVar26 = FUN_036d35a8(uVar26,0,0);
                              if ((uVar26 & 1) != 0) break;
                              FUN_035578dc(uStack_30,0);
                            }
                            if (iVar1 == 0 && iVar2 == 0) {
                              if (uStack_30 == 0) goto LAB_0358c010;
                              *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(uStack_30 + 0x20);
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        (param_1 + 0x118);
                              uVar26 = uStack_30;
                              uVar16 = *(undefined8 *)(param_1 + 0x118);
                              lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar12 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              }
                              uVar10 = FUN_03557fec(uVar16,uVar26,*(long *)(lVar12 + 0xb8),
                                                    *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),0)
                              ;
                              *(uint *)(param_1 + 0x120) = uVar10;
                              lVar12 = **(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                              if (lVar12 == 0) goto LAB_0358c010;
                              if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_0358bfac;
                              lVar12 = lVar12 + (long)(int)uVar10 * 0x38;
                              plVar18 = *(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) +
                                        2;
                              uStack_138 = *(undefined8 *)(lVar12 + 0x38);
                              uStack_140 = *(undefined8 *)(lVar12 + 0x30);
                              uStack_128 = *(undefined8 *)(lVar12 + 0x48);
                              uStack_130 = *(undefined8 *)(lVar12 + 0x40);
                              uStack_120 = *(undefined8 *)(lVar12 + 0x50);
                              uStack_148 = *(undefined8 *)(lVar12 + 0x28);
                              uStack_150 = *(undefined8 *)(lVar12 + 0x20);
                              puVar15 = &uStack_150;
                            }
                            else {
                              if ((iVar2 != 0x629fdf7) && (iVar2 != 0x454d9f7)) break;
                              uVar26 = FUN_03557e7c(iVar1,&uStack_38,0);
                              if ((uVar26 & 1) == 0) {
                                uVar16 = FUN_0359766c(0);
                                lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78(lVar12);
                                  lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                }
                                lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                                if (lVar17 == 0) goto LAB_0358c010;
                                if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_0358bfac;
                                uVar24 = FUN_025c65fc(0,*(undefined8 *)
                                                         (*(long *)(lVar12 + 0xb8) + 0x80),
                                                      *(undefined4 *)(lVar17 + 0x44),
                                                      *(undefined4 *)(lVar17 + 0x48),0);
                                uVar16 = FUN_025b1328(uVar16,uVar24,0);
                                uVar16 = FUN_01fe050c(uVar16,*(undefined8 *)PTR_DAT_03cbe248);
                                uStack_38 = uVar16;
                                if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78(*(long *)puVar6);
                                }
                                uVar26 = FUN_036d35a8(uVar16,0,0);
                                if ((uVar26 & 1) != 0) break;
                                FUN_03557af0(iVar1,uStack_38,0);
                                *(undefined8 *)(param_1 + 0x118) = uStack_38;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          (param_1 + 0x118);
                                uVar26 = uStack_30;
                                uVar16 = *(undefined8 *)(param_1 + 0x118);
                                lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                }
                                uVar10 = FUN_03557fec(uVar16,uVar26,*(long *)(lVar12 + 0xb8),
                                                      *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),
                                                      0);
                                *(uint *)(param_1 + 0x120) = uVar10;
                                lVar12 = **(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8)
                                ;
                                if (lVar12 == 0) goto LAB_0358c010;
                                if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_0358bfac;
                                lVar12 = lVar12 + (long)(int)uVar10 * 0x38;
                                plVar18 = *(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8)
                                          + 2;
                                uStack_1b8 = *(undefined8 *)(lVar12 + 0x38);
                                uStack_1c0 = *(undefined8 *)(lVar12 + 0x30);
                                uStack_1a8 = *(undefined8 *)(lVar12 + 0x48);
                                uStack_1b0 = *(undefined8 *)(lVar12 + 0x40);
                                uStack_1a0 = *(undefined8 *)(lVar12 + 0x50);
                                uStack_1c8 = *(undefined8 *)(lVar12 + 0x28);
                                uStack_1d0 = *(undefined8 *)(lVar12 + 0x20);
                                puVar15 = &uStack_1d0;
                              }
                              else {
                                *(undefined8 *)(param_1 + 0x118) = uStack_38;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          (param_1 + 0x118);
                                uVar26 = uStack_30;
                                uVar16 = *(undefined8 *)(param_1 + 0x118);
                                lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                }
                                uVar10 = FUN_03557fec(uVar16,uVar26,*(long *)(lVar12 + 0xb8),
                                                      *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),
                                                      0);
                                *(uint *)(param_1 + 0x120) = uVar10;
                                lVar12 = **(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8)
                                ;
                                if (lVar12 == 0) goto LAB_0358c010;
                                if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_0358bfac;
                                lVar12 = lVar12 + (long)(int)uVar10 * 0x38;
                                plVar18 = *(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8)
                                          + 2;
                                uStack_178 = *(undefined8 *)(lVar12 + 0x38);
                                uStack_180 = *(undefined8 *)(lVar12 + 0x30);
                                uStack_168 = *(undefined8 *)(lVar12 + 0x48);
                                uStack_170 = *(undefined8 *)(lVar12 + 0x40);
                                uStack_160 = *(undefined8 *)(lVar12 + 0x50);
                                uStack_188 = *(undefined8 *)(lVar12 + 0x28);
                                uStack_190 = *(undefined8 *)(lVar12 + 0x20);
                                puVar15 = &uStack_190;
                              }
                            }
                            FUN_0209ad50(plVar18,puVar15,
                                         *(undefined8 *)QFSW_QC_QuantumMacros_<>c_TypeInfo);
                            lVar12 = param_1 + 0x100;
                            *(ulong *)(param_1 + 0x100) = uStack_30;
LAB_035883e4:
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                      (lVar12);
                            goto LAB_035870ec;
                          }
                          if (uVar10 != 0x79d7) {
                            if (uVar10 == 0x7fe9) goto LAB_03589000;
                            break;
                          }
                        }
                        else {
                          if (0xabd7 < (int)uVar10) {
                            if (uVar10 == 0xb1e9) {
LAB_03589000:
                              if (*(int *)(lVar12 + 0xe0) == 0) {
                                lVar12 = thunk_FUN_01a58e78();
                                lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                                lVar21 = *(long *)(lVar17 + 0x88);
                                if (lVar21 == 0) goto LAB_0358c010;
                              }
                              if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                              uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                              fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar17 + 0x80),
                                                           *(undefined4 *)(lVar21 + 0x2c),
                                                           *(undefined4 *)(lVar21 + 0x30),
                                                           &uStack_2d0);
                              if (fVar28 != -32768.0) {
                                lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                }
                                lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x80);
                                if (lVar17 == 0) goto LAB_0358c010;
                                if (*(uint *)(lVar17 + 0x18) < 6) goto LAB_0358bfac;
                                if (*(short *)(lVar17 + 0x2a) == 0x2b) {
LAB_035890f8:
                                  fVar28 = fVar28 + *(float *)(param_1 + 0x1e4);
                                  *(float *)(param_1 + 0x1e8) = fVar28;
                                  uStack_2d0 = CONCAT44(uStack_2d0._4_4_,fVar28);
                                }
                                else {
                                  if (*(int *)(lVar12 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                    lVar17 = *(long *)(*(long *)(*(long *)
                                                  OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x80);
                                    if (lVar17 == 0) goto LAB_0358c010;
                                  }
                                  if (*(uint *)(lVar17 + 0x18) < 6) goto LAB_0358bfac;
                                  if (*(short *)(lVar17 + 0x2a) == 0x2d) goto LAB_035890f8;
                                  *(float *)(param_1 + 0x1e8) = fVar28;
                                  uStack_2d0 = CONCAT44(uStack_2d0._4_4_,fVar28);
                                }
                                plVar18 = (long *)(param_1 + 0x1f0);
                                uVar16 = *(undefined8 *)
                                          QFSW_QC_QuantumConsoleProcessor_<CreateCommandOverloads>d__33_TypeInfo
                                ;
                                goto LAB_0358b3cc;
                              }
                            }
                            else {
                              if (uVar10 == 0x2282e) {
LAB_03589e8c:
                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8)
                                  ;
                                }
                                FUN_0209afdc(lVar17 + 0x10,&uStack_2d0,
                                             *(undefined8 *)
                                              UnityEngine_UIElements_RadioButtonGroup_UxmlFactory_TypeInfo
                                            );
                                *(undefined8 *)(param_1 + 0x100) = uStack_2c8;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          (param_1 + 0x100);
                                *(undefined8 *)(param_1 + 0x118) = uStack_2b8;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          (param_1 + 0x118,uStack_2b8);
                                *(undefined4 *)(param_1 + 0x120) = (undefined4)uStack_2d0;
                                goto LAB_035870ec;
                              }
                              uVar22 = 0x2ef4;
LAB_0358776c:
                              if (uVar10 == (uVar22 | 0x20000)) {
                                if ((*(byte *)(param_1 + 0x259) >> 1 & 1) == 0) {
                                  FUN_0209afdc(param_1 + 0x550,&uStack_2d0,
                                               *(undefined8 *)
                                                UnityEngine_UIElements_RadioButton_UxmlFactory_TypeInfo
                                              );
                                  cVar8 = UnityEngine_Light__set_cookieSize(param_1 + 0x260,0x200,0)
                                  ;
                                  if (cVar8 == '\0') {
                                    uVar10 = *(uint *)(param_1 + 0x25c) & 0xfffffdff;
                                    goto LAB_03589864;
                                  }
                                }
                                goto LAB_035870ec;
                              }
                            }
                            break;
                          }
                          if (uVar10 == 0xabc1) goto LAB_035898f0;
                          if (uVar10 != 0xabd7) break;
                        }
                        uVar22 = 1;
                        if (*(int *)(param_1 + 0x2e0) == 5) {
                          *(undefined4 *)(param_1 + 0x4d8) = 0;
                          *(int *)(param_1 + 0x4b0) = *(int *)(param_1 + 0x4b0) + 1;
                          *(float *)(param_1 + 0x640) =
                               *(float *)(param_1 + 0x408) + 0.0 + *(float *)(param_1 + 0x40c);
                          *(undefined1 *)(param_1 + 0x33c) = 1;
                        }
                        goto LAB_0358c0b8;
                      }
                      if (0x691282 < (int)uVar10) {
                        if ((int)uVar10 < 0x3434823) {
                          if ((int)uVar10 < 0x765e9b) {
                            if ((int)uVar10 < 0x719366) {
                              if ((int)uVar10 < 0x6afe3e) {
                                if (uVar10 == 0x6a5e93) goto LAB_03589668;
                                if (uVar10 == 0x6afe3d) goto LAB_03589280;
                                break;
                              }
                              if (uVar10 == 0x6ba308) {
LAB_0358a458:
                                *(undefined4 *)(param_1 + 0x2b0) = 0;
                                goto LAB_035870ec;
                              }
                              if (uVar10 != 0x6ccb9a) {
                                if (uVar10 == 0x719365) goto LAB_03587d30;
                                break;
                              }
                            }
                            else {
                              if ((int)uVar10 < 0x73f194) {
                                if (uVar10 == 0x72a582) goto LAB_03589990;
                                if (uVar10 == 0x73f193) {
LAB_03589668:
                                  FUN_0209afdc(param_1 + 0x410,&uStack_2d0,
                                               *(undefined8 *)
                                                RengeGames_HealthBars_RadialSegmentedHealthBar_<UpdateShader>d__333_TypeInfo
                                              );
                                  *(undefined4 *)(param_1 + 0x40c) = (undefined4)uStack_2d0;
                                  goto LAB_035870ec;
                                }
                                break;
                              }
                              if (uVar10 == 0x74913d) {
LAB_03589280:
                                *(undefined8 *)(param_1 + 0x350) = 0;
                                goto LAB_035870ec;
                              }
                              if (uVar10 == 0x753608) goto LAB_0358a458;
                              if (uVar10 != 0x765e9a) break;
                            }
LAB_0358912c:
                            *(undefined1 *)(param_1 + 0x474) = 0;
                            goto LAB_035870ec;
                          }
                          if (0xe6a57a < (int)uVar10) {
                            if ((int)uVar10 < 0x2d9fc44) {
                              if (uVar10 == 0xf4aac9) goto LAB_03589704;
                              if (uVar10 == 0x2d9fc43) goto LAB_035881fc;
                              break;
                            }
                            if (uVar10 != 0x3004302) {
                              if (uVar10 == 0x31d0163) goto LAB_035881fc;
                              if (uVar10 != 0x3434822) break;
                            }
                            *(undefined4 *)(param_1 + 0x61c) = 0;
                            goto LAB_035870ec;
                          }
                          if ((int)uVar10 < 0xa3a05b) {
                            if (uVar10 != 0x8b5eea) {
                              uVar22 = 0xa3a05a;
LAB_03588c60:
                              if (uVar10 == uVar22) {
                                uVar22 = 1;
                                *(undefined1 *)(param_1 + 0x430) = 1;
                                goto LAB_0358c0b8;
                              }
                              break;
                            }
                          }
                          else {
                            if (uVar10 == 0xb1a5a9) {
LAB_03589704:
                              if (*(int *)(lVar12 + 0xe0) == 0) {
                                lVar12 = thunk_FUN_01a58e78();
                                lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                                lVar21 = *(long *)(lVar17 + 0x88);
                                if (lVar21 == 0) goto LAB_0358c010;
                              }
                              if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                              uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                              fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar17 + 0x80),
                                                           *(undefined4 *)(lVar21 + 0x2c),
                                                           *(undefined4 *)(lVar21 + 0x30),
                                                           &uStack_2d0);
                              if (fVar28 != -32768.0) {
                                fVar31 = DAT_00d389a8;
                                if (*(char *)(param_1 + 0x305) != '\0') {
                                  fVar31 = 1.0;
                                }
                                *(float *)(param_1 + 0x61c) = fVar28 * fVar31;
                                goto LAB_035870ec;
                              }
                              break;
                            }
                            if (uVar10 != 0xce640a) {
                              uVar22 = 0xe6a57a;
                              goto LAB_03588c60;
                            }
                          }
LAB_03588c78:
                          uVar16 = 0x10;
                          uVar10 = *(uint *)(param_1 + 0x25c) | 0x10;
                          goto LAB_03589e54;
                        }
                        if (0x1eaf47a1 < (int)uVar10) {
                          if ((int)uVar10 < 0x2e9af08b) {
                            if ((int)uVar10 < 0x21c6f46b) {
                              if (uVar10 != 0x20d7f9c8) {
                                uVar22 = 0x21c6f46a;
LAB_03588a88:
                                if (uVar10 == uVar22) goto LAB_03588c78;
                                break;
                              }
                            }
                            else {
                              if (uVar10 == 0x2b8343c1) goto LAB_03589e40;
                              if (uVar10 != 0x2dabf5e8) {
                                uVar22 = 0x2e9af08a;
                                goto LAB_03588a88;
                              }
                            }
                            uVar16 = 0x20;
                            uVar10 = *(uint *)(param_1 + 0x25c) | 0x20;
LAB_03589e54:
                            *(uint *)(param_1 + 0x25c) = uVar10;
                            FUN_035a050c(param_1 + 0x260,uVar16,0);
                            goto LAB_035870ec;
                          }
                          if ((int)uVar10 < 0x421fe49e) {
                            if (uVar10 == 0x419bc966) {
LAB_0358a464:
                              if (*(int *)(lVar12 + 0xe0) == 0) {
                                lVar12 = thunk_FUN_01a58e78();
                                lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                                lVar21 = *(long *)(lVar17 + 0x88);
                                if (lVar21 == 0) goto LAB_0358c010;
                              }
                              if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                              uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                              fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar17 + 0x80),
                                                           *(undefined4 *)(lVar21 + 0x2c),
                                                           *(undefined4 *)(lVar21 + 0x30),
                                                           &uStack_2d0);
                              if (fVar28 != -32768.0) {
                                fVar31 = DAT_00d389a8;
                                if (*(char *)(param_1 + 0x305) != '\0') {
                                  fVar31 = 1.0;
                                }
                                fVar28 = fVar28 * fVar31;
                                if (fVar28 < 0.0) {
                                  fVar28 = 0.0;
                                }
                                *(float *)(param_1 + 0x350) = fVar28;
                                goto LAB_035870ec;
                              }
                            }
                            else {
                              if (uVar10 == 0x421f5578) goto LAB_03589c04;
                              uVar22 = 0x421fe49d;
UnityEngine_Graphics__DrawTexture:
                              if (uVar10 == uVar22) {
                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                  lVar12 = thunk_FUN_01a58e78();
                                  lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8)
                                  ;
                                  lVar21 = *(long *)(lVar17 + 0x88);
                                  if (lVar21 == 0) goto LAB_0358c010;
                                }
                                if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                                uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                                fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar17 + 0x80),
                                                             *(undefined4 *)(lVar21 + 0x2c),
                                                             *(undefined4 *)(lVar21 + 0x30),
                                                             &uStack_2d0);
                                if (fVar28 != -32768.0) {
                                  fVar31 = DAT_00d389a8;
                                  if (*(char *)(param_1 + 0x305) != '\0') {
                                    fVar31 = 1.0;
                                  }
                                  *(float *)(param_1 + 0x408) = fVar28 * fVar31;
                                  *(float *)(param_1 + 0x640) =
                                       *(float *)(param_1 + 0x640) + fVar28 * fVar31;
                                  goto LAB_035870ec;
                                }
                              }
                            }
                          }
                          else {
                            if (uVar10 == 0x71174431) {
LAB_03589f18:
                              *(undefined4 *)(param_1 + 0x2c0) = 0xc6fffe00;
                              goto LAB_035870ec;
                            }
                            if (uVar10 == 0x7117d356) {
LAB_03589f2c:
                              *(undefined4 *)(param_1 + 0x408) = 0;
                              goto LAB_035870ec;
                            }
                            uVar22 = 0x77eef5be;
FUN_03587930:
                            if (uVar10 == uVar22) {
                              if (*(int *)(lVar12 + 0xe0) == 0) {
                                lVar12 = thunk_FUN_01a58e78();
                                lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                                lVar21 = *(long *)(lVar17 + 0x88);
                                if (lVar21 == 0) goto LAB_0358c010;
                              }
                              if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                              uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                              fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar17 + 0x80),
                                                           *(undefined4 *)(lVar21 + 0x2c),
                                                           *(undefined4 *)(lVar21 + 0x30),
                                                           &uStack_2d0);
                              if (fVar28 != -32768.0) {
                                iVar11 = -0x80000000;
                                if (fVar28 != INFINITY) {
                                  iVar11 = (int)fVar28;
                                }
                                uStack_b8 = CONCAT44(iVar11,(int)uStack_b8);
                                if (iVar11 < 0x191) {
                                  if (iVar11 < 0xc9) {
                                    if ((iVar11 == 100) || (iVar11 == 200)) goto LAB_0358b384;
                                  }
                                  else if ((iVar11 == 300) || (iVar11 == 400)) goto LAB_0358b384;
                                }
                                else if (iVar11 < 0x259) {
                                  if ((iVar11 == 500) || (iVar11 == 600)) goto LAB_0358b384;
                                }
                                else if ((iVar11 == 700) || ((iVar11 == 800 || (iVar11 == 900)))) {
LAB_0358b384:
                                  *(int *)(param_1 + 0x214) = iVar11;
                                }
                                uVar10 = *(uint *)(param_1 + 0x214);
                                plVar18 = (long *)(param_1 + 0x218);
                                puVar15 = (undefined8 *)QFSW_QC_QuantumParser_<>c_TypeInfo;
LAB_0358b3c4:
                                uVar16 = *puVar15;
LAB_0358b3c8:
                                uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar10);
LAB_0358b3cc:
                                puVar14 = &uStack_2d0;
                                goto LAB_035870e8;
                              }
                            }
                          }
                          break;
                        }
                        if (0x14495107 < (int)uVar10) {
                          if ((int)uVar10 < 0x161e7508) {
                            if (uVar10 != 0x147b2766) {
                              uVar22 = 0x161e7507;
LAB_035883b4:
                              if (uVar10 == uVar22) {
                                FUN_0209afdc(param_1 + 0x588,&uStack_2d0,
                                             *(undefined8 *)
                                              Mono_CSharp_Linq_QueryBlock_TransparentParameter_TypeInfo
                                            );
                                lVar12 = param_1 + 0x580;
                                *(ulong *)(param_1 + 0x580) = uStack_2d0;
                                goto LAB_035883e4;
                              }
                              break;
                            }
                          }
                          else if (uVar10 != 0x16504b66) {
                            if (uVar10 == 0x1b40b577) goto LAB_03589e0c;
                            if (uVar10 == 0x1eaf47a1) {
LAB_03589e40:
                              uVar16 = 8;
                              uVar10 = *(uint *)(param_1 + 0x25c) | 8;
                              goto LAB_03589e54;
                            }
                            break;
                          }
                          if (*(int *)(lVar12 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                          }
                          FUN_0209afdc(lVar17 + 0x10,&uStack_2d0,
                                       *(undefined8 *)
                                        UnityEngine_UIElements_RadioButtonGroup_UxmlFactory_TypeInfo
                                      );
                          *(undefined8 *)(param_1 + 0x118) = uStack_2b8;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (param_1 + 0x118);
                          *(undefined4 *)(param_1 + 0x120) = (undefined4)uStack_2d0;
                          goto LAB_035870ec;
                        }
                        if ((int)uVar10 < 0x454d9f8) {
                          if (uVar10 == 0x4230398) goto LAB_03589c9c;
                          if (uVar10 != 0x454d9f7) break;
                        }
                        else {
                          if (uVar10 == 0x5f82798) {
LAB_03589c9c:
                            if (*(int *)(lVar12 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              lVar21 = *(long *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo +
                                                          0xb8) + 0x88);
                              if (lVar21 == 0) goto LAB_0358c010;
                            }
                            if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                            uVar9 = *(undefined4 *)(lVar21 + 0x24);
                            uVar26 = FUN_03557dc8(uVar9,&uStack_40,0);
                            uVar16 = uStack_40;
                            puVar6 = PTR_DAT_03cbdf88;
                            if ((uVar26 & 1) == 0) {
                              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              uVar26 = FUN_036d35a8(uVar16,0,0);
                              if ((uVar26 & 1) != 0) {
                                uVar16 = FUN_0359785c(0);
                                lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78(lVar12);
                                  lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                }
                                lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                                if (lVar17 == 0) goto LAB_0358c010;
                                if (*(int *)(lVar17 + 0x18) == 0) goto LAB_0358bfac;
                                uVar24 = FUN_025c65fc(0,*(undefined8 *)
                                                         (*(long *)(lVar12 + 0xb8) + 0x80),
                                                      *(undefined4 *)(lVar17 + 0x2c),
                                                      *(undefined4 *)(lVar17 + 0x30),0);
                                uVar16 = FUN_025b1328(uVar16,uVar24,0);
                                uStack_40 = FUN_01fe050c(uVar16,*(undefined8 *)
                                                                                                                                  
                                                  Crosstales_BWF_Manager_PunctuationManager_<getAllAsync>d__27_TypeInfo
                                                  );
                              }
                              uVar16 = uStack_40;
                              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              uVar26 = FUN_036d35a8(uVar16,0,0);
                              if ((uVar26 & 1) != 0) break;
                              FUN_03557b90(uVar9,uStack_40,0);
                            }
                            *(undefined8 *)(param_1 + 0x580) = uStack_40;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                      (param_1 + 0x580);
                            uVar10 = 1;
                            *(undefined1 *)(param_1 + 0x5b0) = 0;
                            plVar18 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            goto LAB_0358abbc;
                          }
                          if (uVar10 != 0x629fdf7) {
                            uVar22 = 0x14495107;
                            goto LAB_035883b4;
                          }
                        }
                        if (*(int *)(lVar12 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          lVar21 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                          if (lVar21 == 0) goto LAB_0358c010;
                        }
                        if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                        iVar11 = *(int *)(lVar21 + 0x24);
                        if ((iVar11 == 0x2d93756b) || (iVar11 == 0x1f31f54b)) {
                          if (*(int *)(lVar12 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          }
                          lVar12 = **(long **)(lVar12 + 0xb8);
                          if (lVar12 == 0) goto LAB_0358c010;
                          if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0358bfac;
                          *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(lVar12 + 0x38);
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (param_1 + 0x118);
                          *(undefined4 *)(param_1 + 0x120) = 0;
                          lVar12 = **(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                          if (lVar12 == 0) goto LAB_0358c010;
                          if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0358bfac;
                          plVar18 = *(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 2;
                          uStack_208 = *(undefined8 *)(lVar12 + 0x28);
                          uStack_210 = *(ulong *)(lVar12 + 0x20);
                          uStack_1f8 = *(undefined8 *)(lVar12 + 0x38);
                          uStack_200 = *(undefined8 *)(lVar12 + 0x30);
                          uStack_1e0 = *(undefined8 *)(lVar12 + 0x50);
                          uStack_1e8 = *(undefined8 *)(lVar12 + 0x48);
                          uStack_1f0 = *(undefined8 *)(lVar12 + 0x40);
                          uVar16 = *(undefined8 *)QFSW_QC_QuantumMacros_<>c_TypeInfo;
                          puVar14 = &uStack_210;
                          goto LAB_035870e8;
                        }
                        uVar26 = FUN_03557e7c(iVar11,&uStack_38,0);
                        if ((uVar26 & 1) != 0) {
                          *(undefined8 *)(param_1 + 0x118) = uStack_38;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (param_1 + 0x118);
                          uVar16 = *(undefined8 *)(param_1 + 0x118);
                          uVar24 = *(undefined8 *)(param_1 + 0x100);
                          lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          if (*(int *)(lVar12 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          }
                          uVar10 = FUN_03557fec(uVar16,uVar24,*(long *)(lVar12 + 0xb8),
                                                *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),0);
                          *(uint *)(param_1 + 0x120) = uVar10;
                          lVar12 = **(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                          if (lVar12 == 0) goto LAB_0358c010;
                          if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_0358bfac;
                          lVar12 = lVar12 + (long)(int)uVar10 * 0x38;
                          uStack_238 = *(undefined8 *)(lVar12 + 0x38);
                          uStack_240 = *(undefined8 *)(lVar12 + 0x30);
                          uStack_228 = *(undefined8 *)(lVar12 + 0x48);
                          uStack_230 = *(undefined8 *)(lVar12 + 0x40);
                          uStack_220 = *(undefined8 *)(lVar12 + 0x50);
                          uStack_248 = *(undefined8 *)(lVar12 + 0x28);
                          uStack_250 = *(ulong *)(lVar12 + 0x20);
                          uVar16 = *(undefined8 *)QFSW_QC_QuantumMacros_<>c_TypeInfo;
                          plVar18 = *(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 2;
                          puVar14 = &uStack_250;
                          goto LAB_035870e8;
                        }
                        uVar16 = FUN_0359766c(0);
                        lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                        if (*(int *)(lVar12 + 0xe0) == 0) {
                          thunk_FUN_01a58e78(lVar12);
                          lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                        }
                        lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                        if (lVar17 == 0) goto LAB_0358c010;
                        if (*(int *)(lVar17 + 0x18) == 0) goto LAB_0358bfac;
                        uVar24 = FUN_025c65fc(0,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x80),
                                              *(undefined4 *)(lVar17 + 0x2c),
                                              *(undefined4 *)(lVar17 + 0x30),0);
                        uVar16 = FUN_025b1328(uVar16,uVar24,0);
                        uVar16 = FUN_01fe050c(uVar16,*(undefined8 *)PTR_DAT_03cbe248);
                        uStack_38 = uVar16;
                        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                        }
                        uVar26 = FUN_036d35a8(uVar16,0,0);
                        if ((uVar26 & 1) == 0) {
                          FUN_03557af0(iVar11,uStack_38,0);
                          *(undefined8 *)(param_1 + 0x118) = uStack_38;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (param_1 + 0x118);
                          uVar16 = *(undefined8 *)(param_1 + 0x118);
                          uVar24 = *(undefined8 *)(param_1 + 0x100);
                          lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          if (*(int *)(lVar12 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          }
                          uVar10 = FUN_03557fec(uVar16,uVar24,*(long *)(lVar12 + 0xb8),
                                                *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),0);
                          *(uint *)(param_1 + 0x120) = uVar10;
                          lVar12 = **(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                          if (lVar12 == 0) goto LAB_0358c010;
                          if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_0358bfac;
                          lVar12 = lVar12 + (long)(int)uVar10 * 0x38;
                          uStack_278 = *(undefined8 *)(lVar12 + 0x38);
                          uStack_280 = *(undefined8 *)(lVar12 + 0x30);
                          uStack_268 = *(undefined8 *)(lVar12 + 0x48);
                          uStack_270 = *(undefined8 *)(lVar12 + 0x40);
                          uStack_260 = *(undefined8 *)(lVar12 + 0x50);
                          uStack_288 = *(undefined8 *)(lVar12 + 0x28);
                          uStack_290 = *(ulong *)(lVar12 + 0x20);
                          uVar16 = *(undefined8 *)QFSW_QC_QuantumMacros_<>c_TypeInfo;
                          plVar18 = *(long **)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 2;
                          puVar14 = &uStack_290;
                          goto LAB_035870e8;
                        }
                        break;
                      }
                      if (0x105b0c < (int)uVar10) {
                        if ((int)uVar10 < 0x18b5de) {
                          if ((int)uVar10 < 0x14b2e4) {
                            if ((int)uVar10 < 0x10e5b0) {
                              if (uVar10 != 0x10decb) {
                                uVar22 = 0x10e5af;
                                goto LAB_03589120;
                              }
                              goto LAB_0358912c;
                            }
                            if (uVar10 == 0x110d27) goto LAB_0358a2d0;
                            if (uVar10 == 0x13a0c6) goto LAB_03588ae0;
                            if (uVar10 == 0x14b2e3) goto LAB_03587be8;
                            break;
                          }
                          if ((int)uVar10 < 0x169e9f) {
                            if (uVar10 != 0x15fef4) {
                              uVar22 = 0x169e9e;
                              goto LAB_03588420;
                            }
LAB_03589900:
                            if (*(int *)(lVar12 + 0xe0) == 0) {
                              lVar12 = thunk_FUN_01a58e78();
                              lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                              lVar21 = *(long *)(lVar17 + 0x88);
                              if (lVar21 == 0) goto LAB_0358c010;
                            }
                            if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                            uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                            fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar17 + 0x80),
                                                         *(undefined4 *)(lVar21 + 0x2c),
                                                         *(undefined4 *)(lVar21 + 0x30),&uStack_2d0)
                            ;
                            if (fVar28 != -32768.0) {
                              fVar31 = DAT_00d389a8;
                              if (*(char *)(param_1 + 0x305) != '\0') {
                                fVar31 = 1.0;
                              }
                              *(float *)(param_1 + 0x40c) = fVar28 * fVar31;
                              uStack_2d0 = CONCAT44(uStack_2d0._4_4_,fVar28 * fVar31);
                              FUN_0209ad50(param_1 + 0x410,&uStack_2d0,
                                           *(undefined8 *)
                                            QFSW_QC_QuantumConsoleProcessor_<CreateCommandOverloads>d__33_TypeInfo
                                          );
                              *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_1 + 0x40c);
                              goto LAB_035870ec;
                            }
                            break;
                          }
                          if (uVar10 == 0x174369) goto LAB_03589690;
                          if (uVar10 == 0x186bfb) goto LAB_035880c8;
                          if (uVar10 != 0x18b5dd) break;
                        }
                        else {
                          if ((int)uVar10 < 0x20319f) {
                            if ((int)uVar10 < 0x1d33c7) {
                              if ((uVar10 != 0x1ab5ba) && (uVar10 == 0x1d33c6)) {
LAB_03588ae0:
                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar21 = *(long *)(*(long *)(*(long *)
                                                  OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x88);
                                  if (lVar21 == 0) goto LAB_0358c010;
                                }
                                if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                                uStack_4c = *(undefined4 *)(lVar21 + 0x24);
                                if (*(char *)(param_1 + 0x431) != '\0') {
                                  uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uStack_4c);
                                  FUN_0209ad50(param_1 + 0x5f8,&uStack_2d0,
                                               *(undefined8 *)
                                                QFSW_QC_QuantumConsoleProcessor_<>c__DisplayClass37_0_TypeInfo
                                              );
                                  uVar16 = FUN_0276793c(&uStack_4c,0);
                                  uVar24 = FUN_0276793c(param_1 + 0x494,0);
                                  uVar16 = FUN_025be45c(*(undefined8 *)
                                                                                                                  
                                                  RootMotion_FinalIK_RagdollUtility_Child_TypeInfo,
                                                  uVar16,*(undefined8 *)
                                                                                                                    
                                                  RootMotion_FinalIK_RagdollUtility_Rigidbone_TypeInfo
                                                  ,uVar24,0);
                                  if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                                  }
                                  FUN_0367a6ec(uVar16,0);
                                }
                                goto LAB_035870ec;
                              }
                            }
                            else if (uVar10 == 0x1e45e3) {
LAB_03587be8:
                              if (*(int *)(lVar12 + 0xe0) == 0) {
                                lVar12 = thunk_FUN_01a58e78();
                                lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                                lVar21 = *(long *)(lVar17 + 0x88);
                                if (lVar21 == 0) goto LAB_0358c010;
                              }
                              if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                              uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                              fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar17 + 0x80),
                                                           *(undefined4 *)(lVar21 + 0x2c),
                                                           *(undefined4 *)(lVar21 + 0x30),
                                                           &uStack_2d0);
                              if (fVar28 != -32768.0) {
                                fVar31 = DAT_00d389a8;
                                if (*(char *)(param_1 + 0x305) != '\0') {
                                  fVar31 = 1.0;
                                }
                                *(float *)(param_1 + 0x2ac) = fVar28 * fVar31;
                                goto LAB_035870ec;
                              }
                            }
                            else {
                              if (uVar10 == 0x1f91f4) goto LAB_03589900;
                              uVar22 = 0x20319e;
LAB_03588420:
                              if (uVar10 == uVar22) {
                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  lVar17 = *(long *)(lVar12 + 0xb8);
                                  lVar21 = *(long *)(lVar17 + 0x88);
                                  if (lVar21 == 0) goto LAB_0358c010;
                                }
                                fVar28 = DAT_00d389a8;
                                if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                                if (*(int *)(lVar21 + 0x28) == 1) {
                                  if (*(int *)(lVar12 + 0xe0) == 0) {
                                    lVar12 = thunk_FUN_01a58e78();
                                    lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo +
                                                      0xb8);
                                    lVar21 = *(long *)(lVar17 + 0x88);
                                    if (lVar21 == 0) goto LAB_0358c010;
                                  }
                                  if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                                  uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                                  fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar17 + 0x80)
                                                               ,*(undefined4 *)(lVar21 + 0x2c),
                                                               *(undefined4 *)(lVar21 + 0x30),
                                                               &uStack_2d0);
                                  if (fVar28 != -32768.0) {
                                    fVar31 = DAT_00d389a8;
                                    if (*(char *)(param_1 + 0x305) != '\0') {
                                      fVar31 = 1.0;
                                    }
                                    fVar29 = fVar28 * fVar31;
                                    if (fVar28 * fVar31 < 0.0) {
                                      fVar29 = 0.0;
                                    }
                                    *(float *)(param_1 + 0x350) = fVar29;
LAB_0358b7c4:
                                    *(float *)(param_1 + 0x354) = fVar29;
                                    goto LAB_035870ec;
                                  }
                                }
                                else if (*(int *)(lVar21 + 0x28) == 0) {
                                  uVar10 = 1;
                                  fVar31 = 0.0;
                                  goto LAB_03588494;
                                }
                              }
                            }
                            break;
                          }
                          if ((int)uVar10 < 0x21fefc) {
                            if (uVar10 == 0x20d669) {
LAB_03589690:
                              if (*(int *)(lVar12 + 0xe0) == 0) {
                                lVar12 = thunk_FUN_01a58e78();
                                lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                                lVar21 = *(long *)(lVar17 + 0x88);
                                if (lVar21 == 0) goto LAB_0358c010;
                              }
                              if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                              uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                              fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar17 + 0x80),
                                                           *(undefined4 *)(lVar21 + 0x2c),
                                                           *(undefined4 *)(lVar21 + 0x30),
                                                           &uStack_2d0);
                              if (fVar28 != -32768.0) {
                                fVar31 = DAT_00d389a8;
                                if (*(char *)(param_1 + 0x305) != '\0') {
                                  fVar31 = 1.0;
                                }
                                *(float *)(param_1 + 0x2b0) = fVar28 * fVar31;
                                goto LAB_035870ec;
                              }
                            }
                            else if (uVar10 == 0x21fefb) {
LAB_035880c8:
                              if (*(int *)(lVar12 + 0xe0) == 0) {
                                lVar12 = thunk_FUN_01a58e78();
                                lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                                lVar21 = *(long *)(lVar17 + 0x88);
                                if (lVar21 == 0) goto LAB_0358c010;
                              }
                              if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                              uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                              fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar17 + 0x80),
                                                           *(undefined4 *)(lVar21 + 0x2c),
                                                           *(undefined4 *)(lVar21 + 0x30),
                                                           &uStack_2d0);
                              if (fVar28 != -32768.0) {
                                if (DAT_0411f172 == '\0') {
                                  FUN_01ab69ac(PTR_DAT_03cbded8);
                                  DAT_0411f172 = '\x01';
                                }
                                uVar13 = 0;
                                uVar32 = (ulong)(uint)(fVar28 * DAT_00d38a10);
                                puVar19 = *(undefined4 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                                uVar9 = *puVar19;
                                uVar34 = puVar19[1];
                                uVar33 = puVar19[2];
                                uVar26 = FUN_036c0af4(0,0,uVar32,0);
                                if (DAT_0411f16a == '\0') {
                                  FUN_01ab69ac(PTR_DAT_03cbded8);
                                  DAT_0411f16a = '\x01';
                                }
LAB_0358939c:
                                FUN_036bc7e0(&iStack_310,uVar9,uVar34,uVar33,uVar26,uVar13,uVar32,
                                             in_d3,0);
                                uVar22 = 1;
                                *(undefined8 *)(param_1 + 0x45c) = uStack_2e8;
                                *(undefined8 *)(param_1 + 0x454) = uStack_2f0;
                                *(undefined8 *)(param_1 + 0x46c) = uStack_2d8;
                                *(undefined8 *)(param_1 + 0x464) = uStack_2e0;
                                *(undefined8 *)(param_1 + 0x43c) = uStack_308;
                                *(ulong *)(param_1 + 0x434) = CONCAT44(uStack_30c,iStack_310);
                                *(undefined8 *)(param_1 + 0x44c) = uStack_2f8;
                                *(undefined8 *)(param_1 + 0x444) = uStack_300;
                                *(undefined1 *)(param_1 + 0x474) = 1;
                                goto LAB_0358c0b8;
                              }
                            }
                            break;
                          }
                          if (uVar10 != 0x2248dd) {
                            if (uVar10 == 0x680065) {
LAB_03587d30:
                              if (*(char *)(param_1 + 0x431) != '\0') {
                                FUN_0209bef8(param_1 + 0x5f8,(long)&uStack_b8 + 4,
                                             *(undefined8 *)QFSW_QC_QuantumPreprocessor_<>c_TypeInfo
                                            );
                                uVar16 = FUN_0276793c((long)&uStack_b8 + 4,0);
                                uStack_b8 = CONCAT44(*(int *)(param_1 + 0x494) + -1,(int)uStack_b8);
                                uVar24 = FUN_0276793c((long)&uStack_b8 + 4,0);
                                uVar16 = FUN_025be45c(*(undefined8 *)
                                                                                                              
                                                  RootMotion_FinalIK_RagdollUtility_Child_TypeInfo,
                                                  uVar16,*(undefined8 *)
                                                                                                                    
                                                  Unity_Entities_RateUtils_VariableRateManager_TypeInfo
                                                  ,uVar24,0);
                                if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                                }
                                FUN_0367a6ec(uVar16,0);
                              }
                              FUN_0209afdc(param_1 + 0x5f8,&uStack_2d0,
                                           *(undefined8 *)
                                            System_Collections_Queue_QueueEnumerator_TypeInfo);
                              goto LAB_035870ec;
                            }
                            if (uVar10 == 0x691282) {
LAB_03589990:
                              if (*(char *)(param_1 + 0x431) == '\0') goto LAB_035870ec;
                              uVar10 = *(int *)(param_1 + 0x494) - 1;
                              if (0 < *(int *)(param_1 + 0x494)) {
                                fVar28 = *(float *)(param_1 + 0x640) - *(float *)(param_1 + 0x2ac);
                                *(float *)(param_1 + 0x640) = fVar28;
                                if ((*(long *)(param_1 + 0x368) == 0) ||
                                   (lVar12 = *(long *)(*(long *)(param_1 + 0x368) + 0x38),
                                   lVar12 == 0)) goto LAB_0358c010;
                                if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_0358bfac;
                                *(float *)(lVar12 + (ulong)uVar10 * 0x178 + 0x144) = fVar28;
                              }
                              *(undefined4 *)(param_1 + 0x2ac) = 0;
                              goto LAB_035870ec;
                            }
                            break;
                          }
                        }
                        if (*(int *)(lVar12 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          lVar21 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                          if (lVar21 == 0) goto LAB_0358c010;
                        }
                        if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                        iVar11 = *(int *)(lVar21 + 0x24);
                        *(undefined4 *)(param_1 + 0x6a4) = 0xffffffff;
                        if (*(int *)(lVar21 + 0x28) == 0) {
LAB_03587568:
                          puVar6 = PTR_DAT_03cbdf88;
                          uVar16 = *(undefined8 *)(param_1 + 0x1b0);
                          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar26 = FUN_036cee6c(uVar16,0,0);
                          if ((uVar26 & 1) == 0) {
                            uVar16 = *(undefined8 *)(param_1 + 0x690);
                            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar26 = FUN_036cee6c(uVar16,0,0);
                            if ((uVar26 & 1) != 0) {
UnityEngine_HDROutputSettings__get_main:
                              uVar16 = *(undefined8 *)(param_1 + 0x690);
                              goto LAB_0358b9b0;
                            }
                            puVar15 = (undefined8 *)(param_1 + 0x690);
                            uVar16 = *puVar15;
                            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar26 = FUN_036d35a8(uVar16,0,0);
                            if ((uVar26 & 1) != 0) {
                              uVar16 = FUN_035977a8(0);
                              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                                thunk_FUN_01a58e78(*(long *)puVar6);
                              }
                              uVar26 = FUN_036cee6c(uVar16,0,0);
                              if ((uVar26 & 1) == 0) {
                                uVar16 = FUN_01fe050c(*(undefined8 *)
                                                                                                              
                                                  Unity_Entities_RateUtils_FixedRateCatchUpManager_TypeInfo
                                                  ,*(undefined8 *)
                                                                                                        
                                                  Crosstales_BWF_Manager_PunctuationManager_<replaceAllAsync>d__28_TypeInfo
                                                  );
                              }
                              else {
                                uVar16 = FUN_035977a8(0);
                              }
                              *puVar15 = uVar16;
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        (puVar15,uVar16);
                              goto UnityEngine_HDROutputSettings__get_main;
                            }
                          }
                          else {
                            uVar16 = *(undefined8 *)(param_1 + 0x1b0);
LAB_0358b9b0:
                            *(undefined8 *)(param_1 + 0x698) = uVar16;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                      (param_1 + 0x698);
                          }
                          uVar16 = *(undefined8 *)(param_1 + 0x698);
                          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar26 = FUN_036d35a8(uVar16,0,0);
                          if ((uVar26 & 1) != 0) break;
                        }
                        else {
                          if (*(int *)(lVar12 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            lVar21 = *(long *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo +
                                                        0xb8) + 0x88);
                            if (lVar21 == 0) goto LAB_0358c010;
                          }
                          if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                          if (*(int *)(lVar21 + 0x28) == 1) goto LAB_03587568;
                          uVar13 = FUN_03557d14(iVar11,&uStack_48,0);
                          uVar26 = uStack_48;
                          puVar6 = PTR_DAT_03cbdf88;
                          if ((uVar13 & 1) == 0) {
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar26 = FUN_036d35a8(uVar26,0,0);
                            if ((uVar26 & 1) != 0) {
                              lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar12 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              }
                              lVar17 = *(long *)(lVar12 + 0xb8);
                              lVar21 = *(long *)(lVar17 + 0x78);
                              uVar26 = 0;
                              if (lVar21 != 0) {
                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8)
                                  ;
                                }
                                lVar12 = *(long *)(lVar17 + 0x88);
                                if (lVar12 == 0) goto LAB_0358c010;
                                if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0358bfac;
                                uVar16 = FUN_025c65fc(0,*(undefined8 *)(lVar17 + 0x80),
                                                      *(undefined4 *)(lVar12 + 0x2c),
                                                      *(undefined4 *)(lVar12 + 0x30),0);
                                iStack_310 = iVar11;
                                (**(code **)(lVar21 + 0x18))
                                          (*(undefined8 *)(lVar21 + 0x40),&iStack_310,uVar16,
                                           &uStack_2d0,*(undefined8 *)(lVar21 + 0x28));
                                uVar26 = uStack_2d0;
                              }
                              uStack_48 = uVar26;
                              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              uVar26 = FUN_036d35a8(uVar26,0,0);
                              if ((uVar26 & 1) != 0) {
                                uVar16 = FUN_035977c4(0);
                                lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78(lVar12);
                                  lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                }
                                lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                                if (lVar17 == 0) goto LAB_0358c010;
                                if (*(int *)(lVar17 + 0x18) == 0) goto LAB_0358bfac;
                                uVar24 = FUN_025c65fc(0,*(undefined8 *)
                                                         (*(long *)(lVar12 + 0xb8) + 0x80),
                                                      *(undefined4 *)(lVar17 + 0x2c),
                                                      *(undefined4 *)(lVar17 + 0x30),0);
                                uVar16 = FUN_025b1328(uVar16,uVar24,0);
                                uStack_48 = FUN_01fe050c(uVar16,*(undefined8 *)
                                                                                                                                  
                                                  Crosstales_BWF_Manager_PunctuationManager_<replaceAllAsync>d__28_TypeInfo
                                                  );
                              }
                            }
                            uVar26 = uStack_48;
                            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar26 = FUN_036d35a8(uVar26,0,0);
                            if ((uVar26 & 1) != 0) break;
                            FUN_035579d8(iVar11,uStack_48,0);
                          }
                          *(ulong *)(param_1 + 0x698) = uStack_48;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (param_1 + 0x698);
                        }
                        lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                        if (*(int *)(lVar12 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                        }
                        lVar17 = *(long *)(lVar12 + 0xb8);
                        lVar21 = *(long *)(lVar17 + 0x88);
                        if (lVar21 == 0) goto LAB_0358c010;
                        if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                        if (*(int *)(lVar21 + 0x28) == 1) {
                          if (*(int *)(lVar12 + 0xe0) == 0) {
                            lVar12 = thunk_FUN_01a58e78();
                            lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                            lVar21 = *(long *)(lVar17 + 0x88);
                            if (lVar21 == 0) goto LAB_0358c010;
                          }
                          if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                          uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                          fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar17 + 0x80),
                                                       *(undefined4 *)(lVar21 + 0x2c),
                                                       *(undefined4 *)(lVar21 + 0x30),&uStack_2d0);
                          iVar11 = -0x80000000;
                          if (fVar28 != INFINITY) {
                            iVar11 = (int)fVar28;
                          }
                          uVar22 = 0;
                          if (iVar11 == -0x8000) goto LAB_0358c0b8;
                          if ((*(long *)(param_1 + 0x698) == 0) ||
                             (lVar12 = UnityEngine_Material__DisableKeyword
                                                 (*(long *)(param_1 + 0x698),0), lVar12 == 0))
                          goto LAB_0358c010;
                          if (*(int *)(lVar12 + 0x18) + -1 < iVar11) break;
                          *(int *)(param_1 + 0x6a4) = iVar11;
                          lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                        }
                        if (*(int *)(lVar12 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                        }
                        uVar10 = 0;
                        uVar9 = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x68);
                        plVar18 = (long *)(param_1 + 0x698);
                        *(undefined1 *)(param_1 + 0x1b9) = 0;
                        *(undefined4 *)(param_1 + 0x1bc) = uVar9;
                        goto LAB_0358bb18;
                      }
                      if (0x4d122 < (int)uVar10) {
                        if ((int)uVar10 < 0xefced) {
                          if ((int)uVar10 < 0x4e24f) {
                            if ((uVar10 != 0x4d806) && (uVar10 == 0x4e24e)) goto LAB_03588da4;
                            break;
                          }
                          if (uVar10 == 0x4ff7e) goto LAB_03587ef0;
                          if (uVar10 == 0xee556) goto LAB_03589ef0;
                          uVar22 = 0xefcec;
                        }
                        else {
                          if ((int)uVar10 < 0xf8790) {
                            if (uVar10 == 0xf80ab) goto LAB_0358912c;
                            uVar22 = 0xf878f;
LAB_03589120:
                            if (uVar10 == uVar22) goto LAB_035870ec;
                            break;
                          }
                          if (uVar10 == 0xfaf07) {
LAB_0358a2d0:
                            *(undefined4 *)(param_1 + 0x360) = 0xbf800000;
                            goto LAB_035870ec;
                          }
                          if (uVar10 == 0x104376) {
LAB_03589ef0:
                            FUN_0209afdc(param_1 + 0x280,&uStack_2d0,
                                         *(undefined8 *)
                                          Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_TypeInfo
                                        );
                            *(undefined4 *)(param_1 + 0x278) = (undefined4)uStack_2d0;
                            goto LAB_035870ec;
                          }
                          uVar22 = 0x105b0c;
                        }
                        if (uVar10 == uVar22) {
                          FUN_0209afdc(param_1 + 0x4f0,&uStack_2d0,
                                       *(undefined8 *)
                                        System_Linq_Expressions_Interpreter_QuoteInstruction_ExpressionQuoter_TypeInfo
                                      );
                          *(undefined4 *)(param_1 + 0x4ec) = (undefined4)uStack_2d0;
                          goto LAB_035870ec;
                        }
                        break;
                      }
                      if ((int)uVar10 < 0x3a15f) {
                        if (0x37302 < (int)uVar10) {
                          if (uVar10 != 0x379e6) {
                            if (uVar10 == 0x3842e) {
LAB_03588da4:
                              if (*(int *)(lVar12 + 0xe0) == 0) {
                                lVar12 = thunk_FUN_01a58e78();
                                lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                                lVar21 = *(long *)(lVar17 + 0x88);
                                if (lVar21 == 0) goto LAB_0358c010;
                              }
                              if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                              uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                              fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar17 + 0x80),
                                                           *(undefined4 *)(lVar21 + 0x2c),
                                                           *(undefined4 *)(lVar21 + 0x30),
                                                           &uStack_2d0);
                              if (fVar28 != -32768.0) {
                                fVar31 = DAT_00d389a8;
                                if (*(char *)(param_1 + 0x305) != '\0') {
                                  fVar31 = 1.0;
                                }
                                fVar28 = *(float *)(param_1 + 0x640) + fVar28 * fVar31;
                                goto LAB_0358b268;
                              }
                            }
                            else if (uVar10 == 0x3a15e) {
LAB_03587ef0:
                              if (*(int *)(lVar12 + 0xe0) == 0) {
                                lVar12 = thunk_FUN_01a58e78();
                                lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                                lVar21 = *(long *)(lVar17 + 0x88);
                                if (lVar21 == 0) goto LAB_0358c010;
                              }
                              if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                              uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                              fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar17 + 0x80),
                                                           *(undefined4 *)(lVar21 + 0x2c),
                                                           *(undefined4 *)(lVar21 + 0x30),
                                                           &uStack_2d0);
                              if (fVar28 != -32768.0) {
                                fVar31 = DAT_00d389a8;
                                if (*(char *)(param_1 + 0x305) != '\0') {
                                  fVar31 = 1.0;
                                }
                                *(float *)(param_1 + 0x360) = fVar28 * fVar31;
                                goto LAB_035870ec;
                              }
                            }
                          }
                          break;
                        }
                        if (uVar10 != 0x2ef43) {
                          uVar22 = 0x37302;
                          goto LAB_035892b4;
                        }
                      }
                      else {
                        if ((int)uVar10 < 0x4371f) {
                          if (uVar10 != 0x435cd) {
                            uVar22 = 0x4371e;
LAB_0358897c:
                            if (uVar10 == uVar22) {
                              if (*(int *)(lVar12 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                lVar17 = *(long *)(lVar12 + 0xb8);
                                lVar21 = *(long *)(lVar17 + 0x88);
                                if (lVar21 == 0) goto LAB_0358c010;
                              }
                              if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                              if (*(int *)(lVar21 + 0x30) == 3) {
                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                  lVar12 = thunk_FUN_01a58e78();
                                  lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8)
                                  ;
                                }
                                lVar17 = *(long *)(lVar17 + 0x80);
                                if (lVar17 == 0) goto LAB_0358c010;
                                if ((*(uint *)(lVar17 + 0x18) < 8) ||
                                   (*(uint *)(lVar17 + 0x18) == 8)) goto LAB_0358bfac;
                                uVar16 = FUN_03591da0(lVar12,*(undefined2 *)(lVar17 + 0x2e));
                                cVar8 = FUN_03591da0(uVar16,*(undefined2 *)(lVar17 + 0x30));
                                *(char *)(param_1 + 0x4ef) = cVar8 + (char)uVar16 * '\x10';
                                goto LAB_035870ec;
                              }
                            }
                            break;
                          }
LAB_03589b64:
                          if (*(int *)(lVar12 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            lVar21 = *(long *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo +
                                                        0xb8) + 0x88);
                            if (lVar21 == 0) goto LAB_0358c010;
                          }
                          if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                          iVar11 = *(int *)(lVar21 + 0x24);
                          uStack_b8 = CONCAT44(iVar11,(int)uStack_b8);
                          if (iVar11 < -0x1b4fbb34) {
                            if (iVar11 == -0x1f38ae01) {
                              uVar10 = 8;
                            }
                            else {
                              if (iVar11 != -0x1b4fbb35) break;
                              uVar10 = 2;
                            }
                          }
                          else if (iVar11 == 0x825ec40) {
                            uVar10 = 4;
                          }
                          else if (iVar11 == 0x74b6c44) {
                            uVar10 = 0x10;
                          }
                          else {
                            if (iVar11 != 0x3998db) break;
                            uVar10 = 1;
                          }
                          *(uint *)(param_1 + 0x278) = uVar10;
                          plVar18 = (long *)(param_1 + 0x280);
                          puVar15 = (undefined8 *)
                                    QFSW_QC_QuantumConsoleProcessor_<>c__DisplayClass27_0_TypeInfo;
                          goto LAB_0358b3c4;
                        }
                        if (uVar10 == 0x44760) break;
                        if (uVar10 != 0x44d63) {
                          uVar22 = 0x4d122;
LAB_035892b4:
                          if (uVar10 == uVar22) {
                            if (*(int *)(lVar12 + 0xe0) == 0) {
                              lVar12 = thunk_FUN_01a58e78();
                              lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                              lVar21 = *(long *)(lVar17 + 0x88);
                              if (lVar21 == 0) goto LAB_0358c010;
                            }
                            if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
                            uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                            fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar17 + 0x80),
                                                         *(undefined4 *)(lVar21 + 0x2c),
                                                         *(undefined4 *)(lVar21 + 0x30),&uStack_2d0)
                            ;
                            if (fVar28 != -32768.0) {
                              if (DAT_0411f172 == '\0') {
                                FUN_01ab69ac(PTR_DAT_03cbded8);
                                DAT_0411f172 = '\x01';
                              }
                              puVar19 = *(undefined4 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                              uVar9 = *puVar19;
                              uVar34 = puVar19[1];
                              uVar33 = puVar19[2];
                              if (DAT_0411f169 == '\0') {
                                FUN_01ab69ac(PTR_DAT_03cbdeb8);
                                DAT_0411f169 = '\x01';
                              }
                              puVar20 = *(uint **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
                              uVar26 = (ulong)*puVar20;
                              uVar13 = (ulong)puVar20[1];
                              uVar32 = (ulong)puVar20[2];
                              in_d3 = (ulong)puVar20[3];
                              goto LAB_0358939c;
                            }
                          }
                          break;
                        }
                      }
                      if (*(int *)(lVar12 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                        lVar17 = *(long *)(lVar12 + 0xb8);
                      }
                      lVar21 = *(long *)(lVar17 + 0x80);
                      if (lVar21 == 0) goto LAB_0358c010;
                      if (*(uint *)(lVar21 + 0x18) < 7) goto LAB_0358bfac;
                      sVar4 = *(short *)(lVar21 + 0x2c);
                      if (*(int *)(lVar12 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                        lVar17 = *(long *)(lVar12 + 0xb8);
                        lVar21 = *(long *)(lVar17 + 0x80);
                      }
                      if (uVar5 == 10 && sVar4 == 0x23) {
                        uVar16 = 10;
LAB_0358b424:
                        uVar9 = FUN_0359237c(lVar12,lVar21,uVar16);
                      }
                      else {
                        if (lVar21 == 0) goto LAB_0358c010;
                        if (*(uint *)(lVar21 + 0x18) < 7) goto LAB_0358bfac;
                        sVar4 = *(short *)(lVar21 + 0x2c);
                        if (*(int *)(lVar12 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          lVar17 = *(long *)(lVar12 + 0xb8);
                          lVar21 = *(long *)(lVar17 + 0x80);
                        }
                        if (uVar5 == 0xb && sVar4 == 0x23) {
                          uVar16 = 0xb;
                          goto LAB_0358b424;
                        }
                        if (lVar21 == 0) goto LAB_0358c010;
                        if (*(uint *)(lVar21 + 0x18) < 7) goto LAB_0358bfac;
                        sVar4 = *(short *)(lVar21 + 0x2c);
                        if (*(int *)(lVar12 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          lVar17 = *(long *)(lVar12 + 0xb8);
                          lVar21 = *(long *)(lVar17 + 0x80);
                        }
                        if (uVar5 == 0xd && sVar4 == 0x23) {
                          uVar16 = 0xd;
                          goto LAB_0358b424;
                        }
                        if (lVar21 == 0) goto LAB_0358c010;
                        if (*(uint *)(lVar21 + 0x18) < 7) goto LAB_0358bfac;
                        sVar4 = *(short *)(lVar21 + 0x2c);
                        if (*(int *)(lVar12 + 0xe0) == 0) {
                          lVar12 = thunk_FUN_01a58e78();
                          lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                        }
                        if (uVar5 == 0xf && sVar4 == 0x23) {
                          lVar21 = *(long *)(lVar17 + 0x80);
                          uVar16 = 0xf;
                          goto LAB_0358b424;
                        }
                        lVar12 = *(long *)(lVar17 + 0x88);
                        if (lVar12 == 0) goto LAB_0358c010;
                        if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0358bfac;
                        iVar11 = *(int *)(lVar12 + 0x24);
                        uStack_b8 = CONCAT44(iVar11,(int)uStack_b8);
                        if (iVar11 < 0x3829ca) {
                          if (iVar11 < -0x232c3b1) {
                            if (iVar11 == -0x3b2cd120) {
                              uVar10 = 0xffe6d8ad;
                            }
                            else {
                              if (iVar11 != -0x232c3b2) break;
                              uVar10 = 0xfff020a0;
                            }
                          }
                          else {
                            if (iVar11 == 0x1e9d3) {
                              uVar9 = 0x3f800000;
                              goto FUN_0358c134;
                            }
                            if (iVar11 == 0x36863e) {
                              uVar9 = 0;
                              uVar34 = 0;
                              goto LAB_0358c148;
                            }
                            if (iVar11 != 0x3829c9) break;
                            uVar10 = 0xff808080;
                          }
LAB_0358c100:
                          *(uint *)(param_1 + 0x4ec) = uVar10;
                          plVar18 = (long *)(param_1 + 0x4f0);
                          puVar15 = (undefined8 *)
                                    QFSW_QC_QuantumConsoleProcessor_<ExtractCommandMethods>d__28_TypeInfo
                          ;
                          goto LAB_0358b3c4;
                        }
                        if (iVar11 < 0x7071a48) {
                          if (iVar11 == 0x19536f0) {
                            uVar10 = 0xff0080ff;
                            goto LAB_0358c100;
                          }
                          if (iVar11 != 0x7071a47) break;
                          uVar9 = 0;
FUN_0358c134:
                          uVar34 = 0;
LAB_0358c138:
                          uVar33 = 0;
                        }
                        else {
                          if (iVar11 == 0x73d641b) {
                            uVar9 = 0;
                            uVar34 = 0x3f800000;
                            goto LAB_0358c138;
                          }
                          if (iVar11 == 0x85daee7) {
                            uVar9 = 0x3f800000;
                            uVar34 = 0x3f800000;
LAB_0358c148:
                            uVar33 = 0x3f800000;
                          }
                          else {
                            if (iVar11 != 0x21063284) break;
                            uVar9 = 0x3f800000;
                            uVar34 = DAT_00d38808;
                            uVar33 = DAT_00d388f0;
                          }
                        }
                        uVar9 = FUN_01b6d7fc(uVar9,uVar34,uVar33,0x3f800000,0);
                      }
                      *(undefined4 *)(param_1 + 0x4ec) = uVar9;
                      uVar16 = *(undefined8 *)
                                QFSW_QC_QuantumConsoleProcessor_<ExtractCommandMethods>d__28_TypeInfo
                      ;
                    }
                    plVar18 = (long *)(param_1 + 0x4f0);
                    puVar14 = &uStack_2d0;
                    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar9);
                    goto LAB_035870e8;
                  }
                }
                *(undefined1 *)(param_1 + 0x430) = 0;
                goto LAB_035870ec;
              }
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              }
              lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x80);
              if (lVar17 == 0) goto LAB_0358c010;
              if (*(uint *)(lVar17 + 0x18) <= uVar26) goto LAB_0358bfac;
              *(short *)(lVar17 + uVar26 * 2 + 0x20) = (short)iVar2;
              if (iVar11 == 1) {
                    /* WARNING: Could not recover jumptable at 0x03586908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar26 = (*(code *)((ulong)switchD_03586908::switchdataD_00e6d092 * 4 + 0x358690c))
                                   ();
                return uVar26;
              }
              if (iVar2 == 0x3d) {
                iVar11 = 1;
              }
              if ((iVar2 == 0x20) && (iVar11 == 0)) {
                if (bVar7) break;
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                }
                lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                if (lVar17 == 0) goto LAB_0358c010;
                uVar22 = uVar22 + 1;
                if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_0358bfac;
                lVar17 = lVar17 + (long)(int)uVar22 * 0x18;
                bVar7 = true;
                *(undefined8 *)(lVar17 + 0x20) = 0;
                *(undefined8 *)(lVar17 + 0x28) = 0;
                *(undefined8 *)(lVar17 + 0x30) = 0;
LAB_03586d10:
                iVar11 = 0;
              }
              else if (iVar11 == 2) {
                if (iVar2 == 0x20) goto LAB_03586d10;
                iVar11 = 2;
              }
              else if (iVar11 == 0) {
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                }
                lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                if (lVar17 == 0) goto LAB_0358c010;
                if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_0358bfac;
                lVar17 = lVar17 + (long)(int)uVar22 * 0x18;
                iVar11 = 0;
                *(int *)(lVar17 + 0x20) = *(int *)(lVar17 + 0x20) * 7 + iVar2;
              }
              uVar10 = *(uint *)(param_2 + 0x18);
              uVar26 = uVar26 + 1;
            } while (param_3 + (int)uVar26 < (int)uVar10);
          }
LAB_0358c0b4:
          uVar22 = 0;
          goto LAB_0358c0b8;
        }
        goto LAB_0358c010;
      }
    }
LAB_0358bfac:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
LAB_0358c010:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
LAB_03589fec:
  plVar18 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar12 = *plVar18;
  }
  lVar17 = *(long *)(lVar12 + 0xb8);
  lVar21 = *(long *)(lVar17 + 0x88);
  if (lVar21 == 0) goto LAB_0358c010;
  if (*(int *)(lVar21 + 0x18) <= (int)uVar10) {
LAB_0358a508:
    uVar22 = (uint)uVar26;
    uVar10 = (uint)*(byte *)(param_1 + 0x4ef);
    if (uVar22 >> 0x18 <= (uint)*(byte *)(param_1 + 0x4ef)) {
      uVar10 = (uint)(uVar26 >> 0x18) & 0xff;
    }
    FUN_035683a4(uStack_10 & 0xffffffff,uStack_10._4_4_,uStack_8 & 0xffffffff,uStack_8._4_4_,
                 &uStack_28,uVar22 & 0xff0000 | uVar10 << 0x18 | uVar22 & 0xff00 | uVar22 & 0xff,0);
    uStack_c8 = uStack_20;
    uStack_d0 = uStack_28;
    uStack_c0 = uStack_18;
    FUN_0209b210(param_1 + 0x550,&uStack_d0,
                 *(undefined8 *)QFSW_QC_QuantumSuggestor_<>c__DisplayClass5_0_TypeInfo);
    goto LAB_035870ec;
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar12 = *plVar18;
    lVar17 = *(long *)(lVar12 + 0xb8);
    lVar21 = *(long *)(lVar17 + 0x88);
    plVar18 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (lVar21 == 0) goto LAB_0358c010;
  }
  if (*(uint *)(lVar21 + 0x18) <= uVar10) goto LAB_0358bfac;
  lVar25 = (long)(int)uVar10;
  if (*(int *)(lVar21 + lVar25 * 0x18 + 0x20) == 0) goto LAB_0358a508;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar12 = *plVar18;
    lVar17 = *(long *)(lVar12 + 0xb8);
    lVar21 = *(long *)(lVar17 + 0x88);
    if (lVar21 == 0) goto LAB_0358c010;
  }
  if (*(uint *)(lVar21 + 0x18) <= uVar10) goto LAB_0358bfac;
  iVar11 = *(int *)(lVar21 + lVar25 * 0x18 + 0x20);
  if (iVar11 < 0xa826) {
    if ((iVar11 == 0x7625) || (iVar11 == 0xa825)) {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar17 = *(long *)(lVar12 + 0xb8);
        lVar21 = *(long *)(lVar17 + 0x88);
        if (lVar21 == 0) goto LAB_0358c010;
      }
      if (*(uint *)(lVar21 + 0x18) <= uVar10) goto LAB_0358bfac;
      if (*(int *)(lVar21 + lVar25 * 0x18 + 0x28) == 4) {
        if (*(int *)(lVar12 + 0xe0) == 0) {
          lVar12 = thunk_FUN_01a58e78();
          lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          lVar21 = *(long *)(lVar17 + 0x88);
          if (lVar21 == 0) goto LAB_0358c010;
        }
        if (*(int *)(lVar21 + 0x18) == 0) goto LAB_0358bfac;
        uVar26 = FUN_03592790(lVar12,*(undefined8 *)(lVar17 + 0x80),*(undefined4 *)(lVar21 + 0x2c),
                              *(undefined4 *)(lVar21 + 0x30));
      }
    }
  }
  else if (iVar11 == 0x44d63) {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      lVar12 = thunk_FUN_01a58e78();
      lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
      lVar21 = *(long *)(lVar17 + 0x88);
      if (lVar21 == 0) goto LAB_0358c010;
    }
    if (*(uint *)(lVar21 + 0x18) <= uVar10) goto LAB_0358bfac;
    lVar21 = lVar21 + lVar25 * 0x18;
    uVar26 = FUN_03592790(lVar12,*(undefined8 *)(lVar17 + 0x80),*(undefined4 *)(lVar21 + 0x2c),
                          *(undefined4 *)(lVar21 + 0x30));
    uVar26 = uVar26 & 0xffffffff;
  }
  else if (iVar11 == 0xe63719) {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
      lVar21 = *(long *)(lVar17 + 0x88);
      if (lVar21 == 0) goto LAB_0358c010;
    }
    if (*(uint *)(lVar21 + 0x18) <= uVar10) goto LAB_0358bfac;
    lVar21 = lVar21 + lVar25 * 0x18;
    iVar11 = FUN_035929dc(param_1,*(undefined8 *)(lVar17 + 0x80),*(undefined4 *)(lVar21 + 0x2c),
                          *(undefined4 *)(lVar21 + 0x30),lVar17 + 0x90);
    if (iVar11 != 4) goto LAB_0358c0b4;
    lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x90);
    if (lVar12 == 0) goto LAB_0358c010;
    uVar22 = *(uint *)(lVar12 + 0x18);
    if ((((uVar22 == 0) || (uVar22 == 1)) || (uVar22 < 3)) || (uVar22 == 3)) goto LAB_0358bfac;
    uVar36 = *(undefined4 *)(lVar12 + 0x20);
    uVar33 = *(undefined4 *)(lVar12 + 0x24);
    uVar34 = *(undefined4 *)(lVar12 + 0x28);
    uVar9 = *(undefined4 *)(lVar12 + 0x2c);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03568238(uVar36,uVar33,uVar34,uVar9,&uStack_10,0);
    uVar13 = uStack_10 & 0xffffffff;
    uVar9 = (undefined4)(uStack_10 >> 0x20);
    uVar34 = (undefined4)uStack_8;
    uVar33 = (undefined4)(uStack_8 >> 0x20);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar36 = Unity_Loading_ContentLoadInterface__ContentSceneFile_IsHandleValid(uVar13,0);
    uStack_10 = CONCAT44(uVar9,uVar36);
    uStack_8 = CONCAT44(uVar33,uVar34);
  }
  uVar10 = uVar10 + 1;
  goto LAB_03589fec;
LAB_0358abbc:
  lVar12 = *plVar18;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar12 = *plVar18;
  }
  lVar17 = *(long *)(lVar12 + 0xb8);
  lVar21 = *(long *)(lVar17 + 0x88);
  if (lVar21 == 0) goto LAB_0358c010;
  if (*(int *)(lVar21 + 0x18) <= (int)uVar10) {
LAB_0358acdc:
    puVar14 = *(ulong **)(param_1 + 0x580);
    plVar18 = (long *)(param_1 + 0x588);
    uVar16 = *(undefined8 *)QFSW_QC_QuantumConsoleProcessor_<>c__DisplayClass3_0_TypeInfo;
LAB_035870e8:
    FUN_0209ad50(plVar18,puVar14,uVar16);
    goto LAB_035870ec;
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar12 = *plVar18;
    lVar17 = *(long *)(lVar12 + 0xb8);
    lVar21 = *(long *)(lVar17 + 0x88);
    plVar18 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (lVar21 == 0) goto LAB_0358c010;
  }
  if (*(uint *)(lVar21 + 0x18) <= uVar10) goto LAB_0358bfac;
  lVar25 = (long)(int)uVar10;
  if (*(int *)(lVar21 + lVar25 * 0x18 + 0x20) == 0) goto LAB_0358acdc;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar12 = *plVar18;
    lVar17 = *(long *)(lVar12 + 0xb8);
    lVar21 = *(long *)(lVar17 + 0x88);
    plVar18 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (lVar21 == 0) goto LAB_0358c010;
  }
  if (*(uint *)(lVar21 + 0x18) <= uVar10) goto LAB_0358bfac;
  iVar11 = *(int *)(lVar21 + lVar25 * 0x18 + 0x20);
  if ((iVar11 != 0xb2fb) && (iVar11 != 0x80fb)) goto LAB_0358acd4;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    lVar12 = thunk_FUN_01a58e78();
    lVar17 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
    lVar21 = *(long *)(lVar17 + 0x88);
    if (lVar21 == 0) goto LAB_0358c010;
  }
  if (*(uint *)(lVar21 + 0x18) <= uVar10) goto LAB_0358bfac;
  lVar21 = lVar21 + lVar25 * 0x18;
  uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
  fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar17 + 0x80),*(undefined4 *)(lVar21 + 0x2c),
                               *(undefined4 *)(lVar21 + 0x30),&uStack_2d0);
  *(bool *)(param_1 + 0x5b0) = fVar28 != 0.0;
  plVar18 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
LAB_0358acd4:
  uVar10 = uVar10 + 1;
  goto LAB_0358abbc;
LAB_03588494:
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  }
  lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
  if (lVar17 == 0) goto LAB_0358c010;
  if (*(int *)(lVar17 + 0x18) <= (int)uVar10) goto LAB_035870ec;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
    if (lVar17 == 0) goto LAB_0358c010;
  }
  if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_0358bfac;
  lVar21 = (long)(int)uVar10;
  if (*(int *)(lVar17 + lVar21 * 0x18 + 0x20) == 0) goto LAB_035870ec;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  }
  lVar25 = *(long *)(lVar12 + 0xb8);
  lVar17 = *(long *)(lVar25 + 0x88);
  if (lVar17 == 0) goto LAB_0358c010;
  if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_0358bfac;
  iVar11 = *(int *)(lVar17 + lVar21 * 0x18 + 0x20);
  if (iVar11 == 0x4d0e4) {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      lVar12 = thunk_FUN_01a58e78();
      lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
      lVar17 = *(long *)(lVar25 + 0x88);
      if (lVar17 == 0) goto LAB_0358c010;
    }
    if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_0358bfac;
    lVar17 = lVar17 + lVar21 * 0x18;
    uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
    fVar29 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar25 + 0x80),
                                 *(undefined4 *)(lVar17 + 0x2c),*(undefined4 *)(lVar17 + 0x30),
                                 &uStack_2d0);
    if (fVar29 == -32768.0) goto LAB_0358c0b4;
    lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    }
    lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
    if (lVar17 == 0) goto LAB_0358c010;
    if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_0358bfac;
    iVar11 = *(int *)(lVar17 + lVar21 * 0x18 + 0x34);
    if (iVar11 == 0) {
      fVar35 = fVar28;
      if (*(char *)(param_1 + 0x305) != '\0') {
        fVar35 = 1.0;
      }
      fVar29 = fVar29 * fVar35;
    }
    else if (iVar11 == 1) {
      fVar35 = fVar28;
      if (*(char *)(param_1 + 0x305) != '\0') {
        fVar35 = 1.0;
      }
      fVar29 = fVar29 * fVar35 * *(float *)(param_1 + 0x1e8);
    }
    else if (iVar11 == 2) {
      fVar35 = fVar31;
      if (*(float *)(param_1 + 0x360) != -1.0) {
        fVar35 = *(float *)(param_1 + 0x360);
      }
      fVar29 = (fVar29 * (*(float *)(param_1 + 0x358) - fVar35)) / 100.0;
    }
    else {
      fVar29 = *(float *)(param_1 + 0x354);
    }
    if (fVar29 < 0.0) {
      fVar29 = fVar31;
    }
    *(float *)(param_1 + 0x354) = fVar29;
  }
  else if (iVar11 == 0xa747) {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      lVar12 = thunk_FUN_01a58e78();
      lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
      lVar17 = *(long *)(lVar25 + 0x88);
      if (lVar17 == 0) goto LAB_0358c010;
    }
    if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_0358bfac;
    lVar17 = lVar17 + lVar21 * 0x18;
    uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
    fVar29 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar25 + 0x80),
                                 *(undefined4 *)(lVar17 + 0x2c),*(undefined4 *)(lVar17 + 0x30),
                                 &uStack_2d0);
    if (fVar29 == -32768.0) goto LAB_0358c0b4;
    lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    }
    lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
    if (lVar17 == 0) goto LAB_0358c010;
    if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_0358bfac;
    iVar11 = *(int *)(lVar17 + lVar21 * 0x18 + 0x34);
    if (iVar11 == 0) {
      fVar35 = fVar28;
      if (*(char *)(param_1 + 0x305) != '\0') {
        fVar35 = 1.0;
      }
      fVar29 = fVar29 * fVar35;
    }
    else if (iVar11 == 1) {
      fVar35 = fVar28;
      if (*(char *)(param_1 + 0x305) != '\0') {
        fVar35 = 1.0;
      }
      fVar29 = fVar29 * fVar35 * *(float *)(param_1 + 0x1e8);
    }
    else if (iVar11 == 2) {
      fVar35 = fVar31;
      if (*(float *)(param_1 + 0x360) != -1.0) {
        fVar35 = *(float *)(param_1 + 0x360);
      }
      fVar29 = (fVar29 * (*(float *)(param_1 + 0x358) - fVar35)) / 100.0;
    }
    else {
      fVar29 = *(float *)(param_1 + 0x350);
    }
    if (fVar29 < 0.0) {
      fVar29 = fVar31;
    }
    *(float *)(param_1 + 0x350) = fVar29;
  }
  uVar10 = uVar10 + 1;
  goto LAB_03588494;
LAB_0358bb18:
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  }
  lVar21 = *(long *)(lVar12 + 0xb8);
  lVar17 = *(long *)(lVar21 + 0x88);
  if (lVar17 == 0) goto LAB_0358c010;
  if (*(int *)(lVar17 + 0x18) <= (int)uVar10) {
LAB_0358bfb0:
    if (*(int *)(param_1 + 0x6a4) == -1) goto LAB_0358c0b4;
    lVar17 = *plVar18;
    if (lVar17 == 0) goto LAB_0358c010;
    uVar16 = *(undefined8 *)(lVar17 + 0x20);
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    }
    uVar9 = FUN_03558224(uVar16,lVar17,*(long *)(lVar12 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),0);
    uVar22 = 1;
    *(undefined4 *)(param_1 + 0x120) = uVar9;
    *(undefined4 *)(param_1 + 0x644) = 1;
    goto LAB_0358c0b8;
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar21 = *(long *)(lVar12 + 0xb8);
    lVar17 = *(long *)(lVar21 + 0x88);
    if (lVar17 == 0) goto LAB_0358c010;
  }
  if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_0358bfac;
  lVar25 = (long)(int)uVar10;
  if (*(int *)(lVar17 + lVar25 * 0x18 + 0x20) == 0) goto LAB_0358bfb0;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    lVar21 = *(long *)(lVar12 + 0xb8);
    lVar17 = *(long *)(lVar21 + 0x88);
    if (lVar17 == 0) goto LAB_0358c010;
  }
  if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_0358bfac;
  iVar11 = *(int *)(lVar17 + lVar25 * 0x18 + 0x20);
  uStack_b8 = uStack_b8 & 0xffffffff00000000;
  if (iVar11 < 0xa954) {
    if (iVar11 < 0x7754) {
      if (iVar11 == 0x6851) {
LAB_0358bd40:
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar21 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          lVar17 = *(long *)(lVar21 + 0x88);
          if (lVar17 == 0) goto LAB_0358c010;
        }
        if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_0358bfac;
        lVar17 = lVar17 + lVar25 * 0x18;
        iVar11 = FUN_035929dc(param_1,*(undefined8 *)(lVar21 + 0x80),*(undefined4 *)(lVar17 + 0x2c),
                              *(undefined4 *)(lVar17 + 0x30),lVar21 + 0x90);
        if (iVar11 != 3) goto LAB_0358c0b4;
        lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x90);
        if (lVar12 == 0) goto LAB_0358c010;
        if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0358bfac;
        iVar11 = -0x80000000;
        if (*(float *)(lVar12 + 0x20) != INFINITY) {
          iVar11 = (int)*(float *)(lVar12 + 0x20);
        }
        *(int *)(param_1 + 0x6a4) = iVar11;
        if (*(char *)(param_1 + 0x431) != '\0') {
          lVar12 = FUN_0357fa1c(param_1);
          uVar9 = *(undefined4 *)(param_1 + 0x494);
          uVar16 = *(undefined8 *)(param_1 + 0x698);
          uVar34 = *(undefined4 *)(param_1 + 0x6a4);
          lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar17 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar17);
            lVar17 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x90);
          if (lVar17 != 0) {
            if ((1 < *(uint *)(lVar17 + 0x18)) && (*(uint *)(lVar17 + 0x18) != 2)) {
              if (lVar12 != 0) {
                iVar11 = -0x80000000;
                if (*(float *)(lVar17 + 0x24) != INFINITY) {
                  iVar11 = (int)*(float *)(lVar17 + 0x24);
                }
                iVar2 = -0x80000000;
                if (*(float *)(lVar17 + 0x28) != INFINITY) {
                  iVar2 = (int)*(float *)(lVar17 + 0x28);
                }
                FUN_03599b64(lVar12,uVar9,uVar16,uVar34,iVar11,iVar2,0);
                goto LAB_0358bf98;
              }
              goto LAB_0358c010;
            }
            goto LAB_0358bfac;
          }
          goto LAB_0358c010;
        }
        goto LAB_0358bf98;
      }
      if (iVar11 != 0x7753) goto LAB_0358c0b4;
    }
    else {
      if (iVar11 == 0x80fb) goto LAB_0358bce4;
      if (iVar11 == 0x9a51) goto LAB_0358bd40;
      if (iVar11 != 0xa953) goto LAB_0358c0b4;
    }
    lVar21 = *plVar18;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar17 = *(long *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x88);
      if (lVar17 == 0) goto LAB_0358c010;
    }
    if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_0358bfac;
    lVar12 = FUN_0359ba84(lVar21,*(undefined4 *)(lVar17 + lVar25 * 0x18 + 0x24),1,&uStack_b8,0);
    *plVar18 = lVar12;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar18,lVar12);
    if ((int)uStack_b8 == -1) goto LAB_0358c0b4;
LAB_0358bf90:
    *(int *)(param_1 + 0x6a4) = (int)uStack_b8;
  }
  else {
    if (0x2ef43 < iVar11) {
      uVar22 = 0;
      if (iVar11 < 0x4828a) {
        if (iVar11 != 0x3246a) {
          if (iVar11 == 0x44d63) goto LAB_0358beb8;
          goto LAB_0358c0b8;
        }
      }
      else if (iVar11 != 0x4828a) {
        if ((iVar11 == 0x18b5dd) || (iVar11 == 0x2248dd)) goto LAB_0358bf98;
        goto LAB_0358c0b8;
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        lVar12 = thunk_FUN_01a58e78();
        lVar21 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        lVar17 = *(long *)(lVar21 + 0x88);
        if (lVar17 == 0) goto LAB_0358c010;
      }
      if (1 < *(uint *)(lVar17 + 0x18)) {
        uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
        fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar21 + 0x80),
                                     *(undefined4 *)(lVar17 + 0x44),*(undefined4 *)(lVar17 + 0x48),
                                     &uStack_2d0);
        iVar11 = -0x80000000;
        if (fVar28 != INFINITY) {
          iVar11 = (int)fVar28;
        }
        uStack_b8 = CONCAT44(uStack_b8._4_4_,iVar11);
        if (iVar11 != -0x8000) {
          if ((*plVar18 != 0) &&
             (lVar12 = UnityEngine_Material__DisableKeyword(*plVar18,0), lVar12 != 0)) {
            if (iVar11 <= *(int *)(lVar12 + 0x18) + -1) {
              goto LAB_0358bf90;
            }
            goto LAB_0358c0b4;
          }
          goto LAB_0358c010;
        }
        goto LAB_0358c0b4;
      }
      goto LAB_0358bfac;
    }
    if (iVar11 == 0xb2fb) {
LAB_0358bce4:
      if (*(int *)(lVar12 + 0xe0) == 0) {
        lVar12 = thunk_FUN_01a58e78();
        lVar21 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        lVar17 = *(long *)(lVar21 + 0x88);
        if (lVar17 == 0) goto LAB_0358c010;
      }
      if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_0358bfac;
      lVar17 = lVar17 + lVar25 * 0x18;
      uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
      fVar28 = (float)FUN_03592a88(lVar12,*(undefined8 *)(lVar21 + 0x80),
                                   *(undefined4 *)(lVar17 + 0x2c),*(undefined4 *)(lVar17 + 0x30),
                                   &uStack_2d0);
      *(bool *)(param_1 + 0x1b9) = fVar28 != 0.0;
    }
    else {
      if (iVar11 != 0x2ef43) goto LAB_0358c0b4;
LAB_0358beb8:
      if (*(int *)(lVar12 + 0xe0) == 0) {
        lVar12 = thunk_FUN_01a58e78();
        lVar21 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        lVar17 = *(long *)(lVar21 + 0x88);
        if (lVar17 == 0) goto LAB_0358c010;
      }
      if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_0358bfac;
      lVar17 = lVar17 + lVar25 * 0x18;
      uVar9 = FUN_03592790(lVar12,*(undefined8 *)(lVar21 + 0x80),*(undefined4 *)(lVar17 + 0x2c),
                           *(undefined4 *)(lVar17 + 0x30));
      *(undefined4 *)(param_1 + 0x1bc) = uVar9;
    }
  }
LAB_0358bf98:
  uVar10 = uVar10 + 1;
  lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  goto LAB_0358bb18;
LAB_035870ec:
  uVar22 = 1;
LAB_0358c0b8:
  return (ulong)uVar22;
}


