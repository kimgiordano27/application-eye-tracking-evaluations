/*
FUNCTION_NAME: Unity.Properties.Internal.ReflectedPropertyBagProvider.<GetPropertyMembers>d__22$$System.IDisposable.Dispose
ENTRY_POINT: 0664d3ac
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


void Unity_Properties_Internal_ReflectedPropertyBagProvider_<GetPropertyMembers>d__22__System_IDisposable_Dispose
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  *(undefined8 *)(param_1 + 0x20) = param_2;
  thunk_FUN_02f411dc();
  *(undefined8 *)(unaff_x21 + 0x30) = unaff_x22;
  thunk_FUN_02f411dc();
  lVar3 = thunk_FUN_02ef1808(*unaff_x28);
  FUN_03fd0468(lVar3,*(undefined8 *)System_Xml_Linq_LineInfoAnnotation_TypeInfo);
  lVar4 = thunk_FUN_02ef1808(*(undefined8 *)UnityEngine_InputSystem_LightSensor_TypeInfo);
  FUN_05645a04(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)System_LocalDataStoreHolder_TypeInfo;
    thunk_FUN_02f411dc();
    *(undefined8 *)(lVar4 + 0x10) =
         *(undefined8 *)PlayFab_ClientModels_LoginWithFacebookInstantGamesIdRequest_TypeInfo;
    thunk_FUN_02f411dc();
    if (lVar3 != 0) {
      lVar7 = *(long *)(lVar3 + 0x10);
      lVar8 = *unaff_x26;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *plVar5 = lVar4;
          thunk_FUN_02f411dc(plVar5,lVar4);
        }
        else {
          FUN_03fd0c9c(lVar3,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
        *(long *)(unaff_x21 + 0x28) = lVar3;
        thunk_FUN_02f411dc((long *)(unaff_x21 + 0x28),lVar3);
        lVar3 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar3 != 0) {
          uVar1 = *(uint *)(unaff_x20 + 0x18);
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
            *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
            thunk_FUN_02f411dc();
          }
          else {
            FUN_03fd0c9c();
          }
          lVar3 = thunk_FUN_02ef1808(*(undefined8 *)
                                      UnityEngine_Rendering_LightShadowResolution_TypeInfo);
          FUN_05645a04(lVar3,0);
          puVar2 = PlayFab_GroupsModels_ListMembershipResponse_TypeInfo;
          if (lVar3 != 0) {
            *(undefined8 *)(lVar3 + 0x10) =
                 *(undefined8 *)
                  PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult_TypeInfo;
            thunk_FUN_02f411dc();
            *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
            thunk_FUN_02f411dc((undefined8 *)(lVar3 + 0x20));
            *(undefined4 *)(lVar3 + 0x18) = 3;
            lVar4 = thunk_FUN_02ef1808(*unaff_x24);
            FUN_03fd0468(lVar4,*unaff_x29);
            if (lVar4 != 0) {
              lVar8 = *unaff_x25;
              uVar6 = *(undefined8 *)PlayFab_GroupsModels_ListGroupApplicationsResponse_TypeInfo;
              lVar7 = *(long *)(lVar4 + 0x10);
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar1 = *(uint *)(lVar4 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                  thunk_FUN_02f411dc();
                }
                else {
                  FUN_03fd0c9c(lVar4,uVar6,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar3 + 0x30) = lVar4;
                thunk_FUN_02f411dc((long *)(lVar3 + 0x30),lVar4);
                lVar4 = thunk_FUN_02ef1808(*unaff_x28);
                FUN_03fd0468(lVar4,*(undefined8 *)System_Xml_Linq_LineInfoAnnotation_TypeInfo);
                lVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                            UnityEngine_InputSystem_LightSensor_TypeInfo);
                FUN_05645a04(lVar7,0);
                if (lVar7 != 0) {
                  *(undefined8 *)(lVar7 + 0x18) =
                       *(undefined8 *)PlayFab_MultiplayerModels_ListPartyQosServersRequest_TypeInfo;
                  thunk_FUN_02f411dc();
                  *(undefined8 *)(lVar7 + 0x10) =
                       *(undefined8 *)
                        PlayFab_ClientModels_LoginWithFacebookInstantGamesIdRequest_TypeInfo;
                  thunk_FUN_02f411dc();
                  if (lVar4 != 0) {
                    lVar8 = *(long *)(lVar4 + 0x10);
                    lVar9 = *unaff_x26;
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar1 = *(uint *)(lVar4 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar5 = lVar7;
                        thunk_FUN_02f411dc(plVar5,lVar7);
                      }
                      else {
                        FUN_03fd0c9c(lVar4,lVar7,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar3 + 0x28) = lVar4;
                      thunk_FUN_02f411dc((long *)(lVar3 + 0x28),lVar4);
                      lVar4 = *(long *)(unaff_x20 + 0x10);
                      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                      if (lVar4 != 0) {
                        uVar1 = *(uint *)(unaff_x20 + 0x18);
                        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                          plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar5 = lVar3;
                          thunk_FUN_02f411dc(plVar5,lVar3);
                        }
                        else {
                          FUN_03fd0c9c();
                        }
                        lVar3 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                        
                                                  UnityEngine_Rendering_LightShadowResolution_TypeInfo
                                                  );
                        FUN_05645a04(lVar3,0);
                        puVar2 = PlayFab_MultiplayerModels_ListMatchmakingQueuesRequest_TypeInfo;
                        if (lVar3 != 0) {
                          *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)PTR_DAT_06d4e690;
                          thunk_FUN_02f411dc();
                          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                          thunk_FUN_02f411dc((undefined8 *)(lVar3 + 0x20));
                          *(undefined4 *)(lVar3 + 0x18) = 3;
                          lVar4 = thunk_FUN_02ef1808(*unaff_x24);
                          FUN_03fd0468(lVar4,*unaff_x29);
                          if (lVar4 != 0) {
                            lVar8 = *unaff_x25;
                            uVar6 = *(undefined8 *)PTR_DAT_06d93540;
                            lVar7 = *(long *)(lVar4 + 0x10);
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar7 != 0) {
                              uVar1 = *(uint *)(lVar4 + 0x18);
                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                thunk_FUN_02f411dc();
                              }
                              else {
                                FUN_03fd0c9c(lVar4,uVar6,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar3 + 0x30) = lVar4;
                              thunk_FUN_02f411dc((long *)(lVar3 + 0x30),lVar4);
                              lVar4 = thunk_FUN_02ef1808(*unaff_x28);
                              FUN_03fd0468(lVar4,*(undefined8 *)
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo);
                              lVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                    
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                              FUN_05645a04(lVar7,0);
                              if (lVar7 != 0) {
                                *(undefined8 *)(lVar7 + 0x18) =
                                     *(undefined8 *)
                                      PlayFab_GroupsModels_ListMembershipOpportunitiesResponse_TypeInfo
                                ;
                                thunk_FUN_02f411dc();
                                *(undefined8 *)(lVar7 + 0x10) =
                                     *(undefined8 *)
                                      PlayFab_ClientModels_LoginWithFacebookInstantGamesIdRequest_TypeInfo
                                ;
                                thunk_FUN_02f411dc();
                                if (lVar4 != 0) {
                                  lVar8 = *(long *)(lVar4 + 0x10);
                                  lVar9 = *unaff_x26;
                                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                  if (lVar8 != 0) {
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar5 = lVar7;
                                      thunk_FUN_02f411dc(plVar5,lVar7);
                                    }
                                    else {
                                      FUN_03fd0c9c(lVar4,lVar7,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar3 + 0x28) = lVar4;
                                    thunk_FUN_02f411dc((long *)(lVar3 + 0x28),lVar4);
                                    lVar4 = *(long *)(unaff_x20 + 0x10);
                                    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                    if (lVar4 != 0) {
                                      uVar1 = *(uint *)(unaff_x20 + 0x18);
                                      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                        plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar5 = lVar3;
                                        thunk_FUN_02f411dc(plVar5,lVar3);
                                      }
                                      else {
                                        FUN_03fd0c9c();
                                      }
                                      lVar3 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_Rendering_LightShadowResolution_TypeInfo
                                                  );
                                      FUN_05645a04(lVar3,0);
                                      puVar2 = 
                                      Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_TypeInfo;
                                      if (lVar3 != 0) {
                                        *(undefined8 *)(lVar3 + 0x10) =
                                             *(undefined8 *)System_Threading_Lock_TypeInfo;
                                        thunk_FUN_02f411dc();
                                        *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                        thunk_FUN_02f411dc((undefined8 *)(lVar3 + 0x20));
                                        *(undefined4 *)(lVar3 + 0x18) = 4;
                                        lVar4 = thunk_FUN_02ef1808(*unaff_x24);
                                        FUN_03fd0468(lVar4,*unaff_x29);
                                        if (lVar4 != 0) {
                                          lVar8 = *unaff_x25;
                                          uVar6 = *(undefined8 *)
                                                   Newtonsoft_Json_Schema_JsonSchemaNode_TypeInfo;
                                          lVar7 = *(long *)(lVar4 + 0x10);
                                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          if (lVar7 != 0) {
                                            uVar1 = *(uint *)(lVar4 + 0x18);
                                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar6;
                                              thunk_FUN_02f411dc();
                                            }
                                            else {
                                              FUN_03fd0c9c(lVar4,uVar6,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar8 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar3 + 0x30) = lVar4;
                                            thunk_FUN_02f411dc((long *)(lVar3 + 0x30),lVar4);
                                            lVar4 = thunk_FUN_02ef1808(*unaff_x28);
                                            FUN_03fd0468(lVar4,*(undefined8 *)
                                                                                                                                
                                                  System_Xml_Linq_LineInfoAnnotation_TypeInfo);
                                            lVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                            FUN_05645a04(lVar7,0);
                                            if (lVar7 != 0) {
                                              *(undefined8 *)(lVar7 + 0x18) =
                                                   *(undefined8 *)System_LocalDataStoreSlot_TypeInfo
                                              ;
                                              thunk_FUN_02f411dc();
                                              *(undefined8 *)(lVar7 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  PlayFab_ClientModels_LoginWithFacebookInstantGamesIdRequest_TypeInfo
                                              ;
                                              thunk_FUN_02f411dc();
                                              if (lVar4 != 0) {
                                                lVar8 = *(long *)(lVar4 + 0x10);
                                                lVar9 = *unaff_x26;
                                                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                                if (lVar8 != 0) {
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar5 = lVar7;
                                                    thunk_FUN_02f411dc(plVar5,lVar7);
                                                  }
                                                  else {
                                                    FUN_03fd0c9c(lVar4,lVar7,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_02f411dc((long *)(lVar3 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02f411dc(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    *(long *)(unaff_x19 + 0x28) = unaff_x20;
                                                    thunk_FUN_02f411dc();
                                                    FUN_0663f8fc();
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


