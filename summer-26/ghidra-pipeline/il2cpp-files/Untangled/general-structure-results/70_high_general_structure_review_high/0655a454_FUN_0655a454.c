/*
FUNCTION_NAME: FUN_0655a454
ENTRY_POINT: 0655a454
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;ray_or_cast_sink_hits_12;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0655a454(undefined8 param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  uint local_64;
  
  puVar3 = PTR_DAT_06d06310;
  if ((DAT_071ce69e & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d06310);
    FUN_02f07e70(PTR_DAT_06d02220);
    FUN_02f07e70(UnityEngine_XR_ARFoundation_ARRaycastHit_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARFoundation_ARRaycastManager_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARFoundation_ARRaycastUpdatedEventArgs_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARSubsystems_ARRenderingUtils_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARFoundation_ARSession_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_OpenXR_Features_Meta_ARSessionFeature_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARFoundation_ARSessionStateChangedEventArgs_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARFoundation_ARTextureInfo_TypeInfo);
    FUN_02f07e70(Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARFoundation_ARTrackedImagesChangedEventArgs_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARFoundation_ARTrackedObjectsChangedEventArgs_TypeInfo);
    FUN_02f07e70(System_Text_ASCIIEncoding_TypeInfo);
    FUN_02f07e70(Mono_Security_ASN1_TypeInfo);
    FUN_02f07e70(Mono_Security_ASN1_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d12e28);
    FUN_02f07e70(Gley_UrbanSystem_Internal_AStar_TypeInfo);
    FUN_02f07e70(System_Threading_AbandonedMutexException_TypeInfo);
    FUN_02f07e70(PlayFab_DataModels_AbortFileUploadsRequest_TypeInfo);
    FUN_02f07e70(PlayFab_DataModels_AbortFileUploadsResponse_TypeInfo);
    FUN_02f07e70(PixelCrushers_DialogueSystem_AbstractDialogueUI_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_AbstractProgressBar_TypeInfo);
    FUN_02f07e70(Oculus_Platform_Models_AbuseReportRecording_TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_Accelerometer_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d66e60);
    FUN_02f07e70(PlayFab_GroupsModels_AcceptGroupApplicationRequest_TypeInfo);
    FUN_02f07e70(PlayFab_GroupsModels_AcceptGroupInvitationRequest_TypeInfo);
    FUN_02f07e70(System_Data_AcceptRejectRule_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_AcceptTradeRequest_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d0e628);
    FUN_02f07e70(PlayFab_ClientModels_AcceptTradeResponse_TypeInfo);
    FUN_02f07e70(PixelCrushers_DialogueSystem_AcceptedTextDelegate_TypeInfo);
    FUN_02f07e70(Language_Lua_Access_TypeInfo);
    FUN_02f07e70(Oculus_Platform_Models_AchievementDefinition_TypeInfo);
    FUN_02f07e70(Oculus_Platform_Models_AchievementDefinitionList_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_OpenXR_Features_Meta_ARRaycastFeature_TypeInfo);
    DAT_071ce69e = 1;
  }
  local_64 = 0;
  plVar10 = (long *)thunk_FUN_02ef1808(*(undefined8 *)puVar3);
  FUN_05473914(plVar10,0);
  uVar11 = FUN_0656bfe8(param_1,1,0);
  uVar12 = FUN_0656c5dc(param_1,1,1,0);
  puVar6 = System_Text_ASCIIEncoding_TypeInfo;
  puVar4 = UnityEngine_XR_ARSubsystems_ARRenderingUtils_TypeInfo;
  puVar5 = UnityEngine_XR_ARFoundation_ARRaycastUpdatedEventArgs_TypeInfo;
  puVar3 = PTR_DAT_06d02220;
  if (plVar10 != (long *)0x0) {
    FUN_05475674(plVar10,*(undefined8 *)PixelCrushers_DialogueSystem_AcceptedTextDelegate_TypeInfo,0
                );
    FUN_05475674(plVar10,*(undefined8 *)puVar6,0);
    FUN_05475654(plVar10,0);
    FUN_05475674(plVar10,*(undefined8 *)puVar4,0);
    FUN_05475674(plVar10,*(undefined8 *)puVar5,0);
    lVar13 = FUN_02f07f14(*(undefined8 *)puVar3,5);
    if (lVar13 != 0) {
      if (*(int *)(lVar13 + 0x18) != 0) {
        *(undefined8 *)(lVar13 + 0x20) =
             *(undefined8 *)UnityEngine_XR_ARFoundation_ARRaycastHit_TypeInfo;
        thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x20));
        if (1 < *(uint *)(lVar13 + 0x18)) {
          *(undefined8 *)(lVar13 + 0x28) = uVar12;
          thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x28),uVar12);
          if (2 < *(uint *)(lVar13 + 0x18)) {
            *(undefined8 *)(lVar13 + 0x30) =
                 *(undefined8 *)System_Threading_AbandonedMutexException_TypeInfo;
            thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x30));
            if (3 < *(uint *)(lVar13 + 0x18)) {
              *(undefined8 *)(lVar13 + 0x38) = uVar12;
              thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x38),uVar12);
              puVar6 = Oculus_Platform_Models_AbuseReportRecording_TypeInfo;
              puVar4 = Gley_UrbanSystem_Internal_AStar_TypeInfo;
              puVar5 = PTR_DAT_06d12e28;
              if (4 < *(uint *)(lVar13 + 0x18)) {
                *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)PTR_DAT_06d0e628;
                thunk_FUN_02f411dc();
                uVar14 = FUN_0546583c(lVar13,0);
                FUN_05475674(plVar10,uVar14,0);
                FUN_05475674(plVar10,*(undefined8 *)puVar6,0);
                FUN_05475674(plVar10,*(undefined8 *)puVar5,0);
                FUN_05475654(plVar10,0);
                FUN_05475674(plVar10,*(undefined8 *)puVar4,0);
                lVar13 = FUN_02f07f14(*(undefined8 *)puVar3,5);
                if (lVar13 == 0) goto LAB_0655b01c;
                if (*(int *)(lVar13 + 0x18) != 0) {
                  *(undefined8 *)(lVar13 + 0x20) =
                       *(undefined8 *)PlayFab_DataModels_AbortFileUploadsResponse_TypeInfo;
                  thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x20));
                  if (1 < *(uint *)(lVar13 + 0x18)) {
                    *(undefined8 *)(lVar13 + 0x28) = uVar12;
                    thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x28),uVar12);
                    if (2 < *(uint *)(lVar13 + 0x18)) {
                      *(undefined8 *)(lVar13 + 0x30) =
                           *(undefined8 *)UnityEngine_XR_ARFoundation_ARTextureInfo_TypeInfo;
                      thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x30));
                      if (3 < *(uint *)(lVar13 + 0x18)) {
                        *(undefined8 *)(lVar13 + 0x38) = uVar11;
                        thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x38),uVar11);
                        puVar6 = PlayFab_ClientModels_AcceptTradeResponse_TypeInfo;
                        puVar4 = PlayFab_ClientModels_AcceptTradeRequest_TypeInfo;
                        puVar5 = UnityEngine_XR_ARFoundation_ARRaycastManager_TypeInfo;
                        if (4 < *(uint *)(lVar13 + 0x18)) {
                          *(undefined8 *)(lVar13 + 0x40) =
                               *(undefined8 *)
                                UnityEngine_XR_ARFoundation_ARTrackedObjectsChangedEventArgs_TypeInfo
                          ;
                          thunk_FUN_02f411dc();
                          uVar12 = FUN_0546583c(lVar13,0);
                          FUN_05475674(plVar10,uVar12,0);
                          uVar12 = FUN_05465414(*(undefined8 *)puVar6,uVar11,*(undefined8 *)puVar4,0
                                               );
                          FUN_05475674(plVar10,uVar12,0);
                          FUN_05475674(plVar10,*(undefined8 *)puVar5,0);
                          FUN_05475654(plVar10,0);
                          puVar7 = Mono_Security_ASN1_TypeInfo;
                          puVar6 = UnityEngine_XR_OpenXR_Features_Meta_ARSessionFeature_TypeInfo;
                          puVar4 = UnityEngine_XR_ARFoundation_ARSession_TypeInfo;
                          puVar5 = PTR_DAT_06d66e60;
                          if (param_2 != 0) {
                            uVar15 = *(uint *)(param_2 + 0x18);
                            if (0 < (int)uVar15) {
                              uVar17 = 0;
                              do {
                                if (uVar15 <= uVar17) goto LAB_0655b018;
                                lVar16 = *(long *)(param_2 + (long)(int)uVar17 * 8 + 0x20);
                                lVar13 = FUN_02f07f14(*(undefined8 *)puVar3,7);
                                if (lVar13 == 0) goto LAB_0655b01c;
                                if (*(int *)(lVar13 + 0x18) == 0) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)puVar4;
                                thunk_FUN_02f411dc();
                                if (*(int *)(*(long *)
                                              UnityEngine_XR_OpenXR_Features_Meta_ARRaycastFeature_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_02f12b58();
                                }
                                uVar12 = FUN_0655b284(lVar16);
                                if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x28) = uVar12;
                                thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x28),uVar12);
                                if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)puVar5;
                                thunk_FUN_02f411dc();
                                if (lVar16 == 0) goto LAB_0655b01c;
                                if (*(uint *)(lVar13 + 0x18) < 4) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(lVar16 + 0x30);
                                thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x38));
                                if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)puVar6;
                                thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x40));
                                if (*(uint *)(lVar13 + 0x18) < 6) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x48) = *(undefined8 *)(lVar16 + 0x38);
                                thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x48));
                                if (*(uint *)(lVar13 + 0x18) < 7) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x50) = *(undefined8 *)puVar7;
                                thunk_FUN_02f411dc();
                                uVar12 = FUN_0546583c(lVar13,0);
                                FUN_05475674(plVar10,uVar12,0);
                                uVar15 = *(uint *)(param_2 + 0x18);
                                uVar17 = uVar17 + 1;
                              } while ((int)uVar17 < (int)uVar15);
                            }
                            puVar9 = PlayFab_GroupsModels_AcceptGroupInvitationRequest_TypeInfo;
                            puVar8 = UnityEngine_UIElements_AbstractProgressBar_TypeInfo;
                            puVar6 = Mono_Security_ASN1_TypeInfo;
                            puVar4 = UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo;
                            FUN_05475654(plVar10,0);
                            FUN_05475674(plVar10,*(undefined8 *)puVar8,0);
                            FUN_05475674(plVar10,*(undefined8 *)puVar9,0);
                            FUN_05475654(plVar10,0);
                            uVar12 = FUN_05465414(*(undefined8 *)puVar6,uVar11,*(undefined8 *)puVar4
                                                  ,0);
                            FUN_05475674(plVar10,uVar12,0);
                            FUN_05475674(plVar10,*(undefined8 *)
                                                  UnityEngine_XR_ARFoundation_ARRaycastManager_TypeInfo
                                         ,0);
                            FUN_05475654(plVar10,0);
                            puVar8 = Language_Lua_Access_TypeInfo;
                            puVar6 = 
                            UnityEngine_XR_ARFoundation_ARSessionStateChangedEventArgs_TypeInfo;
                            puVar4 = PTR_DAT_06d0e628;
                            local_64 = 0;
                            uVar15 = *(uint *)(param_2 + 0x18);
                            if (0 < (int)uVar15) {
                              do {
                                if (uVar15 <= local_64) goto LAB_0655b018;
                                lVar16 = *(long *)(param_2 + (long)(int)local_64 * 8 + 0x20);
                                lVar13 = FUN_02f07f14(*(undefined8 *)puVar3,5);
                                if (lVar13 == 0) goto LAB_0655b01c;
                                if (*(int *)(lVar13 + 0x18) == 0) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x20) =
                                     *(undefined8 *)
                                      PlayFab_GroupsModels_AcceptGroupApplicationRequest_TypeInfo;
                                thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x20));
                                uVar12 = FUN_055ff450(&local_64,0);
                                if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x28) = uVar12;
                                thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x28),uVar12);
                                if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x30) =
                                     *(undefined8 *)
                                      UnityEngine_XR_ARFoundation_ARTrackedImagesChangedEventArgs_TypeInfo
                                ;
                                thunk_FUN_02f411dc();
                                if (lVar16 == 0) goto LAB_0655b01c;
                                if (*(uint *)(lVar13 + 0x18) < 4) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(lVar16 + 0x38);
                                thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x38));
                                if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)puVar4;
                                thunk_FUN_02f411dc();
                                uVar12 = FUN_0546583c(lVar13,0);
                                FUN_05475674(plVar10,uVar12,0);
                                lVar13 = FUN_02f07f14(*(undefined8 *)puVar3,7);
                                if (lVar13 == 0) goto LAB_0655b01c;
                                if (*(int *)(lVar13 + 0x18) == 0) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x20) =
                                     *(undefined8 *)
                                      PlayFab_DataModels_AbortFileUploadsRequest_TypeInfo;
                                thunk_FUN_02f411dc();
                                if (*(int *)(*(long *)
                                              UnityEngine_XR_OpenXR_Features_Meta_ARRaycastFeature_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_02f12b58();
                                }
                                uVar12 = FUN_0655b284(lVar16);
                                if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x28) = uVar12;
                                thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x28),uVar12);
                                if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)puVar5;
                                thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x30));
                                if (*(uint *)(lVar13 + 0x18) < 4) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(lVar16 + 0x30);
                                thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x38));
                                if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x40) =
                                     *(undefined8 *)UnityEngine_InputSystem_Accelerometer_TypeInfo;
                                thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x40));
                                uVar12 = FUN_055ff450(&local_64,0);
                                if (*(uint *)(lVar13 + 0x18) < 6) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x48) = uVar12;
                                thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x48),uVar12);
                                if (*(uint *)(lVar13 + 0x18) < 7) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x50) = *(undefined8 *)puVar7;
                                thunk_FUN_02f411dc();
                                uVar12 = FUN_0546583c(lVar13,0);
                                FUN_05475674(plVar10,uVar12,0);
                                lVar13 = FUN_02f07f14(*(undefined8 *)puVar3,5);
                                if (lVar13 == 0) goto LAB_0655b01c;
                                if (*(int *)(lVar13 + 0x18) == 0) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)puVar6;
                                thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x20));
                                if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(lVar16 + 0x38);
                                thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x28));
                                if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)puVar8;
                                thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x30));
                                uVar12 = FUN_055ff450(&local_64,0);
                                if (*(uint *)(lVar13 + 0x18) < 4) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x38) = uVar12;
                                thunk_FUN_02f411dc((undefined8 *)(lVar13 + 0x38),uVar12);
                                if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_0655b018;
                                *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)puVar4;
                                thunk_FUN_02f411dc();
                                uVar12 = FUN_0546583c(lVar13,0);
                                FUN_05475674(plVar10,uVar12,0);
                                FUN_05475654(plVar10,0);
                                local_64 = local_64 + 1;
                                uVar15 = *(uint *)(param_2 + 0x18);
                              } while ((int)local_64 < (int)uVar15);
                            }
                            puVar1 = (undefined8 *)
                                     Oculus_Platform_Models_AchievementDefinitionList_TypeInfo;
                            puVar6 = Oculus_Platform_Models_AchievementDefinition_TypeInfo;
                            puVar4 = System_Data_AcceptRejectRule_TypeInfo;
                            puVar2 = (undefined8 *)
                                     PixelCrushers_DialogueSystem_AbstractDialogueUI_TypeInfo;
                            puVar3 = 
                            Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs_TypeInfo;
                            FUN_05475674(plVar10,*(undefined8 *)
                                                  UnityEngine_UIElements_AbstractProgressBar_TypeInfo
                                         ,0);
                            puVar5 = PlayFab_GroupsModels_AcceptGroupInvitationRequest_TypeInfo;
                            FUN_05475674(plVar10,*(undefined8 *)
                                                  PlayFab_GroupsModels_AcceptGroupInvitationRequest_TypeInfo
                                         ,0);
                            FUN_05475654(plVar10,0);
                            FUN_05475674(plVar10,*(undefined8 *)puVar6,0);
                            if ((param_3 & 1) == 0) {
                              puVar1 = (undefined8 *)puVar3;
                              puVar2 = (undefined8 *)puVar4;
                            }
                            uVar11 = FUN_05465414(*puVar2,uVar11,*puVar1,0);
                            FUN_05475674(plVar10,uVar11,0);
                            FUN_05475674(plVar10,*(undefined8 *)puVar5,0);
                            FUN_05475674(plVar10,*(undefined8 *)
                                                  Oculus_Platform_Models_AbuseReportRecording_TypeInfo
                                         ,0);
                            FUN_05475674(plVar10,*(undefined8 *)PTR_DAT_06d12e28,0);
                            (**(code **)(*plVar10 + 0x168))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x170));
                            return;
                          }
                          goto LAB_0655b01c;
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
LAB_0655b018:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
  }
LAB_0655b01c:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


