/*
FUNCTION_NAME: Unity.VisualScripting.BinaryOperatorHandler.<>c__DisplayClass8_0<float,-short>$$<Handle>b__0
ENTRY_POINT: 0245b050
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


bool Unity_VisualScripting_BinaryOperatorHandler_<>c__DisplayClass8_0<float,_short>__<Handle>b__0
               (void)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  code *in_x9;
  long unaff_x19;
  undefined8 uVar11;
  long *unaff_x23;
  long *plVar12;
  
                    /* try { // try from 0245b050 to 0255b06f has its CatchHandler @ 0245b0fc */
  plVar3 = (long *)(*in_x9)();
  if (*(int *)(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__ + 0xe0) == 0) {
                    /* try { // try from 0245b070 to 0255b097 has its CatchHandler @ 0245b0f8 */
    thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__);
  }
  uVar4 = FUN_0402d484(plVar3,0);
  if ((uVar4 & 1) == 0) {
    uVar11 = *(undefined8 *)
              Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
    ;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                    /* try { // try from 0245b0e8 to 0255b0eb has its CatchHandler @ 0245b0fc */
      thunk_FUN_01ee6d7c();
    }
                    /* try { // try from 0245b0ec to 0255b0ef has its CatchHandler @ 0245b0f8 */
                    /* catch() { ... } // from try @ 0245b0a8 with catch @ 0245b0f0
                       try { // try from 0245b0f0 to 0255b14b has its CatchHandler @ 0245ac4c */
                    /* catch() { ... } // from try @ 0245b098 with catch @ 0245b0f4 */
    uVar11 = FUN_03579868(uVar11,0);
                    /* catch() { ... } // from try @ 0245b070 with catch @ 0245b0f8
                       catch() { ... } // from try @ 0245b0ec with catch @ 0245b0f8 */
                    /* catch() { ... } // from try @ 0245b050 with catch @ 0245b0fc
                       catch() { ... } // from try @ 0245b0e8 with catch @ 0245b0fc */
                    /* catch() { ... } // from try @ 0245b034 with catch @ 0245b100 */
                    /* catch() { ... } // from try @ 0245b028 with catch @ 0245b104 */
    uVar4 = FUN_03582560(plVar3,uVar11,0);
                    /* catch() { ... } // from try @ 0245affc with catch @ 0245b108
                       catch() { ... } // from try @ 0245b030 with catch @ 0245b108 */
    if ((uVar4 & 1) == 0) {
      uVar11 = *(undefined8 *)Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03579868(uVar11,0);
      uVar4 = FUN_03582560(plVar3,uVar11,0);
      if ((uVar4 & 1) == 0) {
        uVar8 = thunk_FUN_01efb3a4(Method_System_DBNull__ctor__);
        uVar11 = 0;
        if (plVar3 != (long *)0x0) {
          uVar11 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
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
      plVar3 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalRotationPoseAtSurface__
                                    ,(ulong)uVar2);
      puVar1 = 
      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__;
      if (0 < (int)uVar2) {
        uVar4 = 0;
        lVar10 = 0x20;
        do {
          uVar11 = FUN_04024ea0();
          lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
          FUN_0402bc04(lVar5,uVar11,0);
          if (plVar3 == (long *)0x0) goto LAB_0245b5b4;
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0)) {
            uVar11 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar11,0);
          }
          if (*(uint *)(plVar3 + 3) <= uVar4) goto LAB_0245b5b8;
          plVar3[uVar4 + 4] = lVar5;
          thunk_FUN_01f51358((long)plVar3 + lVar10,lVar5);
          FUN_04025b48(uVar11,0);
          uVar4 = uVar4 + 1;
          lVar10 = lVar10 + 8;
        } while (uVar2 != uVar4);
      }
    }
    else {
                    /* catch() { ... } // from try @ 0245afdc with catch @ 0245b10c
                       catch() { ... } // from try @ 0245b02c with catch @ 0245b10c */
                    /* catch() { ... } // from try @ 0245afc0 with catch @ 0245b110 */
                    /* catch() { ... } // from try @ 0245afa8 with catch @ 0245b114 */
      uVar2 = FUN_04028e80();
                    /* catch() { ... } // from try @ 0245af64 with catch @ 0245b118
                       catch() { ... } // from try @ 0245af78 with catch @ 0245b118 */
                    /* catch() { ... } // from try @ 0245af48 with catch @ 0245b11c */
                    /* catch() { ... } // from try @ 0245aeb0 with catch @ 0245b120 */
                    /* catch() { ... } // from try @ 0245aea8 with catch @ 0245b124 */
                    /* catch() { ... } // from try @ 0245ae90 with catch @ 0245b128 */
      plVar3 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                    ,(ulong)uVar2);
      if (0 < (int)uVar2) {
        uVar4 = 0;
        plVar12 = plVar3 + 4;
        do {
          uVar11 = FUN_04024ea0();
          lVar10 = FUN_04025c40(uVar11,0);
          if (plVar3 == (long *)0x0) goto LAB_0245b5b4;
          if (*(uint *)(plVar3 + 3) <= uVar4) {
LAB_0245b5b8:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *plVar12 = lVar10;
          thunk_FUN_01f51358(plVar12,lVar10);
          FUN_04025b48(uVar11,0);
          uVar4 = uVar4 + 1;
          plVar12 = plVar12 + 1;
        } while (uVar2 != uVar4);
      }
    }
    lVar10 = *(long *)(unaff_x19 + 0x38);
  }
  else {
    uVar11 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
                    /* try { // try from 0245b098 to 0255b0a3 has its CatchHandler @ 0245b0f4 */
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
                    /* try { // try from 0245b0a8 to 0255b0e7 has its CatchHandler @ 0245b0f0 */
    uVar11 = FUN_03579868(uVar11,0);
    uVar4 = FUN_03582560(plVar3,uVar11,0);
    if ((uVar4 & 1) == 0) {
      uVar11 = *(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03579868(uVar11,0);
      uVar4 = FUN_03582560(plVar3,uVar11,0);
      if ((uVar4 & 1) == 0) {
        uVar11 = *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__;
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_03579868(uVar11,0);
        uVar4 = FUN_03582560(plVar3,uVar11,0);
        if ((uVar4 & 1) == 0) {
          uVar11 = *(undefined8 *)
                    Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
          ;
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar11 = FUN_03579868(uVar11,0);
          uVar4 = FUN_03582560(plVar3,uVar11,0);
          if ((uVar4 & 1) == 0) {
            uVar11 = *(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__;
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar11 = FUN_03579868(uVar11,0);
            uVar4 = FUN_03582560(plVar3,uVar11,0);
            if ((uVar4 & 1) == 0) {
              uVar11 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEraNames__
              ;
              if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar11 = FUN_03579868(uVar11,0);
              uVar4 = FUN_03582560(plVar3,uVar11,0);
              if ((uVar4 & 1) == 0) {
                uVar11 = *(undefined8 *)
                          Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                ;
                if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar11 = FUN_03579868(uVar11,0);
                uVar4 = FUN_03582560(plVar3,uVar11,0);
                if ((uVar4 & 1) == 0) {
                  uVar11 = *(undefined8 *)Method_Unity_VisualScripting_Cache_Store__;
                  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar11 = FUN_03579868(uVar11,0);
                  uVar4 = FUN_03582560(plVar3,uVar11,0);
                  if ((uVar4 & 1) == 0) {
                    uVar11 = *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                    ;
                    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar11 = FUN_03579868(uVar11,0);
                    uVar4 = FUN_03582560(plVar3,uVar11,0);
                    if ((uVar4 & 1) == 0) {
                      return false;
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
      plVar3 = (long *)FUN_04028838();
    }
    lVar10 = *(long *)(unaff_x19 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 8);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01ecaf44(lVar10);
  }
  if (plVar3 != (long *)0x0) {
    if (*(long *)(*plVar3 + 0x40) == *(long *)(lVar10 + 0x40)) {
      pcVar7 = (char *)thunk_FUN_01f11920();
      return *pcVar7 != '\0';
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(plVar3);
  }
LAB_0245b5b4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


