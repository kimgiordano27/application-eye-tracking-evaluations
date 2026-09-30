/*
FUNCTION_NAME: Unity.VisualScripting.BinaryOperatorHandler.<>c__DisplayClass8_0<ushort,-uint>$$.ctor
ENTRY_POINT: 0245cd28
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined4
Unity_VisualScripting_BinaryOperatorHandler_<>c__DisplayClass8_0<ushort,_uint>___ctor(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x19;
  undefined8 uVar11;
  long *unaff_x23;
  long *plVar12;
  
  if (*(int *)(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__);
  }
  uVar3 = FUN_0402d484(param_1,0);
  if ((uVar3 & 1) == 0) {
    uVar11 = *(undefined8 *)
              Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
    ;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar11 = FUN_03579868(uVar11,0);
    uVar3 = FUN_03582560(param_1,uVar11,0);
    if ((uVar3 & 1) == 0) {
      uVar11 = *(undefined8 *)Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03579868(uVar11,0);
      uVar3 = FUN_03582560(param_1,uVar11,0);
      if ((uVar3 & 1) == 0) {
        uVar8 = thunk_FUN_01efb3a4(Method_System_DBNull__ctor__);
        uVar11 = 0;
        if (param_1 != (long *)0x0) {
          uVar11 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
        }
        uVar9 = thunk_FUN_01efb3a4(
                                  Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                  );
        uVar11 = FUN_0340ebc0(uVar8,uVar11,uVar9,0);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
        uVar8 = thunk_FUN_01f117cc();
        Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar8,uVar11,0);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar8);
      }
      uVar2 = FUN_04028e80();
      plVar4 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalRotationPoseAtSurface__
                                    ,(ulong)uVar2);
      puVar1 = 
      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__;
      if (0 < (int)uVar2) {
        uVar3 = 0;
        lVar10 = 0x20;
        do {
          uVar11 = FUN_04024ea0();
          lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
          FUN_0402bc04(lVar5,uVar11,0);
          if (plVar4 == (long *)0x0) goto LAB_0245d280;
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
            uVar11 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar11,0);
          }
          if (*(uint *)(plVar4 + 3) <= uVar3) goto LAB_0245d284;
          plVar4[uVar3 + 4] = lVar5;
          thunk_FUN_01f51358((long)plVar4 + lVar10,lVar5);
          FUN_04025b48(uVar11,0);
          uVar3 = uVar3 + 1;
          lVar10 = lVar10 + 8;
        } while (uVar2 != uVar3);
      }
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
          lVar10 = FUN_04025c40(uVar11,0);
          if (plVar4 == (long *)0x0) goto LAB_0245d280;
          if (*(uint *)(plVar4 + 3) <= uVar3) {
LAB_0245d284:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *plVar12 = lVar10;
          thunk_FUN_01f51358(plVar12,lVar10);
          FUN_04025b48(uVar11,0);
          uVar3 = uVar3 + 1;
          plVar12 = plVar12 + 1;
        } while (uVar2 != uVar3);
      }
    }
    lVar10 = *(long *)(unaff_x19 + 0x38);
  }
  else {
    uVar11 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar11 = FUN_03579868(uVar11,0);
    uVar3 = FUN_03582560(param_1,uVar11,0);
    if ((uVar3 & 1) == 0) {
      uVar11 = *(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03579868(uVar11,0);
      uVar3 = FUN_03582560(param_1,uVar11,0);
      if ((uVar3 & 1) == 0) {
        uVar11 = *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__;
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_03579868(uVar11,0);
        uVar3 = FUN_03582560(param_1,uVar11,0);
        if ((uVar3 & 1) == 0) {
          uVar11 = *(undefined8 *)
                    Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
          ;
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar11 = FUN_03579868(uVar11,0);
          uVar3 = FUN_03582560(param_1,uVar11,0);
          if ((uVar3 & 1) == 0) {
            uVar11 = *(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__;
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar11 = FUN_03579868(uVar11,0);
            uVar3 = FUN_03582560(param_1,uVar11,0);
            if ((uVar3 & 1) == 0) {
              uVar11 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEraNames__
              ;
              if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar11 = FUN_03579868(uVar11,0);
              uVar3 = FUN_03582560(param_1,uVar11,0);
              if ((uVar3 & 1) == 0) {
                uVar11 = *(undefined8 *)
                          Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                ;
                if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar11 = FUN_03579868(uVar11,0);
                uVar3 = FUN_03582560(param_1,uVar11,0);
                if ((uVar3 & 1) == 0) {
                  uVar11 = *(undefined8 *)Method_Unity_VisualScripting_Cache_Store__;
                  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar11 = FUN_03579868(uVar11,0);
                  uVar3 = FUN_03582560(param_1,uVar11,0);
                  if ((uVar3 & 1) == 0) {
                    uVar11 = *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                    ;
                    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar11 = FUN_03579868(uVar11,0);
                    uVar3 = FUN_03582560(param_1,uVar11,0);
                    if ((uVar3 & 1) == 0) {
                      return 0;
                    }
                    plVar4 = (long *)FUN_04028338();
                  }
                  else {
                    plVar4 = (long *)FUN_040283d8();
                  }
                }
                else {
                  plVar4 = (long *)FUN_04028478();
                }
              }
              else {
                plVar4 = (long *)FUN_04028518();
              }
            }
            else {
              plVar4 = (long *)FUN_040285b8();
            }
          }
          else {
            plVar4 = (long *)FUN_040286f8();
          }
        }
        else {
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(*(undefined8 *)
                        Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalTranslationPoseAtSurface__
                       ,0);
          plVar4 = (long *)FUN_04028658();
        }
      }
      else {
        plVar4 = (long *)FUN_04028798();
      }
    }
    else {
      plVar4 = (long *)FUN_04028838();
    }
    lVar10 = *(long *)(unaff_x19 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 8);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01ecaf44(lVar10);
  }
  if (plVar4 != (long *)0x0) {
    if (*(long *)(*plVar4 + 0x40) == *(long *)(lVar10 + 0x40)) {
      puVar7 = (undefined4 *)thunk_FUN_01f11920();
      return *puVar7;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(plVar4);
  }
LAB_0245d280:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


