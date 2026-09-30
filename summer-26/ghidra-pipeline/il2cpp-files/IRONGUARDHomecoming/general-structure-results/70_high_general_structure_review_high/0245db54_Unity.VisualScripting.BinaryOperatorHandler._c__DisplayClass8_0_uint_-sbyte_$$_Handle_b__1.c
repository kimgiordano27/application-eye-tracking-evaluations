/*
FUNCTION_NAME: Unity.VisualScripting.BinaryOperatorHandler.<>c__DisplayClass8_0<uint,-sbyte>$$<Handle>b__1
ENTRY_POINT: 0245db54
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Unity_VisualScripting_BinaryOperatorHandler_<>c__DisplayClass8_0<uint,_sbyte>__<Handle>b__1
               (undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar10 = *param_1;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar3 = (long *)FUN_03579868(uVar10,0);
  if (plVar3 == (long *)0x0) {
LAB_0245e118:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x438))(plVar3,*(undefined8 *)(*plVar3 + 0x440));
  if (*(int *)(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__);
  }
  uVar4 = FUN_0402d484(plVar3,0);
  if ((uVar4 & 1) == 0) {
    uVar10 = *(undefined8 *)
              Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
    ;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar10 = FUN_03579868(uVar10,0);
    uVar4 = FUN_03582560(plVar3,uVar10,0);
    if ((uVar4 & 1) == 0) {
      uVar10 = *(undefined8 *)Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar10 = FUN_03579868(uVar10,0);
      uVar4 = FUN_03582560(plVar3,uVar10,0);
      if ((uVar4 & 1) == 0) {
        uVar7 = thunk_FUN_01efb3a4(Method_System_DBNull__ctor__);
        uVar10 = 0;
        if (plVar3 != (long *)0x0) {
          uVar10 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        }
        uVar8 = thunk_FUN_01efb3a4(
                                  Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                  );
        uVar10 = FUN_0340ebc0(uVar7,uVar10,uVar8,0);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
        uVar7 = thunk_FUN_01f117cc();
        Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar7,uVar10,0);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar7);
      }
      uVar2 = FUN_04028e80();
      plVar3 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalRotationPoseAtSurface__
                                    ,(ulong)uVar2);
      puVar1 = 
      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__;
      if (0 < (int)uVar2) {
        uVar4 = 0;
        lVar9 = 0x20;
        do {
          uVar10 = FUN_04024ea0();
          lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
          FUN_0402bc04(lVar6,uVar10,0);
          if (plVar3 == (long *)0x0) goto LAB_0245e118;
          if ((lVar6 != 0) &&
             (lVar5 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
            uVar10 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar10,0);
          }
          if (*(uint *)(plVar3 + 3) <= uVar4) goto LAB_0245e11c;
          plVar3[uVar4 + 4] = lVar6;
          thunk_FUN_01f51358((long)plVar3 + lVar9,lVar6);
          FUN_04025b48(uVar10,0);
          uVar4 = uVar4 + 1;
          lVar9 = lVar9 + 8;
        } while (uVar2 != uVar4);
      }
    }
    else {
      uVar2 = FUN_04028e80();
      plVar3 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                    ,(ulong)uVar2);
      if (0 < (int)uVar2) {
        uVar4 = 0;
        plVar11 = plVar3 + 4;
        do {
          uVar10 = FUN_04024ea0();
          lVar9 = FUN_04025c40(uVar10,0);
          if (plVar3 == (long *)0x0) goto LAB_0245e118;
          if (*(uint *)(plVar3 + 3) <= uVar4) {
LAB_0245e11c:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *plVar11 = lVar9;
          thunk_FUN_01f51358(plVar11,lVar9);
          FUN_04025b48(uVar10,0);
          uVar4 = uVar4 + 1;
          plVar11 = plVar11 + 1;
        } while (uVar2 != uVar4);
      }
    }
    lVar9 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    if (plVar3 != (long *)0x0) {
      lVar6 = thunk_FUN_01f116d0(plVar3,lVar9);
      goto joined_r0x0245de6c;
    }
  }
  else {
    uVar10 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
                    /* try { // try from 0245dbe0 to 0255dbef has its CatchHandler @ 0245dbf0 */
    uVar10 = FUN_03579868(uVar10,0);
                    /* catch() { ... } // from try @ 0245dbe0 with catch @ 0245dbf0 */
                    /* catch() { ... } // from try @ 0245dac4 with catch @ 0245dbf4 */
    uVar4 = FUN_03582560(plVar3,uVar10,0);
                    /* try { // try from 0245dbf8 to 0255dbfb has its CatchHandler @ 0245dc04 */
    if ((uVar4 & 1) == 0) {
      uVar10 = *(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar10 = FUN_03579868(uVar10,0);
      uVar4 = FUN_03582560(plVar3,uVar10,0);
      if ((uVar4 & 1) == 0) {
        uVar10 = *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar10 = FUN_03579868(uVar10,0);
        uVar4 = FUN_03582560(plVar3,uVar10,0);
        if ((uVar4 & 1) == 0) {
          uVar10 = *(undefined8 *)
                    Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
          ;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar10 = FUN_03579868(uVar10,0);
          uVar4 = FUN_03582560(plVar3,uVar10,0);
          if ((uVar4 & 1) == 0) {
            uVar10 = *(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar10 = FUN_03579868(uVar10,0);
            uVar4 = FUN_03582560(plVar3,uVar10,0);
            if ((uVar4 & 1) == 0) {
              uVar10 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEraNames__
              ;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar10 = FUN_03579868(uVar10,0);
              uVar4 = FUN_03582560(plVar3,uVar10,0);
              if ((uVar4 & 1) == 0) {
                uVar10 = *(undefined8 *)
                          Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                ;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar10 = FUN_03579868(uVar10,0);
                uVar4 = FUN_03582560(plVar3,uVar10,0);
                if ((uVar4 & 1) == 0) {
                  uVar10 = *(undefined8 *)Method_Unity_VisualScripting_Cache_Store__;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar10 = FUN_03579868(uVar10,0);
                  uVar4 = FUN_03582560(plVar3,uVar10,0);
                  if ((uVar4 & 1) == 0) {
                    uVar10 = *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                    ;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar10 = FUN_03579868(uVar10,0);
                    uVar4 = FUN_03582560(plVar3,uVar10,0);
                    if ((uVar4 & 1) == 0) {
                      return 0;
                    }
                    plVar3 = (long *)FUN_04028338();
                  }
                  else {
                    plVar3 = (long *)FUN_040283d8();
                  }
                }
                else {
                  plVar3 = (long *)FUN_04028478();
                }
              }
              else {
                plVar3 = (long *)FUN_04028518();
              }
            }
            else {
              plVar3 = (long *)FUN_040285b8();
            }
          }
          else {
            plVar3 = (long *)FUN_040286f8();
          }
        }
        else {
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(*(undefined8 *)
                        Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalTranslationPoseAtSurface__
                       ,0);
          plVar3 = (long *)FUN_04028658();
        }
      }
      else {
        plVar3 = (long *)FUN_04028798();
      }
    }
    else {
                    /* try { // try from 0245dbfc to 0255dc07 has its CatchHandler @ 0245d934 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0245dbf8 with catch @ 0245dc04
                        */
      plVar3 = (long *)FUN_04028838();
                    /* try { // try from 0245dc08 to 0255dd23 has its CatchHandler @ 0245dc08
                       catch() { ... } // from try @ 0245dc08 with catch @ 0245dc08
                       catch() { ... } // from try @ 0245dd70 with catch @ 0245dc08
                       catch() { ... } // from try @ 0245ddac with catch @ 0245dc08
                       catch() { ... } // from try @ 0245ded0 with catch @ 0245dc08 */
    }
    lVar9 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    if (plVar3 != (long *)0x0) {
      lVar6 = thunk_FUN_01f116d0(plVar3,lVar9);
joined_r0x0245de6c:
      if (lVar6 != 0) {
        return lVar6;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar3,lVar9);
    }
  }
  return 0;
}


