/*
FUNCTION_NAME: System.Array$$Sort<FingerFeatureStateProvider.FingerStateThresholds>
ENTRY_POINT: 02163fc8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_16;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__Sort<FingerFeatureStateProvider_FingerStateThresholds>(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  void *pvVar7;
  void *__s;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong __n;
  long lVar12;
  long unaff_x19;
  void *pvVar13;
  ulong __n_00;
  ulong uVar14;
  undefined8 uVar15;
  void *pvVar16;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x520));
  thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEraNames__);
  thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
  thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_InitializeAbbreviatedEraNames__);
  thunk_FUN_01efb3a4(
                    Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                    );
  thunk_FUN_01efb3a4(
                    Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                    );
  thunk_FUN_01efb3a4(
                    Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                    );
  thunk_FUN_01efb3a4(
                    Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                    );
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Callback_SetNotificationCallback<HttpTransferUpdate>__);
  thunk_FUN_01efb3a4(
                    Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                    );
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Callback_SetNotificationCallback<LivestreamingStatus>__)
  ;
  lVar12 = *(long *)(unaff_x19 + 0x38);
  if (lVar12 == 0) {
    FUN_01ecafa0();
    lVar12 = *(long *)(unaff_x19 + 0x38);
  }
  __n_00 = (ulong)*(uint *)(*(long *)(lVar12 + 8) + 0xfc);
  uVar14 = __n_00 + 0xf & 0x1fffffff0;
  *(ulong *)(unaff_x29 + -0x30) = (long)&stack0x00000000 - uVar14;
  pvVar7 = (void *)(((long)&stack0x00000000 - uVar14) - uVar14);
  *(void **)(unaff_x29 + -0x38) = pvVar7;
  memset(pvVar7,0,__n_00);
  pvVar7 = (void *)((long)pvVar7 - uVar14);
  memset(pvVar7,0,__n_00);
  pvVar13 = (void *)((long)pvVar7 - uVar14);
  memset(pvVar13,0,__n_00);
  pvVar16 = (void *)((long)pvVar13 - uVar14);
  memset(pvVar16,0,__n_00);
  if (*(long *)(unaff_x29 + -0x28) == 0) {
    uVar14 = 0;
LAB_02164148:
    __s = (void *)0x0;
  }
  else {
    uVar14 = *(ulong *)(*(long *)(unaff_x29 + -0x28) + 0x18);
    if (uVar14 == 0) goto LAB_02164148;
    __n = -(uVar14 >> 0x1f & 1) & 0xfffffff800000000 | (uVar14 & 0xffffffff) << 3;
    if ((uVar14 & 0xffffffff) == 0) {
      __s = (void *)0x0;
    }
    else {
      __s = (void *)((long)pvVar16 - (__n + 0xf & 0xfffffffffffffff0));
    }
    memset(__s,0,__n);
    if ((int)uVar14 < 0) {
      FUN_0358adfc(0);
    }
  }
  *(ulong *)(unaff_x29 + -0x48) = uVar14 & 0xffffffff;
  *(void **)(unaff_x29 + -0x40) = __s;
  FUN_0401e8c8(*(undefined8 *)(unaff_x29 + -0x28),__s,uVar14 & 0xffffffff,0);
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar15 = *(undefined8 *)*unaff_x26;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar15 = FUN_03579868(uVar15,0);
  puVar2 = Method_Oculus_Platform_CAPI_IntPtrToByteArray__;
  if (*(int *)(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar14 = FUN_0402d484(uVar15,0);
  uVar15 = *(undefined8 *)*unaff_x26;
  if ((uVar14 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar15 = FUN_03579868(uVar15,0);
    uVar8 = FUN_03579868(*(undefined8 *)
                          Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                         ,0);
    uVar14 = FUN_03582560(uVar15,uVar8,0);
    if ((uVar14 & 1) == 0) {
      uVar15 = *(undefined8 *)*unaff_x26;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar15 = FUN_03579868(uVar15,0);
      uVar8 = FUN_03579868(*(undefined8 *)
                            Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__
                           ,0);
      uVar14 = FUN_03582560(uVar15,uVar8,0);
      if ((uVar14 & 1) != 0) {
        uVar15 = FUN_04029138(*(undefined8 *)(unaff_x27 + 0x10),0);
        uVar15 = UnityEngine_UIElements_ReusableTreeViewItem__remove_onToggleValueChanged
                           (uVar15,*(undefined8 *)(unaff_x29 + -0x60),
                            *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48),0)
        ;
        uVar14 = FUN_035ad140(uVar15,0,0);
        if ((uVar14 & 1) == 0) {
          uVar15 = FUN_0402d2f0(uVar15,0);
          lVar12 = *(long *)(*unaff_x26 + 8);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01ecaf44(lVar12);
          }
          pvVar16 = (void *)FUN_01f08934(uVar15,lVar12,*(undefined8 *)(unaff_x29 + -0x30));
        }
        else {
          memset(pvVar7,0,__n_00);
          pvVar16 = *(void **)(unaff_x29 + -0x30);
          memcpy(pvVar16,pvVar7,__n_00);
        }
        memcpy(pvVar13,pvVar16,__n_00);
        pvVar7 = *(void **)(unaff_x29 + -0x38);
        pvVar16 = pvVar13;
        goto LAB_02164bfc;
      }
      uVar15 = *(undefined8 *)*unaff_x26;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar15 = FUN_03579868(uVar15,0);
      uVar8 = FUN_03579868(*(undefined8 *)Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__
                           ,0);
      uVar14 = FUN_03582560(uVar15,uVar8,0);
      if ((uVar14 & 1) != 0) {
        uVar15 = FUN_04029138(*(undefined8 *)(unaff_x27 + 0x10),0);
        uVar15 = UnityEngine_UIElements_ReusableTreeViewItem__remove_onToggleValueChanged
                           (uVar15,*(undefined8 *)(unaff_x29 + -0x60),
                            *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48),0)
        ;
        uVar14 = FUN_035ad140(uVar15,0,0);
        if ((uVar14 & 1) == 0) {
          uVar15 = FUN_0402bd14(uVar15,0);
          lVar12 = *(long *)(*unaff_x26 + 8);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01ecaf44(lVar12);
          }
          pvVar13 = (void *)FUN_01f08934(uVar15,lVar12,*(undefined8 *)(unaff_x29 + -0x30));
        }
        else {
          memset(pvVar7,0,__n_00);
          pvVar13 = *(void **)(unaff_x29 + -0x30);
          memcpy(pvVar13,pvVar7,__n_00);
        }
        memcpy(pvVar16,pvVar13,__n_00);
        pvVar7 = *(void **)(unaff_x29 + -0x38);
        goto LAB_02164bfc;
      }
      uVar15 = *(undefined8 *)
                Method_System_Globalization_CalendarData_InitializeAbbreviatedEraNames__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar15 = FUN_03579868(uVar15,0);
      uVar8 = FUN_03579868(*(undefined8 *)*unaff_x26,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar14 = FUN_0402d498(uVar15,uVar8,0);
      if ((uVar14 & 1) == 0) {
        uVar15 = *(undefined8 *)*unaff_x26;
        lVar12 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar9 = (long *)FUN_03579868(uVar15,0);
        if (plVar9 == (long *)0x0) {
          uVar15 = thunk_FUN_01efb3a4(
                                     Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncConnection>__
                                     );
          uVar8 = 0;
        }
        else {
          uVar15 = thunk_FUN_01efb3a4(
                                     Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncConnection>__
                                     );
          uVar8 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        }
        uVar10 = thunk_FUN_01efb3a4(
                                   Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                   );
        uVar15 = FUN_0340ebc0(uVar15,uVar8,uVar10,0);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
        uVar8 = thunk_FUN_01f117cc();
        Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar8,uVar15,0);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar8);
      }
      uVar15 = FUN_04029138(*(undefined8 *)(unaff_x27 + 0x10),0);
      uVar15 = UnityEngine_UIElements_ReusableTreeViewItem__remove_onToggleValueChanged
                         (uVar15,*(undefined8 *)(unaff_x29 + -0x60),
                          *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48),0);
      pvVar16 = *(void **)(unaff_x29 + -0x30);
      puVar11 = *(undefined8 **)(*unaff_x26 + 0x10);
      uVar8 = *puVar11;
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x10;
      *(void **)(unaff_x29 + -0x18) = pvVar16;
      *(undefined8 *)(unaff_x29 + -0x10) = uVar15;
      (*(code *)puVar11[2])(uVar8,puVar11,0,unaff_x29 + -0x20,pvVar16);
LAB_021647f8:
      pvVar7 = *(void **)(unaff_x29 + -0x38);
      goto LAB_02164bfc;
    }
    uVar15 = FUN_04029138(*(undefined8 *)(unaff_x27 + 0x10),0);
    uVar15 = FUN_040282c0(uVar15,*(undefined8 *)(unaff_x29 + -0x60),
                          *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48),0);
    lVar12 = *(long *)(*unaff_x26 + 8);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01ecaf44(lVar12);
    }
    pvVar16 = (void *)FUN_01f08934(uVar15,lVar12,*(undefined8 *)(unaff_x29 + -0x30));
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar15 = FUN_03579868(uVar15,0);
    uVar8 = FUN_03579868(*(undefined8 *)
                          Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__,0);
    uVar14 = FUN_03582560(uVar15,uVar8,0);
    if ((uVar14 & 1) == 0) {
      uVar15 = *(undefined8 *)*unaff_x26;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar15 = FUN_03579868(uVar15,0);
      uVar8 = FUN_03579868(*(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__,0);
      uVar14 = FUN_03582560(uVar15,uVar8,0);
      if ((uVar14 & 1) == 0) {
        uVar15 = *(undefined8 *)*unaff_x26;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar15 = FUN_03579868(uVar15,0);
        uVar8 = FUN_03579868(*(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                             ,0);
        uVar14 = FUN_03582560(uVar15,uVar8,0);
        if ((uVar14 & 1) == 0) {
          uVar15 = *(undefined8 *)*unaff_x26;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar15 = FUN_03579868(uVar15,0);
          uVar8 = FUN_03579868(*(undefined8 *)
                                Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                               ,0);
          uVar14 = FUN_03582560(uVar15,uVar8,0);
          if ((uVar14 & 1) == 0) {
            uVar15 = *(undefined8 *)*unaff_x26;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar15 = FUN_03579868(uVar15,0);
            uVar8 = FUN_03579868(*(undefined8 *)
                                  Method_System_Globalization_Calendar_ToFourDigitYear__,0);
            uVar14 = FUN_03582560(uVar15,uVar8,0);
            if ((uVar14 & 1) == 0) {
              uVar15 = *(undefined8 *)*unaff_x26;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar15 = FUN_03579868(uVar15,0);
              uVar8 = FUN_03579868(*(undefined8 *)
                                    Method_System_Globalization_CalendarData_GetJapaneseEraNames__,0
                                  );
              uVar14 = FUN_03582560(uVar15,uVar8,0);
              if ((uVar14 & 1) == 0) {
                uVar15 = *(undefined8 *)*unaff_x26;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar15 = FUN_03579868(uVar15,0);
                uVar8 = FUN_03579868(*(undefined8 *)
                                      Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                                     ,0);
                uVar14 = FUN_03582560(uVar15,uVar8,0);
                if ((uVar14 & 1) == 0) {
                  uVar15 = *(undefined8 *)*unaff_x26;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar15 = FUN_03579868(uVar15,0);
                  uVar8 = FUN_03579868(*(undefined8 *)Method_Unity_VisualScripting_Cache_Store__,0);
                  uVar14 = FUN_03582560(uVar15,uVar8,0);
                  if ((uVar14 & 1) == 0) {
                    uVar15 = *(undefined8 *)*unaff_x26;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar15 = FUN_03579868(uVar15,0);
                    uVar8 = FUN_03579868(*(undefined8 *)
                                          Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                                         ,0);
                    uVar14 = FUN_03582560(uVar15,uVar8,0);
                    if ((uVar14 & 1) == 0) {
                      memset(pvVar7,0,__n_00);
                      pvVar16 = *(void **)(unaff_x29 + -0x30);
                      memcpy(pvVar16,pvVar7,__n_00);
                      goto LAB_021647f8;
                    }
                    uVar15 = FUN_04029138(*(undefined8 *)(unaff_x27 + 0x10),0);
                    uVar5 = FUN_04020ab4(uVar15,*(undefined8 *)(unaff_x29 + -0x60),
                                         *(undefined8 *)(unaff_x29 + -0x40),
                                         *(undefined8 *)(unaff_x29 + -0x48),0);
                    puVar1 = Method_System_IO_CStreamReader_Read__;
                    *(undefined2 *)(unaff_x29 + -0x20) = uVar5;
                    uVar15 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,unaff_x29 + -0x20);
                    lVar12 = *(long *)(*unaff_x26 + 8);
                    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                      lVar12 = FUN_01ecaf44(lVar12);
                    }
                    pvVar16 = (void *)FUN_01f08934(uVar15,lVar12,*(undefined8 *)(unaff_x29 + -0x30))
                    ;
                  }
                  else {
                    uVar15 = FUN_04029138(*(undefined8 *)(unaff_x27 + 0x10),0);
                    uVar15 = FUN_040209a8(uVar15,*(undefined8 *)(unaff_x29 + -0x60),
                                          *(undefined8 *)(unaff_x29 + -0x40),
                                          *(undefined8 *)(unaff_x29 + -0x48),0);
                    puVar1 = Method_System_Globalization_Calendar_TimeToTicks__;
                    *(undefined8 *)(unaff_x29 + -0x20) = uVar15;
                    uVar15 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,unaff_x29 + -0x20);
                    lVar12 = *(long *)(*unaff_x26 + 8);
                    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                      lVar12 = FUN_01ecaf44(lVar12);
                    }
                    pvVar16 = (void *)FUN_01f08934(uVar15,lVar12,*(undefined8 *)(unaff_x29 + -0x30))
                    ;
                  }
                }
                else {
                  uVar15 = FUN_04029138(*(undefined8 *)(unaff_x27 + 0x10),0);
                  uVar6 = FUN_0402089c(uVar15,*(undefined8 *)(unaff_x29 + -0x60),
                                       *(undefined8 *)(unaff_x29 + -0x40),
                                       *(undefined8 *)(unaff_x29 + -0x48),0);
                  puVar1 = 
                  Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                  ;
                  *(undefined4 *)(unaff_x29 + -0x20) = uVar6;
                  uVar15 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,unaff_x29 + -0x20);
                  lVar12 = *(long *)(*unaff_x26 + 8);
                  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                    lVar12 = FUN_01ecaf44(lVar12);
                  }
                  pvVar16 = (void *)FUN_01f08934(uVar15,lVar12,*(undefined8 *)(unaff_x29 + -0x30));
                }
              }
              else {
                uVar15 = FUN_04029138(*(undefined8 *)(unaff_x27 + 0x10),0);
                uVar15 = FUN_0402079c(uVar15,*(undefined8 *)(unaff_x29 + -0x60),
                                      *(undefined8 *)(unaff_x29 + -0x40),
                                      *(undefined8 *)(unaff_x29 + -0x48),0);
                puVar1 = Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
                *(undefined8 *)(unaff_x29 + -0x20) = uVar15;
                uVar15 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,unaff_x29 + -0x20);
                lVar12 = *(long *)(*unaff_x26 + 8);
                if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                  lVar12 = FUN_01ecaf44(lVar12);
                }
                pvVar16 = (void *)FUN_01f08934(uVar15,lVar12,*(undefined8 *)(unaff_x29 + -0x30));
              }
            }
            else {
              uVar15 = FUN_04029138(*(undefined8 *)(unaff_x27 + 0x10),0);
              uVar5 = FUN_0402059c(uVar15,*(undefined8 *)(unaff_x29 + -0x60),
                                   *(undefined8 *)(unaff_x29 + -0x40),
                                   *(undefined8 *)(unaff_x29 + -0x48),0);
              puVar1 = Method_System_Globalization_Calendar_VerifyWritable__;
              *(undefined2 *)(unaff_x29 + -0x20) = uVar5;
              uVar15 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,unaff_x29 + -0x20);
              lVar12 = *(long *)(*unaff_x26 + 8);
              if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = FUN_01ecaf44(lVar12);
              }
              pvVar16 = (void *)FUN_01f08934(uVar15,lVar12,*(undefined8 *)(unaff_x29 + -0x30));
            }
          }
          else {
            uVar15 = FUN_04029138(*(undefined8 *)(unaff_x27 + 0x10),0);
            uVar4 = FUN_0402049c(uVar15,*(undefined8 *)(unaff_x29 + -0x60),
                                 *(undefined8 *)(unaff_x29 + -0x40),
                                 *(undefined8 *)(unaff_x29 + -0x48),0);
            puVar1 = 
            Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__;
            *(undefined1 *)(unaff_x29 + -0x20) = uVar4;
            uVar15 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,unaff_x29 + -0x20);
            lVar12 = *(long *)(*unaff_x26 + 8);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_01ecaf44(lVar12);
            }
            pvVar16 = (void *)FUN_01f08934(uVar15,lVar12,*(undefined8 *)(unaff_x29 + -0x30));
          }
        }
        else {
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(*(undefined8 *)
                        Method_Oculus_Platform_Callback_SetNotificationCallback<LivestreamingStatus>__
                       ,0);
          uVar15 = FUN_04029138(*(undefined8 *)(unaff_x27 + 0x10),0);
          uVar4 = FUN_0402049c(uVar15,*(undefined8 *)(unaff_x29 + -0x60),
                               *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48)
                               ,0);
          puVar1 = Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
          *(undefined1 *)(unaff_x29 + -0x20) = uVar4;
          uVar15 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,unaff_x29 + -0x20);
          lVar12 = *(long *)(*unaff_x26 + 8);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01ecaf44(lVar12);
          }
          pvVar16 = (void *)FUN_01f08934(uVar15,lVar12,*(undefined8 *)(unaff_x29 + -0x30));
        }
      }
      else {
        uVar15 = FUN_04029138(*(undefined8 *)(unaff_x27 + 0x10),0);
        bVar3 = FUN_04020bb8(uVar15,*(undefined8 *)(unaff_x29 + -0x60),
                             *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48),0
                            );
        puVar1 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
        ;
        *(byte *)(unaff_x29 + -0x20) = bVar3 & 1;
        uVar15 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,unaff_x29 + -0x20);
        lVar12 = *(long *)(*unaff_x26 + 8);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44(lVar12);
        }
        pvVar16 = (void *)FUN_01f08934(uVar15,lVar12,*(undefined8 *)(unaff_x29 + -0x30));
      }
    }
    else {
      uVar15 = FUN_04029138(*(undefined8 *)(unaff_x27 + 0x10),0);
      uVar6 = FUN_0402069c(uVar15,*(undefined8 *)(unaff_x29 + -0x60),
                           *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48),0);
      puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
      *(undefined4 *)(unaff_x29 + -0x20) = uVar6;
      uVar15 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,unaff_x29 + -0x20);
      lVar12 = *(long *)(*unaff_x26 + 8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44(lVar12);
      }
      pvVar16 = (void *)FUN_01f08934(uVar15,lVar12,*(undefined8 *)(unaff_x29 + -0x30));
    }
  }
  pvVar7 = *(void **)(unaff_x29 + -0x38);
LAB_02164bfc:
  memcpy(pvVar7,pvVar16,__n_00);
  thunk_FUN_0401ea44(*(undefined8 *)(unaff_x29 + -0x28),*(undefined8 *)(unaff_x29 + -0x40),
                     *(undefined8 *)(unaff_x29 + -0x48),0);
  pvVar16 = *(void **)(unaff_x29 + -0x30);
  memcpy(pvVar16,*(void **)(unaff_x29 + -0x38),__n_00);
  memcpy(*(void **)(unaff_x29 + -0x58),pvVar16,__n_00);
  if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


