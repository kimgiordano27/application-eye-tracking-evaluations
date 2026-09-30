/*
FUNCTION_NAME: DG.Tweening.Core.TweenerCore<Vector4,-Vector4,-VectorOptions>$$ValidateChangeValueType
ENTRY_POINT: 026f1c28
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_16;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
DG_Tweening_Core_TweenerCore<Vector4,_Vector4,_VectorOptions>__ValidateChangeValueType(long param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  int *piVar12;
  short *psVar13;
  undefined8 *puVar14;
  long unaff_x19;
  long *plVar15;
  long unaff_x22;
  undefined8 uVar16;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x4e8));
  thunk_FUN_01efb3a4(
                    Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                    );
  thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__);
  thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__);
  thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
  thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_ToFourDigitYear__);
  thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_VerifyWritable__);
  thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEraNames__);
  thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_2__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_3__);
  thunk_FUN_01efb3a4(
                    Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                    );
  thunk_FUN_01efb3a4(
                    Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
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
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_4__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_5__);
  *(undefined1 *)(unaff_x22 + 0x1ab) = 1;
  puVar4 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  plVar15 = (long *)(unaff_x19 + 0x20);
  lVar6 = *plVar15;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
  }
  puVar5 = Method_Oculus_Platform_CAPI_StringToNative__;
  uVar16 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar4);
  }
  uVar16 = FUN_03579868(uVar16,0);
  uVar7 = FUN_03579868(*(undefined8 *)puVar5,0);
  uVar8 = FUN_03582560(uVar16,uVar7,0);
  if ((uVar8 & 1) != 0) {
    lVar6 = *plVar15;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28));
    if (plVar9 == (long *)0x0) goto LAB_026f27cc;
    if (*(long *)(*plVar9 + 0x40) ==
        *(long *)(*(long *)
                   Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                 + 0x40)) {
      pcVar10 = (char *)thunk_FUN_01f11920();
      puVar4 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
      cVar2 = *pcVar10;
      lVar6 = *(long *)Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar6 = *(long *)puVar4;
      }
      lVar11 = *plVar15;
      puVar14 = *(undefined8 **)(lVar6 + 0xb8) + 1;
      if (cVar2 != '\0') {
        puVar14 = *(undefined8 **)(lVar6 + 0xb8);
      }
      bVar3 = *(byte *)(lVar11 + 0x135);
      uVar16 = *puVar14;
joined_r0x026f1e54:
      if ((bVar3 & 1) == 0) {
        lVar11 = FUN_01ecaf44();
      }
      uVar16 = FUN_02365eb4(uVar16,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x50));
      return uVar16;
    }
LAB_026f27d0:
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
  lVar6 = *plVar15;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
  }
  uVar16 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar4);
  }
  uVar16 = FUN_03579868(uVar16,0);
  uVar7 = FUN_03579868(*(undefined8 *)
                        Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__,0);
  uVar8 = FUN_03582560(uVar16,uVar7,0);
  if ((uVar8 & 1) == 0) {
    lVar6 = *plVar15;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    uVar16 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar4);
    }
    uVar16 = FUN_03579868(uVar16,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_UnityEngine_Component_GetComponent<TeleportOrientationHandlerThumbstick>__
                         ,0);
    uVar8 = FUN_03582560(uVar16,uVar7,0);
    if ((uVar8 & 1) != 0) {
      lVar6 = *plVar15;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_026f27cc;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__ + 0x40))
      goto LAB_026f27d0;
      piVar12 = (int *)thunk_FUN_01f11920();
      if (*piVar12 == 0) goto LAB_026f2708;
    }
    lVar6 = *plVar15;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    uVar16 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar4);
    }
    uVar16 = FUN_03579868(uVar16,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                         ,0);
    uVar8 = FUN_03582560(uVar16,uVar7,0);
    if ((uVar8 & 1) != 0) {
      lVar6 = *plVar15;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_026f27cc;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__ +
                   0x40)) goto LAB_026f27d0;
      pcVar10 = (char *)thunk_FUN_01f11920();
      if (*pcVar10 == '\0') goto LAB_026f2708;
    }
    lVar6 = *plVar15;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    uVar16 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar4);
    }
    uVar16 = FUN_03579868(uVar16,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                         ,0);
    uVar8 = FUN_03582560(uVar16,uVar7,0);
    if ((uVar8 & 1) != 0) {
      lVar6 = *plVar15;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_026f27cc;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)
                     Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                   + 0x40)) goto LAB_026f27d0;
      pcVar10 = (char *)thunk_FUN_01f11920();
      if (*pcVar10 == '\0') goto LAB_026f2708;
    }
    lVar6 = *plVar15;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    uVar16 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar4);
    }
    uVar16 = FUN_03579868(uVar16,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                         ,0);
    uVar8 = FUN_03582560(uVar16,uVar7,0);
    if ((uVar8 & 1) != 0) {
      lVar6 = *plVar15;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_026f27cc;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0x40)) goto LAB_026f27d0;
      psVar13 = (short *)thunk_FUN_01f11920();
      if (*psVar13 == 0) goto LAB_026f2708;
    }
    lVar6 = *plVar15;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    uVar16 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar4);
    }
    uVar16 = FUN_03579868(uVar16,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_System_Globalization_CalendarData_GetJapaneseEraNames__,0);
    uVar8 = FUN_03582560(uVar16,uVar7,0);
    if ((uVar8 & 1) != 0) {
      lVar6 = *plVar15;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_026f27cc;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__ + 0x40
                   )) goto LAB_026f27d0;
      plVar9 = (long *)thunk_FUN_01f11920();
      if (*plVar9 == 0) goto LAB_026f2708;
    }
    lVar6 = *plVar15;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    uVar16 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar4);
    }
    uVar16 = FUN_03579868(uVar16,0);
    uVar7 = FUN_03579868(*(undefined8 *)Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__
                         ,0);
    uVar8 = FUN_03582560(uVar16,uVar7,0);
    if ((uVar8 & 1) != 0) {
      lVar6 = *plVar15;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_026f27cc;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)
                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                   + 0x40)) goto LAB_026f27d0;
      plVar9 = (long *)thunk_FUN_01f11920();
      if (*plVar9 == 0) goto LAB_026f2708;
    }
    lVar6 = *plVar15;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    uVar16 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar4);
    }
    uVar16 = FUN_03579868(uVar16,0);
    uVar7 = FUN_03579868(*(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__,0);
    uVar8 = FUN_03582560(uVar16,uVar7,0);
    if ((uVar8 & 1) != 0) {
      lVar6 = *plVar15;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_026f27cc;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)Method_System_Globalization_Calendar_VerifyWritable__ + 0x40))
      goto LAB_026f27d0;
      psVar13 = (short *)thunk_FUN_01f11920();
      if (*psVar13 == 0) goto LAB_026f2708;
    }
    lVar6 = *plVar15;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    uVar16 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar4);
    }
    uVar16 = FUN_03579868(uVar16,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_UnityEngine_Component_GetComponent<TeleportInputHandlerTouch>__,0);
    uVar8 = FUN_03582560(uVar16,uVar7,0);
    if ((uVar8 & 1) != 0) {
      lVar6 = *plVar15;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_026f27cc;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)Method_System_Security_Cryptography_DSA_FromXmlString__ + 0x40))
      goto LAB_026f27d0;
      psVar13 = (short *)thunk_FUN_01f11920();
      if (*psVar13 == 0) goto LAB_026f2708;
    }
    lVar6 = *plVar15;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    uVar16 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar4);
    }
    uVar16 = FUN_03579868(uVar16,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_2__,
                         0);
    uVar8 = FUN_03582560(uVar16,uVar7,0);
    if ((uVar8 & 1) != 0) {
      lVar6 = *plVar15;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_026f27cc;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)
                     Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_3__ +
                   0x40)) goto LAB_026f27d0;
      puVar14 = (undefined8 *)thunk_FUN_01f11920();
      uVar8 = FUN_035ad140(0,*puVar14,0);
      if ((uVar8 & 1) != 0) goto LAB_026f2708;
    }
    lVar6 = *plVar15;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    uVar16 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar4);
    }
    uVar16 = FUN_03579868(uVar16,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_4__,
                         0);
    uVar8 = FUN_03582560(uVar16,uVar7,0);
    if ((uVar8 & 1) != 0) {
      lVar6 = *plVar15;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_026f27cc;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)
                     Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_5__ +
                   0x40)) goto LAB_026f27d0;
      puVar14 = (undefined8 *)thunk_FUN_01f11920();
      uVar8 = FUN_035c41d0(0,*puVar14,0);
      if ((uVar8 & 1) != 0) {
LAB_026f2708:
        lVar6 = *plVar15;
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44();
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar6 = *plVar15;
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44();
        }
        return **(undefined8 **)(lVar6 + 0xb8);
      }
    }
  }
  else {
    lVar6 = *plVar15;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28));
    if (plVar9 == (long *)0x0) {
LAB_026f27cc:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar9 + 0x40) !=
        *(long *)(*(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__ +
                 0x40)) goto LAB_026f27d0;
    piVar12 = (int *)thunk_FUN_01f11920();
    puVar4 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
    uVar1 = *piVar12 + 1;
    if (uVar1 < 10) {
      lVar6 = *(long *)Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar6 = *(long *)puVar4;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar11 = *plVar15;
        uVar16 = *(undefined8 *)(lVar6 + (ulong)uVar1 * 8 + 0x20);
        bVar3 = *(byte *)(lVar11 + 0x135);
        goto joined_r0x026f1e54;
      }
      goto LAB_026f27cc;
    }
  }
  lVar6 = *plVar15;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar16 = thunk_FUN_01f117cc();
  if ((*(byte *)(*plVar15 + 0x135) & 1) == 0) {
    FUN_01ecaf44(*plVar15);
  }
  FUN_02778390(uVar16);
  return uVar16;
}


