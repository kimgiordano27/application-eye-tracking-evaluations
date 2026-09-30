/*
FUNCTION_NAME: FUN_064f3e98
ENTRY_POINT: 064f3e98
PROGRAM: waitwhat-libil2cpp.so
SCORE: 266
LABEL: confirmed_eye_data_collection_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo;active_gaze_retrieval;active_gaze_collection;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_collection_or_telemetry_sink;possible_biometric_feature_from_active_eye_context;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_4
*/


void FUN_064f3e98(int *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  bool bVar12;
  undefined *puVar13;
  long lVar14;
  bool bVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  ulong uVar26;
  undefined8 *__src;
  undefined8 uVar27;
  ulong uVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  int *piVar33;
  uint uVar34;
  long lVar35;
  long lVar36;
  int iVar37;
  uint uVar38;
  undefined8 uVar39;
  int iVar40;
  uint uVar41;
  long lVar42;
  short sVar43;
  undefined1 auVar44 [16];
  uint local_554;
  uint local_544;
  undefined8 *local_510;
  int local_504;
  int local_500;
  uint local_4fc;
  long local_4f8;
  undefined1 auStack_4d8 [128];
  undefined1 auStack_458 [88];
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  long local_3a8;
  undefined8 *local_3a0;
  undefined1 auStack_398 [144];
  undefined4 local_308;
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
  undefined1 local_280 [16];
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  long local_140;
  long lStack_138;
  long local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110;
  long local_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  if ((DAT_07556f65 & 1) == 0) {
    FUN_03188a78(System_Collections_Generic_HashSet<XRLoader>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_HashSet<CAPI_ovrAvatar2Id>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_HashSet<Event_Type>_TypeInfo);
    FUN_03188a78(PTR_DAT_070f20c8);
    FUN_03188a78(PTR_DAT_070f20c0);
    FUN_03188a78(System_Func<GrabInteractable>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo);
    FUN_03188a78(PTR_DAT_070f1ea8);
    FUN_03188a78(PTR_DAT_070f1eb8);
    FUN_03188a78(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
    FUN_03188a78(PTR_DAT_070f1fd0);
    FUN_03188a78(System_Reflection_Internal_EmptyArray<byte>_TypeInfo);
    FUN_03188a78(System_Net_Http_Headers_ElementTryParser<StringWithQualityHeaderValue>_TypeInfo);
    FUN_03188a78(System_Net_Http_Headers_ElementTryParser<TransferCodingHeaderValue>_TypeInfo);
    FUN_03188a78(System_Dynamic_Utils_EmptyReadOnlyCollection<Expression>_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_EventBase<ContextClickEvent>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo);
    DAT_07556f65 = 1;
  }
  local_164 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  local_1e0 = 0;
  uStack_2d8 = 0;
  local_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  local_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  local_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_258 = 0;
  local_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_158 = 0;
  local_160 = 0;
  local_148 = 0;
  local_150 = 0;
  lStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  local_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  local_e8 = 0;
  uStack_f0 = 0;
  local_218 = 0;
  local_220 = 0;
  uStack_268 = 0;
  local_270 = 0;
  local_280._8_8_ = 0;
  local_280._0_8_ = 0;
  uStack_2f8 = 0;
  local_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_a0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_308 = 0;
  if (*(int *)(*(long *)PTR_DAT_070f1fd0 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  puVar13 = PTR_DAT_070f20c0;
  if (param_2 == 0) {
    if (*(long *)(lVar10 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    goto LAB_064f5614;
  }
  lVar32 = *(long *)(param_2 + 0x28);
  lVar36 = *(long *)(param_2 + 0x30);
  if (lVar36 == 0) {
    local_554 = 0;
    if (lVar32 == 0) goto LAB_064f4080;
LAB_064f4070:
    uVar34 = *(uint *)(lVar32 + 0x18);
  }
  else {
    local_554 = *(uint *)(lVar36 + 0x18);
    if (lVar32 != 0) goto LAB_064f4070;
LAB_064f4080:
    uVar34 = 0;
  }
  iVar3 = param_1[10];
  iVar5 = param_1[0xb];
  iVar4 = param_1[0xd];
  iVar6 = param_1[0xe];
  uStack_158 = 0;
  local_160 = 0;
  local_148 = 0;
  local_150 = 0;
  piVar33 = param_1 + 2;
  iVar8 = *piVar33;
  lStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  local_108 = 0;
  local_110 = 0;
  iVar9 = param_1[1];
  uStack_f8 = 0;
  local_100 = 0;
  local_e8 = 0;
  uStack_f0 = 0;
  iVar7 = *param_1;
  FUN_064dc6a0(&local_160,iVar3 + 1,iVar5 + uVar34,iVar4 + local_554);
  uVar26 = FUN_064dc640(param_1 + 8,0);
  if ((uVar26 & 1) != 0) {
    memcpy(auStack_398,param_1 + 8,0x80);
    FUN_064dc7d0(&local_160,auStack_398,0);
  }
  local_164 = 0;
  memcpy(&local_1d0,(void *)(param_2 + 0x68),0x60);
  FUN_064bc264(&local_400,param_2,0);
  lVar35 = *(long *)(param_2 + 0x50);
  uStack_1e8 = uStack_3f8;
  local_1f0 = local_400;
  local_1e0 = local_3f0;
  FUN_03f5c9c0(&local_210,2,0,*(undefined8 *)puVar13);
  local_3a8 = 0;
  local_3a0 = &local_210;
  if (0 < (int)local_554) {
    if (lVar36 == 0) {
      if (*(long *)(lVar10 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_064f5614;
    }
    uVar26 = 0;
    uVar41 = 0xffffffff;
    local_4f8 = 0;
    local_544 = 0xffffffff;
    local_4fc = 0xffffffff;
    do {
      lVar14 = lStack_138;
      if (*(uint *)(lVar36 + 0x18) <= uVar26) {
        if (*(long *)(lVar10 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        goto LAB_064f5614;
      }
      __src = (undefined8 *)(lVar36 + 0x20 + uVar26 * 0x58);
      bVar17 = FUN_064d1d88(__src,0);
      uVar24 = iVar4 + (int)uVar26;
      if ((bVar17 & 1) == 0) {
        uVar28 = FUN_064d400c(__src,0);
        bVar15 = uVar41 != 0xffffffff;
        if (((uVar28 & 1) != 0) && (uVar41 == 0xffffffff)) {
          memcpy(&local_400,__src,0x58);
          memcpy(auStack_458,&local_400,0x58);
          uVar27 = thunk_FUN_031edd38(
                                     UnityEngine_UIElements_EventCallback<MouseLeaveWindowEvent>_TypeInfo
                                     );
          uVar27 = thunk_FUN_031c39fc(uVar27,auStack_458);
          uVar30 = thunk_FUN_031edd38(
                                     System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_TypeInfo
                                     );
          uVar27 = FUN_057b5e54(uVar30,uVar27,0);
          thunk_FUN_031edd38(PTR_DAT_070c4538);
          uVar30 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
          FUN_0592f61c(uVar30,uVar27,0);
          uVar27 = thunk_FUN_031edd38(
                                     System_Collections_Generic_HashSet<OvrSkinningTypes_Handle>_TypeInfo
                                     );
          if (*(long *)(lVar10 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03188b9c(uVar30,uVar27);
          }
          goto LAB_064f5614;
        }
        local_510 = (undefined8 *)(lVar14 + (long)(int)uVar24 * 0x20);
        if ((uVar28 & 1) == 0) goto LAB_064f4264;
        bVar12 = false;
        lVar42 = local_4f8;
        uVar18 = local_4fc;
      }
      else {
        bVar15 = uVar41 != 0xffffffff;
        local_510 = (undefined8 *)(lVar14 + (long)(int)uVar24 * 0x20);
LAB_064f4264:
        if (lVar35 == 0) {
          uVar27 = *(undefined8 *)(lVar36 + 0x20 + uVar26 * 0x58 + 0x30);
          uVar28 = FUN_057bebf8(uVar27,0);
          if ((uVar28 & 1) == 0) {
            uVar18 = FUN_064c0e60(param_2,uVar27,0);
            if (uVar18 != 0xffffffff) goto LAB_064f4274;
            lVar42 = 0;
          }
          else {
            lVar42 = 0;
            uVar18 = 0xffffffff;
          }
        }
        else {
          uVar18 = 0;
LAB_064f4274:
          if (lVar32 == 0) {
            if (*(long *)(lVar10 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            goto LAB_064f5614;
          }
          if (*(uint *)(lVar32 + 0x18) <= uVar18) {
            if (*(long *)(lVar10 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03188ce0();
            }
            goto LAB_064f5614;
          }
          lVar42 = *(long *)(lVar32 + (long)(int)uVar18 * 8 + 0x20);
        }
        bVar12 = true;
      }
      uVar2 = uVar24;
      uVar11 = uVar18;
      lVar31 = lVar42;
      if ((bVar17 & 1) == 0) {
        uVar2 = uVar41;
        uVar11 = local_4fc;
        lVar31 = local_4f8;
      }
      uVar27 = FUN_064d5748(__src,0);
      uVar28 = FUN_057bebf8(uVar27,0);
      if ((uVar28 & 1) == 0) {
        bVar16 = lVar42 != 0;
        if ((bool)bVar16 && (bVar17 & 1) == 0) {
          if ((char)param_1[0x2e] != '\0') {
            FUN_04666c20(&local_400,param_1 + 0x2e,
                         *(undefined8 *)
                          System_Net_Http_Headers_ElementTryParser<TransferCodingHeaderValue>_TypeInfo
                        );
            memcpy(&local_270,&local_400,0x58);
            uVar28 = FUN_064dd594(&local_270,__src,1,0);
            if ((uVar28 & 1) == 0) goto LAB_064f4324;
          }
          if ((char)local_1d0 != '\0') {
            FUN_04666c20(&local_400,&local_1d0,
                         *(undefined8 *)
                          System_Net_Http_Headers_ElementTryParser<TransferCodingHeaderValue>_TypeInfo
                        );
            memcpy(&local_270,&local_400,0x58);
            uVar28 = FUN_064dd594(&local_270,__src,1,0);
            if ((uVar28 & 1) == 0) goto LAB_064f4324;
          }
          if (*(char *)(lVar42 + 0x50) == '\0') {
            bVar16 = 1;
          }
          else {
            FUN_04666c20(&local_400,(char *)(lVar42 + 0x50),
                         *(undefined8 *)
                          System_Net_Http_Headers_ElementTryParser<TransferCodingHeaderValue>_TypeInfo
                        );
            memcpy(&local_270,&local_400,0x58);
            bVar16 = FUN_064dd594(&local_270,__src,1,0);
          }
        }
        if (((bVar17 | bVar16 ^ 0xff) & 1) == 0) {
          local_504 = (int)local_210 + param_1[0xe];
          if ((char)local_1f0 == '\0') {
            if (*(int *)(*(long *)PTR_DAT_070f1fd0 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            iVar20 = FUN_03af2e24(uVar27,&local_210,
                                  *(undefined8 *)
                                   System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo
                                 );
            auVar44 = local_280;
            goto joined_r0x064f46c8;
          }
          auVar44 = FUN_046610d4(&local_1f0,
                                 *(undefined8 *)
                                  System_Dynamic_Utils_EmptyReadOnlyCollection<Expression>_TypeInfo)
          ;
          iVar20 = 0;
          if (0 < auVar44._12_4_) {
            iVar37 = 0;
            do {
              local_280 = auVar44;
              lVar29 = FUN_04884e1c(local_280,iVar37,
                                    *(undefined8 *)
                                     System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo
                                   );
              if (lVar29 == 0) {
                if (*(long *)(lVar10 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03188cd8();
                }
                goto LAB_064f5614;
              }
              auVar44 = local_280;
              if (*(int *)(lVar29 + 0xe8) != -1) {
                iVar19 = FUN_03ae6f80(lVar29,uVar27,0,&local_210,
                                      *(undefined8 *)
                                       System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo
                                     );
                iVar20 = iVar19 + iVar20;
                auVar44 = local_280;
              }
              local_280._12_4_ = auVar44._12_4_;
              iVar37 = iVar37 + 1;
            } while (iVar37 < (int)local_280._12_4_);
          }
          if ((bVar16 & 1) == 0) goto LAB_064f445c;
LAB_064f4528:
          local_280 = auVar44;
          uVar27 = FUN_064dcd48(__src,0);
          uVar28 = FUN_057bebf8(uVar27,0);
          if ((uVar28 & 1) == 0) {
            iVar19 = FUN_03ae3204(param_1,**(undefined8 **)(*(long *)PTR_DAT_070f1eb8 + 0xb8),uVar27
                                  ,param_1 + 0x2a,param_1,param_2,__src,
                                  *(undefined8 *)
                                   System_Collections_Generic_HashSet<Event_Type>_TypeInfo);
            if (iVar19 == -1) {
              local_500 = 0;
            }
            else {
              local_500 = *param_1 - iVar19;
            }
          }
          else {
            local_500 = 0;
            iVar19 = -1;
          }
          if (lVar42 == 0) {
            if (*(long *)(lVar10 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            goto LAB_064f5614;
          }
          uVar28 = FUN_057bebf8(*(undefined8 *)(lVar42 + 0x30),0);
          iVar37 = iVar19;
          if ((uVar28 & 1) == 0) {
            iVar23 = FUN_03ae3204(param_1,**(undefined8 **)(*(long *)PTR_DAT_070f1eb8 + 0xb8),
                                  *(undefined8 *)(lVar42 + 0x30),param_1 + 0x2a,param_1,param_2,
                                  __src,*(undefined8 *)
                                         System_Collections_Generic_HashSet<Event_Type>_TypeInfo);
            if (iVar23 != -1) {
              iVar37 = iVar23;
              if (iVar19 != -1) {
                iVar37 = iVar19;
              }
              local_500 = (local_500 - iVar23) + *param_1;
            }
          }
          if (bVar12) {
            uVar27 = FUN_064dcd30(__src,0);
            uVar28 = FUN_057bebf8(uVar27,0);
            if ((uVar28 & 1) == 0) {
              iVar23 = FUN_03ae3204(param_1,**(undefined8 **)(*(long *)PTR_DAT_070f1ea8 + 0xb8),
                                    uVar27,param_1 + 0x28,piVar33,param_2,__src,
                                    *(undefined8 *)
                                     System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_TypeInfo
                                   );
              if (iVar23 == -1) {
                uVar38 = 0;
              }
              else {
                uVar38 = *piVar33 - iVar23;
              }
            }
            else {
              uVar38 = 0;
              iVar23 = -1;
            }
            uVar28 = FUN_057bebf8(*(undefined8 *)(lVar42 + 0x38),0);
            iVar19 = iVar23;
            if ((uVar28 & 1) == 0) {
              iVar21 = FUN_03ae3204(param_1,**(undefined8 **)(*(long *)PTR_DAT_070f1ea8 + 0xb8),
                                    *(undefined8 *)(lVar42 + 0x38),param_1 + 0x28,piVar33,param_2,
                                    __src,*(undefined8 *)
                                           System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_TypeInfo
                                   );
              if (iVar21 != -1) {
                iVar19 = iVar21;
                if (iVar23 != -1) {
                  iVar19 = iVar23;
                }
                uVar38 = (uVar38 - iVar21) + *piVar33;
              }
            }
          }
          else if (uVar2 == 0xffffffff) {
            uVar38 = 0;
            iVar19 = -1;
          }
          else {
            lVar31 = lVar14 + (long)(int)uVar2 * 0x20;
            iVar19 = FUN_064d5f0c(lVar31,0);
            uVar38 = (uint)*(byte *)(lVar31 + 1);
          }
          if ((bVar17 & 1) == 0) {
            if ((bool)(bVar12 & bVar15)) {
              local_4f8 = 0;
              uVar41 = 0xffffffff;
              local_4fc = 0xffffffff;
              local_164 = 0;
              local_544 = 0xffffffff;
              goto LAB_064f48cc;
            }
          }
          else {
            uVar27 = FUN_064f5630(__src,param_2);
            local_544 = FUN_039bd098(param_1 + 0x2c,param_1 + 1,uVar27,10,
                                     *(undefined8 *)
                                      System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_TypeInfo
                                    );
            local_504 = (int)local_210 + param_1[0xe];
            local_4fc = uVar18;
            local_4f8 = lVar42;
            uVar41 = uVar24;
          }
        }
        else {
          iVar20 = 0;
          local_504 = 0;
          auVar44 = local_280;
joined_r0x064f46c8:
          if ((bVar16 & 1) != 0) goto LAB_064f4528;
LAB_064f445c:
          uVar38 = 0;
          iVar37 = -1;
          iVar19 = -1;
          local_500 = 0;
          local_4fc = uVar11;
          local_4f8 = lVar31;
          uVar41 = uVar2;
          local_280 = auVar44;
        }
        if (uVar41 == 0xffffffff) {
          bVar12 = true;
        }
        if ((bVar12) || (iVar20 < 1)) goto LAB_064f48cc;
        uVar28 = FUN_057bebf8(*__src,0);
        if ((uVar28 & 1) != 0) {
          memcpy(&local_400,__src,0x58);
          memcpy(auStack_458,&local_400,0x58);
          uVar27 = thunk_FUN_031edd38(
                                     UnityEngine_UIElements_EventCallback<MouseLeaveWindowEvent>_TypeInfo
                                     );
          uVar27 = thunk_FUN_031c39fc(uVar27,auStack_458);
          lVar32 = *(long *)(param_1 + 0x2c);
          if (lVar32 == 0) {
            if (*(long *)(lVar10 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
          }
          else if (local_544 < *(uint *)(lVar32 + 0x18)) {
            uVar39 = *(undefined8 *)(lVar32 + (long)(int)local_544 * 8 + 0x20);
            uVar30 = thunk_FUN_031edd38(
                                       System_Collections_Generic_HashSet<StunServers_StunServer>_TypeInfo
                                       );
            uVar27 = FUN_057c02e8(uVar30,uVar27,uVar39,0);
            thunk_FUN_031edd38(PTR_DAT_070c4538);
            uVar30 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
            FUN_0592f61c(uVar30,uVar27,0);
            uVar27 = thunk_FUN_031edd38(
                                       System_Collections_Generic_HashSet<OvrSkinningTypes_Handle>_TypeInfo
                                       );
            if (*(long *)(lVar10 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03188b9c(uVar30,uVar27);
            }
          }
          else if (*(long *)(lVar10 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          goto LAB_064f5614;
        }
        lVar31 = *(long *)(param_1 + 0x2c);
        if (lVar31 == 0) {
          if (*(long *)(lVar10 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_064f5614;
        }
        if (*(uint *)(lVar31 + 0x18) <= local_544) {
          if (*(long *)(lVar10 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          goto LAB_064f5614;
        }
        uVar22 = FUN_064f5890(*(undefined8 *)(lVar31 + (long)(int)local_544 * 8 + 0x20),*__src,
                              &local_164);
        pbVar1 = (byte *)(lVar14 + (long)(int)uVar41 * 0x20);
        FUN_064dbf88(pbVar1,iVar20 + (uint)*pbVar1,0);
        iVar23 = FUN_064d6b44(pbVar1,0);
      }
      else {
LAB_064f4324:
        uVar38 = 0;
        local_504 = 0;
        local_500 = 0;
        iVar20 = 0;
        iVar19 = -1;
        iVar37 = -1;
        local_4f8 = lVar31;
        local_4fc = uVar11;
        uVar41 = uVar2;
LAB_064f48cc:
        iVar23 = uVar18 + iVar5;
        uVar22 = 0xffffffff;
        if (uVar18 == 0xffffffff) {
          iVar23 = -1;
        }
      }
      uStack_88 = 0;
      local_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      FUN_064dbef0(&local_90,local_504,0);
      FUN_064dbf88(&local_90,iVar20,0);
      FUN_064dc018(&local_90,iVar19,0);
      FUN_064dc0bc(&local_90,uVar38,0);
      FUN_064dc14c(&local_90,iVar37,0);
      FUN_064dc1f0(&local_90,local_500,0);
      FUN_064dc4dc(&local_90,bVar17 & 1,0);
      uVar24 = FUN_064d400c(__src,0);
      FUN_064dc4fc(&local_90,uVar24 & 1,0);
      FUN_064dc544(&local_90,uVar22,0);
      FUN_064dc280(&local_90,iVar23,0);
      uVar24 = local_544;
      if ((bVar17 & 1) == 0) {
        uVar24 = uVar41;
      }
      FUN_064dc3b4(&local_90,uVar24,0);
      FUN_064dc324(&local_90,param_1[10],0);
      if (lVar42 == 0) {
        uVar24 = 0;
      }
      else {
        uVar24 = FUN_064bafac(lVar42,0);
      }
      FUN_064dc51c(&local_90,uVar24 & 1,0);
      local_510[1] = uStack_88;
      *local_510 = local_90;
      local_510[3] = uStack_78;
      local_510[2] = uStack_80;
      uVar26 = uVar26 + 1;
    } while (uVar26 != local_554);
  }
  iVar37 = (int)local_210;
  iVar20 = param_1[0xe];
  if ((((int)local_150 != param_1[2]) || (local_148._4_4_ != param_1[1])) ||
     ((int)local_148 != iVar20 + (int)local_210)) {
    uStack_2f8 = 0;
    local_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    local_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    local_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    local_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    FUN_064dc6a0(&local_300,uStack_158 & 0xffffffff,uStack_158._4_4_,local_150._4_4_);
    memcpy(auStack_4d8,&local_160,0x80);
    FUN_064dc7d0(&local_300,auStack_4d8,0);
    FUN_064d514c(&local_160,0);
    memcpy(&local_160,&local_300,0x80);
    iVar20 = param_1[0xe];
  }
  local_218 = CONCAT44(iVar20,(undefined4)local_218);
  uStack_3f8 = uStack_208;
  local_400 = local_210;
  uStack_3e8 = uStack_1f8;
  local_3f0 = uStack_200;
  FUN_039bc210(param_1 + 6,(long)&local_218 + 4,&local_400,10,
               *(undefined8 *)System_Collections_Generic_HashSet<XRLoader>_TypeInfo);
  if (0 < (int)local_554) {
    uVar26 = 0;
    do {
      iVar20 = iVar4 + (int)uVar26;
      pbVar1 = (byte *)(lStack_138 + (long)iVar20 * 0x20);
      uVar28 = (ulong)*pbVar1;
      if (uVar28 != 0) {
        lVar36 = (ulong)*(ushort *)(pbVar1 + 0xe) << 2;
        do {
          uVar28 = uVar28 - 1;
          *(int *)(lVar36 + local_100) = iVar20;
          lVar36 = lVar36 + 4;
        } while (uVar28 != 0);
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != local_554);
  }
  lVar36 = (long)param_1[0xc];
  if (param_1[0xc] < (int)local_150) {
    lVar35 = lVar36 * 0x30;
    do {
      lVar14 = local_130;
      FUN_064d6e90(lVar35 + local_130,1,0);
      FUN_064d6e98(lVar35 + lVar14,0xffffffff,0);
      lVar36 = lVar36 + 1;
      lVar35 = lVar35 + 0x30;
    } while (lVar36 < (int)local_150);
  }
  if (0 < (int)uVar34) {
    if (lVar32 == 0) {
      if (*(long *)(lVar10 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_064f5614;
    }
    iVar20 = param_1[0xd];
    uVar41 = 0;
    do {
      if (*(uint *)(lVar32 + 0x18) <= uVar41) {
        if (*(long *)(lVar10 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        goto LAB_064f5614;
      }
      lVar36 = *(long *)(lVar32 + (ulong)uVar41 * 8 + 0x20);
      if (lVar36 == 0) {
        if (*(long *)(lVar10 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_064f5614;
      }
      sVar43 = 0;
      iVar23 = 0;
      iVar19 = uVar41 + iVar5;
      *(int *)(lVar36 + 0xc0) = iVar19;
      *(short *)(local_110 + (long)(iVar19 * 2) * 2) = (short)iVar20;
      if ((int)local_554 < 1) {
        iVar21 = 0;
      }
      else {
        iVar40 = -1;
        uVar26 = (ulong)local_554;
        iVar21 = iVar4;
        sVar43 = 0;
        do {
          pbVar1 = (byte *)(lStack_138 + (long)iVar21 * 0x20);
          iVar25 = FUN_064d6b44(pbVar1,0);
          if (iVar25 == iVar19) {
            uVar28 = FUN_064d4bf4(pbVar1,0);
            if ((uVar28 & 1) == 0) {
              iVar25 = iVar21;
              if (iVar40 != -1) {
                iVar25 = iVar40;
              }
              *(short *)(local_108 + (long)iVar20 * 2) = (short)iVar21;
              uVar28 = FUN_064d588c(pbVar1,0);
              iVar20 = iVar20 + 1;
              sVar43 = sVar43 + 1;
              iVar40 = iVar25;
              if ((uVar28 & 1) == 0) {
                iVar23 = iVar23 + (uint)*pbVar1;
              }
              else if (*pbVar1 != 0) {
                iVar23 = iVar23 + 1;
              }
            }
          }
          uVar26 = uVar26 - 1;
          iVar21 = iVar21 + 1;
        } while (uVar26 != 0);
        iVar21 = 0;
        if (iVar40 != -1) {
          iVar21 = iVar40;
        }
      }
      lVar35 = local_140;
      *(short *)(local_110 + (long)(int)(iVar19 * 2 | 1) * 2) = sVar43;
      iVar40 = *(int *)(lVar36 + 0x18);
      local_a0 = 0;
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      FUN_064d6b3c(&local_e0,0,0);
      FUN_064d6f10(&local_e0,iVar3,0);
      FUN_064d6d90(&local_e0,0xffffffff,0);
      FUN_064d6e24(&local_e0,0xffffffff,0);
      FUN_064d89f0(&local_e0,iVar40 == 2,0);
      FUN_064d8a1c(&local_e0,iVar40 == 1,0);
      FUN_064dc618(&local_e0,(iVar40 != 2 && iVar23 != 1) && (iVar40 == 2 || 0 < iVar23),0);
      FUN_064d6ae0(&local_e0,iVar21,0);
      memmove((void *)(lVar35 + (long)iVar19 * 0x44),&local_e0,0x44);
      uVar41 = uVar41 + 1;
    } while (uVar41 != uVar34);
  }
  piVar33 = (int *)(local_e8 + (long)iVar3 * 0x30);
  iVar23 = *param_1;
  iVar20 = param_1[1];
  iVar19 = param_1[2];
  *piVar33 = iVar5;
  piVar33[1] = uVar34;
  piVar33[2] = iVar6;
  piVar33[3] = iVar37;
  piVar33[4] = iVar4;
  piVar33[5] = local_554;
  piVar33[6] = iVar8;
  piVar33[7] = iVar19 - iVar8;
  piVar33[8] = iVar7;
  piVar33[9] = iVar23 - iVar7;
  piVar33[10] = iVar9;
  piVar33[0xb] = iVar20 - iVar9;
  puVar13 = System_Collections_Generic_HashSet<CAPI_ovrAvatar2Id>_TypeInfo;
  *(int *)(param_2 + 0x58) = iVar3;
  local_218 = CONCAT44(local_218._4_4_,param_1[10]);
  FUN_039bd098(param_1 + 4,&local_218,param_2,4,*(undefined8 *)puVar13);
  FUN_064d514c(param_1 + 8,0);
  memcpy(param_1 + 8,&local_160,0x80);
  lVar32 = local_3a8;
  FUN_03f5dcc8(local_3a0,*(undefined8 *)PTR_DAT_070f20c8);
  if (lVar32 == 0) {
    if (*(long *)(lVar10 + 0x28) == local_68) {
      return;
    }
  }
  else if (*(long *)(lVar10 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd0(lVar32);
  }
LAB_064f5614:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


