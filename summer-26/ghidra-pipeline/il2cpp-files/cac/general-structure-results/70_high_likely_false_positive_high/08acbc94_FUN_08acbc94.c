/*
FUNCTION_NAME: FUN_08acbc94
ENTRY_POINT: 08acbc94
PROGRAM: cac-libil2cpp.so
SCORE: 83
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_21
*/


void FUN_08acbc94(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,uint param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [16];
  undefined8 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((DAT_096a521e & 1) == 0) {
    FUN_03f13384(PTR_DAT_0910b5c0);
    FUN_03f13384(PTR_DAT_091abfe0);
    FUN_03f13384(Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var);
    FUN_03f13384(Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var);
    FUN_03f13384(
                Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_var
                );
    FUN_03f13384(
                Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter_var
                );
    FUN_03f13384(Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var);
    FUN_03f13384(
                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                );
    FUN_03f13384(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_TypeInfo
                );
    FUN_03f13384(UnityEngine_UIElements_WorldSpaceInput_PickResult_var);
    FUN_03f13384(UnityEngine_XR_ARSubsystems_XRAnchorSubsystemDescriptor_Cinfo_var);
    FUN_03f13384(
                UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyTransformer_OrderedTransformation_var
                );
    FUN_03f13384(System_Collections_Generic_HashSet<UIButton>_TypeInfo);
    DAT_096a521e = 1;
  }
  puVar4 = 
  Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_var;
  puVar3 = Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var;
  puVar2 = Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var;
  puVar1 = 
  Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var;
  if (0x3000b < (int)param_6) {
    if (param_6 < 0x50004) {
      if (0x40006 < (int)param_6) {
        if (0x4ffff < (int)param_6) {
          if ((int)param_6 < 0x50002) {
            if (param_6 == 0x50000) {
              puVar8 = (undefined8 *)
                       FUN_060ff1dc(param_5 + 0x18,
                                    *(undefined8 *)
                                     Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter_var
                                   );
              if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
                thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
              }
              FUN_08a06874(&local_50,0);
              puVar8[2] = CONCAT44(uStack_3c,local_40);
              puVar8[1] = CONCAT44(uStack_44,uStack_48);
              *puVar8 = CONCAT44(uStack_4c,local_50);
              return;
            }
            if (param_6 == 0x50001) {
              lVar6 = FUN_060ff1dc(param_5 + 0x18,
                                   *(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter_var
                                  );
              if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
                thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
              }
              auVar12 = FUN_08a068fc(0);
              *(undefined1 (*) [16])(lVar6 + 0x18) = auVar12;
              return;
            }
          }
          else {
            if (param_6 == 0x50002) {
              lVar6 = FUN_060ff1dc(param_5 + 0x18,
                                   *(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter_var
                                  );
              if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
                thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
              }
              FUN_08a06aec(&local_50,0);
              *(ulong *)(lVar6 + 0x30) = CONCAT44(uStack_44,uStack_48);
              *(ulong *)(lVar6 + 0x28) = CONCAT44(uStack_4c,local_50);
              *(undefined4 *)(lVar6 + 0x38) = local_40;
              return;
            }
            if (param_6 == 0x50003) {
              lVar6 = FUN_060ff1dc(param_5 + 0x18,
                                   *(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter_var
                                  );
              if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
                thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
              }
              FUN_08a06d54(&local_50,0);
              *(ulong *)(lVar6 + 0x44) = CONCAT44(uStack_44,uStack_48);
              *(ulong *)(lVar6 + 0x3c) = CONCAT44(uStack_4c,local_50);
              *(ulong *)(lVar6 + 0x4c) = CONCAT44(uStack_3c,local_40);
              return;
            }
          }
          goto switchD_08acc3fc_default;
        }
        if (0x40008 < (int)param_6) {
          if (param_6 == 0x40009) {
            lVar6 = FUN_060ffbc0(param_5 + 0x28,
                                 *(undefined8 *)
                                  Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                                );
            if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
              thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
            }
            auVar13 = FUN_08a052ac(0);
            uVar10 = *(undefined8 *)puVar2;
            *(undefined1 (*) [12])(lVar6 + 0x30) = auVar13;
            lVar6 = FUN_060ffbc0(param_5 + 0x28,uVar10);
            auVar13 = UnityEngine_UI_Selectable__get_interactable(0);
            uVar10 = *(undefined8 *)puVar2;
            *(undefined1 (*) [12])(lVar6 + 0x3c) = auVar13;
            lVar6 = FUN_060ffbc0(param_5 + 0x28,uVar10);
            uVar10 = FUN_08a053ac(0);
            uVar7 = *(undefined8 *)puVar2;
            *(undefined8 *)(lVar6 + 0x48) = uVar10;
            lVar6 = FUN_060ffbc0(param_5 + 0x28,uVar7);
            goto LAB_08accff4;
          }
          if (param_6 != 0x4000a) goto switchD_08acc3fc_default;
          lVar6 = FUN_060fe2e8(param_5,*(undefined8 *)
                                        Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                              );
          if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
            thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
          }
          uVar11 = FUN_08a07558(0);
          uVar10 = *(undefined8 *)puVar3;
          *(undefined4 *)(lVar6 + 0x6c) = uVar11;
          *(undefined4 *)(lVar6 + 0x70) = param_2;
          *(undefined4 *)(lVar6 + 0x74) = param_3;
          *(undefined4 *)(lVar6 + 0x78) = param_4;
          lVar6 = FUN_060fe2e8(param_5,uVar10);
          goto LAB_08acc56c;
        }
        if (param_6 == 0x40007) {
          lVar6 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
            thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
          }
          uVar10 = FUN_08a0670c(0);
          uVar7 = *(undefined8 *)puVar1;
          *(undefined8 *)(lVar6 + 0xac) = uVar10;
          lVar6 = FUN_060fe7e4(param_5 + 8,uVar7);
          uVar10 = FUN_08a06694(0);
          uVar7 = *(undefined8 *)puVar1;
          *(undefined8 *)(lVar6 + 0xa4) = uVar10;
          lVar6 = FUN_060fe7e4(param_5 + 8,uVar7);
          uVar10 = FUN_08a065a4(0);
          uVar7 = *(undefined8 *)puVar1;
          *(undefined8 *)(lVar6 + 0x94) = uVar10;
          lVar6 = FUN_060fe7e4(param_5 + 8,uVar7);
          goto LAB_08accaec;
        }
        if (param_6 != 0x40008) goto switchD_08acc3fc_default;
        puVar8 = (undefined8 *)
                 FUN_060ff6d8(param_5 + 0x20,
                              *(undefined8 *)
                               Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_var
                             );
        uVar10 = *puVar8;
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar7 = FUN_08a06b74(0);
        puVar1 = 
        UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyTransformer_OrderedTransformation_var;
        FUN_04bee5a4(uVar10,uVar7,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyTransformer_OrderedTransformation_var
                    );
        lVar6 = FUN_060ff6d8(param_5 + 0x20,*(undefined8 *)puVar4);
        uVar7 = *(undefined8 *)(lVar6 + 8);
        uVar10 = FUN_08a06bec(0);
        FUN_04bee5a4(uVar7,uVar10,*(undefined8 *)puVar1);
        lVar6 = FUN_060ff6d8(param_5 + 0x20,*(undefined8 *)puVar4);
        uVar7 = *(undefined8 *)(lVar6 + 0x10);
        uVar10 = FUN_08a06c64(0);
        FUN_04bee538(uVar7,uVar10,
                     *(undefined8 *)
                      UnityEngine_XR_ARSubsystems_XRAnchorSubsystemDescriptor_Cinfo_var);
        lVar6 = FUN_060ff6d8(param_5 + 0x20,*(undefined8 *)puVar4);
        uVar10 = *(undefined8 *)(lVar6 + 0x18);
