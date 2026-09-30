/*
FUNCTION_NAME: FUN_034ff068
ENTRY_POINT: 034ff068
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_034ff068(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined1 local_58 [16];
  long local_48;
  undefined *puVar9;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 034ff080 to 035ff087 has its CatchHandler @ 034ff29c */
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 034ff094 to 035ff09b has its CatchHandler @ 034ff2a0 */
  if ((DAT_04832efe & 1) == 0) {
                    /* try { // try from 034ff0a8 to 035ff0cf has its CatchHandler @ 034ff3bc */
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__);
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_01efb3a4(Method_System_Numerics_BigNumber_FormatBigInteger__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
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
    DAT_04832efe = 1;
  }
  puVar9 = Method_System_RuntimeType_GetEvent__;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar10 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(
                              Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_Run__
                              );
    FUN_034efd20(uVar10,uVar8);
    goto LAB_034ffcf4;
  }
  if (param_1 == 0) {
    uVar12 = FUN_0358471c(param_2,0);
    if ((uVar12 & 1) != 0) {
      thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToUInt64__);
      uVar10 = thunk_FUN_01f117cc();
      puVar9 = Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_ReadValue__;
LAB_034ff5b0:
      uVar8 = thunk_FUN_01efb3a4(puVar9);
      FUN_03568188(uVar10,uVar8,0);
LAB_034ffcf4:
      uVar8 = thunk_FUN_01efb3a4(
                                Method_System_Runtime_Serialization_Formatters_Binary___BinaryWriter_WriteValue__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar10,uVar8);
    }
  }
  else {
    plVar5 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)Method_System_RuntimeType_GetEvent__)
    ;
    puVar2 = Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__;
    if (plVar5 == (long *)0x0) {
      uVar10 = thunk_FUN_01ecaf38(param_1,0);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
      }
      uVar12 = FUN_03582560(uVar10,param_2,0);
      if ((uVar12 & 1) == 0) {
        thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToUInt64__);
        uVar10 = thunk_FUN_01f117cc();
        puVar9 = 
        Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_ReadObjectString__;
        goto LAB_034ff5b0;
      }
    }
    else {
      lVar6 = *(long *)Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar6 = *(long *)puVar2;
      }
      lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar11 == 0) {
LAB_034ffd0c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar11 + 0x18) < 4) {
LAB_034ffcc4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (*(long *)(lVar11 + 0x38) == param_2) {
        lVar6 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_034ff698;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar9,1);
LAB_034ff698:
        uVar3 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
        local_58._0_8_ = CONCAT71(local_58._1_7_,uVar3) & 0xffffffffffffff01;
        puVar7 = (undefined8 *)
                 Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
        ;
LAB_034ff6b8:
        uVar10 = *puVar7;
      }
      else {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar6 = *(long *)puVar2;
          lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          if (lVar11 == 0) goto LAB_034ffd0c;
        }
        if (*(uint *)(lVar11 + 0x18) < 5) goto LAB_034ffcc4;
        if (*(long *)(lVar11 + 0x40) == param_2) {
          lVar6 = *plVar5;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                goto LAB_034ff710;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar9,2);
LAB_034ff710:
          uVar4 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
          puVar7 = (undefined8 *)Method_System_IO_CStreamReader_Read__;
          goto LAB_034ff728;
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar6 = *(long *)puVar2;
          lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          if (lVar11 == 0) goto LAB_034ffd0c;
        }
        if (*(uint *)(lVar11 + 0x18) < 6) goto LAB_034ffcc4;
        if (*(long *)(lVar11 + 0x48) == param_2) {
          lVar6 = *plVar5;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                goto LAB_034ff784;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar9,3);
LAB_034ff784:
          uVar3 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
          puVar7 = (undefined8 *)
                   Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
          ;
        }
        else {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar6 = *(long *)puVar2;
            lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
            if (lVar11 == 0) goto LAB_034ffd0c;
          }
          if (*(uint *)(lVar11 + 0x18) < 7) goto LAB_034ffcc4;
          if (*(long *)(lVar11 + 0x50) != param_2) {
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar6 = *(long *)puVar2;
              lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
              if (lVar11 == 0) goto LAB_034ffd0c;
            }
            if (*(uint *)(lVar11 + 0x18) < 8) goto LAB_034ffcc4;
            if (*(long *)(lVar11 + 0x58) == param_2) {
              lVar6 = *plVar5;
              uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                    puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 5) * 0x10 + 0x138);
                    goto LAB_034ff89c;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar9,5);
LAB_034ff89c:
              uVar4 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
              puVar7 = (undefined8 *)Method_System_Globalization_Calendar_VerifyWritable__;
            }
            else {
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar6 = *(long *)puVar2;
                lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                if (lVar11 == 0) goto LAB_034ffd0c;
              }
              if (*(uint *)(lVar11 + 0x18) < 9) goto LAB_034ffcc4;
              if (*(long *)(lVar11 + 0x60) != param_2) {
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                  lVar6 = *(long *)puVar2;
                  lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                  if (lVar11 == 0) goto LAB_034ffd0c;
                }
                if (*(uint *)(lVar11 + 0x18) < 10) goto LAB_034ffcc4;
                if (*(long *)(lVar11 + 0x68) == param_2) {
                  lVar6 = *plVar5;
                  uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 7) * 0x10 + 0x138);
                        goto LAB_034ff974;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar9,7);
