/*
FUNCTION_NAME: FUN_02455f60
ENTRY_POINT: 02455f60
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_02455f60(long *param_1,undefined8 ****param_2,void *param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  void *__src;
  long lVar8;
  undefined8 *puVar9;
  code *pcVar10;
  ulong __n;
  undefined1 *__dest;
  long *plVar11;
  undefined8 uVar12;
  undefined1 auStack_80 [8];
  ulong local_78;
  undefined8 ***local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar11 = *(long **)(param_4 + 0x38);
  local_70 = param_2;
  if (plVar11 == (long *)0x0) {
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
    plVar11 = *(long **)(param_4 + 0x38);
    if (plVar11 == (long *)0x0) {
      FUN_01ecafa0(param_4);
      plVar11 = *(long **)(param_4 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*plVar11 + 0xfc);
  __dest = auStack_80 + -(__n + 0xf & 0x1fffffff0);
  if (-1 < *(int *)(*plVar11 + 0x28)) {
    param_2 = &local_70;
  }
  memcpy(__dest,param_2,__n);
  uVar5 = thunk_FUN_01f113fc(*plVar11,__dest);
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar12 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 8);
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  }
  plVar11 = (long *)FUN_03579868(uVar12,0);
  if (plVar11 == (long *)0x0) {
LAB_024564d4:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar12 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
  plVar11 = (long *)FUN_03579868(*(undefined8 *)
                                  Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                                 ,0);
  if (plVar11 == (long *)0x0) goto LAB_024564d4;
  uVar6 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
  uVar7 = FUN_0340e318(uVar12,uVar6,0);
  if ((uVar7 & 1) != 0) {
    pcVar10 = *(code **)(*param_1 + 0x1c8);
    uVar5 = *(undefined8 *)(*param_1 + 0x1d0);
LAB_02456140:
    uVar5 = (*pcVar10)(param_1,uVar5);
    goto LAB_024562b4;
  }
  uVar6 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar11 = (long *)FUN_03579868(uVar6,0);
  if (plVar11 == (long *)0x0) goto LAB_024564d4;
  uVar6 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
  uVar7 = FUN_0340e318(uVar12,uVar6,0);
  if ((uVar7 & 1) == 0) {
    uVar6 = *(undefined8 *)
             Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar11 = (long *)FUN_03579868(uVar6,0);
    if (plVar11 == (long *)0x0) goto LAB_024564d4;
    uVar6 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
    uVar7 = FUN_0340e318(uVar12,uVar6,0);
    if ((uVar7 & 1) == 0) {
      uVar6 = *(undefined8 *)Method_Unity_VisualScripting_Cache_Store__;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar11 = (long *)FUN_03579868(uVar6,0);
      if (plVar11 == (long *)0x0) goto LAB_024564d4;
      uVar6 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      uVar7 = FUN_0340e318(uVar12,uVar6,0);
      if ((uVar7 & 1) == 0) {
        uVar6 = *(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar11 = (long *)FUN_03579868(uVar6,0);
        if (plVar11 == (long *)0x0) goto LAB_024564d4;
        uVar6 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
        uVar7 = FUN_0340e318(uVar12,uVar6,0);
        if ((uVar7 & 1) == 0) {
          uVar6 = *(undefined8 *)
                   Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<InputControlAttribute>__
          ;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar11 = (long *)FUN_03579868(uVar6,0);
          if (plVar11 == (long *)0x0) goto LAB_024564d4;
          uVar6 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
          uVar7 = FUN_0340e318(uVar12,uVar6,0);
          if ((uVar7 & 1) == 0) {
            uVar6 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<ONSPAudioSource>__;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar11 = (long *)FUN_03579868(uVar6,0);
            if (plVar11 == (long *)0x0) goto LAB_024564d4;
            uVar6 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
            uVar7 = FUN_0340e318(uVar12,uVar6,0);
            if ((uVar7 & 1) == 0) {
              uVar6 = *(undefined8 *)
                       Method_UnityEngine_Component_GetComponent<ONSPPropagationGeometry>__;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              plVar11 = (long *)FUN_03579868(uVar6,0);
              if (plVar11 == (long *)0x0) goto LAB_024564d4;
              uVar6 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
              uVar7 = FUN_0340e318(uVar12,uVar6,0);
              if ((uVar7 & 1) == 0) {
                uVar12 = FUN_0340ebc0(*(undefined8 *)
                                       Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<InspectorNameAttribute>__
                                      ,uVar12,*(undefined8 *)
                                               Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<NeutralResourcesLanguageAttribute>__
                                      ,0);
                FUN_033a2f1c(uVar12,0);
                goto LAB_024562b4;
              }
              pcVar10 = *(code **)(*param_1 + 0x2f8);
              uVar5 = *(undefined8 *)(*param_1 + 0x300);
            }
            else {
              pcVar10 = *(code **)(*param_1 + 0x2d8);
              uVar5 = *(undefined8 *)(*param_1 + 0x2e0);
            }
          }
          else {
            pcVar10 = *(code **)(*param_1 + 0x2e8);
            uVar5 = *(undefined8 *)(*param_1 + 0x2f0);
          }
          goto LAB_02456140;
        }
        uVar3 = (**(code **)(*param_1 + 0x2b8))(param_1,*(undefined8 *)(*param_1 + 0x2c0));
        local_78 = CONCAT71(local_78._1_7_,uVar3) & 0xffffffffffffff01;
        puVar9 = (undefined8 *)
                 Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
        ;
        goto LAB_024561b8;
      }
      local_78 = (**(code **)(*param_1 + 0x298))(param_1,*(undefined8 *)(*param_1 + 0x2a0));
      puVar9 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
    }
    else {
      uVar4 = (**(code **)(*param_1 + 0x278))(param_1,*(undefined8 *)(*param_1 + 0x280));
      local_78 = CONCAT44(local_78._4_4_,uVar4);
      puVar9 = (undefined8 *)
               Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
      ;
    }
    uVar5 = *puVar9;
  }
  else {
    uVar4 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
    local_78 = CONCAT44(local_78._4_4_,uVar4);
    puVar9 = (undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
LAB_024561b8:
    uVar5 = *puVar9;
  }
  uVar5 = thunk_FUN_01f113fc(uVar5,&local_78);
LAB_024562b4:
  lVar8 = **(long **)(param_4 + 0x38);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
  }
  __src = (void *)FUN_01f08934(uVar5,lVar8,__dest);
  memcpy(param_3,__src,__n);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


