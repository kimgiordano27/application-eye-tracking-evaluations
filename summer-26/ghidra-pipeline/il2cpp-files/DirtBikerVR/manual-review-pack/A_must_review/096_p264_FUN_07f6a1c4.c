/*
FUNCTION_NAME: FUN_07f6a1c4
ENTRY_POINT: 07f6a1c4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 144
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_07f6a1c4(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  if ((DAT_0899b4f6 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486be8);
    FUN_03a8a718(OVRPlugin_OverlayShape_TypeInfo);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Create__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Start<SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                );
    FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Enum>_get_visualInput__);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Stream>,_XmlUrlResolver_<GetEntityAsync>d__15>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ReadStringValueAsync>d__37>__
                );
    FUN_03a8a718(Method_System_Collections_Generic_Dictionary<string,_SubscribeRequest>__ctor__);
    DAT_0899b4f6 = 1;
  }
  puVar4 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Create__;
  puVar3 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__;
  puVar1 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
  ;
  if (0x3000b < (int)param_6) {
    if (param_6 < 0x50004) {
      if (0x40006 < (int)param_6) {
        if (0x4ffff < (int)param_6) {
          if ((int)param_6 < 0x50002) {
            if (param_6 == 0x50000) {
              puVar8 = (undefined8 *)
                       FUN_0586e3e8(param_5 + 0x18,
                                    *(undefined8 *)
                                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Start<SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
                                   );
              if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
                thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
              }
              FUN_07ea48c4(&local_50,0);
              puVar8[2] = CONCAT44(uStack_3c,local_40);
              puVar8[1] = CONCAT44(uStack_44,uStack_48);
              *puVar8 = CONCAT44(uStack_4c,local_50);
              return;
            }
            if (param_6 == 0x50001) {
              lVar6 = FUN_0586e3e8(param_5 + 0x18,
                                   *(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Start<SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
                                  );
              if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
                thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
              }
              auVar12 = FUN_07ea494c(0);
              *(undefined1 (*) [16])(lVar6 + 0x18) = auVar12;
              return;
            }
          }
          else {
            if (param_6 == 0x50002) {
              lVar6 = FUN_0586e3e8(param_5 + 0x18,
                                   *(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Start<SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
                                  );
              if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
                thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
              }
              FUN_07ea4b3c(&local_50,0);
              *(ulong *)(lVar6 + 0x30) = CONCAT44(uStack_44,uStack_48);
              *(ulong *)(lVar6 + 0x28) = CONCAT44(uStack_4c,local_50);
              *(undefined4 *)(lVar6 + 0x38) = local_40;
              return;
            }
            if (param_6 == 0x50003) {
              lVar6 = FUN_0586e3e8(param_5 + 0x18,
                                   *(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Start<SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
                                  );
              if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
                thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
              }
              FUN_07ea4da4(&local_50,0);
              *(ulong *)(lVar6 + 0x44) = CONCAT44(uStack_44,uStack_48);
              *(ulong *)(lVar6 + 0x3c) = CONCAT44(uStack_4c,local_50);
              *(ulong *)(lVar6 + 0x4c) = CONCAT44(uStack_3c,local_40);
              return;
            }
          }
          goto switchD_07f6a92c_default;
        }
        if (0x40008 < (int)param_6) {
          if (param_6 == 0x40009) {
            lVar6 = FUN_0586edcc(param_5 + 0x28,
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                                );
            if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
            }
            auVar13 = UnityEngine_UI_Selectable__get_image(0);
            uVar10 = *(undefined8 *)puVar2;
            *(undefined1 (*) [12])(lVar6 + 0x30) = auVar13;
            lVar6 = FUN_0586edcc(param_5 + 0x28,uVar10);
            auVar13 = FUN_07ea337c(0);
            uVar10 = *(undefined8 *)puVar2;
            *(undefined1 (*) [12])(lVar6 + 0x3c) = auVar13;
            lVar6 = FUN_0586edcc(param_5 + 0x28,uVar10);
            uVar10 = FUN_07ea33fc(0);
            uVar7 = *(undefined8 *)puVar2;
            *(undefined8 *)(lVar6 + 0x48) = uVar10;
            lVar6 = FUN_0586edcc(param_5 + 0x28,uVar7);
            goto LAB_07f6b524;
          }
          if (param_6 != 0x4000a) goto switchD_07f6a92c_default;
          lVar6 = FUN_0586d4f4(param_5,*(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__
                              );
          if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
          }
          uVar11 = FUN_07ea55a8(0);
          uVar10 = *(undefined8 *)puVar3;
          *(undefined4 *)(lVar6 + 0x6c) = uVar11;
          *(undefined4 *)(lVar6 + 0x70) = param_2;
          *(undefined4 *)(lVar6 + 0x74) = param_3;
          *(undefined4 *)(lVar6 + 0x78) = param_4;
          lVar6 = FUN_0586d4f4(param_5,uVar10);
          goto LAB_07f6aa9c;
        }
        if (param_6 == 0x40007) {
          lVar6 = FUN_0586d9f0(param_5 + 8,
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                              );
          if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
          }
          uVar10 = FUN_07ea475c(0);
          uVar7 = *(undefined8 *)puVar1;
          *(undefined8 *)(lVar6 + 0xac) = uVar10;
          lVar6 = FUN_0586d9f0(param_5 + 8,uVar7);
          uVar10 = UnityEngine_UI_SetPropertyUtility__SetColor(0);
          uVar7 = *(undefined8 *)puVar1;
          *(undefined8 *)(lVar6 + 0xa4) = uVar10;
          lVar6 = FUN_0586d9f0(param_5 + 8,uVar7);
          uVar10 = FUN_07ea45f4(0);
          uVar7 = *(undefined8 *)puVar1;
          *(undefined8 *)(lVar6 + 0x94) = uVar10;
          lVar6 = FUN_0586d9f0(param_5 + 8,uVar7);
          goto LAB_07f6b01c;
        }
        if (param_6 != 0x40008) goto switchD_07f6a92c_default;
        puVar8 = (undefined8 *)
                 FUN_0586e8e4(param_5 + 0x20,
                              *(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Create__
                             );
        uVar10 = *puVar8;
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar7 = FUN_07ea4bc4(0);
        puVar1 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ReadStringValueAsync>d__37>__
        ;
        FUN_04766888(uVar10,uVar7,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ReadStringValueAsync>d__37>__
                    );
        lVar6 = FUN_0586e8e4(param_5 + 0x20,*(undefined8 *)puVar4);
        uVar7 = *(undefined8 *)(lVar6 + 8);
        uVar10 = FUN_07ea4c3c(0);
        FUN_04766888(uVar7,uVar10,*(undefined8 *)puVar1);
        lVar6 = FUN_0586e8e4(param_5 + 0x20,*(undefined8 *)puVar4);
        uVar7 = *(undefined8 *)(lVar6 + 0x10);
        uVar10 = FUN_07ea4cb4(0);
        FUN_0476681c(uVar7,uVar10,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                    );
        lVar6 = FUN_0586e8e4(param_5 + 0x20,*(undefined8 *)puVar4);
        uVar10 = *(undefined8 *)(lVar6 + 0x18);
LAB_07f6ada8:
        uVar7 = FUN_07ea4d2c(0);
        FUN_047667c8(uVar10,uVar7,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Stream>,_XmlUrlResolver_<GetEntityAsync>d__15>__
                    );
        goto LAB_07f6b204;
      }
      if ((int)param_6 < 0x40003) {
        if (param_6 == 0x40000) {
          return;
        }
        if (param_6 == 0x40001) {
          lVar6 = FUN_0586edcc(param_5 + 0x28,
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                              );
          if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
          }
          auVar13 = UnityEngine_UI_Selectable__get_image(0);
          uVar10 = *(undefined8 *)puVar2;
          *(undefined1 (*) [12])(lVar6 + 0x30) = auVar13;
          lVar6 = FUN_0586edcc(param_5 + 0x28,uVar10);
          goto LAB_07f6b440;
        }
        if (param_6 == 0x40002) {
          lVar6 = FUN_0586edcc(param_5 + 0x28,
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                              );
          if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
          }
          uVar11 = FUN_07ea38c8(0);
          uVar10 = *(undefined8 *)puVar2;
          *(undefined4 *)(lVar6 + 0xa4) = uVar11;
          *(undefined4 *)(lVar6 + 0xa8) = param_2;
          *(undefined4 *)(lVar6 + 0xac) = param_3;
          *(undefined4 *)(lVar6 + 0xb0) = param_4;
          lVar6 = FUN_0586edcc(param_5 + 0x28,uVar10);
          uVar11 = FUN_07ea37d4(0);
          uVar10 = *(undefined8 *)puVar2;
          *(undefined4 *)(lVar6 + 0x94) = uVar11;
          *(undefined4 *)(lVar6 + 0x98) = param_2;
          *(undefined4 *)(lVar6 + 0x9c) = param_3;
          *(undefined4 *)(lVar6 + 0xa0) = param_4;
          lVar6 = FUN_0586edcc(param_5 + 0x28,uVar10);
          uVar11 = FUN_07ea34fc(0);
          uVar10 = *(undefined8 *)puVar2;
          *(undefined4 *)(lVar6 + 100) = uVar11;
          *(undefined4 *)(lVar6 + 0x68) = param_2;
          *(undefined4 *)(lVar6 + 0x6c) = param_3;
          *(undefined4 *)(lVar6 + 0x70) = param_4;
          lVar6 = FUN_0586edcc(param_5 + 0x28,uVar10);
          goto LAB_07f6b36c;
        }
        goto switchD_07f6a92c_default;
      }
      if (0x40004 < (int)param_6) {
        if (param_6 != 0x40005) {
          if (param_6 != 0x40006) goto switchD_07f6a92c_default;
          lVar6 = FUN_0586d9f0(param_5 + 8,
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                              );
          if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
          }
          uVar10 = FUN_07ea42ac(0);
          uVar7 = *(undefined8 *)puVar1;
          *(undefined8 *)(lVar6 + 0x6c) = uVar10;
          lVar6 = FUN_0586d9f0(param_5 + 8,uVar7);
          uVar10 = FUN_07ea4234(0);
          uVar7 = *(undefined8 *)puVar1;
          *(undefined8 *)(lVar6 + 100) = uVar10;
          lVar6 = FUN_0586d9f0(param_5 + 8,uVar7);
          uVar10 = FUN_07ea4144(0);
          uVar7 = *(undefined8 *)puVar1;
          *(undefined8 *)(lVar6 + 0x54) = uVar10;
          lVar6 = FUN_0586d9f0(param_5 + 8,uVar7);
          goto LAB_07f6aa18;
        }
        lVar6 = FUN_0586d9f0(param_5 + 8,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        uVar11 = FUN_07ea3d8c(0);
        uVar10 = *(undefined8 *)puVar1;
        *(undefined4 *)(lVar6 + 0x34) = uVar11;
        lVar6 = FUN_0586d9f0(param_5 + 8,uVar10);
        uVar11 = FUN_07ea3e04(0);
        uVar10 = *(undefined8 *)puVar1;
        *(undefined4 *)(lVar6 + 0x38) = uVar11;
        lVar6 = FUN_0586d9f0(param_5 + 8,uVar10);
        goto LAB_07f6af28;
      }
      if (param_6 != 0x40003) {
        if (param_6 != 0x40004) goto switchD_07f6a92c_default;
        lVar6 = FUN_0586d9f0(param_5 + 8,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        uVar11 = FUN_07ea3a34(0);
        uVar10 = *(undefined8 *)puVar1;
        *(undefined4 *)(lVar6 + 0x18) = uVar11;
        lVar6 = FUN_0586d9f0(param_5 + 8,uVar10);
        uVar11 = FUN_07ea3850(0);
        uVar10 = *(undefined8 *)puVar1;
        *(undefined4 *)(lVar6 + 0x14) = uVar11;
        lVar6 = FUN_0586d9f0(param_5 + 8,uVar10);
        uVar11 = FUN_07ea3668(0);
        uVar10 = *(undefined8 *)puVar1;
        *(undefined4 *)(lVar6 + 0xc) = uVar11;
        lVar6 = FUN_0586d9f0(param_5 + 8,uVar10);
        goto LAB_07f6a674;
      }
      lVar6 = FUN_0586edcc(param_5 + 0x28,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                          );
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
      }
      uVar10 = FUN_07ea3944(0);
      uVar7 = *(undefined8 *)puVar2;
      *(undefined8 *)(lVar6 + 0xb4) = uVar10;
      lVar6 = FUN_0586edcc(param_5 + 0x28,uVar7);
      uVar10 = FUN_07ea39bc(0);
      uVar7 = *(undefined8 *)puVar2;
      *(undefined8 *)(lVar6 + 0xbc) = uVar10;
      lVar6 = FUN_0586edcc(param_5 + 0x28,uVar7);
      uVar10 = FUN_07ea35f0(0);
      uVar7 = *(undefined8 *)puVar2;
      *(undefined8 *)(lVar6 + 0x7c) = uVar10;
      lVar6 = FUN_0586edcc(param_5 + 0x28,uVar7);
    }
    else {
      if ((int)param_6 < 0x60003) {
        if (param_6 == 0x60000) {
          puVar8 = (undefined8 *)
                   FUN_0586e8e4(param_5 + 0x20,
                                *(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Create__
                               );
          uVar10 = *puVar8;
          if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar7 = FUN_07ea4bc4(0);
        }
        else {
          if (param_6 != 0x60001) {
            if (param_6 != 0x60002) goto switchD_07f6a92c_default;
            lVar6 = FUN_0586e8e4(param_5 + 0x20,
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Create__
                                );
            uVar10 = *(undefined8 *)(lVar6 + 0x10);
            if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar7 = FUN_07ea4cb4(0);
            FUN_0476681c(uVar10,uVar7,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                        );
            goto LAB_07f6b204;
          }
          lVar6 = FUN_0586e8e4(param_5 + 0x20,
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Create__
                              );
          uVar10 = *(undefined8 *)(lVar6 + 8);
          if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar7 = FUN_07ea4c3c(0);
        }
        FUN_04766888(uVar10,uVar7,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ReadStringValueAsync>d__37>__
                    );
LAB_07f6b204:
        pauVar9 = (undefined1 (*) [16])(param_5 + 0x48);
        *(undefined8 *)*pauVar9 = 0;
        uVar10 = 0;
        goto LAB_07f6b210;
      }
      switch(param_6) {
      case 0x70000:
        puVar5 = (undefined4 *)
                 FUN_0586edcc(param_5 + 0x28,
                              *(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                             );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        uVar11 = FUN_07ea3200(0);
        goto LAB_07f6a31c;
      case 0x70001:
        lVar6 = FUN_0586edcc(param_5 + 0x28,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        FUN_07ea327c(&local_50,0);
        puVar8 = (undefined8 *)(lVar6 + 0x10);
        *(ulong *)(lVar6 + 0x18) = CONCAT44(uStack_44,uStack_48);
        *(ulong *)(lVar6 + 0x10) = CONCAT44(uStack_4c,local_50);
        *(ulong *)(lVar6 + 0x28) = CONCAT44(uStack_34,uStack_38);
        *(ulong *)(lVar6 + 0x20) = CONCAT44(uStack_3c,local_40);
LAB_07f6b4e4:
        thunk_FUN_03afed3c(puVar8,0);
        return;
      case 0x70002:
        lVar6 = FUN_0586edcc(param_5 + 0x28,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        auVar13 = UnityEngine_UI_Selectable__get_image(0);
        *(undefined1 (*) [12])(lVar6 + 0x30) = auVar13;
        return;
      case 0x70003:
        lVar6 = FUN_0586edcc(param_5 + 0x28,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
LAB_07f6b440:
        auVar13 = FUN_07ea337c(0);
        *(undefined1 (*) [12])(lVar6 + 0x3c) = auVar13;
        return;
      case 0x70004:
        lVar6 = FUN_0586edcc(param_5 + 0x28,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        uVar10 = FUN_07ea33fc(0);
        *(undefined8 *)(lVar6 + 0x48) = uVar10;
        return;
      case 0x70005:
        lVar6 = FUN_0586edcc(param_5 + 0x28,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
LAB_07f6b524:
        FUN_07ea3474(&local_50,0);
        *(ulong *)(lVar6 + 0x58) = CONCAT44(uStack_44,uStack_48);
        *(ulong *)(lVar6 + 0x50) = CONCAT44(uStack_4c,local_50);
        *(undefined4 *)(lVar6 + 0x60) = local_40;
        return;
                    /* try { // try from 07f6b540 to 0806b5e7 has its CatchHandler @ 07f6b540
                       catch() { ... } // from try @ 07f6b540 with catch @ 07f6b540
                       catch() { ... } // from try @ 07f6b60c with catch @ 07f6b540
                       catch() { ... } // from try @ 07f6b678 with catch @ 07f6b540
                       catch() { ... } // from try @ 07f6b6a4 with catch @ 07f6b540 */
      case 0x70006:
        lVar6 = FUN_0586edcc(param_5 + 0x28,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        uVar11 = FUN_07ea34fc(0);
        *(undefined4 *)(lVar6 + 100) = uVar11;
        *(undefined4 *)(lVar6 + 0x68) = param_2;
        *(undefined4 *)(lVar6 + 0x6c) = param_3;
        *(undefined4 *)(lVar6 + 0x70) = param_4;
        return;
      case 0x70007:
        lVar6 = FUN_0586edcc(param_5 + 0x28,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        break;
      case 0x70008:
        lVar6 = FUN_0586edcc(param_5 + 0x28,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        uVar10 = FUN_07ea35f0(0);
        goto LAB_07f6b654;
      case 0x70009:
        lVar6 = FUN_0586edcc(param_5 + 0x28,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
LAB_07f6b36c:
        uVar11 = FUN_07ea36e0(0);
        *(undefined4 *)(lVar6 + 0x84) = uVar11;
        *(undefined4 *)(lVar6 + 0x88) = param_2;
        *(undefined4 *)(lVar6 + 0x8c) = param_3;
        *(undefined4 *)(lVar6 + 0x90) = param_4;
        return;
      case 0x7000a:
        lVar6 = FUN_0586edcc(param_5 + 0x28,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                            );
                    /* try { // try from 07f6b5e8 to 0806b5ef has its CatchHandler @ 07f6b658 */
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
                    /* try { // try from 07f6b600 to 0806b60b has its CatchHandler @ 07f6b654 */
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        uVar11 = FUN_07ea37d4(0);
                    /* try { // try from 07f6b60c to 0806b673 has its CatchHandler @ 07f6b540 */
        *(undefined4 *)(lVar6 + 0x94) = uVar11;
        *(undefined4 *)(lVar6 + 0x98) = param_2;
        *(undefined4 *)(lVar6 + 0x9c) = param_3;
        *(undefined4 *)(lVar6 + 0xa0) = param_4;
        return;
      case 0x7000b:
        lVar6 = FUN_0586edcc(param_5 + 0x28,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        uVar11 = FUN_07ea38c8(0);
        *(undefined4 *)(lVar6 + 0xa4) = uVar11;
        *(undefined4 *)(lVar6 + 0xa8) = param_2;
        *(undefined4 *)(lVar6 + 0xac) = param_3;
        *(undefined4 *)(lVar6 + 0xb0) = param_4;
        return;
      case 0x7000c:
        lVar6 = FUN_0586edcc(param_5 + 0x28,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        uVar10 = FUN_07ea3944(0);
        *(undefined8 *)(lVar6 + 0xb4) = uVar10;
        return;
      case 0x7000d:
        lVar6 = FUN_0586edcc(param_5 + 0x28,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        uVar10 = FUN_07ea39bc(0);
        *(undefined8 *)(lVar6 + 0xbc) = uVar10;
        return;
      case 0x7000e:
        lVar6 = FUN_0586edcc(param_5 + 0x28,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        uVar11 = FUN_07ea4504(0);
        *(undefined4 *)(lVar6 + 0xc4) = uVar11;
        return;
      case 0x7000f:
        lVar6 = FUN_0586edcc(param_5 + 0x28,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetStateMachine__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        uVar11 = FUN_07ea457c(0);
        *(undefined4 *)(lVar6 + 200) = uVar11;
        return;
      default:
        if (param_6 != 0x60003) goto switchD_07f6a92c_default;
        lVar6 = FUN_0586e8e4(param_5 + 0x20,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Create__
                            );
        uVar10 = *(undefined8 *)(lVar6 + 0x18);
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        goto LAB_07f6ada8;
      }
    }
    uVar10 = FUN_07ea3578(0);
LAB_07f6b490:
    *(undefined8 *)(lVar6 + 0x74) = uVar10;
    return;
  }
  if (0x2ffff < (int)param_6) {
    if ((int)param_6 < 0x30006) {
      if ((int)param_6 < 0x30003) {
        if (param_6 == 0x30000) {
          puVar8 = (undefined8 *)
                   FUN_0586deec(param_5 + 0x10,
                                *(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
                               );
          if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
          }
          FUN_07ea3b9c(&local_50,0);
          puVar8[2] = CONCAT44(uStack_3c,local_40);
          puVar8[1] = CONCAT44(uStack_44,uStack_48);
          *puVar8 = CONCAT44(uStack_4c,local_50);
          goto LAB_07f6b4e4;
        }
        if (param_6 == 0x30001) {
          lVar6 = FUN_0586deec(param_5 + 0x10,
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
                              );
          if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
          }
          uVar11 = FUN_07ea49c8(0);
          *(undefined4 *)(lVar6 + 0x18) = uVar11;
          return;
        }
        if (param_6 == 0x30002) {
          lVar6 = FUN_0586deec(param_5 + 0x10,
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
                              );
          if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
          }
          uVar11 = FUN_07ea4e2c(0);
          *(undefined4 *)(lVar6 + 0x1c) = uVar11;
          *(undefined4 *)(lVar6 + 0x20) = param_2;
          *(undefined4 *)(lVar6 + 0x24) = param_3;
          *(undefined4 *)(lVar6 + 0x28) = param_4;
          return;
        }
      }
      else {
        if (param_6 == 0x30003) {
          lVar6 = FUN_0586deec(param_5 + 0x10,
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
                              );
          if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
          }
          uVar11 = FUN_07ea507c(0);
          *(undefined4 *)(lVar6 + 0x2c) = uVar11;
          return;
        }
        if (param_6 == 0x30004) {
          lVar6 = FUN_0586deec(param_5 + 0x10,
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
                              );
          if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
          }
          uVar11 = FUN_07ea5168(0);
          goto LAB_07f6abe4;
        }
        if (param_6 == 0x30005) {
          lVar6 = FUN_0586deec(param_5 + 0x10,
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
                              );
          if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
          }
          uVar11 = FUN_07ea51e0(0);
          *(undefined4 *)(lVar6 + 0x34) = uVar11;
          return;
        }
      }
    }
    else if ((int)param_6 < 0x30009) {
      if (param_6 == 0x30006) {
        lVar6 = FUN_0586deec(param_5 + 0x10,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        uVar11 = FUN_07ea5258(0);
        *(undefined4 *)(lVar6 + 0x38) = uVar11;
        return;
      }
      if (param_6 == 0x30007) {
        lVar6 = FUN_0586deec(param_5 + 0x10,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        uVar11 = FUN_07ea52d0(0);
        *(undefined4 *)(lVar6 + 0x3c) = uVar11;
        return;
      }
      if (param_6 == 0x30008) {
        lVar6 = FUN_0586deec(param_5 + 0x10,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        uVar11 = FUN_07ea5348(0);
        *(undefined4 *)(lVar6 + 0x40) = uVar11;
        return;
      }
    }
    else {
      if (param_6 == 0x30009) {
        lVar6 = FUN_0586deec(param_5 + 0x10,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        uVar11 = UnityEngine_UI_Slider__LayoutComplete(0);
        *(undefined4 *)(lVar6 + 0x44) = uVar11;
        return;
      }
      if (param_6 == 0x3000a) {
        lVar6 = FUN_0586deec(param_5 + 0x10,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        FUN_07ea54ac(&local_50,0);
        *(ulong *)(lVar6 + 0x50) = CONCAT44(uStack_44,uStack_48);
        *(ulong *)(lVar6 + 0x48) = CONCAT44(uStack_4c,local_50);
        *(undefined4 *)(lVar6 + 0x58) = local_40;
        return;
      }
      if (param_6 == 0x3000b) {
        lVar6 = FUN_0586deec(param_5 + 0x10,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<CreateAlignmentAnchor>d__19>__
                            );
        if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
        }
        uVar11 = FUN_07ea5694(0);
        *(undefined4 *)(lVar6 + 0x5c) = uVar11;
        return;
      }
    }
switchD_07f6a92c_default:
    local_50 = param_6;
    uVar10 = thunk_FUN_03ac70f4(*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseField<Enum>_get_visualInput__,
                                &local_50);
    uVar10 = FUN_065c412c(*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary<string,_SubscribeRequest>__ctor__
                          ,uVar10,0);
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
    }
    FUN_07c5065c(uVar10,0);
    return;
  }
  switch(param_6) {
  case 0x20000:
    puVar5 = (undefined4 *)
             FUN_0586d9f0(param_5 + 8,
                          *(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                         );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar11 = FUN_07ea3098(0);
    *puVar5 = uVar11;
    break;
  case 0x20001:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar11 = FUN_07ea3110(0);
    *(undefined4 *)(lVar6 + 4) = uVar11;
    break;
  case 0x20002:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar11 = FUN_07ea3188(0);
    *(undefined4 *)(lVar6 + 8) = uVar11;
    break;
  case 0x20003:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar11 = FUN_07ea3668(0);
    *(undefined4 *)(lVar6 + 0xc) = uVar11;
    break;
  case 0x20004:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
LAB_07f6a674:
    uVar11 = UnityEngine_UI_Selectable__InstantClearState(0);
    *(undefined4 *)(lVar6 + 0x10) = uVar11;
    break;
  case 0x20005:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar11 = FUN_07ea3850(0);
    *(undefined4 *)(lVar6 + 0x14) = uVar11;
    break;
  case 0x20006:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar11 = FUN_07ea3a34(0);
    *(undefined4 *)(lVar6 + 0x18) = uVar11;
    break;
  case 0x20007:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar10 = FUN_07ea3aac(0);
    *(undefined8 *)(lVar6 + 0x1c) = uVar10;
    break;
  case 0x20008:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar11 = FUN_07ea3c24(0);
    *(undefined4 *)(lVar6 + 0x24) = uVar11;
    break;
  case 0x20009:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
LAB_07f6af28:
    uVar10 = FUN_07ea3c9c(0);
    *(undefined8 *)(lVar6 + 0x28) = uVar10;
    break;
  case 0x2000a:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar11 = FUN_07ea3d14(0);
LAB_07f6abe4:
    *(undefined4 *)(lVar6 + 0x30) = uVar11;
    return;
  case 0x2000b:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar11 = FUN_07ea3d8c(0);
    *(undefined4 *)(lVar6 + 0x34) = uVar11;
    break;
  case 0x2000c:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar11 = FUN_07ea3e04(0);
    *(undefined4 *)(lVar6 + 0x38) = uVar11;
    break;
  case 0x2000d:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar11 = FUN_07ea3e7c(0);
LAB_07f6bd58:
    *(undefined4 *)(lVar6 + 0x3c) = uVar11;
    break;
  case 0x2000e:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar10 = FUN_07ea3f68(0);
    *(undefined8 *)(lVar6 + 0x40) = uVar10;
    break;
  case 0x2000f:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar11 = FUN_07ea3fe0(0);
    *(undefined4 *)(lVar6 + 0x48) = uVar11;
    break;
  case 0x20010:
                    /* try { // try from 07f6b6a4 to 0806b6af has its CatchHandler @ 07f6b540 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07f6b69c with catch @ 07f6b6ac
                        */
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar10 = FUN_07ea4058(0);
    *(undefined8 *)(lVar6 + 0x4c) = uVar10;
    break;
  case 0x20011:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar10 = FUN_07ea4144(0);
    *(undefined8 *)(lVar6 + 0x54) = uVar10;
    break;
  case 0x20012:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
LAB_07f6aa18:
    uVar10 = FUN_07ea41bc(0);
LAB_07f6aa20:
    *(undefined8 *)(lVar6 + 0x5c) = uVar10;
    break;
  case 0x20013:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar10 = FUN_07ea4234(0);
    *(undefined8 *)(lVar6 + 100) = uVar10;
    break;
  case 0x20014:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar10 = FUN_07ea42ac(0);
    *(undefined8 *)(lVar6 + 0x6c) = uVar10;
    break;
  case 0x20015:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar10 = FUN_07ea4324(0);
    goto LAB_07f6b490;
  case 0x20016:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar10 = FUN_07ea439c(0);
LAB_07f6b654:
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07f6b600 with catch @ 07f6b654
                        */
    *(undefined8 *)(lVar6 + 0x7c) = uVar10;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07f6b5e8 with catch @ 07f6b658
                        */
    break;
  case 0x20017:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar10 = FUN_07ea4414(0);
    *(undefined8 *)(lVar6 + 0x84) = uVar10;
    break;
  case 0x20018:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar10 = FUN_07ea448c(0);
    *(undefined8 *)(lVar6 + 0x8c) = uVar10;
    break;
  case 0x20019:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar10 = FUN_07ea45f4(0);
    *(undefined8 *)(lVar6 + 0x94) = uVar10;
    break;
  case 0x2001a:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
LAB_07f6b01c:
    uVar10 = FUN_07ea466c(0);
    *(undefined8 *)(lVar6 + 0x9c) = uVar10;
    break;
  case 0x2001b:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
                    /* try { // try from 07f6b674 to 0806b677 has its CatchHandler @ 07f6b698 */
                    /* try { // try from 07f6b678 to 0806b69b has its CatchHandler @ 07f6b540 */
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar10 = UnityEngine_UI_SetPropertyUtility__SetColor(0);
                    /* catch() { ... } // from try @ 07f6b674 with catch @ 07f6b698 */
    *(undefined8 *)(lVar6 + 0xa4) = uVar10;
                    /* try { // try from 07f6b69c to 0806b6a3 has its CatchHandler @ 07f6b6ac */
    break;
  case 0x2001c:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar10 = FUN_07ea475c(0);
    *(undefined8 *)(lVar6 + 0xac) = uVar10;
    break;
  case 0x2001d:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar11 = FUN_07ea47d4(0);
    *(undefined4 *)(lVar6 + 0xb4) = uVar11;
    break;
  case 0x2001e:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar10 = FUN_07ea484c(0);
    *(undefined8 *)(lVar6 + 0xb8) = uVar10;
    break;
  case 0x2001f:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar10 = FUN_07ea4ac4(0);
    *(undefined8 *)(lVar6 + 0xc0) = uVar10;
    break;
  case 0x20020:
    lVar6 = FUN_0586d9f0(param_5 + 8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_SetResult__
                        );
    if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
    }
    uVar10 = FUN_07ea57f4(0);
    *(undefined8 *)(lVar6 + 200) = uVar10;
    break;
  default:
    switch(param_6) {
    case 0x10000:
      puVar5 = (undefined4 *)
               FUN_0586d4f4(param_5,*(undefined8 *)
                                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__
                           );
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
      }
      uVar11 = FUN_07ea3b24(0);
LAB_07f6a31c:
      *puVar5 = uVar11;
      puVar5[1] = param_2;
      puVar5[2] = param_3;
      puVar5[3] = param_4;
      break;
    case 0x10001:
      lVar6 = FUN_0586d4f4(param_5,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__
                          );
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
      }
      uVar10 = FUN_07ea3ef4(0);
      *(undefined8 *)(lVar6 + 0x10) = uVar10;
      break;
    case 0x10002:
      lVar6 = FUN_0586d4f4(param_5,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__
                          );
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
      }
      uVar10 = FUN_07ea40d0(0);
      *(undefined8 *)(lVar6 + 0x18) = uVar10;
      break;
    case 0x10003:
      lVar6 = FUN_0586d4f4(param_5,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__
                          );
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
      }
      FUN_07ea4a40(&local_50,0);
      *(ulong *)(lVar6 + 0x28) = CONCAT44(uStack_44,uStack_48);
      *(ulong *)(lVar6 + 0x20) = CONCAT44(uStack_4c,local_50);
      *(ulong *)(lVar6 + 0x34) = CONCAT44(uStack_38,uStack_3c);
      *(ulong *)(lVar6 + 0x2c) = CONCAT44(local_40,uStack_44);
      break;
    case 0x10004:
      lVar6 = FUN_0586d4f4(param_5,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__
                          );
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
      }
      uVar11 = FUN_07ea4ea8(0);
      goto LAB_07f6bd58;
    case 0x10005:
      lVar6 = FUN_0586d4f4(param_5,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__
                          );
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
      }
      uVar10 = FUN_07ea4f1c(0);
      pauVar9 = (undefined1 (*) [16])(lVar6 + 0x40);
      *(undefined8 *)*pauVar9 = uVar10;
      goto LAB_07f6b210;
    case 0x10006:
      lVar6 = FUN_0586d4f4(param_5,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__
                          );
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
      }
      auVar12 = FUN_07ea4f90(0);
      pauVar9 = (undefined1 (*) [16])(lVar6 + 0x48);
      uVar10 = 0;
      *pauVar9 = auVar12;
