/*
FUNCTION_NAME: Unity.Properties.TypeTraits<Bounds>$$get_IsContainer
ENTRY_POINT: 026f9140
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


undefined8 Unity_Properties_TypeTraits<Bounds>__get_IsContainer(void)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  char *pcVar11;
  int *piVar12;
  short *psVar13;
  undefined8 *puVar14;
  long lVar15;
  long *unaff_x19;
  code *pcVar16;
  undefined8 *unaff_x20;
  size_t unaff_x21;
  undefined8 uVar17;
  long unaff_x24;
  long unaff_x29;
  
  lVar7 = FUN_01ecaf44();
  uVar8 = FUN_01f089f8(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
  lVar7 = *unaff_x19;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  puVar6 = Method_Oculus_Platform_CAPI_StringToNative__;
  puVar5 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((uVar8 & 1) == 0) {
    pvVar2 = *(void **)(unaff_x29 + -0x18);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x28)) {
      pvVar2 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(unaff_x20,pvVar2,unaff_x21);
    lVar7 = *unaff_x19;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    uVar8 = FUN_01f089f8(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
    if ((uVar8 & 1) == 0) {
LAB_026f9fc4:
      lVar7 = *unaff_x19;
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
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar17 = **(undefined8 **)(lVar7 + 0xb8);
      goto LAB_026fa020;
    }
  }
  else {
    uVar17 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar17 = FUN_03579868(uVar17,0);
    uVar9 = FUN_03579868(*(undefined8 *)puVar6,0);
    uVar8 = FUN_03582560(uVar17,uVar9,0);
    lVar7 = *unaff_x19;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    if ((uVar8 & 1) != 0) {
      pvVar2 = *(void **)(unaff_x29 + -0x18);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      plVar10 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
      if (plVar10 == (long *)0x0) goto LAB_026fa050;
      if (*(long *)(*plVar10 + 0x40) !=
          *(long *)(*(long *)
                     Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                   + 0x40)) goto LAB_026fa054;
      pcVar11 = (char *)thunk_FUN_01f11920();
      puVar5 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
      cVar3 = *pcVar11;
      lVar7 = *(long *)Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar7 = *(long *)puVar5;
      }
      lVar15 = *unaff_x19;
      puVar14 = *(undefined8 **)(lVar7 + 0xb8) + 1;
      if (cVar3 != '\0') {
        puVar14 = *(undefined8 **)(lVar7 + 0xb8);
      }
      uVar4 = *(ushort *)(lVar15 + 0x135);
      uVar17 = *puVar14;
joined_r0x026f945c:
      lVar7 = lVar15;
      if ((uVar4 & 1) == 0) {
        lVar15 = FUN_01ecaf44(lVar15);
        uVar4 = *(ushort *)(*unaff_x19 + 0x135);
        lVar7 = *unaff_x19;
      }
      pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x50);
      if ((uVar4 & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      uVar17 = (*pcVar16)(uVar17,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x50));
      goto LAB_026fa020;
    }
    uVar17 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar17 = FUN_03579868(uVar17,0);
    uVar9 = FUN_03579868(*(undefined8 *)
                          Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__,0);
    uVar8 = FUN_03582560(uVar17,uVar9,0);
    lVar7 = *unaff_x19;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    if ((uVar8 & 1) == 0) {
      uVar17 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar17 = FUN_03579868(uVar17,0);
      uVar9 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_Component_GetComponent<TeleportOrientationHandlerThumbstick>__
                           ,0);
      uVar8 = FUN_03582560(uVar17,uVar9,0);
      if ((uVar8 & 1) != 0) {
        lVar15 = *unaff_x19;
        lVar7 = lVar15;
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01ecaf44(lVar15);
          lVar7 = *unaff_x19;
        }
        pvVar2 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(unaff_x20,pvVar2,unaff_x21);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        plVar10 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
        if (plVar10 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar10 + 0x40) !=
            *(long *)(*(long *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__ + 0x40)
           ) goto LAB_026fa054;
        piVar12 = (int *)thunk_FUN_01f11920();
        if (*piVar12 == 0) goto LAB_026f9fc4;
      }
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar17 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar5);
      }
      uVar17 = FUN_03579868(uVar17,0);
      uVar9 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                           ,0);
      uVar8 = FUN_03582560(uVar17,uVar9,0);
      if ((uVar8 & 1) != 0) {
        lVar15 = *unaff_x19;
        lVar7 = lVar15;
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01ecaf44(lVar15);
          lVar7 = *unaff_x19;
        }
        pvVar2 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(unaff_x20,pvVar2,unaff_x21);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        plVar10 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
        if (plVar10 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar10 + 0x40) !=
            *(long *)(*(long *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__ +
                     0x40)) goto LAB_026fa054;
        pcVar11 = (char *)thunk_FUN_01f11920();
        if (*pcVar11 == '\0') goto LAB_026f9fc4;
      }
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar17 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar5);
      }
      uVar17 = FUN_03579868(uVar17,0);
      uVar9 = FUN_03579868(*(undefined8 *)
                            Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                           ,0);
      uVar8 = FUN_03582560(uVar17,uVar9,0);
      if ((uVar8 & 1) != 0) {
        lVar15 = *unaff_x19;
        lVar7 = lVar15;
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01ecaf44(lVar15);
          lVar7 = *unaff_x19;
        }
        pvVar2 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(unaff_x20,pvVar2,unaff_x21);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        plVar10 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
        if (plVar10 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar10 + 0x40) !=
            *(long *)(*(long *)
                       Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                     + 0x40)) goto LAB_026fa054;
        pcVar11 = (char *)thunk_FUN_01f11920();
        if (*pcVar11 == '\0') goto LAB_026f9fc4;
      }
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar17 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar5);
      }
      uVar17 = FUN_03579868(uVar17,0);
      uVar9 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                           ,0);
      uVar8 = FUN_03582560(uVar17,uVar9,0);
      if ((uVar8 & 1) != 0) {
        lVar15 = *unaff_x19;
        lVar7 = lVar15;
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01ecaf44(lVar15);
          lVar7 = *unaff_x19;
        }
        pvVar2 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(unaff_x20,pvVar2,unaff_x21);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        plVar10 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
        if (plVar10 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar10 + 0x40) !=
            *(long *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0x40)) goto LAB_026fa054;
        psVar13 = (short *)thunk_FUN_01f11920();
        if (*psVar13 == 0) goto LAB_026f9fc4;
      }
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar17 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar5);
      }
      uVar17 = FUN_03579868(uVar17,0);
      uVar9 = FUN_03579868(*(undefined8 *)
                            Method_System_Globalization_CalendarData_GetJapaneseEraNames__,0);
      uVar8 = FUN_03582560(uVar17,uVar9,0);
      if ((uVar8 & 1) != 0) {
        lVar15 = *unaff_x19;
        lVar7 = lVar15;
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01ecaf44(lVar15);
          lVar7 = *unaff_x19;
        }
        pvVar2 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(unaff_x20,pvVar2,unaff_x21);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        plVar10 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
        if (plVar10 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar10 + 0x40) !=
            *(long *)(*(long *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__ +
                     0x40)) goto LAB_026fa054;
        plVar10 = (long *)thunk_FUN_01f11920();
        if (*plVar10 == 0) goto LAB_026f9fc4;
      }
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar17 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar5);
      }
      uVar17 = FUN_03579868(uVar17,0);
      uVar9 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__,0);
      uVar8 = FUN_03582560(uVar17,uVar9,0);
      if ((uVar8 & 1) != 0) {
        lVar15 = *unaff_x19;
        lVar7 = lVar15;
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01ecaf44(lVar15);
          lVar7 = *unaff_x19;
        }
        pvVar2 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(unaff_x20,pvVar2,unaff_x21);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        plVar10 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
        if (plVar10 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar10 + 0x40) !=
            *(long *)(*(long *)
                       Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                     + 0x40)) goto LAB_026fa054;
        plVar10 = (long *)thunk_FUN_01f11920();
        if (*plVar10 == 0) goto LAB_026f9fc4;
      }
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar17 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar5);
      }
      uVar17 = FUN_03579868(uVar17,0);
      uVar9 = FUN_03579868(*(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__,0);
      uVar8 = FUN_03582560(uVar17,uVar9,0);
      if ((uVar8 & 1) != 0) {
        lVar15 = *unaff_x19;
        lVar7 = lVar15;
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01ecaf44(lVar15);
          lVar7 = *unaff_x19;
        }
        pvVar2 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(unaff_x20,pvVar2,unaff_x21);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        plVar10 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
        if (plVar10 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar10 + 0x40) !=
            *(long *)(*(long *)Method_System_Globalization_Calendar_VerifyWritable__ + 0x40))
        goto LAB_026fa054;
        psVar13 = (short *)thunk_FUN_01f11920();
        if (*psVar13 == 0) goto LAB_026f9fc4;
      }
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar17 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar5);
      }
      uVar17 = FUN_03579868(uVar17,0);
      uVar9 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_Component_GetComponent<TeleportInputHandlerTouch>__,0
                          );
      uVar8 = FUN_03582560(uVar17,uVar9,0);
      if ((uVar8 & 1) != 0) {
        lVar15 = *unaff_x19;
        lVar7 = lVar15;
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01ecaf44(lVar15);
          lVar7 = *unaff_x19;
        }
        pvVar2 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(unaff_x20,pvVar2,unaff_x21);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        plVar10 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
        if (plVar10 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar10 + 0x40) !=
            *(long *)(*(long *)Method_System_Security_Cryptography_DSA_FromXmlString__ + 0x40))
        goto LAB_026fa054;
        psVar13 = (short *)thunk_FUN_01f11920();
        if (*psVar13 == 0) goto LAB_026f9fc4;
      }
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar17 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar5);
      }
      uVar17 = FUN_03579868(uVar17,0);
      uVar9 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_2__
                           ,0);
      uVar8 = FUN_03582560(uVar17,uVar9,0);
      if ((uVar8 & 1) != 0) {
        lVar15 = *unaff_x19;
        lVar7 = lVar15;
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01ecaf44(lVar15);
          lVar7 = *unaff_x19;
        }
        pvVar2 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(unaff_x20,pvVar2,unaff_x21);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        plVar10 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
        if (plVar10 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar10 + 0x40) !=
            *(long *)(*(long *)
                       Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_3__ +
                     0x40)) goto LAB_026fa054;
        puVar14 = (undefined8 *)thunk_FUN_01f11920();
        uVar8 = FUN_035ad140(0,*puVar14,0);
        if ((uVar8 & 1) != 0) goto LAB_026f9fc4;
      }
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar17 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar5);
      }
      uVar17 = FUN_03579868(uVar17,0);
      uVar9 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_4__
                           ,0);
      uVar8 = FUN_03582560(uVar17,uVar9,0);
      if ((uVar8 & 1) != 0) {
        lVar15 = *unaff_x19;
        lVar7 = lVar15;
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01ecaf44(lVar15);
          lVar7 = *unaff_x19;
        }
        pvVar2 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
          pvVar2 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(unaff_x20,pvVar2,unaff_x21);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        plVar10 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
        if (plVar10 == (long *)0x0) {
LAB_026fa050:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(*plVar10 + 0x40) !=
            *(long *)(*(long *)
                       Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_5__ +
                     0x40)) {
LAB_026fa054:
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
        puVar14 = (undefined8 *)thunk_FUN_01f11920();
        uVar8 = FUN_035c41d0(0,*puVar14,0);
        if ((uVar8 & 1) != 0) goto LAB_026f9fc4;
      }
    }
    else {
      pvVar2 = *(void **)(unaff_x29 + -0x18);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      lVar7 = *unaff_x19;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      plVar10 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
      if (plVar10 == (long *)0x0) goto LAB_026fa050;
      if (*(long *)(*plVar10 + 0x40) !=
          *(long *)(*(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__ +
                   0x40)) goto LAB_026fa054;
      piVar12 = (int *)thunk_FUN_01f11920();
      puVar5 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
      uVar1 = *piVar12 + 1;
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
        lVar15 = *unaff_x19;
        uVar17 = *(undefined8 *)(lVar7 + (ulong)uVar1 * 8 + 0x20);
        uVar4 = *(ushort *)(lVar15 + 0x135);
        goto joined_r0x026f945c;
      }
    }
  }
  lVar15 = *unaff_x19;
  lVar7 = lVar15;
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_01ecaf44(lVar15);
    lVar7 = *unaff_x19;
  }
  pvVar2 = *(void **)(unaff_x29 + -0x18);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
    pvVar2 = (void *)(unaff_x29 + -0x18);
  }
  memcpy(unaff_x20,pvVar2,unaff_x21);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar17 = thunk_FUN_01f117cc();
  lVar15 = *unaff_x19;
  uVar4 = *(ushort *)(lVar15 + 0x135);
  lVar7 = lVar15;
  if ((uVar4 & 1) == 0) {
    lVar15 = FUN_01ecaf44(lVar15);
    uVar4 = *(ushort *)(*unaff_x19 + 0x135);
    lVar7 = *unaff_x19;
  }
  uVar9 = **(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x58);
  lVar15 = lVar7;
  if ((uVar4 & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
    uVar4 = *(ushort *)(*unaff_x19 + 0x135);
    lVar15 = *unaff_x19;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x58);
  if ((uVar4 & 1) == 0) {
    lVar15 = FUN_01ecaf44(lVar15);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
    unaff_x20 = (undefined8 *)*unaff_x20;
  }
  *(undefined8 **)(unaff_x29 + -0x10) = unaff_x20;
  (**(code **)(lVar7 + 0x10))(uVar9,lVar7,uVar17,unaff_x29 + -0x10,unaff_x20);
LAB_026fa020:
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