LAB_08acc878:
        uVar7 = FUN_08a06cdc(0);
        FUN_04bee4e4(uVar10,uVar7,
                     *(undefined8 *)UnityEngine_UIElements_WorldSpaceInput_PickResult_var);
        goto LAB_08acccd4;
      }
      if ((int)param_6 < 0x40003) {
        if (param_6 == 0x40000) {
          return;
        }
        if (param_6 == 0x40001) {
          lVar6 = FUN_060ffbc0(param_5 + 0x28,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                              );
          if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
            thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
          }
          auVar13 = FUN_08a052ac(0);
          uVar10 = *(undefined8 *)puVar2;
          *(undefined1 (*) [12])(lVar6 + 0x30) = auVar13;
          lVar6 = FUN_060ffbc0(param_5 + 0x28,uVar10);
          goto LAB_08accf10;
        }
        if (param_6 == 0x40002) {
          lVar6 = FUN_060ffbc0(param_5 + 0x28,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                              );
          if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
            thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
          }
          uVar11 = FUN_08a05878(0);
          uVar10 = *(undefined8 *)puVar2;
          *(undefined4 *)(lVar6 + 0xa4) = uVar11;
          *(undefined4 *)(lVar6 + 0xa8) = param_2;
          *(undefined4 *)(lVar6 + 0xac) = param_3;
          *(undefined4 *)(lVar6 + 0xb0) = param_4;
          lVar6 = FUN_060ffbc0(param_5 + 0x28,uVar10);
          uVar11 = FUN_08a05784(0);
          uVar10 = *(undefined8 *)puVar2;
          *(undefined4 *)(lVar6 + 0x94) = uVar11;
          *(undefined4 *)(lVar6 + 0x98) = param_2;
          *(undefined4 *)(lVar6 + 0x9c) = param_3;
          *(undefined4 *)(lVar6 + 0xa0) = param_4;
          lVar6 = FUN_060ffbc0(param_5 + 0x28,uVar10);
          uVar11 = FUN_08a054ac(0);
          uVar10 = *(undefined8 *)puVar2;
          *(undefined4 *)(lVar6 + 100) = uVar11;
          *(undefined4 *)(lVar6 + 0x68) = param_2;
          *(undefined4 *)(lVar6 + 0x6c) = param_3;
          *(undefined4 *)(lVar6 + 0x70) = param_4;
          lVar6 = FUN_060ffbc0(param_5 + 0x28,uVar10);
          goto LAB_08acce3c;
        }
        goto switchD_08acc3fc_default;
      }
      if (0x40004 < (int)param_6) {
        if (param_6 != 0x40005) {
          if (param_6 != 0x40006) goto switchD_08acc3fc_default;
          lVar6 = FUN_060fe7e4(param_5 + 8,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                              );
          if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
            thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
          }
          uVar10 = FUN_08a0625c(0);
          uVar7 = *(undefined8 *)puVar1;
          *(undefined8 *)(lVar6 + 0x6c) = uVar10;
          lVar6 = FUN_060fe7e4(param_5 + 8,uVar7);
          uVar10 = FUN_08a061e4(0);
          uVar7 = *(undefined8 *)puVar1;
          *(undefined8 *)(lVar6 + 100) = uVar10;
          lVar6 = FUN_060fe7e4(param_5 + 8,uVar7);
          uVar10 = FUN_08a060f4(0);
          uVar7 = *(undefined8 *)puVar1;
          *(undefined8 *)(lVar6 + 0x54) = uVar10;
          lVar6 = FUN_060fe7e4(param_5 + 8,uVar7);
          goto LAB_08acc4e8;
        }
        lVar6 = FUN_060fe7e4(param_5 + 8,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        uVar11 = FUN_08a05d3c(0);
        uVar10 = *(undefined8 *)puVar1;
        *(undefined4 *)(lVar6 + 0x34) = uVar11;
        lVar6 = FUN_060fe7e4(param_5 + 8,uVar10);
        uVar11 = FUN_08a05db4(0);
        uVar10 = *(undefined8 *)puVar1;
        *(undefined4 *)(lVar6 + 0x38) = uVar11;
        lVar6 = FUN_060fe7e4(param_5 + 8,uVar10);
        goto LAB_08acc9f8;
      }
      if (param_6 != 0x40003) {
        if (param_6 != 0x40004) goto switchD_08acc3fc_default;
        lVar6 = FUN_060fe7e4(param_5 + 8,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        uVar11 = FUN_08a059e4(0);
        uVar10 = *(undefined8 *)puVar1;
        *(undefined4 *)(lVar6 + 0x18) = uVar11;
        lVar6 = FUN_060fe7e4(param_5 + 8,uVar10);
        uVar11 = FUN_08a05800(0);
        uVar10 = *(undefined8 *)puVar1;
        *(undefined4 *)(lVar6 + 0x14) = uVar11;
        lVar6 = FUN_060fe7e4(param_5 + 8,uVar10);
        uVar11 = FUN_08a05618(0);
        uVar10 = *(undefined8 *)puVar1;
        *(undefined4 *)(lVar6 + 0xc) = uVar11;
        lVar6 = FUN_060fe7e4(param_5 + 8,uVar10);
        goto LAB_08acc144;
      }
      lVar6 = FUN_060ffbc0(param_5 + 0x28,
                           *(undefined8 *)
                            Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                          );
      if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
      }
      uVar10 = FUN_08a058f4(0);
      uVar7 = *(undefined8 *)puVar2;
      *(undefined8 *)(lVar6 + 0xb4) = uVar10;
      lVar6 = FUN_060ffbc0(param_5 + 0x28,uVar7);
      uVar10 = FUN_08a0596c(0);
      uVar7 = *(undefined8 *)puVar2;
      *(undefined8 *)(lVar6 + 0xbc) = uVar10;
      lVar6 = FUN_060ffbc0(param_5 + 0x28,uVar7);
      uVar10 = FUN_08a055a0(0);
      uVar7 = *(undefined8 *)puVar2;
      *(undefined8 *)(lVar6 + 0x7c) = uVar10;
      lVar6 = FUN_060ffbc0(param_5 + 0x28,uVar7);
    }
    else {
      if ((int)param_6 < 0x60003) {
        if (param_6 == 0x60000) {
          puVar8 = (undefined8 *)
                   FUN_060ff6d8(param_5 + 0x20,
                                *(undefined8 *)
                                 Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_var
                               );
          uVar10 = *puVar8;
          if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar7 = FUN_08a06b74(0);
        }
        else {
          if (param_6 != 0x60001) {
            if (param_6 != 0x60002) goto switchD_08acc3fc_default;
            lVar6 = FUN_060ff6d8(param_5 + 0x20,
                                 *(undefined8 *)
                                  Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_var
                                );
            uVar10 = *(undefined8 *)(lVar6 + 0x10);
            if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar7 = FUN_08a06c64(0);
            FUN_04bee538(uVar10,uVar7,
                         *(undefined8 *)
                          UnityEngine_XR_ARSubsystems_XRAnchorSubsystemDescriptor_Cinfo_var);
            goto LAB_08acccd4;
          }
          lVar6 = FUN_060ff6d8(param_5 + 0x20,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_var
                              );
          uVar10 = *(undefined8 *)(lVar6 + 8);
          if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar7 = FUN_08a06bec(0);
        }
        FUN_04bee5a4(uVar10,uVar7,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyTransformer_OrderedTransformation_var
                    );
LAB_08acccd4:
        pauVar9 = (undefined1 (*) [16])(param_5 + 0x48);
        *(undefined8 *)*pauVar9 = 0;
        uVar10 = 0;
        goto LAB_08accce0;
      }
      switch(param_6) {
      case 0x70000:
        puVar5 = (undefined4 *)
                 FUN_060ffbc0(param_5 + 0x28,
                              *(undefined8 *)
                               Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                             );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        uVar11 = UnityEngine_UI_Selectable__get_spriteState(0);
        goto LAB_08acbdec;
      case 0x70001:
        lVar6 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        FUN_08a0522c(&local_50,0);
        puVar8 = (undefined8 *)(lVar6 + 0x10);
        *(ulong *)(lVar6 + 0x18) = CONCAT44(uStack_44,uStack_48);
        *(ulong *)(lVar6 + 0x10) = CONCAT44(uStack_4c,local_50);
        *(ulong *)(lVar6 + 0x28) = CONCAT44(uStack_34,uStack_38);
        *(ulong *)(lVar6 + 0x20) = CONCAT44(uStack_3c,local_40);
LAB_08accfb4:
        thunk_FUN_03f86000(puVar8,0);
        return;
      case 0x70002:
        lVar6 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        auVar13 = FUN_08a052ac(0);
        *(undefined1 (*) [12])(lVar6 + 0x30) = auVar13;
        return;
      case 0x70003:
        lVar6 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
LAB_08accf10:
        auVar13 = UnityEngine_UI_Selectable__get_interactable(0);
        *(undefined1 (*) [12])(lVar6 + 0x3c) = auVar13;
        return;
      case 0x70004:
        lVar6 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        uVar10 = FUN_08a053ac(0);
        *(undefined8 *)(lVar6 + 0x48) = uVar10;
        return;
      case 0x70005:
        lVar6 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
LAB_08accff4:
        FUN_08a05424(&local_50,0);
        *(ulong *)(lVar6 + 0x58) = CONCAT44(uStack_44,uStack_48);
        *(ulong *)(lVar6 + 0x50) = CONCAT44(uStack_4c,local_50);
        *(undefined4 *)(lVar6 + 0x60) = local_40;
        return;
      case 0x70006:
        lVar6 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        uVar11 = FUN_08a054ac(0);
        *(undefined4 *)(lVar6 + 100) = uVar11;
        *(undefined4 *)(lVar6 + 0x68) = param_2;
        *(undefined4 *)(lVar6 + 0x6c) = param_3;
        *(undefined4 *)(lVar6 + 0x70) = param_4;
        return;
      case 0x70007:
        lVar6 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        break;
      case 0x70008:
        lVar6 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        uVar10 = FUN_08a055a0(0);
        goto LAB_08acd124;
      case 0x70009:
        lVar6 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
LAB_08acce3c:
        uVar11 = FUN_08a05690(0);
        *(undefined4 *)(lVar6 + 0x84) = uVar11;
        *(undefined4 *)(lVar6 + 0x88) = param_2;
        *(undefined4 *)(lVar6 + 0x8c) = param_3;
        *(undefined4 *)(lVar6 + 0x90) = param_4;
        return;
      case 0x7000a:
        lVar6 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        uVar11 = FUN_08a05784(0);
        *(undefined4 *)(lVar6 + 0x94) = uVar11;
        *(undefined4 *)(lVar6 + 0x98) = param_2;
        *(undefined4 *)(lVar6 + 0x9c) = param_3;
        *(undefined4 *)(lVar6 + 0xa0) = param_4;
        return;
      case 0x7000b:
        lVar6 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        uVar11 = FUN_08a05878(0);
        *(undefined4 *)(lVar6 + 0xa4) = uVar11;
        *(undefined4 *)(lVar6 + 0xa8) = param_2;
        *(undefined4 *)(lVar6 + 0xac) = param_3;
        *(undefined4 *)(lVar6 + 0xb0) = param_4;
        return;
      case 0x7000c:
        lVar6 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        uVar10 = FUN_08a058f4(0);
        *(undefined8 *)(lVar6 + 0xb4) = uVar10;
        return;
      case 0x7000d:
        lVar6 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        uVar10 = FUN_08a0596c(0);
        *(undefined8 *)(lVar6 + 0xbc) = uVar10;
        return;
      case 0x7000e:
        lVar6 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        uVar11 = FUN_08a064b4(0);
        *(undefined4 *)(lVar6 + 0xc4) = uVar11;
        return;
      case 0x7000f:
        lVar6 = FUN_060ffbc0(param_5 + 0x28,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncOperationConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        uVar11 = FUN_08a0652c(0);
        *(undefined4 *)(lVar6 + 200) = uVar11;
        return;
      default:
        if (param_6 != 0x60003) goto switchD_08acc3fc_default;
        lVar6 = FUN_060ff6d8(param_5 + 0x20,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_var
                            );
        uVar10 = *(undefined8 *)(lVar6 + 0x18);
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        goto LAB_08acc878;
      }
    }
    uVar10 = FUN_08a05528(0);
LAB_08accf60:
    *(undefined8 *)(lVar6 + 0x74) = uVar10;
    return;
  }
  if (0x2ffff < (int)param_6) {
    if ((int)param_6 < 0x30006) {
      if ((int)param_6 < 0x30003) {
        if (param_6 == 0x30000) {
          puVar8 = (undefined8 *)
                   FUN_060fece0(param_5 + 0x10,
                                *(undefined8 *)
                                 Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                               );
          if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
            thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
          }
          FUN_08a05b4c(&local_50,0);
          puVar8[2] = CONCAT44(uStack_3c,local_40);
          puVar8[1] = CONCAT44(uStack_44,uStack_48);
          *puVar8 = CONCAT44(uStack_4c,local_50);
          goto LAB_08accfb4;
        }
        if (param_6 == 0x30001) {
          lVar6 = FUN_060fece0(param_5 + 0x10,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                              );
          if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
            thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
          }
          uVar11 = FUN_08a06978(0);
          *(undefined4 *)(lVar6 + 0x18) = uVar11;
          return;
        }
        if (param_6 == 0x30002) {
          lVar6 = FUN_060fece0(param_5 + 0x10,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                              );
          if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
            thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
          }
          uVar11 = FUN_08a06ddc(0);
          *(undefined4 *)(lVar6 + 0x1c) = uVar11;
          *(undefined4 *)(lVar6 + 0x20) = param_2;
          *(undefined4 *)(lVar6 + 0x24) = param_3;
          *(undefined4 *)(lVar6 + 0x28) = param_4;
          return;
        }
      }
      else {
        if (param_6 == 0x30003) {
          lVar6 = FUN_060fece0(param_5 + 0x10,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                              );
          if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
            thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
          }
          uVar11 = FUN_08a0702c(0);
          *(undefined4 *)(lVar6 + 0x2c) = uVar11;
          return;
        }
        if (param_6 == 0x30004) {
          lVar6 = FUN_060fece0(param_5 + 0x10,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                              );
          if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
            thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
          }
          uVar11 = FUN_08a07118(0);
          goto LAB_08acc6b4;
        }
        if (param_6 == 0x30005) {
          lVar6 = FUN_060fece0(param_5 + 0x10,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                              );
          if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
            thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
          }
          uVar11 = FUN_08a07190(0);
          *(undefined4 *)(lVar6 + 0x34) = uVar11;
          return;
        }
      }
    }
    else if ((int)param_6 < 0x30009) {
      if (param_6 == 0x30006) {
        lVar6 = FUN_060fece0(param_5 + 0x10,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        uVar11 = FUN_08a07208(0);
        *(undefined4 *)(lVar6 + 0x38) = uVar11;
        return;
      }
      if (param_6 == 0x30007) {
        lVar6 = FUN_060fece0(param_5 + 0x10,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        uVar11 = FUN_08a07280(0);
        *(undefined4 *)(lVar6 + 0x3c) = uVar11;
        return;
      }
      if (param_6 == 0x30008) {
        lVar6 = FUN_060fece0(param_5 + 0x10,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        uVar11 = FUN_08a072f8(0);
        *(undefined4 *)(lVar6 + 0x40) = uVar11;
        return;
      }
    }
    else {
      if (param_6 == 0x30009) {
        lVar6 = FUN_060fece0(param_5 + 0x10,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        uVar11 = FUN_08a07370(0);
        *(undefined4 *)(lVar6 + 0x44) = uVar11;
        return;
      }
      if (param_6 == 0x3000a) {
        lVar6 = FUN_060fece0(param_5 + 0x10,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        FUN_08a0745c(&local_50,0);
        *(ulong *)(lVar6 + 0x50) = CONCAT44(uStack_44,uStack_48);
        *(ulong *)(lVar6 + 0x48) = CONCAT44(uStack_4c,local_50);
        *(undefined4 *)(lVar6 + 0x58) = local_40;
        return;
      }
      if (param_6 == 0x3000b) {
        lVar6 = FUN_060fece0(param_5 + 0x10,
                             *(undefined8 *)
                              Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestConfiguredSource_var
                            );
        if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
        }
        uVar11 = FUN_08a07644(0);
        *(undefined4 *)(lVar6 + 0x5c) = uVar11;
        return;
      }
    }
switchD_08acc3fc_default:
    local_50 = param_6;
    uVar10 = thunk_FUN_03f4e2c4(*(undefined8 *)
                                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_TypeInfo
                                ,&local_50);
    uVar10 = FUN_0731d5f8(*(undefined8 *)System_Collections_Generic_HashSet<UIButton>_TypeInfo,
                          uVar10,0);
    if (*(int *)(*(long *)PTR_DAT_0910b5c0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_0910b5c0);
    }
    FUN_087929a4(uVar10,0);
    return;
  }
  switch(param_6) {
  case 0x20000:
    puVar5 = (undefined4 *)
             FUN_060fe7e4(param_5 + 8,
                          *(undefined8 *)
                           Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                         );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar11 = FUN_08a05048(0);
    *puVar5 = uVar11;
    break;
  case 0x20001:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar11 = FUN_08a050c0(0);
    *(undefined4 *)(lVar6 + 4) = uVar11;
    break;
  case 0x20002:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar11 = FUN_08a05138(0);
    *(undefined4 *)(lVar6 + 8) = uVar11;
    break;
  case 0x20003:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar11 = FUN_08a05618(0);
    *(undefined4 *)(lVar6 + 0xc) = uVar11;
    break;
  case 0x20004:
                    /* try { // try from 08acd284 to 08bcd32b has its CatchHandler @ 08acd284
                       catch() { ... } // from try @ 08acd284 with catch @ 08acd284
                       catch() { ... } // from try @ 08acd350 with catch @ 08acd284
                       catch() { ... } // from try @ 08acd3bc with catch @ 08acd284
                       catch() { ... } // from try @ 08acd3e8 with catch @ 08acd284 */
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
LAB_08acc144:
    uVar11 = FUN_08a0570c(0);
    *(undefined4 *)(lVar6 + 0x10) = uVar11;
    break;
  case 0x20005:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar11 = FUN_08a05800(0);
    *(undefined4 *)(lVar6 + 0x14) = uVar11;
    break;
  case 0x20006:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar11 = FUN_08a059e4(0);
    *(undefined4 *)(lVar6 + 0x18) = uVar11;
    break;
  case 0x20007:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar10 = FUN_08a05a5c(0);
    *(undefined8 *)(lVar6 + 0x1c) = uVar10;
    break;
  case 0x20008:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar11 = FUN_08a05bd4(0);
    *(undefined4 *)(lVar6 + 0x24) = uVar11;
    break;
  case 0x20009:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
                    /* try { // try from 08acd32c to 08bcd333 has its CatchHandler @ 08acd39c */
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
LAB_08acc9f8:
    uVar10 = FUN_08a05c4c(0);
    *(undefined8 *)(lVar6 + 0x28) = uVar10;
    break;
  case 0x2000a:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar11 = FUN_08a05cc4(0);
LAB_08acc6b4:
    *(undefined4 *)(lVar6 + 0x30) = uVar11;
    return;
  case 0x2000b:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar11 = FUN_08a05d3c(0);
    *(undefined4 *)(lVar6 + 0x34) = uVar11;
    break;
  case 0x2000c:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar11 = FUN_08a05db4(0);
    *(undefined4 *)(lVar6 + 0x38) = uVar11;
    break;
  case 0x2000d:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar11 = FUN_08a05e2c(0);
LAB_08acd828:
    *(undefined4 *)(lVar6 + 0x3c) = uVar11;
    break;
  case 0x2000e:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar10 = FUN_08a05f18(0);
    *(undefined8 *)(lVar6 + 0x40) = uVar10;
    break;
  case 0x2000f:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar11 = FUN_08a05f90(0);
    *(undefined4 *)(lVar6 + 0x48) = uVar11;
    break;
  case 0x20010:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar10 = FUN_08a06008(0);
    *(undefined8 *)(lVar6 + 0x4c) = uVar10;
    break;
  case 0x20011:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar10 = FUN_08a060f4(0);
    *(undefined8 *)(lVar6 + 0x54) = uVar10;
    break;
  case 0x20012:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
LAB_08acc4e8:
    uVar10 = FUN_08a0616c(0);
LAB_08acc4f0:
    *(undefined8 *)(lVar6 + 0x5c) = uVar10;
    break;
  case 0x20013:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar10 = FUN_08a061e4(0);
    *(undefined8 *)(lVar6 + 100) = uVar10;
    break;
  case 0x20014:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar10 = FUN_08a0625c(0);
    *(undefined8 *)(lVar6 + 0x6c) = uVar10;
    break;
  case 0x20015:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar10 = FUN_08a062d4(0);
    goto LAB_08accf60;
  case 0x20016:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar10 = FUN_08a0634c(0);
LAB_08acd124:
    *(undefined8 *)(lVar6 + 0x7c) = uVar10;
    break;
  case 0x20017:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar10 = FUN_08a063c4(0);
    *(undefined8 *)(lVar6 + 0x84) = uVar10;
    break;
  case 0x20018:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
                    /* catch() { ... } // from try @ 08acd3b8 with catch @ 08acd3dc */
                    /* try { // try from 08acd3e0 to 08bcd3e7 has its CatchHandler @ 08acd3f0 */
                    /* try { // try from 08acd3e8 to 08bcd3f3 has its CatchHandler @ 08acd284 */
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 08acd3e0 with catch @ 08acd3f0
                        */
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar10 = FUN_08a0643c(0);
    *(undefined8 *)(lVar6 + 0x8c) = uVar10;
    break;
  case 0x20019:
                    /* try { // try from 08acd344 to 08bcd34f has its CatchHandler @ 08acd398 */
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
                    /* try { // try from 08acd350 to 08bcd3b7 has its CatchHandler @ 08acd284 */
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar10 = FUN_08a065a4(0);
    *(undefined8 *)(lVar6 + 0x94) = uVar10;
    break;
  case 0x2001a:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
LAB_08accaec:
    uVar10 = FUN_08a0661c(0);
    *(undefined8 *)(lVar6 + 0x9c) = uVar10;
    break;
  case 0x2001b:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar10 = FUN_08a06694(0);
    *(undefined8 *)(lVar6 + 0xa4) = uVar10;
    break;
  case 0x2001c:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar10 = FUN_08a0670c(0);
    *(undefined8 *)(lVar6 + 0xac) = uVar10;
    break;
  case 0x2001d:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar11 = FUN_08a06784(0);
    *(undefined4 *)(lVar6 + 0xb4) = uVar11;
    break;
  case 0x2001e:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar10 = FUN_08a067fc(0);
    *(undefined8 *)(lVar6 + 0xb8) = uVar10;
    break;
  case 0x2001f:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar10 = FUN_08a06a74(0);
    *(undefined8 *)(lVar6 + 0xc0) = uVar10;
    break;
  case 0x20020:
    lVar6 = FUN_060fe7e4(param_5 + 8,
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                        );
    if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
    }
    uVar10 = FUN_08a077a4(0);
    *(undefined8 *)(lVar6 + 200) = uVar10;
    break;
  default:
    switch(param_6) {
    case 0x10000:
      puVar5 = (undefined4 *)
               FUN_060fe2e8(param_5,*(undefined8 *)
                                     Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                           );
      if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
      }
      uVar11 = FUN_08a05ad4(0);
LAB_08acbdec:
      *puVar5 = uVar11;
      puVar5[1] = param_2;
      puVar5[2] = param_3;
      puVar5[3] = param_4;
      break;
    case 0x10001:
      lVar6 = FUN_060fe2e8(param_5,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
      }
      uVar10 = FUN_08a05ea4(0);
      *(undefined8 *)(lVar6 + 0x10) = uVar10;
      break;
    case 0x10002:
      lVar6 = FUN_060fe2e8(param_5,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
      }
      uVar10 = FUN_08a06080(0);
      *(undefined8 *)(lVar6 + 0x18) = uVar10;
      break;
    case 0x10003:
      lVar6 = FUN_060fe2e8(param_5,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
      }
      FUN_08a069f0(&local_50,0);
      *(ulong *)(lVar6 + 0x28) = CONCAT44(uStack_44,uStack_48);
      *(ulong *)(lVar6 + 0x20) = CONCAT44(uStack_4c,local_50);
      *(ulong *)(lVar6 + 0x34) = CONCAT44(uStack_38,uStack_3c);
      *(ulong *)(lVar6 + 0x2c) = CONCAT44(local_40,uStack_44);
      break;
    case 0x10004:
      lVar6 = FUN_060fe2e8(param_5,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
      }
      uVar11 = FUN_08a06e58(0);
      goto LAB_08acd828;
    case 0x10005:
      lVar6 = FUN_060fe2e8(param_5,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
      }
      uVar10 = FUN_08a06ecc(0);
      pauVar9 = (undefined1 (*) [16])(lVar6 + 0x40);
      *(undefined8 *)*pauVar9 = uVar10;
      goto LAB_08accce0;
    case 0x10006:
      lVar6 = FUN_060fe2e8(param_5,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
      }
      auVar12 = FUN_08a06f40(0);
      pauVar9 = (undefined1 (*) [16])(lVar6 + 0x48);
      uVar10 = 0;
      *pauVar9 = auVar12;
LAB_08accce0:
      thunk_FUN_03f86000(pauVar9,uVar10);
      return;
    case 0x10007:
      lVar6 = FUN_060fe2e8(param_5,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
      }
      uVar11 = FUN_08a06fb8(0);
      *(undefined4 *)(lVar6 + 0x58) = uVar11;
      break;
    case 0x10008:
      lVar6 = FUN_060fe2e8(param_5,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
      }
      uVar10 = FUN_08a070a4(0);
      goto LAB_08acc4f0;
    case 0x10009:
      lVar6 = FUN_060fe2e8(param_5,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
      }
      uVar11 = FUN_08a073e8(0);
      *(undefined4 *)(lVar6 + 100) = uVar11;
      break;
    case 0x1000a:
      lVar6 = FUN_060fe2e8(param_5,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
      }
      uVar11 = FUN_08a074e4(0);
      *(undefined4 *)(lVar6 + 0x68) = uVar11;
      break;
    case 0x1000b:
      lVar6 = FUN_060fe2e8(param_5,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 08acd344 with catch @ 08acd398
                        */
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 08acd32c with catch @ 08acd39c
                        */
      if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
      }
      uVar11 = FUN_08a07558(0);
      *(undefined4 *)(lVar6 + 0x6c) = uVar11;
      *(undefined4 *)(lVar6 + 0x70) = param_2;
                    /* try { // try from 08acd3b8 to 08bcd3bb has its CatchHandler @ 08acd3dc */
      *(undefined4 *)(lVar6 + 0x74) = param_3;
      *(undefined4 *)(lVar6 + 0x78) = param_4;
                    /* try { // try from 08acd3bc to 08bcd3df has its CatchHandler @ 08acd284 */
      break;
    case 0x1000c:
      lVar6 = FUN_060fe2e8(param_5,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
      }
LAB_08acc56c:
      uVar11 = FUN_08a075d0(0);
      *(undefined4 *)(lVar6 + 0x7c) = uVar11;
      break;
    case 0x1000d:
      lVar6 = FUN_060fe2e8(param_5,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
      }
      uVar11 = FUN_08a076bc(0);
      *(undefined4 *)(lVar6 + 0x80) = uVar11;
      break;
    case 0x1000e:
      lVar6 = FUN_060fe2e8(param_5,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
      }
      uVar11 = FUN_08a07730(0);
      *(undefined4 *)(lVar6 + 0x84) = uVar11;
      break;
    case 0x1000f:
      lVar6 = FUN_060fe2e8(param_5,*(undefined8 *)
                                    Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter_var
                          );
      if (*(int *)(*(long *)PTR_DAT_091abfe0 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_091abfe0);
      }
      uVar10 = FUN_08a0781c(0);
      *(undefined8 *)(lVar6 + 0x88) = uVar10;
      break;
    default:
      goto switchD_08acc3fc_default;
    }
  }
  return;
}


