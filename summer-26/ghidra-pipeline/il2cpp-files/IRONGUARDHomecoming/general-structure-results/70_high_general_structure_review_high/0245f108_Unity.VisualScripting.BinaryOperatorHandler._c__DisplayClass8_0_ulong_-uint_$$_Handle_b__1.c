/*
FUNCTION_NAME: Unity.VisualScripting.BinaryOperatorHandler.<>c__DisplayClass8_0<ulong,-uint>$$<Handle>b__1
ENTRY_POINT: 0245f108
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_BinaryOperatorHandler_<>c__DisplayClass8_0<ulong,_uint>__<Handle>b__1
               (void)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x20;
  ulong __n;
  undefined8 uVar10;
  ulong uVar11;
  void *__s;
  long unaff_x23;
  undefined8 uVar12;
  void *pvVar13;
  void *unaff_x27;
  long *plVar14;
  long unaff_x29;
  
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  thunk_FUN_01efb3a4(
                    Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalTranslationPoseAtSurface__
                    );
  puVar9 = *(undefined8 **)(unaff_x20 + 0x38);
  if (puVar9 == (undefined8 *)0x0) {
    FUN_01ecafa0();
    puVar9 = *(undefined8 **)(unaff_x20 + 0x38);
  }
  lVar8 = puVar9[1];
  *(long *)(unaff_x29 + -0x18) = unaff_x20;
  __n = (ulong)*(uint *)(lVar8 + 0xfc);
  uVar11 = __n + 0xf & 0x1fffffff0;
  *(ulong *)(unaff_x29 + -0x10) = (long)&stack0x00000000 - uVar11;
  __s = (void *)(((long)&stack0x00000000 - uVar11) - uVar11);
  memset(__s,0,__n);
  pvVar13 = (void *)((long)__s - uVar11);
  memset(pvVar13,0,__n);
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar12 = *puVar9;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar3 = (long *)FUN_03579868(uVar12,0);
  if (plVar3 == (long *)0x0) {
LAB_0245f81c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x438))(plVar3,*(undefined8 *)(*plVar3 + 0x440));
  if (*(int *)(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__);
  }
  uVar11 = FUN_0402d484(plVar3,0);
  if ((uVar11 & 1) == 0) {
    uVar12 = *(undefined8 *)
              Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
    ;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar12 = FUN_03579868(uVar12,0);
    uVar11 = FUN_03582560(plVar3,uVar12,0);
    *(void **)(unaff_x29 + -0x20) = unaff_x27;
    if ((uVar11 & 1) == 0) {
      uVar12 = *(undefined8 *)Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      *(long *)(unaff_x29 + -0x28) = unaff_x23;
      uVar12 = FUN_03579868(uVar12,0);
      uVar11 = FUN_03582560(plVar3,uVar12,0);
      if ((uVar11 & 1) == 0) {
        uVar12 = thunk_FUN_01efb3a4(Method_System_DBNull__ctor__);
        if (plVar3 == (long *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        }
        uVar7 = thunk_FUN_01efb3a4(
                                  Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                  );
        uVar12 = FUN_0340ebc0(uVar12,uVar10,uVar7,0);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
        uVar10 = thunk_FUN_01f117cc();
        Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar10,uVar12,0);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar10,*(undefined8 *)(unaff_x29 + -0x18));
      }
      uVar2 = FUN_04028e80();
      plVar3 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalRotationPoseAtSurface__
                                    ,(ulong)uVar2);
      puVar1 = 
      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__;
      if (0 < (int)uVar2) {
        uVar11 = 0;
        lVar8 = 0x20;
        do {
          uVar12 = FUN_04024ea0();
          lVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
          FUN_0402bc04(lVar4,uVar12,0);
          if (plVar3 == (long *)0x0) goto LAB_0245f81c;
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
            uVar12 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar12,0);
          }
          if (*(uint *)(plVar3 + 3) <= uVar11) goto LAB_0245f820;
          plVar3[uVar11 + 4] = lVar4;
          thunk_FUN_01f51358((long)plVar3 + lVar8,lVar4);
          FUN_04025b48(uVar12,0);
          uVar11 = uVar11 + 1;
          lVar8 = lVar8 + 8;
        } while (uVar2 != uVar11);
      }
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      unaff_x23 = *(long *)(unaff_x29 + -0x28);
    }
    else {
      uVar2 = FUN_04028e80();
      plVar3 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                    ,(ulong)uVar2);
      if (0 < (int)uVar2) {
        uVar11 = 0;
        plVar14 = plVar3 + 4;
        do {
          uVar12 = FUN_04024ea0();
          lVar8 = FUN_04025c40(uVar12,0);
          if (plVar3 == (long *)0x0) goto LAB_0245f81c;
          if (*(uint *)(plVar3 + 3) <= uVar11) {
LAB_0245f820:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *plVar14 = lVar8;
          thunk_FUN_01f51358(plVar14,lVar8);
          FUN_04025b48(uVar12,0);
          uVar11 = uVar11 + 1;
          plVar14 = plVar14 + 1;
        } while (uVar2 != uVar11);
      }
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
    }
    pvVar13 = *(void **)(unaff_x29 + -0x10);
    unaff_x27 = *(void **)(unaff_x29 + -0x20);
    pvVar6 = (void *)FUN_01f08934(plVar3,lVar8,pvVar13);
LAB_0245f4f0:
    memcpy(__s,pvVar6,__n);
  }
  else {
    uVar12 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar12 = FUN_03579868(uVar12,0);
    uVar11 = FUN_03582560(plVar3,uVar12,0);
    if ((uVar11 & 1) == 0) {
      uVar12 = *(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar12 = FUN_03579868(uVar12,0);
      uVar11 = FUN_03582560(plVar3,uVar12,0);
      if ((uVar11 & 1) == 0) {
        uVar12 = *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar12 = FUN_03579868(uVar12,0);
        uVar11 = FUN_03582560(plVar3,uVar12,0);
        if ((uVar11 & 1) == 0) {
          uVar12 = *(undefined8 *)
                    Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
          ;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = FUN_03579868(uVar12,0);
          uVar11 = FUN_03582560(plVar3,uVar12,0);
          if ((uVar11 & 1) == 0) {
            uVar12 = *(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar12 = FUN_03579868(uVar12,0);
            uVar11 = FUN_03582560(plVar3,uVar12,0);
            if ((uVar11 & 1) == 0) {
              uVar12 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEraNames__
              ;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar12 = FUN_03579868(uVar12,0);
              uVar11 = FUN_03582560(plVar3,uVar12,0);
              if ((uVar11 & 1) == 0) {
                uVar12 = *(undefined8 *)
                          Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                ;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar12 = FUN_03579868(uVar12,0);
                uVar11 = FUN_03582560(plVar3,uVar12,0);
                if ((uVar11 & 1) == 0) {
                  uVar12 = *(undefined8 *)Method_Unity_VisualScripting_Cache_Store__;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar12 = FUN_03579868(uVar12,0);
                  uVar11 = FUN_03582560(plVar3,uVar12,0);
                  if ((uVar11 & 1) == 0) {
                    uVar12 = *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                    ;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar12 = FUN_03579868(uVar12,0);
                    uVar11 = FUN_03582560(plVar3,uVar12,0);
                    if ((uVar11 & 1) == 0) {
                      memset(pvVar13,0,__n);
                      pvVar6 = *(void **)(unaff_x29 + -0x10);
                      memcpy(pvVar6,pvVar13,__n);
                      pvVar13 = pvVar6;
                      goto LAB_0245f4f0;
                    }
                    uVar12 = FUN_04028338();
                  }
                  else {
                    uVar12 = FUN_040283d8();
                  }
                }
                else {
                  uVar12 = FUN_04028478();
                }
              }
              else {
                uVar12 = FUN_04028518();
              }
            }
            else {
              uVar12 = FUN_040285b8();
            }
          }
          else {
            uVar12 = FUN_040286f8();
          }
        }
        else {
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(*(undefined8 *)
                        Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalTranslationPoseAtSurface__
                       ,0);
          uVar12 = FUN_04028658();
        }
      }
      else {
        uVar12 = FUN_04028798();
      }
    }
    else {
      uVar12 = FUN_04028838();
    }
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    pvVar13 = *(void **)(unaff_x29 + -0x10);
    pvVar6 = (void *)FUN_01f08934(uVar12,lVar8,pvVar13);
    memcpy(__s,pvVar6,__n);
  }
  memcpy(pvVar13,__s,__n);
  memcpy(unaff_x27,pvVar13,__n);
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


