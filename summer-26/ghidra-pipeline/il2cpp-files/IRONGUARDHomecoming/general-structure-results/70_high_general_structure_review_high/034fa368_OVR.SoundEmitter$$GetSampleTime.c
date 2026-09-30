/*
FUNCTION_NAME: OVR.SoundEmitter$$GetSampleTime
ENTRY_POINT: 034fa368
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * OVR_SoundEmitter__GetSampleTime(long param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined4 uVar15;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined *puVar10;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xdb8));
  thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
  thunk_FUN_01efb3a4(Method_System_Numerics_BigNumber_FormatBigInteger__);
  thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                    );
  thunk_FUN_01efb3a4(Method_System_RuntimeType_GetEvent__);
  thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_VerifyWritable__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
  thunk_FUN_01efb3a4(
                    Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                    );
  thunk_FUN_01efb3a4(
                    Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                    );
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  thunk_FUN_01efb3a4(Method_System_Security_Cryptography_DSA_FromXmlString__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                    );
  *(undefined1 *)(unaff_x23 + 0xefc) = 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = FUN_03582560();
  if ((uVar4 & 1) != 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    uVar9 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRDisplaySubsystemDescriptor,_XRDisplaySubsystem>__
                              );
    FUN_034efd20(uVar8,uVar9);
LAB_034faf7c:
    uVar9 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRInputSubsystemDescriptor,_XRInputSubsystem>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar8,uVar9);
  }
  if (unaff_x19 == (long *)0x0) {
OVR_SoundFX__SetOnFinished:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar5 = (long *)thunk_FUN_01ecaf38();
  puVar10 = Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__;
  if (plVar5 != unaff_x21) {
    lVar6 = *(long *)Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *(long *)puVar10;
    }
    lVar12 = *(long *)(lVar6 + 0xb8);
    lVar13 = *(long *)(lVar12 + 8);
    if (lVar13 == 0) goto OVR_SoundFX__SetOnFinished;
    if (*(uint *)(lVar13 + 0x18) < 4) {
LAB_034fb04c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    if (*(long **)(lVar13 + 0x38) == unaff_x21) {
      lVar6 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_034fa8ec;
          }
          uVar4 = uVar4 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238();
LAB_034fa8ec:
      uVar2 = (*(code *)*puVar7)();
      in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar2) & 0xffffffffffffff01;
      puVar7 = (undefined8 *)
               Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
LAB_034fa90c:
      uVar9 = *puVar7;
    }
    else {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar6 = *(long *)puVar10;
        lVar12 = *(long *)(lVar6 + 0xb8);
        lVar13 = *(long *)(lVar12 + 8);
        if (lVar13 == 0) goto OVR_SoundFX__SetOnFinished;
      }
      if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_034fb04c;
      if (*(long **)(lVar13 + 0x40) == unaff_x21) {
        lVar6 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar14 + 2) * 0x10 + 0x138);
              goto LAB_034fa96c;
            }
            uVar4 = uVar4 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238();
LAB_034fa96c:
        uVar3 = (*(code *)*puVar7)();
        puVar7 = (undefined8 *)Method_System_IO_CStreamReader_Read__;
        goto LAB_034fa984;
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar6 = *(long *)puVar10;
        lVar12 = *(long *)(lVar6 + 0xb8);
        lVar13 = *(long *)(lVar12 + 8);
        if (lVar13 == 0) goto OVR_SoundFX__SetOnFinished;
      }
      if (*(uint *)(lVar13 + 0x18) < 6) goto LAB_034fb04c;
      if (*(long **)(lVar13 + 0x48) == unaff_x21) {
        lVar6 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_034fa9e8;
            }
            uVar4 = uVar4 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238();
LAB_034fa9e8:
        uVar2 = (*(code *)*puVar7)();
        puVar7 = (undefined8 *)
                 Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__;
      }
      else {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar6 = *(long *)puVar10;
          lVar12 = *(long *)(lVar6 + 0xb8);
          lVar13 = *(long *)(lVar12 + 8);
          if (lVar13 == 0) goto OVR_SoundFX__SetOnFinished;
        }
        if (*(uint *)(lVar13 + 0x18) < 7) goto LAB_034fb04c;
        if (*(long **)(lVar13 + 0x50) != unaff_x21) {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar6 = *(long *)puVar10;
            lVar12 = *(long *)(lVar6 + 0xb8);
            lVar13 = *(long *)(lVar12 + 8);
            if (lVar13 == 0) goto OVR_SoundFX__SetOnFinished;
          }
          if (*(uint *)(lVar13 + 0x18) < 8) goto LAB_034fb04c;
          if (*(long **)(lVar13 + 0x58) == unaff_x21) {
            lVar6 = *unaff_x19;
            uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar4 != 0) {
              piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
                  puVar7 = (undefined8 *)(lVar6 + (long)(*piVar14 + 5) * 0x10 + 0x138);
                  goto LAB_034fab10;
                }
                uVar4 = uVar4 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar4 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238();
LAB_034fab10:
            uVar3 = (*(code *)*puVar7)();
            puVar7 = (undefined8 *)Method_System_Globalization_Calendar_VerifyWritable__;
          }
          else {
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar6 = *(long *)puVar10;
              lVar12 = *(long *)(lVar6 + 0xb8);
              lVar13 = *(long *)(lVar12 + 8);
              if (lVar13 == 0) goto OVR_SoundFX__SetOnFinished;
            }
            if (*(uint *)(lVar13 + 0x18) < 9) goto LAB_034fb04c;
            if (*(long **)(lVar13 + 0x60) != unaff_x21) {
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar6 = *(long *)puVar10;
                lVar12 = *(long *)(lVar6 + 0xb8);
                lVar13 = *(long *)(lVar12 + 8);
                if (lVar13 == 0) goto OVR_SoundFX__SetOnFinished;
              }
              if (*(uint *)(lVar13 + 0x18) < 10) goto LAB_034fb04c;
              if (*(long **)(lVar13 + 0x68) == unaff_x21) {
                lVar6 = *unaff_x19;
                uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar4 != 0) {
                  piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
                      puVar7 = (undefined8 *)(lVar6 + (long)(*piVar14 + 7) * 0x10 + 0x138);
                      goto LAB_034fabf8;
                    }
                    uVar4 = uVar4 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar4 != 0);
                }
                puVar7 = (undefined8 *)FUN_01ecb238();
LAB_034fabf8:
                uVar15 = (*(code *)*puVar7)();
                puVar7 = (undefined8 *)
                         Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
              }
              else {
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                  lVar6 = *(long *)puVar10;
                  lVar12 = *(long *)(lVar6 + 0xb8);
                  lVar13 = *(long *)(lVar12 + 8);
                  if (lVar13 == 0) goto OVR_SoundFX__SetOnFinished;
                }
                if (*(uint *)(lVar13 + 0x18) < 0xb) goto LAB_034fb04c;
                if (*(long **)(lVar13 + 0x70) != unaff_x21) {
                  if (*(int *)(lVar6 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                    lVar6 = *(long *)puVar10;
                    lVar12 = *(long *)(lVar6 + 0xb8);
                    lVar13 = *(long *)(lVar12 + 8);
                    if (lVar13 == 0) goto OVR_SoundFX__SetOnFinished;
                  }
                  if (*(uint *)(lVar13 + 0x18) < 0xc) goto LAB_034fb04c;
                  if (*(long **)(lVar13 + 0x78) == unaff_x21) {
                    lVar6 = *unaff_x19;
                    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    if (uVar4 != 0) {
                      piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == *(long *)Method_System_RuntimeType_GetEvent__
                           ) {
                          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar14 + 9) * 0x10 + 0x138);
                          goto LAB_034face8;
                        }
                        uVar4 = uVar4 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar4 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_034face8:
                    uVar9 = (*(code *)*puVar7)();
                    puVar7 = (undefined8 *)
                             Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
                  }
                  else {
                    if (*(int *)(lVar6 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                      lVar6 = *(long *)puVar10;
                      lVar12 = *(long *)(lVar6 + 0xb8);
                      lVar13 = *(long *)(lVar12 + 8);
                      if (lVar13 == 0) goto OVR_SoundFX__SetOnFinished;
                    }
                    if (*(uint *)(lVar13 + 0x18) < 0xd) goto LAB_034fb04c;
                    if (*(long **)(lVar13 + 0x80) != unaff_x21) {
                      if (*(int *)(lVar6 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                        lVar6 = *(long *)puVar10;
                        lVar12 = *(long *)(lVar6 + 0xb8);
                        lVar13 = *(long *)(lVar12 + 8);
                        if (lVar13 == 0) goto OVR_SoundFX__SetOnFinished;
                      }
                      if (*(uint *)(lVar13 + 0x18) < 0xe) goto LAB_034fb04c;
                      if (*(long **)(lVar13 + 0x88) == unaff_x21) {
                        lVar6 = *unaff_x19;
                        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                        if (uVar4 != 0) {
                          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) ==
                                *(long *)Method_System_RuntimeType_GetEvent__) {
                              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar14 + 0xb) * 0x10 + 0x138)
                              ;
                              goto LAB_034fadd8;
                            }
                            uVar4 = uVar4 - 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar4 != 0);
                        }
                        puVar7 = (undefined8 *)FUN_01ecb238();
LAB_034fadd8:
                        uVar15 = (*(code *)*puVar7)();
                        in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar15);
                        puVar7 = (undefined8 *)
                                 Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                        ;
                      }
                      else {
                        if (*(int *)(lVar6 + 0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                          lVar6 = *(long *)puVar10;
                          lVar12 = *(long *)(lVar6 + 0xb8);
                          lVar13 = *(long *)(lVar12 + 8);
                          if (lVar13 == 0) goto OVR_SoundFX__SetOnFinished;
                        }
                        if (*(uint *)(lVar13 + 0x18) < 0xf) goto LAB_034fb04c;
                        if (*(long **)(lVar13 + 0x90) != unaff_x21) {
                          if (*(int *)(lVar6 + 0xe0) == 0) {
                            thunk_FUN_01ee6d7c();
                            lVar6 = *(long *)puVar10;
                            lVar12 = *(long *)(lVar6 + 0xb8);
                            lVar13 = *(long *)(lVar12 + 8);
                            if (lVar13 == 0) goto OVR_SoundFX__SetOnFinished;
                          }
                          if (*(uint *)(lVar13 + 0x18) < 0x10) goto LAB_034fb04c;
                          if (*(long **)(lVar13 + 0x98) == unaff_x21) {
                            lVar6 = *unaff_x19;
                            uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                            if (uVar4 != 0) {
                              piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar14 + -2) ==
                                    *(long *)Method_System_RuntimeType_GetEvent__) {
                                  puVar7 = (undefined8 *)
                                           (lVar6 + (long)(*piVar14 + 0xd) * 0x10 + 0x138);
                                  goto LAB_034faed0;
                                }
                                uVar4 = uVar4 - 1;
                                piVar14 = piVar14 + 4;
                              } while (uVar4 != 0);
                            }
                            puVar7 = (undefined8 *)FUN_01ecb238();
LAB_034faed0:
                            _in_stack_00000008 = (*(code *)*puVar7)();
                            puVar7 = (undefined8 *)
                                     Method_System_Numerics_BigNumber_FormatBigInteger__;
                            goto LAB_034fa90c;
                          }
                          if (*(int *)(lVar6 + 0xe0) == 0) {
                            thunk_FUN_01ee6d7c();
                            lVar6 = *(long *)puVar10;
                            lVar12 = *(long *)(lVar6 + 0xb8);
                            lVar13 = *(long *)(lVar12 + 8);
                            if (lVar13 == 0) goto OVR_SoundFX__SetOnFinished;
                          }
                          if (*(uint *)(lVar13 + 0x18) < 0x11) goto LAB_034fb04c;
                          if (*(long **)(lVar13 + 0xa0) != unaff_x21) {
                            if (*(int *)(lVar6 + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                              lVar6 = *(long *)puVar10;
                              lVar12 = *(long *)(lVar6 + 0xb8);
                              lVar13 = *(long *)(lVar12 + 8);
                              if (lVar13 == 0) goto OVR_SoundFX__SetOnFinished;
                            }
                            if (*(uint *)(lVar13 + 0x18) < 0x13) goto LAB_034fb04c;
                            if (*(long **)(lVar13 + 0xb0) == unaff_x21) {
                              lVar6 = *unaff_x19;
                              uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                              if (uVar4 != 0) {
                                piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar14 + -2) ==
                                      *(long *)Method_System_RuntimeType_GetEvent__) {
                                    puVar7 = (undefined8 *)
                                             (lVar6 + (long)(*piVar14 + 0xf) * 0x10 + 0x138);
                                    goto LAB_034faf2c;
                                  }
                                  uVar4 = uVar4 - 1;
                                  piVar14 = piVar14 + 4;
                                } while (uVar4 != 0);
                              }
                              puVar7 = (undefined8 *)FUN_01ecb238();
LAB_034faf2c:
                              plVar5 = (long *)(*(code *)*puVar7)();
                              if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
                                return plVar5;
                              }
                              goto LAB_034faf4c;
                            }
                            if (*(int *)(lVar6 + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                              lVar6 = *(long *)puVar10;
                              lVar12 = *(long *)(lVar6 + 0xb8);
                              lVar13 = *(long *)(lVar12 + 8);
                              if (lVar13 == 0) goto OVR_SoundFX__SetOnFinished;
                            }
                            if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_034fb04c;
                            if (*(long **)(lVar13 + 0x28) != unaff_x21) {
                              if (*(int *)(lVar6 + 0xe0) == 0) {
                                thunk_FUN_01ee6d7c();
                                lVar12 = *(long *)(*(long *)puVar10 + 0xb8);
                              }
                              if (unaff_x21 != *(long **)(lVar12 + 0x10)) {
                                lVar6 = thunk_FUN_01efb3a4(
                                                  Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                                                  );
                                if (*(int *)(lVar6 + 0xe0) == 0) {
                                  thunk_FUN_01ee6d7c();
                                }
                                lVar6 = thunk_FUN_01efb3a4(
                                                  Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                                                  );
                                lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                                if (lVar6 != 0) {
                                  if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_034fb04c;
                                  if (*(long **)(lVar6 + 0x30) == unaff_x21) {
                                    thunk_FUN_01efb3a4(
                                                  Method_System_DBNull_System_IConvertible_ToUInt64__
                                                  );
                                    uVar8 = thunk_FUN_01f117cc();
                                    puVar10 = 
                                    Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRDisplaySubsystem>__
                                    ;
                                  }
                                  else {
                                    lVar6 = thunk_FUN_01efb3a4(
                                                  Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                                                  );
                                    if (*(int *)(lVar6 + 0xe0) == 0) {
                                      thunk_FUN_01ee6d7c();
                                    }
                                    lVar6 = thunk_FUN_01efb3a4(
                                                  Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                                                  );
                                    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                                    if (lVar6 == 0) goto OVR_SoundFX__SetOnFinished;
                                    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_034fb04c;
                                    if (*(long **)(lVar6 + 0x20) != unaff_x21) {
                                      FUN_01bc50c0();
                                      plVar5 = (long *)thunk_FUN_01ecaf38();
                                      FUN_01bc50c0();
                                      uVar9 = (**(code **)(*plVar5 + 0x2e8))
                                                        (plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
                                      FUN_01bc50c0();
                                      uVar8 = (**(code **)(*unaff_x21 + 0x2e8))();
                                      uVar11 = thunk_FUN_01efb3a4(
                                                  Method_UnityEngine_XR_Management_XRGeneralSettings_Quit__
                                                  );
                                      uVar9 = FUN_0340f2f0(uVar11,uVar9,uVar8,0);
                                      thunk_FUN_01efb3a4(
                                                  Method_System_DBNull_System_IConvertible_ToUInt64__
                                                  );
                                      uVar8 = thunk_FUN_01f117cc();
                                      FUN_03568188(uVar8,uVar9,0);
                                      uVar9 = thunk_FUN_01efb3a4(
                                                  Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRInputSubsystemDescriptor,_XRInputSubsystem>__
                                                  );
                    /* WARNING: Subroutine does not return */
                                      FUN_01f08910(uVar8,uVar9);
                                    }
                                    thunk_FUN_01efb3a4(
                                                  Method_System_DBNull_System_IConvertible_ToUInt64__
                                                  );
                                    uVar8 = thunk_FUN_01f117cc();
                                    puVar10 = 
                                    Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRInputSubsystem>__
                                    ;
                                  }
                                  uVar9 = thunk_FUN_01efb3a4(puVar10);
                                  FUN_03568188(uVar8,uVar9,0);
                                  goto LAB_034faf7c;
                                }
                                goto OVR_SoundFX__SetOnFinished;
                              }
                              bVar1 = *(byte *)(*(long *)
                                                 Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                                               + 0x130);
                              if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
                                 (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) !=
                                  *(long *)
                                   Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                                 )) {
                    /* WARNING: Subroutine does not return */
                                FUN_01f08cfc();
                              }
                            }
                            goto 
                            OVR_SoundEmitter_<FadeSoundChannelTo>d__63__System_IDisposable_Dispose;
                          }
                          lVar6 = *unaff_x19;
                          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                          if (uVar4 != 0) {
                            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar14 + -2) ==
                                  *(long *)Method_System_RuntimeType_GetEvent__) {
                                puVar7 = (undefined8 *)
                                         (lVar6 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                                goto LAB_034faf00;
                              }
                              uVar4 = uVar4 - 1;
                              piVar14 = piVar14 + 4;
                            } while (uVar4 != 0);
                          }
                          puVar7 = (undefined8 *)FUN_01ecb238();