LAB_034ff974:
                  local_58._0_4_ = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
                  puVar7 = (undefined8 *)
                           Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
                }
                else {
                  if (*(int *)(lVar6 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                    lVar6 = *(long *)puVar2;
                    lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                    if (lVar11 == 0) goto LAB_034ffd0c;
                  }
                  if (*(uint *)(lVar11 + 0x18) < 0xb) goto LAB_034ffcc4;
                  if (*(long *)(lVar11 + 0x70) != param_2) {
                    if (*(int *)(lVar6 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                      lVar6 = *(long *)puVar2;
                      lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                      if (lVar11 == 0) goto LAB_034ffd0c;
                    }
                    if (*(uint *)(lVar11 + 0x18) < 0xc) goto LAB_034ffcc4;
                    if (*(long *)(lVar11 + 0x78) == param_2) {
                      lVar6 = *plVar5;
                      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                      if (uVar12 != 0) {
                        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 9) * 0x10 + 0x138);
                            goto LAB_034ffa54;
                          }
                          uVar12 = uVar12 - 1;
                          piVar13 = piVar13 + 4;
                        } while (uVar12 != 0);
                      }
                      puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar9,9);
LAB_034ffa54:
                      uVar10 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
                      puVar7 = (undefined8 *)
                               Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
                    }
                    else {
                      if (*(int *)(lVar6 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                        lVar6 = *(long *)puVar2;
                        lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                        if (lVar11 == 0) goto LAB_034ffd0c;
                      }
                      if (*(uint *)(lVar11 + 0x18) < 0xd) goto LAB_034ffcc4;
                      if (*(long *)(lVar11 + 0x80) != param_2) {
                        if (*(int *)(lVar6 + 0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                          lVar6 = *(long *)puVar2;
                          lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                          if (lVar11 == 0) goto LAB_034ffd0c;
                        }
                        if (*(uint *)(lVar11 + 0x18) < 0xe) goto LAB_034ffcc4;
                        if (*(long *)(lVar11 + 0x88) == param_2) {
                          lVar6 = *plVar5;
                          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                          if (uVar12 != 0) {
                            piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                                puVar7 = (undefined8 *)
                                         (lVar6 + (long)(*piVar13 + 0xb) * 0x10 + 0x138);
                                goto LAB_034ffb34;
                              }
                              uVar12 = uVar12 - 1;
                              piVar13 = piVar13 + 4;
                            } while (uVar12 != 0);
                          }
                          puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar9,0xb);
LAB_034ffb34:
                          local_58._0_4_ = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
                          puVar7 = (undefined8 *)
                                   Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                          ;
                        }
                        else {
                          if (*(int *)(lVar6 + 0xe0) == 0) {
                            thunk_FUN_01ee6d7c();
                            lVar6 = *(long *)puVar2;
                            lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                            if (lVar11 == 0) goto LAB_034ffd0c;
                          }
                          if (*(uint *)(lVar11 + 0x18) < 0xf) goto LAB_034ffcc4;
                          if (*(long *)(lVar11 + 0x90) != param_2) {
                            if (*(int *)(lVar6 + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                              lVar6 = *(long *)puVar2;
                              lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                              if (lVar11 == 0) goto LAB_034ffd0c;
                            }
                            if (*(uint *)(lVar11 + 0x18) < 0x10) goto LAB_034ffcc4;
                            if (*(long *)(lVar11 + 0x98) == param_2) {
                              lVar6 = *plVar5;
                              uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                              if (uVar12 != 0) {
                                piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                                    puVar7 = (undefined8 *)
                                             (lVar6 + (long)(*piVar13 + 0xd) * 0x10 + 0x138);
                                    goto LAB_034ffc1c;
                                  }
                                  uVar12 = uVar12 - 1;
                                  piVar13 = piVar13 + 4;
                                } while (uVar12 != 0);
                              }
                              puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar9,0xd);
LAB_034ffc1c:
                              local_58 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
                              puVar7 = (undefined8 *)
                                       Method_System_Numerics_BigNumber_FormatBigInteger__;
                              goto LAB_034ff6b8;
                            }
                            if (*(int *)(lVar6 + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                              lVar6 = *(long *)puVar2;
                              lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                              if (lVar11 == 0) goto LAB_034ffd0c;
                            }
                            if (*(uint *)(lVar11 + 0x18) < 0x11) goto LAB_034ffcc4;
                            if (*(long *)(lVar11 + 0xa0) != param_2) {
                              if (*(int *)(lVar6 + 0xe0) == 0) {
                                thunk_FUN_01ee6d7c();
                                lVar6 = *(long *)puVar2;
                                lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                                if (lVar11 == 0) goto LAB_034ffd0c;
                              }
                              if (*(uint *)(lVar11 + 0x18) < 0x13) goto LAB_034ffcc4;
                              if (*(long *)(lVar11 + 0xb0) == param_2) {
                                lVar6 = *plVar5;
                                uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                if (uVar12 != 0) {
                                  piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                                      puVar7 = (undefined8 *)
                                               (lVar6 + (long)(*piVar13 + 0xf) * 0x10 + 0x138);
                                      goto LAB_034ffca0;
                                    }
                                    uVar12 = uVar12 - 1;
                                    piVar13 = piVar13 + 4;
                                  } while (uVar12 != 0);
                                }
                                puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar9,0xf);
LAB_034ffca0:
                                lVar6 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
                              }
                              else {
                                if (*(int *)(lVar6 + 0xe0) == 0) {
                                  thunk_FUN_01ee6d7c();
                                  lVar11 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                                  if (lVar11 == 0) goto LAB_034ffd0c;
                                }
                                if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_034ffcc4;
                                if (*(long *)(lVar11 + 0x28) == param_2) goto LAB_034ff820;
                                lVar6 = *plVar5;
                                uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                                if (uVar12 != 0) {
                                  piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                                      puVar7 = (undefined8 *)
                                               (lVar6 + (long)(*piVar13 + 0x10) * 0x10 + 0x138);
                                      goto LAB_034ffc78;
                                    }
                                    uVar12 = uVar12 - 1;
                                    piVar13 = piVar13 + 4;
                                  } while (uVar12 != 0);
                                }
                                puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar9,0x10);
