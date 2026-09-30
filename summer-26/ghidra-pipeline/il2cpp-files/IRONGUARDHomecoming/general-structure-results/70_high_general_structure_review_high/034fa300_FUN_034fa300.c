/*
FUNCTION_NAME: FUN_034fa300
ENTRY_POINT: 034fa300
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * FUN_034fa300(long *param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  undefined1 local_58 [16];
  long local_48;
  undefined *puVar11;
  
  puVar11 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  lVar8 = tpidr_el0;
  local_48 = *(long *)(lVar8 + 0x28);
  if ((DAT_04832efc & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__);
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
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
    DAT_04832efc = 1;
  }
  if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = FUN_03582560(param_2,0,0);
  if ((uVar4 & 1) != 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar9 = thunk_FUN_01f117cc();
    uVar10 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRDisplaySubsystemDescriptor,_XRDisplaySubsystem>__
                               );
    FUN_034efd20(uVar9,uVar10);
LAB_034faf7c:
    uVar10 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRInputSubsystemDescriptor,_XRInputSubsystem>__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar9,uVar10);
  }
  if (param_1 == (long *)0x0) {
OVR_SoundFX__SetOnFinished:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar5 = (long *)thunk_FUN_01ecaf38(param_1,0);
  puVar11 = Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__;
  if (plVar5 != param_2) {
    lVar6 = *(long *)Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *(long *)puVar11;
    }
    lVar13 = *(long *)(lVar6 + 0xb8);
    lVar14 = *(long *)(lVar13 + 8);
    if (lVar14 == 0) goto OVR_SoundFX__SetOnFinished;
    if (*(uint *)(lVar14 + 0x18) < 4) {
LAB_034fb04c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    if (*(long **)(lVar14 + 0x38) == param_2) {
      lVar6 = *param_1;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_034fa8ec;
          }
          uVar4 = uVar4 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(param_1,*(long *)Method_System_RuntimeType_GetEvent__,1);
LAB_034fa8ec:
      uVar2 = (*(code *)*puVar7)(param_1,param_3,puVar7[1]);
      local_58._0_8_ = CONCAT71(local_58._1_7_,uVar2) & 0xffffffffffffff01;
      puVar7 = (undefined8 *)
               Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
LAB_034fa90c:
      uVar10 = *puVar7;
    }
    else {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar6 = *(long *)puVar11;
        lVar13 = *(long *)(lVar6 + 0xb8);
        lVar14 = *(long *)(lVar13 + 8);
        if (lVar14 == 0) goto OVR_SoundFX__SetOnFinished;
      }
      if (*(uint *)(lVar14 + 0x18) < 5) goto LAB_034fb04c;
      if (*(long **)(lVar14 + 0x40) == param_2) {
        lVar6 = *param_1;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar15 + 2) * 0x10 + 0x138);
              goto LAB_034fa96c;
            }
            uVar4 = uVar4 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(param_1,*(long *)Method_System_RuntimeType_GetEvent__,2)
        ;
LAB_034fa96c:
        uVar3 = (*(code *)*puVar7)(param_1,param_3,puVar7[1]);
        puVar7 = (undefined8 *)Method_System_IO_CStreamReader_Read__;
        goto LAB_034fa984;
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar6 = *(long *)puVar11;
        lVar13 = *(long *)(lVar6 + 0xb8);
        lVar14 = *(long *)(lVar13 + 8);
        if (lVar14 == 0) goto OVR_SoundFX__SetOnFinished;
      }
      if (*(uint *)(lVar14 + 0x18) < 6) goto LAB_034fb04c;
      if (*(long **)(lVar14 + 0x48) == param_2) {
        lVar6 = *param_1;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar15 + 3) * 0x10 + 0x138);
              goto LAB_034fa9e8;
            }
            uVar4 = uVar4 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(param_1,*(long *)Method_System_RuntimeType_GetEvent__,3)
        ;
LAB_034fa9e8:
        uVar2 = (*(code *)*puVar7)(param_1,param_3,puVar7[1]);
        puVar7 = (undefined8 *)
                 Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__;
      }
      else {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar6 = *(long *)puVar11;
          lVar13 = *(long *)(lVar6 + 0xb8);
          lVar14 = *(long *)(lVar13 + 8);
          if (lVar14 == 0) goto OVR_SoundFX__SetOnFinished;
        }
        if (*(uint *)(lVar14 + 0x18) < 7) goto LAB_034fb04c;
        if (*(long **)(lVar14 + 0x50) != param_2) {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar6 = *(long *)puVar11;
            lVar13 = *(long *)(lVar6 + 0xb8);
            lVar14 = *(long *)(lVar13 + 8);
            if (lVar14 == 0) goto OVR_SoundFX__SetOnFinished;
          }
          if (*(uint *)(lVar14 + 0x18) < 8) goto LAB_034fb04c;
          if (*(long **)(lVar14 + 0x58) == param_2) {
            lVar6 = *param_1;
            uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar4 != 0) {
              piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
                  puVar7 = (undefined8 *)(lVar6 + (long)(*piVar15 + 5) * 0x10 + 0x138);
                  goto LAB_034fab10;
                }
                uVar4 = uVar4 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar4 != 0);
            }
            puVar7 = (undefined8 *)
                     FUN_01ecb238(param_1,*(long *)Method_System_RuntimeType_GetEvent__,5);
LAB_034fab10:
            uVar3 = (*(code *)*puVar7)(param_1,param_3,puVar7[1]);
            puVar7 = (undefined8 *)Method_System_Globalization_Calendar_VerifyWritable__;
          }
          else {
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar6 = *(long *)puVar11;
              lVar13 = *(long *)(lVar6 + 0xb8);
              lVar14 = *(long *)(lVar13 + 8);
              if (lVar14 == 0) goto OVR_SoundFX__SetOnFinished;
            }
            if (*(uint *)(lVar14 + 0x18) < 9) goto LAB_034fb04c;
            if (*(long **)(lVar14 + 0x60) != param_2) {
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar6 = *(long *)puVar11;
                lVar13 = *(long *)(lVar6 + 0xb8);
                lVar14 = *(long *)(lVar13 + 8);
                if (lVar14 == 0) goto OVR_SoundFX__SetOnFinished;
              }
              if (*(uint *)(lVar14 + 0x18) < 10) goto LAB_034fb04c;
              if (*(long **)(lVar14 + 0x68) == param_2) {
                lVar6 = *param_1;
                uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar4 != 0) {
                  piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
                      puVar7 = (undefined8 *)(lVar6 + (long)(*piVar15 + 7) * 0x10 + 0x138);
                      goto LAB_034fabf8;
                    }
                    uVar4 = uVar4 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar4 != 0);
                }
                puVar7 = (undefined8 *)
                         FUN_01ecb238(param_1,*(long *)Method_System_RuntimeType_GetEvent__,7);
LAB_034fabf8:
                local_58._0_4_ = (*(code *)*puVar7)(param_1,param_3,puVar7[1]);
                puVar7 = (undefined8 *)
                         Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
              }
              else {
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                  lVar6 = *(long *)puVar11;
                  lVar13 = *(long *)(lVar6 + 0xb8);
                  lVar14 = *(long *)(lVar13 + 8);
                  if (lVar14 == 0) goto OVR_SoundFX__SetOnFinished;
                }
                if (*(uint *)(lVar14 + 0x18) < 0xb) goto LAB_034fb04c;
                if (*(long **)(lVar14 + 0x70) != param_2) {
                  if (*(int *)(lVar6 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                    lVar6 = *(long *)puVar11;
                    lVar13 = *(long *)(lVar6 + 0xb8);
                    lVar14 = *(long *)(lVar13 + 8);
                    if (lVar14 == 0) goto OVR_SoundFX__SetOnFinished;
                  }
                  if (*(uint *)(lVar14 + 0x18) < 0xc) goto LAB_034fb04c;
                  if (*(long **)(lVar14 + 0x78) == param_2) {
                    lVar6 = *param_1;
                    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    if (uVar4 != 0) {
                      piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)Method_System_RuntimeType_GetEvent__
                           ) {
                          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar15 + 9) * 0x10 + 0x138);
                          goto LAB_034face8;
                        }
                        uVar4 = uVar4 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar4 != 0);
                    }
                    puVar7 = (undefined8 *)
                             FUN_01ecb238(param_1,*(long *)Method_System_RuntimeType_GetEvent__,9);
LAB_034face8:
                    uVar10 = (*(code *)*puVar7)(param_1,param_3,puVar7[1]);
                    puVar7 = (undefined8 *)
                             Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
                  }
                  else {
                    if (*(int *)(lVar6 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                      lVar6 = *(long *)puVar11;
                      lVar13 = *(long *)(lVar6 + 0xb8);
                      lVar14 = *(long *)(lVar13 + 8);
                      if (lVar14 == 0) goto OVR_SoundFX__SetOnFinished;
                    }
                    if (*(uint *)(lVar14 + 0x18) < 0xd) goto LAB_034fb04c;
                    if (*(long **)(lVar14 + 0x80) != param_2) {
                      if (*(int *)(lVar6 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                        lVar6 = *(long *)puVar11;
                        lVar13 = *(long *)(lVar6 + 0xb8);
                        lVar14 = *(long *)(lVar13 + 8);
                        if (lVar14 == 0) goto OVR_SoundFX__SetOnFinished;
                      }
                      if (*(uint *)(lVar14 + 0x18) < 0xe) goto LAB_034fb04c;
                      if (*(long **)(lVar14 + 0x88) == param_2) {
                        lVar6 = *param_1;
                        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                        if (uVar4 != 0) {
                          piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar15 + -2) ==
                                *(long *)Method_System_RuntimeType_GetEvent__) {
                              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar15 + 0xb) * 0x10 + 0x138)
                              ;
                              goto LAB_034fadd8;
                            }
                            uVar4 = uVar4 - 1;
                            piVar15 = piVar15 + 4;
                          } while (uVar4 != 0);
                        }
                        puVar7 = (undefined8 *)
                                 FUN_01ecb238(param_1,*(long *)Method_System_RuntimeType_GetEvent__,
                                              0xb);
LAB_034fadd8:
                        local_58._0_4_ = (*(code *)*puVar7)(param_1,param_3,puVar7[1]);
                        puVar7 = (undefined8 *)
                                 Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                        ;
                      }
                      else {
                        if (*(int *)(lVar6 + 0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                          lVar6 = *(long *)puVar11;
                          lVar13 = *(long *)(lVar6 + 0xb8);
                          lVar14 = *(long *)(lVar13 + 8);
                          if (lVar14 == 0) goto OVR_SoundFX__SetOnFinished;
                        }
                        if (*(uint *)(lVar14 + 0x18) < 0xf) goto LAB_034fb04c;
                        if (*(long **)(lVar14 + 0x90) != param_2) {
                          if (*(int *)(lVar6 + 0xe0) == 0) {
                            thunk_FUN_01ee6d7c();
                            lVar6 = *(long *)puVar11;
                            lVar13 = *(long *)(lVar6 + 0xb8);
                            lVar14 = *(long *)(lVar13 + 8);
                            if (lVar14 == 0) goto OVR_SoundFX__SetOnFinished;
                          }
                          if (*(uint *)(lVar14 + 0x18) < 0x10) goto LAB_034fb04c;
                          if (*(long **)(lVar14 + 0x98) == param_2) {
                            lVar6 = *param_1;
                            uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                            if (uVar4 != 0) {
                              piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar15 + -2) ==
                                    *(long *)Method_System_RuntimeType_GetEvent__) {
                                  puVar7 = (undefined8 *)
                                           (lVar6 + (long)(*piVar15 + 0xd) * 0x10 + 0x138);
                                  goto LAB_034faed0;
                                }
                                uVar4 = uVar4 - 1;
                                piVar15 = piVar15 + 4;
                              } while (uVar4 != 0);
                            }
                            puVar7 = (undefined8 *)
                                     FUN_01ecb238(param_1,*(long *)
                                                  Method_System_RuntimeType_GetEvent__,0xd);
LAB_034faed0:
                            local_58 = (*(code *)*puVar7)(param_1,param_3,puVar7[1]);
                            puVar7 = (undefined8 *)
                                     Method_System_Numerics_BigNumber_FormatBigInteger__;
                            goto LAB_034fa90c;
                          }
                          if (*(int *)(lVar6 + 0xe0) == 0) {
                            thunk_FUN_01ee6d7c();
                            lVar6 = *(long *)puVar11;
                            lVar13 = *(long *)(lVar6 + 0xb8);
                            lVar14 = *(long *)(lVar13 + 8);
                            if (lVar14 == 0) goto OVR_SoundFX__SetOnFinished;
                          }
                          if (*(uint *)(lVar14 + 0x18) < 0x11) goto LAB_034fb04c;
                          if (*(long **)(lVar14 + 0xa0) != param_2) {
                            if (*(int *)(lVar6 + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                              lVar6 = *(long *)puVar11;
                              lVar13 = *(long *)(lVar6 + 0xb8);
                              lVar14 = *(long *)(lVar13 + 8);
                              if (lVar14 == 0) goto OVR_SoundFX__SetOnFinished;
                            }
                            if (*(uint *)(lVar14 + 0x18) < 0x13) goto LAB_034fb04c;
                            if (*(long **)(lVar14 + 0xb0) == param_2) {
                              lVar6 = *param_1;
                              uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                              if (uVar4 != 0) {
                                piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar15 + -2) ==
                                      *(long *)Method_System_RuntimeType_GetEvent__) {
                                    puVar7 = (undefined8 *)
                                             (lVar6 + (long)(*piVar15 + 0xf) * 0x10 + 0x138);
                                    goto LAB_034faf2c;
                                  }
                                  uVar4 = uVar4 - 1;
                                  piVar15 = piVar15 + 4;
                                } while (uVar4 != 0);
                              }
                              puVar7 = (undefined8 *)
                                       FUN_01ecb238(param_1,*(long *)
                                                  Method_System_RuntimeType_GetEvent__,0xf);
LAB_034faf2c:
                              plVar5 = (long *)(*(code *)*puVar7)(param_1,param_3,puVar7[1]);
                              if (*(long *)(lVar8 + 0x28) == local_48) {
                                return plVar5;
                              }
                              goto LAB_034faf4c;
                            }
                            if (*(int *)(lVar6 + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                              lVar6 = *(long *)puVar11;
                              lVar13 = *(long *)(lVar6 + 0xb8);
                              lVar14 = *(long *)(lVar13 + 8);
                              if (lVar14 == 0) goto OVR_SoundFX__SetOnFinished;
                            }
                            if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_034fb04c;
                            if (*(long **)(lVar14 + 0x28) != param_2) {
                              if (*(int *)(lVar6 + 0xe0) == 0) {
                                thunk_FUN_01ee6d7c();
                                lVar13 = *(long *)(*(long *)puVar11 + 0xb8);
                              }
                              if (param_2 != *(long **)(lVar13 + 0x10)) {
                                lVar8 = thunk_FUN_01efb3a4(
                                                  Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                                                  );
                                if (*(int *)(lVar8 + 0xe0) == 0) {
                                  thunk_FUN_01ee6d7c();
                                }
                                lVar8 = thunk_FUN_01efb3a4(
                                                  Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                                                  );
                                lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
                                if (lVar8 != 0) {
                                  if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_034fb04c;
                                  if (*(long **)(lVar8 + 0x30) == param_2) {
                                    thunk_FUN_01efb3a4(
                                                  Method_System_DBNull_System_IConvertible_ToUInt64__
                                                  );
                                    uVar9 = thunk_FUN_01f117cc();
                                    puVar11 = 
                                    Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRDisplaySubsystem>__
                                    ;
                                  }
                                  else {
                                    lVar8 = thunk_FUN_01efb3a4(
                                                  Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                                                  );
                                    if (*(int *)(lVar8 + 0xe0) == 0) {
                                      thunk_FUN_01ee6d7c();
                                    }
                                    lVar8 = thunk_FUN_01efb3a4(
                                                  Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                                                  );
                                    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
                                    if (lVar8 == 0) goto OVR_SoundFX__SetOnFinished;
                                    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_034fb04c;
                                    if (*(long **)(lVar8 + 0x20) != param_2) {
                                      FUN_01bc50c0(param_1);
                                      plVar5 = (long *)thunk_FUN_01ecaf38(param_1,0);
                                      FUN_01bc50c0();
                                      uVar10 = (**(code **)(*plVar5 + 0x2e8))
                                                         (plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
                                      FUN_01bc50c0(param_2);
                                      uVar9 = (**(code **)(*param_2 + 0x2e8))
                                                        (param_2,*(undefined8 *)(*param_2 + 0x2f0));
                                      uVar12 = thunk_FUN_01efb3a4(
                                                  Method_UnityEngine_XR_Management_XRGeneralSettings_Quit__
                                                  );
                                      uVar10 = FUN_0340f2f0(uVar12,uVar10,uVar9,0);
                                      thunk_FUN_01efb3a4(
                                                  Method_System_DBNull_System_IConvertible_ToUInt64__
                                                  );
                                      uVar9 = thunk_FUN_01f117cc();
                                      FUN_03568188(uVar9,uVar10,0);
                                      uVar10 = thunk_FUN_01efb3a4(
                                                  Method_UnityEngine_XR_Management_XRLoaderHelper_CreateSubsystem<XRInputSubsystemDescriptor,_XRInputSubsystem>__
                                                  );
                    /* WARNING: Subroutine does not return */
                                      FUN_01f08910(uVar9,uVar10);
                                    }
                                    thunk_FUN_01efb3a4(
                                                  Method_System_DBNull_System_IConvertible_ToUInt64__
                                                  );
                                    uVar9 = thunk_FUN_01f117cc();
                                    puVar11 = 
                                    Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRInputSubsystem>__
                                    ;
                                  }
                                  uVar10 = thunk_FUN_01efb3a4(puVar11);
                                  FUN_03568188(uVar9,uVar10,0);
                                  goto LAB_034faf7c;
                                }
                                goto OVR_SoundFX__SetOnFinished;
                              }
                              bVar1 = *(byte *)(*(long *)
                                                 Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                                               + 0x130);
                              if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
                                 (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
                                  *(long *)
                                   Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                                 )) {
                    /* WARNING: Subroutine does not return */
                                FUN_01f08cfc(param_1);
                              }
                            }
                            goto 
                            OVR_SoundEmitter_<FadeSoundChannelTo>d__63__System_IDisposable_Dispose;
                          }
                          lVar6 = *param_1;
                          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                          if (uVar4 != 0) {
                            piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar15 + -2) ==
                                  *(long *)Method_System_RuntimeType_GetEvent__) {
                                puVar7 = (undefined8 *)
                                         (lVar6 + (long)(*piVar15 + 0xe) * 0x10 + 0x138);
                                goto LAB_034faf00;
                              }
                              uVar4 = uVar4 - 1;
                              piVar15 = piVar15 + 4;
                            } while (uVar4 != 0);
                          }
                          puVar7 = (undefined8 *)
                                   FUN_01ecb238(param_1,*(long *)
                                                  Method_System_RuntimeType_GetEvent__,0xe);
