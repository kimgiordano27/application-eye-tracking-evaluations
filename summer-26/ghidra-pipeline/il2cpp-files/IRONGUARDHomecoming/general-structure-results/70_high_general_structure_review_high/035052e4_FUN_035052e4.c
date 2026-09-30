/*
FUNCTION_NAME: FUN_035052e4
ENTRY_POINT: 035052e4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_16;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_035052e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  
  puVar6 = Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<int>__;
  puVar5 = 
  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<InputActionType>__;
  puVar4 = Method_System_Linq_Expressions_Interpreter_OrInstruction_Create__;
  puVar3 = Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__;
  puVar2 = Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_04832f81 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_StringToNative__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<RectOffset>__
                      );
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
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                      );
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
    DAT_04832f81 = 1;
  }
  uVar7 = FUN_01f08890(*(undefined8 *)puVar4,0x100);
  FUN_034a9d80(uVar7,*(undefined8 *)puVar5,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar7;
  thunk_FUN_01f51358(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar7);
  plVar8 = (long *)FUN_01f08890(*(undefined8 *)puVar3,0x13);
  uVar7 = *(undefined8 *)puVar6;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar1);
  }
  lVar9 = FUN_03579868(uVar7,0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
LAB_03505b38:
    uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar7,0);
  }
  puVar1 = Method_System_Convert_ToUInt64__;
  if ((int)plVar8[3] != 0) {
    plVar8[4] = lVar9;
    thunk_FUN_01f51358(plVar8 + 4,lVar9);
    lVar9 = FUN_03579868(*(undefined8 *)puVar1,0);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
    goto LAB_03505b38;
    puVar3 = 
    Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<RectOffset>__;
    if (1 < *(uint *)(plVar8 + 3)) {
      plVar8[5] = lVar9;
      thunk_FUN_01f51358(plVar8 + 5,lVar9);
      lVar9 = FUN_03579868(*(undefined8 *)puVar3,0);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_03505b38;
      puVar3 = Method_Oculus_Platform_CAPI_StringToNative__;
      if (2 < *(uint *)(plVar8 + 3)) {
        plVar8[6] = lVar9;
        thunk_FUN_01f51358(plVar8 + 6,lVar9);
        lVar9 = FUN_03579868(*(undefined8 *)puVar3,0);
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_03505b38;
        puVar3 = Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__;
        if (3 < *(uint *)(plVar8 + 3)) {
          plVar8[7] = lVar9;
          thunk_FUN_01f51358(plVar8 + 7,lVar9);
          lVar9 = FUN_03579868(*(undefined8 *)puVar3,0);
          if ((lVar9 != 0) &&
             (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
          goto LAB_03505b38;
          puVar3 = 
          Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__;
          if (4 < *(uint *)(plVar8 + 3)) {
            plVar8[8] = lVar9;
            thunk_FUN_01f51358(plVar8 + 8,lVar9);
            lVar9 = FUN_03579868(*(undefined8 *)puVar3,0);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
            goto LAB_03505b38;
            puVar3 = Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
            ;
            if (5 < *(uint *)(plVar8 + 3)) {
              plVar8[9] = lVar9;
              thunk_FUN_01f51358(plVar8 + 9,lVar9);
              lVar9 = FUN_03579868(*(undefined8 *)puVar3,0);
              if ((lVar9 != 0) &&
                 (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
              goto LAB_03505b38;
              puVar3 = Method_System_Globalization_Calendar_ToFourDigitYear__;
              if (6 < *(uint *)(plVar8 + 3)) {
                plVar8[10] = lVar9;
                thunk_FUN_01f51358(plVar8 + 10,lVar9);
                lVar9 = FUN_03579868(*(undefined8 *)puVar3,0);
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)
                   ) goto LAB_03505b38;
                puVar3 = Method_UnityEngine_Component_GetComponent<TeleportInputHandlerTouch>__;
                if (7 < *(uint *)(plVar8 + 3)) {
                  plVar8[0xb] = lVar9;
                  thunk_FUN_01f51358(plVar8 + 0xb,lVar9);
                  lVar9 = FUN_03579868(*(undefined8 *)puVar3,0);
                  if ((lVar9 != 0) &&
                     (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                     lVar10 == 0)) goto LAB_03505b38;
                  puVar3 = Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
                  if (8 < *(uint *)(plVar8 + 3)) {
                    plVar8[0xc] = lVar9;
                    thunk_FUN_01f51358(plVar8 + 0xc,lVar9);
                    lVar9 = FUN_03579868(*(undefined8 *)puVar3,0);
                    if ((lVar9 != 0) &&
                       (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar10 == 0)) goto LAB_03505b38;
                    puVar3 = 
                    Method_UnityEngine_Component_GetComponent<TeleportOrientationHandlerThumbstick>__
                    ;
                    if (9 < *(uint *)(plVar8 + 3)) {
                      plVar8[0xd] = lVar9;
                      thunk_FUN_01f51358(plVar8 + 0xd,lVar9);
                      lVar9 = FUN_03579868(*(undefined8 *)puVar3,0);
                      if ((lVar9 != 0) &&
                         (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar10 == 0)) goto LAB_03505b38;
                      puVar3 = Method_System_Globalization_CalendarData_GetJapaneseEraNames__;
                      if (10 < *(uint *)(plVar8 + 3)) {
                        plVar8[0xe] = lVar9;
                        thunk_FUN_01f51358(plVar8 + 0xe,lVar9);
                        lVar9 = FUN_03579868(*(undefined8 *)puVar3,0);
                        if ((lVar9 != 0) &&
                           (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar10 == 0)) goto LAB_03505b38;
                        puVar3 = Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__;
                        if (0xb < *(uint *)(plVar8 + 3)) {
                          plVar8[0xf] = lVar9;
                          thunk_FUN_01f51358(plVar8 + 0xf,lVar9);
                          lVar9 = FUN_03579868(*(undefined8 *)puVar3,0);
                          if ((lVar9 != 0) &&
                             (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                             lVar10 == 0)) goto LAB_03505b38;
                          puVar3 = 
                          Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                          ;
                          if (0xc < *(uint *)(plVar8 + 3)) {
                            plVar8[0x10] = lVar9;
                            thunk_FUN_01f51358(plVar8 + 0x10,lVar9);
                            lVar9 = FUN_03579868(*(undefined8 *)puVar3,0);
                            if ((lVar9 != 0) &&
                               (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                               lVar10 == 0)) goto LAB_03505b38;
                            puVar3 = Method_Unity_VisualScripting_Cache_Store__;
                            if (0xd < *(uint *)(plVar8 + 3)) {
                              plVar8[0x11] = lVar9;
                              thunk_FUN_01f51358(plVar8 + 0x11,lVar9);
                              lVar9 = FUN_03579868(*(undefined8 *)puVar3,0);
                              if ((lVar9 != 0) &&
                                 (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40))
                                 , lVar10 == 0)) goto LAB_03505b38;
                              puVar3 = Method_UnityEngine_GraphicsBuffer_SetData<uint>__;
                              if (0xe < *(uint *)(plVar8 + 3)) {
                                plVar8[0x12] = lVar9;
                                thunk_FUN_01f51358(plVar8 + 0x12,lVar9);
                                lVar9 = FUN_03579868(*(undefined8 *)puVar3,0);
                                if ((lVar9 != 0) &&
                                   (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)
                                                                       (*plVar8 + 0x40)),
                                   lVar10 == 0)) goto LAB_03505b38;
                                puVar3 = Method_UnityEngine_GraphicsBuffer_SetData<float4>__;
                                if (0xf < *(uint *)(plVar8 + 3)) {
                                  plVar8[0x13] = lVar9;
                                  thunk_FUN_01f51358(plVar8 + 0x13,lVar9);
                                  lVar9 = FUN_03579868(*(undefined8 *)puVar3,0);
                                  if ((lVar9 != 0) &&
                                     (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)
                                                                         (*plVar8 + 0x40)),
                                     lVar10 == 0)) goto LAB_03505b38;
                                  if (0x10 < *(uint *)(plVar8 + 3)) {
                                    plVar8[0x14] = lVar9;
                                    thunk_FUN_01f51358(plVar8 + 0x14,lVar9);
                                    lVar9 = FUN_03579868(*(undefined8 *)puVar1,0);
                                    if ((lVar9 != 0) &&
                                       (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)
                                                                           (*plVar8 + 0x40)),
                                       lVar10 == 0)) goto LAB_03505b38;
                                    puVar1 = 
                                    Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                                    ;
                                    if (0x11 < *(uint *)(plVar8 + 3)) {
                                      plVar8[0x15] = lVar9;
                                      thunk_FUN_01f51358(plVar8 + 0x15,lVar9);
                                      lVar9 = FUN_03579868(*(undefined8 *)puVar1,0);
                                      if ((lVar9 != 0) &&
                                         (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)
                                                                             (*plVar8 + 0x40)),
                                         lVar10 == 0)) goto LAB_03505b38;
                                      puVar5 = 
                                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<float>__
                                      ;
                                      puVar4 = 
                                      Method_Sirenix_Serialization_Utilities_TypeExtensions_GetAllMembers<MethodInfo>__
                                      ;
                                      puVar3 = 
                                      Method_System_Linq_Enumerable_Select<IGraphParentElement,_Guid>__
                                      ;
                                      puVar1 = 
                                      Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__
                                      ;
                                      if (0x12 < *(uint *)(plVar8 + 3)) {
                                        plVar8[0x16] = lVar9;
                                        thunk_FUN_01f51358(plVar8 + 0x16,lVar9);
                                        plVar11 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                                        *plVar11 = (long)plVar8;
                                        thunk_FUN_01f51358(plVar11,plVar8);
                                        uVar7 = FUN_03579868(*(undefined8 *)puVar3,0);
                                        puVar12 = (undefined8 *)
                                                  (*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
                                        *puVar12 = uVar7;
                                        thunk_FUN_01f51358(puVar12,uVar7);
                                        uVar7 = FUN_01f08890(*(undefined8 *)puVar1,0x41);
                                        FUN_034a9d80(uVar7,*(undefined8 *)puVar5,0);
                                        puVar12 = (undefined8 *)
                                                  (*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
                                        *puVar12 = uVar7;
                                        thunk_FUN_01f51358(puVar12,uVar7);
                                        lVar9 = *(long *)puVar4;
                                        if (*(int *)(lVar9 + 0xe0) == 0) {
                                          thunk_FUN_01ee6d7c();
                                          lVar9 = *(long *)puVar4;
                                        }
                                        *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) =
                                             **(undefined8 **)(lVar9 + 0xb8);
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


