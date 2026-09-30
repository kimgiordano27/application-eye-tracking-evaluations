/*
FUNCTION_NAME: Unity.VisualScripting.BinaryOperatorHandler.<>c__DisplayClass8_0<double,-short>$$.ctor
ENTRY_POINT: 02455b30
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


long Unity_VisualScripting_BinaryOperatorHandler_<>c__DisplayClass8_0<double,_short>___ctor(void)

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
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar11;
  ulong in_stack_00000008;
  
  thunk_FUN_01efb3a4(
                    Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<InspectorNameAttribute>__
                    );
  thunk_FUN_01efb3a4(
                    Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<NeutralResourcesLanguageAttribute>__
                    );
  lVar8 = *(long *)(unaff_x19 + 0x38);
  if (lVar8 == 0) {
    FUN_01ecafa0();
    lVar8 = *(long *)(unaff_x19 + 0x38);
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
    pcVar10 = *(code **)(*unaff_x21 + 0x1c8);
LAB_02455bdc:
    unaff_x20 = (*pcVar10)();
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
              pcVar10 = *(code **)(*unaff_x21 + 0x2f8);
            }
            else {
              pcVar10 = *(code **)(*unaff_x21 + 0x2d8);
            }
          }
          else {
            pcVar10 = *(code **)(*unaff_x21 + 0x2e8);
          }
          goto LAB_02455bdc;
        }
        uVar2 = (**(code **)(*unaff_x21 + 0x2b8))();
        in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar2) & 0xffffffffffffff01;
        puVar9 = (undefined8 *)
                 Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
        ;
        goto LAB_02455c54;
      }
      in_stack_00000008 = (**(code **)(*unaff_x21 + 0x298))();
      puVar9 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
    }
    else {
      uVar3 = (**(code **)(*unaff_x21 + 0x278))();
      in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar3);
      puVar9 = (undefined8 *)
               Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
      ;
    }
    uVar11 = *puVar9;
  }
  else {
    uVar3 = (**(code **)(*unaff_x21 + 600))();
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar3);
    puVar9 = (undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
LAB_02455c54:
    uVar11 = *puVar9;
  }
  unaff_x20 = thunk_FUN_01f113fc(uVar11,&stack0x00000008);
LAB_02455d50:
  lVar8 = **(long **)(unaff_x19 + 0x38);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
  }
  if (unaff_x20 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = thunk_FUN_01f116d0(unaff_x20,lVar8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(unaff_x20,lVar8);
    }
  }
  return lVar7;
}


