/*
FUNCTION_NAME: Unity.VisualScripting.BinaryOperatorHandler.<>c__DisplayClass8_0<ushort,-byte>$$<Handle>b__0
ENTRY_POINT: 0245be28
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16]
Unity_VisualScripting_BinaryOperatorHandler_<>c__DisplayClass8_0<ushort,_byte>__<Handle>b__0(void)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long unaff_x19;
  undefined8 uVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(
                    Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                    );
  thunk_FUN_01efb3a4(
                    Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                    );
                    /* try { // try from 0245be44 to 0255be4b has its CatchHandler @ 0245be64 */
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                    );
                    /* try { // try from 0245be50 to 0255be53 has its CatchHandler @ 0245be5c */
                    /* try { // try from 0245be54 to 0255be7b has its CatchHandler @ 0245bcec */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0245be24 with catch @ 0245be58
                        */
  thunk_FUN_01efb3a4(
                    Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                    );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0245be50 with catch @ 0245be5c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0245be08 with catch @ 0245be60
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0245be44 with catch @ 0245be64
                        */
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  thunk_FUN_01efb3a4(
                    Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalTranslationPoseAtSurface__
                    );
  puVar10 = *(undefined8 **)(unaff_x19 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 0245be7c to 0255be8f has its CatchHandler @ 0245bfac */
    FUN_01ecafa0();
    puVar10 = *(undefined8 **)(unaff_x19 + 0x38);
  }
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
                    /* try { // try from 0245be90 to 0255bf97 has its CatchHandler @ 0245bcec */
  uVar12 = *puVar10;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar3 = (long *)FUN_03579868(uVar12,0);
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x438))(plVar3,*(undefined8 *)(*plVar3 + 0x440));
    if (*(int *)(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__);
    }
    uVar4 = FUN_0402d484(plVar3,0);
    if ((uVar4 & 1) == 0) {
      uVar12 = *(undefined8 *)
                Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
      ;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar12 = FUN_03579868(uVar12,0);
      uVar4 = FUN_03582560(plVar3,uVar12,0);
      if ((uVar4 & 1) == 0) {
        uVar12 = *(undefined8 *)Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar12 = FUN_03579868(uVar12,0);
        uVar4 = FUN_03582560(plVar3,uVar12,0);
        if ((uVar4 & 1) == 0) {
                    /* try { // try from 0245c438 to 0255c53f has its CatchHandler @ 0245c294 */
          uVar8 = thunk_FUN_01efb3a4(Method_System_DBNull__ctor__);
          uVar12 = 0;
          if (plVar3 != (long *)0x0) {
            uVar12 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
          }
          uVar9 = thunk_FUN_01efb3a4(
                                    Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                    );
          uVar12 = FUN_0340ebc0(uVar8,uVar12,uVar9,0);
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
          uVar8 = thunk_FUN_01f117cc();
          Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar8,uVar12,0);
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
          lVar11 = 0x20;
          do {
            uVar12 = FUN_04024ea0();
            lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
            FUN_0402bc04(lVar5,uVar12,0);
            if (plVar3 == (long *)0x0) goto LAB_0245c418;
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0)) {
              uVar12 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar12,0);
            }
            if (*(uint *)(plVar3 + 3) <= uVar4) goto LAB_0245c41c;
            plVar3[uVar4 + 4] = lVar5;
            thunk_FUN_01f51358((long)plVar3 + lVar11,lVar5);
            FUN_04025b48(uVar12,0);
            uVar4 = uVar4 + 1;
            lVar11 = lVar11 + 8;
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
          plVar13 = plVar3 + 4;
          do {
            uVar12 = FUN_04024ea0();
            lVar11 = FUN_04025c40(uVar12,0);
            if (plVar3 == (long *)0x0) goto LAB_0245c418;
            if (*(uint *)(plVar3 + 3) <= uVar4) {
LAB_0245c41c:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *plVar13 = lVar11;
            thunk_FUN_01f51358(plVar13,lVar11);
            FUN_04025b48(uVar12,0);
            uVar4 = uVar4 + 1;
            plVar13 = plVar13 + 1;
          } while (uVar2 != uVar4);
        }
      }
      lVar11 = *(long *)(unaff_x19 + 0x38);
    }
    else {
      uVar12 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar12 = FUN_03579868(uVar12,0);
      uVar4 = FUN_03582560(plVar3,uVar12,0);
      if ((uVar4 & 1) == 0) {
        auVar14 = FUN_042af78c(&
                               Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<sbyte,_sbyte>__
                               ,*(undefined8 *)puVar1);
        return auVar14;
      }
      plVar3 = (long *)FUN_04028838();
      lVar11 = *(long *)(unaff_x19 + 0x38);
    }
    lVar11 = *(long *)(lVar11 + 8);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01ecaf44(lVar11);
    }
    if (plVar3 != (long *)0x0) {
      if (*(long *)(*plVar3 + 0x40) != *(long *)(lVar11 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar3);
      }
      puVar7 = (ulong *)thunk_FUN_01f11920();
      auVar14._0_8_ = *puVar7;
      auVar14._8_8_ = 0;
      return auVar14;
    }
  }
LAB_0245c418:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


