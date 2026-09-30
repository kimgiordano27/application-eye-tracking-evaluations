/*
FUNCTION_NAME: System.Array$$Sort<UsageHint>
ENTRY_POINT: 02160dc4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


long System_Array__Sort<UsageHint>(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong __n;
  long unaff_x19;
  undefined1 *__s;
  ulong uVar12;
  long unaff_x23;
  long unaff_x24;
  long lVar13;
  undefined8 uVar14;
  long *unaff_x28;
  long unaff_x29;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x550));
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
  if (*(long *)(unaff_x24 + 0x38) == 0) {
    FUN_01ecafa0();
  }
  if ((unaff_x19 != 0) && (uVar12 = *(ulong *)(unaff_x19 + 0x18), uVar12 != 0)) {
    __n = -(uVar12 >> 0x1f & 1) & 0xfffffff800000000 | (uVar12 & 0xffffffff) << 3;
    if ((uVar12 & 0xffffffff) == 0) {
      __s = (undefined1 *)0x0;
    }
    else {
      __s = &stack0x00000000 + -(__n + 0xf & 0xfffffffffffffff0);
    }
    memset(__s,0,__n);
    if ((int)uVar12 < 0) {
      FUN_0358adfc(0);
    }
  }
  FUN_0401e8c8();
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar14 = *(undefined8 *)*unaff_x28;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar14 = FUN_03579868(uVar14,0);
  puVar2 = Method_Oculus_Platform_CAPI_IntPtrToByteArray__;
  if (*(int *)(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar12 = FUN_0402d484(uVar14,0);
  uVar14 = *(undefined8 *)*unaff_x28;
  if ((uVar12 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar14 = FUN_03579868(uVar14,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                         ,0);
    uVar12 = FUN_03582560(uVar14,uVar7,0);
    if ((uVar12 & 1) == 0) {
      uVar14 = *(undefined8 *)*unaff_x28;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar14 = FUN_03579868(uVar14,0);
      uVar7 = FUN_03579868(*(undefined8 *)
                            Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__
                           ,0);
      uVar12 = FUN_03582560(uVar14,uVar7,0);
      if ((uVar12 & 1) == 0) {
        uVar14 = *(undefined8 *)*unaff_x28;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar14 = FUN_03579868(uVar14,0);
        uVar7 = FUN_03579868(*(undefined8 *)
                              Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__,0);
        uVar12 = FUN_03582560(uVar14,uVar7,0);
        if ((uVar12 & 1) == 0) {
          uVar14 = *(undefined8 *)
                    Method_System_Globalization_CalendarData_InitializeAbbreviatedEraNames__;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar14 = FUN_03579868(uVar14,0);
          uVar7 = FUN_03579868(*(undefined8 *)*unaff_x28,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = FUN_0402d498(uVar14,uVar7,0);
          if ((uVar12 & 1) == 0) {
            uVar14 = *(undefined8 *)*unaff_x28;
            lVar9 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar10 = (long *)FUN_03579868(uVar14,0);
            if (plVar10 == (long *)0x0) {
              uVar14 = thunk_FUN_01efb3a4(
                                         Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncConnection>__
                                         );
              uVar7 = 0;
            }
            else {
              uVar14 = thunk_FUN_01efb3a4(
                                         Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncConnection>__
                                         );
              uVar7 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
            }
            uVar11 = thunk_FUN_01efb3a4(
                                       Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                       );
            uVar14 = FUN_0340ebc0(uVar14,uVar7,uVar11,0);
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
            uVar7 = thunk_FUN_01f117cc();
            Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar7,uVar14,0);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar7);
          }
          FUN_04029138(*(undefined8 *)(unaff_x23 + 0x10),0);
          uVar14 = UnityEngine_UIElements_ReusableTreeViewItem__remove_onToggleValueChanged();
          lVar9 = FUN_0215976c(uVar14,*(undefined8 *)(*unaff_x28 + 0x10));
          goto LAB_02161948;
        }
        FUN_04029138(*(undefined8 *)(unaff_x23 + 0x10),0);
        uVar14 = UnityEngine_UIElements_ReusableTreeViewItem__remove_onToggleValueChanged();
        uVar12 = FUN_035ad140(uVar14,0,0);
        if ((uVar12 & 1) == 0) {
          lVar8 = FUN_0402bd14(uVar14,0);
          lVar13 = *(long *)(*unaff_x28 + 8);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_01ecaf44(lVar13);
          }
          if (lVar8 != 0) {
            lVar9 = thunk_FUN_01f116d0(lVar8,lVar13);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(lVar8,lVar13);
            }
            goto LAB_02161948;
          }
        }
      }
      else {
        FUN_04029138(*(undefined8 *)(unaff_x23 + 0x10),0);
        uVar14 = UnityEngine_UIElements_ReusableTreeViewItem__remove_onToggleValueChanged();
        uVar12 = FUN_035ad140(uVar14,0,0);
        if ((uVar12 & 1) == 0) {
          lVar8 = FUN_0402d2f0(uVar14,0);
          lVar13 = *(long *)(*unaff_x28 + 8);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_01ecaf44(lVar13);
          }
          if (lVar8 != 0) {
            lVar9 = thunk_FUN_01f116d0(lVar8,lVar13);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(lVar8,lVar13);
            }
            goto LAB_02161948;
          }
        }
      }
    }
    else {
      FUN_04029138(*(undefined8 *)(unaff_x23 + 0x10),0);
      lVar8 = FUN_040282c0();
      lVar13 = *(long *)(*unaff_x28 + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_01ecaf44(lVar13);
      }
      if (lVar8 != 0) {
        lVar9 = thunk_FUN_01f116d0(lVar8,lVar13);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar8,lVar13);
        }
        goto LAB_02161948;
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar14 = FUN_03579868(uVar14,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__,0);
    uVar12 = FUN_03582560(uVar14,uVar7,0);
    if ((uVar12 & 1) == 0) {
      uVar14 = *(undefined8 *)*unaff_x28;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar14 = FUN_03579868(uVar14,0);
      uVar7 = FUN_03579868(*(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__,0);
      uVar12 = FUN_03582560(uVar14,uVar7,0);
      if ((uVar12 & 1) == 0) {
        uVar14 = *(undefined8 *)*unaff_x28;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar14 = FUN_03579868(uVar14,0);
        uVar7 = FUN_03579868(*(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                             ,0);
        uVar12 = FUN_03582560(uVar14,uVar7,0);
        if ((uVar12 & 1) == 0) {
          uVar14 = *(undefined8 *)*unaff_x28;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar14 = FUN_03579868(uVar14,0);
          uVar7 = FUN_03579868(*(undefined8 *)
                                Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                               ,0);
          uVar12 = FUN_03582560(uVar14,uVar7,0);
          if ((uVar12 & 1) == 0) {
            uVar14 = *(undefined8 *)*unaff_x28;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar14 = FUN_03579868(uVar14,0);
            uVar7 = FUN_03579868(*(undefined8 *)
                                  Method_System_Globalization_Calendar_ToFourDigitYear__,0);
            uVar12 = FUN_03582560(uVar14,uVar7,0);
            if ((uVar12 & 1) == 0) {
              uVar14 = *(undefined8 *)*unaff_x28;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar14 = FUN_03579868(uVar14,0);
              uVar7 = FUN_03579868(*(undefined8 *)
                                    Method_System_Globalization_CalendarData_GetJapaneseEraNames__,0
                                  );
              uVar12 = FUN_03582560(uVar14,uVar7,0);
              if ((uVar12 & 1) == 0) {
                uVar14 = *(undefined8 *)*unaff_x28;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar14 = FUN_03579868(uVar14,0);
                uVar7 = FUN_03579868(*(undefined8 *)
                                      Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                                     ,0);
                uVar12 = FUN_03582560(uVar14,uVar7,0);
                if ((uVar12 & 1) == 0) {
                  uVar14 = *(undefined8 *)*unaff_x28;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar14 = FUN_03579868(uVar14,0);
                  uVar7 = FUN_03579868(*(undefined8 *)Method_Unity_VisualScripting_Cache_Store__,0);
                  uVar12 = FUN_03582560(uVar14,uVar7,0);
                  if ((uVar12 & 1) == 0) {
                    uVar14 = *(undefined8 *)*unaff_x28;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar14 = FUN_03579868(uVar14,0);
                    uVar7 = FUN_03579868(*(undefined8 *)
                                          Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                                         ,0);
                    uVar12 = FUN_03582560(uVar14,uVar7,0);
                    if ((uVar12 & 1) != 0) {
                      FUN_04029138(*(undefined8 *)(unaff_x23 + 0x10),0);
                      uVar5 = FUN_04020ab4();
                      puVar1 = Method_System_IO_CStreamReader_Read__;
                      *(undefined2 *)(unaff_x29 + -0x10) = uVar5;
                      lVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,unaff_x29 + -0x10);
                      lVar13 = *(long *)(*unaff_x28 + 8);
                      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                        lVar13 = FUN_01ecaf44(lVar13);
                      }
                      if (lVar8 != 0) {
                        lVar9 = thunk_FUN_01f116d0(lVar8,lVar13);
                        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08cfc(lVar8,lVar13);
                        }
                        goto LAB_02161948;
                      }
                    }
                  }
                  else {
                    FUN_04029138(*(undefined8 *)(unaff_x23 + 0x10),0);
                    uVar14 = FUN_040209a8();
                    puVar1 = Method_System_Globalization_Calendar_TimeToTicks__;
                    *(undefined8 *)(unaff_x29 + -0x10) = uVar14;
                    lVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,unaff_x29 + -0x10);
                    lVar13 = *(long *)(*unaff_x28 + 8);
                    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                      lVar13 = FUN_01ecaf44(lVar13);
                    }
                    if (lVar8 != 0) {
                      lVar9 = thunk_FUN_01f116d0(lVar8,lVar13);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08cfc(lVar8,lVar13);
                      }
                      goto LAB_02161948;
                    }
                  }
                }
                else {
                  FUN_04029138(*(undefined8 *)(unaff_x23 + 0x10),0);
                  uVar6 = FUN_0402089c();
                  puVar1 = 
                  Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                  ;
                  *(undefined4 *)(unaff_x29 + -0x10) = uVar6;
                  lVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,unaff_x29 + -0x10);
                  lVar13 = *(long *)(*unaff_x28 + 8);
                  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                    lVar13 = FUN_01ecaf44(lVar13);
                  }
                  if (lVar8 != 0) {
                    lVar9 = thunk_FUN_01f116d0(lVar8,lVar13);
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08cfc(lVar8,lVar13);
                    }
                    goto LAB_02161948;
                  }
                }
              }
              else {
                FUN_04029138(*(undefined8 *)(unaff_x23 + 0x10),0);
                uVar14 = FUN_0402079c();
                puVar1 = Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
                *(undefined8 *)(unaff_x29 + -0x10) = uVar14;
                lVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,unaff_x29 + -0x10);
                lVar13 = *(long *)(*unaff_x28 + 8);
                if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                  lVar13 = FUN_01ecaf44(lVar13);
                }
                if (lVar8 != 0) {
                  lVar9 = thunk_FUN_01f116d0(lVar8,lVar13);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08cfc(lVar8,lVar13);
                  }
                  goto LAB_02161948;
                }
              }
            }
            else {
              FUN_04029138(*(undefined8 *)(unaff_x23 + 0x10),0);
              uVar5 = FUN_0402059c();
              puVar1 = Method_System_Globalization_Calendar_VerifyWritable__;
              *(undefined2 *)(unaff_x29 + -0x10) = uVar5;
              lVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,unaff_x29 + -0x10);
              lVar13 = *(long *)(*unaff_x28 + 8);
              if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = FUN_01ecaf44(lVar13);
              }
              if (lVar8 != 0) {
                lVar9 = thunk_FUN_01f116d0(lVar8,lVar13);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08cfc(lVar8,lVar13);
                }
                goto LAB_02161948;
              }
            }
          }
          else {
            FUN_04029138(*(undefined8 *)(unaff_x23 + 0x10),0);
            uVar4 = FUN_0402049c();
            puVar1 = 
            Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__;
            *(undefined1 *)(unaff_x29 + -0x10) = uVar4;
            lVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,unaff_x29 + -0x10);
            lVar13 = *(long *)(*unaff_x28 + 8);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = FUN_01ecaf44(lVar13);
            }
            if (lVar8 != 0) {
              lVar9 = thunk_FUN_01f116d0(lVar8,lVar13);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(lVar8,lVar13);
              }
              goto LAB_02161948;
            }
          }
        }
        else {
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(*(undefined8 *)
                        Method_Oculus_Platform_Callback_SetNotificationCallback<LivestreamingStatus>__
                       ,0);
          FUN_04029138(*(undefined8 *)(unaff_x23 + 0x10),0);
          uVar4 = FUN_0402049c();
          puVar1 = Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
          *(undefined1 *)(unaff_x29 + -0x10) = uVar4;
          lVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,unaff_x29 + -0x10);
          lVar13 = *(long *)(*unaff_x28 + 8);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_01ecaf44(lVar13);
          }
          if (lVar8 != 0) {
            lVar9 = thunk_FUN_01f116d0(lVar8,lVar13);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(lVar8,lVar13);
            }
            goto LAB_02161948;
          }
        }
      }
      else {
        FUN_04029138(*(undefined8 *)(unaff_x23 + 0x10),0);
        bVar3 = FUN_04020bb8();
        puVar1 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
        ;
        *(byte *)(unaff_x29 + -0x10) = bVar3 & 1;
        lVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,unaff_x29 + -0x10);
        lVar13 = *(long *)(*unaff_x28 + 8);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_01ecaf44(lVar13);
        }
        if (lVar8 != 0) {
          lVar9 = thunk_FUN_01f116d0(lVar8,lVar13);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar8,lVar13);
          }
          goto LAB_02161948;
        }
      }
    }
    else {
      FUN_04029138(*(undefined8 *)(unaff_x23 + 0x10),0);
      uVar6 = FUN_0402069c();
      puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
      *(undefined4 *)(unaff_x29 + -0x10) = uVar6;
      lVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,unaff_x29 + -0x10);
      lVar13 = *(long *)(*unaff_x28 + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_01ecaf44(lVar13);
      }
      if (lVar8 != 0) {
        lVar9 = thunk_FUN_01f116d0(lVar8,lVar13);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar8,lVar13);
        }
        goto LAB_02161948;
      }
    }
  }
  lVar9 = 0;
LAB_02161948:
  thunk_FUN_0401ea44();
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar9;
}