LAB_07f6b210:
      thunk_FUN_03afed3c(pauVar9,uVar10);
      return;
    case 0x10007:
      lVar6 = FUN_0586d4f4(param_5,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__
                          );
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
      }
      uVar11 = FUN_07ea5008(0);
      *(undefined4 *)(lVar6 + 0x58) = uVar11;
      break;
    case 0x10008:
      lVar6 = FUN_0586d4f4(param_5,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__
                          );
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
      }
      uVar10 = FUN_07ea50f4(0);
      goto LAB_07f6aa20;
    case 0x10009:
      lVar6 = FUN_0586d4f4(param_5,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__
                          );
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
      }
      uVar11 = FUN_07ea5438(0);
      *(undefined4 *)(lVar6 + 100) = uVar11;
      break;
    case 0x1000a:
      lVar6 = FUN_0586d4f4(param_5,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__
                          );
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
      }
      uVar11 = FUN_07ea5534(0);
      *(undefined4 *)(lVar6 + 0x68) = uVar11;
      break;
    case 0x1000b:
      lVar6 = FUN_0586d4f4(param_5,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__
                          );
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
      }
      uVar11 = FUN_07ea55a8(0);
      *(undefined4 *)(lVar6 + 0x6c) = uVar11;
      *(undefined4 *)(lVar6 + 0x70) = param_2;
      *(undefined4 *)(lVar6 + 0x74) = param_3;
      *(undefined4 *)(lVar6 + 0x78) = param_4;
      break;
    case 0x1000c:
      lVar6 = FUN_0586d4f4(param_5,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__
                          );
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
      }
LAB_07f6aa9c:
      uVar11 = FUN_07ea5620(0);
      *(undefined4 *)(lVar6 + 0x7c) = uVar11;
      break;
    case 0x1000d:
      lVar6 = FUN_0586d4f4(param_5,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__
                          );
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
      }
      uVar11 = UnityEngine_UI_Slider__Set(0);
      *(undefined4 *)(lVar6 + 0x80) = uVar11;
      break;
    case 0x1000e:
      lVar6 = FUN_0586d4f4(param_5,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__
                          );
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
      }
      uVar11 = FUN_07ea5780(0);
      *(undefined4 *)(lVar6 + 0x84) = uVar11;
      break;
    case 0x1000f:
      lVar6 = FUN_0586d4f4(param_5,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NetworkManager>_get_Task__
                          );
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_OverlayShape_TypeInfo);
      }
      uVar10 = FUN_07ea586c(0);
      *(undefined8 *)(lVar6 + 0x88) = uVar10;
      break;
    default:
      goto switchD_07f6a92c_default;
    }
  }
  return;
}


