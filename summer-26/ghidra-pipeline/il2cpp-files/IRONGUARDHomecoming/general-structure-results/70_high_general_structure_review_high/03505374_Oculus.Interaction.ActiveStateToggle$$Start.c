/*
FUNCTION_NAME: Oculus.Interaction.ActiveStateToggle$$Start
ENTRY_POINT: 03505374
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_10;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_ActiveStateToggle__Start(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(
                    Method_Sirenix_Serialization_Utilities_TypeExtensions_GetAllMembers<MethodInfo>__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_GraphicsBuffer_SetData<float4>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_GraphicsBuffer_SetData<uint>__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Cache_Store__);
  thunk_FUN_01efb3a4(
                    Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<int>__
                    );
  thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<IGraphParentElement,_Guid>__);
  thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_ToFourDigitYear__);
  thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__);
  thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEraNames__);
  thunk_FUN_01efb3a4(Method_System_Convert_ToUInt64__);
  thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Interpreter_OrInstruction_Create__);
  thunk_FUN_01efb3a4(
                    Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                    );
  thunk_FUN_01efb3a4(
                    Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                    );
  thunk_FUN_01efb3a4(
                    Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                    );
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__)
  ;
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  thunk_FUN_01efb3a4(
                    Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<float>__
                    );
  thunk_FUN_01efb3a4(
                    Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<InputActionType>__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<TeleportInputHandlerTouch>__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Component_GetComponent<TeleportOrientationHandlerThumbstick>__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__);
  *(undefined1 *)(unaff_x24 + 0xf81) = 1;
  uVar5 = FUN_01f08890(*unaff_x25,0x100);
  FUN_034a9d80(uVar5,*unaff_x19,0);
  **(undefined8 **)(*unaff_x21 + 0xb8) = uVar5;
  thunk_FUN_01f51358(*(undefined8 *)(*unaff_x21 + 0xb8),uVar5);
  plVar6 = (long *)FUN_01f08890(*unaff_x23,0x13);
  uVar5 = *unaff_x20;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*unaff_x22);
  }
  lVar7 = FUN_03579868(uVar5,0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((lVar7 != 0) &&
     (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_03505b38:
    uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,0);
  }
  puVar1 = Method_System_Convert_ToUInt64__;
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar7;
    thunk_FUN_01f51358(plVar6 + 4,lVar7);
    lVar7 = FUN_03579868(*(undefined8 *)puVar1,0);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
    goto LAB_03505b38;
    puVar2 = 
    Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<RectOffset>__;
    if (1 < *(uint *)(plVar6 + 3)) {
      plVar6[5] = lVar7;
      thunk_FUN_01f51358(plVar6 + 5,lVar7);
      lVar7 = FUN_03579868(*(undefined8 *)puVar2,0);
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_03505b38;
      puVar2 = Method_Oculus_Platform_CAPI_StringToNative__;
      if (2 < *(uint *)(plVar6 + 3)) {
        plVar6[6] = lVar7;
        thunk_FUN_01f51358(plVar6 + 6,lVar7);
        lVar7 = FUN_03579868(*(undefined8 *)puVar2,0);
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
        goto LAB_03505b38;
        puVar2 = Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__;
        if (3 < *(uint *)(plVar6 + 3)) {
          plVar6[7] = lVar7;
          thunk_FUN_01f51358(plVar6 + 7,lVar7);
          lVar7 = FUN_03579868(*(undefined8 *)puVar2,0);
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
          goto LAB_03505b38;
          puVar2 = 
          Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__;
          if (4 < *(uint *)(plVar6 + 3)) {
            plVar6[8] = lVar7;
            thunk_FUN_01f51358(plVar6 + 8,lVar7);
            lVar7 = FUN_03579868(*(undefined8 *)puVar2,0);
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
            goto LAB_03505b38;
            puVar2 = Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
            ;
            if (5 < *(uint *)(plVar6 + 3)) {
              plVar6[9] = lVar7;
              thunk_FUN_01f51358(plVar6 + 9,lVar7);
              lVar7 = FUN_03579868(*(undefined8 *)puVar2,0);
              if ((lVar7 != 0) &&
                 (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
              goto LAB_03505b38;
              puVar2 = Method_System_Globalization_Calendar_ToFourDigitYear__;
              if (6 < *(uint *)(plVar6 + 3)) {
                plVar6[10] = lVar7;
                thunk_FUN_01f51358(plVar6 + 10,lVar7);
                lVar7 = FUN_03579868(*(undefined8 *)puVar2,0);
                if ((lVar7 != 0) &&
                   (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                goto LAB_03505b38;
                puVar2 = Method_UnityEngine_Component_GetComponent<TeleportInputHandlerTouch>__;
                if (7 < *(uint *)(plVar6 + 3)) {
                  plVar6[0xb] = lVar7;
                  thunk_FUN_01f51358(plVar6 + 0xb,lVar7);
                  lVar7 = FUN_03579868(*(undefined8 *)puVar2,0);
                  if ((lVar7 != 0) &&
                     (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)
                     ) goto LAB_03505b38;
                  puVar2 = Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
                  if (8 < *(uint *)(plVar6 + 3)) {
                    plVar6[0xc] = lVar7;
                    thunk_FUN_01f51358(plVar6 + 0xc,lVar7);
                    lVar7 = FUN_03579868(*(undefined8 *)puVar2,0);
                    if ((lVar7 != 0) &&
                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar8 == 0)) goto LAB_03505b38;
                    puVar2 = 
                    Method_UnityEngine_Component_GetComponent<TeleportOrientationHandlerThumbstick>__
                    ;
                    if (9 < *(uint *)(plVar6 + 3)) {
                      plVar6[0xd] = lVar7;
                      thunk_FUN_01f51358(plVar6 + 0xd,lVar7);
                      lVar7 = FUN_03579868(*(undefined8 *)puVar2,0);
                      if ((lVar7 != 0) &&
                         (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar8 == 0)) goto LAB_03505b38;
                      puVar2 = Method_System_Globalization_CalendarData_GetJapaneseEraNames__;
                      if (10 < *(uint *)(plVar6 + 3)) {
                        plVar6[0xe] = lVar7;
                        thunk_FUN_01f51358(plVar6 + 0xe,lVar7);
                        lVar7 = FUN_03579868(*(undefined8 *)puVar2,0);
                        if ((lVar7 != 0) &&
                           (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar8 == 0)) goto LAB_03505b38;
                        puVar2 = Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__;
                        if (0xb < *(uint *)(plVar6 + 3)) {
                          plVar6[0xf] = lVar7;
                          thunk_FUN_01f51358(plVar6 + 0xf,lVar7);
                          lVar7 = FUN_03579868(*(undefined8 *)puVar2,0);
                          if ((lVar7 != 0) &&
                             (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                             lVar8 == 0)) goto LAB_03505b38;
                          puVar2 = 
                          Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                          ;
                          if (0xc < *(uint *)(plVar6 + 3)) {
                            plVar6[0x10] = lVar7;
                            thunk_FUN_01f51358(plVar6 + 0x10,lVar7);
                            lVar7 = FUN_03579868(*(undefined8 *)puVar2,0);
                            if ((lVar7 != 0) &&
                               (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                               lVar8 == 0)) goto LAB_03505b38;
                            puVar2 = Method_Unity_VisualScripting_Cache_Store__;
                            if (0xd < *(uint *)(plVar6 + 3)) {
                              plVar6[0x11] = lVar7;
                              thunk_FUN_01f51358(plVar6 + 0x11,lVar7);
                              lVar7 = FUN_03579868(*(undefined8 *)puVar2,0);
                              if ((lVar7 != 0) &&
                                 (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                                 lVar8 == 0)) goto LAB_03505b38;
                              puVar2 = Method_UnityEngine_GraphicsBuffer_SetData<uint>__;
                              if (0xe < *(uint *)(plVar6 + 3)) {
                                plVar6[0x12] = lVar7;
                                thunk_FUN_01f51358(plVar6 + 0x12,lVar7);
                                lVar7 = FUN_03579868(*(undefined8 *)puVar2,0);
                                if ((lVar7 != 0) &&
                                   (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)
                                                              ), lVar8 == 0)) goto LAB_03505b38;
                                puVar2 = Method_UnityEngine_GraphicsBuffer_SetData<float4>__;
                                if (0xf < *(uint *)(plVar6 + 3)) {
                                  plVar6[0x13] = lVar7;
                                  thunk_FUN_01f51358(plVar6 + 0x13,lVar7);
                                  lVar7 = FUN_03579868(*(undefined8 *)puVar2,0);
                                  if ((lVar7 != 0) &&
                                     (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)
                                                                        (*plVar6 + 0x40)),
                                     lVar8 == 0)) goto LAB_03505b38;
                                  if (0x10 < *(uint *)(plVar6 + 3)) {
                                    plVar6[0x14] = lVar7;
                                    thunk_FUN_01f51358(plVar6 + 0x14,lVar7);
                                    lVar7 = FUN_03579868(*(undefined8 *)puVar1,0);
                                    if ((lVar7 != 0) &&
                                       (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)
                                                                          (*plVar6 + 0x40)),
                                       lVar8 == 0)) goto LAB_03505b38;
                                    puVar1 = 
                                    Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                                    ;
                                    if (0x11 < *(uint *)(plVar6 + 3)) {
                                      plVar6[0x15] = lVar7;
                                      thunk_FUN_01f51358(plVar6 + 0x15,lVar7);
                                      lVar7 = FUN_03579868(*(undefined8 *)puVar1,0);
                                      if ((lVar7 != 0) &&
                                         (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)
                                                                            (*plVar6 + 0x40)),
                                         lVar8 == 0)) goto LAB_03505b38;
                                      puVar4 = 
                                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<float>__
                                      ;
                                      puVar3 = 
                                      Method_Sirenix_Serialization_Utilities_TypeExtensions_GetAllMembers<MethodInfo>__
                                      ;
                                      puVar2 = 
                                      Method_System_Linq_Enumerable_Select<IGraphParentElement,_Guid>__
                                      ;
                                      puVar1 = 
                                      Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__
                                      ;
                                      if (0x12 < *(uint *)(plVar6 + 3)) {
                                        plVar6[0x16] = lVar7;
                                        thunk_FUN_01f51358(plVar6 + 0x16,lVar7);
                                        plVar9 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
                                        *plVar9 = (long)plVar6;
                                        thunk_FUN_01f51358(plVar9,plVar6);
                                        uVar5 = FUN_03579868(*(undefined8 *)puVar2,0);
                                        puVar10 = (undefined8 *)
                                                  (*(long *)(*unaff_x21 + 0xb8) + 0x10);
                                        *puVar10 = uVar5;
                                        thunk_FUN_01f51358(puVar10,uVar5);
                                        uVar5 = FUN_01f08890(*(undefined8 *)puVar1,0x41);
                                        FUN_034a9d80(uVar5,*(undefined8 *)puVar4,0);
                                        puVar10 = (undefined8 *)
                                                  (*(long *)(*unaff_x21 + 0xb8) + 0x18);
                                        *puVar10 = uVar5;
                                        thunk_FUN_01f51358(puVar10,uVar5);
                                        lVar7 = *(long *)puVar3;
                                        if (*(int *)(lVar7 + 0xe0) == 0) {
                                          thunk_FUN_01ee6d7c();
                                          lVar7 = *(long *)puVar3;
                                        }
                                        *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x20) =
                                             **(undefined8 **)(lVar7 + 0xb8);
                                        thunk_FUN_01f51358();
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


