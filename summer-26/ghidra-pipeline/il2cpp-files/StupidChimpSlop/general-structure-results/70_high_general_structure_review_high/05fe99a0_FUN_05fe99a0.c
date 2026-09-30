/*
FUNCTION_NAME: FUN_05fe99a0
ENTRY_POINT: 05fe99a0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_12;frame_or_lifecycle_behavior
*/


void FUN_05fe99a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_0664a2e0;
  if ((DAT_06a5e1eb & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_0664a2e0);
    FUN_02d4dc40(PTR_DAT_0664a8d0);
    FUN_02d4dc40(Method_UnityEngine_UIElements_BaseRuntimePanel_<>c_<_cctor>b__51_0__);
    FUN_02d4dc40(
                Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_<>c_<_ctor>b__46_0__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_BaseTreeViewController_<GetAllItemIds>d__23_System_Collections_IEnumerator_Reset__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_BaseTreeViewController_<GetChildrenIdsByIndex>d__41_System_Collections_IEnumerator_Reset__
                );
    FUN_02d4dc40(Method_UnityEngine_UIElements_BaseVerticalCollectionView_<>c_<_ctor>b__179_1__);
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_BaseVerticalCollectionView_<>c__DisplayClass182_0_<GetRootElementForId>b__0__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_BaseVerticalCollectionView_<get_selectedItems>d__88_System_Collections_IEnumerator_Reset__
                );
    FUN_02d4dc40(Method_System_Threading_Tasks_BeginEndAwaitableAdapter_<>c_<_cctor>b__2_0__);
    FUN_02d4dc40(
                Method_TMPro_Examples_Benchmark01_<Start>d__10_System_Collections_IEnumerator_Reset__
                );
    FUN_02d4dc40(
                Method_TMPro_Examples_Benchmark01_UGUI_<Start>d__10_System_Collections_IEnumerator_Reset__
                );
    FUN_02d4dc40(Method_UnityEngine_UIElements_DataBindingUtility_<>c_<_cctor>b__23_0__);
    FUN_02d4dc40(Method_UnityEngine_UIElements_UIR_BestFitAllocator_BlockPool_CreateBlock__);
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_UniTaskExtensions_AttachExternalCancellationSource_CancellationCallback__
                );
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource_Continuation__
                );
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource_Continuation__
                );
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_UnityAsyncExtensions_AssetBundleRequestConfiguredSource_Continuation__
                );
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_Continuation__
                );
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_Continuation__
                );
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter_GetResult__
                );
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_Continuation__
                );
    FUN_02d4dc40(Method_Photon_Voice_Unity_UnityAudioOut_<>c_<OutCreate>b__5_0__);
    FUN_02d4dc40(Method_Cysharp_Threading_Tasks_UnityBindingExtensions_<BindToCore>d__2_MoveNext__);
    FUN_02d4dc40(Method_Cysharp_Threading_Tasks_UnityBindingExtensions_<BindToCore>d__9_MoveNext__);
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator_Invoke__
                );
    FUN_02d4dc40(Method_Cysharp_Threading_Tasks_UniTask_<>c__DisplayClass61_0_<Action>b__0__);
    DAT_06a5e1eb = 1;
  }
  lVar5 = *(long *)puVar2;
  local_48 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = Method_Cysharp_Threading_Tasks_UniTask_<>c__DisplayClass61_0_<Action>b__0__;
  puVar1 = PTR_DAT_066462a0;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 != 0) {
    local_48 = *(undefined8 *)(lVar5 + 0x28);
    lVar5 = *(long *)(PTR_DAT_066462a0 + 0x48);
    if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar6 = FUN_050121a8(lVar5 + 0x20,0);
    uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x28) + 0x20,0);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar5);
      lVar5 = *(long *)puVar4;
    }
    puVar3 = PTR_DAT_0664a8d0;
    puVar9 = *(undefined8 **)(lVar5 + 0xb8);
    lVar10 = puVar9[0x19];
    if (lVar10 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dabd98(lVar5);
        puVar9 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar11 = *puVar9;
      lVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_UnityEngine_UIElements_UIR_BestFitAllocator_BlockPool_CreateBlock__
                                 );
      FUN_03e77a98(lVar10,uVar11,
                   *(undefined8 *)
                    Method_Cysharp_Threading_Tasks_UniTaskExtensions_AttachExternalCancellationSource_CancellationCallback__
                   ,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 200);
      *plVar8 = lVar10;
      thunk_FUN_02dc1ef0(plVar8,lVar10);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05fe765c(&local_48,uVar6,uVar7,lVar10);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 != 0) {
      local_48 = *(undefined8 *)(lVar5 + 0x28);
      lVar5 = *(long *)(puVar1 + 0x48);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar6 = FUN_050121a8(lVar5 + 0x20,0);
      uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x30) + 0x20,0);
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dabd98(lVar5);
        lVar5 = *(long *)puVar4;
      }
      puVar9 = *(undefined8 **)(lVar5 + 0xb8);
      lVar10 = puVar9[0x1a];
      if (lVar10 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dabd98(lVar5);
          puVar9 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
        }
        uVar11 = *puVar9;
        lVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                     Method_UnityEngine_UIElements_BaseTreeViewController_<GetChildrenIdsByIndex>d__41_System_Collections_IEnumerator_Reset__
                                   );
        FUN_03e77ff4(lVar10,uVar11,
                     *(undefined8 *)
                      Method_Cysharp_Threading_Tasks_UnityAsyncExtensions_AssetBundleRequestConfiguredSource_Continuation__
                     ,0);
        plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xd0);
        *plVar8 = lVar10;
        thunk_FUN_02dc1ef0(plVar8,lVar10);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_05fe765c(&local_48,uVar6,uVar7,lVar10);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 != 0) {
        local_48 = *(undefined8 *)(lVar5 + 0x28);
        lVar5 = *(long *)(puVar1 + 0x48);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar6 = FUN_050121a8(lVar5 + 0x20,0);
        uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x88) + 0x20,0);
        lVar5 = *(long *)puVar4;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dabd98(lVar5);
          lVar5 = *(long *)puVar4;
        }
        puVar9 = *(undefined8 **)(lVar5 + 0xb8);
        lVar10 = puVar9[0x1b];
        if (lVar10 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02dabd98(lVar5);
            puVar9 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
          }
          uVar11 = *puVar9;
          lVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                       Method_UnityEngine_UIElements_BaseRuntimePanel_<>c_<_cctor>b__51_0__
                                     );
          FUN_03e77c20(lVar10,uVar11,
                       *(undefined8 *)
                        Method_Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_Continuation__
                       ,0);
          plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xd8);
          *plVar8 = lVar10;
          thunk_FUN_02dc1ef0(plVar8,lVar10);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_05fe765c(&local_48,uVar6,uVar7,lVar10);
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 != 0) {
          local_48 = *(undefined8 *)(lVar5 + 0x28);
          lVar5 = *(long *)(puVar1 + 0x48);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar6 = FUN_050121a8(lVar5 + 0x20,0);
          uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x38) + 0x20,0);
          lVar5 = *(long *)puVar4;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02dabd98(lVar5);
            lVar5 = *(long *)puVar4;
          }
          puVar9 = *(undefined8 **)(lVar5 + 0xb8);
          lVar10 = puVar9[0x1c];
          if (lVar10 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02dabd98(lVar5);
              puVar9 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
            }
            uVar11 = *puVar9;
            lVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                         Method_UnityEngine_UIElements_BaseVerticalCollectionView_<>c__DisplayClass182_0_<GetRootElementForId>b__0__
                                       );
            FUN_03e77da8(lVar10,uVar11,
                         *(undefined8 *)
                          Method_Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_Continuation__
                         ,0);
            plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xe0);
            *plVar8 = lVar10;
            thunk_FUN_02dc1ef0(plVar8,lVar10);
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_05fe765c(&local_48,uVar6,uVar7,lVar10);
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar5 = *(long *)puVar2;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar5 != 0) {
            local_48 = *(undefined8 *)(lVar5 + 0x28);
            lVar5 = *(long *)(puVar1 + 0x48);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar6 = FUN_050121a8(lVar5 + 0x20,0);
            uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x68) + 0x20,0);
            lVar5 = *(long *)puVar4;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02dabd98(lVar5);
              lVar5 = *(long *)puVar4;
            }
            puVar9 = *(undefined8 **)(lVar5 + 0xb8);
            lVar10 = puVar9[0x1d];
            if (lVar10 == 0) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02dabd98(lVar5);
                puVar9 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
              }
              uVar11 = *puVar9;
              lVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                           Method_UnityEngine_UIElements_BaseVerticalCollectionView_<>c_<_ctor>b__179_1__
                                         );
              FUN_03e77e6c(lVar10,uVar11,
                           *(undefined8 *)
                            Method_Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter_GetResult__
                           ,0);
              plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xe8);
              *plVar8 = lVar10;
              thunk_FUN_02dc1ef0(plVar8,lVar10);
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            FUN_05fe765c(&local_48,uVar6,uVar7,lVar10);
            lVar5 = *(long *)puVar2;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar5 = *(long *)puVar2;
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
            if (lVar5 != 0) {
              local_48 = *(undefined8 *)(lVar5 + 0x28);
              lVar5 = *(long *)(puVar1 + 0x48);
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar6 = FUN_050121a8(lVar5 + 0x20,0);
              uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x18) + 0x20,0);
              lVar5 = *(long *)puVar4;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02dabd98(lVar5);
                lVar5 = *(long *)puVar4;
              }
              puVar9 = *(undefined8 **)(lVar5 + 0xb8);
              lVar10 = puVar9[0x1e];
              if (lVar10 == 0) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02dabd98(lVar5);
                  puVar9 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                }
                uVar11 = *puVar9;
                lVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                             Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_<>c_<_ctor>b__46_0__
                                           );
                FUN_03e77b5c(lVar10,uVar11,
                             *(undefined8 *)
                              Method_Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_Continuation__
                             ,0);
                plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xf0);
                *plVar8 = lVar10;
                thunk_FUN_02dc1ef0(plVar8,lVar10);
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              FUN_05fe765c(&local_48,uVar6,uVar7,lVar10);
              lVar5 = *(long *)puVar2;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar5 = *(long *)puVar2;
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
              if (lVar5 != 0) {
                local_48 = *(undefined8 *)(lVar5 + 0x28);
                lVar5 = *(long *)(puVar1 + 0x48);
                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                uVar6 = FUN_050121a8(lVar5 + 0x20,0);
                uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x40) + 0x20,0);
                lVar5 = *(long *)puVar4;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02dabd98(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                puVar9 = *(undefined8 **)(lVar5 + 0xb8);
                lVar10 = puVar9[0x1f];
                if (lVar10 == 0) {
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02dabd98(lVar5);
                    puVar9 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                  }
                  uVar11 = *puVar9;
                  lVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                               Method_System_Threading_Tasks_BeginEndAwaitableAdapter_<>c_<_cctor>b__2_0__
                                             );
                  FUN_03e783d8(lVar10,uVar11,
                               *(undefined8 *)
                                Method_Photon_Voice_Unity_UnityAudioOut_<>c_<OutCreate>b__5_0__,0);
                  plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xf8);
                  *plVar8 = lVar10;
                  thunk_FUN_02dc1ef0(plVar8,lVar10);
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                FUN_05fe765c(&local_48,uVar6,uVar7,lVar10);
                lVar5 = *(long *)puVar2;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                  lVar5 = *(long *)puVar2;
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                if (lVar5 != 0) {
                  local_48 = *(undefined8 *)(lVar5 + 0x28);
                  lVar5 = *(long *)(puVar1 + 0x48);
                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  uVar6 = FUN_050121a8(lVar5 + 0x20,0);
                  uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x50) + 0x20,0);
                  lVar5 = *(long *)puVar4;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02dabd98(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  puVar9 = *(undefined8 **)(lVar5 + 0xb8);
                  lVar10 = puVar9[0x20];
                  if (lVar10 == 0) {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02dabd98(lVar5);
                      puVar9 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                    }
                    uVar11 = *puVar9;
                    lVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                                 Method_UnityEngine_UIElements_BaseVerticalCollectionView_<get_selectedItems>d__88_System_Collections_IEnumerator_Reset__
                                               );
                    FUN_03e7849c(lVar10,uVar11,
                                 *(undefined8 *)
                                  Method_Cysharp_Threading_Tasks_UnityBindingExtensions_<BindToCore>d__2_MoveNext__
                                 ,0);
                    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                    *(long *)(lVar5 + 0x100) = lVar10;
                    thunk_FUN_02dc1ef0(lVar5 + 0x100,lVar10);
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  FUN_05fe765c(&local_48,uVar6,uVar7,lVar10);
                  lVar5 = *(long *)puVar2;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                    lVar5 = *(long *)puVar2;
                  }
                  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                  if (lVar5 != 0) {
                    local_48 = *(undefined8 *)(lVar5 + 0x28);
                    lVar5 = *(long *)(puVar1 + 0x48);
                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02dabd98();
                    }
                    uVar6 = FUN_050121a8(lVar5 + 0x20,0);
                    uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x70) + 0x20,0);
                    lVar5 = *(long *)puVar4;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02dabd98(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    puVar9 = *(undefined8 **)(lVar5 + 0xb8);
                    lVar10 = puVar9[0x21];
                    if (lVar10 == 0) {
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_02dabd98(lVar5);
                        puVar9 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                      }
                      uVar11 = *puVar9;
                      lVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                      
                                                  Method_TMPro_Examples_Benchmark01_UGUI_<Start>d__10_System_Collections_IEnumerator_Reset__
                                                 );
                      Unity_Collections_LowLevel_Unsafe_UnsafeList<Plane>___ctor
                                (lVar10,uVar11,
                                 *(undefined8 *)
                                  Method_Cysharp_Threading_Tasks_UnityBindingExtensions_<BindToCore>d__9_MoveNext__
                                 ,0);
                      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                      *(long *)(lVar5 + 0x108) = lVar10;
                      thunk_FUN_02dc1ef0(lVar5 + 0x108,lVar10);
                    }
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_02dabd98();
                    }
                    FUN_05fe765c(&local_48,uVar6,uVar7,lVar10);
                    lVar5 = *(long *)puVar2;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02dabd98();
                      lVar5 = *(long *)puVar2;
                    }
                    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                    if (lVar5 != 0) {
                      local_48 = *(undefined8 *)(lVar5 + 0x28);
                      lVar5 = *(long *)(puVar1 + 0x48);
                      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                        thunk_FUN_02dabd98();
                      }
                      uVar6 = FUN_050121a8(lVar5 + 0x20,0);
                      uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x78) + 0x20,0);
                      lVar5 = *(long *)puVar4;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_02dabd98(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      puVar9 = *(undefined8 **)(lVar5 + 0xb8);
                      lVar10 = puVar9[0x22];
                      if (lVar10 == 0) {
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02dabd98(lVar5);
                          puVar9 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                        }
                        uVar11 = *puVar9;
                        lVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                          
                                                  Method_TMPro_Examples_Benchmark01_<Start>d__10_System_Collections_IEnumerator_Reset__
                                                  );
                        FUN_03e780b8(lVar10,uVar11,
                                     *(undefined8 *)
                                      Method_Cysharp_Threading_Tasks_UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator_Invoke__
                                     ,0);
                        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                        *(long *)(lVar5 + 0x110) = lVar10;
                        thunk_FUN_02dc1ef0(lVar5 + 0x110,lVar10);
                      }
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_02dabd98();
                      }
                      FUN_05fe765c(&local_48,uVar6,uVar7,lVar10);
                      lVar5 = *(long *)puVar2;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_02dabd98();
                        lVar5 = *(long *)puVar2;
                      }
                      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                      if (lVar5 != 0) {
                        local_48 = *(undefined8 *)(lVar5 + 0x28);
                        lVar5 = *(long *)(puVar1 + 0x48);
                        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_02dabd98();
                        }
                        uVar6 = FUN_050121a8(lVar5 + 0x20,0);
                        uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x80) + 0x20,0);
                        lVar5 = *(long *)puVar4;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02dabd98(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        puVar9 = *(undefined8 **)(lVar5 + 0xb8);
                        lVar10 = puVar9[0x23];
                        if (lVar10 == 0) {
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_02dabd98(lVar5);
                            puVar9 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                          }
                          uVar11 = *puVar9;
                          lVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_UIElements_BaseTreeViewController_<GetAllItemIds>d__23_System_Collections_IEnumerator_Reset__
                                                  );
                          FUN_03e77ce4(lVar10,uVar11,
                                       *(undefined8 *)
                                        Method_Cysharp_Threading_Tasks_UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource_Continuation__
                                       ,0);
                          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                          *(long *)(lVar5 + 0x118) = lVar10;
                          thunk_FUN_02dc1ef0(lVar5 + 0x118,lVar10);
                        }
                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                          thunk_FUN_02dabd98();
                        }
                        FUN_05fe765c(&local_48,uVar6,uVar7,lVar10);
                        lVar5 = *(long *)puVar2;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02dabd98();
                          lVar5 = *(long *)puVar2;
                        }
                        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                        if (lVar5 != 0) {
                          local_48 = *(undefined8 *)(lVar5 + 0x28);
                          lVar5 = *(long *)(puVar1 + 0x90);
                          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                            thunk_FUN_02dabd98();
                          }
                          uVar6 = FUN_050121a8(lVar5 + 0x20,0);
                          uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x48) + 0x20,0);
                          lVar5 = *(long *)puVar4;
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_02dabd98(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          puVar9 = *(undefined8 **)(lVar5 + 0xb8);
                          lVar10 = puVar9[0x24];
                          if (lVar10 == 0) {
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_02dabd98(lVar5);
                              puVar9 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
                            }
                            uVar11 = *puVar9;
                            lVar10 = thunk_FUN_02d8a638(*(undefined8 *)
                                                                                                                  
                                                  Method_UnityEngine_UIElements_DataBindingUtility_<>c_<_cctor>b__23_0__
                                                  );
                            FUN_03e7a740(lVar10,uVar11,
                                         *(undefined8 *)
                                          Method_Cysharp_Threading_Tasks_UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource_Continuation__
                                         ,0);
                            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                            *(long *)(lVar5 + 0x120) = lVar10;
                            thunk_FUN_02dc1ef0(lVar5 + 0x120,lVar10);
                          }
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_02dabd98();
                          }
                          FUN_05fe765c(&local_48,uVar6,uVar7,lVar10);
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
  FUN_02d4dee8();
}


