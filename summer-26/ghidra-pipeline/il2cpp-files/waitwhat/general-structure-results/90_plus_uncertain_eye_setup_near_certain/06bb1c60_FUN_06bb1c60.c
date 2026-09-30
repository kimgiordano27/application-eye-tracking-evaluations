/*
FUNCTION_NAME: FUN_06bb1c60
ENTRY_POINT: 06bb1c60
PROGRAM: waitwhat-libil2cpp.so
SCORE: 110
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_11;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_06bb1c60(undefined4 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  if ((DAT_075603e5 & 1) == 0) {
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
                );
    FUN_03188a78(PTR_DAT_070c4778);
    FUN_03188a78(PTR_DAT_070c2ac0);
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorRemoved__
                );
    FUN_03188a78(PTR_DAT_0711f5e0);
    FUN_03188a78(PTR_DAT_070d1278);
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>__ctor__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>__ctor__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Interactors__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Registry__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_State__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_WhenInteractorAdded__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_WhenInteractorRemoved__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<RayInteractor,_RayInteractable>_add_WhenStateChanged__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<RayInteractor,_RayInteractable>_get_Registry__
                );
    FUN_03188a78(Method_Oculus_Interaction_Interactable<RayInteractor,_RayInteractable>_get_State__)
    ;
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<RayInteractor,_RayInteractable>_remove_WhenStateChanged__
                );
    FUN_03188a78(Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>__ctor__);
    FUN_03188a78(PTR_DAT_0713ef28);
    FUN_03188a78(Fusion_INetworkAssetSource<NetworkObject>_TypeInfo);
    FUN_03188a78(PTR_DAT_070f3f28);
    FUN_03188a78(Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__);
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorAdded__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_RemoveInteractorByIdentifier__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_SelectingInteractorAdded__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_SelectingInteractorRemoved__
                );
    FUN_03188a78(Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Start__);
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_get_Interactors__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_get_Registry__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_get_SelectingInteractors__
                );
    FUN_03188a78(PTR_DAT_07135a70);
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>__ctor__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>_Awake__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>_Start__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>_get_Registry__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactable<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_Registry__
                );
    FUN_03188a78(Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>__ctor__);
    FUN_03188a78(
                Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_CopyBackingFieldsToState__
                );
    FUN_03188a78(
                Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_CopyStateToBackingFields__
                );
    FUN_03188a78(Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_Despawned__);
    FUN_03188a78(Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_Initialize__);
    FUN_03188a78(Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_Spawned__);
    FUN_03188a78(
                Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_get_LeftHandSpawnPosition__
                );
    FUN_03188a78(Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_get_PrefabID__);
    FUN_03188a78(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_get_Current__
                );
    FUN_03188a78(
                Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_get_RightHandSpawnPosition__
                );
    FUN_03188a78(Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_get_SpawnEffect__
                );
    FUN_03188a78(Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_get_hand__);
    FUN_03188a78(PTR_DAT_070f3f10);
    FUN_03188a78(PTR_DAT_070c5a20);
    FUN_03188a78(Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_set_PrefabID__);
    FUN_03188a78(
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataGhost>__ctor__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataGhost>_Start__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataIcon>__ctor__
                );
    FUN_03188a78(PTR_DAT_070f5e28);
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataIcon>_Start__
                );
    FUN_03188a78(PTR_DAT_07107868);
    FUN_03188a78(System_Collections_Generic_IList<CustomAttributeNamedArgument>_TypeInfo);
    FUN_03188a78(
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataMesh>__ctor__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataMesh>_Start__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnDisable__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                );
    FUN_03188a78(PTR_DAT_070f3f18);
    FUN_03188a78(PTR_DAT_070d1290);
    FUN_03188a78(
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_Start__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_Awake__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_Start__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_get_Data__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_get_Identifier__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_get_Interactable__
                );
    FUN_03188a78(PTR_DAT_07134778);
    FUN_03188a78(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IDisposable>_SetResult__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_get_SelectedInteractable__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_set_Selector__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_Awake__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_CanSelect__
                );
    FUN_03188a78(PTR_DAT_070f7e78);
    FUN_03188a78(PTR_DAT_0711c9a8);
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_DoHoverUpdate__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_Start__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_get_Data__
                );
    FUN_03188a78(PTR_DAT_0712d920);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<int,_PointableCanvasModule_PointerImpl>_get_Keys__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_get_HasSelectedInteractable__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_get_Identifier__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_get_Interactable__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_get_SelectedInteractable__
                );
    DAT_075603e5 = 1;
  }
  *param_3 = 0;
  switch(param_1) {
  case 0:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)PTR_DAT_0712d920,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_DoHoverUpdate__
                           ,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06bb28fc;
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<int,_PointableCanvasModule_PointerImpl>_get_Keys__
                           ,5,0);
      if ((uVar2 & 1) != 0) goto FUN_06bb2a9c;
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                    Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>__ctor__
                           ,5,0);
      puVar1 = Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Start__;
joined_r0x06bb22fc:
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)puVar1,5,0);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        goto LAB_06bb2aec;
      }
LAB_06bb2ac4:
      uVar4 = 3;
      goto LAB_06bb2998;
    }
    break;
  case 1:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)PTR_DAT_070c4778,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)PTR_DAT_070c5a20,5,0);
      puVar1 = PTR_DAT_070f5e28;
      goto joined_r0x06bb23e0;
    }
    break;
  case 2:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<int,_PointableCanvasModule_PointerImpl>_get_Keys__
                         ,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)PTR_DAT_07107868,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06bb28fc;
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)PTR_DAT_0711f5e0,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)PTR_DAT_070f3f10,5,0);
        puVar1 = PTR_DAT_070f3f18;
        goto joined_r0x06bb22fc;
      }
      goto FUN_06bb2a9c;
    }
    break;
  case 3:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
                         ,5,0);
    puVar1 = 
    Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_get_Current__;
joined_r0x06bb23e0:
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)puVar1,5,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
FUN_06bb2a9c:
      uVar4 = 2;
      goto LAB_06bb2998;
    }
    goto LAB_06bb28fc;
  case 4:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)PTR_DAT_070f7e78,5,0);
    puVar3 = (undefined8 *)PTR_DAT_070c2ac0;
    goto joined_r0x06bb2270;
  case 5:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                  Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_Awake__
                         ,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                    Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_Spawned__
                           ,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06bb28fc;
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                    Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_Initialize__
                           ,5,0);
      if ((uVar2 & 1) != 0) goto FUN_06bb2a9c;
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                    Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_CopyStateToBackingFields__
                           ,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                      Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_set_PrefabID__
                             ,5,0);
        if ((uVar2 & 1) == 0) {
          uVar4 = 5;
          uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                        Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_CopyBackingFieldsToState__
                               ,5,0);
          if ((uVar2 & 1) != 0) goto LAB_06bb2998;
          uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                        Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_Awake__
                               ,5,0);
          if ((uVar2 & 1) != 0) {
LAB_06bb2b38:
            uVar4 = 6;
            goto LAB_06bb2998;
          }
          uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                        Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_Despawned__
                               ,5,0);
          if ((uVar2 & 1) != 0) {
LAB_06bb2b60:
            uVar4 = 7;
            goto LAB_06bb2998;
          }
          uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                        Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_RemoveInteractorByIdentifier__
                               ,5,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                          Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_get_SelectedInteractable__
                                 ,5,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                            Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_get_Identifier__
                                   ,5,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                              Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataMesh>__ctor__
                                     ,5,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                                Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_Start__
                                       ,5,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataGhost>__ctor__
                                         ,5,0);
                    if ((uVar2 & 1) == 0) {
                      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                                                                                        
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataIcon>__ctor__
                                           ,5,0);
                      if ((uVar2 & 1) == 0) {
                        uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                                                                                            
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorRemoved__
                                             ,5,0);
                        if ((uVar2 & 1) == 0) {
                          uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                                                                                                
                                                  Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>_Awake__
                                               ,5,0);
                          if ((uVar2 & 1) == 0) {
                            uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__
                                                 ,5,0);
                            if ((uVar2 & 1) == 0) {
                              uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                                                                                                        
                                                  Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_get_PrefabID__
                                                  ,5,0);
                              if ((uVar2 & 1) == 0) {
                                uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                                                                                                            
                                                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_get_Interactors__
                                                  ,5,0);
                                if ((uVar2 & 1) == 0) {
                                  uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                                                                                                                
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
                                                  ,5,0);
                                  if ((uVar2 & 1) == 0) {
                                    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<RayInteractor,_RayInteractable>_get_Registry__
                                                  ,5,0);
                                    if ((uVar2 & 1) == 0) {
                                      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                                                                                                                        
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataGhost>_Start__
                                                  ,5,0);
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
            goto LAB_06bb2998;
          }
LAB_06bb2b88:
          uVar4 = 8;
          goto LAB_06bb2998;
        }
        goto LAB_06bb2aec;
      }
      goto LAB_06bb2ac4;
    }
    break;
  case 6:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                         ,5,0);
    puVar3 = (undefined8 *)
             Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>__ctor__
    ;
    goto joined_r0x06bb2270;
  case 7:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)PTR_DAT_07135a70,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_get_SelectedInteractable__
                           ,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06bb28fc;
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)PTR_DAT_07134778,5,0);
      puVar3 = (undefined8 *)
               Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorAdded__
      ;
      if ((uVar2 & 1) != 0) goto FUN_06bb2a9c;
LAB_06bb2810:
      uVar2 = FUN_057bd9b8(param_2,*puVar3,5,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      goto LAB_06bb2ac4;
    }
    break;
  case 8:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                  Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_get_Interactable__
                         ,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                    Method_Oculus_Interaction_Interactable<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>__ctor__
                           ,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                      Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_get_Data__
                             ,5,0);
        puVar3 = (undefined8 *)
                 Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>_Start__
        ;
joined_r0x06bb23b4:
        if ((uVar2 & 1) == 0) goto LAB_06bb2810;
        goto FUN_06bb2a9c;
      }
      goto LAB_06bb28fc;
    }
    break;
  case 9:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                  Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_DoHoverUpdate__
                         ,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<int,_PointableCanvasModule_PointerImpl>_get_Keys__
                           ,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06bb28fc;
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                    Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>__ctor__
                           ,5,0);
      if ((uVar2 & 1) != 0) goto FUN_06bb2a9c;
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                    Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_get_LeftHandSpawnPosition__
                           ,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                      Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>__ctor__
                             ,5,0);
        puVar1 = Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_get_SpawnEffect__
        ;
        goto joined_r0x06bb2a2c;
      }
      goto LAB_06bb2ac4;
    }
    break;
  case 10:
  case 0x17:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)PTR_DAT_070d1290,5,0);
    puVar3 = (undefined8 *)PTR_DAT_070d1278;
    goto joined_r0x06bb2270;
  case 0xb:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_SelectingInteractorAdded__
                         ,5,0);
    puVar3 = (undefined8 *)
             Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_get_hand__;
    goto joined_r0x06bb2270;
  case 0xc:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)PTR_DAT_070d1290,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)PTR_DAT_070d1278,5,0);
      puVar1 = Fusion_INetworkAssetSource<NetworkObject>_TypeInfo;
      goto joined_r0x06bb23e0;
    }
    break;
  case 0xd:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                  Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>_get_Registry__
                         ,5,0);
    puVar3 = (undefined8 *)
             Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_State__;
    goto joined_r0x06bb2270;
  case 0xe:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                  Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_get_Identifier__
                         ,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                    Method_Oculus_Interaction_Interactable<RayInteractor,_RayInteractable>_add_WhenStateChanged__
                           ,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06bb2ac4;
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)PTR_DAT_0711c9a8,5,0);
      puVar1 = PTR_DAT_0713ef28;
      goto joined_r0x06bb23e0;
    }
    break;
  case 0xf:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__
                         ,5,0);
    puVar3 = (undefined8 *)
             Method_Oculus_Interaction_Interactable<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>__ctor__
    ;
    goto joined_r0x06bb2270;
  case 0x10:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
                         ,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                    Method_Oculus_Interaction_Interactable<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_Registry__
                           ,5,0);
      puVar1 = 
      Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_CanSelect__
      ;
      goto joined_r0x06bb23e0;
    }
    break;
  case 0x11:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Interactors__
                         ,5,0);
    puVar3 = (undefined8 *)
             Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_Start__
    ;
    goto joined_r0x06bb2270;
  case 0x12:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                  Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_get_Interactable__
                         ,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataIcon>_Start__
                           ,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06bb28fc;
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                    Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
                           ,5,0);
      if ((uVar2 & 1) != 0) goto FUN_06bb2a9c;
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                    Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_get_Registry__
                           ,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                      Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_get_HasSelectedInteractable__
                             ,5,0);
        if ((uVar2 & 1) == 0) {
          uVar4 = 5;
          uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                        Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_WhenInteractorAdded__
                               ,5,0);
          if ((uVar2 & 1) != 0) goto LAB_06bb2998;
          uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                        Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_get_SelectingInteractors__
                               ,5,0);
          if ((uVar2 & 1) != 0) goto LAB_06bb2b38;
          uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                        Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_Start__
                               ,5,0);
          if ((uVar2 & 1) != 0) goto LAB_06bb2b60;
          uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                        Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_WhenInteractorRemoved__
                               ,5,0);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
          goto LAB_06bb2b88;
        }
        goto LAB_06bb2aec;
      }
      goto LAB_06bb2ac4;
    }
    break;
  case 0x13:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                  Method_Oculus_Interaction_Interactable<RayInteractor,_RayInteractable>_remove_WhenStateChanged__
                         ,5,0);
    puVar3 = (undefined8 *)
             Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Registry__
    ;
    if ((uVar2 & 1) == 0) {
FUN_06bb294c:
      uVar2 = FUN_057bd9b8(param_2,*puVar3,5,0);
      uVar4 = 0;
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      goto LAB_06bb2998;
    }
    goto LAB_06bb28fc;
  case 0x14:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IDisposable>_SetResult__
                         ,5,0);
    puVar3 = (undefined8 *)
             Method_Oculus_Interaction_Interactable<RayInteractor,_RayInteractable>_get_State__;
joined_r0x06bb2270:
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_057bd9b8(param_2,*puVar3,5,0);
      if ((uVar2 & 1) == 0) {
UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback___ctor:
        return 0;
      }
LAB_06bb28fc:
      uVar4 = 1;
      goto LAB_06bb2998;
    }
    break;
  case 0x15:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)PTR_DAT_070f3f28,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataMesh>_Start__
                           ,5,0);
      puVar3 = (undefined8 *)System_Collections_Generic_IList<CustomAttributeNamedArgument>_TypeInfo
      ;
      if ((uVar2 & 1) != 0) goto FUN_06bb2a9c;
      goto FUN_06bb294c;
    }
    goto LAB_06bb28fc;
  case 0x16:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)PTR_DAT_070f3f10,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)PTR_DAT_070f3f18,5,0);
      if ((uVar2 & 1) != 0) goto FUN_06bb2a9c;
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)PTR_DAT_07107868,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)PTR_DAT_0711f5e0,5,0);
        puVar1 = 
        Method_System_Collections_Generic_Dictionary<int,_PointableCanvasModule_PointerImpl>_get_Keys__
        ;
joined_r0x06bb2a2c:
        if ((uVar2 & 1) == 0) {
          uVar4 = 5;
          uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)puVar1,5,0);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
          goto LAB_06bb2998;
        }
LAB_06bb2aec:
        uVar4 = 4;
        goto LAB_06bb2998;
      }
      goto LAB_06bb2ac4;
    }
    goto LAB_06bb28fc;
  case 0x18:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                  Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_get_Interactable__
                         ,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_get_Data__
                           ,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                      Method_Oisoi_Interaction_Interactable<NetworkPlayer,_InputStruct>_get_RightHandSpawnPosition__
                             ,5,0);
        puVar3 = (undefined8 *)
                 Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_SelectingInteractorRemoved__
        ;
        goto joined_r0x06bb23b4;
      }
      goto LAB_06bb28fc;
    }
    break;
  case 0x19:
    uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                  Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_get_Data__
                         ,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_057bd9b8(param_2,*(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<DistanceGrabInteractor,_DistanceGrabInteractable>_set_Selector__
                           ,5,0);
      puVar1 = 
      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnDisable__;
      goto joined_r0x06bb23e0;
    }
    break;
  default:
    goto UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback___ctor;
  }
  uVar4 = 0;
LAB_06bb2998:
  *param_3 = uVar4;
  return 1;
}


