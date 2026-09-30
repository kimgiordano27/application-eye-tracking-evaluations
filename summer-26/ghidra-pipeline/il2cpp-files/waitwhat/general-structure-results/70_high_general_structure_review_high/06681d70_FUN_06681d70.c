/*
FUNCTION_NAME: FUN_06681d70
ENTRY_POINT: 06681d70
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_21;telemetry_or_network_hits_14;frame_or_lifecycle_behavior
*/


void FUN_06681d70(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  
  puVar5 = Best_HTTP_HTTPRequest_TypeInfo;
  if ((DAT_07557e6f & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f5010);
    FUN_03188a78(PTR_DAT_071161b8);
    FUN_03188a78(PTR_DAT_07114388);
    FUN_03188a78(Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo);
    FUN_03188a78(System_Xml_ValidatingReaderNodeData___TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_RenderGraphModule_TextureHandle_____TypeInfo);
    FUN_03188a78(UnityEngine_Android_AndroidScreenLayoutDirection_TypeInfo);
    FUN_03188a78(UnityEngine_Android_AndroidScreenLayoutLong_TypeInfo);
    FUN_03188a78(UnityEngine_Android_AndroidScreenLayoutRound_TypeInfo);
    FUN_03188a78(UnityEngine_Android_AndroidScreenLayoutSize_TypeInfo);
    FUN_03188a78(uint_____TypeInfo);
    FUN_03188a78(UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo);
    FUN_03188a78(PTR_DAT_07112a08);
    FUN_03188a78(PTR_DAT_070ca860);
    FUN_03188a78(PTR_DAT_070f5018);
    FUN_03188a78(PTR_DAT_07113968);
    FUN_03188a78(UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_TypeInfo);
    FUN_03188a78(System_Text_Json_Serialization_Converters_CharConverter_TypeInfo);
    FUN_03188a78(PTR_DAT_070f5f08);
    FUN_03188a78(Best_HTTP_HTTPRequestStates_TypeInfo);
    FUN_03188a78(Best_HTTP_Shared_HTTPUpdateDelegator_TypeInfo);
    FUN_03188a78(Best_HTTP_Hosts_Settings_HTTRequestSettings_TypeInfo);
    FUN_03188a78(System_Xml_HWStack_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_Hammersley_TypeInfo);
    FUN_03188a78(Oculus_Interaction_Input_Hand_TypeInfo);
    FUN_03188a78(Oisoi_Interaction_Hand_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Hand_TypeInfo);
    FUN_03188a78(HandAnimation_TypeInfo);
    FUN_03188a78(Oculus_Interaction_Input_HandDataAsset_TypeInfo);
    FUN_03188a78(Oculus_Interaction_Input_HandDataSourceConfig_TypeInfo);
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_Hands_HandExpressionName_TypeInfo
                );
    FUN_03188a78(Oculus_Interaction_Input_HandFinger_TypeInfo);
    FUN_03188a78(Oculus_Interaction_HandFingerMaskGenerator_TypeInfo);
    FUN_03188a78(Oculus_Interaction_HandGrab_HandGrabInteractable_TypeInfo);
    FUN_03188a78(Oculus_Interaction_HandGrab_HandGrabPose_TypeInfo);
    FUN_03188a78(Oculus_Interaction_HandGrab_HandGrabResult_TypeInfo);
    FUN_03188a78(Oculus_Interaction_HandGrab_HandGrabTarget_TypeInfo);
    FUN_03188a78(Oculus_Interaction_Input_HandJointCache_TypeInfo);
    FUN_03188a78(Oculus_Interaction_Input_HandJointId_TypeInfo);
    FUN_03188a78(Oculus_Interaction_Input_HandJointUtils_TypeInfo);
    FUN_03188a78(Oculus_Interaction_Input_Compatibility_OpenXR_HandJointUtils_TypeInfo);
    FUN_03188a78(Oculus_Interaction_Input_HandMirroring_TypeInfo);
    FUN_03188a78(Oculus_Interaction_GrabAPI_HandPinchData_TypeInfo);
    FUN_03188a78(Oculus_Interaction_HandGrab_HandPose_TypeInfo);
    FUN_03188a78(Oculus_Interaction_Input_HandSkeleton_TypeInfo);
    FUN_03188a78(Oculus_Interaction_Input_Compatibility_OpenXR_HandSkeleton_TypeInfo);
    FUN_03188a78(HandSync_TypeInfo);
    FUN_03188a78(Best_HTTP_HTTPRequest_TypeInfo);
    FUN_03188a78(Fusion_Addons_HandsSync_HandSynchronizationBoneId_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Hands_OpenXR_HandTracking_TypeInfo);
    FUN_03188a78(Oculus_Interaction_HandTrackingConfidenceProvider_TypeInfo);
    FUN_03188a78(Oculus_Interaction_HandTranslationUtils_TypeInfo);
    DAT_07557e6f = 1;
  }
  lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar5);
  FUN_05971910(lVar10,0);
  puVar5 = System_Text_Json_Serialization_Converters_CharConverter_TypeInfo;
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x10) = param_2;
    FUN_065cf004(param_1,0);
    lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar5);
    FUN_065ded94(lVar11,0);
    puVar5 = Fusion_Addons_HandsSync_HandSynchronizationBoneId_TypeInfo;
    if (lVar11 != 0) {
      lVar12 = *(long *)Fusion_Addons_HandsSync_HandSynchronizationBoneId_TypeInfo;
      iVar1 = *(int *)(lVar12 + 0xe4);
      *(undefined8 *)(lVar11 + 0x28) =
           *(undefined8 *)Oculus_Interaction_HandTranslationUtils_TypeInfo;
      *(undefined4 *)(lVar11 + 0x48) = 1;
      if (iVar1 == 0) {
        thunk_FUN_031e5338();
        lVar12 = *(long *)puVar5;
      }
      puVar14 = *(undefined8 **)(lVar12 + 0xb8);
      lVar15 = puVar14[1];
      if (lVar15 == 0) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          puVar14 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
        }
        uVar17 = *puVar14;
        lVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)PTR_DAT_070f5018);
        FUN_0570ec28(lVar15,uVar17,*(undefined8 *)Best_HTTP_Shared_HTTPUpdateDelegator_TypeInfo,0);
        lVar12 = *(long *)puVar5;
        *(long *)(*(long *)(lVar12 + 0xb8) + 8) = lVar15;
      }
      iVar1 = *(int *)(lVar12 + 0xe4);
      *(long *)(lVar11 + 0x50) = lVar15;
      if (iVar1 == 0) {
        thunk_FUN_031e5338();
        lVar12 = *(long *)puVar5;
      }
      puVar3 = System_Xml_ValidatingReaderNodeData___TypeInfo;
      puVar2 = PTR_DAT_070ca860;
      puVar14 = *(undefined8 **)(lVar12 + 0xb8);
      lVar15 = puVar14[2];
      if (lVar15 == 0) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          puVar14 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
        }
        uVar17 = *puVar14;
        lVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)puVar2);
        FUN_0570e268(lVar15,uVar17,*(undefined8 *)UnityEngine_Rendering_Hammersley_TypeInfo,0);
        *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10) = lVar15;
      }
      *(long *)(lVar11 + 0x40) = lVar15;
      FUN_065ceea0(param_1,lVar11,0);
      lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)puVar3);
      FUN_065dc6cc(lVar11,0);
      if (lVar11 != 0) {
        lVar12 = *(long *)puVar5;
        iVar1 = *(int *)(lVar12 + 0xe4);
        *(undefined8 *)(lVar11 + 0x28) =
             *(undefined8 *)Oculus_Interaction_HandTrackingConfidenceProvider_TypeInfo;
        if (iVar1 == 0) {
          thunk_FUN_031e5338();
          lVar12 = *(long *)puVar5;
        }
        puVar4 = Best_HTTP_HTTPRequestStates_TypeInfo;
        puVar3 = Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo;
        puVar14 = *(undefined8 **)(lVar12 + 0xb8);
        lVar15 = puVar14[3];
        if (lVar15 == 0) {
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            puVar14 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
          }
          uVar17 = *puVar14;
          lVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)puVar2);
          FUN_0570e268(lVar15,uVar17,*(undefined8 *)Oisoi_Interaction_Hand_TypeInfo,0);
          *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18) = lVar15;
        }
        uVar17 = *(undefined8 *)puVar3;
        lVar16 = *(long *)(lVar11 + 0x48);
        *(long *)(lVar11 + 0x40) = lVar15;
        lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (uVar17);
        FUN_065dd9c8(lVar12,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        puVar8 = Oculus_Interaction_Input_HandMirroring_TypeInfo;
        puVar7 = Oculus_Interaction_Input_Compatibility_OpenXR_HandJointUtils_TypeInfo;
        puVar6 = PTR_DAT_070f5010;
        if (lVar12 != 0) {
          FUN_065d2e5c(lVar12,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10),
                       *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18),0);
          uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)puVar2);
          FUN_0570e268(uVar17,lVar10,*(undefined8 *)puVar7,0);
          uVar13 = *(undefined8 *)puVar6;
          *(undefined8 *)(lVar12 + 0x48) = uVar17;
          uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (uVar13);
          FUN_0510cecc(uVar17,lVar10,*(undefined8 *)puVar8,0);
          *(undefined8 *)(lVar12 + 0x50) = uVar17;
          puVar6 = PTR_DAT_070f5f08;
          if (lVar16 != 0) {
            FUN_04782880(lVar16,lVar12,*(undefined8 *)PTR_DAT_070f5f08);
            lVar15 = *(long *)(lVar11 + 0x48);
            lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)puVar3);
            FUN_065dd9c8(lVar12,0);
            puVar8 = Oculus_Interaction_HandGrab_HandPose_TypeInfo;
            puVar7 = Oculus_Interaction_GrabAPI_HandPinchData_TypeInfo;
            if (lVar12 != 0) {
              FUN_065d2e5c(lVar12,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20),
                           *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28),0);
              uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 (*(undefined8 *)puVar2);
              FUN_0570e268(uVar17,lVar10,*(undefined8 *)puVar7,0);
              puVar7 = PTR_DAT_070f5010;
              *(undefined8 *)(lVar12 + 0x48) = uVar17;
              uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 (*(undefined8 *)puVar7);
              FUN_0510cecc(uVar17,lVar10,*(undefined8 *)puVar8,0);
              *(undefined8 *)(lVar12 + 0x50) = uVar17;
              if (lVar15 != 0) {
                FUN_04782880(lVar15,lVar12,*(undefined8 *)puVar6);
                lVar15 = *(long *)(lVar11 + 0x48);
                lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                   (*(undefined8 *)puVar3);
                FUN_065dd9c8(lVar12,0);
                puVar8 = Oculus_Interaction_Input_Compatibility_OpenXR_HandSkeleton_TypeInfo;
                puVar7 = Oculus_Interaction_Input_HandSkeleton_TypeInfo;
                if (lVar12 != 0) {
                  FUN_065d2e5c(lVar12,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30),
                               *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38),0);
                  uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                     (*(undefined8 *)puVar2);
                  FUN_0570e268(uVar17,lVar10,*(undefined8 *)puVar7,0);
                  puVar7 = PTR_DAT_070f5010;
                  *(undefined8 *)(lVar12 + 0x48) = uVar17;
                  uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                     (*(undefined8 *)puVar7);
                  FUN_0510cecc(uVar17,lVar10,*(undefined8 *)puVar8,0);
                  *(undefined8 *)(lVar12 + 0x50) = uVar17;
                  if (lVar15 != 0) {
                    FUN_04782880(lVar15,lVar12,*(undefined8 *)puVar6);
                    lVar15 = *(long *)(lVar11 + 0x48);
                    lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                       (*(undefined8 *)puVar3);
                    FUN_065dd9c8(lVar12,0);
                    puVar8 = HandSync_TypeInfo;
                    puVar7 = UnityEngine_XR_Hand_TypeInfo;
                    if (lVar12 != 0) {
                      FUN_065d2e5c(lVar12,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40),
                                   *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48),0);
                      uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                         (*(undefined8 *)puVar2);
                      FUN_0570e268(uVar17,lVar10,*(undefined8 *)puVar8,0);
                      puVar8 = PTR_DAT_070f5010;
                      *(undefined8 *)(lVar12 + 0x48) = uVar17;
                      uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                         (*(undefined8 *)puVar8);
                      FUN_0510cecc(uVar17,lVar10,*(undefined8 *)puVar7,0);
                      *(undefined8 *)(lVar12 + 0x50) = uVar17;
                      if (lVar15 != 0) {
                        FUN_04782880(lVar15,lVar12,*(undefined8 *)puVar6);
                        lVar15 = *(long *)(lVar11 + 0x48);
                        lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                           (*(undefined8 *)puVar3);
                        FUN_065dd9c8(lVar12,0);
                        puVar7 = Oculus_Interaction_Input_HandDataAsset_TypeInfo;
                        puVar3 = HandAnimation_TypeInfo;
                        if (lVar12 != 0) {
                          FUN_065d2e5c(lVar12,*(undefined8 *)
                                               (*(long *)(*(long *)puVar4 + 0xb8) + 0x50),
                                       *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58),0);
                          uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                             (*(undefined8 *)puVar2);
                          FUN_0570e268(uVar17,lVar10,*(undefined8 *)puVar3,0);
                          puVar2 = PTR_DAT_070f5010;
                          *(undefined8 *)(lVar12 + 0x48) = uVar17;
                          uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                             (*(undefined8 *)puVar2);
                          FUN_0510cecc(uVar17,lVar10,*(undefined8 *)puVar7,0);
                          *(undefined8 *)(lVar12 + 0x50) = uVar17;
                          puVar2 = 
                          UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_TypeInfo;
                          if (lVar15 != 0) {
                            FUN_04782880(lVar15,lVar12,*(undefined8 *)puVar6);
                            lVar15 = *(long *)(lVar11 + 0x48);
                            lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                               (*(undefined8 *)puVar2);
                            FUN_065ddae0(lVar12,0);
                            puVar9 = Oculus_Interaction_Input_HandFinger_TypeInfo;
                            puVar8 = 
                            UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_Hands_HandExpressionName_TypeInfo
                            ;
                            puVar7 = Oculus_Interaction_Input_HandDataSourceConfig_TypeInfo;
                            puVar3 = PTR_DAT_07114388;
                            puVar2 = PTR_DAT_07113968;
                            if (lVar12 != 0) {
                              FUN_065d2e5c(lVar12,*(undefined8 *)
                                                   (*(long *)(*(long *)puVar4 + 0xb8) + 0x60),
                                           *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68)
                                           ,0);
                              uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                 (*(undefined8 *)puVar2);
                              FUN_0570e7e4(uVar17,lVar10,*(undefined8 *)puVar7,0);
                              uVar13 = *(undefined8 *)puVar3;
                              *(undefined8 *)(lVar12 + 0x48) = uVar17;
                              uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                 (uVar13);
                              FUN_0510eaf4(uVar17,lVar10,*(undefined8 *)puVar8,0);
                              puVar3 = PTR_DAT_070ca860;
                              *(undefined8 *)(lVar12 + 0x50) = uVar17;
                              uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                 (*(undefined8 *)puVar3);
                              FUN_0570e268(uVar17,lVar10,*(undefined8 *)puVar9,0);
                              lVar16 = *(long *)puVar5;
                              *(undefined8 *)(lVar12 + 0x40) = uVar17;
                              if (*(int *)(lVar16 + 0xe4) == 0) {
                                thunk_FUN_031e5338();
                                lVar16 = *(long *)puVar5;
                              }
                              puVar3 = Best_HTTP_HTTPRequestStates_TypeInfo;
                              puVar14 = *(undefined8 **)(lVar16 + 0xb8);
                              lVar18 = puVar14[4];
                              if (lVar18 == 0) {
                                if (*(int *)(lVar16 + 0xe4) == 0) {
                                  thunk_FUN_031e5338();
                                  puVar14 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                                }
                                uVar17 = *puVar14;
                                lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                   (*(undefined8 *)puVar2);
                                FUN_0570e7e4(lVar18,uVar17,
                                             *(undefined8 *)
                                              Best_HTTP_Hosts_Settings_HTTRequestSettings_TypeInfo,0
                                            );
                                lVar16 = *(long *)puVar5;
                                *(long *)(*(long *)(lVar16 + 0xb8) + 0x20) = lVar18;
                              }
                              iVar1 = *(int *)(lVar16 + 0xe4);
                              *(long *)(lVar12 + 0x60) = lVar18;
                              if (iVar1 == 0) {
                                thunk_FUN_031e5338();
                                lVar16 = *(long *)puVar5;
                              }
                              puVar14 = *(undefined8 **)(lVar16 + 0xb8);
                              lVar18 = puVar14[5];
                              if (lVar18 == 0) {
                                if (*(int *)(lVar16 + 0xe4) == 0) {
                                  thunk_FUN_031e5338();
                                  puVar14 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                                }
                                uVar17 = *puVar14;
                                lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                   (*(undefined8 *)puVar2);
                                FUN_0570e7e4(lVar18,uVar17,
                                             *(undefined8 *)System_Xml_HWStack_TypeInfo,0);
                                *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28) = lVar18;
                              }
                              *(long *)(lVar12 + 0x68) = lVar18;
                              puVar5 = 
                              UnityEngine_InputSystem_Android_LowLevel_AndroidSensorCapabilities_TypeInfo
                              ;
                              if (lVar15 != 0) {
                                FUN_04782880(lVar15,lVar12,*(undefined8 *)puVar6);
                                lVar15 = *(long *)(lVar11 + 0x48);
                                lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                   (*(undefined8 *)puVar5);
                                FUN_065ddc4c(lVar12,0);
                                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                  thunk_FUN_031e5338();
                                }
                                puVar7 = Oculus_Interaction_HandGrab_HandGrabPose_TypeInfo;
                                puVar6 = Oculus_Interaction_HandGrab_HandGrabInteractable_TypeInfo;
                                puVar4 = Oculus_Interaction_HandFingerMaskGenerator_TypeInfo;
                                puVar3 = PTR_DAT_071161b8;
                                puVar2 = PTR_DAT_07112a08;
                                if (lVar12 != 0) {
                                  FUN_065d2e5c(lVar12,*(undefined8 *)
                                                       (*(long *)(*(long *)
                                                  Best_HTTP_HTTPRequestStates_TypeInfo + 0xb8) +
                                                  0x70),*(undefined8 *)
                                                         (*(long *)(*(long *)
                                                  Best_HTTP_HTTPRequestStates_TypeInfo + 0xb8) +
                                                  0x78),0);
                                  uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                     (*(undefined8 *)puVar2);
                                  FUN_0570f240(uVar17,lVar10,*(undefined8 *)puVar4,0);
                                  uVar13 = *(undefined8 *)puVar3;
                                  *(undefined8 *)(lVar12 + 0x48) = uVar17;
                                  uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                     (uVar13);
                                  FUN_05112628(uVar17,lVar10,*(undefined8 *)puVar6,0);
                                  puVar4 = PTR_DAT_070ca860;
                                  *(undefined8 *)(lVar12 + 0x50) = uVar17;
                                  uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                     (*(undefined8 *)puVar4);
                                  FUN_0570e268(uVar17,lVar10,*(undefined8 *)puVar7,0);
                                  *(undefined8 *)(lVar12 + 0x40) = uVar17;
                                  if (lVar15 != 0) {
                                    FUN_04782880(lVar15,lVar12,*(undefined8 *)PTR_DAT_070f5f08);
                                    lVar15 = *(long *)(lVar11 + 0x48);
                                    lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                       (*(undefined8 *)puVar5);
                                    FUN_065ddc4c(lVar12,0);
                                    puVar7 = 
                                    Fusion_Addons_HandsSync_HandSynchronizationBoneId_TypeInfo;
                                    puVar6 = Oculus_Interaction_Input_HandJointCache_TypeInfo;
                                    puVar4 = Oculus_Interaction_HandGrab_HandGrabTarget_TypeInfo;
                                    puVar5 = Oculus_Interaction_HandGrab_HandGrabResult_TypeInfo;
                                    if (lVar12 != 0) {
                                      FUN_065d2e5c(lVar12,*(undefined8 *)
                                                           (*(long *)(*(long *)
                                                  Best_HTTP_HTTPRequestStates_TypeInfo + 0xb8) +
                                                  0x80),*(undefined8 *)
                                                         (*(long *)(*(long *)
                                                  Best_HTTP_HTTPRequestStates_TypeInfo + 0xb8) +
                                                  0x88),0);
                                      uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                         (*(undefined8 *)puVar2);
                                      FUN_0570f240(uVar17,lVar10,*(undefined8 *)puVar5,0);
                                      uVar13 = *(undefined8 *)puVar3;
                                      *(undefined8 *)(lVar12 + 0x48) = uVar17;
                                      uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                         (uVar13);
                                      FUN_05112628(uVar17,lVar10,*(undefined8 *)puVar4,0);
                                      puVar5 = PTR_DAT_070ca860;
                                      *(undefined8 *)(lVar12 + 0x50) = uVar17;
                                      uVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                         (*(undefined8 *)puVar5);
                                      FUN_0570e268(uVar17,lVar10,*(undefined8 *)puVar6,0);
                                      *(undefined8 *)(lVar12 + 0x40) = uVar17;
                                      puVar2 = PTR_DAT_070f5f08;
                                      if (lVar15 != 0) {
                                        FUN_04782880(lVar15,lVar12,*(undefined8 *)PTR_DAT_070f5f08);
                                        if (param_1 != 0) {
                                          FUN_065ceea0(param_1,lVar11,0);
                                          FUN_06682dac(param_1,*(undefined8 *)(lVar10 + 0x10));
                                          lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)
                                                                                                                            
                                                  System_Xml_ValidatingReaderNodeData___TypeInfo);
                                          FUN_065dc6cc(lVar11,0);
                                          if (lVar11 != 0) {
                                            lVar12 = *(long *)puVar7;
                                            iVar1 = *(int *)(lVar12 + 0xe4);
                                            *(undefined8 *)(lVar11 + 0x28) =
                                                 *(undefined8 *)
                                                  UnityEngine_XR_Hands_OpenXR_HandTracking_TypeInfo;
                                            if (iVar1 == 0) {
                                              thunk_FUN_031e5338();
                                              lVar12 = *(long *)puVar7;
                                            }
                                            puVar14 = *(undefined8 **)(lVar12 + 0xb8);
                                            lVar15 = puVar14[6];
                                            if (lVar15 == 0) {
                                              if (*(int *)(lVar12 + 0xe4) == 0) {
                                                thunk_FUN_031e5338();
                                                puVar14 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
                                              }
                                              uVar17 = *puVar14;
                                              lVar15 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar5);
                                              FUN_0570e268(lVar15,uVar17,
                                                           *(undefined8 *)
                                                            Oculus_Interaction_Input_Hand_TypeInfo,0
                                                          );
                                              *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x30) =
                                                   lVar15;
                                            }
                                            puVar3 = 
                                            Best_HTTP_Proxies_Autodetect_AndroidProxyDetector_TypeInfo
                                            ;
                                            lVar16 = *(long *)(lVar11 + 0x48);
                                            *(long *)(lVar11 + 0x40) = lVar15;
                                            lVar12 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar3);
                                            FUN_065dd9c8(lVar12,0);
                                            if (*(int *)(*(long *)
                                                  Best_HTTP_HTTPRequestStates_TypeInfo + 0xe4) == 0)
                                            {
                                              thunk_FUN_031e5338();
                                            }
                                            puVar4 = 
                                            Oculus_Interaction_Input_HandJointUtils_TypeInfo;
                                            puVar3 = Oculus_Interaction_Input_HandJointId_TypeInfo;
                                            if (lVar12 != 0) {
                                              FUN_065d2e5c(lVar12,**(undefined8 **)
                                                                    (*(long *)
                                                  Best_HTTP_HTTPRequestStates_TypeInfo + 0xb8),
                                                  (*(undefined8 **)
                                                    (*(long *)Best_HTTP_HTTPRequestStates_TypeInfo +
                                                    0xb8))[1],0);
                                              uVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar5);
                                              FUN_0570e268(uVar17,lVar10,*(undefined8 *)puVar3,0);
                                              puVar5 = PTR_DAT_070f5010;
                                              *(undefined8 *)(lVar12 + 0x48) = uVar17;
                                              uVar17 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar5);
                                              FUN_0510cecc(uVar17,lVar10,*(undefined8 *)puVar4,0);
                                              *(undefined8 *)(lVar12 + 0x50) = uVar17;
                                              if (lVar16 != 0) {
                                                FUN_04782880(lVar16,lVar12,*(undefined8 *)puVar2);
                                                FUN_065ceea0(param_1,lVar11,0);
                                                FUN_06683128(param_1,*(undefined8 *)(lVar10 + 0x10))
                                                ;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