LAB_034faf00:
                          uVar9 = (*(code *)*puVar7)();
                          puVar7 = (undefined8 *)
                                   Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
                          goto LAB_034fad74;
                        }
                        lVar6 = *unaff_x19;
                        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                        if (uVar4 != 0) {
                          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) ==
                                *(long *)Method_System_RuntimeType_GetEvent__) {
                              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar14 + 0xc) * 0x10 + 0x138)
                              ;
                              goto LAB_034fae50;
                            }
                            uVar4 = uVar4 - 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar4 != 0);
                        }
                        puVar7 = (undefined8 *)FUN_01ecb238();
LAB_034fae50:
                        in_stack_00000008 = (*(code *)*puVar7)();
                        puVar7 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
                      }
                      uVar9 = *puVar7;
                      goto 
                      OVR_SoundEmitter_<FadeSoundChannel>d__64__System_Collections_IEnumerator_get_Current
                      ;
                    }
                    lVar6 = *unaff_x19;
                    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    if (uVar4 != 0) {
                      piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == *(long *)Method_System_RuntimeType_GetEvent__
                           ) {
                          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                          goto FUN_034fad5c;
                        }
                        uVar4 = uVar4 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar4 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_01ecb238();
FUN_034fad5c:
                    uVar9 = (*(code *)*puVar7)();
                    puVar7 = (undefined8 *)
                             Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                    ;
                  }
