/*
FUNCTION_NAME: FUN_034ae4a4
ENTRY_POINT: 034ae4a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_034ae4a4(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  puVar13 = &local_70;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((DAT_04832c0c & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                      );
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GraphicsBuffer_SetData<float4>__);
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GraphicsBuffer_SetData<uint>__);
    thunk_FUN_01efb3a4(Method_System_Numerics_BigNumber_FormatBigInteger__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Cache_Store__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_ToFourDigitYear__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_VerifyWritable__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEraNames__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
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
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_GraphicsFence_InitPostAllocation__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<TeleportInputHandlerTouch>__);
    thunk_FUN_01efb3a4(Method_System_Security_Cryptography_DSA_FromXmlString__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<TeleportOrientationHandlerThumbstick>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                      );
    DAT_04832c0c = 1;
  }
  plVar9 = *(long **)(param_1 + 0x10);
  if ((plVar9 == (long *)0x0) ||
     (plVar9 = (long *)(**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400)),
     plVar9 == (long *)0x0)) {
LAB_034aece0:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar9 + 0x308))
            (plVar9,*(long *)(param_1 + 0x28) + (long)param_2,0,*(undefined8 *)(*plVar9 + 0x310));
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_034aece0;
  iVar7 = FUN_034dc5dc(*(long *)(param_1 + 0x10),0);
  puVar4 = Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__;
  puVar3 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (iVar7 == -1) {
    uVar10 = 0;
    goto LAB_034ae838;
  }
  uVar10 = FUN_034ae0c0(param_1,iVar7);
  uVar14 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar3);
  }
  uVar14 = FUN_03579868(uVar14,0);
  uVar11 = FUN_03582560(uVar10,uVar14,0);
  if ((uVar11 & 1) != 0) {
    plVar9 = *(long **)(param_1 + 0x10);
    if (plVar9 == (long *)0x0) goto LAB_034aece0;
    uVar10 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
    goto LAB_034ae838;
  }
  uVar14 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar14 = FUN_03579868(uVar14,0);
  uVar11 = FUN_03582560(uVar10,uVar14,0);
  if ((uVar11 & 1) == 0) {
    uVar14 = *(undefined8 *)
              Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar14 = FUN_03579868(uVar14,0);
    uVar11 = FUN_03582560(uVar10,uVar14,0);
    if ((uVar11 & 1) != 0) {
      plVar9 = *(long **)(param_1 + 0x10);
      if (plVar9 == (long *)0x0) goto LAB_034aece0;
      uVar5 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
      puVar13 = (undefined8 *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
LAB_034ae824:
      uVar10 = *puVar13;
      local_58 = CONCAT71(local_58._1_7_,uVar5);
      goto LAB_034ae82c;
    }
    uVar14 = *(undefined8 *)
              Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar14 = FUN_03579868(uVar14,0);
    uVar11 = FUN_03582560(uVar10,uVar14,0);
    if ((uVar11 & 1) != 0) {
      plVar9 = *(long **)(param_1 + 0x10);
      if (plVar9 == (long *)0x0) goto LAB_034aece0;
      uVar5 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
      puVar13 = (undefined8 *)
                Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__;
      goto LAB_034ae824;
    }
    uVar14 = *(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar14 = FUN_03579868(uVar14,0);
    uVar11 = FUN_03582560(uVar10,uVar14,0);
    if ((uVar11 & 1) != 0) {
      plVar9 = *(long **)(param_1 + 0x10);
      if (plVar9 == (long *)0x0) goto LAB_034aece0;
      uVar6 = (**(code **)(*plVar9 + 0x208))(plVar9,*(undefined8 *)(*plVar9 + 0x210));
      puVar13 = (undefined8 *)Method_System_Globalization_Calendar_VerifyWritable__;
LAB_034ae8bc:
      uVar10 = *puVar13;
      local_58 = CONCAT62(local_58._2_6_,uVar6);
      goto LAB_034ae82c;
    }
    uVar14 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEraNames__;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar14 = FUN_03579868(uVar14,0);
    uVar11 = FUN_03582560(uVar10,uVar14,0);
    if ((uVar11 & 1) != 0) {
      plVar9 = *(long **)(param_1 + 0x10);
      if (plVar9 == (long *)0x0) goto LAB_034aece0;
      local_58 = (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
      puVar13 = (undefined8 *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
LAB_034ae924:
      uVar10 = *puVar13;
      goto LAB_034ae82c;
    }
    uVar14 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<TeleportInputHandlerTouch>__;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar14 = FUN_03579868(uVar14,0);
    uVar11 = FUN_03582560(uVar10,uVar14,0);
    if ((uVar11 & 1) != 0) {
      plVar9 = *(long **)(param_1 + 0x10);
      if (plVar9 == (long *)0x0) goto LAB_034aece0;
      uVar6 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
      puVar13 = (undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__;
      goto LAB_034ae8bc;
    }
    uVar14 = *(undefined8 *)
              Method_UnityEngine_Component_GetComponent<TeleportOrientationHandlerThumbstick>__;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar14 = FUN_03579868(uVar14,0);
    uVar11 = FUN_03582560(uVar10,uVar14,0);
    if ((uVar11 & 1) != 0) {
      plVar9 = *(long **)(param_1 + 0x10);
      if (plVar9 == (long *)0x0) goto LAB_034aece0;
      uVar8 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
      puVar13 = (undefined8 *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__;
      goto LAB_034ae764;
    }
    uVar14 = *(undefined8 *)Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar14 = FUN_03579868(uVar14,0);
    uVar11 = FUN_03582560(uVar10,uVar14,0);
    if ((uVar11 & 1) != 0) {
      plVar9 = *(long **)(param_1 + 0x10);
      if (plVar9 == (long *)0x0) goto LAB_034aece0;
      local_58 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
      puVar13 = (undefined8 *)
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
      ;
      goto LAB_034ae924;
    }
    uVar14 = *(undefined8 *)
              Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar14 = FUN_03579868(uVar14,0);
    uVar11 = FUN_03582560(uVar10,uVar14,0);
    if ((uVar11 & 1) == 0) {
      uVar14 = *(undefined8 *)Method_Unity_VisualScripting_Cache_Store__;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar14 = FUN_03579868(uVar14,0);
      uVar11 = FUN_03582560(uVar10,uVar14,0);
      if ((uVar11 & 1) != 0) {
        plVar9 = *(long **)(param_1 + 0x10);
        if (plVar9 == (long *)0x0) goto LAB_034aece0;
        local_58 = (**(code **)(*plVar9 + 0x278))(plVar9,*(undefined8 *)(*plVar9 + 0x280));
        puVar13 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
        goto LAB_034aeb14;
      }
      uVar14 = *(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData<float4>__;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar14 = FUN_03579868(uVar14,0);
      uVar11 = FUN_03582560(uVar10,uVar14,0);
      if ((uVar11 & 1) == 0) {
        uVar14 = *(undefined8 *)Method_UnityEngine_Rendering_GraphicsFence_InitPostAllocation__;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar14 = FUN_03579868(uVar14,0);
        uVar11 = FUN_03582560(uVar10,uVar14,0);
        if ((uVar11 & 1) != 0) {
          plVar9 = *(long **)(param_1 + 0x10);
          if (plVar9 == (long *)0x0) goto LAB_034aece0;
          local_58 = (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
          puVar13 = (undefined8 *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
          ;
          goto LAB_034ae924;
        }
        uVar14 = *(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData<uint>__;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar14 = FUN_03579868(uVar14,0);
        uVar11 = FUN_03582560(uVar10,uVar14,0);
        if ((uVar11 & 1) == 0) {
          uVar10 = FUN_034aecec(param_1,iVar7);
          goto LAB_034ae838;
        }
        lVar12 = FUN_01f08890(*(undefined8 *)
                               Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,
                              4);
        if (lVar12 == 0) goto LAB_034aece0;
        if (0 < *(int *)(lVar12 + 0x18)) {
          uVar11 = 0;
          do {
            plVar9 = *(long **)(param_1 + 0x10);
            if (plVar9 == (long *)0x0) goto LAB_034aece0;
            uVar8 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
            uVar1 = *(uint *)(lVar12 + 0x18);
            if (uVar1 <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined4 *)(lVar12 + 0x20 + uVar11 * 4) = uVar8;
            uVar11 = uVar11 + 1;
          } while ((long)uVar11 < (long)(int)uVar1);
        }
        local_58 = 0;
        uStack_50 = 0;
        FUN_035c58fc(&local_58,lVar12,0);
        uStack_68 = uStack_50;
        uVar10 = *(undefined8 *)Method_System_Numerics_BigNumber_FormatBigInteger__;
        local_70 = local_58;
      }
      else {
        plVar9 = *(long **)(param_1 + 0x10);
        if (plVar9 == (long *)0x0) goto LAB_034aece0;
        uVar10 = (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
        local_58 = 0;
        FUN_0354c030(&local_58,uVar10,0);
        uVar10 = *(undefined8 *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
        puVar13 = &local_70;
        local_70 = local_58;
      }
    }
    else {
      plVar9 = *(long **)(param_1 + 0x10);
      if (plVar9 == (long *)0x0) goto LAB_034aece0;
      uVar8 = (**(code **)(*plVar9 + 0x268))(plVar9,*(undefined8 *)(*plVar9 + 0x270));
      local_58 = CONCAT44(local_58._4_4_,uVar8);
      puVar13 = (undefined8 *)
                Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
      ;
LAB_034aeb14:
      uVar10 = *puVar13;
      puVar13 = &local_58;
    }
  }
  else {
    plVar9 = *(long **)(param_1 + 0x10);
    if (plVar9 == (long *)0x0) goto LAB_034aece0;
    uVar8 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
    puVar13 = (undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
LAB_034ae764:
    uVar10 = *puVar13;
    local_58 = CONCAT44(local_58._4_4_,uVar8);
LAB_034ae82c:
    puVar13 = &local_58;
  }
  uVar10 = thunk_FUN_01f113fc(uVar10,puVar13);
LAB_034ae838:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}


