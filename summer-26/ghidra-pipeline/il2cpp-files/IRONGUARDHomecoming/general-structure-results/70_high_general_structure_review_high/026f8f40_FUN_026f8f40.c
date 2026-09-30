/*
FUNCTION_NAME: FUN_026f8f40
ENTRY_POINT: 026f8f40
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_026f8f40(undefined8 *param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  char *pcVar10;
  int *piVar11;
  short *psVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  code *pcVar16;
  undefined8 *puVar17;
  ulong __n;
  long lVar18;
  undefined8 uVar19;
  void *__s;
  void *apvStack_70 [3];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  apvStack_70[1] = param_1;
  if ((DAT_048301c7 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_StringToNative__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
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
    DAT_048301c7 = 1;
  }
  plVar15 = (long *)(param_2 + 0x20);
  lVar18 = *plVar15;
  lVar7 = lVar18;
  if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = FUN_01ecaf44(lVar18);
    lVar7 = *plVar15;
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar18 + 0xc0) + 0x28) + 0xfc);
  uVar14 = __n + 0xf & 0x1fffffff0;
  puVar17 = (undefined8 *)((long)apvStack_70 - uVar14);
  __s = (void *)((long)puVar17 - uVar14);
  memset(__s,0,__n);
  memset(__s,0,__n);
  memcpy(puVar17,__s,__n);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  uVar14 = FUN_01f089f8(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28),puVar17);
  lVar7 = *plVar15;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  puVar6 = Method_Oculus_Platform_CAPI_StringToNative__;
  puVar5 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((uVar14 & 1) == 0) {
    puVar13 = apvStack_70[1];
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x28)) {
      puVar13 = apvStack_70 + 1;
    }
    memcpy(puVar17,puVar13,__n);
    lVar7 = *plVar15;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    uVar14 = FUN_01f089f8(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28),puVar17);
    if ((uVar14 & 1) == 0) {
LAB_026f9fc4:
      lVar7 = *plVar15;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar7 = *plVar15;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar19 = **(undefined8 **)(lVar7 + 0xb8);
      goto LAB_026fa020;
    }
  }
  else {
    uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar19 = FUN_03579868(uVar19,0);
    uVar8 = FUN_03579868(*(undefined8 *)puVar6,0);
    uVar14 = FUN_03582560(uVar19,uVar8,0);
    lVar7 = *plVar15;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    if ((uVar14 & 1) != 0) {
      puVar13 = apvStack_70[1];
      if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x28)) {
        puVar13 = apvStack_70 + 1;
      }
      memcpy(puVar17,puVar13,__n);
      lVar7 = *plVar15;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28),puVar17);
      if (plVar9 == (long *)0x0) goto LAB_026fa050;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)
                     Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                   + 0x40)) goto LAB_026fa054;
      pcVar10 = (char *)thunk_FUN_01f11920();
      puVar5 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
      cVar2 = *pcVar10;
      lVar7 = *(long *)Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar7 = *(long *)puVar5;
      }
      lVar18 = *plVar15;
      puVar17 = *(undefined8 **)(lVar7 + 0xb8) + 1;
      if (cVar2 != '\0') {
        puVar17 = *(undefined8 **)(lVar7 + 0xb8);
      }
      uVar3 = *(ushort *)(lVar18 + 0x135);
      uVar19 = *puVar17;
joined_r0x026f945c:
      lVar7 = lVar18;
      if ((uVar3 & 1) == 0) {
        lVar18 = FUN_01ecaf44(lVar18);
        uVar3 = *(ushort *)(*plVar15 + 0x135);
        lVar7 = *plVar15;
      }
      pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x50);
      if ((uVar3 & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      uVar19 = (*pcVar16)(uVar19,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x50));
      goto LAB_026fa020;
    }
    uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar19 = FUN_03579868(uVar19,0);
    uVar8 = FUN_03579868(*(undefined8 *)
                          Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__,0);
    uVar14 = FUN_03582560(uVar19,uVar8,0);
    lVar7 = *plVar15;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    if ((uVar14 & 1) == 0) {
      uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar19 = FUN_03579868(uVar19,0);
      uVar8 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_Component_GetComponent<TeleportOrientationHandlerThumbstick>__
                           ,0);
      uVar14 = FUN_03582560(uVar19,uVar8,0);
      if ((uVar14 & 1) != 0) {
        lVar18 = *plVar15;
        lVar7 = lVar18;
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = FUN_01ecaf44(lVar18);
          lVar7 = *plVar15;
        }
        puVar13 = apvStack_70[1];
        if (-1 < *(int *)(*(long *)(*(long *)(lVar18 + 0xc0) + 0x28) + 0x28)) {
          puVar13 = apvStack_70 + 1;
        }
        memcpy(puVar17,puVar13,__n);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28),puVar17)
        ;
        if (plVar9 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar9 + 0x40) !=
            *(long *)(*(long *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__ + 0x40)
           ) goto LAB_026fa054;
        piVar11 = (int *)thunk_FUN_01f11920();
        if (*piVar11 == 0) goto LAB_026f9fc4;
      }
      lVar7 = *plVar15;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar5);
      }
      uVar19 = FUN_03579868(uVar19,0);
      uVar8 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                           ,0);
      uVar14 = FUN_03582560(uVar19,uVar8,0);
      if ((uVar14 & 1) != 0) {
        lVar18 = *plVar15;
        lVar7 = lVar18;
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = FUN_01ecaf44(lVar18);
          lVar7 = *plVar15;
        }
        puVar13 = apvStack_70[1];
        if (-1 < *(int *)(*(long *)(*(long *)(lVar18 + 0xc0) + 0x28) + 0x28)) {
          puVar13 = apvStack_70 + 1;
        }
        memcpy(puVar17,puVar13,__n);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28),puVar17)
        ;
        if (plVar9 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar9 + 0x40) !=
            *(long *)(*(long *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__ +
                     0x40)) goto LAB_026fa054;
        pcVar10 = (char *)thunk_FUN_01f11920();
        if (*pcVar10 == '\0') goto LAB_026f9fc4;
      }
      lVar7 = *plVar15;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar5);
      }
      uVar19 = FUN_03579868(uVar19,0);
      uVar8 = FUN_03579868(*(undefined8 *)
                            Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                           ,0);
      uVar14 = FUN_03582560(uVar19,uVar8,0);
      if ((uVar14 & 1) != 0) {
        lVar18 = *plVar15;
        lVar7 = lVar18;
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = FUN_01ecaf44(lVar18);
          lVar7 = *plVar15;
        }
        puVar13 = apvStack_70[1];
        if (-1 < *(int *)(*(long *)(*(long *)(lVar18 + 0xc0) + 0x28) + 0x28)) {
          puVar13 = apvStack_70 + 1;
        }
        memcpy(puVar17,puVar13,__n);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28),puVar17)
        ;
        if (plVar9 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar9 + 0x40) !=
            *(long *)(*(long *)
                       Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                     + 0x40)) goto LAB_026fa054;
        pcVar10 = (char *)thunk_FUN_01f11920();
        if (*pcVar10 == '\0') goto LAB_026f9fc4;
      }
      lVar7 = *plVar15;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar5);
      }
      uVar19 = FUN_03579868(uVar19,0);
      uVar8 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                           ,0);
      uVar14 = FUN_03582560(uVar19,uVar8,0);
      if ((uVar14 & 1) != 0) {
        lVar18 = *plVar15;
        lVar7 = lVar18;
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = FUN_01ecaf44(lVar18);
          lVar7 = *plVar15;
        }
        puVar13 = apvStack_70[1];
        if (-1 < *(int *)(*(long *)(*(long *)(lVar18 + 0xc0) + 0x28) + 0x28)) {
          puVar13 = apvStack_70 + 1;
        }
        memcpy(puVar17,puVar13,__n);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28),puVar17)
        ;
        if (plVar9 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar9 + 0x40) !=
            *(long *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0x40)) goto LAB_026fa054;
        psVar12 = (short *)thunk_FUN_01f11920();
        if (*psVar12 == 0) goto LAB_026f9fc4;
      }
      lVar7 = *plVar15;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar5);
      }
      uVar19 = FUN_03579868(uVar19,0);
      uVar8 = FUN_03579868(*(undefined8 *)
                            Method_System_Globalization_CalendarData_GetJapaneseEraNames__,0);
      uVar14 = FUN_03582560(uVar19,uVar8,0);
      if ((uVar14 & 1) != 0) {
        lVar18 = *plVar15;
        lVar7 = lVar18;
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = FUN_01ecaf44(lVar18);
          lVar7 = *plVar15;
        }
        puVar13 = apvStack_70[1];
        if (-1 < *(int *)(*(long *)(*(long *)(lVar18 + 0xc0) + 0x28) + 0x28)) {
          puVar13 = apvStack_70 + 1;
        }
        memcpy(puVar17,puVar13,__n);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28),puVar17)
        ;
        if (plVar9 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar9 + 0x40) !=
            *(long *)(*(long *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__ +
                     0x40)) goto LAB_026fa054;
        plVar9 = (long *)thunk_FUN_01f11920();
        if (*plVar9 == 0) goto LAB_026f9fc4;
      }
      lVar7 = *plVar15;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar5);
      }
      uVar19 = FUN_03579868(uVar19,0);
      uVar8 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__,0);
      uVar14 = FUN_03582560(uVar19,uVar8,0);
      if ((uVar14 & 1) != 0) {
        lVar18 = *plVar15;
        lVar7 = lVar18;
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = FUN_01ecaf44(lVar18);
          lVar7 = *plVar15;
        }
        puVar13 = apvStack_70[1];
        if (-1 < *(int *)(*(long *)(*(long *)(lVar18 + 0xc0) + 0x28) + 0x28)) {
          puVar13 = apvStack_70 + 1;
        }
        memcpy(puVar17,puVar13,__n);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28),puVar17)
        ;
        if (plVar9 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar9 + 0x40) !=
            *(long *)(*(long *)
                       Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                     + 0x40)) goto LAB_026fa054;
        plVar9 = (long *)thunk_FUN_01f11920();
        if (*plVar9 == 0) goto LAB_026f9fc4;
      }
      lVar7 = *plVar15;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar5);
      }
      uVar19 = FUN_03579868(uVar19,0);
      uVar8 = FUN_03579868(*(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__,0);
      uVar14 = FUN_03582560(uVar19,uVar8,0);
      if ((uVar14 & 1) != 0) {
        lVar18 = *plVar15;
        lVar7 = lVar18;
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = FUN_01ecaf44(lVar18);
          lVar7 = *plVar15;
        }
        puVar13 = apvStack_70[1];
        if (-1 < *(int *)(*(long *)(*(long *)(lVar18 + 0xc0) + 0x28) + 0x28)) {
          puVar13 = apvStack_70 + 1;
        }
        memcpy(puVar17,puVar13,__n);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28),puVar17)
        ;
        if (plVar9 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar9 + 0x40) !=
            *(long *)(*(long *)Method_System_Globalization_Calendar_VerifyWritable__ + 0x40))
        goto LAB_026fa054;
        psVar12 = (short *)thunk_FUN_01f11920();
        if (*psVar12 == 0) goto LAB_026f9fc4;
      }
      lVar7 = *plVar15;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar5);
      }
      uVar19 = FUN_03579868(uVar19,0);
      uVar8 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_Component_GetComponent<TeleportInputHandlerTouch>__,0
                          );
      uVar14 = FUN_03582560(uVar19,uVar8,0);
      if ((uVar14 & 1) != 0) {
        lVar18 = *plVar15;
        lVar7 = lVar18;
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = FUN_01ecaf44(lVar18);
          lVar7 = *plVar15;
        }
        puVar13 = apvStack_70[1];
        if (-1 < *(int *)(*(long *)(*(long *)(lVar18 + 0xc0) + 0x28) + 0x28)) {
          puVar13 = apvStack_70 + 1;
        }
        memcpy(puVar17,puVar13,__n);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28),puVar17)
        ;
        if (plVar9 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar9 + 0x40) !=
            *(long *)(*(long *)Method_System_Security_Cryptography_DSA_FromXmlString__ + 0x40))
        goto LAB_026fa054;
        psVar12 = (short *)thunk_FUN_01f11920();
        if (*psVar12 == 0) goto LAB_026f9fc4;
      }
      lVar7 = *plVar15;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar5);
      }
      uVar19 = FUN_03579868(uVar19,0);
      uVar8 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_2__
                           ,0);
      uVar14 = FUN_03582560(uVar19,uVar8,0);
      if ((uVar14 & 1) != 0) {
        lVar18 = *plVar15;
        lVar7 = lVar18;
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = FUN_01ecaf44(lVar18);
          lVar7 = *plVar15;
        }
        puVar13 = apvStack_70[1];
        if (-1 < *(int *)(*(long *)(*(long *)(lVar18 + 0xc0) + 0x28) + 0x28)) {
          puVar13 = apvStack_70 + 1;
        }
        memcpy(puVar17,puVar13,__n);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28),puVar17)
        ;
        if (plVar9 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar9 + 0x40) !=
            *(long *)(*(long *)
                       Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_3__ +
                     0x40)) goto LAB_026fa054;
        puVar13 = (undefined8 *)thunk_FUN_01f11920();
        uVar14 = FUN_035ad140(0,*puVar13,0);
        if ((uVar14 & 1) != 0) goto LAB_026f9fc4;
      }
      lVar7 = *plVar15;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar5);
      }
      uVar19 = FUN_03579868(uVar19,0);
      uVar8 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_4__
                           ,0);
      uVar14 = FUN_03582560(uVar19,uVar8,0);
      if ((uVar14 & 1) != 0) {
        lVar18 = *plVar15;
        lVar7 = lVar18;
        if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
          lVar18 = FUN_01ecaf44(lVar18);
          lVar7 = *plVar15;
        }
        puVar13 = apvStack_70[1];
        if (-1 < *(int *)(*(long *)(*(long *)(lVar18 + 0xc0) + 0x28) + 0x28)) {
          puVar13 = apvStack_70 + 1;
        }
        memcpy(puVar17,puVar13,__n);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28),puVar17)
        ;
        if (plVar9 == (long *)0x0) {
LAB_026fa050:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(*plVar9 + 0x40) !=
            *(long *)(*(long *)
                       Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_5__ +
                     0x40)) {
LAB_026fa054:
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
        puVar13 = (undefined8 *)thunk_FUN_01f11920();
        uVar14 = FUN_035c41d0(0,*puVar13,0);
        if ((uVar14 & 1) != 0) goto LAB_026f9fc4;
      }
    }
    else {
      puVar13 = apvStack_70[1];
      if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x28)) {
        puVar13 = apvStack_70 + 1;
      }
      memcpy(puVar17,puVar13,__n);
      lVar7 = *plVar15;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28),puVar17);
      if (plVar9 == (long *)0x0) goto LAB_026fa050;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__ +
                   0x40)) goto LAB_026fa054;
      piVar11 = (int *)thunk_FUN_01f11920();
      puVar5 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
      uVar1 = *piVar11 + 1;
      if (uVar1 < 10) {
        lVar7 = *(long *)Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar7 = *(long *)puVar5;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
        if (lVar7 == 0) goto LAB_026fa050;
        if (*(uint *)(lVar7 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar18 = *plVar15;
        uVar19 = *(undefined8 *)(lVar7 + (ulong)uVar1 * 8 + 0x20);
        uVar3 = *(ushort *)(lVar18 + 0x135);
        goto joined_r0x026f945c;
      }
    }
  }
  lVar18 = *plVar15;
  lVar7 = lVar18;
  if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = FUN_01ecaf44(lVar18);
    lVar7 = *plVar15;
  }
  puVar13 = apvStack_70[1];
  if (-1 < *(int *)(*(long *)(*(long *)(lVar18 + 0xc0) + 0x28) + 0x28)) {
    puVar13 = apvStack_70 + 1;
  }
  memcpy(puVar17,puVar13,__n);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar19 = thunk_FUN_01f117cc();
  lVar18 = *plVar15;
  uVar3 = *(ushort *)(lVar18 + 0x135);
  lVar7 = lVar18;
  if ((uVar3 & 1) == 0) {
    lVar18 = FUN_01ecaf44(lVar18);
    uVar3 = *(ushort *)(*plVar15 + 0x135);
    lVar7 = *plVar15;
  }
  uVar8 = **(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x58);
  lVar18 = lVar7;
  if ((uVar3 & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
    uVar3 = *(ushort *)(*plVar15 + 0x135);
    lVar18 = *plVar15;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x58);
  if ((uVar3 & 1) == 0) {
    lVar18 = FUN_01ecaf44(lVar18);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar18 + 0xc0) + 0x28) + 0x28)) {
    puVar17 = (undefined8 *)*puVar17;
  }
  apvStack_70[2] = puVar17;
  (**(code **)(lVar7 + 0x10))(uVar8,lVar7,uVar19,apvStack_70 + 2,puVar17);
LAB_026fa020:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


