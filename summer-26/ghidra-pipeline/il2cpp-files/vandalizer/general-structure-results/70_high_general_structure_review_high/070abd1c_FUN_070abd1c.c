/*
FUNCTION_NAME: FUN_070abd1c
ENTRY_POINT: 070abd1c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_070abd1c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  if ((DAT_07a5a850 & 1) == 0) {
    FUN_031f20f4(FriendEntry_<SetData>d__7_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d9e08);
    FUN_031f20f4(System_Linq_Expressions_Interpreter_LightCompiler_<>c_TypeInfo);
    FUN_031f20f4(FriendRequestEntry_<SetData>d__11_TypeInfo);
    FUN_031f20f4(UnityEngine_Rendering_Universal_Internal_ForwardLights_<>c_TypeInfo);
    FUN_031f20f4(Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass21_0_TypeInfo)
    ;
    FUN_031f20f4(UnityEngine_Rendering_Universal_Internal_ForwardLights_LightConstantBuffer_TypeInfo
                );
    FUN_031f20f4(Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass23_0_TypeInfo)
    ;
    FUN_031f20f4(PTR_DAT_0759b2b0);
    FUN_031f20f4(PTR_DAT_075da1e8);
    FUN_031f20f4(PTR_DAT_075d8960);
    FUN_031f20f4(UnityEngine_UIElements_ListViewDragger_DragPosition_TypeInfo);
    FUN_031f20f4(Fusion_Photon_Realtime_LoadBalancingClient_CallbackTargetChange_TypeInfo);
    FUN_031f20f4(Photon_Realtime_LoadBalancingPeer_<>c_TypeInfo);
    FUN_031f20f4(Photon_Realtime_LoadBalancingClient_CallbackTargetChange_TypeInfo);
    FUN_031f20f4(
                Fusion_Photon_Realtime_Async_LoadBalancingClientAsyncExtensions_<>c__DisplayClass12_0_TypeInfo
                );
    FUN_031f20f4(
                Fusion_Photon_Realtime_Async_LoadBalancingClientAsyncExtensions_<>c__DisplayClass13_0_TypeInfo
                );
    FUN_031f20f4(
                Fusion_Photon_Realtime_Async_LoadBalancingClientAsyncExtensions_<>c__DisplayClass1_0_TypeInfo
                );
    FUN_031f20f4(
                Fusion_Photon_Realtime_Async_LoadBalancingClientAsyncExtensions_<>c__DisplayClass4_0_TypeInfo
                );
    FUN_031f20f4(
                Fusion_Photon_Realtime_Async_LoadBalancingClientAsyncExtensions_<>c__DisplayClass5_0_TypeInfo
                );
    FUN_031f20f4(Photon_Voice_LoadBalancingTransport_LBCLogger_TypeInfo);
    FUN_031f20f4(Fusion_Photon_Realtime_LoadBalancingPeer_<>c_TypeInfo);
    FUN_031f20f4(LoadingDomeManager_<>c_TypeInfo);
    DAT_07a5a850 = 1;
  }
  puVar3 = Photon_Voice_LoadBalancingTransport_LBCLogger_TypeInfo;
  puVar2 = PTR_DAT_075da1e8;
  puVar1 = PTR_DAT_075d8960;
  plVar6 = (long *)(param_1 + 0x30);
  if (*plVar6 != 0) {
    lVar5 = *(long *)(*plVar6 + 0x520);
    if (lVar5 == 0) goto LAB_070ac23c;
    lVar5 = *(long *)(lVar5 + 0x500);
    uVar4 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d9e08);
    FUN_056fc20c(uVar4,param_1,*(undefined8 *)puVar3,0);
    if (lVar5 == 0) goto LAB_070ac23c;
    FUN_070bc440(lVar5,uVar4,0);
    puVar3 = LoadingDomeManager_<>c_TypeInfo;
    if ((*plVar6 == 0) || (lVar5 = *(long *)(*plVar6 + 0x520), lVar5 == 0)) goto LAB_070ac23c;
    lVar5 = *(long *)(lVar5 + 0x4f8);
    uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
    FUN_04292d74(uVar4,param_1,*(undefined8 *)puVar3,0);
    if (lVar5 == 0) goto LAB_070ac23c;
    Fusion_Native__MallocAndClearArray<NetPeerGroup>(lVar5,uVar4,0,*(undefined8 *)puVar2);
    *plVar6 = 0;
    thunk_FUN_0329bf60(plVar6,0);
  }
  puVar3 = Photon_Realtime_LoadBalancingPeer_<>c_TypeInfo;
  plVar6 = (long *)(param_1 + 0x40);
  if (*plVar6 != 0) {
    lVar5 = *(long *)(*plVar6 + 0x4f0);
    uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
    FUN_04292d74(uVar4,param_1,*(undefined8 *)puVar3,0);
    puVar3 = 
    Fusion_Photon_Realtime_Async_LoadBalancingClientAsyncExtensions_<>c__DisplayClass1_0_TypeInfo;
    puVar1 = PTR_DAT_0759b2b0;
    if (lVar5 != 0) {
      Fusion_Native__MallocAndClearArray<NetPeerGroup>(lVar5,uVar4,0,*(undefined8 *)puVar2);
      lVar5 = *(long *)(param_1 + 0x40);
      uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
      FUN_05d75504(uVar4,param_1,*(undefined8 *)puVar3,0);
      puVar3 = 
      Fusion_Photon_Realtime_Async_LoadBalancingClientAsyncExtensions_<>c__DisplayClass5_0_TypeInfo;
      puVar2 = UnityEngine_Rendering_Universal_Internal_ForwardLights_LightConstantBuffer_TypeInfo;
      if (lVar5 != 0) {
        FUN_07072640(lVar5,uVar4,0);
        lVar5 = *(long *)(param_1 + 0x40);
        uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
        FUN_057ce21c(uVar4,param_1,*(undefined8 *)puVar3,0);
        puVar3 = 
        Fusion_Photon_Realtime_Async_LoadBalancingClientAsyncExtensions_<>c__DisplayClass13_0_TypeInfo
        ;
        puVar2 = UnityEngine_Rendering_Universal_Internal_ForwardLights_<>c_TypeInfo;
        if (lVar5 != 0) {
          FUN_07072794(lVar5,uVar4,0);
          lVar5 = *(long *)(param_1 + 0x40);
          uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
          FUN_057062f4(uVar4,param_1,*(undefined8 *)puVar3,0);
          puVar2 = Fusion_Photon_Realtime_LoadBalancingPeer_<>c_TypeInfo;
          if (lVar5 != 0) {
            FUN_070724ec(lVar5,uVar4,0);
            lVar5 = *(long *)(param_1 + 0x40);
            uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
            FUN_05d75504(uVar4,param_1,*(undefined8 *)puVar2,0);
            if (lVar5 != 0) {
              FUN_070728e8(lVar5,uVar4,0);
              puVar1 = UnityEngine_UIElements_ListViewDragger_DragPosition_TypeInfo;
              if (*plVar6 != 0) {
                lVar5 = *(long *)(*plVar6 + 0x500);
                uVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                            Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass21_0_TypeInfo
                                          );
                FUN_057cdd98(uVar4,param_1,*(undefined8 *)puVar1,0);
                if (lVar5 != 0) {
                  FUN_070a88b0(lVar5,uVar4);
                  puVar1 = Photon_Realtime_LoadBalancingClient_CallbackTargetChange_TypeInfo;
                  if (*plVar6 != 0) {
                    lVar5 = *(long *)(*plVar6 + 0x500);
                    uVar4 = thunk_FUN_0322f148(*(undefined8 *)FriendEntry_<SetData>d__7_TypeInfo);
                    FUN_056fa11c(uVar4,param_1,*(undefined8 *)puVar1,0);
                    if (lVar5 != 0) {
                      FUN_070a8960(lVar5,uVar4);
                      puVar1 = 
                      Fusion_Photon_Realtime_Async_LoadBalancingClientAsyncExtensions_<>c__DisplayClass12_0_TypeInfo
                      ;
                      if (*plVar6 != 0) {
                        lVar5 = *(long *)(*plVar6 + 0x500);
                        uVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                        
                                                  Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass23_0_TypeInfo
                                                  );
                        FUN_057d0204(uVar4,param_1,*(undefined8 *)puVar1,0);
                        if (lVar5 != 0) {
                          FUN_070a8cd0(lVar5,uVar4);
                          puVar1 = 
                          Fusion_Photon_Realtime_Async_LoadBalancingClientAsyncExtensions_<>c__DisplayClass4_0_TypeInfo
                          ;
                          if (*plVar6 != 0) {
                    /* try { // try from 070ac15c to 071ac2df has its CatchHandler @ 070ac15c
                       catch() { ... } // from try @ 070ac15c with catch @ 070ac15c
                       catch() { ... } // from try @ 070ac5a4 with catch @ 070ac15c
                       catch() { ... } // from try @ 070ac5ec with catch @ 070ac15c
                       catch() { ... } // from try @ 070ac710 with catch @ 070ac15c
                       catch() { ... } // from try @ 070ac718 with catch @ 070ac15c
                       catch() { ... } // from try @ 070ac7e4 with catch @ 070ac15c */
                            lVar5 = *(long *)(*plVar6 + 0x500);
                            uVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                                        FriendRequestEntry_<SetData>d__11_TypeInfo);
                            FUN_057cdeb8(uVar4,param_1,*(undefined8 *)puVar1,0);
                            if (lVar5 != 0) {
                              FUN_070a8ac0(lVar5,uVar4);
                              puVar1 = 
                              Fusion_Photon_Realtime_LoadBalancingClient_CallbackTargetChange_TypeInfo
                              ;
                              if (*plVar6 != 0) {
                                lVar5 = *(long *)(*plVar6 + 0x500);
                                uVar4 = thunk_FUN_0322f148(*(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_Interpreter_LightCompiler_<>c_TypeInfo
                                                  );
                                FUN_056f826c(uVar4,param_1,*(undefined8 *)puVar1,0);
                                if (lVar5 != 0) {
                                  FUN_070a875c(lVar5,uVar4);
                                  if (*plVar6 != 0) {
                                    FUN_06fcdca0(*plVar6,0);
                                    if (*plVar6 != 0) {
                                      FUN_070774f8(*plVar6,0);
                                      *(undefined8 *)(param_1 + 0x40) = 0;
                                      thunk_FUN_0329bf60(plVar6,0);
                                      plVar6 = (long *)(param_1 + 0x38);
                                      if (*plVar6 != 0) {
                                        FUN_06fcdca0(*plVar6,0);
                                        *plVar6 = 0;
                                        thunk_FUN_0329bf60(plVar6,0);
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
LAB_070ac23c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


