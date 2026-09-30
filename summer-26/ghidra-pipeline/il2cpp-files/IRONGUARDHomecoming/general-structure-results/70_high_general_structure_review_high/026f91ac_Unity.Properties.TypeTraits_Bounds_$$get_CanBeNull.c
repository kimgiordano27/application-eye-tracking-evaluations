/*
FUNCTION_NAME: Unity.Properties.TypeTraits<Bounds>$$get_CanBeNull
ENTRY_POINT: 026f91ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


undefined8 Unity_Properties_TypeTraits<Bounds>__get_CanBeNull(void)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  char *pcVar10;
  int *piVar11;
  short *psVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long *unaff_x19;
  code *pcVar16;
  undefined8 *unaff_x20;
  size_t unaff_x21;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x29;
  
  uVar6 = FUN_03579868();
  uVar7 = FUN_03579868(*unaff_x25,0);
  uVar8 = FUN_03582560(uVar6,uVar7,0);
  lVar14 = *unaff_x19;
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_01ecaf44(lVar14);
  }
  if ((uVar8 & 1) != 0) {
    pvVar2 = *(void **)(unaff_x29 + -0x18);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x28) + 0x28)) {
      pvVar2 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(unaff_x20,pvVar2,unaff_x21);
    lVar14 = *unaff_x19;
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01ecaf44();
    }
    plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x28));
    if (plVar9 == (long *)0x0) goto LAB_026fa050;
    if (*(long *)(*plVar9 + 0x40) !=
        *(long *)(*(long *)
                   Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                 + 0x40)) goto LAB_026fa054;
    pcVar10 = (char *)thunk_FUN_01f11920();
    puVar5 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
    cVar3 = *pcVar10;
    lVar14 = *(long *)Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar14 = *(long *)puVar5;
    }
    lVar15 = *unaff_x19;
    puVar13 = *(undefined8 **)(lVar14 + 0xb8) + 1;
    if (cVar3 != '\0') {
      puVar13 = *(undefined8 **)(lVar14 + 0xb8);
    }
    uVar4 = *(ushort *)(lVar15 + 0x135);
    uVar6 = *puVar13;
joined_r0x026f945c:
    lVar14 = lVar15;
    if ((uVar4 & 1) == 0) {
      lVar15 = FUN_01ecaf44(lVar15);
      uVar4 = *(ushort *)(*unaff_x19 + 0x135);
      lVar14 = *unaff_x19;
    }
    pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x50);
    if ((uVar4 & 1) == 0) {
      lVar14 = FUN_01ecaf44(lVar14);
    }
    uVar6 = (*pcVar16)(uVar6,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x50));
    goto LAB_026fa020;
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x48);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_03579868(uVar6,0);
  uVar7 = FUN_03579868(*(undefined8 *)
                        Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__,0);
  uVar8 = FUN_03582560(uVar6,uVar7,0);
  lVar14 = *unaff_x19;
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_01ecaf44(lVar14);
  }
  if ((uVar8 & 1) == 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_03579868(uVar6,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_UnityEngine_Component_GetComponent<TeleportOrientationHandlerThumbstick>__
                         ,0);
    uVar8 = FUN_03582560(uVar6,uVar7,0);
    if ((uVar8 & 1) != 0) {
      lVar15 = *unaff_x19;
      lVar14 = lVar15;
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_01ecaf44(lVar15);
        lVar14 = *unaff_x19;
      }
      pvVar2 = *(void **)(unaff_x29 + -0x18);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01ecaf44(lVar14);
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_026fa050;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__ + 0x40))
      goto LAB_026fa054;
      piVar11 = (int *)thunk_FUN_01f11920();
      if (*piVar11 != 0) goto LAB_026f9688;
LAB_026f9fc4:
      lVar14 = *unaff_x19;
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01ecaf44();
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01ecaf44();
      }
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar14 = *unaff_x19;
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01ecaf44();
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x10);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01ecaf44();
      }
      uVar6 = **(undefined8 **)(lVar14 + 0xb8);
      goto LAB_026fa020;
    }
LAB_026f9688:
    lVar14 = *unaff_x19;
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01ecaf44();
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*unaff_x23);
    }
    uVar6 = FUN_03579868(uVar6,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                         ,0);
    uVar8 = FUN_03582560(uVar6,uVar7,0);
    if ((uVar8 & 1) != 0) {
      lVar15 = *unaff_x19;
      lVar14 = lVar15;
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_01ecaf44(lVar15);
        lVar14 = *unaff_x19;
      }
      pvVar2 = *(void **)(unaff_x29 + -0x18);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01ecaf44(lVar14);
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_026fa050;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__ +
                   0x40)) goto LAB_026fa054;
      pcVar10 = (char *)thunk_FUN_01f11920();
      if (*pcVar10 == '\0') goto LAB_026f9fc4;
    }
    lVar14 = *unaff_x19;
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01ecaf44();
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*unaff_x23);
    }
    uVar6 = FUN_03579868(uVar6,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                         ,0);
    uVar8 = FUN_03582560(uVar6,uVar7,0);
    if ((uVar8 & 1) != 0) {
      lVar15 = *unaff_x19;
      lVar14 = lVar15;
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_01ecaf44(lVar15);
        lVar14 = *unaff_x19;
      }
      pvVar2 = *(void **)(unaff_x29 + -0x18);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01ecaf44(lVar14);
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_026fa050;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)
                     Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                   + 0x40)) goto LAB_026fa054;
      pcVar10 = (char *)thunk_FUN_01f11920();
      if (*pcVar10 == '\0') goto LAB_026f9fc4;
    }
    lVar14 = *unaff_x19;
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01ecaf44();
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*unaff_x23);
    }
    uVar6 = FUN_03579868(uVar6,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                         ,0);
    uVar8 = FUN_03582560(uVar6,uVar7,0);
    if ((uVar8 & 1) != 0) {
      lVar15 = *unaff_x19;
      lVar14 = lVar15;
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_01ecaf44(lVar15);
        lVar14 = *unaff_x19;
      }
      pvVar2 = *(void **)(unaff_x29 + -0x18);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01ecaf44(lVar14);
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_026fa050;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0x40)) goto LAB_026fa054;
      psVar12 = (short *)thunk_FUN_01f11920();
      if (*psVar12 == 0) goto LAB_026f9fc4;
    }
    lVar14 = *unaff_x19;
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01ecaf44();
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*unaff_x23);
    }
    uVar6 = FUN_03579868(uVar6,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_System_Globalization_CalendarData_GetJapaneseEraNames__,0);
    uVar8 = FUN_03582560(uVar6,uVar7,0);
    if ((uVar8 & 1) != 0) {
      lVar15 = *unaff_x19;
      lVar14 = lVar15;
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_01ecaf44(lVar15);
        lVar14 = *unaff_x19;
      }
      pvVar2 = *(void **)(unaff_x29 + -0x18);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01ecaf44(lVar14);
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_026fa050;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__ + 0x40
                   )) goto LAB_026fa054;
      plVar9 = (long *)thunk_FUN_01f11920();
      if (*plVar9 == 0) goto LAB_026f9fc4;
    }
    lVar14 = *unaff_x19;
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01ecaf44();
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*unaff_x23);
    }
    uVar6 = FUN_03579868(uVar6,0);
    uVar7 = FUN_03579868(*(undefined8 *)Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__
                         ,0);
    uVar8 = FUN_03582560(uVar6,uVar7,0);
    if ((uVar8 & 1) != 0) {
      lVar15 = *unaff_x19;
      lVar14 = lVar15;
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_01ecaf44(lVar15);
        lVar14 = *unaff_x19;
      }
      pvVar2 = *(void **)(unaff_x29 + -0x18);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01ecaf44(lVar14);
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_026fa050;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)
                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                   + 0x40)) goto LAB_026fa054;
      plVar9 = (long *)thunk_FUN_01f11920();
      if (*plVar9 == 0) goto LAB_026f9fc4;
    }
    lVar14 = *unaff_x19;
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01ecaf44();
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*unaff_x23);
    }
    uVar6 = FUN_03579868(uVar6,0);
    uVar7 = FUN_03579868(*(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__,0);
    uVar8 = FUN_03582560(uVar6,uVar7,0);
    if ((uVar8 & 1) != 0) {
      lVar15 = *unaff_x19;
      lVar14 = lVar15;
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_01ecaf44(lVar15);
        lVar14 = *unaff_x19;
      }
      pvVar2 = *(void **)(unaff_x29 + -0x18);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01ecaf44(lVar14);
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_026fa050;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)Method_System_Globalization_Calendar_VerifyWritable__ + 0x40))
      goto LAB_026fa054;
      psVar12 = (short *)thunk_FUN_01f11920();
      if (*psVar12 == 0) goto LAB_026f9fc4;
    }
    lVar14 = *unaff_x19;
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01ecaf44();
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*unaff_x23);
    }
    uVar6 = FUN_03579868(uVar6,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_UnityEngine_Component_GetComponent<TeleportInputHandlerTouch>__,0);
    uVar8 = FUN_03582560(uVar6,uVar7,0);
    if ((uVar8 & 1) != 0) {
      lVar15 = *unaff_x19;
      lVar14 = lVar15;
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_01ecaf44(lVar15);
        lVar14 = *unaff_x19;
      }
      pvVar2 = *(void **)(unaff_x29 + -0x18);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01ecaf44(lVar14);
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_026fa050;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)Method_System_Security_Cryptography_DSA_FromXmlString__ + 0x40))
      goto LAB_026fa054;
      psVar12 = (short *)thunk_FUN_01f11920();
      if (*psVar12 == 0) goto LAB_026f9fc4;
    }
    lVar14 = *unaff_x19;
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01ecaf44();
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*unaff_x23);
    }
    uVar6 = FUN_03579868(uVar6,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_2__,
                         0);
    uVar8 = FUN_03582560(uVar6,uVar7,0);
    if ((uVar8 & 1) != 0) {
      lVar15 = *unaff_x19;
      lVar14 = lVar15;
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_01ecaf44(lVar15);
        lVar14 = *unaff_x19;
      }
      pvVar2 = *(void **)(unaff_x29 + -0x18);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01ecaf44(lVar14);
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_026fa050;
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)
                     Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_3__ +
                   0x40)) goto LAB_026fa054;
      puVar13 = (undefined8 *)thunk_FUN_01f11920();
      uVar8 = FUN_035ad140(0,*puVar13,0);
      if ((uVar8 & 1) != 0) goto LAB_026f9fc4;
    }
    lVar14 = *unaff_x19;
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01ecaf44();
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x48);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*unaff_x23);
    }
    uVar6 = FUN_03579868(uVar6,0);
    uVar7 = FUN_03579868(*(undefined8 *)
                          Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_4__,
                         0);
    uVar8 = FUN_03582560(uVar6,uVar7,0);
    if ((uVar8 & 1) != 0) {
      lVar15 = *unaff_x19;
      lVar14 = lVar15;
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_01ecaf44(lVar15);
        lVar14 = *unaff_x19;
      }
      pvVar2 = *(void **)(unaff_x29 + -0x18);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
        pvVar2 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(unaff_x20,pvVar2,unaff_x21);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01ecaf44(lVar14);
      }
      plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x28));
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
      uVar8 = FUN_035c41d0(0,*puVar13,0);
      if ((uVar8 & 1) != 0) goto LAB_026f9fc4;
    }
  }
  else {
    pvVar2 = *(void **)(unaff_x29 + -0x18);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x28) + 0x28)) {
      pvVar2 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(unaff_x20,pvVar2,unaff_x21);
    lVar14 = *unaff_x19;
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01ecaf44();
    }
    plVar9 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x28));
    if (plVar9 == (long *)0x0) goto LAB_026fa050;
    if (*(long *)(*plVar9 + 0x40) !=
        *(long *)(*(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__ +
                 0x40)) goto LAB_026fa054;
    piVar11 = (int *)thunk_FUN_01f11920();
    puVar5 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
    uVar1 = *piVar11 + 1;
    if (uVar1 < 10) {
      lVar14 = *(long *)Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar14 = *(long *)puVar5;
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
      if (lVar14 == 0) goto LAB_026fa050;
      if (*(uint *)(lVar14 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar15 = *unaff_x19;
      uVar6 = *(undefined8 *)(lVar14 + (ulong)uVar1 * 8 + 0x20);
      uVar4 = *(ushort *)(lVar15 + 0x135);
      goto joined_r0x026f945c;
    }
  }
  lVar15 = *unaff_x19;
  lVar14 = lVar15;
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_01ecaf44(lVar15);
    lVar14 = *unaff_x19;
  }
  pvVar2 = *(void **)(unaff_x29 + -0x18);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
    pvVar2 = (void *)(unaff_x29 + -0x18);
  }
  memcpy(unaff_x20,pvVar2,unaff_x21);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_01ecaf44(lVar14);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar6 = thunk_FUN_01f117cc();
  lVar15 = *unaff_x19;
  uVar4 = *(ushort *)(lVar15 + 0x135);
  lVar14 = lVar15;
  if ((uVar4 & 1) == 0) {
    lVar15 = FUN_01ecaf44(lVar15);
    uVar4 = *(ushort *)(*unaff_x19 + 0x135);
    lVar14 = *unaff_x19;
  }
  uVar7 = **(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x58);
  lVar15 = lVar14;
  if ((uVar4 & 1) == 0) {
    lVar14 = FUN_01ecaf44(lVar14);
    uVar4 = *(ushort *)(*unaff_x19 + 0x135);
    lVar15 = *unaff_x19;
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x58);
  if ((uVar4 & 1) == 0) {
    lVar15 = FUN_01ecaf44(lVar15);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x28) + 0x28)) {
    unaff_x20 = (undefined8 *)*unaff_x20;
  }
  *(undefined8 **)(unaff_x29 + -0x10) = unaff_x20;
  (**(code **)(lVar14 + 0x10))(uVar7,lVar14,uVar6,unaff_x29 + -0x10,unaff_x20);
LAB_026fa020:
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


