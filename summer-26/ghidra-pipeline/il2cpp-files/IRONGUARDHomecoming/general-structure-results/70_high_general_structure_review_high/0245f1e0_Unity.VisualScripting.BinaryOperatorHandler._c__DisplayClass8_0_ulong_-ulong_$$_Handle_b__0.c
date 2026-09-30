/*
FUNCTION_NAME: Unity.VisualScripting.BinaryOperatorHandler.<>c__DisplayClass8_0<ulong,-ulong>$$<Handle>b__0
ENTRY_POINT: 0245f1e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_BinaryOperatorHandler_<>c__DisplayClass8_0<ulong,_ulong>__<Handle>b__0
               (undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  long lVar9;
  int in_w9;
  size_t unaff_x20;
  undefined8 uVar10;
  void *unaff_x22;
  long unaff_x23;
  void *__dest;
  long *unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  undefined8 uVar11;
  long *plVar12;
  long *unaff_x28;
  long unaff_x29;
  
  if (in_w9 == 0) {
    thunk_FUN_01ee6d7c(param_1);
  }
  uVar3 = FUN_0402d484();
  if ((uVar3 & 1) == 0) {
    uVar11 = *(undefined8 *)
              Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
    ;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03579868(uVar11,0);
    uVar3 = FUN_03582560();
    *(void **)(unaff_x29 + -0x20) = unaff_x27;
    if ((uVar3 & 1) == 0) {
      uVar11 = *(undefined8 *)Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      *(long *)(unaff_x29 + -0x28) = unaff_x23;
      FUN_03579868(uVar11,0);
      uVar3 = FUN_03582560();
      if ((uVar3 & 1) == 0) {
        uVar11 = thunk_FUN_01efb3a4(Method_System_DBNull__ctor__);
        if (unaff_x25 == (long *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (**(code **)(*unaff_x25 + 0x168))();
        }
        uVar8 = thunk_FUN_01efb3a4(
                                  Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                  );
        uVar11 = FUN_0340ebc0(uVar11,uVar10,uVar8,0);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
        uVar10 = thunk_FUN_01f117cc();
        Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar10,uVar11,0);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar10,*(undefined8 *)(unaff_x29 + -0x18));
      }
      uVar2 = FUN_04028e80();
      plVar4 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalRotationPoseAtSurface__
                                    ,(ulong)uVar2);
      puVar1 = 
      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__;
      if (0 < (int)uVar2) {
        uVar3 = 0;
        lVar9 = 0x20;
        do {
          uVar11 = FUN_04024ea0();
          lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
          FUN_0402bc04(lVar5,uVar11,0);
          if (plVar4 == (long *)0x0) goto LAB_0245f81c;
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
            uVar11 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar11,0);
          }
          if (*(uint *)(plVar4 + 3) <= uVar3) goto LAB_0245f820;
          plVar4[uVar3 + 4] = lVar5;
          thunk_FUN_01f51358((long)plVar4 + lVar9,lVar5);
          FUN_04025b48(uVar11,0);
          uVar3 = uVar3 + 1;
          lVar9 = lVar9 + 8;
        } while (uVar2 != uVar3);
      }
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44(lVar9);
      }
      unaff_x23 = *(long *)(unaff_x29 + -0x28);
    }
    else {
      uVar2 = FUN_04028e80();
      plVar4 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                    ,(ulong)uVar2);
      if (0 < (int)uVar2) {
        uVar3 = 0;
        plVar12 = plVar4 + 4;
        do {
          uVar11 = FUN_04024ea0();
          lVar9 = FUN_04025c40(uVar11,0);
          if (plVar4 == (long *)0x0) {
LAB_0245f81c:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(plVar4 + 3) <= uVar3) {
LAB_0245f820:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *plVar12 = lVar9;
          thunk_FUN_01f51358(plVar12,lVar9);
          FUN_04025b48(uVar11,0);
          uVar3 = uVar3 + 1;
          plVar12 = plVar12 + 1;
        } while (uVar2 != uVar3);
      }
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44(lVar9);
      }
    }
    __dest = *(void **)(unaff_x29 + -0x10);
    unaff_x27 = *(void **)(unaff_x29 + -0x20);
    pvVar7 = (void *)FUN_01f08934(plVar4,lVar9,__dest);
LAB_0245f4f0:
    memcpy(unaff_x22,pvVar7,unaff_x20);
  }
  else {
    uVar11 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03579868(uVar11,0);
    uVar3 = FUN_03582560();
    if ((uVar3 & 1) == 0) {
      uVar11 = *(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_03579868(uVar11,0);
      uVar3 = FUN_03582560();
      if ((uVar3 & 1) == 0) {
        uVar11 = *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_03579868(uVar11,0);
        uVar3 = FUN_03582560();
        if ((uVar3 & 1) == 0) {
          uVar11 = *(undefined8 *)
                    Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
          ;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_03579868(uVar11,0);
          uVar3 = FUN_03582560();
          if ((uVar3 & 1) == 0) {
            uVar11 = *(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__;
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            FUN_03579868(uVar11,0);
            uVar3 = FUN_03582560();
            if ((uVar3 & 1) == 0) {
              uVar11 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEraNames__
              ;
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_03579868(uVar11,0);
              uVar3 = FUN_03582560();
              if ((uVar3 & 1) == 0) {
                uVar11 = *(undefined8 *)
                          Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                ;
                if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                FUN_03579868(uVar11,0);
                uVar3 = FUN_03582560();
                if ((uVar3 & 1) == 0) {
                  uVar11 = *(undefined8 *)Method_Unity_VisualScripting_Cache_Store__;
                  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  FUN_03579868(uVar11,0);
                  uVar3 = FUN_03582560();
                  if ((uVar3 & 1) == 0) {
                    uVar11 = *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                    ;
                    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    FUN_03579868(uVar11,0);
                    uVar3 = FUN_03582560();
                    if ((uVar3 & 1) == 0) {
                      memset(unaff_x26,0,unaff_x20);
                      pvVar7 = *(void **)(unaff_x29 + -0x10);
                      memcpy(pvVar7,unaff_x26,unaff_x20);
                      __dest = pvVar7;
                      goto LAB_0245f4f0;
                    }
                    uVar11 = FUN_04028338();
                  }
                  else {
                    uVar11 = FUN_040283d8();
                  }
                }
                else {
                  uVar11 = FUN_04028478();
                }
              }
              else {
                uVar11 = FUN_04028518();
              }
            }
            else {
              uVar11 = FUN_040285b8();
            }
          }
          else {
            uVar11 = FUN_040286f8();
          }
        }
        else {
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(*(undefined8 *)
                        Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalTranslationPoseAtSurface__
                       ,0);
          uVar11 = FUN_04028658();
        }
      }
      else {
        uVar11 = FUN_04028798();
      }
    }
    else {
      uVar11 = FUN_04028838();
    }
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    __dest = *(void **)(unaff_x29 + -0x10);
    pvVar7 = (void *)FUN_01f08934(uVar11,lVar9,__dest);
    memcpy(unaff_x22,pvVar7,unaff_x20);
  }
  memcpy(__dest,unaff_x22,unaff_x20);
  memcpy(unaff_x27,__dest,unaff_x20);
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


