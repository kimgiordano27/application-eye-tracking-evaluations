/*
FUNCTION_NAME: FUN_0245f008
ENTRY_POINT: 0245f008
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0245f008(undefined8 param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined1 *__src;
  void *__src_00;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong __n;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 *__s;
  long lVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long *plVar13;
  undefined1 auStack_90 [8];
  long local_88;
  void *local_80;
  long local_78;
  undefined1 *local_70;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  puVar7 = *(undefined8 **)(param_3 + 0x38);
  if (puVar7 == (undefined8 *)0x0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalRotationPoseAtSurface__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_IntPtrToByteArray__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_StringToNative__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Cache_Store__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_ToFourDigitYear__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEraNames__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalTranslationPoseAtSurface__
                      );
    puVar7 = *(undefined8 **)(param_3 + 0x38);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_01ecafa0(param_3);
      puVar7 = *(undefined8 **)(param_3 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(puVar7[1] + 0xfc);
  uVar9 = __n + 0xf & 0x1fffffff0;
  local_70 = auStack_90 + -uVar9;
  __s = local_70 + -uVar9;
  local_78 = param_3;
  memset(__s,0,__n);
  puVar12 = __s + -uVar9;
  memset(puVar12,0,__n);
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar11 = *puVar7;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar3 = (long *)FUN_03579868(uVar11,0);
  if (plVar3 == (long *)0x0) {
LAB_0245f81c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x438))(plVar3,*(undefined8 *)(*plVar3 + 0x440));
  if (*(int *)(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__);
  }
  uVar9 = FUN_0402d484(plVar3,0);
  if ((uVar9 & 1) == 0) {
    uVar11 = *(undefined8 *)
              Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
    ;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar11 = FUN_03579868(uVar11,0);
    uVar9 = FUN_03582560(plVar3,uVar11,0);
    local_80 = param_2;
    if ((uVar9 & 1) == 0) {
      uVar11 = *(undefined8 *)Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      local_88 = lVar10;
      uVar11 = FUN_03579868(uVar11,0);
      uVar9 = FUN_03582560(plVar3,uVar11,0);
      if ((uVar9 & 1) == 0) {
        uVar11 = thunk_FUN_01efb3a4(Method_System_DBNull__ctor__);
        if (plVar3 == (long *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        }
        uVar5 = thunk_FUN_01efb3a4(
                                  Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                  );
        uVar11 = FUN_0340ebc0(uVar11,uVar8,uVar5,0);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
        uVar8 = thunk_FUN_01f117cc();
        Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar8,uVar11,0);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar8,local_78);
      }
      uVar2 = FUN_04028e80(param_1,0);
      plVar3 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalRotationPoseAtSurface__
                                    ,(ulong)uVar2);
      puVar1 = 
      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__;
      if (0 < (int)uVar2) {
        uVar9 = 0;
        lVar10 = 0x20;
        do {
          uVar11 = FUN_04024ea0(param_1,uVar9 & 0xffffffff,0);
          lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
          FUN_0402bc04(lVar6,uVar11,0);
          if (plVar3 == (long *)0x0) goto LAB_0245f81c;
          if ((lVar6 != 0) &&
             (lVar4 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
            uVar11 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar11,0);
          }
          if (*(uint *)(plVar3 + 3) <= uVar9) goto LAB_0245f820;
          plVar3[uVar9 + 4] = lVar6;
          thunk_FUN_01f51358((long)plVar3 + lVar10,lVar6);
          FUN_04025b48(uVar11,0);
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 8;
        } while (uVar2 != uVar9);
      }
      lVar6 = *(long *)(*(long *)(local_78 + 0x38) + 8);
      lVar10 = local_88;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
        lVar10 = local_88;
      }
    }
    else {
      uVar2 = FUN_04028e80(param_1,0);
      plVar3 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                    ,(ulong)uVar2);
      if (0 < (int)uVar2) {
        uVar9 = 0;
        plVar13 = plVar3 + 4;
        do {
          uVar11 = FUN_04024ea0(param_1,uVar9 & 0xffffffff,0);
          lVar6 = FUN_04025c40(uVar11,0);
          if (plVar3 == (long *)0x0) goto LAB_0245f81c;
          if (*(uint *)(plVar3 + 3) <= uVar9) {
LAB_0245f820:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *plVar13 = lVar6;
          thunk_FUN_01f51358(plVar13,lVar6);
          FUN_04025b48(uVar11,0);
          uVar9 = uVar9 + 1;
          plVar13 = plVar13 + 1;
        } while (uVar2 != uVar9);
      }
      lVar6 = *(long *)(*(long *)(local_78 + 0x38) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
    }
    puVar12 = local_70;
    param_2 = local_80;
    __src = (undefined1 *)FUN_01f08934(plVar3,lVar6,local_70);
LAB_0245f4f0:
    memcpy(__s,__src,__n);
  }
  else {
    uVar11 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar11 = FUN_03579868(uVar11,0);
    uVar9 = FUN_03582560(plVar3,uVar11,0);
    if ((uVar9 & 1) == 0) {
      uVar11 = *(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03579868(uVar11,0);
      uVar9 = FUN_03582560(plVar3,uVar11,0);
      if ((uVar9 & 1) == 0) {
        uVar11 = *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_03579868(uVar11,0);
        uVar9 = FUN_03582560(plVar3,uVar11,0);
        if ((uVar9 & 1) == 0) {
          uVar11 = *(undefined8 *)
                    Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
          ;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar11 = FUN_03579868(uVar11,0);
          uVar9 = FUN_03582560(plVar3,uVar11,0);
          if ((uVar9 & 1) == 0) {
            uVar11 = *(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar11 = FUN_03579868(uVar11,0);
            uVar9 = FUN_03582560(plVar3,uVar11,0);
            if ((uVar9 & 1) == 0) {
              uVar11 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEraNames__
              ;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar11 = FUN_03579868(uVar11,0);
              uVar9 = FUN_03582560(plVar3,uVar11,0);
              if ((uVar9 & 1) == 0) {
                uVar11 = *(undefined8 *)
                          Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                ;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar11 = FUN_03579868(uVar11,0);
                uVar9 = FUN_03582560(plVar3,uVar11,0);
                if ((uVar9 & 1) == 0) {
                  uVar11 = *(undefined8 *)Method_Unity_VisualScripting_Cache_Store__;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar11 = FUN_03579868(uVar11,0);
                  uVar9 = FUN_03582560(plVar3,uVar11,0);
                  if ((uVar9 & 1) == 0) {
                    uVar11 = *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                    ;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar11 = FUN_03579868(uVar11,0);
                    uVar9 = FUN_03582560(plVar3,uVar11,0);
                    if ((uVar9 & 1) == 0) {
                      memset(puVar12,0,__n);
                      __src = local_70;
                      memcpy(local_70,puVar12,__n);
                      puVar12 = __src;
                      goto LAB_0245f4f0;
                    }
                    uVar11 = FUN_04028338(param_1,0);
                  }
                  else {
                    uVar11 = FUN_040283d8(param_1,0);
                  }
                }
                else {
                  uVar11 = FUN_04028478(param_1,0);
                }
              }
              else {
                uVar11 = FUN_04028518(param_1,0);
              }
            }
            else {
              uVar11 = FUN_040285b8(param_1,0);
            }
          }
          else {
            uVar11 = FUN_040286f8(param_1,0);
          }
        }
        else {
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(*(undefined8 *)
                        Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalTranslationPoseAtSurface__
                       ,0);
          uVar11 = FUN_04028658(param_1,0);
        }
      }
      else {
        uVar11 = FUN_04028798(param_1,0);
      }
    }
    else {
      uVar11 = FUN_04028838(param_1,0);
    }
    lVar6 = *(long *)(*(long *)(local_78 + 0x38) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    puVar12 = local_70;
    __src_00 = (void *)FUN_01f08934(uVar11,lVar6,local_70);
    memcpy(__s,__src_00,__n);
  }
  memcpy(puVar12,__s,__n);
  memcpy(param_2,puVar12,__n);
  if (*(long *)(lVar10 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


