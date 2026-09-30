/*
FUNCTION_NAME: FUN_06ae1ee4
ENTRY_POINT: 06ae1ee4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_21;telemetry_or_network_hits_10
*/


void FUN_06ae1ee4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_070f1280;
                    /* catch() { ... } // from try @ 06ae1f40 with catch @ 06ae1ef4
                       catch() { ... } // from try @ 06ae1fac with catch @ 06ae1ef4 */
  if ((DAT_0755f8ca & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f1280);
                    /* try { // try from 06ae1f20 to 06be1f3f has its CatchHandler @ 06ae1f78 */
    FUN_03188a78(PTR_DAT_070f1970);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_Add__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_Clear__
                );
                    /* try { // try from 06ae1f40 to 06be1f93 has its CatchHandler @ 06ae1ef4 */
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_ContainsKey__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_TryGetValue__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_get_Count__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_get_Item__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_set_Item__
                );
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 06ae1f20 with catch @ 06ae1f78
                        */
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<IAsyncLocal,_object>__ctor__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<int,_long>_Add__);
                    /* try { // try from 06ae1f94 to 06be1f97 has its CatchHandler @ 06ae1fa0 */
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<IAsyncLocal,_object>__ctor__);
                    /* catch() { ... } // from try @ 06ae1f94 with catch @ 06ae1fa0 */
                    /* try { // try from 06ae1fa4 to 06be1fab has its CatchHandler @ 06ae1fb4 */
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<IAsyncLocal,_object>_TryGetValue__);
                    /* try { // try from 06ae1fac to 06be1fb7 has its CatchHandler @ 06ae1ef4 */
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<IAsyncLocal,_object>_set_Item__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06ae1fa4 with catch @ 06ae1fb4
                        */
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<uint,_VirtualHeap_PinnedBlob>_GetEnumerator__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<uint,_VirtualHeap_PinnedBlob>_TryGetValue__
                );
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>__ctor__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_Clear__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_Remove__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_set_Item__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<ulong,_Request>__ctor__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<ulong,_Request>_Clear__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<ulong,_Request>_TryGetValue__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<ulong,_Request>_set_Item__);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>__ctor__
                );
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<uint,_VirtualHeap_PinnedBlob>_Add__);
    DAT_0755f8ca = 1;
  }
  lVar5 = *(long *)puVar2;
  local_48 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = Method_System_Collections_Generic_Dictionary<uint,_VirtualHeap_PinnedBlob>_Add__;
  puVar1 = PTR_DAT_070c1958;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 != 0) {
    local_48 = *(undefined8 *)(lVar5 + 0x28);
    lVar5 = *(long *)(PTR_DAT_070c1958 + 0x38);
    if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar6 = FUN_0593e698(lVar5 + 0x20,0);
    uVar7 = FUN_0593e698(*(long *)(puVar1 + 0x28) + 0x20,0);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar5);
      lVar5 = *(long *)puVar4;
    }
    puVar3 = PTR_DAT_070f1970;
    puVar8 = *(undefined8 **)(lVar5 + 0xb8);
    lVar9 = puVar8[0xd];
    if (lVar9 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar5);
        puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar10 = *puVar8;
      lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<IAsyncLocal,_object>__ctor__)
      ;
      FUN_04c8344c(lVar9,uVar10,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<uint,_VirtualHeap_PinnedBlob>_GetEnumerator__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68) = lVar9;
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_06ae0a94(&local_48,uVar6,uVar7,lVar9);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 != 0) {
      local_48 = *(undefined8 *)(lVar5 + 0x28);
      lVar5 = *(long *)(puVar1 + 0x38);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar6 = FUN_0593e698(lVar5 + 0x20,0);
      uVar7 = FUN_0593e698(*(long *)(puVar1 + 0x30) + 0x20,0);
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar5);
        lVar5 = *(long *)puVar4;
      }
      puVar8 = *(undefined8 **)(lVar5 + 0xb8);
      lVar9 = puVar8[0xe];
      if (lVar9 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_031e5338(lVar5);
          puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
        }
        uVar10 = *puVar8;
        lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_set_Item__
                          );
        FUN_04c8391c(lVar9,uVar10,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_Clear__,
                     0);
        *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x70) = lVar9;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_06ae0a94(&local_48,uVar6,uVar7,lVar9);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 != 0) {
        local_48 = *(undefined8 *)(lVar5 + 0x28);
        lVar5 = *(long *)(puVar1 + 0x38);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar6 = FUN_0593e698(lVar5 + 0x20,0);
        uVar7 = FUN_0593e698(*(long *)(puVar1 + 0x88) + 0x20,0);
        lVar5 = *(long *)puVar4;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_031e5338(lVar5);
          lVar5 = *(long *)puVar4;
        }
        puVar8 = *(undefined8 **)(lVar5 + 0xb8);
        lVar9 = puVar8[0xf];
        if (lVar9 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_031e5338(lVar5);
            puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
          }
          uVar10 = *puVar8;
          lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<IAsyncLocal,_object>_TryGetValue__
                            );
          FUN_04c835ac(lVar9,uVar10,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_Remove__
                       ,0);
          *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78) = lVar9;
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_06ae0a94(&local_48,uVar6,uVar7,lVar9);
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 != 0) {
          local_48 = *(undefined8 *)(lVar5 + 0x28);
          lVar5 = *(long *)(puVar1 + 0x38);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar6 = FUN_0593e698(lVar5 + 0x20,0);
          uVar7 = FUN_0593e698(*(long *)(puVar1 + 0x48) + 0x20,0);
          lVar5 = *(long *)puVar4;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_031e5338(lVar5);
            lVar5 = *(long *)puVar4;
          }
          puVar8 = *(undefined8 **)(lVar5 + 0xb8);
          lVar9 = puVar8[0x10];
          if (lVar9 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_031e5338(lVar5);
              puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
            }
            uVar10 = *puVar8;
            lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_TryGetValue__
                              );
            FUN_04c8370c(lVar9,uVar10,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_set_Item__
                         ,0);
            *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x80) = lVar9;
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          FUN_06ae0a94(&local_48,uVar6,uVar7,lVar9);
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            lVar5 = *(long *)puVar2;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar5 != 0) {
            local_48 = *(undefined8 *)(lVar5 + 0x28);
            lVar5 = *(long *)(puVar1 + 0x38);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar6 = FUN_0593e698(lVar5 + 0x20,0);
            uVar7 = FUN_0593e698(*(long *)(puVar1 + 0x68) + 0x20,0);
            lVar5 = *(long *)puVar4;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_031e5338(lVar5);
              lVar5 = *(long *)puVar4;
            }
            puVar8 = *(undefined8 **)(lVar5 + 0xb8);
            lVar9 = puVar8[0x11];
            if (lVar9 == 0) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_031e5338(lVar5);
                puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
              }
              uVar10 = *puVar8;
              lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<IAsyncLocal,_object>_set_Item__
                                );
              FUN_04c837bc(lVar9,uVar10,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<ulong,_Request>__ctor__,0);
              *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88) = lVar9;
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            FUN_06ae0a94(&local_48,uVar6,uVar7,lVar9);
            lVar5 = *(long *)puVar2;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_031e5338();
              lVar5 = *(long *)puVar2;
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
            if (lVar5 != 0) {
              local_48 = *(undefined8 *)(lVar5 + 0x28);
              lVar5 = *(long *)(puVar1 + 0x38);
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              uVar6 = FUN_0593e698(lVar5 + 0x20,0);
              uVar7 = FUN_0593e698(*(long *)(puVar1 + 0x18) + 0x20,0);
              lVar5 = *(long *)puVar4;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_031e5338(lVar5);
                lVar5 = *(long *)puVar4;
              }
              puVar8 = *(undefined8 **)(lVar5 + 0xb8);
              lVar9 = puVar8[0x12];
              if (lVar9 == 0) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_031e5338(lVar5);
                  puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                }
                uVar10 = *puVar8;
                lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_get_Count__
                                  );
                FUN_04c834fc(lVar9,uVar10,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<ulong,_Request>_Clear__,0
                            );
                *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90) = lVar9;
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              FUN_06ae0a94(&local_48,uVar6,uVar7,lVar9);
              lVar5 = *(long *)puVar2;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_031e5338();
                lVar5 = *(long *)puVar2;
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
              if (lVar5 != 0) {
                local_48 = *(undefined8 *)(lVar5 + 0x28);
                lVar5 = *(long *)(puVar1 + 0x38);
                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                }
                uVar6 = FUN_0593e698(lVar5 + 0x20,0);
                uVar7 = FUN_0593e698(*(long *)(puVar1 + 0x40) + 0x20,0);
                lVar5 = *(long *)puVar4;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_031e5338(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                lVar9 = puVar8[0x13];
                if (lVar9 == 0) {
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_031e5338(lVar5);
                    puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                  }
                  uVar10 = *puVar8;
                  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                    (*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_Clear__
                                    );
                  FUN_04c83a7c(lVar9,uVar10,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__
                               ,0);
                  *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x98) = lVar9;
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                }
                FUN_06ae0a94(&local_48,uVar6,uVar7,lVar9);
                lVar5 = *(long *)puVar2;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                  lVar5 = *(long *)puVar2;
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                if (lVar5 != 0) {
                  local_48 = *(undefined8 *)(lVar5 + 0x28);
                  lVar5 = *(long *)(puVar1 + 0x38);
                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_031e5338();
                  }
                  uVar6 = FUN_0593e698(lVar5 + 0x20,0);
                  uVar7 = FUN_0593e698(*(long *)(puVar1 + 0x50) + 0x20,0);
                  lVar5 = *(long *)puVar4;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_031e5338(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                  lVar9 = puVar8[0x14];
                  if (lVar9 == 0) {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_031e5338(lVar5);
                      puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                    }
                    uVar10 = *puVar8;
                    lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                      (*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<IAsyncLocal,_object>__ctor__
                                      );
                    FUN_04c83b2c(lVar9,uVar10,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<ulong,_Request>_TryGetValue__
                                 ,0);
                    *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa0) = lVar9;
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_031e5338();
                  }
                  FUN_06ae0a94(&local_48,uVar6,uVar7,lVar9);
                  lVar5 = *(long *)puVar2;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_031e5338();
                    lVar5 = *(long *)puVar2;
                  }
                  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                  if (lVar5 != 0) {
                    local_48 = *(undefined8 *)(lVar5 + 0x28);
                    lVar5 = *(long *)(puVar1 + 0x38);
                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_031e5338();
                    }
                    uVar6 = FUN_0593e698(lVar5 + 0x20,0);
                    uVar7 = FUN_0593e698(*(long *)(puVar1 + 0x70) + 0x20,0);
                    lVar5 = *(long *)puVar4;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_031e5338(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                    lVar9 = puVar8[0x15];
                    if (lVar9 == 0) {
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_031e5338(lVar5);
                        puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                      }
                      uVar10 = *puVar8;
                      lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                        (*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_ContainsKey__
                                        );
                      FUN_04c83bdc(lVar9,uVar10,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<ulong,_Request>_set_Item__
                                   ,0);
                      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa8) = lVar9;
                    }
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_031e5338();
                    }
                    FUN_06ae0a94(&local_48,uVar6,uVar7,lVar9);
                    lVar5 = *(long *)puVar2;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_031e5338();
                      lVar5 = *(long *)puVar2;
                    }
                    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                    if (lVar5 != 0) {
                      local_48 = *(undefined8 *)(lVar5 + 0x28);
                      lVar5 = *(long *)(puVar1 + 0x38);
                      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                        thunk_FUN_031e5338();
                      }
                      uVar6 = FUN_0593e698(lVar5 + 0x20,0);
                      uVar7 = FUN_0593e698(*(long *)(puVar1 + 0x78) + 0x20,0);
                      lVar5 = *(long *)puVar4;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_031e5338(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                      lVar9 = puVar8[0x16];
                      if (lVar9 == 0) {
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_031e5338(lVar5);
                          puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                        }
                        uVar10 = *puVar8;
                        lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                          (*(undefined8 *)
                                            Method_System_Collections_Generic_Dictionary<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_get_Item__
                                          );
                        FUN_04c839cc(lVar9,uVar10,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>__ctor__
                                     ,0);
                        *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb0) = lVar9;
                      }
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_031e5338();
                      }
                      FUN_06ae0a94(&local_48,uVar6,uVar7,lVar9);
                      lVar5 = *(long *)puVar2;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_031e5338();
                        lVar5 = *(long *)puVar2;
                      }
                      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                      if (lVar5 != 0) {
                        local_48 = *(undefined8 *)(lVar5 + 0x28);
                        lVar5 = *(long *)(puVar1 + 0x38);
                        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_031e5338();
                        }
                        uVar6 = FUN_0593e698(lVar5 + 0x20,0);
                        uVar7 = FUN_0593e698(*(long *)(puVar1 + 0x80) + 0x20,0);
                        lVar5 = *(long *)puVar4;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_031e5338(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                        lVar9 = puVar8[0x17];
                        if (lVar9 == 0) {
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_031e5338(lVar5);
                            puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                          }
                          uVar10 = *puVar8;
                          lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                            (*(undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_Add__
                                            );
                          FUN_04c8365c(lVar9,uVar10,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<uint,_VirtualHeap_PinnedBlob>_TryGetValue__
                                       ,0);
                          *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb8) = lVar9;
                        }
                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                          thunk_FUN_031e5338();
                        }
                        FUN_06ae0a94(&local_48,uVar6,uVar7,lVar9);
                        lVar5 = *(long *)puVar2;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_031e5338();
                          lVar5 = *(long *)puVar2;
                        }
                        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                        if (lVar5 != 0) {
                          local_48 = *(undefined8 *)(lVar5 + 0x28);
                          lVar5 = *(long *)(puVar1 + 0x90);
                          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                            thunk_FUN_031e5338();
                          }
                          uVar6 = FUN_0593e698(lVar5 + 0x20,0);
                          uVar7 = FUN_0593e698(*(long *)(puVar1 + 0x38) + 0x20,0);
                          lVar5 = *(long *)puVar4;
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_031e5338(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          puVar8 = *(undefined8 **)(lVar5 + 0xb8);
                          lVar9 = puVar8[0x18];
                          if (lVar9 == 0) {
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_031e5338(lVar5);
                              puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                            }
                            uVar10 = *puVar8;
                            lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                              (*(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<int,_long>_Add__
                                              );
                            FUN_04c8634c(lVar9,uVar10,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>__ctor__
                                         ,0);
                            *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc0) = lVar9;
                          }
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_031e5338();
                          }
                          FUN_06ae0a94(&local_48,uVar6,uVar7,lVar9);
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


