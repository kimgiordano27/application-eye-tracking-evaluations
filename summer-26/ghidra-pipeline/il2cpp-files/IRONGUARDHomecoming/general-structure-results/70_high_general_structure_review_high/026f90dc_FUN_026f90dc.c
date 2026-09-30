/*
FUNCTION_NAME: FUN_026f90dc
ENTRY_POINT: 026f90dc
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


undefined8 FUN_026f90dc(long param_1)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  char *pcVar8;
  int *piVar9;
  short *psVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *unaff_x19;
  code *pcVar15;
  undefined8 *puVar16;
  ulong __n;
  long unaff_x22;
  undefined8 uVar17;
  void *pvVar18;
  long unaff_x24;
  long unaff_x29;
  
  __n = (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x28) + 0xfc);
  uVar14 = __n + 0xf & 0x1fffffff0;
  puVar16 = (undefined8 *)(&stack0x00000000 + -uVar14);
  pvVar18 = (void *)((long)puVar16 - uVar14);
  memset(pvVar18,0,__n);
  memset(pvVar18,0,__n);
  memcpy(puVar16,pvVar18,__n);
  if ((*(byte *)(unaff_x22 + 0x135) & 1) == 0) {
    unaff_x22 = FUN_01ecaf44();
  }
  uVar14 = FUN_01f089f8(*(undefined8 *)(*(long *)(unaff_x22 + 0xc0) + 0x28),puVar16);
  lVar12 = *unaff_x19;
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01ecaf44(lVar12);
  }
  puVar5 = Method_Oculus_Platform_CAPI_StringToNative__;
  puVar4 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((uVar14 & 1) == 0) {
    pvVar18 = *(void **)(unaff_x29 + -0x18);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x28) + 0x28)) {
      pvVar18 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(puVar16,pvVar18,__n);
    lVar12 = *unaff_x19;
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01ecaf44();
    }
    uVar14 = FUN_01f089f8(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x28),puVar16);
    if ((uVar14 & 1) == 0) {
LAB_026f9fc4:
      lVar12 = *unaff_x19;
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar12 = *unaff_x19;
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44();
      }
      uVar17 = **(undefined8 **)(lVar12 + 0xb8);
      goto LAB_026fa020;
    }
  }
  else {
    uVar17 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x48);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar17 = FUN_03579868(uVar17,0);
    uVar6 = FUN_03579868(*(undefined8 *)puVar5,0);
    uVar14 = FUN_03582560(uVar17,uVar6,0);
    lVar12 = *unaff_x19;
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01ecaf44(lVar12);
    }
    if ((uVar14 & 1) != 0) {
      pvVar18 = *(void **)(unaff_x29 + -0x18);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x28) + 0x28)) {
        pvVar18 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(puVar16,pvVar18,__n);
      lVar12 = *unaff_x19;
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44();
      }
      plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x28),puVar16);
      if (plVar7 == (long *)0x0) goto LAB_026fa050;
      if (*(long *)(*plVar7 + 0x40) !=
          *(long *)(*(long *)
                     Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                   + 0x40)) goto LAB_026fa054;
      pcVar8 = (char *)thunk_FUN_01f11920();
      puVar4 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
      cVar2 = *pcVar8;
      lVar12 = *(long *)Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar12 = *(long *)puVar4;
      }
      lVar13 = *unaff_x19;
      puVar16 = *(undefined8 **)(lVar12 + 0xb8) + 1;
      if (cVar2 != '\0') {
        puVar16 = *(undefined8 **)(lVar12 + 0xb8);
      }
      uVar3 = *(ushort *)(lVar13 + 0x135);
      uVar17 = *puVar16;
joined_r0x026f945c:
      lVar12 = lVar13;
      if ((uVar3 & 1) == 0) {
        lVar13 = FUN_01ecaf44(lVar13);
        uVar3 = *(ushort *)(*unaff_x19 + 0x135);
        lVar12 = *unaff_x19;
      }
      pcVar15 = (code *)**(undefined8 **)(*(long *)(lVar13 + 0xc0) + 0x50);
      if ((uVar3 & 1) == 0) {
        lVar12 = FUN_01ecaf44(lVar12);
      }
      uVar17 = (*pcVar15)(uVar17,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x50));
      goto LAB_026fa020;
    }
    uVar17 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x48);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar17 = FUN_03579868(uVar17,0);
    uVar6 = FUN_03579868(*(undefined8 *)
                          Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__,0);
    uVar14 = FUN_03582560(uVar17,uVar6,0);
    lVar12 = *unaff_x19;
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01ecaf44(lVar12);
    }
    if ((uVar14 & 1) == 0) {
      uVar17 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar17 = FUN_03579868(uVar17,0);
      uVar6 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_Component_GetComponent<TeleportOrientationHandlerThumbstick>__
                           ,0);
      uVar14 = FUN_03582560(uVar17,uVar6,0);
      if ((uVar14 & 1) != 0) {
        lVar13 = *unaff_x19;
        lVar12 = lVar13;
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_01ecaf44(lVar13);
          lVar12 = *unaff_x19;
        }
        pvVar18 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x28) + 0x28)) {
          pvVar18 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(puVar16,pvVar18,__n);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44(lVar12);
        }
        plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x28),puVar16
                                           );
        if (plVar7 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar7 + 0x40) !=
            *(long *)(*(long *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__ + 0x40)
           ) goto LAB_026fa054;
        piVar9 = (int *)thunk_FUN_01f11920();
        if (*piVar9 == 0) goto LAB_026f9fc4;
      }
      lVar12 = *unaff_x19;
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44();
      }
      uVar17 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      uVar17 = FUN_03579868(uVar17,0);
      uVar6 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                           ,0);
      uVar14 = FUN_03582560(uVar17,uVar6,0);
      if ((uVar14 & 1) != 0) {
        lVar13 = *unaff_x19;
        lVar12 = lVar13;
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_01ecaf44(lVar13);
          lVar12 = *unaff_x19;
        }
        pvVar18 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x28) + 0x28)) {
          pvVar18 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(puVar16,pvVar18,__n);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44(lVar12);
        }
        plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x28),puVar16
                                           );
        if (plVar7 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar7 + 0x40) !=
            *(long *)(*(long *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__ +
                     0x40)) goto LAB_026fa054;
        pcVar8 = (char *)thunk_FUN_01f11920();
        if (*pcVar8 == '\0') goto LAB_026f9fc4;
      }
      lVar12 = *unaff_x19;
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44();
      }
      uVar17 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      uVar17 = FUN_03579868(uVar17,0);
      uVar6 = FUN_03579868(*(undefined8 *)
                            Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__
                           ,0);
      uVar14 = FUN_03582560(uVar17,uVar6,0);
      if ((uVar14 & 1) != 0) {
        lVar13 = *unaff_x19;
        lVar12 = lVar13;
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_01ecaf44(lVar13);
          lVar12 = *unaff_x19;
        }
        pvVar18 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x28) + 0x28)) {
          pvVar18 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(puVar16,pvVar18,__n);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44(lVar12);
        }
        plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x28),puVar16
                                           );
        if (plVar7 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar7 + 0x40) !=
            *(long *)(*(long *)
                       Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                     + 0x40)) goto LAB_026fa054;
        pcVar8 = (char *)thunk_FUN_01f11920();
        if (*pcVar8 == '\0') goto LAB_026f9fc4;
      }
      lVar12 = *unaff_x19;
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44();
      }
      uVar17 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      uVar17 = FUN_03579868(uVar17,0);
      uVar6 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                           ,0);
      uVar14 = FUN_03582560(uVar17,uVar6,0);
      if ((uVar14 & 1) != 0) {
        lVar13 = *unaff_x19;
        lVar12 = lVar13;
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_01ecaf44(lVar13);
          lVar12 = *unaff_x19;
        }
        pvVar18 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x28) + 0x28)) {
          pvVar18 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(puVar16,pvVar18,__n);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44(lVar12);
        }
        plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x28),puVar16
                                           );
        if (plVar7 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar7 + 0x40) !=
            *(long *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0x40)) goto LAB_026fa054;
        psVar10 = (short *)thunk_FUN_01f11920();
        if (*psVar10 == 0) goto LAB_026f9fc4;
      }
      lVar12 = *unaff_x19;
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44();
      }
      uVar17 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      uVar17 = FUN_03579868(uVar17,0);
      uVar6 = FUN_03579868(*(undefined8 *)
                            Method_System_Globalization_CalendarData_GetJapaneseEraNames__,0);
      uVar14 = FUN_03582560(uVar17,uVar6,0);
      if ((uVar14 & 1) != 0) {
        lVar13 = *unaff_x19;
        lVar12 = lVar13;
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_01ecaf44(lVar13);
          lVar12 = *unaff_x19;
        }
        pvVar18 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x28) + 0x28)) {
          pvVar18 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(puVar16,pvVar18,__n);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44(lVar12);
        }
        plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x28),puVar16
                                           );
        if (plVar7 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar7 + 0x40) !=
            *(long *)(*(long *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__ +
                     0x40)) goto LAB_026fa054;
        plVar7 = (long *)thunk_FUN_01f11920();
        if (*plVar7 == 0) goto LAB_026f9fc4;
      }
      lVar12 = *unaff_x19;
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44();
      }
      uVar17 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      uVar17 = FUN_03579868(uVar17,0);
      uVar6 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__,0);
      uVar14 = FUN_03582560(uVar17,uVar6,0);
      if ((uVar14 & 1) != 0) {
        lVar13 = *unaff_x19;
        lVar12 = lVar13;
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_01ecaf44(lVar13);
          lVar12 = *unaff_x19;
        }
        pvVar18 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x28) + 0x28)) {
          pvVar18 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(puVar16,pvVar18,__n);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44(lVar12);
        }
        plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x28),puVar16
                                           );
        if (plVar7 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar7 + 0x40) !=
            *(long *)(*(long *)
                       Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                     + 0x40)) goto LAB_026fa054;
        plVar7 = (long *)thunk_FUN_01f11920();
        if (*plVar7 == 0) goto LAB_026f9fc4;
      }
      lVar12 = *unaff_x19;
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44();
      }
      uVar17 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      uVar17 = FUN_03579868(uVar17,0);
      uVar6 = FUN_03579868(*(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__,0);
      uVar14 = FUN_03582560(uVar17,uVar6,0);
      if ((uVar14 & 1) != 0) {
        lVar13 = *unaff_x19;
        lVar12 = lVar13;
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_01ecaf44(lVar13);
          lVar12 = *unaff_x19;
        }
        pvVar18 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x28) + 0x28)) {
          pvVar18 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(puVar16,pvVar18,__n);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44(lVar12);
        }
        plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x28),puVar16
                                           );
        if (plVar7 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar7 + 0x40) !=
            *(long *)(*(long *)Method_System_Globalization_Calendar_VerifyWritable__ + 0x40))
        goto LAB_026fa054;
        psVar10 = (short *)thunk_FUN_01f11920();
        if (*psVar10 == 0) goto LAB_026f9fc4;
      }
      lVar12 = *unaff_x19;
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44();
      }
      uVar17 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      uVar17 = FUN_03579868(uVar17,0);
      uVar6 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_Component_GetComponent<TeleportInputHandlerTouch>__,0
                          );
      uVar14 = FUN_03582560(uVar17,uVar6,0);
      if ((uVar14 & 1) != 0) {
        lVar13 = *unaff_x19;
        lVar12 = lVar13;
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_01ecaf44(lVar13);
          lVar12 = *unaff_x19;
        }
        pvVar18 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x28) + 0x28)) {
          pvVar18 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(puVar16,pvVar18,__n);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44(lVar12);
        }
        plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x28),puVar16
                                           );
        if (plVar7 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar7 + 0x40) !=
            *(long *)(*(long *)Method_System_Security_Cryptography_DSA_FromXmlString__ + 0x40))
        goto LAB_026fa054;
        psVar10 = (short *)thunk_FUN_01f11920();
        if (*psVar10 == 0) goto LAB_026f9fc4;
      }
      lVar12 = *unaff_x19;
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44();
      }
      uVar17 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      uVar17 = FUN_03579868(uVar17,0);
      uVar6 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_2__
                           ,0);
      uVar14 = FUN_03582560(uVar17,uVar6,0);
      if ((uVar14 & 1) != 0) {
        lVar13 = *unaff_x19;
        lVar12 = lVar13;
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_01ecaf44(lVar13);
          lVar12 = *unaff_x19;
        }
        pvVar18 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x28) + 0x28)) {
          pvVar18 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(puVar16,pvVar18,__n);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44(lVar12);
        }
        plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x28),puVar16
                                           );
        if (plVar7 == (long *)0x0) goto LAB_026fa050;
        if (*(long *)(*plVar7 + 0x40) !=
            *(long *)(*(long *)
                       Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_3__ +
                     0x40)) goto LAB_026fa054;
        puVar11 = (undefined8 *)thunk_FUN_01f11920();
        uVar14 = FUN_035ad140(0,*puVar11,0);
        if ((uVar14 & 1) != 0) goto LAB_026f9fc4;
      }
      lVar12 = *unaff_x19;
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44();
      }
      uVar17 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x48);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar4);
      }
      uVar17 = FUN_03579868(uVar17,0);
      uVar6 = FUN_03579868(*(undefined8 *)
                            Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_4__
                           ,0);
      uVar14 = FUN_03582560(uVar17,uVar6,0);
      if ((uVar14 & 1) != 0) {
        lVar13 = *unaff_x19;
        lVar12 = lVar13;
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_01ecaf44(lVar13);
          lVar12 = *unaff_x19;
        }
        pvVar18 = *(void **)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x28) + 0x28)) {
          pvVar18 = (void *)(unaff_x29 + -0x18);
        }
        memcpy(puVar16,pvVar18,__n);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44(lVar12);
        }
        plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x28),puVar16
                                           );
        if (plVar7 == (long *)0x0) {
LAB_026fa050:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(*plVar7 + 0x40) !=
            *(long *)(*(long *)
                       Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_5__ +
                     0x40)) {
LAB_026fa054:
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
        puVar11 = (undefined8 *)thunk_FUN_01f11920();
        uVar14 = FUN_035c41d0(0,*puVar11,0);
        if ((uVar14 & 1) != 0) goto LAB_026f9fc4;
      }
    }
    else {
      pvVar18 = *(void **)(unaff_x29 + -0x18);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x28) + 0x28)) {
        pvVar18 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(puVar16,pvVar18,__n);
      lVar12 = *unaff_x19;
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44();
      }
      plVar7 = (long *)thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x28),puVar16);
      if (plVar7 == (long *)0x0) goto LAB_026fa050;
      if (*(long *)(*plVar7 + 0x40) !=
          *(long *)(*(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__ +
                   0x40)) goto LAB_026fa054;
      piVar9 = (int *)thunk_FUN_01f11920();
      puVar4 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
      uVar1 = *piVar9 + 1;
      if (uVar1 < 10) {
        lVar12 = *(long *)Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_1__;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar12 = *(long *)puVar4;
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
        if (lVar12 == 0) goto LAB_026fa050;
        if (*(uint *)(lVar12 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar13 = *unaff_x19;
        uVar17 = *(undefined8 *)(lVar12 + (ulong)uVar1 * 8 + 0x20);
        uVar3 = *(ushort *)(lVar13 + 0x135);
        goto joined_r0x026f945c;
      }
    }
  }
  lVar13 = *unaff_x19;
  lVar12 = lVar13;
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_01ecaf44(lVar13);
    lVar12 = *unaff_x19;
  }
  pvVar18 = *(void **)(unaff_x29 + -0x18);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x28) + 0x28)) {
    pvVar18 = (void *)(unaff_x29 + -0x18);
  }
  memcpy(puVar16,pvVar18,__n);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01ecaf44(lVar12);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar17 = thunk_FUN_01f117cc();
  lVar13 = *unaff_x19;
  uVar3 = *(ushort *)(lVar13 + 0x135);
  lVar12 = lVar13;
  if ((uVar3 & 1) == 0) {
    lVar13 = FUN_01ecaf44(lVar13);
    uVar3 = *(ushort *)(*unaff_x19 + 0x135);
    lVar12 = *unaff_x19;
  }
  uVar6 = **(undefined8 **)(*(long *)(lVar13 + 0xc0) + 0x58);
  lVar13 = lVar12;
  if ((uVar3 & 1) == 0) {
    lVar12 = FUN_01ecaf44(lVar12);
    uVar3 = *(ushort *)(*unaff_x19 + 0x135);
    lVar13 = *unaff_x19;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x58);
  if ((uVar3 & 1) == 0) {
    lVar13 = FUN_01ecaf44(lVar13);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x28) + 0x28)) {
    puVar16 = (undefined8 *)*puVar16;
  }
  *(undefined8 **)(unaff_x29 + -0x10) = puVar16;
  (**(code **)(lVar12 + 0x10))(uVar6,lVar12,uVar17,unaff_x29 + -0x10,puVar16);
LAB_026fa020:
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