LAB_034fad74:
                  in_stack_00000008 = uVar9;
                  uVar9 = *puVar7;
                  goto 
                  OVR_SoundEmitter_<FadeSoundChannel>d__64__System_Collections_IEnumerator_get_Current
                  ;
                }
                lVar6 = *unaff_x19;
                uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar4 != 0) {
                  piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
                      puVar7 = (undefined8 *)(lVar6 + (long)(*piVar14 + 8) * 0x10 + 0x138);
                      goto LAB_034fac6c;
                    }
                    uVar4 = uVar4 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar4 != 0);
                }
                puVar7 = (undefined8 *)FUN_01ecb238();
LAB_034fac6c:
                uVar15 = (*(code *)*puVar7)();
                puVar7 = (undefined8 *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__
                ;
              }
              uVar9 = *puVar7;
              in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar15);
              goto 
              OVR_SoundEmitter_<FadeSoundChannel>d__64__System_Collections_IEnumerator_get_Current;
            }
            lVar6 = *unaff_x19;
            uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar4 != 0) {
              piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
                  puVar7 = (undefined8 *)(lVar6 + (long)(*piVar14 + 6) * 0x10 + 0x138);
                  goto LAB_034fab84;
                }
                uVar4 = uVar4 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar4 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238();
LAB_034fab84:
            uVar3 = (*(code *)*puVar7)();
            puVar7 = (undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__;
          }
LAB_034fa984:
          uVar9 = *puVar7;
          in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,uVar3);
          goto OVR_SoundEmitter_<FadeSoundChannel>d__64__System_Collections_IEnumerator_get_Current;
        }
        lVar6 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar14 + 4) * 0x10 + 0x138);
              goto LAB_034faa5c;
            }
            uVar4 = uVar4 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238();
LAB_034faa5c:
        uVar2 = (*(code *)*puVar7)();
        puVar7 = (undefined8 *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
      }
      uVar9 = *puVar7;
      in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar2);
    }
OVR_SoundEmitter_<FadeSoundChannel>d__64__System_Collections_IEnumerator_get_Current:
    unaff_x19 = (long *)thunk_FUN_01f113fc(uVar9,&stack0x00000008);
  }
OVR_SoundEmitter_<FadeSoundChannelTo>d__63__System_IDisposable_Dispose:
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
    return unaff_x19;
  }
LAB_034faf4c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


