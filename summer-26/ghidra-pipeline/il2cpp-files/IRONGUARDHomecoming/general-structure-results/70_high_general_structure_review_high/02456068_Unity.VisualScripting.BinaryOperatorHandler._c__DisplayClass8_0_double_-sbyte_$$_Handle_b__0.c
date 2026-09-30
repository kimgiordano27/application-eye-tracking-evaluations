/*
FUNCTION_NAME: Unity.VisualScripting.BinaryOperatorHandler.<>c__DisplayClass8_0<double,-sbyte>$$<Handle>b__0
ENTRY_POINT: 02456068
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_BinaryOperatorHandler_<>c__DisplayClass8_0<double,_sbyte>__<Handle>b__0
               (void)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  void *__src;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  void *unaff_x19;
  long unaff_x20;
  ulong __n;
  undefined1 *__dest;
  long *unaff_x23;
  void *unaff_x24;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x27;
  long unaff_x29;
  
  FUN_01ecafa0();
  plVar10 = *(long **)(unaff_x20 + 0x38);
  lVar7 = *plVar10;
  __n = (ulong)*(uint *)(lVar7 + 0xfc);
  __dest = &stack0x00000000 + -(__n + 0xf & 0x1fffffff0);
  if (-1 < *(int *)(lVar7 + 0x28)) {
    unaff_x24 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(__dest,unaff_x24,__n);
  uVar4 = thunk_FUN_01f113fc(*plVar10,__dest);
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8);
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  }
  plVar10 = (long *)FUN_03579868(uVar11,0);
  if (plVar10 == (long *)0x0) {
LAB_024564d4:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar11 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
  plVar10 = (long *)FUN_03579868(*(undefined8 *)
                                  Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                                 ,0);
  if (plVar10 == (long *)0x0) goto LAB_024564d4;
  uVar5 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
  uVar6 = FUN_0340e318(uVar11,uVar5,0);
  if ((uVar6 & 1) != 0) {
    pcVar9 = *(code **)(*unaff_x23 + 0x1c8);
LAB_02456140:
    uVar4 = (*pcVar9)();
    goto LAB_024562b4;
  }
  uVar5 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar10 = (long *)FUN_03579868(uVar5,0);
  if (plVar10 == (long *)0x0) goto LAB_024564d4;
  uVar5 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
  uVar6 = FUN_0340e318(uVar11,uVar5,0);
  if ((uVar6 & 1) == 0) {
    uVar5 = *(undefined8 *)
             Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar10 = (long *)FUN_03579868(uVar5,0);
    if (plVar10 == (long *)0x0) goto LAB_024564d4;
    uVar5 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    uVar6 = FUN_0340e318(uVar11,uVar5,0);
    if ((uVar6 & 1) == 0) {
      uVar5 = *(undefined8 *)Method_Unity_VisualScripting_Cache_Store__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar10 = (long *)FUN_03579868(uVar5,0);
      if (plVar10 == (long *)0x0) goto LAB_024564d4;
      uVar5 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
      uVar6 = FUN_0340e318(uVar11,uVar5,0);
      if ((uVar6 & 1) == 0) {
        uVar5 = *(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar10 = (long *)FUN_03579868(uVar5,0);
        if (plVar10 == (long *)0x0) goto LAB_024564d4;
        uVar5 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        uVar6 = FUN_0340e318(uVar11,uVar5,0);
        if ((uVar6 & 1) == 0) {
          uVar5 = *(undefined8 *)
                   Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<InputControlAttribute>__
          ;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar10 = (long *)FUN_03579868(uVar5,0);
          if (plVar10 == (long *)0x0) goto LAB_024564d4;
          uVar5 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
          uVar6 = FUN_0340e318(uVar11,uVar5,0);
          if ((uVar6 & 1) == 0) {
            uVar5 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<ONSPAudioSource>__;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar10 = (long *)FUN_03579868(uVar5,0);
            if (plVar10 == (long *)0x0) goto LAB_024564d4;
            uVar5 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
            uVar6 = FUN_0340e318(uVar11,uVar5,0);
            if ((uVar6 & 1) == 0) {
              uVar5 = *(undefined8 *)
                       Method_UnityEngine_Component_GetComponent<ONSPPropagationGeometry>__;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              plVar10 = (long *)FUN_03579868(uVar5,0);
              if (plVar10 == (long *)0x0) goto LAB_024564d4;
              uVar5 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
              uVar6 = FUN_0340e318(uVar11,uVar5,0);
              if ((uVar6 & 1) == 0) {
                uVar11 = FUN_0340ebc0(*(undefined8 *)
                                       Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<InspectorNameAttribute>__
                                      ,uVar11,*(undefined8 *)
                                               Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<NeutralResourcesLanguageAttribute>__
                                      ,0);
                FUN_033a2f1c(uVar11,0);
                goto LAB_024562b4;
              }
              pcVar9 = *(code **)(*unaff_x23 + 0x2f8);
            }
            else {
              pcVar9 = *(code **)(*unaff_x23 + 0x2d8);
            }
          }
          else {
            pcVar9 = *(code **)(*unaff_x23 + 0x2e8);
          }
          goto LAB_02456140;
        }
        bVar2 = (**(code **)(*unaff_x23 + 0x2b8))();
        puVar8 = (undefined8 *)
                 Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
        ;
        *(byte *)(unaff_x29 + -0x18) = bVar2 & 1;
        goto LAB_024561b8;
      }
      uVar4 = (**(code **)(*unaff_x23 + 0x298))();
      puVar8 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
      *(undefined8 *)(unaff_x29 + -0x18) = uVar4;
    }
    else {
      uVar3 = (**(code **)(*unaff_x23 + 0x278))();
      puVar8 = (undefined8 *)
               Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
      ;
      *(undefined4 *)(unaff_x29 + -0x18) = uVar3;
    }
    uVar4 = *puVar8;
  }
  else {
    uVar3 = (**(code **)(*unaff_x23 + 600))();
    puVar8 = (undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    *(undefined4 *)(unaff_x29 + -0x18) = uVar3;
LAB_024561b8:
    uVar4 = *puVar8;
  }
  uVar4 = thunk_FUN_01f113fc(uVar4,unaff_x29 + -0x18);
LAB_024562b4:
  lVar7 = **(long **)(unaff_x20 + 0x38);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  __src = (void *)FUN_01f08934(uVar4,lVar7,__dest);
  memcpy(unaff_x19,__src,__n);
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


