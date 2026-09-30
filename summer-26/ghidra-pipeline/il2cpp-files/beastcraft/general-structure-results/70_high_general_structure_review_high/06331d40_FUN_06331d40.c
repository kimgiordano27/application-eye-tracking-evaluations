/*
FUNCTION_NAME: FUN_06331d40
ENTRY_POINT: 06331d40
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_06331d40(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
            long param_5,long param_6,int param_7,int *param_8,long param_9,long param_10,
            undefined1 *param_11)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  undefined2 uVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  char cVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 uVar25;
  uint *puVar26;
  long lVar27;
  long lVar28;
  uint *puVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined1 auStack_250 [96];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  int iStack_128;
  int iStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  
  if ((bRam0000000006e9b699 & 1) == 0) {
    FUN_02e3ca1c(Fusion_SimulationMessage_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a2ed98);
    FUN_02e3ca1c(Fusion_SimulationStages_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a2ed80);
    FUN_02e3ca1c(System_Reflection_SignatureConstructedGenericType_TypeInfo);
    FUN_02e3ca1c(System_Reactive_Disposables_SingleAssignmentDisposable_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a2ee00);
    FUN_02e3ca1c(System_Runtime_Remoting_SingleCallIdentity_TypeInfo);
    FUN_02e3ca1c(System_Data_Common_SingleStorage_TypeInfo);
    FUN_02e3ca1c(System_ModifierSpec_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Experimental_Rendering_SinglepassKeywords_TypeInfo);
    FUN_02e3ca1c(ExitGames_Client_Photon_SimulationItem_TypeInfo);
    FUN_02e3ca1c(System_Runtime_Remoting_SingletonIdentity_TypeInfo);
    FUN_02e3ca1c(System_Runtime_Remoting_Channels_SinkProviderData_TypeInfo);
    FUN_02e3ca1c(System_Drawing_Size_TypeInfo);
    FUN_02e3ca1c(System_Drawing_SizeF_TypeInfo);
    FUN_02e3ca1c(System_Runtime_Serialization_Formatters_Binary_SizedArray_TypeInfo);
    FUN_02e3ca1c(Game_Views_Voxels_SliceMap_TypeInfo);
    FUN_02e3ca1c(Game_Views_Voxels_SliceVoxel_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UIElements_Slider_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UIElements_SliderInt_TypeInfo);
    FUN_02e3ca1c(UnityEngine_SliderState_TypeInfo);
    FUN_02e3ca1c(Mono_Xml_SmallXmlParser_TypeInfo);
    FUN_02e3ca1c(Mono_Xml_SmallXmlParserException_TypeInfo);
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowQuaternionTweenableVariable_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_TypeInfo
                );
    FUN_02e3ca1c(Fusion_Protocol_Snapshot_TypeInfo);
    FUN_02e3ca1c(Fusion_LagCompensation_SnapshotHistoryDraw_TypeInfo);
    FUN_02e3ca1c(Fusion_Protocol_SnapshotType_TypeInfo);
    FUN_02e3ca1c(System_Runtime_Remoting_Metadata_SoapAttribute_TypeInfo);
    FUN_02e3ca1c(System_Runtime_Remoting_Metadata_SoapFieldAttribute_TypeInfo);
    FUN_02e3ca1c(System_Runtime_Remoting_Metadata_SoapMethodAttribute_TypeInfo);
    FUN_02e3ca1c(System_Runtime_Remoting_Metadata_SoapParameterAttribute_TypeInfo);
    FUN_02e3ca1c(
                System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>_TypeInfo
                );
    FUN_02e3ca1c(
                System_Collections_Generic_List<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>_TypeInfo
                );
    FUN_02e3ca1c(System_Runtime_Remoting_SoapServices_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<PurchaseResult_RewardItem>_TypeInfo);
    FUN_02e3ca1c(System_Runtime_Remoting_Metadata_SoapTypeAttribute_TypeInfo);
    bRam0000000006e9b699 = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  lStack_88 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_bc = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  iStack_128 = 0;
  iStack_124 = 0;
  if (cRam0000000006e9b694 == '\0') {
    FUN_02e3ca1c(Fusion_Photon_Realtime_ServerConnection_TypeInfo);
    cRam0000000006e9b694 = '\x01';
  }
  cVar11 = *(char *)(*(long *)(*(long *)Fusion_Photon_Realtime_ServerConnection_TypeInfo + 0xb8) + 8
                    );
  *param_11 = 1;
  if (param_9 != 0) {
    lVar27 = *(long *)(param_9 + 0x60);
    FUN_0633642c(param_5);
    *param_8 = param_7;
    if (param_6 != 0) {
      uVar13 = *(uint *)(param_6 + 0x18);
      if ((int)uVar13 <= param_7) {
        return 0;
      }
      bVar1 = false;
      iVar16 = 0;
      uVar19 = 0;
      iVar20 = 0;
      uVar21 = 0;
      uVar23 = 0;
      bVar8 = 0;
      bVar3 = 0;
      puVar26 = (uint *)(param_6 + (long)param_7 * 0x10 + 0x24);
LAB_0633203c:
      uVar33 = (undefined4)param_4;
      fVar31 = (float)param_3;
      uVar15 = (undefined4)param_2;
      uVar14 = (uint)uVar23;
      if (uVar13 <= param_7 + uVar14) goto LAB_063362cc;
      uVar13 = *puVar26;
      if (uVar13 == 0) {
        return 0;
      }
      lVar28 = *(long *)(param_5 + 0x30);
      if (lVar28 == 0) goto LAB_06335220;
      if (uVar13 == 0x3c) {
        return 0;
      }
      uVar4 = *(uint *)(lVar28 + 0x18);
      if ((long)(int)uVar4 <= (long)uVar23) {
        return 0;
      }
      if (uVar13 == 0x3e) {
        *param_8 = param_7 + uVar14;
        if (uVar4 <= uVar14) goto LAB_063362cc;
        *(undefined2 *)(lVar28 + uVar23 * 2 + 0x20) = 0;
        lVar30 = *(long *)(param_5 + 0x19d0);
        if (*(char *)(param_5 + 0x328) == '\0') {
          if (lVar30 == 0) goto LAB_06335220;
        }
        else {
          if (lVar30 == 0) goto LAB_06335220;
          if (*(int *)(lVar30 + 0x18) == 0) goto LAB_063362cc;
          if (*(int *)(lVar30 + 0x20) != -0x11878bc5) {
            return 0;
          }
        }
        iVar20 = *(int *)(lVar30 + 0x18);
        if (iVar20 == 0) goto LAB_063362cc;
        uVar13 = *(uint *)(lVar30 + 0x20);
        if (uVar13 == 0xee78743b) {
          *(undefined1 *)(param_5 + 0x328) = 0;
          return 1;
        }
        sVar6 = *(short *)(lVar28 + 0x20);
        if ((sVar6 == 0x23) && (uVar14 == 4)) {
          if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar18 = 4;
        }
        else if ((sVar6 == 0x23) && (uVar14 == 5)) {
          if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar18 = 5;
        }
        else if ((sVar6 == 0x23) && (uVar14 == 7)) {
          if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar18 = 7;
        }
        else {
          if ((sVar6 != 0x23) || (uVar14 != 9)) {
            if ((int)uVar13 < 0x65d) {
              if ((int)uVar13 < -0x325312e0) {
                if (uVar13 < 0xa6c747d4) {
                  if (0x9dac6cf1 < uVar13) {
                    if (uVar13 < 0xa1903fc8) {
                      if (uVar13 == 0x9e50e566) {
                        *(undefined4 *)(param_5 + 0x2f0) = 0;
                        *(undefined1 *)(param_5 + 0x2f4) = 0;
                        return 1;
                      }
                      if (uVar13 != 0xa1903fc7) {
                        return 0;
                      }
                      uVar15 = *(undefined4 *)(lVar30 + 0x2c);
                      uVar33 = *(undefined4 *)(lVar30 + 0x30);
                      if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                        thunk_FUN_02e9a04c();
                      }
                      fVar31 = (float)FUN_063487dc(lVar28,uVar15,uVar33,0);
                      if (fVar31 == -32768.0) {
                        return 0;
                      }
                      if (iVar16 == 2) {
                        return 0;
                      }
                      if (iVar16 == 1) {
                        fVar31 = fVar31 * *(float *)(param_5 + 0xf4);
                      }
                      *(float *)(param_5 + 0x2ec) = fVar31;
                      return 1;
                    }
                    if (uVar13 == 0xa5c050bc) {
                      uVar15 = *(undefined4 *)(lVar30 + 0x2c);
                      uVar33 = *(undefined4 *)(lVar30 + 0x30);
                      if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                        thunk_FUN_02e9a04c();
                      }
                      fVar31 = (float)FUN_063487dc(lVar28,uVar15,uVar33,0);
                      if (fVar31 == -32768.0) {
                        return 0;
                      }
                      if (iVar16 != 0) {
                        if (iVar16 == 2) {
                          fVar31 = (fVar31 * *(float *)(param_5 + 0x58)) / 100.0;
                        }
                        else {
                          fVar31 = fVar31 * *(float *)(param_5 + 0xf4);
                        }
                      }
                      uVar18 = *(undefined8 *)Game_Views_Voxels_SliceMap_TypeInfo;
                      *(float *)(param_5 + 0x300) = fVar31;
                      FUN_0473c7b8(param_5 + 0x308,uVar18);
                      *(undefined4 *)(param_5 + 0x2f8) = *(undefined4 *)(param_5 + 0x300);
                      return 1;
                    }
                    if (uVar13 != 0xa62e8917) {
                      if (uVar13 != 0xa6c747d3) {
                        return 0;
                      }
                      uVar15 = FUN_0473c7fc(param_5 + 0x308,
                                            *(undefined8 *)Fusion_Protocol_Snapshot_TypeInfo);
                      *(undefined4 *)(param_5 + 0x300) = uVar15;
                      return 1;
                    }
                    uVar18 = 8;
                    uVar13 = *(uint *)(param_5 + 0x124) | 8;
                    goto LAB_06334a28;
                  }
                  if (0x8f5a791e < uVar13) {
                    if (uVar13 != 0x9176b2c9) {
                      if (uVar13 == 0x9312449e) {
                        uStack_bc = *(undefined4 *)(lVar30 + 0x24);
                        if (*(char *)(param_5 + 0x1581) == '\0') {
                          return 1;
                        }
                        FUN_0473af64(param_5 + 0x2c0,uStack_bc,
                                     *(undefined8 *)
                                      System_Runtime_Remoting_SingletonIdentity_TypeInfo);
                        uVar18 = FUN_05603500(&uStack_bc,0);
                        uVar25 = FUN_05603500(param_5 + 0x32c,0);
                        uVar18 = FUN_0548db04(*(undefined8 *)
                                               System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>_TypeInfo
                                              ,uVar18,*(undefined8 *)
                                                                                                              
                                                  System_Collections_Generic_List<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>_TypeInfo
                                              ,uVar25,0);
                        if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
                          thunk_FUN_02e9a04c(*(long *)PTR_DAT_06a2ed98);
                        }
                        FUN_062244a4(uVar18,0);
                        return 1;
                      }
                      if (uVar13 != 0x9dac6cf1) {
                        return 0;
                      }
                      *(undefined8 *)(param_5 + 0x358) = 0;
                      return 1;
                    }
                    lVar27 = FUN_0473c270(param_5 + 0x290,
                                          *(undefined8 *)
                                           System_Runtime_Remoting_Metadata_SoapAttribute_TypeInfo);
                    *(long *)(param_5 + 0x288) = lVar27;
                    plVar24 = (long *)(param_5 + 0x288);
LAB_063359f8:
                    thunk_FUN_02ee2be8(plVar24,lVar27);
                    return 1;
                  }
                  if (uVar13 != 0x88ce15e6) {
                    if (uVar13 != 0x8f5a791e) {
                      return 0;
                    }
                    uVar15 = *(undefined4 *)(lVar30 + 0x2c);
                    uVar33 = *(undefined4 *)(lVar30 + 0x30);
                    if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                    }
                    fVar31 = (float)FUN_063487dc(lVar28,uVar15,uVar33,0);
                    if (fVar31 == -32768.0) {
                      return 0;
                    }
                    uVar13 = 0x80000000;
                    if (fVar31 != INFINITY) {
                      uVar13 = (int)fVar31;
                    }
                    if ((int)uVar13 < 0x191) {
                      if ((int)uVar13 < 0xc9) {
                        if ((uVar13 == 100) || (uVar13 == 200)) goto LAB_06335744;
                      }
                      else if ((uVar13 == 300) || (uVar13 == 400)) goto LAB_06335744;
                    }
                    else if (uVar13 < 0x259) {
                      if ((uVar13 == 500) || (uVar13 == 600)) goto LAB_06335744;
                    }
                    else if ((uVar13 == 700) || ((uVar13 == 800 || (uVar13 == 900)))) {
LAB_06335744:
                      *(uint *)(param_5 + 0x134) = uVar13;
                    }
                    uVar15 = *(undefined4 *)(param_5 + 0x134);
                    uVar18 = *(undefined8 *)System_Drawing_SizeF_TypeInfo;
                    param_5 = param_5 + 0x138;
LAB_06335884:
                    FUN_0473b4cc(param_5,uVar15,uVar18);
                    return 1;
                  }
                  uVar15 = *(undefined4 *)(lVar30 + 0x24);
                  uVar23 = FUN_0631cc84(uVar15,&uStack_b0,0);
                  uVar18 = uStack_b0;
                  puVar9 = PTR_DAT_06a2ed80;
                  if ((uVar23 & 1) == 0) {
                    if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                    }
                    uVar23 = FUN_062696b0(uVar18,0,0);
                    if ((uVar23 & 1) != 0) {
                      if (cVar11 != '\0') goto LAB_06336070;
                      if ((lVar27 == 0) || (lVar28 = *(long *)(param_5 + 0x19d0), lVar28 == 0))
                      goto LAB_06335220;
                      if (*(int *)(lVar28 + 0x18) == 0) goto LAB_063362cc;
                      uVar25 = *(undefined8 *)(lVar27 + 0x80);
                      uVar18 = FUN_05493cb8(0,*(undefined8 *)(param_5 + 0x30),
                                            *(undefined4 *)(lVar28 + 0x2c),
                                            *(undefined4 *)(lVar28 + 0x30),0);
                      uVar18 = FUN_05482ce0(uVar25,uVar18,0);
                      uStack_b0 = FUN_03a73420(uVar18,*(undefined8 *)
                                                       System_Data_Common_SingleStorage_TypeInfo);
                    }
                    uVar18 = uStack_b0;
                    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                    }
                    uVar23 = FUN_062696b0(uVar18,0,0);
                    if ((uVar23 & 1) != 0) {
                      return 0;
                    }
                    FUN_0631ca60(uVar15,uStack_b0,0);
                    *(undefined8 *)(param_5 + 0x288) = uStack_b0;
                  }
                  else {
                    *(undefined8 *)(param_5 + 0x288) = uStack_b0;
                  }
                  thunk_FUN_02ee2be8(param_5 + 0x288,uStack_b0);
                  lVar27 = *(long *)(param_5 + 0x19d0);
                  *(undefined1 *)(param_5 + 0x2b8) = 0;
                  if (lVar27 == 0) goto LAB_06335220;
                  uVar13 = 1;
                  goto LAB_06335198;
                }
                if (uVar13 < 0xb93c7ef2) {
                  if (0xace2bca8 < uVar13) {
                    if (uVar13 == 0xaf32f89e) {
                      if (*(int *)(lVar30 + 0x28) == 1) {
                        uVar15 = *(undefined4 *)(lVar30 + 0x2c);
                        uVar33 = *(undefined4 *)(lVar30 + 0x30);
                        if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                          thunk_FUN_02e9a04c();
                        }
                        fVar31 = (float)FUN_063487dc(lVar28,uVar15,uVar33,0);
                        if (fVar31 == -32768.0) {
                          return 0;
                        }
                        if (iVar16 != 0) {
                          if (iVar16 == 2) {
                            fVar32 = 0.0;
                            if (*(float *)(param_5 + 0x360) != -1.0) {
                              fVar32 = *(float *)(param_5 + 0x360);
                            }
                            fVar31 = (fVar31 * (*(float *)(param_5 + 0x58) - fVar32)) / 100.0;
                          }
                          else {
                            fVar31 = fVar31 * *(float *)(param_5 + 0xf4);
                          }
                        }
                        if (fVar31 < 0.0) {
                          fVar31 = 0.0;
                        }
                        *(float *)(param_5 + 0x358) = fVar31;
                        goto LAB_06335350;
                      }
                      if (*(int *)(lVar30 + 0x28) != 0) {
                        return 0;
                      }
                      uVar13 = *(uint *)(lVar30 + 0x18);
                      if ((int)uVar13 < 2) {
                        return 1;
                      }
                      uVar21 = 1;
                      goto LAB_063347ec;
                    }
                    if (uVar13 != 0xb01dd609) {
                      if (uVar13 != 0xb93c7ef1) {
                        return 0;
                      }
                      if (*(char *)(param_5 + 0x1581) != '\0') {
                        iStack_128 = FUN_0473b1bc(param_5 + 0x2c0,
                                                  *(undefined8 *)
                                                   UnityEngine_UIElements_Slider_TypeInfo);
                        uVar18 = FUN_05603500(&iStack_128,0);
                        iStack_128 = *(int *)(param_5 + 0x32c) + -1;
                        uVar25 = FUN_05603500(&iStack_128,0);
                        uVar18 = FUN_0548db04(*(undefined8 *)
                                               System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>_TypeInfo
                                              ,uVar18,*(undefined8 *)
                                                                                                              
                                                  System_Collections_Generic_List<PurchaseResult_RewardItem>_TypeInfo
                                              ,uVar25,0);
                        if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
                          thunk_FUN_02e9a04c(*(long *)PTR_DAT_06a2ed98);
                        }
                        FUN_062244a4(uVar18,0);
                      }
                      FUN_0473afac(param_5 + 0x2c0,
                                   *(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowQuaternionTweenableVariable_TypeInfo
                                  );
                      return 1;
                    }
                    uVar15 = *(undefined4 *)(lVar30 + 0x2c);
                    uVar33 = *(undefined4 *)(lVar30 + 0x30);
                    if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                    }
                    fVar31 = (float)FUN_063487dc(lVar28,uVar15,uVar33,0);
                    if (fVar31 == -32768.0) {
                      return 0;
                    }
                    lVar27 = *(long *)(param_5 + 0x19d0);
                    if (lVar27 == 0) goto LAB_06335220;
                    iVar16 = *(int *)(lVar27 + 0x18);
                    if (iVar16 != 0) {
                      iVar20 = *(int *)(lVar27 + 0x34);
                      if (iVar20 == 0) {
LAB_06334168:
                        *(float *)(param_5 + 0x2f0) = fVar31;
                      }
                      else {
                        if (iVar20 == 2) {
                          return 0;
                        }
                        if (iVar20 == 1) {
                          fVar31 = fVar31 * *(float *)(param_5 + 0xf4);
                          goto LAB_06334168;
                        }
                      }
                      if (iVar16 != 1) {
                        if (*(int *)(lVar27 + 0x38) != 0x22bcfb9a) {
                          return 1;
                        }
                        uVar15 = *(undefined4 *)(lVar27 + 0x44);
                        uVar33 = *(undefined4 *)(lVar27 + 0x48);
                        uVar18 = *(undefined8 *)(param_5 + 0x30);
                        if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                          thunk_FUN_02e9a04c();
                        }
                        fVar31 = (float)FUN_063487dc(uVar18,uVar15,uVar33,0);
                        *(bool *)(param_5 + 0x2f4) = fVar31 != 0.0;
                        return 1;
                      }
                    }
                    goto LAB_063362cc;
                  }
                  if (uVar13 == 0xa97f2798) {
                    if ((*(byte *)(param_9 + 0x58) >> 3 & 1) != 0) {
                      return 1;
                    }
                    cVar11 = FUN_063526c8(param_5 + 0x128,8,0);
                    if (cVar11 != '\0') {
                      return 1;
                    }
                    uVar13 = *(uint *)(param_5 + 0x124) & 0xfffffff7;
                    goto LAB_06334400;
                  }
                  if (uVar13 != 0xace2bca8) {
                    return 0;
                  }
                  if (param_10 == 0) {
                    return 1;
                  }
                  if (*(char *)(param_5 + 0x1581) == '\0') {
                    return 1;
                  }
                  uVar13 = *(int *)(param_5 + 0x32c) - 1;
                  if (0 < *(int *)(param_5 + 0x32c)) {
                    fVar31 = *(float *)(param_5 + 0x2f8) - *(float *)(param_5 + 0x2ec);
                    *(float *)(param_5 + 0x2f8) = fVar31;
                    lVar27 = *(long *)(param_10 + 0x30);
                    if (lVar27 == 0) goto LAB_06335220;
                    if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_063362cc;
                    *(float *)(lVar27 + (ulong)uVar13 * 0x178 + 0x158) = fVar31;
                  }
                  *(undefined4 *)(param_5 + 0x2ec) = 0;
                  return 1;
                }
                if (uVar13 < 0xc465179a) {
                  if (uVar13 == 0xbe648664) {
                    FUN_0473bb98(&uStack_190,param_5 + 0x80,
                                 *(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_TypeInfo
                                );
                    *(undefined8 *)(param_5 + 0x70) = uStack_178;
                    thunk_FUN_02ee2be8((undefined8 *)(param_5 + 0x70));
                    *(undefined4 *)(param_5 + 0x78) = (undefined4)uStack_190;
                    return 1;
                  }
                  if (uVar13 != 0xc4651799) {
                    return 0;
                  }
                  uVar15 = *(undefined4 *)(lVar30 + 0x2c);
                  uVar34 = *(undefined4 *)(lVar30 + 0x30);
                  if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                  }
                  fVar31 = (float)FUN_063487dc(lVar28,uVar15,uVar34,0);
                  if (fVar31 == -32768.0) {
                    return 0;
                  }
                  fVar31 = fVar31 * DAT_01317c98;
                  uVar15 = 0;
                  uVar34 = FUN_062564c8(0,0);
LAB_063341e4:
                  *(undefined4 *)(param_5 + 0x19b4) = uVar34;
                  *(undefined4 *)(param_5 + 0x19b8) = uVar15;
                  *(float *)(param_5 + 0x19bc) = fVar31;
                  *(undefined4 *)(param_5 + 0x19c0) = uVar33;
                  return 1;
                }
                if (uVar13 != 0xc4e67de9) {
                  if (uVar13 == 0xc5a3d774) {
                    return 0;
                  }
                  if (uVar13 != 0xcdaced1f) {
                    return 0;
                  }
                  uVar15 = *(undefined4 *)(lVar30 + 0x2c);
                  uVar33 = *(undefined4 *)(lVar30 + 0x30);
                  if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                  }
                  fVar31 = (float)FUN_063487dc(lVar28,uVar15,uVar33,0);
                  if (fVar31 == -32768.0) {
                    return 0;
                  }
                  if (iVar16 != 0) {
                    if (iVar16 == 2) {
                      fVar31 = (fVar31 * *(float *)(param_5 + 0x58)) / 100.0;
                    }
                    else {
                      fVar31 = fVar31 * *(float *)(param_5 + 0xf4);
                    }
                  }
                  *(float *)(param_5 + 0x2fc) = fVar31;
                  *(float *)(param_5 + 0x2f8) = *(float *)(param_5 + 0x2f8) + fVar31;
                  return 1;
                }
                uVar15 = *(undefined4 *)(lVar30 + 0x24);
                *(undefined4 *)(param_5 + 0x1584) = 0xffffffff;
                puVar9 = PTR_DAT_06a2ed80;
                if (*(uint *)(lVar30 + 0x28) < 2) {
                  if (lVar27 == 0) goto LAB_06335220;
                  uVar18 = *(undefined8 *)(lVar27 + 0x50);
                  if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                  }
                  uVar23 = FUN_06267b6c(uVar18,0,0);
                  if ((uVar23 & 1) == 0) {
                    if (cRam0000000006e9b6ac == '\0') {
                      FUN_02e3ca1c(Game_Core_Data_SocialLinkType_TypeInfo);
                      cRam0000000006e9b6ac = '\x01';
                    }
                    puVar10 = Game_Core_Data_SocialLinkType_TypeInfo;
                    uVar18 = *(undefined8 *)
                              (*(long *)(*(long *)Game_Core_Data_SocialLinkType_TypeInfo + 0xb8) + 8
                              );
                    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                    }
                    uVar23 = FUN_06267b6c(uVar18,0,0);
                    if ((uVar23 & 1) != 0) {
                      if (cRam0000000006e9b6ac == '\0') {
                        FUN_02e3ca1c(Game_Core_Data_SocialLinkType_TypeInfo);
                        cRam0000000006e9b6ac = '\x01';
                      }
                      uVar18 = *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
                      goto LAB_06335654;
                    }
                  }
                  else {
                    uVar18 = *(undefined8 *)(lVar27 + 0x50);
LAB_06335654:
                    *(undefined8 *)(param_5 + 0xe0) = uVar18;
                    thunk_FUN_02ee2be8();
                  }
                  uVar18 = *(undefined8 *)(param_5 + 0xe0);
                  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                  }
                  uVar23 = FUN_062696b0(uVar18,0,0);
                  if ((uVar23 & 1) != 0) {
                    return 0;
                  }
                }
                else {
                  uVar23 = FUN_0631cbdc(uVar15,&uStack_b8,0);
                  uVar18 = uStack_b8;
                  puVar9 = PTR_DAT_06a2ed80;
                  if ((uVar23 & 1) == 0) {
                    if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                    }
                    uVar23 = FUN_062696b0(uVar18,0,0);
                    uVar18 = uStack_b8;
                    if ((uVar23 & 1) != 0) {
                      if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                        thunk_FUN_02e9a04c();
                      }
                      uVar23 = FUN_062696b0(uVar18,0,0);
                      if ((uVar23 & 1) != 0) {
                        if (cVar11 != '\0') goto LAB_06336070;
                        if ((lVar27 == 0) || (lVar28 = *(long *)(param_5 + 0x19d0), lVar28 == 0))
                        goto LAB_06335220;
                        if (*(int *)(lVar28 + 0x18) == 0) goto LAB_063362cc;
                        uVar25 = *(undefined8 *)(lVar27 + 0x58);
                        uVar18 = FUN_05493cb8(0,*(undefined8 *)(param_5 + 0x30),
                                              *(undefined4 *)(lVar28 + 0x2c),
                                              *(undefined4 *)(lVar28 + 0x30),0);
                        uVar18 = FUN_05482ce0(uVar25,uVar18,0);
                        uStack_b8 = FUN_03a73420(uVar18,*(undefined8 *)
                                                                                                                  
                                                  System_Runtime_Remoting_SingleCallIdentity_TypeInfo
                                                );
                      }
                    }
                    uVar18 = uStack_b8;
                    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                    }
                    uVar23 = FUN_062696b0(uVar18,0,0);
                    if ((uVar23 & 1) != 0) {
                      return 0;
                    }
                    UnityEngine_UIElements_UIR_JobMerger__MergeAndReset(uVar15,uStack_b8,0);
                    *(undefined8 *)(param_5 + 0xe0) = uStack_b8;
                  }
                  else {
                    *(undefined8 *)(param_5 + 0xe0) = uStack_b8;
                  }
                  thunk_FUN_02ee2be8(param_5 + 0xe0,uStack_b8);
                }
                if (cVar11 != '\0') {
                  if (*(long *)(param_5 + 0xe0) == 0) goto LAB_06335220;
                  if (*(long *)(*(long *)(param_5 + 0xe0) + 0x40) == 0) {
LAB_06336070:
                    *param_11 = 0;
                    return 0;
                  }
                }
                lVar27 = *(long *)(param_5 + 0x19d0);
                if (lVar27 == 0) goto LAB_06335220;
                if (*(int *)(lVar27 + 0x18) == 0) goto LAB_063362cc;
                if (*(int *)(lVar27 + 0x28) == 1) {
                  uVar15 = *(undefined4 *)(lVar27 + 0x2c);
                  uVar33 = *(undefined4 *)(lVar27 + 0x30);
                  uVar18 = *(undefined8 *)(param_5 + 0x30);
                  if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                  }
                  fVar31 = (float)FUN_063487dc(uVar18,uVar15,uVar33,0);
                  iVar16 = -0x80000000;
                  if (fVar31 != INFINITY) {
                    iVar16 = (int)fVar31;
                  }
                  if (iVar16 == -0x8000) {
                    return 0;
                  }
                  if ((*(long *)(param_5 + 0xe0) == 0) ||
                     (lVar27 = FUN_06340cdc(*(long *)(param_5 + 0xe0),0), lVar27 == 0))
                  goto LAB_06335220;
                  if (*(int *)(lVar27 + 0x18) + -1 < iVar16) {
                    return 0;
                  }
                  *(int *)(param_5 + 0x1584) = iVar16;
                }
                uVar15 = FUN_031c4f40(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                lVar27 = *(long *)(param_5 + 0x19d0);
                *(undefined4 *)(param_5 + 0x1588) = uVar15;
                *(undefined1 *)(param_5 + 0x19e9) = 0;
                if (lVar27 == 0) goto LAB_06335220;
                uVar13 = 0;
                goto LAB_06335cf8;
              }
              if (-0x1044a318 < (int)uVar13) {
                if (0x53 < (int)uVar13) {
                  if (uVar13 < 0x64e) {
                    if (uVar13 != 0x55) {
                      if (uVar13 == 0x646) {
                        if ((*(byte *)(param_9 + 0x58) >> 1 & 1) != 0) {
                          return 1;
                        }
                        uVar15 = FUN_0473afac(param_5 + 0x268,
                                              *(undefined8 *)
                                               UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowQuaternionTweenableVariable_TypeInfo
                                             );
                        *(undefined4 *)(param_5 + 0x19a4) = uVar15;
                        cVar11 = FUN_063526c8(param_5 + 0x128,2,0);
                        if (cVar11 != '\0') {
                          return 1;
                        }
                        uVar13 = *(uint *)(param_5 + 0x124) & 0xfffffffd;
                        goto LAB_06334400;
                      }
                      if (uVar13 != 0x64d) {
                        return 0;
                      }
                      if ((*(byte *)(param_9 + 0x58) & 1) != 0) {
                        return 1;
                      }
                      cVar11 = FUN_063526c8(param_5 + 0x128,1,0);
                      if (cVar11 != '\0') {
                        return 1;
                      }
                      uVar18 = *(undefined8 *)UnityEngine_UIElements_SliderInt_TypeInfo;
                      *(uint *)(param_5 + 0x124) = *(uint *)(param_5 + 0x124) & 0xfffffffe;
LAB_06334f88:
                      uVar15 = FUN_0473b6dc(param_5 + 0x138,uVar18);
                      *(undefined4 *)(param_5 + 0x134) = uVar15;
                      return 1;
                    }
                    *(uint *)(param_5 + 0x124) = *(uint *)(param_5 + 0x124) | 4;
                    FUN_063525c4(param_5 + 0x128,4,0);
                    lVar27 = *(long *)(param_5 + 0x19d0);
                    if (lVar27 == 0) goto LAB_06335220;
                    if ((*(uint *)(lVar27 + 0x18) & 0xfffffffe) != 0) {
                      if (*(int *)(lVar27 + 0x38) == 0x4e3381d) {
                        uVar15 = *(undefined4 *)(lVar27 + 0x44);
                        uVar33 = *(undefined4 *)(lVar27 + 0x48);
                        uVar18 = *(undefined8 *)(param_5 + 0x30);
                        if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                          thunk_FUN_02e9a04c();
                        }
                        uVar13 = FUN_06348388(uVar18,uVar15,uVar33,0);
                        *(uint *)(param_5 + 0x1b0) = uVar13;
                        bVar3 = *(byte *)(param_5 + 0x1af);
                        if (uVar13 >> 0x18 <= (uint)*(byte *)(param_5 + 0x1af)) {
                          bVar3 = (byte)(uVar13 >> 0x18);
                        }
                        *(byte *)(param_5 + 0x1b3) = bVar3;
                        if (param_10 != 0) {
                          *(undefined1 *)(param_10 + 0x68) = 1;
                        }
                      }
                      else {
                        *(undefined4 *)(param_5 + 0x1b0) = *(undefined4 *)(param_5 + 0x1ac);
                      }
                      uVar13 = *(uint *)(param_5 + 0x1b0);
                      uVar18 = *(undefined8 *)System_Drawing_Size_TypeInfo;
                      param_5 = param_5 + 0x1d8;
                      goto LAB_0633272c;
                    }
                    goto LAB_063362cc;
                  }
                  if (uVar13 != 0x64e) {
                    if (uVar13 == 0x65a) {
                      if (((*(byte *)(param_9 + 0x58) >> 2 & 1) == 0) &&
                         (cVar11 = FUN_063526c8(param_5 + 0x128,4,0), cVar11 == '\0')) {
                        *(uint *)(param_5 + 0x124) = *(uint *)(param_5 + 0x124) & 0xfffffffb;
                      }
                      uVar15 = FUN_0473a37c(param_5 + 0x1d8,
                                            *(undefined8 *)
                                             System_Runtime_Remoting_Metadata_SoapFieldAttribute_TypeInfo
                                           );
                      *(undefined4 *)(param_5 + 0x1b0) = uVar15;
                      return 1;
                    }
                    if (uVar13 != 0x65c) {
                      return 0;
                    }
                    if (((*(byte *)(param_9 + 0x58) >> 6 & 1) == 0) &&
                       (cVar11 = FUN_063526c8(param_5 + 0x128,0x40,0), cVar11 == '\0')) {
                      *(uint *)(param_5 + 0x124) = *(uint *)(param_5 + 0x124) & 0xffffffbf;
                    }
                    uVar15 = FUN_0473a37c(param_5 + 0x1f8,
                                          *(undefined8 *)
                                           System_Runtime_Remoting_Metadata_SoapFieldAttribute_TypeInfo
                                         );
                    *(undefined4 *)(param_5 + 0x1b4) = uVar15;
                    return 1;
                  }
                  if (*(char *)(param_5 + 0x1581) == '\0') {
                    return 1;
                  }
                  if (param_10 == 0) {
                    return 1;
                  }
                  if (*(char *)(param_5 + 0x19e8) != '\0') {
                    return 1;
                  }
                  lVar27 = *(long *)(param_10 + 0x40);
                  if (lVar27 != 0) {
                    lVar28 = *(long *)(lVar27 + 0x18);
                    if ((lVar28 != 0) && (iVar16 = *(int *)(param_10 + 0x20), 0 < iVar16))
                    goto LAB_063344e0;
                    if (*(long *)(param_9 + 0x60) != 0) {
                      if (*(char *)(*(long *)(param_9 + 0x60) + 0x90) == '\0') {
                        return 1;
                      }
                      puVar22 = (undefined8 *)System_Runtime_Remoting_SoapServices_TypeInfo;
                      if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
                        thunk_FUN_02e9a04c();
                        puVar22 = (undefined8 *)System_Runtime_Remoting_SoapServices_TypeInfo;
                      }
                      goto LAB_06335844;
                    }
                  }
                  goto LAB_06335220;
                }
                if (0x41 < (int)uVar13) {
                  if (uVar13 == 0x42) {
                    *(uint *)(param_5 + 0x124) = *(uint *)(param_5 + 0x124) | 1;
                    FUN_063525c4(param_5 + 0x128,1,0);
                    *(undefined4 *)(param_5 + 0x134) = 700;
                    return 1;
                  }
                  if (uVar13 != 0x49) {
                    if (uVar13 != 0x53) {
                      return 0;
                    }
                    *(uint *)(param_5 + 0x124) = *(uint *)(param_5 + 0x124) | 0x40;
                    FUN_063525c4(param_5 + 0x128,0x40,0);
                    lVar27 = *(long *)(param_5 + 0x19d0);
                    if (lVar27 == 0) goto LAB_06335220;
                    if ((*(uint *)(lVar27 + 0x18) & 0xfffffffe) != 0) {
                      if (*(int *)(lVar27 + 0x38) == 0x4e3381d) {
                        uVar15 = *(undefined4 *)(lVar27 + 0x44);
                        uVar33 = *(undefined4 *)(lVar27 + 0x48);
                        uVar18 = *(undefined8 *)(param_5 + 0x30);
                        if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                          thunk_FUN_02e9a04c();
                        }
                        uVar13 = FUN_06348388(uVar18,uVar15,uVar33,0);
                        *(uint *)(param_5 + 0x1b4) = uVar13;
                        bVar3 = *(byte *)(param_5 + 0x1af);
                        if (uVar13 >> 0x18 <= (uint)*(byte *)(param_5 + 0x1af)) {
                          bVar3 = (byte)(uVar13 >> 0x18);
                        }
                        *(byte *)(param_5 + 0x1b7) = bVar3;
                        if (param_10 != 0) {
                          *(undefined1 *)(param_10 + 0x68) = 1;
                        }
                      }
                      else {
                        *(undefined4 *)(param_5 + 0x1b4) = *(undefined4 *)(param_5 + 0x1ac);
                      }
                      uVar13 = *(uint *)(param_5 + 0x1b4);
                      uVar18 = *(undefined8 *)System_Drawing_Size_TypeInfo;
                      param_5 = param_5 + 0x1f8;
                      goto LAB_0633272c;
                    }
                    goto LAB_063362cc;
                  }
                  *(uint *)(param_5 + 0x124) = *(uint *)(param_5 + 0x124) | 2;
                  FUN_063525c4(param_5 + 0x128,2,0);
                  lVar27 = *(long *)(param_5 + 0x19d0);
                  if (lVar27 == 0) goto LAB_06335220;
                  if ((*(uint *)(lVar27 + 0x18) & 0xfffffffe) == 0) goto LAB_063362cc;
                  if (*(int *)(lVar27 + 0x38) == 0x47db7c1) {
                    uVar15 = *(undefined4 *)(lVar27 + 0x44);
                    uVar33 = *(undefined4 *)(lVar27 + 0x48);
                    uVar18 = *(undefined8 *)(param_5 + 0x30);
                    if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                    }
                    fVar31 = (float)FUN_063487dc(uVar18,uVar15,uVar33,0);
                    uVar13 = (uint)fVar31;
                    uVar21 = 0x80000000;
                    if (fVar31 != INFINITY) {
                      uVar21 = uVar13;
                    }
                    *(uint *)(param_5 + 0x19a4) = uVar21;
                    if (0x168 < uVar21 + 0xb4) {
                      return 0;
                    }
                  }
                  else {
                    if (*(long *)(param_5 + 0x68) == 0) goto LAB_06335220;
                    uVar13 = FUN_0631da60(*(long *)(param_5 + 0x68),0);
                    uVar13 = uVar13 & 0xff;
                    *(uint *)(param_5 + 0x19a4) = uVar13;
                  }
                  FUN_0473af64(param_5 + 0x268,uVar13,
                               *(undefined8 *)System_Runtime_Remoting_SingletonIdentity_TypeInfo);
                  return 1;
                }
                if (uVar13 == 0xff568194) {
                  *(undefined4 *)(param_5 + 0x180) = 0;
                  return 1;
                }
                if (uVar13 != 0x41) {
                  return 0;
                }
                if (*(char *)(param_5 + 0x1581) == '\0') {
                  return 1;
                }
                if (*(char *)(param_5 + 0x19e8) != '\0') {
                  return 1;
                }
                if ((param_10 != 0) && (*(char *)(param_9 + 0xa8) != '\0')) {
                  FUN_06336490(param_5,param_10);
                  plVar24 = (long *)(param_10 + 0x40);
                  lVar27 = *plVar24;
                  if (lVar27 == 0) goto LAB_06335220;
                  uVar13 = *(uint *)(param_10 + 0x20);
                  if (*(int *)(lVar27 + 0x18) < (int)(uVar13 + 1)) {
                    if (*(int *)(*(long *)ExitGames_Client_Photon_SimulationItem_TypeInfo + 0xe4) ==
                        0) {
                      thunk_FUN_02e9a04c();
                    }
                    FUN_03ab7dcc(plVar24,uVar13 + 1,
                                 *(undefined8 *)
                                  UnityEngine_Experimental_Rendering_SinglepassKeywords_TypeInfo);
                    lVar27 = *plVar24;
                    if (lVar27 == 0) goto LAB_06335220;
                  }
                  if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_063362cc;
                  lVar27 = lVar27 + (long)(int)uVar13 * 0x30;
                  uVar15 = *(undefined4 *)(param_5 + 0x32c);
                  puVar22 = (undefined8 *)(lVar27 + 0x20);
                  *puVar22 = _UNK_01318468;
                  *(undefined4 *)(lVar27 + 0x2c) = uVar15;
                  lVar27 = *(long *)(param_5 + 0x19d0);
                  if (lVar27 == 0) goto LAB_06335220;
                  if (*(uint *)(lVar27 + 0x18) < 2) goto LAB_063362cc;
                  iVar16 = *(int *)(lVar27 + 0x48);
                  iVar20 = iVar16;
                  if ((int)uVar21 < 1) goto LAB_06336094;
                  goto LAB_063335dc;
                }
                if (iVar20 == 1) goto LAB_063362cc;
                if (param_10 == 0) {
                  return 1;
                }
                if (*(int *)(lVar30 + 0x38) != 0x26afb9) {
                  return 1;
                }
                FUN_06336490(param_5,param_10);
                plVar24 = (long *)(param_10 + 0x40);
                lVar27 = *plVar24;
                if (lVar27 == 0) goto LAB_06335220;
                uVar13 = *(uint *)(param_10 + 0x20);
                if (*(int *)(lVar27 + 0x18) < (int)(uVar13 + 1)) {
                  if (*(int *)(*(long *)ExitGames_Client_Photon_SimulationItem_TypeInfo + 0xe4) == 0
                     ) {
                    thunk_FUN_02e9a04c();
                  }
                  FUN_03ab7dcc(plVar24,uVar13 + 1,
                               *(undefined8 *)
                                UnityEngine_Experimental_Rendering_SinglepassKeywords_TypeInfo);
                  lVar27 = *plVar24;
                  if (lVar27 == 0) goto LAB_06335220;
                }
                if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_063362cc;
                puVar17 = (undefined4 *)(lVar27 + 0x20 + (long)(int)uVar13 * 0x30);
                *puVar17 = 0x26afb9;
                puVar17[3] = *(undefined4 *)(param_5 + 0x32c);
                lVar28 = *(long *)(param_5 + 0x19d0);
                if (lVar28 == 0) goto LAB_06335220;
                if ((*(uint *)(lVar28 + 0x18) & 0xfffffffe) != 0) {
                  iVar16 = *(int *)(lVar28 + 0x44);
                  *(int *)(lVar27 + 0x20 + (long)(int)uVar13 * 0x30 + 4) = iVar16 + param_7;
                  uVar15 = *(undefined4 *)(lVar28 + 0x48);
                  uVar18 = *(undefined8 *)(param_5 + 0x30);
                  goto LAB_063346bc;
                }
                goto LAB_063362cc;
              }
              if (uVar13 < 0xd2d23292) {
                if (0xd078112f < uVar13) {
                  if (uVar13 != 0xd256d1de) {
                    if (uVar13 == 0xd26babf6) {
                      uVar34 = FUN_04241140(0);
                      goto LAB_063341e4;
                    }
                    if (uVar13 != 0xd2d23291) {
                      return 0;
                    }
                    FUN_0473b514(param_5 + 0x138,
                                 *(undefined8 *)
                                  System_Runtime_Remoting_Metadata_SoapMethodAttribute_TypeInfo);
                    if (*(int *)(param_5 + 0x124) == 1) {
                      *(undefined4 *)(param_5 + 0x134) = 700;
                      return 1;
                    }
                    uVar18 = *(undefined8 *)UnityEngine_UIElements_SliderInt_TypeInfo;
                    goto LAB_06334f88;
                  }
                  uVar18 = 0x20;
                  uVar13 = *(uint *)(param_5 + 0x124) | 0x20;
                  goto LAB_06334a28;
                }
                if (uVar13 == 0xd05efa5c) {
                  uVar15 = *(undefined4 *)(lVar30 + 0x2c);
                  uVar33 = *(undefined4 *)(lVar30 + 0x30);
                  if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                  }
                  fVar31 = (float)FUN_063487dc(lVar28,uVar15,uVar33,0);
                  if (fVar31 == -32768.0) {
                    return 0;
                  }
                  if (iVar16 == 2) {
                    if (*(long *)(param_5 + 0x68) == 0) goto LAB_06335220;
                    fVar36 = *(float *)(param_5 + 0xf4);
                    FUN_0631cfec(&uStack_190,*(long *)(param_5 + 0x68),0);
                    memcpy(&uStack_120,&uStack_190,0x60);
                    fVar32 = (float)FUN_0630f888(&uStack_120,0);
                    if (*(long *)(param_5 + 0x68) == 0) goto LAB_06335220;
                    FUN_0631cfec(&uStack_1f0,*(long *)(param_5 + 0x68),0);
                    memcpy(&uStack_120,&uStack_1f0,0x60);
                    fVar35 = (float)FUN_0630f890(&uStack_120,0);
                    if (*(long *)(param_9 + 0x50) == 0) goto LAB_06335220;
                    FUN_0631cfec(auStack_250,*(long *)(param_9 + 0x50),0);
                    memcpy(&uStack_120,auStack_250,0x60);
                    fVar37 = (float)FUN_0630f8b0(&uStack_120,0);
                    fVar31 = (fVar36 / fVar32) * fVar35 * ((fVar31 * fVar37) / 100.0);
                  }
                  else {
                    if (iVar16 != 1) {
                      *(float *)(param_5 + 0x2e4) = fVar31;
                      return 1;
                    }
                    fVar31 = fVar31 * *(float *)(param_5 + 0xf4);
                  }
                  *(float *)(param_5 + 0x2e4) = fVar31;
                  return 1;
                }
                if (uVar13 != 0xd078112f) {
                  return 0;
                }
              }
              else {
                if (0xe554f6f3 < uVar13) {
                  if (uVar13 == 0xe7ae3cb4) {
                    *(undefined1 *)(param_5 + 0x328) = 1;
                    return 1;
                  }
                  if (uVar13 != 0xedcbd276) {
                    if (uVar13 != 0xefbb5ce8) {
                      return 0;
                    }
                    uVar15 = *(undefined4 *)(lVar30 + 0x2c);
                    uVar33 = *(undefined4 *)(lVar30 + 0x30);
                    if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                    }
                    fVar31 = (float)FUN_063487dc(lVar28,uVar15,uVar33,0);
                    if (fVar31 == -32768.0) {
                      return 0;
                    }
                    if (iVar16 != 0) {
                      if (iVar16 == 2) {
                        fVar32 = 0.0;
                        if (*(float *)(param_5 + 0x360) != -1.0) {
                          fVar32 = *(float *)(param_5 + 0x360);
                        }
                        fVar31 = (fVar31 * (*(float *)(param_5 + 0x58) - fVar32)) / 100.0;
                      }
                      else {
                        fVar31 = fVar31 * *(float *)(param_5 + 0xf4);
                      }
                    }
                    if (fVar31 < 0.0) {
                      fVar31 = 0.0;
                    }
                    *(float *)(param_5 + 0x358) = fVar31;
                    return 1;
                  }
                  goto LAB_06333a3c;
                }
                if (uVar13 != 0xdd49c439) {
                  if (uVar13 != 0xe554f6f3) {
                    return 0;
                  }
                  uVar15 = *(undefined4 *)(lVar30 + 0x2c);
                  uVar33 = *(undefined4 *)(lVar30 + 0x30);
                  if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                  }
                  fVar31 = (float)FUN_063487dc(lVar28,uVar15,uVar33,0);
                  if (fVar31 == -32768.0) {
                    return 0;
                  }
                  if (iVar16 != 0) {
                    if (iVar16 == 2) {
                      fVar32 = 0.0;
                      if (*(float *)(param_5 + 0x360) != -1.0) {
                        fVar32 = *(float *)(param_5 + 0x360);
                      }
                      fVar31 = (fVar31 * (*(float *)(param_5 + 0x58) - fVar32)) / 100.0;
                    }
                    else {
                      fVar31 = fVar31 * *(float *)(param_5 + 0xf4);
                    }
                  }
                  if (fVar31 < 0.0) {
                    fVar31 = 0.0;
                  }
LAB_06335350:
                  *(float *)(param_5 + 0x35c) = fVar31;
                  return 1;
                }
              }
              if ((*(byte *)(param_9 + 0x58) >> 4 & 1) != 0) {
                return 1;
              }
              cVar11 = FUN_063526c8(param_5 + 0x128,0x10,0);
              if (cVar11 != '\0') {
                return 1;
              }
              uVar13 = *(uint *)(param_5 + 0x124) & 0xffffffef;
LAB_06334400:
              *(uint *)(param_5 + 0x124) = uVar13;
              return 1;
            }
            if (0x37b920a < uVar13) {
              if (uVar13 < 0xb863a17) {
                if (0x5989790 < uVar13) {
                  if (0x5fe5278 < uVar13) {
                    if (uVar13 != 0x64e48e6) {
                      if (uVar13 == 0xb863a0c) {
                        return 0;
                      }
                      if (uVar13 != 0xb863a16) {
                        return 0;
                      }
                      return 0;
                    }
                    uVar15 = *(undefined4 *)(lVar30 + 0x2c);
                    uVar33 = *(undefined4 *)(lVar30 + 0x30);
                    if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                    }
                    fVar31 = (float)FUN_063487dc(lVar28,uVar15,uVar33,0);
                    if (fVar31 == -32768.0) {
                      return 0;
                    }
                    if (iVar16 == 2) {
                      *(float *)(param_5 + 0x360) = (fVar31 * *(float *)(param_5 + 0x58)) / 100.0;
                      return 1;
                    }
                    if (iVar16 == 1) {
                      return 0;
                    }
                    *(float *)(param_5 + 0x360) = fVar31;
                    return 1;
                  }
                  if (uVar13 != 0x5f72764) {
                    if (uVar13 != 0x5fe5278) {
                      return 0;
                    }
                    uVar15 = *(undefined4 *)(lVar30 + 0x2c);
                    uVar33 = *(undefined4 *)(lVar30 + 0x30);
                    if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                    }
                    fVar31 = (float)FUN_063487dc(lVar28,uVar15,uVar33,0);
                    if (fVar31 == -32768.0) {
                      return 0;
                    }
                    *(float *)(param_5 + 0x19a8) = fVar31;
                    *(undefined8 *)(param_5 + 0x19ac) = 0x3f8000003f800000;
                    return 1;
                  }
                  uVar15 = *(undefined4 *)(lVar30 + 0x2c);
                  uVar33 = *(undefined4 *)(lVar30 + 0x30);
                  if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                  }
                  fVar31 = (float)FUN_063487dc(lVar28,uVar15,uVar33,0);
                  if (fVar31 == -32768.0) {
                    return 0;
                  }
                  if (iVar16 == 2) {
                    return 0;
                  }
                  if (iVar16 == 1) {
                    fVar31 = *(float *)(param_5 + 0x2f8) + fVar31 * *(float *)(param_5 + 0xf4);
                  }
                  else {
                    fVar31 = fVar31 + *(float *)(param_5 + 0x2f8);
                  }
LAB_063353c4:
                  *(float *)(param_5 + 0x2f8) = fVar31;
                  return 1;
                }
                if (0x47af054 < uVar13) {
                  if (uVar13 != 0x4e3381d) {
                    if (uVar13 == 0x4e4fbee) {
                      return 0;
                    }
                    if (uVar13 != 0x5989790) {
                      return 0;
                    }
                    *(undefined4 *)(param_5 + 0x2fc) = 0;
                    return 1;
                  }
                  if (param_10 != 0) {
                    *(undefined1 *)(param_10 + 0x68) = 1;
                  }
                  if (uVar4 < 7) goto LAB_063362cc;
                  if (*(short *)(lVar28 + 0x2c) == 0x23) {
                    iVar16 = 6;
LAB_06334fb8:
                    if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                    }
                    uVar13 = FUN_06348388(lVar28,iVar16,(int)uVar23 - iVar16,0);
LAB_06334fe4:
                    uVar18 = *(undefined8 *)System_Drawing_Size_TypeInfo;
                    *(uint *)(param_5 + 0x1ac) = uVar13;
                  }
                  else {
                    if (uVar4 == 7) goto LAB_063362cc;
                    if (*(short *)(lVar28 + 0x2e) == 0x23) {
                      uVar23 = (ulong)(uVar14 - 1);
                      iVar16 = 7;
                      goto LAB_06334fb8;
                    }
                    uVar13 = *(uint *)(lVar30 + 0x24);
                    if (0x22db44 < (int)uVar13) {
                      if (0x2cfabc < uVar13) {
                        if (uVar13 < 0x53084fc) {
                          if (uVar13 != 0x4d43b66) {
                            if (uVar13 == 0x4d51a27) {
                              uVar18 = 0;
                              uVar15 = 0;
                              uVar33 = 0;
                            }
                            else {
                              if (uVar13 != 0x53084fb) {
                                return 0;
                              }
                              uVar18 = 0;
                              uVar33 = 0;
                              uVar15 = 0x3f800000;
                            }
                            goto LAB_0633641c;
                          }
                          uVar21 = 0xff2a2aa5;
                          uVar13 = 0xff2a2aa5;
                        }
                        else {
                          if (uVar13 == 0x5b11b59) {
                            uVar15 = 0xff008080;
                            uVar13 = 0xff008080;
                            goto LAB_06336320;
                          }
                          if (uVar13 == 0x64c8d87) {
                            uVar18 = 0x3f800000;
                            uVar15 = 0x3f800000;
                            goto LAB_06336418;
                          }
                          if (uVar13 != 0x145436c0) {
                            return 0;
                          }
                          uVar21 = 0xffe6d8ad;
                          uVar13 = 0xffe6d8ad;
                        }
UnityEngine_UIElements_UIR_UIRenderDevice__ProcessDeviceFreeQueue:
                        uVar18 = *(undefined8 *)System_Drawing_Size_TypeInfo;
                        *(uint *)(param_5 + 0x1ac) = uVar21;
                        goto LAB_06334ffc;
                      }
                      if (0x284209 < uVar13) {
                        if (uVar13 == 0x28872d) {
                          uVar21 = 0xff00ff00;
                          uVar13 = 0xff00ff00;
                        }
                        else if (uVar13 == 0x2be3c0) {
                          uVar21 = 0xff800000;
                          uVar13 = 0xff800000;
                        }
                        else {
                          if (uVar13 != 0x2cfabc) {
                            return 0;
                          }
                          uVar21 = 0xff808000;
                          uVar13 = 0xff808000;
                        }
                        goto UnityEngine_UIElements_UIR_UIRenderDevice__ProcessDeviceFreeQueue;
                      }
                      if (uVar13 != 0x257e7e) {
                        if (uVar13 == 0x263795) goto LAB_063362d0;
                        if (uVar13 != 0x284209) {
                          return 0;
                        }
                        uVar15 = 0xff808080;
                        uVar13 = 0xff808080;
LAB_06336320:
                        uVar18 = *(undefined8 *)System_Drawing_Size_TypeInfo;
                        *(undefined4 *)(param_5 + 0x1ac) = uVar15;
                        goto LAB_06334ffc;
                      }
                      uVar18 = 0;
                      uVar15 = 0;
LAB_06336418:
                      uVar33 = 0x3f800000;
LAB_0633641c:
                      uVar13 = FUN_031c4f40(uVar18,uVar15,uVar33,0x3f800000,0);
                      goto LAB_06334fe4;
                    }
                    if ((int)uVar13 < -0x4213b58f) {
                      if (uVar13 < 0x93f64896) {
                        if (uVar13 == 0x8b280b62) {
                          uVar13 = 0xffa00000;
                          uVar18 = *(undefined8 *)System_Drawing_Size_TypeInfo;
                          *(undefined4 *)(param_5 + 0x1ac) = 0xffa00000;
                          goto LAB_06334ffc;
                        }
                        if (uVar13 != 0x93f64895) {
                          return 0;
                        }
LAB_063361b0:
                        uVar21 = 0xffff00ff;
                        uVar13 = 0xffff00ff;
                      }
                      else {
                        if (uVar13 == 0xaf32d9d0) {
                          uVar21 = 0x80;
                          uVar13 = 0x80;
                        }
                        else {
                          if (uVar13 == 0xb57b1fce) {
                            uVar21 = 0xfff020a0;
                            uVar13 = 0xfff020a0;
                            goto UnityEngine_UIElements_UIR_UIRenderDevice__ProcessDeviceFreeQueue;
                          }
                          if (uVar13 != 0xbdec4a70) {
                            return 0;
                          }
                          uVar21 = 0x80ff;
                          uVar13 = 0x80ff;
                        }
                        uVar21 = uVar21 | 0xff000000;
                        uVar13 = uVar13 | 0xff000000;
                      }
                      goto UnityEngine_UIElements_UIR_UIRenderDevice__ProcessDeviceFreeQueue;
                    }
                    if (-0x393d7669 < (int)uVar13) {
                      uVar15 = _UNK_01317ac4;
                      uVar33 = _UNK_01317c40;
                      if (uVar13 != 0xcb66f684) {
                        if (uVar13 != 0x165f3) {
                          if (uVar13 != 0x22db44) {
                            return 0;
                          }
LAB_063362d0:
                          uVar21 = 0xffffff00;
                          uVar13 = 0xffffff00;
                          goto UnityEngine_UIElements_UIR_UIRenderDevice__ProcessDeviceFreeQueue;
                        }
                        uVar15 = 0;
                        uVar33 = 0;
                      }
                      uVar18 = 0x3f800000;
                      goto LAB_0633641c;
                    }
                    if (uVar13 != 0xc3839ac6) {
                      if (uVar13 == 0xc43bc603) goto LAB_063361b0;
                      if (uVar13 != 0xc6c28997) {
                        return 0;
                      }
                      uVar21 = 0xffc0c0c0;
                      uVar13 = 0xffc0c0c0;
                      goto UnityEngine_UIElements_UIR_UIRenderDevice__ProcessDeviceFreeQueue;
                    }
                    uVar13 = 0;
                    uVar18 = *(undefined8 *)System_Drawing_Size_TypeInfo;
                    *(undefined4 *)(param_5 + 0x1ac) = 0;
                  }
LAB_06334ffc:
                  param_5 = param_5 + 0x1b8;
                  goto LAB_0633272c;
                }
                if (uVar13 == 0x47a86ed) {
                  iVar16 = *(int *)(lVar30 + 0x24);
                  if (iVar16 < 0x28989c) {
                    if (iVar16 == -0x5ed67635) {
                      uVar33 = 0x202;
                      uVar15 = 0x202;
                    }
                    else {
                      if (iVar16 != 0x28989b) {
                        return 0;
                      }
                      uVar33 = 0x201;
                      uVar15 = 0x201;
                    }
                  }
                  else if (iVar16 == 0x5196c24) {
                    uVar33 = 0x210;
                    uVar15 = 0x210;
                  }
                  else if (iVar16 == 0x5f4ec60) {
                    uVar33 = 0x204;
                    uVar15 = 0x204;
                  }
                  else {
                    if (iVar16 != 0x30b3d31f) {
                      return 0;
                    }
                    uVar33 = 0x208;
                    uVar15 = 0x208;
                  }
                  uVar18 = *(undefined8 *)
                            System_Runtime_Serialization_Formatters_Binary_SizedArray_TypeInfo;
                  *(undefined4 *)(param_5 + 0x158) = uVar33;
                  param_5 = param_5 + 0x160;
                  goto LAB_06335884;
                }
                if (uVar13 != 0x47af054) {
                  return 0;
                }
                if (*(int *)(lVar30 + 0x30) != 3) {
                  return 0;
                }
                if (uVar4 < 8) goto LAB_063362cc;
                uVar7 = *(undefined2 *)(lVar28 + 0x2e);
                if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                cVar11 = FUN_063487b0(uVar7,0);
                lVar27 = *(long *)(param_5 + 0x30);
                if (lVar27 == 0) goto LAB_06335220;
                if (8 < *(uint *)(lVar27 + 0x18)) {
                  cVar12 = FUN_063487b0(*(undefined2 *)(lVar27 + 0x30),0);
                  *(char *)(param_5 + 0x1af) = cVar12 + cVar11 * '\x10';
                  return 1;
                }
                goto LAB_063362cc;
              }
              if (uVar13 < 0xd7fc39c) {
                if (uVar13 < 0xbea90d2) {
                  if (uVar13 == 0xb863a1a) {
                    return 0;
                  }
                  if (uVar13 != 0xbea90d1) {
                    return 0;
                  }
                  if ((*(byte *)(param_9 + 0x58) >> 5 & 1) != 0) {
                    return 1;
                  }
                  cVar11 = FUN_063526c8(param_5 + 0x128,0x20,0);
                  if (cVar11 != '\0') {
                    return 1;
                  }
                  uVar13 = *(uint *)(param_5 + 0x124) & 0xffffffdf;
                  goto LAB_06334400;
                }
                if (uVar13 == 0xbf2aad3) {
                  *(undefined4 *)(param_5 + 0x2e4) = 0xc6fffe00;
                  return 1;
                }
                if (uVar13 != 0xd0298a0) {
                  return 0;
                }
LAB_06333a3c:
                uVar18 = 0x10;
                uVar13 = *(uint *)(param_5 + 0x124) | 0x10;
LAB_06334a28:
                *(uint *)(param_5 + 0x124) = uVar13;
                FUN_063525c4(param_5 + 0x128,uVar18,0);
                return 1;
              }
              if (0x72343fa2 < uVar13) {
                if (uVar13 == 0x72a5aa29) {
                  *(undefined4 *)(param_5 + 0x360) = 0xbf800000;
                  return 1;
                }
                if (uVar13 == 0x72f142b7) {
                  uVar33 = FUN_060941e0(0);
                  *(undefined4 *)(param_5 + 0x19a8) = uVar33;
                  *(undefined4 *)(param_5 + 0x19ac) = uVar15;
                  *(float *)(param_5 + 0x19b0) = fVar31;
                  return 1;
                }
                if (uVar13 != 0x745ef45b) {
                  return 0;
                }
                uVar15 = *(undefined4 *)(lVar30 + 0x2c);
                uVar33 = *(undefined4 *)(lVar30 + 0x30);
                if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                fVar31 = (float)FUN_063487dc(lVar28,uVar15,uVar33,0);
                if (fVar31 == -32768.0) {
                  return 0;
                }
                if (iVar16 == 2) {
                  return 0;
                }
                if (iVar16 == 1) {
                  fVar31 = fVar31 * *(float *)(param_5 + 0xf4);
                }
                *(float *)(param_5 + 0x180) = fVar31;
                return 1;
              }
              if (uVar13 != 0x313400cb) {
                if (uVar13 == 0x71c96d92) {
                  uVar15 = FUN_0473a37c(param_5 + 0x1b8,
                                        *(undefined8 *)
                                         System_Runtime_Remoting_Metadata_SoapFieldAttribute_TypeInfo
                                       );
                  *(undefined4 *)(param_5 + 0x1ac) = uVar15;
                  return 1;
                }
                if (uVar13 != 0x72343fa2) {
                  return 0;
                }
                uVar15 = FUN_0473b514(param_5 + 0x160,
                                      *(undefined8 *)
                                       Fusion_LagCompensation_SnapshotHistoryDraw_TypeInfo);
                *(undefined4 *)(param_5 + 0x158) = uVar15;
                return 1;
              }
              iVar16 = *(int *)(lVar30 + 0x24);
              if (iVar16 == -0x25034fb5) {
                lVar27 = *(long *)(param_5 + 0x15b8);
                if (lVar27 == 0) goto LAB_06335220;
                if (*(int *)(lVar27 + 0x18) == 0) goto LAB_063362cc;
                *(undefined8 *)(param_5 + 0x70) = *(undefined8 *)(lVar27 + 0x38);
                thunk_FUN_02ee2be8((undefined8 *)(param_5 + 0x70));
                lVar27 = *(long *)(param_5 + 0x15b8);
                *(undefined4 *)(param_5 + 0x78) = 0;
                if (lVar27 == 0) goto LAB_06335220;
                if (*(int *)(lVar27 + 0x18) != 0) {
                  uStack_188 = *(undefined8 *)(lVar27 + 0x28);
                  uStack_190 = *(undefined8 *)(lVar27 + 0x20);
                  uStack_178 = *(undefined8 *)(lVar27 + 0x38);
                  uStack_180 = *(undefined8 *)(lVar27 + 0x30);
                  uStack_168 = *(undefined8 *)(lVar27 + 0x48);
                  uStack_170 = *(undefined8 *)(lVar27 + 0x40);
                  uStack_160 = *(undefined8 *)(lVar27 + 0x50);
LAB_06334f50:
                  FUN_0473bb24(param_5 + 0x80,&uStack_190,
                               *(undefined8 *)
                                System_Runtime_Remoting_Channels_SinkProviderData_TypeInfo);
                  return 1;
                }
                goto LAB_063362cc;
              }
              uVar23 = FUN_0631cd2c(iVar16,&uStack_a8,0);
              if ((uVar23 & 1) != 0) {
                *(undefined8 *)(param_5 + 0x70) = uStack_a8;
                thunk_FUN_02ee2be8((undefined8 *)(param_5 + 0x70));
                uVar13 = FUN_0631c19c(*(undefined8 *)(param_5 + 0x70),
                                      *(undefined8 *)(param_5 + 0x68),param_5 + 0x15b8,
                                      *(undefined8 *)(param_5 + 0x19e0),0);
                lVar27 = *(long *)(param_5 + 0x15b8);
                *(uint *)(param_5 + 0x78) = uVar13;
                if (lVar27 == 0) goto LAB_06335220;
                if (uVar13 < *(uint *)(lVar27 + 0x18)) {
                  lVar27 = lVar27 + (long)(int)uVar13 * 0x38;
                  uStack_188 = *(undefined8 *)(lVar27 + 0x28);
                  uStack_190 = *(undefined8 *)(lVar27 + 0x20);
                  uStack_178 = *(undefined8 *)(lVar27 + 0x38);
                  uStack_180 = *(undefined8 *)(lVar27 + 0x30);
                  uStack_168 = *(undefined8 *)(lVar27 + 0x48);
                  uStack_170 = *(undefined8 *)(lVar27 + 0x40);
                  uStack_160 = *(undefined8 *)(lVar27 + 0x50);
                  goto LAB_06334f50;
                }
                goto LAB_063362cc;
              }
              if (cVar11 != '\0') goto LAB_06336070;
              if ((lVar27 == 0) || (lVar28 = *(long *)(param_5 + 0x19d0), lVar28 == 0))
              goto LAB_06335220;
              if (*(int *)(lVar28 + 0x18) == 0) goto LAB_063362cc;
              uVar25 = *(undefined8 *)(lVar27 + 0x28);
              uVar18 = FUN_05493cb8(0,*(undefined8 *)(param_5 + 0x30),*(undefined4 *)(lVar28 + 0x2c)
                                    ,*(undefined4 *)(lVar28 + 0x30),0);
              uVar18 = FUN_05482ce0(uVar25,uVar18,0);
              uVar18 = FUN_03a73420(uVar18,*(undefined8 *)PTR_DAT_06a2ee00);
              uStack_a8 = uVar18;
              if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
                thunk_FUN_02e9a04c(*(long *)PTR_DAT_06a2ed80);
              }
              uVar23 = FUN_062696b0(uVar18,0,0);
              if ((uVar23 & 1) != 0) {
                return 0;
              }
              FUN_0631c9c8(iVar16,uStack_a8,0);
              *(undefined8 *)(param_5 + 0x70) = uStack_a8;
              thunk_FUN_02ee2be8((undefined8 *)(param_5 + 0x70));
              uVar13 = FUN_0631c19c(*(undefined8 *)(param_5 + 0x70),*(undefined8 *)(param_5 + 0x68),
                                    param_5 + 0x15b8,*(undefined8 *)(param_5 + 0x19e0),0);
              lVar27 = *(long *)(param_5 + 0x15b8);
              *(uint *)(param_5 + 0x78) = uVar13;
              if (lVar27 == 0) goto LAB_06335220;
              if (uVar13 < *(uint *)(lVar27 + 0x18)) {
                lVar27 = lVar27 + (long)(int)uVar13 * 0x38;
                uStack_188 = *(undefined8 *)(lVar27 + 0x28);
                uStack_190 = *(undefined8 *)(lVar27 + 0x20);
                uStack_178 = *(undefined8 *)(lVar27 + 0x38);
                uStack_180 = *(undefined8 *)(lVar27 + 0x30);
                uStack_168 = *(undefined8 *)(lVar27 + 0x48);
                uStack_170 = *(undefined8 *)(lVar27 + 0x40);
                uStack_160 = *(undefined8 *)(lVar27 + 0x50);
                goto LAB_06334f50;
              }
              goto LAB_063362cc;
            }
            if (0x2adb73 < uVar13) {
              if (0x597459 < uVar13) {
                if (uVar13 < 0x36f95db) {
                  if (uVar13 == 0x36d097e) {
                    *(undefined1 *)(param_5 + 0x380) = 0;
                    return 1;
                  }
                  if (uVar13 != 0x36f95da) {
                    return 0;
                  }
                  if ((*(byte *)(param_9 + 0x59) >> 1 & 1) != 0) {
                    return 1;
                  }
                  FUN_0473a980(&uStack_190,param_5 + 0x238,
                               *(undefined8 *)Fusion_Protocol_SnapshotType_TypeInfo);
                  FUN_0473a71c(&uStack_190,param_5 + 0x238,
                               *(undefined8 *)
                                System_Runtime_Remoting_Metadata_SoapParameterAttribute_TypeInfo);
                  *(undefined8 *)(param_5 + 0x40) = uStack_188;
                  *(undefined8 *)(param_5 + 0x38) = uStack_190;
                  *(undefined4 *)(param_5 + 0x48) = (undefined4)uStack_180;
                  cVar11 = FUN_063526c8(param_5 + 0x128,0x200,0);
                  if (cVar11 != '\0') {
                    return 1;
                  }
                  uVar13 = *(uint *)(param_5 + 0x124) & 0xfffffdff;
                  goto LAB_06334400;
                }
                if (uVar13 != 0x37038af) {
                  if (uVar13 == 0x37128fc) {
                    FUN_0473bb98(&uStack_190,param_5 + 0x80,
                                 *(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_TypeInfo
                                );
                    *(undefined8 *)(param_5 + 0x68) = uStack_188;
                    thunk_FUN_02ee2be8();
                    *(undefined8 *)(param_5 + 0x70) = uStack_178;
                    thunk_FUN_02ee2be8((undefined8 *)(param_5 + 0x70),uStack_178);
                    *(int *)(param_5 + 0x78) = (int)uStack_190;
                    return 1;
                  }
                  if (uVar13 != 0x37b920a) {
                    return 0;
                  }
                  uVar15 = FUN_0473c7fc(param_5 + 0xf8,
                                        *(undefined8 *)Fusion_Protocol_Snapshot_TypeInfo);
                  *(undefined4 *)(param_5 + 0xf4) = uVar15;
                  return 1;
                }
                if (*(char *)(param_5 + 0x1581) == '\0') {
                  return 1;
                }
                if (param_10 == 0) {
                  return 1;
                }
                if (*(char *)(param_5 + 0x19e8) != '\0') {
                  return 1;
                }
                lVar27 = *(long *)(param_10 + 0x40);
                if (lVar27 == 0) goto LAB_06335220;
                lVar28 = *(long *)(lVar27 + 0x18);
                if ((lVar28 == 0) || (iVar16 = *(int *)(param_10 + 0x20), iVar16 < 1)) {
                  if (*(long *)(param_9 + 0x60) != 0) {
                    if (*(char *)(*(long *)(param_9 + 0x60) + 0x90) == '\0') {
                      return 1;
                    }
                    puVar22 = (undefined8 *)
                              System_Runtime_Remoting_Metadata_SoapTypeAttribute_TypeInfo;
                    if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                      puVar22 = (undefined8 *)
                                System_Runtime_Remoting_Metadata_SoapTypeAttribute_TypeInfo;
                    }
LAB_06335844:
                    FUN_06222224(*puVar22,0);
                    return 1;
                  }
                  goto LAB_06335220;
                }
LAB_063344e0:
                if (iVar16 - 1U < (uint)lVar28) {
                  lVar27 = lVar27 + (ulong)(iVar16 - 1U) * 0x30;
                  *(int *)(lVar27 + 0x30) = *(int *)(param_5 + 0x32c) - *(int *)(lVar27 + 0x2c);
                  return 1;
                }
                goto LAB_063362cc;
              }
              if (0x2eb625 < uVar13) {
                return 0;
              }
              if (uVar13 == 0x2b96d1) {
                *(undefined1 *)(param_5 + 0x380) = 1;
                return 1;
              }
              if (uVar13 != 0x2eb625) {
                return 0;
              }
              uVar15 = *(undefined4 *)(lVar30 + 0x2c);
              uVar33 = *(undefined4 *)(lVar30 + 0x30);
              if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              fVar31 = (float)FUN_063487dc(lVar28,uVar15,uVar33,0);
              puVar9 = Game_Views_Voxels_SliceMap_TypeInfo;
              if (fVar31 == -32768.0) {
                return 0;
              }
              if (iVar16 == 2) {
                fVar31 = (fVar31 * *(float *)(param_5 + 0xec)) / 100.0;
              }
              else if (iVar16 == 1) {
                fVar31 = fVar31 * *(float *)(param_5 + 0xec);
              }
              else {
                lVar27 = *(long *)(param_5 + 0x30);
                if (lVar27 == 0) goto LAB_06335220;
                if (*(uint *)(lVar27 + 0x18) < 6) goto LAB_063362cc;
                if ((*(short *)(lVar27 + 0x2a) != 0x2d) && (*(short *)(lVar27 + 0x2a) != 0x2b)) {
                  uVar18 = *(undefined8 *)Game_Views_Voxels_SliceMap_TypeInfo;
                  *(float *)(param_5 + 0xf4) = fVar31;
                  goto LAB_063353b0;
                }
                fVar31 = fVar31 + *(float *)(param_5 + 0xec);
              }
              *(float *)(param_5 + 0xf4) = fVar31;
              uVar18 = *(undefined8 *)puVar9;
LAB_063353b0:
              FUN_0473c7b8(param_5 + 0xf8,uVar18);
              return 1;
            }
            if (0x1b02f9 < uVar13) {
              if (0x277753 < uVar13) {
                if (uVar13 != 0x288780) {
                  if (uVar13 != 0x292f75) {
                    if (uVar13 != 0x2adb73) {
                      return 0;
                    }
                    return 1;
                  }
                  *(uint *)(param_5 + 0x124) = *(uint *)(param_5 + 0x124) | 0x200;
                  FUN_063525c4(param_5 + 0x128,0x200,0);
                  if (*(int *)(*(long *)System_Reflection_SignatureConstructedGenericType_TypeInfo +
                              0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                  }
                  uVar34 = FUN_06347f64(0);
                  uStack_a0 = CONCAT44(uVar15,uVar34);
                  lVar27 = *(long *)(param_5 + 0x19d0);
                  uStack_98 = CONCAT44(uVar33,fVar31);
                  if (lVar27 == 0) goto LAB_06335220;
                  uVar13 = 0;
                  uVar23 = 0x4000ffff;
                  goto LAB_06333dfc;
                }
                if (*(char *)(param_5 + 0x1581) == '\0') {
                  return 1;
                }
                if (param_10 == 0) {
                  return 1;
                }
                if (*(char *)(param_5 + 0x19e8) != '\0') {
                  return 1;
                }
                FUN_06336490(param_5,param_10);
                plVar24 = (long *)(param_10 + 0x40);
                lVar27 = *plVar24;
                if (lVar27 == 0) goto LAB_06335220;
                uVar13 = *(uint *)(param_10 + 0x20);
                if (*(int *)(lVar27 + 0x18) < (int)(uVar13 + 1)) {
                  if (*(int *)(*(long *)ExitGames_Client_Photon_SimulationItem_TypeInfo + 0xe4) == 0
                     ) {
                    thunk_FUN_02e9a04c();
                  }
                  FUN_03ab7dcc(plVar24,uVar13 + 1,
                               *(undefined8 *)
                                UnityEngine_Experimental_Rendering_SinglepassKeywords_TypeInfo);
                  lVar27 = *plVar24;
                  if (lVar27 == 0) goto LAB_06335220;
                }
                lVar28 = *(long *)(param_5 + 0x19d0);
                if (lVar28 == 0) goto LAB_06335220;
                if ((*(int *)(lVar28 + 0x18) == 0) || (*(uint *)(lVar27 + 0x18) <= uVar13))
                goto LAB_063362cc;
                lVar27 = lVar27 + (long)(int)uVar13 * 0x30;
                puVar17 = (undefined4 *)(lVar27 + 0x20);
                *puVar17 = *(undefined4 *)(lVar28 + 0x24);
                *(undefined4 *)(lVar27 + 0x2c) = *(undefined4 *)(param_5 + 0x32c);
                iVar16 = *(int *)(lVar28 + 0x2c);
                *(int *)(lVar27 + 0x24) = iVar16 + param_7;
                uVar18 = *(undefined8 *)(param_5 + 0x30);
                uVar15 = *(undefined4 *)(lVar28 + 0x30);
LAB_063346bc:
                FUN_0631b524(puVar17,uVar18,iVar16,uVar15,0);
                lVar27 = *(long *)(param_10 + 0x40);
                if (lVar27 == 0) goto LAB_06335220;
                if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_063362cc;
                *(undefined4 *)(lVar27 + (long)(int)uVar13 * 0x30 + 0x30) = 0xffffffff;
                goto LAB_063346e8;
              }
              if (uVar13 == 0x1b2023) {
                *(undefined1 *)(param_5 + 0x4c) = 0;
                return 1;
              }
              if (uVar13 != 0x277753) {
                return 0;
              }
              if (iVar20 == 1) goto LAB_063362cc;
              if (*(int *)(lVar30 + 0x24) == -0x25034fb5) {
                lVar27 = *(long *)(param_5 + 0x15b8);
                if (lVar27 == 0) goto LAB_06335220;
                if (*(int *)(lVar27 + 0x18) == 0) goto LAB_063362cc;
                *(undefined8 *)(param_5 + 0x68) = *(undefined8 *)(lVar27 + 0x28);
                thunk_FUN_02ee2be8((undefined8 *)(param_5 + 0x68));
                lVar27 = *(long *)(param_5 + 0x15b8);
                if (lVar27 == 0) goto LAB_06335220;
                if (*(int *)(lVar27 + 0x18) == 0) goto LAB_063362cc;
                *(undefined8 *)(param_5 + 0x70) = *(undefined8 *)(lVar27 + 0x38);
                thunk_FUN_02ee2be8((undefined8 *)(param_5 + 0x70));
                lVar27 = *(long *)(param_5 + 0x15b8);
                *(undefined4 *)(param_5 + 0x78) = 0;
                if (lVar27 == 0) goto LAB_06335220;
                if (*(int *)(lVar27 + 0x18) != 0) {
                  uStack_188 = *(undefined8 *)(lVar27 + 0x28);
                  uStack_190 = *(undefined8 *)(lVar27 + 0x20);
                  uStack_178 = *(undefined8 *)(lVar27 + 0x38);
                  uStack_180 = *(undefined8 *)(lVar27 + 0x30);
                  uStack_168 = *(undefined8 *)(lVar27 + 0x48);
                  uStack_170 = *(undefined8 *)(lVar27 + 0x40);
                  uStack_160 = *(undefined8 *)(lVar27 + 0x50);
                  goto LAB_06334f50;
                }
                goto LAB_063362cc;
              }
              iVar16 = *(int *)(lVar30 + 0x38);
              iVar20 = *(int *)(lVar30 + 0x3c);
              FUN_0631cb34(*(int *)(lVar30 + 0x24),&lStack_88,0);
              lVar28 = lStack_88;
              puVar9 = PTR_DAT_06a2ed80;
              if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              uVar23 = FUN_062696b0(lVar28,0,0);
              lVar28 = lStack_88;
              if ((uVar23 & 1) != 0) {
                if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                uVar23 = FUN_062696b0(lVar28,0,0);
                if ((uVar23 & 1) != 0) {
                  if (cVar11 != '\0') goto LAB_06336070;
                  if ((lVar27 == 0) || (lVar28 = *(long *)(param_5 + 0x19d0), lVar28 == 0))
                  goto LAB_06335220;
                  if (*(int *)(lVar28 + 0x18) == 0) goto LAB_063362cc;
                  uVar25 = *(undefined8 *)(lVar27 + 0x28);
                  uVar18 = FUN_05493cb8(0,*(undefined8 *)(param_5 + 0x30),
                                        *(undefined4 *)(lVar28 + 0x2c),
                                        *(undefined4 *)(lVar28 + 0x30),0);
                  uVar18 = FUN_05482ce0(uVar25,uVar18,0);
                  lStack_88 = FUN_03a73420(uVar18,*(undefined8 *)
                                                                                                      
                                                  System_Reactive_Disposables_SingleAssignmentDisposable_TypeInfo
                                          );
                }
                lVar28 = lStack_88;
                if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                uVar23 = FUN_062696b0(lVar28,0,0);
                if ((uVar23 & 1) != 0) {
                  return 0;
                }
                FUN_0631c7a8(lStack_88,0);
              }
              if (iVar16 == 0 && iVar20 == 0) {
                if (lStack_88 == 0) goto LAB_06335220;
                puVar22 = (undefined8 *)(param_5 + 0x70);
                *puVar22 = *(undefined8 *)(lStack_88 + 0x28);
                thunk_FUN_02ee2be8(puVar22);
                uVar13 = FUN_0631c19c(*puVar22,lStack_88,param_5 + 0x15b8,
                                      *(undefined8 *)(param_5 + 0x19e0),0);
                lVar27 = *(long *)(param_5 + 0x15b8);
                *(uint *)(param_5 + 0x78) = uVar13;
                if (lVar27 == 0) goto LAB_06335220;
                if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_063362cc;
                lVar27 = lVar27 + (long)(int)uVar13 * 0x38;
                uStack_188 = *(undefined8 *)(lVar27 + 0x28);
                uStack_190 = *(undefined8 *)(lVar27 + 0x20);
                uStack_178 = *(undefined8 *)(lVar27 + 0x38);
                uStack_180 = *(undefined8 *)(lVar27 + 0x30);
                uStack_168 = *(undefined8 *)(lVar27 + 0x48);
                uStack_170 = *(undefined8 *)(lVar27 + 0x40);
                uStack_160 = *(undefined8 *)(lVar27 + 0x50);
              }
              else {
                if (iVar16 != 0x313400cb) {
                  return 0;
                }
                uVar23 = FUN_0631cd2c(iVar20,&uStack_a8,0);
                if ((uVar23 & 1) == 0) {
                  if (cVar11 != '\0') goto LAB_06336070;
                  if ((lVar27 == 0) || (lVar28 = *(long *)(param_5 + 0x19d0), lVar28 == 0))
                  goto LAB_06335220;
                  if ((*(uint *)(lVar28 + 0x18) & 0xfffffffe) == 0) goto LAB_063362cc;
                  uVar25 = *(undefined8 *)(lVar27 + 0x28);
                  uVar18 = FUN_05493cb8(0,*(undefined8 *)(param_5 + 0x30),
                                        *(undefined4 *)(lVar28 + 0x44),
                                        *(undefined4 *)(lVar28 + 0x48),0);
                  uVar18 = FUN_05482ce0(uVar25,uVar18,0);
                  uVar18 = FUN_03a73420(uVar18,*(undefined8 *)PTR_DAT_06a2ee00);
                  uStack_a8 = uVar18;
                  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c(*(long *)puVar9);
                  }
                  uVar23 = FUN_062696b0(uVar18,0,0);
                  if ((uVar23 & 1) != 0) {
                    return 0;
                  }
                  FUN_0631c9c8(iVar20,uStack_a8,0);
                  puVar22 = (undefined8 *)(param_5 + 0x70);
                  *puVar22 = uStack_a8;
                  thunk_FUN_02ee2be8(puVar22);
                  uVar13 = FUN_0631c19c(*puVar22,lStack_88,param_5 + 0x15b8,
                                        *(undefined8 *)(param_5 + 0x19e0),0);
                  lVar27 = *(long *)(param_5 + 0x15b8);
                  *(uint *)(param_5 + 0x78) = uVar13;
                  if (lVar27 == 0) goto LAB_06335220;
                  if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_063362cc;
                  lVar27 = lVar27 + (long)(int)uVar13 * 0x38;
                  uStack_188 = *(undefined8 *)(lVar27 + 0x28);
                  uStack_190 = *(undefined8 *)(lVar27 + 0x20);
                  uStack_178 = *(undefined8 *)(lVar27 + 0x38);
                  uStack_180 = *(undefined8 *)(lVar27 + 0x30);
                  uStack_168 = *(undefined8 *)(lVar27 + 0x48);
                  uStack_170 = *(undefined8 *)(lVar27 + 0x40);
                  uStack_160 = *(undefined8 *)(lVar27 + 0x50);
                }
                else {
                  puVar22 = (undefined8 *)(param_5 + 0x70);
                  *puVar22 = uStack_a8;
                  thunk_FUN_02ee2be8(puVar22);
                  uVar13 = FUN_0631c19c(*puVar22,lStack_88,param_5 + 0x15b8,
                                        *(undefined8 *)(param_5 + 0x19e0),0);
                  lVar27 = *(long *)(param_5 + 0x15b8);
                  *(uint *)(param_5 + 0x78) = uVar13;
                  if (lVar27 == 0) goto LAB_06335220;
                  if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_063362cc;
                  lVar27 = lVar27 + (long)(int)uVar13 * 0x38;
                  uStack_188 = *(undefined8 *)(lVar27 + 0x28);
                  uStack_190 = *(undefined8 *)(lVar27 + 0x20);
                  uStack_178 = *(undefined8 *)(lVar27 + 0x38);
                  uStack_180 = *(undefined8 *)(lVar27 + 0x30);
                  uStack_168 = *(undefined8 *)(lVar27 + 0x48);
                  uStack_170 = *(undefined8 *)(lVar27 + 0x40);
                  uStack_160 = *(undefined8 *)(lVar27 + 0x50);
                }
              }
              FUN_0473bb24(param_5 + 0x80,&uStack_190,
                           *(undefined8 *)System_Runtime_Remoting_Channels_SinkProviderData_TypeInfo
                          );
              plVar24 = (long *)(param_5 + 0x68);
              *plVar24 = lStack_88;
              lVar27 = lStack_88;
              goto LAB_063359f8;
            }
            if (uVar13 < 0x167e5) {
              if (uVar13 == 0x14dac) {
                uVar15 = *(undefined4 *)(lVar30 + 0x2c);
                uVar33 = *(undefined4 *)(lVar30 + 0x30);
                if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                fVar31 = (float)FUN_063487dc(lVar28,uVar15,uVar33,0);
                if (fVar31 == -32768.0) {
                  return 0;
                }
                if (iVar16 != 0) {
                  if (iVar16 != 1) {
                    *(float *)(param_5 + 0x2f8) = (fVar31 * *(float *)(param_5 + 0x58)) / 100.0;
                    return 1;
                  }
                  fVar31 = fVar31 * *(float *)(param_5 + 0xf4);
                }
                goto LAB_063353c4;
              }
              if (uVar13 != 0x167e4) {
                return 0;
              }
              if (*(long *)(param_5 + 0x68) == 0) goto LAB_06335220;
              fVar36 = *(float *)(param_5 + 0xf0);
              FUN_0631cfec(&uStack_190,*(long *)(param_5 + 0x68),0);
              memcpy(&uStack_120,&uStack_190,0x60);
              fVar31 = (float)FUN_0630f908(&uStack_120,0);
              fVar32 = 1.0;
              if (0.0 < fVar31) {
                if (*(long *)(param_5 + 0x68) == 0) goto LAB_06335220;
                FUN_0631cfec(&uStack_190,*(long *)(param_5 + 0x68),0);
                memcpy(&uStack_120,&uStack_190,0x60);
                fVar32 = (float)FUN_0630f908(&uStack_120,0);
              }
              uVar18 = *(undefined8 *)Mono_Xml_SmallXmlParserException_TypeInfo;
              *(float *)(param_5 + 0xf0) = fVar36 * fVar32;
              FUN_0473c870(*(undefined4 *)(param_5 + 0x180),param_5 + 0x188,uVar18);
              if (*(long *)(param_5 + 0x68) == 0) goto LAB_06335220;
              fVar32 = *(float *)(param_5 + 0xf4);
              FUN_0631cfec(&uStack_190,*(long *)(param_5 + 0x68),0);
              memcpy(&uStack_120,&uStack_190,0x60);
              fVar31 = (float)FUN_0630f888(&uStack_120,0);
              if (*(long *)(param_5 + 0x68) == 0) goto LAB_06335220;
              FUN_0631cfec(&uStack_1f0,*(long *)(param_5 + 0x68),0);
              memcpy(&uStack_120,&uStack_1f0,0x60);
              fVar36 = (float)FUN_0630f890(&uStack_120,0);
              if (*(long *)(param_5 + 0x68) == 0) goto LAB_06335220;
              fVar37 = *(float *)(param_5 + 0x180);
              FUN_0631cfec(auStack_250,*(long *)(param_5 + 0x68),0);
              memcpy(&uStack_120,auStack_250,0x60);
              fVar35 = (float)FUN_0630f900(&uStack_120,0);
              *(float *)(param_5 + 0x180) =
                   fVar37 + (fVar32 / fVar31) * fVar36 * fVar35 * *(float *)(param_5 + 0xf0);
              FUN_063525c4(param_5 + 0x128,0x100,0);
              uVar13 = *(uint *)(param_5 + 0x124) | 0x100;
            }
            else {
              if (uVar13 != 0x167f6) {
                if (uVar13 != 0x1b02eb) {
                  if (uVar13 != 0x1b02f9) {
                    return 0;
                  }
                  if (-1 < *(char *)(param_5 + 0x124)) {
                    return 1;
                  }
                  if (*(float *)(param_5 + 0xf0) < 1.0) {
                    uVar15 = FUN_0473c944(param_5 + 0x188,
                                          *(undefined8 *)UnityEngine_SliderState_TypeInfo);
                    *(undefined4 *)(param_5 + 0x180) = uVar15;
                    if (*(long *)(param_5 + 0x68) == 0) goto LAB_06335220;
                    fVar36 = *(float *)(param_5 + 0xf0);
                    FUN_0631cfec(&uStack_190,*(long *)(param_5 + 0x68),0);
                    memcpy(&uStack_120,&uStack_190,0x60);
                    fVar31 = (float)FUN_0630f8f8(&uStack_120,0);
                    fVar32 = 1.0;
                    if (0.0 < fVar31) {
                      if (*(long *)(param_5 + 0x68) == 0) goto LAB_06335220;
                      FUN_0631cfec(&uStack_190,*(long *)(param_5 + 0x68),0);
                      memcpy(&uStack_120,&uStack_190,0x60);
                      fVar32 = (float)FUN_0630f8f8(&uStack_120,0);
                    }
                    *(float *)(param_5 + 0xf0) = fVar36 / fVar32;
                  }
                  cVar11 = FUN_063526c8(param_5 + 0x128,0x80,0);
                  if (cVar11 != '\0') {
                    return 1;
                  }
                  uVar13 = *(uint *)(param_5 + 0x124) & 0xffffff7f;
                  goto LAB_06334400;
                }
                if ((*(byte *)(param_5 + 0x125) & 1) == 0) {
                  return 1;
                }
                if (*(float *)(param_5 + 0xf0) < 1.0) {
                  uVar15 = FUN_0473c944(param_5 + 0x188,
                                        *(undefined8 *)UnityEngine_SliderState_TypeInfo);
                  *(undefined4 *)(param_5 + 0x180) = uVar15;
                  if (*(long *)(param_5 + 0x68) == 0) goto LAB_06335220;
                  fVar36 = *(float *)(param_5 + 0xf0);
                  FUN_0631cfec(&uStack_190,*(long *)(param_5 + 0x68),0);
                  memcpy(&uStack_120,&uStack_190,0x60);
                  fVar31 = (float)FUN_0630f908(&uStack_120,0);
                  fVar32 = 1.0;
                  if (0.0 < fVar31) {
                    if (*(long *)(param_5 + 0x68) == 0) goto LAB_06335220;
                    FUN_0631cfec(&uStack_190,*(long *)(param_5 + 0x68),0);
                    memcpy(&uStack_120,&uStack_190,0x60);
                    fVar32 = (float)FUN_0630f908(&uStack_120,0);
                  }
                  *(float *)(param_5 + 0xf0) = fVar36 / fVar32;
                }
                cVar11 = FUN_063526c8(param_5 + 0x128,0x100,0);
                if (cVar11 != '\0') {
                  return 1;
                }
                uVar13 = *(uint *)(param_5 + 0x124) & 0xfffffeff;
                goto LAB_06334400;
              }
              if (*(long *)(param_5 + 0x68) == 0) goto LAB_06335220;
              fVar36 = *(float *)(param_5 + 0xf0);
              FUN_0631cfec(&uStack_190,*(long *)(param_5 + 0x68),0);
              memcpy(&uStack_120,&uStack_190,0x60);
              fVar31 = (float)FUN_0630f8f8(&uStack_120,0);
              fVar32 = 1.0;
              if (0.0 < fVar31) {
                if (*(long *)(param_5 + 0x68) == 0) goto LAB_06335220;
                FUN_0631cfec(&uStack_190,*(long *)(param_5 + 0x68),0);
                memcpy(&uStack_120,&uStack_190,0x60);
                fVar32 = (float)FUN_0630f8f8(&uStack_120,0);
              }
              uVar18 = *(undefined8 *)Mono_Xml_SmallXmlParserException_TypeInfo;
              *(float *)(param_5 + 0xf0) = fVar36 * fVar32;
              FUN_0473c870(*(undefined4 *)(param_5 + 0x180),param_5 + 0x188,uVar18);
              if (*(long *)(param_5 + 0x68) == 0) goto LAB_06335220;
              fVar32 = *(float *)(param_5 + 0xf4);
              FUN_0631cfec(&uStack_190,*(long *)(param_5 + 0x68),0);
              memcpy(&uStack_120,&uStack_190,0x60);
              fVar31 = (float)FUN_0630f888(&uStack_120,0);
              if (*(long *)(param_5 + 0x68) == 0) goto LAB_06335220;
              FUN_0631cfec(&uStack_1f0,*(long *)(param_5 + 0x68),0);
              memcpy(&uStack_120,&uStack_1f0,0x60);
              fVar36 = (float)FUN_0630f890(&uStack_120,0);
              if (*(long *)(param_5 + 0x68) == 0) goto LAB_06335220;
              fVar37 = *(float *)(param_5 + 0x180);
              FUN_0631cfec(auStack_250,*(long *)(param_5 + 0x68),0);
              memcpy(&uStack_120,auStack_250,0x60);
              fVar35 = (float)FUN_0630f8f0(&uStack_120,0);
              *(float *)(param_5 + 0x180) =
                   fVar37 + (fVar32 / fVar31) * fVar36 * fVar35 * *(float *)(param_5 + 0xf0);
              FUN_063525c4(param_5 + 0x128,0x80,0);
              uVar13 = *(uint *)(param_5 + 0x124) | 0x80;
            }
            *(uint *)(param_5 + 0x124) = uVar13;
            return 1;
          }
          if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar18 = 9;
        }
        uVar13 = FUN_06348388(lVar28,0,uVar18,0);
        puVar9 = System_Drawing_Size_TypeInfo;
        *(uint *)(param_5 + 0x1ac) = uVar13;
        param_5 = param_5 + 0x1b8;
        uVar18 = *(undefined8 *)puVar9;
LAB_0633272c:
        FUN_0473a334(param_5,uVar13,uVar18);
        return 1;
      }
      if (uVar4 <= uVar23) goto LAB_063362cc;
      *(short *)(lVar28 + uVar23 * 2 + 0x20) = (short)uVar13;
      if (iVar20 == 1) {
        iVar20 = 1;
        if (1 < uVar19) {
          if (uVar19 == 2) {
            bVar2 = (bool)(bVar8 & uVar13 == 0x22);
            if (!bVar2 && !(bool)(bVar3 ^ 1)) {
              bVar2 = uVar13 == 0x27;
            }
            if (bVar2) {
              lVar28 = *(long *)(param_5 + 0x19d0);
              if (lVar28 != 0) {
                uVar19 = uVar21 + 1;
                if (*(int *)(lVar28 + 0x18) <= (int)uVar19) {
                  uVar19 = uVar19 | (int)uVar19 >> 0x10;
                  uVar19 = uVar19 | (int)uVar19 >> 8;
                  uVar19 = uVar19 | (int)uVar19 >> 4;
                  uVar19 = uVar19 | (int)uVar19 >> 2;
                  FUN_037cee08(param_5 + 0x19d0,(uVar19 | (int)uVar19 >> 1) + 1,
                               *(undefined8 *)Fusion_SimulationMessage_TypeInfo);
                  lVar28 = *(long *)(param_5 + 0x19d0);
                  if (lVar28 == 0) goto LAB_06335220;
                }
                uVar19 = *(uint *)(lVar28 + 0x18);
LAB_063321e4:
                if (uVar21 + 1 < uVar19) {
                  iVar16 = 0;
                  goto LAB_0633230c;
                }
                goto LAB_063362cc;
              }
              goto LAB_06335220;
            }
            lVar28 = *(long *)(param_5 + 0x19d0);
            if (lVar28 == 0) goto LAB_06335220;
            if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_063362cc;
            puVar29 = (uint *)(lVar28 + (long)(int)uVar21 * 0x18 + 0x24);
            uVar19 = *puVar29;
            if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar14 = FUN_0634b3d8(uVar13,0);
            if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_063362cc;
            *puVar29 = uVar19 * 0x21 ^ uVar14 & 0xffff;
            lVar28 = *(long *)(param_5 + 0x19d0);
            if (lVar28 == 0) goto LAB_06335220;
            if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_063362cc;
            lVar28 = lVar28 + (long)(int)uVar21 * 0x18;
LAB_063322d4:
            iVar20 = *(int *)(lVar28 + 0x30);
            uVar19 = 2;
          }
          else {
            if (uVar19 != 4) goto LAB_06332398;
            if (uVar13 == 0x20) {
              lVar28 = *(long *)(param_5 + 0x19d0);
              if (lVar28 != 0) {
                uVar19 = *(uint *)(lVar28 + 0x18);
                goto LAB_063321e4;
              }
              goto LAB_06335220;
            }
            lVar28 = *(long *)(param_5 + 0x19d0);
            if (lVar28 == 0) goto LAB_06335220;
            if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_063362cc;
            lVar28 = lVar28 + (long)(int)uVar21 * 0x18;
            uVar19 = 4;
LAB_06332388:
            iVar20 = *(int *)(lVar28 + 0x30);
          }
          *(int *)(lVar28 + 0x30) = iVar20 + 1;
          iVar20 = 1;
          goto LAB_06332398;
        }
        if (uVar19 != 0) {
          if (uVar19 != 1) goto LAB_06332398;
          if ((int)uVar13 < 0x65) {
            if (uVar13 == 0x20) {
LAB_063322e0:
              lVar28 = *(long *)(param_5 + 0x19d0);
              if (lVar28 == 0) goto LAB_06335220;
              uVar19 = (uint)*(undefined8 *)(lVar28 + 0x18);
              if (uVar19 <= uVar21) goto LAB_063362cc;
              iVar16 = 0;
            }
            else {
              if (uVar13 != 0x25) {
LAB_0633236c:
                lVar28 = *(long *)(param_5 + 0x19d0);
                if (lVar28 != 0) {
                  if (uVar21 < *(uint *)(lVar28 + 0x18)) {
                    lVar28 = lVar28 + (long)(int)uVar21 * 0x18;
                    uVar19 = 1;
                    goto LAB_06332388;
                  }
                  goto LAB_063362cc;
                }
                goto LAB_06335220;
              }
              lVar28 = *(long *)(param_5 + 0x19d0);
              if (lVar28 == 0) goto LAB_06335220;
              uVar19 = (uint)*(undefined8 *)(lVar28 + 0x18);
              if (uVar19 <= uVar21) goto LAB_063362cc;
              iVar16 = 2;
            }
          }
          else {
            if (uVar13 == 0x70) goto LAB_063322e0;
            if (uVar13 != 0x65) goto LAB_0633236c;
            lVar28 = *(long *)(param_5 + 0x19d0);
            if (lVar28 == 0) goto LAB_06335220;
            uVar19 = (uint)*(undefined8 *)(lVar28 + 0x18);
            if (uVar19 <= uVar21) goto LAB_063362cc;
            iVar16 = 1;
          }
          *(int *)(lVar28 + (long)(int)uVar21 * 0x18 + 0x34) = iVar16;
          if (uVar21 + 1 < uVar19) {
LAB_0633230c:
            uVar21 = uVar21 + 1;
            lVar28 = lVar28 + (long)(int)uVar21 * 0x18;
            uVar19 = 0;
            *(undefined8 *)(lVar28 + 0x20) = 0;
            *(undefined8 *)(lVar28 + 0x28) = 0;
            *(undefined8 *)(lVar28 + 0x30) = 0;
            iVar20 = 2;
            goto LAB_06332398;
          }
          goto LAB_063362cc;
        }
        if (((uVar13 < 0x2f) && ((1L << ((ulong)uVar13 & 0x3f) & 0x680000000000U) != 0)) ||
           (0xfffffff5 < uVar13 - 0x3a)) {
          lVar28 = *(long *)(param_5 + 0x19d0);
          if (lVar28 == 0) goto LAB_06335220;
          if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_063362cc;
          lVar28 = lVar28 + (long)(int)uVar21 * 0x18;
          uVar19 = 1;
LAB_0633214c:
          iVar16 = 0;
          *(uint *)(lVar28 + 0x28) = uVar19;
          *(uint *)(lVar28 + 0x2c) = uVar14;
          *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
          iVar20 = 1;
        }
        else {
          lVar28 = *(long *)(param_5 + 0x19d0);
          if (uVar13 == 0x22) {
            if (lVar28 == 0) goto LAB_06335220;
            if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_063362cc;
            lVar28 = lVar28 + (long)(int)uVar21 * 0x18;
            uVar19 = 2;
            iVar16 = 0;
            *(undefined4 *)(lVar28 + 0x28) = 2;
            *(uint *)(lVar28 + 0x2c) = uVar14 + 1;
            iVar20 = 1;
            bVar8 = 1;
          }
          else {
            if (uVar13 != 0x27) {
              if (uVar13 == 0x23) {
                if (lVar28 != 0) {
                  if (uVar21 < *(uint *)(lVar28 + 0x18)) {
                    lVar28 = lVar28 + (long)(int)uVar21 * 0x18;
                    uVar19 = 4;
                    goto LAB_0633214c;
                  }
                  goto LAB_063362cc;
                }
                goto LAB_06335220;
              }
              if (lVar28 != 0) {
                if (uVar21 < *(uint *)(lVar28 + 0x18)) {
                  lVar30 = lVar28 + (long)(int)uVar21 * 0x18;
                  uVar19 = *(uint *)(lVar30 + 0x24);
                  *(undefined4 *)(lVar30 + 0x28) = 2;
                  *(uint *)(lVar30 + 0x2c) = uVar14;
                  if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                  }
                  uVar14 = FUN_0634b3d8(uVar13,0);
                  if (uVar21 < *(uint *)(lVar28 + 0x18)) {
                    *(uint *)(lVar30 + 0x24) = uVar19 * 0x21 ^ uVar14 & 0xffff;
                    lVar28 = *(long *)(param_5 + 0x19d0);
                    if (lVar28 != 0) {
                      if (uVar21 < *(uint *)(lVar28 + 0x18)) {
                        iVar16 = 0;
                        lVar28 = lVar28 + (long)(int)uVar21 * 0x18;
                        goto LAB_063322d4;
                      }
                      goto LAB_063362cc;
                    }
                    goto LAB_06335220;
                  }
                }
                goto LAB_063362cc;
              }
              goto LAB_06335220;
            }
            if (lVar28 == 0) goto LAB_06335220;
            if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_063362cc;
            lVar28 = lVar28 + (long)(int)uVar21 * 0x18;
            uVar19 = 2;
            iVar16 = 0;
            *(undefined4 *)(lVar28 + 0x28) = 2;
            *(uint *)(lVar28 + 0x2c) = uVar14 + 1;
            iVar20 = 1;
            bVar3 = 1;
          }
        }
      }
      else {
LAB_06332398:
        if (uVar13 == 0x3d) {
          iVar20 = 1;
        }
        if ((uVar13 == 0x20) && (iVar20 == 0)) {
          if (bVar1) {
            return 0;
          }
          lVar28 = *(long *)(param_5 + 0x19d0);
          if (lVar28 == 0) goto LAB_06335220;
          uVar21 = uVar21 + 1;
          if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_063362cc;
          lVar28 = lVar28 + (long)(int)uVar21 * 0x18;
          uVar19 = 0;
          iVar16 = 0;
          bVar1 = true;
          *(undefined8 *)(lVar28 + 0x20) = 0;
          *(undefined8 *)(lVar28 + 0x28) = 0;
          *(undefined8 *)(lVar28 + 0x30) = 0;
        }
        else if (iVar20 != 2) {
          if (iVar20 == 0) {
            lVar28 = *(long *)(param_5 + 0x19d0);
            if (lVar28 != 0) {
              if (uVar21 < *(uint *)(lVar28 + 0x18)) {
                puVar29 = (uint *)(lVar28 + (long)(int)uVar21 * 0x18 + 0x20);
                uVar14 = *puVar29;
                if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                uVar13 = FUN_0634b3d8(uVar13,0);
                if (uVar21 < *(uint *)(lVar28 + 0x18)) {
                  iVar20 = 0;
                  *puVar29 = uVar14 * 0x21 ^ uVar13 & 0xffff;
                  goto LAB_0633247c;
                }
              }
              goto LAB_063362cc;
            }
            goto LAB_06335220;
          }
          goto LAB_0633247c;
        }
        iVar20 = (uint)(uVar13 != 0x20) << 1;
      }
LAB_0633247c:
      uVar23 = uVar23 + 1;
      uVar13 = *(uint *)(param_6 + 0x18);
      puVar26 = puVar26 + 4;
      if ((int)uVar13 <= param_7 + (int)uVar23) {
        return 0;
      }
      goto LAB_0633203c;
    }
  }
  goto LAB_06335220;
  while( true ) {
    iVar16 = *(int *)(lVar27 + 0x20 + (long)(int)uVar13 * 0x18);
    if (iVar16 == 0x2d2c87) {
      lVar27 = lVar27 + 0x20 + (long)(int)uVar13 * 0x18;
      uVar18 = *(undefined8 *)(param_5 + 0x30);
      uVar15 = *(undefined4 *)(lVar27 + 0xc);
      uVar33 = *(undefined4 *)(lVar27 + 0x10);
      if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      fVar31 = (float)FUN_063487dc(uVar18,uVar15,uVar33,0);
      lVar27 = *(long *)(param_5 + 0x19d0);
      *(bool *)(param_5 + 0x2b8) = fVar31 != 0.0;
    }
    else if (iVar16 == 0) goto LAB_06335224;
    uVar13 = uVar13 + 1;
    if (lVar27 == 0) break;
LAB_06335198:
    if ((int)*(uint *)(lVar27 + 0x18) <= (int)uVar13) {
LAB_06335224:
      FUN_0473c220(param_5 + 0x290,*(undefined8 *)(param_5 + 0x288),
                   *(undefined8 *)Game_Views_Voxels_SliceVoxel_TypeInfo);
      return 1;
    }
    if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_063362cc;
  }
  goto LAB_06335220;
LAB_063347ec:
  if (uVar13 <= uVar21) goto LAB_063362cc;
  lVar27 = lVar30 + 0x20;
  iVar16 = *(int *)(lVar27 + (long)(int)uVar21 * 0x18);
  if (iVar16 == 0x28989b) {
    lVar27 = lVar27 + (long)(int)uVar21 * 0x18;
    uVar18 = *(undefined8 *)(param_5 + 0x30);
    uVar15 = *(undefined4 *)(lVar27 + 0xc);
    uVar33 = *(undefined4 *)(lVar27 + 0x10);
    if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    fVar31 = (float)FUN_063487dc(uVar18,uVar15,uVar33,0);
    if (fVar31 == -32768.0) {
      return 0;
    }
    lVar30 = *(long *)(param_5 + 0x19d0);
    if (lVar30 == 0) goto LAB_06335220;
    if (*(uint *)(lVar30 + 0x18) <= uVar21) goto LAB_063362cc;
    iVar16 = *(int *)(lVar30 + (long)(int)uVar21 * 0x18 + 0x34);
    if (iVar16 == 0) {
LAB_063349ac:
      *(float *)(param_5 + 0x358) = fVar31;
    }
    else {
      if (iVar16 == 1) {
        fVar31 = fVar31 * *(float *)(param_5 + 0xf4);
        goto LAB_063349ac;
      }
      if (iVar16 == 2) {
        fVar32 = 0.0;
        if (*(float *)(param_5 + 0x360) != -1.0) {
          fVar32 = *(float *)(param_5 + 0x360);
        }
        fVar31 = (fVar31 * (*(float *)(param_5 + 0x58) - fVar32)) / 100.0;
        goto LAB_063349ac;
      }
      fVar31 = *(float *)(param_5 + 0x358);
    }
    if (fVar31 < 0.0) {
      fVar31 = 0.0;
    }
    *(float *)(param_5 + 0x358) = fVar31;
  }
  else if (iVar16 == 0x5f4ec60) {
    lVar27 = lVar27 + (long)(int)uVar21 * 0x18;
    uVar18 = *(undefined8 *)(param_5 + 0x30);
    uVar15 = *(undefined4 *)(lVar27 + 0xc);
    uVar33 = *(undefined4 *)(lVar27 + 0x10);
    if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    fVar31 = (float)FUN_063487dc(uVar18,uVar15,uVar33,0);
    if (fVar31 == -32768.0) {
      return 0;
    }
    lVar30 = *(long *)(param_5 + 0x19d0);
    if (lVar30 == 0) goto LAB_06335220;
    if (*(uint *)(lVar30 + 0x18) <= uVar21) goto LAB_063362cc;
    iVar16 = *(int *)(lVar30 + (long)(int)uVar21 * 0x18 + 0x34);
    if (iVar16 == 0) {
LAB_06334974:
      *(float *)(param_5 + 0x35c) = fVar31;
    }
    else {
      if (iVar16 == 1) {
        fVar31 = fVar31 * *(float *)(param_5 + 0xf4);
        goto LAB_06334974;
      }
      if (iVar16 == 2) {
        fVar32 = 0.0;
        if (*(float *)(param_5 + 0x360) != -1.0) {
          fVar32 = *(float *)(param_5 + 0x360);
        }
        fVar31 = (fVar31 * (*(float *)(param_5 + 0x58) - fVar32)) / 100.0;
        goto LAB_06334974;
      }
      fVar31 = *(float *)(param_5 + 0x35c);
    }
    if (fVar31 < 0.0) {
      fVar31 = 0.0;
    }
    *(float *)(param_5 + 0x35c) = fVar31;
  }
  else if (iVar16 == 0) {
    return 1;
  }
  uVar13 = *(uint *)(lVar30 + 0x18);
  uVar21 = uVar21 + 1;
  if ((int)uVar13 <= (int)uVar21) {
    return 1;
  }
  goto LAB_063347ec;
LAB_06335cf8:
  uVar21 = *(uint *)(lVar27 + 0x18);
  if ((int)uVar21 <= (int)uVar13) {
LAB_06335f70:
    if (*(int *)(param_5 + 0x1584) == -1) {
      return 0;
    }
    lVar27 = *(long *)(param_5 + 0xe0);
    if (lVar27 != 0) {
      uVar15 = FUN_0631c39c(*(undefined8 *)(lVar27 + 0x28),lVar27,param_5 + 0x15b8,
                            *(undefined8 *)(param_5 + 0x19e0),0);
      *(undefined4 *)(param_5 + 0x78) = uVar15;
      *(undefined1 *)(param_5 + 0x1580) = 2;
      return 1;
    }
    goto LAB_06335220;
  }
  if (uVar21 <= uVar13) goto LAB_063362cc;
  lVar28 = lVar27 + 0x20;
  iVar16 = *(int *)(lVar28 + (long)(int)uVar13 * 0x18);
  if (iVar16 == 0) goto LAB_06335f70;
  iStack_124 = 0;
  if (iVar16 < 0x2be0e8) {
    if (iVar16 != -0x3b198217) {
      if (iVar16 == 0x22d74b) {
        lVar28 = lVar28 + (long)(int)uVar13 * 0x18;
        uVar18 = *(undefined8 *)(param_5 + 0x30);
        uVar15 = *(undefined4 *)(lVar28 + 0xc);
        uVar33 = *(undefined4 *)(lVar28 + 0x10);
        if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        iVar16 = FUN_0634b44c(uVar18,uVar15,uVar33,param_5 + 0x19d8,0);
        if (iVar16 != 3) {
          return 0;
        }
        lVar27 = *(long *)(param_5 + 0x19d8);
        if (lVar27 == 0) goto LAB_06335220;
        if (*(int *)(lVar27 + 0x18) == 0) goto LAB_063362cc;
        iVar16 = -0x80000000;
        if (*(float *)(lVar27 + 0x20) != INFINITY) {
          iVar16 = (int)*(float *)(lVar27 + 0x20);
        }
      }
      else {
        if (iVar16 != 0x2be0e7) {
          return 0;
        }
        uVar18 = FUN_063417c8(*(undefined8 *)(param_5 + 0xe0),
                              *(undefined4 *)(lVar28 + (long)(int)uVar13 * 0x18 + 4),1,&iStack_124,0
                              ,0);
        *(undefined8 *)(param_5 + 0xe0) = uVar18;
        thunk_FUN_02ee2be8(param_5 + 0xe0,uVar18);
        iVar16 = iStack_124;
        if (iStack_124 == -1) {
          return 0;
        }
      }
LAB_06335f04:
      *(int *)(param_5 + 0x1584) = iVar16;
    }
  }
  else if (iVar16 == 0x2d2c87) {
    lVar28 = lVar28 + (long)(int)uVar13 * 0x18;
    uVar18 = *(undefined8 *)(param_5 + 0x30);
    uVar15 = *(undefined4 *)(lVar28 + 0xc);
    uVar33 = *(undefined4 *)(lVar28 + 0x10);
    if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    fVar31 = (float)FUN_063487dc(uVar18,uVar15,uVar33,0);
    *(bool *)(param_5 + 0x19e9) = fVar31 != 0.0;
  }
  else {
    if (iVar16 != 0x4e3381d) {
      if (iVar16 != 0x505d3fe) {
        return 0;
      }
      if (uVar21 < 2) goto LAB_063362cc;
      uVar15 = *(undefined4 *)(lVar27 + 0x44);
      uVar33 = *(undefined4 *)(lVar27 + 0x48);
      uVar18 = *(undefined8 *)(param_5 + 0x30);
      if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      fVar31 = (float)FUN_063487dc(uVar18,uVar15,uVar33,0);
      iVar20 = -0x80000000;
      if (fVar31 != INFINITY) {
        iVar20 = (int)fVar31;
      }
      if (iVar20 == -0x8000) {
        return 0;
      }
      iStack_124 = iVar20;
      if ((*(long *)(param_5 + 0xe0) != 0) &&
         (lVar27 = FUN_06340cdc(*(long *)(param_5 + 0xe0),0), lVar27 != 0)) {
        iVar16 = iStack_124;
        if (*(int *)(lVar27 + 0x18) + -1 < iVar20) {
          return 0;
        }
        goto LAB_06335f04;
      }
      goto LAB_06335220;
    }
    lVar28 = lVar28 + (long)(int)uVar13 * 0x18;
    uVar18 = *(undefined8 *)(param_5 + 0x30);
    uVar15 = *(undefined4 *)(lVar28 + 0xc);
    uVar33 = *(undefined4 *)(lVar28 + 0x10);
    if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar15 = FUN_06348388(uVar18,uVar15,uVar33,0);
    *(undefined4 *)(param_5 + 0x1588) = uVar15;
  }
  uVar13 = uVar13 + 1;
  lVar27 = *(long *)(param_5 + 0x19d0);
  if (lVar27 == 0) goto LAB_06335220;
  goto LAB_06335cf8;
LAB_063335dc:
  if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_063362cc;
  iVar5 = *(int *)(lVar27 + 0x20 + (ulong)uVar21 * 0x18 + 0x10);
  if (0 < iVar5) {
    iVar20 = *(int *)(lVar27 + 0x20 + (ulong)uVar21 * 0x18 + 0xc) + iVar5;
    goto LAB_06336094;
  }
  uVar13 = uVar21 - 1;
  bVar1 = (int)uVar21 < 1;
  uVar21 = uVar13;
  if (uVar13 == 0 || bVar1) {
LAB_06336094:
    if (0 < iVar16) {
      FUN_0631b524(puVar22,*(undefined8 *)(param_5 + 0x30),2,iVar20 + -1,0);
    }
LAB_063346e8:
    *(int *)(param_10 + 0x20) = *(int *)(param_10 + 0x20) + 1;
    return 1;
  }
  goto LAB_063335dc;
  while( true ) {
    lVar27 = *(long *)(param_5 + 0x19d0);
    uVar13 = uVar13 + 1;
    if (lVar27 == 0) break;
LAB_06333dfc:
    if ((int)*(uint *)(lVar27 + 0x18) <= (int)uVar13) {
LAB_06333fa4:
      uVar13 = (uint)*(byte *)(param_5 + 0x1af);
      if ((uint)uVar23 >> 0x18 <= (uint)*(byte *)(param_5 + 0x1af)) {
        uVar13 = (uint)(uVar23 >> 0x18);
      }
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1e0 = 0;
      FUN_0634812c(uStack_a0 & 0xffffffff,uStack_a0._4_4_,uStack_98 & 0xffffffff,uStack_98._4_4_,
                   &uStack_1f0,(uint)uVar23 & 0xffffff | uVar13 << 0x18,0);
      puVar9 = Mono_Xml_SmallXmlParser_TypeInfo;
      *(undefined8 *)(param_5 + 0x40) = uStack_1e8;
      *(undefined8 *)(param_5 + 0x38) = uStack_1f0;
      uVar18 = *(undefined8 *)puVar9;
      *(undefined4 *)(param_5 + 0x48) = uStack_1e0;
      uStack_188 = uStack_1e8;
      uStack_190 = uStack_1f0;
      uStack_180 = CONCAT44(uStack_180._4_4_,uStack_1e0);
      FUN_0473aa14(param_5 + 0x238,&uStack_190,uVar18);
      if (param_10 != 0) {
        *(undefined1 *)(param_10 + 0x68) = 1;
        return 1;
      }
      return 1;
    }
    if (*(uint *)(lVar27 + 0x18) <= uVar13) {
LAB_063362cc:
                    /* WARNING: Subroutine does not return */
      FUN_02e3cccc();
    }
    lVar28 = lVar27 + 0x20;
    iVar16 = *(int *)(lVar28 + (long)(int)uVar13 * 0x18);
    if (iVar16 < 0x292f75) {
      if (iVar16 == -0x7fd3848f) {
        lVar28 = lVar28 + (long)(int)uVar13 * 0x18;
        uVar18 = *(undefined8 *)(param_5 + 0x30);
        uVar15 = *(undefined4 *)(lVar28 + 0xc);
        uVar33 = *(undefined4 *)(lVar28 + 0x10);
        if (*(int *)(*(long *)System_ModifierSpec_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        iVar16 = FUN_0634b44c(uVar18,uVar15,uVar33,param_5 + 0x19d8,0);
        if (iVar16 != 4) {
          return 0;
        }
        lVar27 = *(long *)(param_5 + 0x19d8);
        if (lVar27 == 0) break;
        uVar21 = *(uint *)(lVar27 + 0x18);
        if ((((uVar21 == 0) || (uVar21 == 1)) || (uVar21 < 3)) || (uVar21 == 3)) goto LAB_063362cc;
        uVar15 = *(undefined4 *)(lVar27 + 0x20);
        uVar33 = *(undefined4 *)(lVar27 + 0x24);
        uVar34 = *(undefined4 *)(lVar27 + 0x28);
        uVar38 = *(undefined4 *)(lVar27 + 0x2c);
        if (*(int *)(*(long *)System_Reflection_SignatureConstructedGenericType_TypeInfo + 0xe4) ==
            0) {
          thunk_FUN_02e9a04c();
        }
        FUN_06347fc0(uVar15,uVar33,uVar34,uVar38,&uStack_a0,0);
        uVar33 = (undefined4)(uStack_a0 >> 0x20);
        uVar34 = (undefined4)uStack_98;
        uVar38 = (undefined4)(uStack_98 >> 0x20);
        uVar15 = FUN_06347ff4(uStack_a0 & 0xffffffff,0);
        uStack_a0 = CONCAT44(uVar33,uVar15);
        uStack_98 = CONCAT44(uVar38,uVar34);
      }
      else if (iVar16 == 0) goto LAB_06333fa4;
    }
    else if (iVar16 == 0x292f75) {
      if (*(int *)(lVar28 + (long)(int)uVar13 * 0x18 + 8) == 4) {
        uVar18 = *(undefined8 *)(param_5 + 0x30);
        uVar15 = *(undefined4 *)(lVar27 + 0x2c);
        uVar33 = *(undefined4 *)(lVar27 + 0x30);
        lVar27 = *(long *)System_ModifierSpec_TypeInfo;
        goto LAB_06333f64;
      }
    }
    else if (iVar16 == 0x4e3381d) {
      lVar28 = lVar28 + (long)(int)uVar13 * 0x18;
      uVar18 = *(undefined8 *)(param_5 + 0x30);
      lVar27 = *(long *)System_ModifierSpec_TypeInfo;
      uVar15 = *(undefined4 *)(lVar28 + 0xc);
      uVar33 = *(undefined4 *)(lVar28 + 0x10);
LAB_06333f64:
      if (*(int *)(lVar27 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar23 = FUN_06348388(uVar18,uVar15,uVar33,0);
      uVar23 = uVar23 & 0xffffffff;
    }
  }
LAB_06335220:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