LAB_034faf00:
                          uVar10 = (*(code *)*puVar7)(param_1,param_3,puVar7[1]);
                          puVar7 = (undefined8 *)
                                   Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
                          goto LAB_034fad74;
                        }
                        lVar6 = *param_1;
                        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                        if (uVar4 != 0) {
                          piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar15 + -2) ==
                                *(long *)Method_System_RuntimeType_GetEvent__) {
                              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar15 + 0xc) * 0x10 + 0x138)
                              ;
                              goto LAB_034fae50;
                            }
                            uVar4 = uVar4 - 1;
                            piVar15 = piVar15 + 4;
                          } while (uVar4 != 0);
                        }
                        puVar7 = (undefined8 *)
                                 FUN_01ecb238(param_1,*(long *)Method_System_RuntimeType_GetEvent__,
                                              0xc);
LAB_034fae50:
                        local_58._0_8_ = (*(code *)*puVar7)(param_1,param_3,puVar7[1]);
                        puVar7 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
                      }
                      uVar10 = *puVar7;
                      goto 
                      OVR_SoundEmitter_<FadeSoundChannel>d__64__System_Collections_IEnumerator_get_Current
                      ;
                    }
                    lVar6 = *param_1;
                    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    if (uVar4 != 0) {
                      piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)Method_System_RuntimeType_GetEvent__
                           ) {
                          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar15 + 10) * 0x10 + 0x138);
                          goto FUN_034fad5c;
                        }
                        uVar4 = uVar4 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar4 != 0);
                    }
                    puVar7 = (undefined8 *)
                             FUN_01ecb238(param_1,*(long *)Method_System_RuntimeType_GetEvent__,10);
