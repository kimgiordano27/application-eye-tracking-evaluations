/*
FUNCTION_NAME: FUN_064482bc
ENTRY_POINT: 064482bc
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_064482bc(undefined4 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  if ((bRam0000000006e9c52d & 1) == 0) {
    FUN_02e3ca1c(Fusion_SimulationBehaviourUpdater_BehaviourList_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a313b8);
    FUN_02e3ca1c(PTR_DAT_06a2f6e8);
    FUN_02e3ca1c(Fusion_SimulationInput_Buffer_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlTypeMapMemberElement_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a3e7e8);
    FUN_02e3ca1c(Fusion_SimulationInput_Pool_TypeInfo);
    FUN_02e3ca1c(Fusion_SimulationMessage_BuiltInFlags_TypeInfo);
    FUN_02e3ca1c(Game_Views_Voxels_SliceMap_SliceMapFormatter_TypeInfo);
    FUN_02e3ca1c(Game_Views_Voxels_SliceVoxel_SliceVoxelFormatter_TypeInfo);
    FUN_02e3ca1c(Game_Controllers_Voxels_SliceVoxelsController_<>c__DisplayClass6_0_TypeInfo);
    FUN_02e3ca1c(Game_Controllers_Voxels_SliceVoxelsController_<>c__DisplayClass7_0_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UI_Slider_SliderEvent_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UIElements_Slider_UxmlFactory_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UIElements_SliderInt_UxmlFactory_TypeInfo);
    FUN_02e3ca1c(Game_Controllers_Shop_SmallShopController_<>c_TypeInfo);
    FUN_02e3ca1c(Game_Views_SmallShop_SmallShopManager_<>c_TypeInfo);
    FUN_02e3ca1c(Mono_Xml_SmallXmlParser_AttrListImpl_TypeInfo);
    FUN_02e3ca1c(Mono_Xml_SmallXmlParser_IAttrList_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a9a608);
    FUN_02e3ca1c(PTR_DAT_06aaa1d0);
    FUN_02e3ca1c(PTR_DAT_06a6f008);
    FUN_02e3ca1c(Mono_Xml_SmallXmlParser_IContentHandler_TypeInfo);
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416_BurstDirectCall_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416_PostfixBurstDelegate_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422_BurstDirectCall_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422_PostfixBurstDelegate_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423_BurstDirectCall_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423_PostfixBurstDelegate_TypeInfo
                );
    FUN_02e3ca1c(Fusion_LagCompensation_SnapshotHistoryDraw_<GetEnumerator>d__3_TypeInfo);
    FUN_02e3ca1c(System_Runtime_Remoting_SoapServices_TypeInfo_TypeInfo);
    FUN_02e3ca1c(System_Net_Sockets_Socket_<>c_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a94590);
    FUN_02e3ca1c(System_Net_Sockets_Socket_<>c__DisplayClass240_0_TypeInfo);
    FUN_02e3ca1c(System_Net_Sockets_Socket_<>c__DisplayClass298_0_TypeInfo);
    FUN_02e3ca1c(System_Net_Sockets_Socket_<>c__DisplayClass355_0_TypeInfo);
    FUN_02e3ca1c(System_Net_Sockets_Socket_AwaitableSocketAsyncEventArgs_TypeInfo);
    FUN_02e3ca1c(System_Net_Sockets_Socket_CachedEventArgs_TypeInfo);
    FUN_02e3ca1c(System_Net_Sockets_Socket_Int32TaskSocketAsyncEventArgs_TypeInfo);
    FUN_02e3ca1c(System_Net_Sockets_SocketAsyncResult_<>c_TypeInfo);
    FUN_02e3ca1c(ExitGames_Client_Photon_SocketTcpAsync_ReceiveContext_TypeInfo);
    FUN_02e3ca1c(
                Game_Views_UI_Screens_ArenaLeaderboard_SoloArenaLeaderboardScreen_<>c__DisplayClass13_0_TypeInfo
                );
    FUN_02e3ca1c(UnityEngine_UIElements_SortColumnDescription_UxmlObjectFactory_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UIElements_SortColumnDescriptions_UxmlObjectFactory_TypeInfo);
    FUN_02e3ca1c(System_Collections_SortedList_KeyList_TypeInfo);
    FUN_02e3ca1c(System_Collections_SortedList_SortedListEnumerator_TypeInfo);
    FUN_02e3ca1c(System_DefaultBinder_BinderState_TypeInfo);
    FUN_02e3ca1c(System_Collections_SortedList_SyncSortedList_TypeInfo);
    FUN_02e3ca1c(System_Collections_SortedList_ValueList_TypeInfo);
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_SortingHelpers_ClosestPointOnColliderEvaluator_TypeInfo
                );
    FUN_02e3ca1c(PTR_DAT_06a6efd8);
    FUN_02e3ca1c(PTR_DAT_06a32660);
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_SortingHelpers_InteractableBasedEvaluator_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_SortingHelpers_SquareDistanceAttachPointEvaluator_TypeInfo
                );
    FUN_02e3ca1c(Photon_Voice_SpacingProfile_<>c_TypeInfo);
    FUN_02e3ca1c(Game_Views_Interactables_Spawner_<>c__DisplayClass22_0_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a77070);
    FUN_02e3ca1c(Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_TypeInfo);
    FUN_02e3ca1c(Game_Views_Interactables_Spawner_<>c__DisplayClass24_0_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a85da0);
    FUN_02e3ca1c(PTR_DAT_06aa99d0);
    FUN_02e3ca1c(Game_Controllers_Interactables_SpawnerController_<>c_TypeInfo);
    FUN_02e3ca1c(Game_Controllers_Interactables_SpawnerController_<>c__DisplayClass2_0_TypeInfo);
    FUN_02e3ca1c(Game_Controllers_Interactables_SpawnerController_<>c__DisplayClass3_0_TypeInfo);
    FUN_02e3ca1c(Game_Controllers_Interactables_SpawnerController_<>c__DisplayClass5_0_TypeInfo);
    FUN_02e3ca1c(Game_Controllers_Interactables_SpawnerController_<>c__DisplayClass8_0_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a6efe0);
    FUN_02e3ca1c(PTR_DAT_06a3e800);
    FUN_02e3ca1c(Game_Controllers_Voxels_SpreadVoxelsController_<>c_TypeInfo);
    FUN_02e3ca1c(UnityEngine_TextCore_Text_SpriteAsset_<>c_TypeInfo);
    FUN_02e3ca1c(System_Data_Common_SqlUdtStorage_<>c__DisplayClass6_0_TypeInfo);
    FUN_02e3ca1c(System_Net_Security_SslStream_<>c__DisplayClass21_0_TypeInfo);
    FUN_02e3ca1c(System_Collections_Stack_StackEnumerator_TypeInfo);
    FUN_02e3ca1c(Game_Controllers_Stats_StatsController_<>c_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a93268);
    FUN_02e3ca1c(Unity_Properties_IDictionaryElementProperty_TypeInfo);
    FUN_02e3ca1c(Game_Models_StatsModel_<>c_TypeInfo);
    FUN_02e3ca1c(Game_Models_StatsModel_<>c__DisplayClass24_0_TypeInfo);
    FUN_02e3ca1c(Game_Models_StatsModel_<>c__DisplayClass26_0_TypeInfo);
    FUN_02e3ca1c(Game_Models_StatsModel_<>c__DisplayClass29_0_TypeInfo);
    FUN_02e3ca1c(Game_Models_StatsModel_<>c__DisplayClass30_0_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a698d0);
    FUN_02e3ca1c(Game_Models_StatsModel_<>c__DisplayClass31_0_TypeInfo);
    FUN_02e3ca1c(Game_Models_StatsModel_<>c__DisplayClass38_0_TypeInfo);
    FUN_02e3ca1c(Game_Models_StatsModel_<>c__DisplayClass39_0_TypeInfo);
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ApproximateCubicBezierLength_00000446_BurstDirectCall_TypeInfo
                );
    FUN_02e3ca1c(PTR_DAT_06a77080);
    FUN_02e3ca1c(Game_Models_StatsModel_<>c__DisplayClass40_0_TypeInfo);
    FUN_02e3ca1c(Game_Models_StatsModel_<>c__DisplayClass41_0_TypeInfo);
    FUN_02e3ca1c(Game_Models_StatsModel_<>c__DisplayClass42_0_TypeInfo);
    FUN_02e3ca1c(Game_Models_StatsModel_<>c__DisplayClass43_0_TypeInfo);
    bRam0000000006e9c52d = 1;
  }
  *param_3 = 0;
  switch(param_1) {
  case 0:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ApproximateCubicBezierLength_00000446_BurstDirectCall_TypeInfo
                         ,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                    Game_Models_StatsModel_<>c__DisplayClass31_0_TypeInfo,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06448f58;
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)PTR_DAT_06a77080,5,0);
      if ((uVar2 & 1) != 0) goto FUN_064490f8;
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                    System_Net_Sockets_Socket_Int32TaskSocketAsyncEventArgs_TypeInfo
                           ,5,0);
      puVar1 = 
      UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423_PostfixBurstDelegate_TypeInfo
      ;
joined_r0x06448958:
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)puVar1,5,0);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        goto LAB_06449148;
      }
LAB_06449120:
      uVar4 = 3;
      goto LAB_06448ff4;
    }
    break;
  case 1:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)PTR_DAT_06a313b8,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)PTR_DAT_06a32660,5,0);
      puVar1 = PTR_DAT_06a77070;
      goto joined_r0x06448a3c;
    }
    break;
  case 2:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)PTR_DAT_06a77080,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)PTR_DAT_06a85da0,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06448f58;
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                    System_Xml_Serialization_XmlTypeMapMemberElement_TypeInfo,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)PTR_DAT_06a6efd8,5,0);
        puVar1 = PTR_DAT_06a6efe0;
        goto joined_r0x06448958;
      }
      goto FUN_064490f8;
    }
    break;
  case 3:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                  Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_TypeInfo
                         ,5,0);
    puVar1 = System_DefaultBinder_BinderState_TypeInfo;
joined_r0x06448a3c:
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)puVar1,5,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
FUN_064490f8:
      uVar4 = 2;
      goto LAB_06448ff4;
    }
    goto LAB_06448f58;
  case 4:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                  Game_Models_StatsModel_<>c__DisplayClass30_0_TypeInfo,5,0);
    puVar3 = (undefined8 *)PTR_DAT_06a2f6e8;
    goto joined_r0x064488cc;
  case 5:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)UnityEngine_TextCore_Text_SpriteAsset_<>c_TypeInfo,5
                         ,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                    UnityEngine_UIElements_SortColumnDescriptions_UxmlObjectFactory_TypeInfo
                           ,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06448f58;
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                    UnityEngine_UIElements_SortColumnDescription_UxmlObjectFactory_TypeInfo
                           ,5,0);
      if ((uVar2 & 1) != 0) goto FUN_064490f8;
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                    ExitGames_Client_Photon_SocketTcpAsync_ReceiveContext_TypeInfo,5
                           ,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_SortingHelpers_InteractableBasedEvaluator_TypeInfo
                             ,5,0);
        if ((uVar2 & 1) == 0) {
          uVar4 = 5;
          uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                        System_Net_Sockets_SocketAsyncResult_<>c_TypeInfo,5,0);
          if ((uVar2 & 1) != 0) goto LAB_06448ff4;
          uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                        Game_Models_StatsModel_<>c__DisplayClass26_0_TypeInfo,5,0);
          if ((uVar2 & 1) != 0) {
LAB_06449194:
            uVar4 = 6;
            goto LAB_06448ff4;
          }
          uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                        Game_Views_UI_Screens_ArenaLeaderboard_SoloArenaLeaderboardScreen_<>c__DisplayClass13_0_TypeInfo
                               ,5,0);
          if ((uVar2 & 1) != 0) {
LAB_064491bc:
            uVar4 = 7;
            goto LAB_06448ff4;
          }
          uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                        UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422_BurstDirectCall_TypeInfo
                               ,5,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                          Game_Models_StatsModel_<>c__DisplayClass43_0_TypeInfo,5,0)
            ;
            if ((uVar2 & 1) == 0) {
              uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                            Game_Models_StatsModel_<>c__DisplayClass41_0_TypeInfo,5,
                                   0);
              if ((uVar2 & 1) == 0) {
                uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                              Game_Controllers_Interactables_SpawnerController_<>c_TypeInfo
                                     ,5,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                                System_Data_Common_SqlUdtStorage_<>c__DisplayClass6_0_TypeInfo
                                       ,5,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                                  UnityEngine_XR_Interaction_Toolkit_SortingHelpers_SquareDistanceAttachPointEvaluator_TypeInfo
                                         ,5,0);
                    if ((uVar2 & 1) == 0) {
                      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                                                                                        
                                                  Game_Views_Interactables_Spawner_<>c__DisplayClass22_0_TypeInfo
                                           ,5,0);
                      if ((uVar2 & 1) == 0) {
                        uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                                      Fusion_SimulationInput_Buffer_TypeInfo,5,0);
                        if ((uVar2 & 1) == 0) {
                          uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                                                                                                
                                                  System_Net_Sockets_Socket_<>c__DisplayClass298_0_TypeInfo
                                               ,5,0);
                          if ((uVar2 & 1) == 0) {
                            uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                                                                                                    
                                                  Game_Controllers_Interactables_SpawnerController_<>c__DisplayClass3_0_TypeInfo
                                                 ,5,0);
                            if ((uVar2 & 1) == 0) {
                              uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                                                                                                        
                                                  System_Collections_SortedList_SortedListEnumerator_TypeInfo
                                                  ,5,0);
                              if ((uVar2 & 1) == 0) {
                                uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                                                                                                            
                                                  Fusion_LagCompensation_SnapshotHistoryDraw_<GetEnumerator>d__3_TypeInfo
                                                  ,5,0);
                                if ((uVar2 & 1) == 0) {
                                  uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                                                                                                                
                                                  Fusion_SimulationBehaviourUpdater_BehaviourList_TypeInfo
                                                  ,5,0);
                                  if ((uVar2 & 1) == 0) {
                                    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                                                                                                                    
                                                  Game_Controllers_Shop_SmallShopController_<>c_TypeInfo
                                                  ,5,0);
                                    if ((uVar2 & 1) == 0) {
                                      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                                                                                                                        
                                                  Photon_Voice_SpacingProfile_<>c_TypeInfo,5,0);
                                      if ((uVar2 & 1) == 0) {
                                        return 0;
                                      }
                                      uVar4 = 0x16;
                                    }
                                    else {
                                      uVar4 = 0x15;
                                    }
                                  }
                                  else {
                                    uVar4 = 0x14;
                                  }
                                }
                                else {
                                  uVar4 = 0x13;
                                }
                              }
                              else {
                                uVar4 = 0x12;
                              }
                            }
                            else {
                              uVar4 = 0x11;
                            }
                          }
                          else {
                            uVar4 = 0x10;
                          }
                        }
                        else {
                          uVar4 = 0xf;
                        }
                      }
                      else {
                        uVar4 = 0xe;
                      }
                    }
                    else {
                      uVar4 = 0xd;
                    }
                  }
                  else {
                    uVar4 = 0xc;
                  }
                }
                else {
                  uVar4 = 0xb;
                }
              }
              else {
                uVar4 = 10;
              }
            }
            else {
              uVar4 = 9;
            }
            goto LAB_06448ff4;
          }
LAB_064491e4:
          uVar4 = 8;
          goto LAB_06448ff4;
        }
        goto LAB_06449148;
      }
      goto LAB_06449120;
    }
    break;
  case 6:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                  Game_Controllers_Interactables_SpawnerController_<>c__DisplayClass8_0_TypeInfo
                         ,5,0);
    puVar3 = (undefined8 *)System_Net_Sockets_Socket_<>c__DisplayClass240_0_TypeInfo;
    goto joined_r0x064488cc;
  case 7:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)PTR_DAT_06a94590,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)Game_Models_StatsModel_<>c_TypeInfo,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06448f58;
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)PTR_DAT_06a93268,5,0);
      puVar3 = (undefined8 *)
               UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416_BurstDirectCall_TypeInfo
      ;
      if ((uVar2 & 1) != 0) goto FUN_064490f8;
LAB_06448e6c:
      uVar2 = FUN_0548b7d4(param_2,*puVar3,5,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      goto LAB_06449120;
    }
    break;
  case 8:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)Game_Controllers_Stats_StatsController_<>c_TypeInfo,
                         5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                    Game_Views_Voxels_SliceMap_SliceMapFormatter_TypeInfo,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                      Game_Models_StatsModel_<>c__DisplayClass39_0_TypeInfo,5,0);
        puVar3 = (undefined8 *)System_Net_Sockets_Socket_<>c__DisplayClass355_0_TypeInfo;
joined_r0x06448a10:
        if ((uVar2 & 1) == 0) goto LAB_06448e6c;
        goto FUN_064490f8;
      }
      goto LAB_06448f58;
    }
    break;
  case 9:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                  Game_Models_StatsModel_<>c__DisplayClass31_0_TypeInfo,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)PTR_DAT_06a77080,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06448f58;
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                    System_Net_Sockets_Socket_Int32TaskSocketAsyncEventArgs_TypeInfo
                           ,5,0);
      if ((uVar2 & 1) != 0) goto FUN_064490f8;
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)System_Collections_SortedList_KeyList_TypeInfo,5,0
                          );
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)Mono_Xml_SmallXmlParser_IAttrList_TypeInfo,5,0);
        puVar1 = System_Collections_SortedList_ValueList_TypeInfo;
        goto joined_r0x06449088;
      }
      goto LAB_06449120;
    }
    break;
  case 10:
  case 0x17:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)PTR_DAT_06a3e800,5,0);
    puVar3 = (undefined8 *)PTR_DAT_06a3e7e8;
    goto joined_r0x064488cc;
  case 0xb:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422_PostfixBurstDelegate_TypeInfo
                         ,5,0);
    puVar3 = (undefined8 *)
             UnityEngine_XR_Interaction_Toolkit_SortingHelpers_ClosestPointOnColliderEvaluator_TypeInfo
    ;
    goto joined_r0x064488cc;
  case 0xc:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)PTR_DAT_06a3e800,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)PTR_DAT_06a3e7e8,5,0);
      puVar1 = PTR_DAT_06aaa1d0;
      goto joined_r0x06448a3c;
    }
    break;
  case 0xd:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                  System_Net_Sockets_Socket_AwaitableSocketAsyncEventArgs_TypeInfo,5
                         ,0);
    puVar3 = (undefined8 *)
             Game_Controllers_Voxels_SliceVoxelsController_<>c__DisplayClass7_0_TypeInfo;
    goto joined_r0x064488cc;
  case 0xe:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)System_Collections_Stack_StackEnumerator_TypeInfo,5,
                         0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                    UnityEngine_UIElements_SliderInt_UxmlFactory_TypeInfo,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06449120;
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)PTR_DAT_06a698d0,5,0);
      puVar1 = PTR_DAT_06a9a608;
      goto joined_r0x06448a3c;
    }
    break;
  case 0xf:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)Mono_Xml_SmallXmlParser_IContentHandler_TypeInfo,5,0
                        );
    puVar3 = (undefined8 *)Fusion_SimulationMessage_BuiltInFlags_TypeInfo;
    goto joined_r0x064488cc;
  case 0x10:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)Fusion_SimulationInput_Pool_TypeInfo,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)System_Net_Sockets_Socket_CachedEventArgs_TypeInfo
                           ,5,0);
      puVar1 = Game_Models_StatsModel_<>c__DisplayClass29_0_TypeInfo;
      goto joined_r0x06448a3c;
    }
    break;
  case 0x11:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                  Game_Views_Voxels_SliceVoxel_SliceVoxelFormatter_TypeInfo,5,0);
    puVar3 = (undefined8 *)Game_Models_StatsModel_<>c__DisplayClass38_0_TypeInfo;
    goto joined_r0x064488cc;
  case 0x12:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                  Game_Models_StatsModel_<>c__DisplayClass42_0_TypeInfo,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                    Game_Views_Interactables_Spawner_<>c__DisplayClass24_0_TypeInfo,
                           5,0);
      if ((uVar2 & 1) != 0) goto LAB_06448f58;
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416_PostfixBurstDelegate_TypeInfo
                           ,5,0);
      if ((uVar2 & 1) != 0) goto FUN_064490f8;
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                    System_Runtime_Remoting_SoapServices_TypeInfo_TypeInfo,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                      Game_Models_StatsModel_<>c__DisplayClass40_0_TypeInfo,5,0);
        if ((uVar2 & 1) == 0) {
          uVar4 = 5;
          uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)UnityEngine_UI_Slider_SliderEvent_TypeInfo,5,0
                              );
          if ((uVar2 & 1) != 0) goto LAB_06448ff4;
          uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)System_Net_Sockets_Socket_<>c_TypeInfo,5,0);
          if ((uVar2 & 1) != 0) goto LAB_06449194;
          uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                        Game_Controllers_Voxels_SpreadVoxelsController_<>c_TypeInfo,
                               5,0);
          if ((uVar2 & 1) != 0) goto LAB_064491bc;
          uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                        UnityEngine_UIElements_Slider_UxmlFactory_TypeInfo,5,0);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
          goto LAB_064491e4;
        }
        goto LAB_06449148;
      }
      goto LAB_06449120;
    }
    break;
  case 0x13:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)Mono_Xml_SmallXmlParser_AttrListImpl_TypeInfo,5,0);
    puVar3 = (undefined8 *)
             Game_Controllers_Voxels_SliceVoxelsController_<>c__DisplayClass6_0_TypeInfo;
    if ((uVar2 & 1) == 0) {
LAB_06448fa8:
      uVar2 = FUN_0548b7d4(param_2,*puVar3,5,0);
      uVar4 = 0;
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      goto LAB_06448ff4;
    }
    goto LAB_06448f58;
  case 0x14:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)Unity_Properties_IDictionaryElementProperty_TypeInfo
                         ,5,0);
    puVar3 = (undefined8 *)Game_Views_SmallShop_SmallShopManager_<>c_TypeInfo;
joined_r0x064488cc:
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0548b7d4(param_2,*puVar3,5,0);
      if ((uVar2 & 1) == 0) {
switchD_06448750_default:
        return 0;
      }
LAB_06448f58:
      uVar4 = 1;
      goto LAB_06448ff4;
    }
    break;
  case 0x15:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)PTR_DAT_06a6f008,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                    Game_Controllers_Interactables_SpawnerController_<>c__DisplayClass2_0_TypeInfo
                           ,5,0);
      puVar3 = (undefined8 *)PTR_DAT_06aa99d0;
      if ((uVar2 & 1) != 0) goto FUN_064490f8;
      goto LAB_06448fa8;
    }
    goto LAB_06448f58;
  case 0x16:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)PTR_DAT_06a6efd8,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)PTR_DAT_06a6efe0,5,0);
      if ((uVar2 & 1) != 0) goto FUN_064490f8;
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)PTR_DAT_06a85da0,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                      System_Xml_Serialization_XmlTypeMapMemberElement_TypeInfo,5,0)
        ;
        puVar1 = PTR_DAT_06a77080;
joined_r0x06449088:
        if ((uVar2 & 1) == 0) {
          uVar4 = 5;
          uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)puVar1,5,0);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
          goto LAB_06448ff4;
        }
LAB_06449148:
        uVar4 = 4;
        goto LAB_06448ff4;
      }
      goto LAB_06449120;
    }
    goto LAB_06448f58;
  case 0x18:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)Game_Controllers_Stats_StatsController_<>c_TypeInfo,
                         5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                    System_Net_Security_SslStream_<>c__DisplayClass21_0_TypeInfo,5,0
                          );
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                      System_Collections_SortedList_SyncSortedList_TypeInfo,5,0);
        puVar3 = (undefined8 *)
                 UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423_BurstDirectCall_TypeInfo
        ;
        goto joined_r0x06448a10;
      }
      goto LAB_06448f58;
    }
    break;
  case 0x19:
    uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                  System_Net_Security_SslStream_<>c__DisplayClass21_0_TypeInfo,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0548b7d4(param_2,*(undefined8 *)
                                    Game_Models_StatsModel_<>c__DisplayClass24_0_TypeInfo,5,0);
      puVar1 = Game_Controllers_Interactables_SpawnerController_<>c__DisplayClass5_0_TypeInfo;
      goto joined_r0x06448a3c;
    }
    break;
  default:
    goto switchD_06448750_default;
  }
  uVar4 = 0;
LAB_06448ff4:
  *param_3 = uVar4;
  return 1;
}


