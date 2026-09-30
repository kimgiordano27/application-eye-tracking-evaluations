/*
FUNCTION_NAME: FUN_02455a70
ENTRY_POINT: 02455a70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long FUN_02455a70(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  ulong local_38;
  
  lVar8 = *(long *)(param_3 + 0x38);
  if (lVar8 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_StringToNative__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Cache_Store__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<InputControlAttribute>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<ONSPAudioSource>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<ONSPPropagationGeometry>__);
    thunk_FUN_01efb3a4(
                      Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<InspectorNameAttribute>__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<NeutralResourcesLanguageAttribute>__
                      );
    lVar8 = *(long *)(param_3 + 0x38);
    if (lVar8 == 0) {
      FUN_01ecafa0(param_3);
      lVar8 = *(long *)(param_3 + 0x38);
    }
  }
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar11 = *(undefined8 *)(lVar8 + 8);
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar4 = (long *)FUN_03579868(uVar11,0);
  if (plVar4 == (long *)0x0) {
LAB_02455f5c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar11 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  plVar4 = (long *)FUN_03579868(*(undefined8 *)
                                 Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                                ,0);
  if (plVar4 == (long *)0x0) goto LAB_02455f5c;
  uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  uVar6 = FUN_0340e318(uVar11,uVar5,0);
  if ((uVar6 & 1) != 0) {
    pcVar10 = *(code **)(*param_1 + 0x1c8);
    uVar11 = *(undefined8 *)(*param_1 + 0x1d0);
LAB_02455bdc:
    param_2 = (*pcVar10)(param_1,uVar11);
    goto LAB_02455d50;
  }
  uVar5 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar4 = (long *)FUN_03579868(uVar5,0);
  if (plVar4 == (long *)0x0) goto LAB_02455f5c;
  uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  uVar6 = FUN_0340e318(uVar11,uVar5,0);
  if ((uVar6 & 1) == 0) {
    uVar5 = *(undefined8 *)
             Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_03579868(uVar5,0);
    if (plVar4 == (long *)0x0) goto LAB_02455f5c;
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    uVar6 = FUN_0340e318(uVar11,uVar5,0);
    if ((uVar6 & 1) == 0) {
      uVar5 = *(undefined8 *)Method_Unity_VisualScripting_Cache_Store__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar4 = (long *)FUN_03579868(uVar5,0);
      if (plVar4 == (long *)0x0) goto LAB_02455f5c;
      uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      uVar6 = FUN_0340e318(uVar11,uVar5,0);
      if ((uVar6 & 1) == 0) {
        uVar5 = *(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar4 = (long *)FUN_03579868(uVar5,0);
        if (plVar4 == (long *)0x0) goto LAB_02455f5c;
        uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        uVar6 = FUN_0340e318(uVar11,uVar5,0);
        if ((uVar6 & 1) == 0) {
          uVar5 = *(undefined8 *)
                   Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<InputControlAttribute>__
          ;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar4 = (long *)FUN_03579868(uVar5,0);
          if (plVar4 == (long *)0x0) goto LAB_02455f5c;
          uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          uVar6 = FUN_0340e318(uVar11,uVar5,0);
          if ((uVar6 & 1) == 0) {
            uVar5 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<ONSPAudioSource>__;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar4 = (long *)FUN_03579868(uVar5,0);
            if (plVar4 == (long *)0x0) goto LAB_02455f5c;
            uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
            uVar6 = FUN_0340e318(uVar11,uVar5,0);
            if ((uVar6 & 1) == 0) {
              uVar5 = *(undefined8 *)
                       Method_UnityEngine_Component_GetComponent<ONSPPropagationGeometry>__;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              plVar4 = (long *)FUN_03579868(uVar5,0);
              if (plVar4 == (long *)0x0) goto LAB_02455f5c;
              uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
              uVar6 = FUN_0340e318(uVar11,uVar5,0);
              if ((uVar6 & 1) == 0) {
                uVar11 = FUN_0340ebc0(*(undefined8 *)
                                       Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<InspectorNameAttribute>__
                                      ,uVar11,*(undefined8 *)
                                               Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<NeutralResourcesLanguageAttribute>__
                                      ,0);
                FUN_033a2f1c(uVar11,0);
                goto LAB_02455d50;
              }
              pcVar10 = *(code **)(*param_1 + 0x2f8);
              uVar11 = *(undefined8 *)(*param_1 + 0x300);
            }
            else {
              pcVar10 = *(code **)(*param_1 + 0x2d8);
              uVar11 = *(undefined8 *)(*param_1 + 0x2e0);
            }
          }
          else {
            pcVar10 = *(code **)(*param_1 + 0x2e8);
            uVar11 = *(undefined8 *)(*param_1 + 0x2f0);
          }
          goto LAB_02455bdc;
        }
        uVar2 = (**(code **)(*param_1 + 0x2b8))(param_1,*(undefined8 *)(*param_1 + 0x2c0));
        local_38 = CONCAT71(local_38._1_7_,uVar2) & 0xffffffffffffff01;
        puVar9 = (undefined8 *)
                 Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
        ;
        goto LAB_02455c54;
      }
      local_38 = (**(code **)(*param_1 + 0x298))(param_1,*(undefined8 *)(*param_1 + 0x2a0));
      puVar9 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x278))(param_1,*(undefined8 *)(*param_1 + 0x280));
      local_38 = CONCAT44(local_38._4_4_,uVar3);
      puVar9 = (undefined8 *)
               Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
      ;
    }
    uVar11 = *puVar9;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
    local_38 = CONCAT44(local_38._4_4_,uVar3);
    puVar9 = (undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
LAB_02455c54:
    uVar11 = *puVar9;
  }
  param_2 = thunk_FUN_01f113fc(uVar11,&local_38);
LAB_02455d50:
  lVar8 = **(long **)(param_3 + 0x38);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
  }
  if (param_2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = thunk_FUN_01f116d0(param_2,lVar8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_2,lVar8);
    }
  }
  return lVar7;
}