FUN_034fad5c:
                    uVar10 = (*(code *)*puVar7)(param_1,param_3,puVar7[1]);
                    puVar7 = (undefined8 *)
                             Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                    ;
                  }
LAB_034fad74:
                  local_58._0_8_ = uVar10;
                  uVar10 = *puVar7;
                  goto 
                  OVR_SoundEmitter_<FadeSoundChannel>d__64__System_Collections_IEnumerator_get_Current
                  ;
                }
                lVar6 = *param_1;
                uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar4 != 0) {
                  piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
                      puVar7 = (undefined8 *)(lVar6 + (long)(*piVar15 + 8) * 0x10 + 0x138);
                      goto LAB_034fac6c;
                    }
                    uVar4 = uVar4 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar4 != 0);
                }
                puVar7 = (undefined8 *)
                         FUN_01ecb238(param_1,*(long *)Method_System_RuntimeType_GetEvent__,8);
LAB_034fac6c:
                local_58._0_4_ = (*(code *)*puVar7)(param_1,param_3,puVar7[1]);
                puVar7 = (undefined8 *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__
                ;
              }
              uVar10 = *puVar7;
              goto 
              OVR_SoundEmitter_<FadeSoundChannel>d__64__System_Collections_IEnumerator_get_Current;
            }
            lVar6 = *param_1;
            uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar4 != 0) {
              piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
                  puVar7 = (undefined8 *)(lVar6 + (long)(*piVar15 + 6) * 0x10 + 0x138);
                  goto LAB_034fab84;
                }
                uVar4 = uVar4 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar4 != 0);
            }
            puVar7 = (undefined8 *)
                     FUN_01ecb238(param_1,*(long *)Method_System_RuntimeType_GetEvent__,6);
