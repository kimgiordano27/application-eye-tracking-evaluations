/*
FUNCTION_NAME: FUN_0690b220
ENTRY_POINT: 0690b220
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_16;validity_or_gating_hits_21;telemetry_or_network_hits_13;frame_or_lifecycle_behavior
*/


long FUN_0690b220(long param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined1 auStack_7c [4];
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  if ((bRam00000000071d74a6 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d04020);
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_Start<SharedAnchorManager_<RetrieveAnchors>d__24>__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_Start<SharedAnchorManager_<RetrieveAnchorsFromGroup>d__23>__
                );
    FUN_02f07e70(PTR_DAT_06d02bc8);
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_Create__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_SetException__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_SetResult__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_SetStateMachine__
                );
    FUN_02f07e70(PTR_DAT_06d054e0);
    FUN_02f07e70(PTR_DAT_06d02bd0);
    FUN_02f07e70(PTR_DAT_06d01e20);
    FUN_02f07e70(System_Comparison<Camera>_TypeInfo);
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_get_Task__
                );
    FUN_02f07e70(System_Collections_Generic_Dictionary<string,_AppContext_SwitchValueState>_TypeInfo
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_AwaitUnsafeOnCompleted<TaskAwaiter<List<RegionInfo>>,_FusionRealtimeProxy_<GetEnabledRegions>d__3>__
                );
    FUN_02f07e70(UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var);
    FUN_02f07e70(
                System_Collections_Generic_Dictionary<string,_ExpressionEvaluator_Operator>_TypeInfo
                );
    FUN_02f07e70(UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_var);
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_AwaitUnsafeOnCompleted<TaskAwaiter<RegionHandler>,_FusionRealtimeProxy_<GetEnabledRegions>d__3>__
                );
    FUN_02f07e70(PTR_DAT_06d62d98);
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_AwaitUnsafeOnCompleted<TaskAwaiter,_FusionRealtimeProxy_<GetEnabledRegions>d__3>__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_Start<FusionRealtimeProxy_<GetEnabledRegions>d__3>__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_Create__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_SetException__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_SetResult__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_get_Task__
                );
    FUN_02f07e70(PTR_DAT_06d62db0);
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<SessionInfo>>_AwaitUnsafeOnCompleted<TaskAwaiter<List<SessionInfo>>,_CustomMatchmakingFusion_<GetSessionList>d__25>__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<SessionInfo>>_AwaitUnsafeOnCompleted<TaskAwaiter,_CustomMatchmakingFusion_<GetSessionList>d__25>__
                );
    bRam00000000071d74a6 = 1;
  }
  puVar3 = PTR_DAT_06d01e20;
  if ((0 < param_2) || (param_5 != 0xf)) {
    if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar4 = FUN_066ca6a0(param_1,0,0);
    if ((uVar4 & 1) == 0) {
      if (param_1 == 0) goto LAB_0690bc04;
      uVar4 = FUN_066a382c(param_1,*(undefined8 *)
                                    System_Collections_Generic_Dictionary<string,_ExpressionEvaluator_Operator>_TypeInfo
                           ,0);
      if ((uVar4 & 1) == 0) {
        uVar13 = FUN_066cd398(param_1,0);
        puVar10 = (undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_AwaitUnsafeOnCompleted<TaskAwaiter<List<RegionInfo>>,_FusionRealtimeProxy_<GetEnabledRegions>d__3>__
        ;
      }
      else {
        uVar4 = FUN_066a382c(param_1,*(undefined8 *)PTR_DAT_06d62d98,0);
        if ((uVar4 & 1) == 0) {
          uVar13 = FUN_066cd398(param_1,0);
          puVar10 = (undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_get_Task__
          ;
        }
        else {
          uVar4 = FUN_066a382c(param_1,*(undefined8 *)
                                        System_Collections_Generic_Dictionary<string,_AppContext_SwitchValueState>_TypeInfo
                               ,0);
          if ((uVar4 & 1) == 0) {
            uVar13 = FUN_066cd398(param_1,0);
            puVar10 = (undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<SessionInfo>>_AwaitUnsafeOnCompleted<TaskAwaiter<List<SessionInfo>>,_CustomMatchmakingFusion_<GetSessionList>d__25>__
            ;
          }
          else {
            uVar4 = FUN_066a382c(param_1,*(undefined8 *)
                                          UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var
                                 ,0);
            if ((uVar4 & 1) == 0) {
              uVar13 = FUN_066cd398(param_1,0);
              puVar10 = (undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_SetException__
              ;
            }
            else {
              uVar4 = FUN_066a382c(param_1,*(undefined8 *)
                                            UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_var
                                   ,0);
              if ((uVar4 & 1) == 0) {
                uVar13 = FUN_066cd398(param_1,0);
                puVar10 = (undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_AwaitUnsafeOnCompleted<TaskAwaiter<RegionHandler>,_FusionRealtimeProxy_<GetEnabledRegions>d__3>__
                ;
              }
              else {
                uVar4 = FUN_066a382c(param_1,*(undefined8 *)PTR_DAT_06d62db0,0);
                plVar12 = (long *)System_Comparison<Camera>_TypeInfo;
                if ((uVar4 & 1) != 0) {
                  lVar5 = *(long *)System_Comparison<Camera>_TypeInfo;
                  if (*(int *)(lVar5 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                    lVar5 = *plVar12;
                  }
                  if (**(long **)(lVar5 + 0xb8) != 0) {
                    iVar1 = *(int *)(**(long **)(lVar5 + 0xb8) + 0x18);
                    if (0 < iVar1) {
                      iVar11 = 0;
                      while( true ) {
                        if (*(int *)(lVar5 + 0xe0) == 0) {
                          thunk_FUN_02f12b58();
                          lVar5 = *plVar12;
                        }
                        if ((**(long **)(lVar5 + 0xb8) == 0) ||
                           (lVar5 = FUN_03fd09cc(**(long **)(lVar5 + 0xb8),iVar11,
                                                 *(undefined8 *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_SetResult__
                                                ), lVar5 == 0)) goto LAB_0690bc04;
                        uVar13 = *(undefined8 *)(lVar5 + 0x10);
                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                          thunk_FUN_02f12b58();
                        }
                        uVar4 = FUN_066ca6a0(uVar13,param_1,0);
                        if ((((((uVar4 & 1) != 0) && (*(int *)(lVar5 + 0x24) == param_2)) &&
                             (*(int *)(lVar5 + 0x28) == param_3)) &&
                            ((*(int *)(lVar5 + 0x2c) == param_4 &&
                             (*(int *)(lVar5 + 0x30) == param_6)))) &&
                           ((*(int *)(lVar5 + 0x34) == param_7 &&
                            (*(int *)(lVar5 + 0x3c) == param_5)))) {
                          *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
                          return *(long *)(lVar5 + 0x18);
                        }
                        if (iVar1 + -1 == iVar11) break;
                        lVar5 = *(long *)System_Comparison<Camera>_TypeInfo;
                        iVar11 = iVar11 + 1;
                        plVar12 = (long *)System_Comparison<Camera>_TypeInfo;
                      }
                    }
                    lVar5 = thunk_FUN_02ef1808(*(undefined8 *)
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_SetStateMachine__
                                              );
                    *(undefined4 *)(lVar5 + 0x2c) = 8;
                    FUN_05645a04(lVar5,0);
                    *(undefined4 *)(lVar5 + 0x20) = 1;
                    *(long *)(lVar5 + 0x10) = param_1;
                    thunk_FUN_02f411dc((long *)(lVar5 + 0x10),param_1);
                    lVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d054e0);
                    FUN_066a2eb4(lVar6,param_1,0);
                    plVar12 = (long *)(lVar5 + 0x18);
                    *plVar12 = lVar6;
                    thunk_FUN_02f411dc(plVar12,lVar6);
                    if (*plVar12 != 0) {
                      FUN_066ce048(*plVar12,0x3d,0);
                      lVar9 = *(long *)(lVar5 + 0x18);
                      *(int *)(lVar5 + 0x24) = param_2;
                      *(int *)(lVar5 + 0x28) = param_3;
                      *(int *)(lVar5 + 0x2c) = param_4;
                      *(int *)(lVar5 + 0x30) = param_6;
                      *(int *)(lVar5 + 0x34) = param_7;
                      *(int *)(lVar5 + 0x3c) = param_5;
                      *(bool *)(lVar5 + 0x38) = param_3 != 0 && 0 < param_7;
                      plVar7 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,8);
                      puVar3 = PTR_DAT_06d02bc8;
                      iStack_64 = param_2;
                      lVar6 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d02bc8,&iStack_64);
                      if (plVar7 != (long *)0x0) {
                        if ((lVar6 != 0) &&
                           (lVar8 = thunk_FUN_02ef170c(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                           lVar8 == 0)) {
LAB_0690bc0c:
                          uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                          FUN_02f07f94(uVar13,0);
                        }
                        if ((int)plVar7[3] != 0) {
                          plVar7[4] = lVar6;
                          thunk_FUN_02f411dc(plVar7 + 4,lVar6);
                          iStack_68 = param_3;
                          lVar6 = thunk_FUN_02ef1438(*(undefined8 *)
                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_get_Task__
                                                  ,&iStack_68);
                          if ((lVar6 != 0) &&
                             (lVar8 = thunk_FUN_02ef170c(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                             lVar8 == 0)) goto LAB_0690bc0c;
                          if (1 < *(uint *)(plVar7 + 3)) {
                            plVar7[5] = lVar6;
                            thunk_FUN_02f411dc(plVar7 + 5,lVar6);
                            iStack_6c = param_4;
                            lVar6 = thunk_FUN_02ef1438(*(undefined8 *)
                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_Start<SharedAnchorManager_<RetrieveAnchorsFromGroup>d__23>__
                                                  ,&iStack_6c);
                            if ((lVar6 != 0) &&
                               (lVar8 = thunk_FUN_02ef170c(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                               lVar8 == 0)) goto LAB_0690bc0c;
                            if (2 < *(uint *)(plVar7 + 3)) {
                              plVar7[6] = lVar6;
                              thunk_FUN_02f411dc(plVar7 + 6,lVar6);
                              iStack_70 = param_7;
                              lVar6 = thunk_FUN_02ef1438(*(undefined8 *)puVar3,&iStack_70);
                              if ((lVar6 != 0) &&
                                 (lVar8 = thunk_FUN_02ef170c(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                                 lVar8 == 0)) goto LAB_0690bc0c;
                              if (3 < *(uint *)(plVar7 + 3)) {
                                plVar7[7] = lVar6;
                                thunk_FUN_02f411dc(plVar7 + 7,lVar6);
                                iStack_74 = param_6;
                                lVar6 = thunk_FUN_02ef1438(*(undefined8 *)puVar3,&iStack_74);
                                if ((lVar6 != 0) &&
                                   (lVar8 = thunk_FUN_02ef170c(lVar6,*(undefined8 *)(*plVar7 + 0x40)
                                                              ), lVar8 == 0)) goto LAB_0690bc0c;
                                if (4 < *(uint *)(plVar7 + 3)) {
                                  plVar7[8] = lVar6;
                                  thunk_FUN_02f411dc(plVar7 + 8,lVar6);
                                  iStack_78 = param_5;
                                  lVar6 = thunk_FUN_02ef1438(*(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_Start<SharedAnchorManager_<RetrieveAnchors>d__24>__
                                                  ,&iStack_78);
                                  if ((lVar6 != 0) &&
                                     (lVar8 = thunk_FUN_02ef170c(lVar6,*(undefined8 *)
                                                                        (*plVar7 + 0x40)),
                                     lVar8 == 0)) goto LAB_0690bc0c;
                                  if (5 < *(uint *)(plVar7 + 3)) {
                                    plVar7[9] = lVar6;
                                    thunk_FUN_02f411dc(plVar7 + 9,lVar6);
                                    auStack_7c[0] = *(undefined1 *)(lVar5 + 0x38);
                                    lVar6 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d04020,
                                                               auStack_7c);
                                    if ((lVar6 != 0) &&
                                       (lVar8 = thunk_FUN_02ef170c(lVar6,*(undefined8 *)
                                                                          (*plVar7 + 0x40)),
                                       lVar8 == 0)) goto LAB_0690bc0c;
                                    if (6 < *(uint *)(plVar7 + 3)) {
                                      plVar7[10] = lVar6;
                                      thunk_FUN_02f411dc(plVar7 + 10,lVar6);
                                      lVar6 = FUN_066cd398(param_1,0);
                                      if ((lVar6 != 0) &&
                                         (lVar8 = thunk_FUN_02ef170c(lVar6,*(undefined8 *)
                                                                            (*plVar7 + 0x40)),
                                         lVar8 == 0)) goto LAB_0690bc0c;
                                      puVar3 = System_Comparison<Camera>_TypeInfo;
                                      if (7 < *(uint *)(plVar7 + 3)) {
                                        plVar7[0xb] = lVar6;
                                        thunk_FUN_02f411dc(plVar7 + 0xb,lVar6);
                                        uVar13 = FUN_05465bcc(*(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<SessionInfo>>_AwaitUnsafeOnCompleted<TaskAwaiter,_CustomMatchmakingFusion_<GetSessionList>d__25>__
                                                  ,plVar7,0);
                                        if (lVar9 != 0) {
                                          FUN_066cd448(lVar9,uVar13,0);
                                          if (*plVar12 != 0) {
                                            FUN_066a4a54((float)param_2,*plVar12,
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_Dictionary<string,_ExpressionEvaluator_Operator>_TypeInfo
                                                  ,0);
                                            if (*plVar12 != 0) {
                                              FUN_066a4a54((float)param_3,*plVar12,
                                                           *(undefined8 *)PTR_DAT_06d62d98,0);
                                              if (*plVar12 != 0) {
                                                FUN_066a4a54((float)param_4,*plVar12,
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Collections_Generic_Dictionary<string,_AppContext_SwitchValueState>_TypeInfo
                                                  ,0);
                                                if (*plVar12 != 0) {
                                                  FUN_066a4a54((float)param_6,*plVar12,
                                                               *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var
                                                  ,0);
                                                  if (*plVar12 != 0) {
                                                    FUN_066a4a54((float)param_7,*plVar12,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_var
                                                  ,0);
                                                  if (*plVar12 != 0) {
                                                    FUN_066a4a54((float)param_5,*plVar12,
                                                                 *(undefined8 *)PTR_DAT_06d62db0,0);
                                                    if (*(long *)(lVar5 + 0x18) != 0) {
                                                      uVar14 = 0;
                                                      if (*(char *)(lVar5 + 0x38) != '\0') {
                                                        uVar14 = 0x3f800000;
                                                      }
                                                      FUN_066a4a54(uVar14,*(long *)(lVar5 + 0x18),
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_SetResult__
                                                  ,0);
                                                  if (*plVar12 != 0) {
                                                    if (*(char *)(lVar5 + 0x38) == '\0') {
                                                      FUN_066a399c(*plVar12,*(undefined8 *)
                                                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_AwaitUnsafeOnCompleted<TaskAwaiter,_FusionRealtimeProxy_<GetEnabledRegions>d__3>__
                                                  ,0);
                                                  }
                                                  else {
                                                    FUN_066a3958();
                                                  }
                                                  lVar6 = *(long *)puVar3;
                                                  if (*(int *)(lVar6 + 0xe0) == 0) {
                                                    thunk_FUN_02f12b58();
                                                    lVar6 = *(long *)puVar3;
                                                  }
                                                  lVar6 = **(long **)(lVar6 + 0xb8);
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar8 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_Create__
                                                  ;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      plVar7 = (long *)(lVar9 + (long)(int)uVar2 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_02f411dc(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar6,lVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  return *plVar12;
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
                                        goto LAB_0690bc04;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                    /* WARNING: Subroutine does not return */
                        FUN_02f080c8();
                      }
                    }
                  }
LAB_0690bc04:
                    /* WARNING: Subroutine does not return */
                  FUN_02f080c0();
                }
                uVar13 = FUN_066cd398(param_1,0);
                puVar10 = (undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_Create__
                ;
              }
            }
          }
        }
      }
      uVar13 = FUN_05465414(*(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RegionInfo>>_Start<FusionRealtimeProxy_<GetEnabledRegions>d__3>__
                            ,uVar13,*puVar10,0);
      if (*(int *)(*(long *)System_Comparison<Camera>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)System_Comparison<Camera>_TypeInfo);
      }
      FUN_0690bc18(uVar13,param_1);
    }
  }
  return param_1;
}


