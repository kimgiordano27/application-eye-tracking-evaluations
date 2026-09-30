/*
FUNCTION_NAME: Unity.Properties.TypeTraits<Bounds>$$get_IsEnum
ENTRY_POINT: 026f8f90
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


undefined8 Unity_Properties_TypeTraits<Bounds>__get_IsEnum(void)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  char *pcVar9;
  int *piVar10;
  short *psVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long unaff_x19;
  long *plVar14;
  code *pcVar15;
  long unaff_x20;
  undefined8 *puVar16;
  ulong __n;
  long lVar17;
  undefined8 uVar18;
  void *pvVar19;
  long unaff_x24;
  long unaff_x29;
  
  thunk_FUN_01efb3a4();
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
  *(undefined1 *)(unaff_x20 + 0x1c7) = 1;
  plVar14 = (long *)(unaff_x19 + 0x20);
  lVar17 = *plVar14;
  lVar6 = lVar17;
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = FUN_01ecaf44(lVar17);
    lVar6 = *plVar14;
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x28) + 0xfc);
  uVar13 = __n + 0xf & 0x1fffffff0;
  puVar16 = (undefined8 *)(&stack0x00000000 + -uVar13);
  pvVar19 = (void *)((long)puVar16 - uVar13);
  memset(pvVar19,0,__n);
  memset(pvVar19,0,__n);
  memcpy(puVar16,pvVar19,__n);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  uVar13 = FUN_01f089f8(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28),puVar16);
  lVar6 = *plVar14;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  puVar5 = Method_Oculus_Platform_CAPI_StringToNative__;
  puVar4 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((uVar13 & 1) == 0) {
    pvVar19 = *(void **)(unaff_x29 + -0x18);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x28) + 0x28)) {
      pvVar19 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(puVar16,pvVar19,__n);
    lVar6 = *plVar14;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    uVar13 = FUN_01f089f8(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28),puVar16);
    if ((uVar13 & 1) == 0) {
LAB_026f9fc4:
      lVar6 = *plVar14;
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
      lVar6 = *plVar14;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      uVar18 = **(undefined8 **)(lVar6 + 0xb8);
      goto LAB_026fa020;
    }
  }
  else {
    uVar18 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar18 = FUN_03579868(uVar18,0);
    uVar7 = FUN_03579868(*(undefined8 *)puVar5,0);
    uVar13 = FUN_03582560(uVar18,uVar7,0);
    lVar6 = *plVar14;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    if ((uVar13 & 1) != 0) {
      pvVar19 = *(void **)(unaff_x29 + -0x18);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x28) + 0x28)) {
        pvVar19 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(puVar16,pvVar19,__n);
      lVar6 = *plVar14;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      plVar8 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28),puVar16);
      if (plVar8 == (long *)0x0) goto LAB_026fa050;
      if (*(long *)(*plVar8 + 0x40) !=
          *(long *)(*(long *)
                     Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                   + 0x40)) goto LAB_026fa054;
      pcVar9 = (char *)thunk_FUN_01f11920();
      puVar4 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
      cVar2 = *pcVar9;
      lVar6 = *(long *)Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar6 = *(long *)puVar4;
      }
      lVar17 = *plVar14;
      puVar16 = *(undefined8 **)(lVar6 + 0xb8) + 1;
      if (cVar2 != '\0') {
        puVar16 = *(undefined8 **)(lVar6 + 0xb8);
      }
      uVar3 = *(ushort *)(lVar17 + 0x135);
      uVar18 = *puVar16;
joined_r0x026f945c:
      lVar6 = lVar17;
      if ((uVar3 & 1) == 0) {
        lVar17 = FUN_01ecaf44(lVar17);
        uVar3 = *(ushort *)(*plVar14 + 0x135);
        lVar6 = *plVar14;
      }
      pcVar15 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x50);
      if ((uVar3 & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      uVar18 = (*pcVar15)(uVar18,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x50));
      goto LAB_026fa020;
    }
    uVar18 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar18 = FUN_03579868(uVar18,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__,0);
    uVar13 = FUN_03582560(uVar18,uVar7,0);
    lVar6 = *plVar14;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    if ((uVar13 & 1) == 0) {
      uVar18 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar18 = FUN_03579868(uVar18,0);
      uVar7 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_Component_GetComponent<TeleportOrientationHandlerThumbstick>__
                           ,0);
      uVar13 = FUN_03582560(uVar18,uVar7,0);
      if ((uVar13 & 1) != 0) {
        lVar17 = *plVar14;
        lVar6 = lVar17;
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_01ecaf44(lVar17);
          lVar6 = *plVar14;
        }
        pvVar19 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x28) + 0x28)) {
          pvVar19 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(puVar16,pvVar19,__n);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        plVar8 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28),puVar16)
        ;
        if (plVar8 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar8 + 0x40) !=
            *(long *)(*(long *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__ + 0x40)
           ) goto LAB_026fa054;
        piVar10 = (int *)thunk_FUN_01f11920();
        if (*piVar10 == 0) goto LAB_026f9fc4;
      }
      lVar6 = *plVar14;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      uVar18 = FUN_03579868(uVar18,0);
      uVar7 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                           ,0);
      uVar13 = FUN_03582560(uVar18,uVar7,0);
      if ((uVar13 & 1) != 0) {
        lVar17 = *plVar14;
        lVar6 = lVar17;
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_01ecaf44(lVar17);
          lVar6 = *plVar14;
        }
        pvVar19 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x28) + 0x28)) {
          pvVar19 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(puVar16,pvVar19,__n);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        plVar8 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28),puVar16)
        ;
        if (plVar8 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar8 + 0x40) !=
            *(long *)(*(long *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__ +
                     0x40)) goto LAB_026fa054;
        pcVar9 = (char *)thunk_FUN_01f11920();
        if (*pcVar9 == '\0') goto LAB_026f9fc4;
      }
      lVar6 = *plVar14;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      uVar18 = FUN_03579868(uVar18,0);
      uVar7 = FUN_03579868(*(undefined8 *)
                            Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                           ,0);
      uVar13 = FUN_03582560(uVar18,uVar7,0);
      if ((uVar13 & 1) != 0) {
        lVar17 = *plVar14;
        lVar6 = lVar17;
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_01ecaf44(lVar17);
          lVar6 = *plVar14;
        }
        pvVar19 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x28) + 0x28)) {
          pvVar19 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(puVar16,pvVar19,__n);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        plVar8 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28),puVar16)
        ;
        if (plVar8 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar8 + 0x40) !=
            *(long *)(*(long *)
                       Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                     + 0x40)) goto LAB_026fa054;
        pcVar9 = (char *)thunk_FUN_01f11920();
        if (*pcVar9 == '\0') goto LAB_026f9fc4;
      }
      lVar6 = *plVar14;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      uVar18 = FUN_03579868(uVar18,0);
      uVar7 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                           ,0);
      uVar13 = FUN_03582560(uVar18,uVar7,0);
      if ((uVar13 & 1) != 0) {
        lVar17 = *plVar14;
        lVar6 = lVar17;
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_01ecaf44(lVar17);
          lVar6 = *plVar14;
        }
        pvVar19 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x28) + 0x28)) {
          pvVar19 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(puVar16,pvVar19,__n);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        plVar8 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28),puVar16)
        ;
        if (plVar8 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar8 + 0x40) !=
            *(long *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0x40)) goto LAB_026fa054;
        psVar11 = (short *)thunk_FUN_01f11920();
        if (*psVar11 == 0) goto LAB_026f9fc4;
      }
      lVar6 = *plVar14;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      uVar18 = FUN_03579868(uVar18,0);
      uVar7 = FUN_03579868(*(undefined8 *)
                            Method_System_Globalization_CalendarData_GetJapaneseEraNames__,0);
      uVar13 = FUN_03582560(uVar18,uVar7,0);
      if ((uVar13 & 1) != 0) {
        lVar17 = *plVar14;
        lVar6 = lVar17;
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_01ecaf44(lVar17);
          lVar6 = *plVar14;
        }
        pvVar19 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x28) + 0x28)) {
          pvVar19 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(puVar16,pvVar19,__n);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        plVar8 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28),puVar16)
        ;
        if (plVar8 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar8 + 0x40) !=
            *(long *)(*(long *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__ +
                     0x40)) goto LAB_026fa054;
        plVar8 = (long *)thunk_FUN_01f11920();
        if (*plVar8 == 0) goto LAB_026f9fc4;
      }
      lVar6 = *plVar14;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      uVar18 = FUN_03579868(uVar18,0);
      uVar7 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__,0);
      uVar13 = FUN_03582560(uVar18,uVar7,0);
      if ((uVar13 & 1) != 0) {
        lVar17 = *plVar14;
        lVar6 = lVar17;
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_01ecaf44(lVar17);
          lVar6 = *plVar14;
        }
        pvVar19 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x28) + 0x28)) {
          pvVar19 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(puVar16,pvVar19,__n);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        plVar8 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28),puVar16)
        ;
        if (plVar8 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar8 + 0x40) !=
            *(long *)(*(long *)
                       Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                     + 0x40)) goto LAB_026fa054;
        plVar8 = (long *)thunk_FUN_01f11920();
        if (*plVar8 == 0) goto LAB_026f9fc4;
      }
      lVar6 = *plVar14;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      uVar18 = FUN_03579868(uVar18,0);
      uVar7 = FUN_03579868(*(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__,0);
      uVar13 = FUN_03582560(uVar18,uVar7,0);
      if ((uVar13 & 1) != 0) {
        lVar17 = *plVar14;
        lVar6 = lVar17;
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_01ecaf44(lVar17);
          lVar6 = *plVar14;
        }
        pvVar19 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x28) + 0x28)) {
          pvVar19 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(puVar16,pvVar19,__n);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        plVar8 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28),puVar16)
        ;
        if (plVar8 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar8 + 0x40) !=
            *(long *)(*(long *)Method_System_Globalization_Calendar_VerifyWritable__ + 0x40))
        goto LAB_026fa054;
        psVar11 = (short *)thunk_FUN_01f11920();
        if (*psVar11 == 0) goto LAB_026f9fc4;
      }
      lVar6 = *plVar14;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      uVar18 = FUN_03579868(uVar18,0);
      uVar7 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_Component_GetComponent<TeleportInputHandlerTouch>__,0
                          );
      uVar13 = FUN_03582560(uVar18,uVar7,0);
      if ((uVar13 & 1) != 0) {
        lVar17 = *plVar14;
        lVar6 = lVar17;
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_01ecaf44(lVar17);
          lVar6 = *plVar14;
        }
        pvVar19 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x28) + 0x28)) {
          pvVar19 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(puVar16,pvVar19,__n);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        plVar8 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28),puVar16)
        ;
        if (plVar8 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar8 + 0x40) !=
            *(long *)(*(long *)Method_System_Security_Cryptography_DSA_FromXmlString__ + 0x40))
        goto LAB_026fa054;
        psVar11 = (short *)thunk_FUN_01f11920();
        if (*psVar11 == 0) goto LAB_026f9fc4;
      }
      lVar6 = *plVar14;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      uVar18 = FUN_03579868(uVar18,0);
      uVar7 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_2__
                           ,0);
      uVar13 = FUN_03582560(uVar18,uVar7,0);
      if ((uVar13 & 1) != 0) {
        lVar17 = *plVar14;
        lVar6 = lVar17;
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_01ecaf44(lVar17);
          lVar6 = *plVar14;
        }
        pvVar19 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x28) + 0x28)) {
          pvVar19 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(puVar16,pvVar19,__n);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        plVar8 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28),puVar16)
        ;
        if (plVar8 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar8 + 0x40) !=
            *(long *)(*(long *)
                       Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_3__ +
                     0x40)) goto LAB_026fa054;
        puVar12 = (undefined8 *)thunk_FUN_01f11920();
        uVar13 = FUN_035ad140(0,*puVar12,0);
        if ((uVar13 & 1) != 0) goto LAB_026f9fc4;
      }
      lVar6 = *plVar14;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      uVar18 = FUN_03579868(uVar18,0);
      uVar7 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_4__
                           ,0);
      uVar13 = FUN_03582560(uVar18,uVar7,0);
      if ((uVar13 & 1) != 0) {
        lVar17 = *plVar14;
        lVar6 = lVar17;
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_01ecaf44(lVar17);
          lVar6 = *plVar14;
        }
        pvVar19 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x28) + 0x28)) {
          pvVar19 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(puVar16,pvVar19,__n);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        plVar8 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28),puVar16)
        ;
        if (plVar8 == (long *)0x0) {
LAB_026fa050:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(*plVar8 + 0x40) !=
            *(long *)(*(long *)
                       Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_5__ +
                     0x40)) {
LAB_026fa054:
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
        puVar12 = (undefined8 *)thunk_FUN_01f11920();
        uVar13 = FUN_035c41d0(0,*puVar12,0);
        if ((uVar13 & 1) != 0) goto LAB_026f9fc4;
      }
    }
    else {
      pvVar19 = *(void **)(unaff_x29 + -0x18);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x28) + 0x28)) {
        pvVar19 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(puVar16,pvVar19,__n);
      lVar6 = *plVar14;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      plVar8 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28),puVar16);
      if (plVar8 == (long *)0x0) goto LAB_026fa050;
      if (*(long *)(*plVar8 + 0x40) !=
          *(long *)(*(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__ +
                   0x40)) goto LAB_026fa054;
      piVar10 = (int *)thunk_FUN_01f11920();
      puVar4 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
      uVar1 = *piVar10 + 1;
      if (uVar1 < 10) {
        lVar6 = *(long *)Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar6 = *(long *)puVar4;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
        if (lVar6 == 0) goto LAB_026fa050;
        if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar17 = *plVar14;
        uVar18 = *(undefined8 *)(lVar6 + (ulong)uVar1 * 8 + 0x20);
        uVar3 = *(ushort *)(lVar17 + 0x135);
        goto joined_r0x026f945c;
      }
    }
  }
  lVar17 = *plVar14;
  lVar6 = lVar17;
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = FUN_01ecaf44(lVar17);
    lVar6 = *plVar14;
  }
  pvVar19 = *(void **)(unaff_x29 + -0x18);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x28) + 0x28)) {
    pvVar19 = (void *)(unaff_x29 + -0x18);
  }
  memcpy(puVar16,pvVar19,__n);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar18 = thunk_FUN_01f117cc();
  lVar17 = *plVar14;
  uVar3 = *(ushort *)(lVar17 + 0x135);
  lVar6 = lVar17;
  if ((uVar3 & 1) == 0) {
    lVar17 = FUN_01ecaf44(lVar17);
    uVar3 = *(ushort *)(*plVar14 + 0x135);
    lVar6 = *plVar14;
  }
  uVar7 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x58);
  lVar17 = lVar6;
  if ((uVar3 & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
    uVar3 = *(ushort *)(*plVar14 + 0x135);
    lVar17 = *plVar14;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x58);
  if ((uVar3 & 1) == 0) {
    lVar17 = FUN_01ecaf44(lVar17);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x28) + 0x28)) {
    puVar16 = (undefined8 *)*puVar16;
  }
  *(undefined8 **)(unaff_x29 + -0x10) = puVar16;
  (**(code **)(lVar6 + 0x10))(uVar7,lVar6,uVar18,unaff_x29 + -0x10,puVar16);
LAB_026fa020:
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