LAB_034fab84:
            uVar3 = (*(code *)*puVar7)(param_1,param_3,puVar7[1]);
            puVar7 = (undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__;
          }
LAB_034fa984:
          uVar10 = *puVar7;
          local_58._0_2_ = uVar3;
          goto OVR_SoundEmitter_<FadeSoundChannel>d__64__System_Collections_IEnumerator_get_Current;
        }
        lVar6 = *param_1;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)Method_System_RuntimeType_GetEvent__) {
              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar15 + 4) * 0x10 + 0x138);
              goto LAB_034faa5c;
            }
            uVar4 = uVar4 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(param_1,*(long *)Method_System_RuntimeType_GetEvent__,4)
        ;
LAB_034faa5c:
        uVar2 = (*(code *)*puVar7)(param_1,param_3,puVar7[1]);
        puVar7 = (undefined8 *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
      }
      uVar10 = *puVar7;
      local_58[0] = uVar2;
    }
OVR_SoundEmitter_<FadeSoundChannel>d__64__System_Collections_IEnumerator_get_Current:
    param_1 = (long *)thunk_FUN_01f113fc(uVar10,local_58);
  }
OVR_SoundEmitter_<FadeSoundChannelTo>d__63__System_IDisposable_Dispose:
  if (*(long *)(lVar8 + 0x28) == local_48) {
    return param_1;
  }
LAB_034faf4c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