LAB_034ffc78:
                                lVar6 = (*(code *)*puVar7)(plVar5,param_2,param_3,puVar7[1]);
                              }
                              if (*(long *)(lVar1 + 0x28) == local_48) {
                                return lVar6;
                              }
                              goto LAB_034ffcc0;
                            }
                            lVar6 = *plVar5;
                            uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                            if (uVar12 != 0) {
                              piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                                  puVar7 = (undefined8 *)
                                           (lVar6 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                                  goto LAB_034ffc4c;
                                }
                                uVar12 = uVar12 - 1;
                                piVar13 = piVar13 + 4;
                              } while (uVar12 != 0);
                            }
                            puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar9,0xe);
LAB_034ffc4c:
                            uVar10 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
                            puVar7 = (undefined8 *)
                                     Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
                            goto LAB_034ffad8;
                          }
                          lVar6 = *plVar5;
                          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                          if (uVar12 != 0) {
                            piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                                puVar7 = (undefined8 *)
                                         (lVar6 + (long)(*piVar13 + 0xc) * 0x10 + 0x138);
                                goto LAB_034ffba4;
                              }
                              uVar12 = uVar12 - 1;
                              piVar13 = piVar13 + 4;
                            } while (uVar12 != 0);
                          }
                          puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar9,0xc);
LAB_034ffba4:
                          local_58._0_8_ = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
                          puVar7 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
                        }
                        uVar10 = *puVar7;
                        goto LAB_034ff818;
                      }
                      lVar6 = *plVar5;
                      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                      if (uVar12 != 0) {
                        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 10) * 0x10 + 0x138);
                            goto LAB_034ffac0;
                          }
                          uVar12 = uVar12 - 1;
                          piVar13 = piVar13 + 4;
                        } while (uVar12 != 0);
                      }
                      puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar9,10);
LAB_034ffac0:
                      uVar10 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
                      puVar7 = (undefined8 *)
                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                      ;
                    }
LAB_034ffad8:
                    local_58._0_8_ = uVar10;
                    uVar10 = *puVar7;
                    goto LAB_034ff818;
                  }
                  lVar6 = *plVar5;
                  uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 8) * 0x10 + 0x138);
                        goto LAB_034ff9e0;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar9,8);
LAB_034ff9e0:
                  local_58._0_4_ = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
                  puVar7 = (undefined8 *)
                           Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__;
                }
                uVar10 = *puVar7;
                goto LAB_034ff818;
              }
              lVar6 = *plVar5;
              uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                    puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 6) * 0x10 + 0x138);
                    goto LAB_034ff908;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar9,6);
LAB_034ff908:
              uVar4 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
              puVar7 = (undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__;
            }
LAB_034ff728:
            uVar10 = *puVar7;
            local_58._0_2_ = uVar4;
            goto LAB_034ff818;
          }
          lVar6 = *plVar5;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar9) {
                puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 4) * 0x10 + 0x138);
                goto LAB_034ff7f0;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar9,4);
LAB_034ff7f0:
          uVar3 = (*(code *)*puVar7)(plVar5,param_3,puVar7[1]);
          puVar7 = (undefined8 *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
        }
        uVar10 = *puVar7;
        local_58[0] = uVar3;
      }
LAB_034ff818:
      param_1 = thunk_FUN_01f113fc(uVar10,local_58);
    }
  }
LAB_034ff820:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
LAB_034ffcc0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


