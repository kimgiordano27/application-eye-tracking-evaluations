/*
FUNCTION_NAME: Oculus.Interaction.GrabStrengthIndicator$$.ctor
ENTRY_POINT: 034ff0bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Oculus_Interaction_GrabStrengthIndicator___ctor(long param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined4 uVar13;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined *puVar8;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x500));
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
  thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
                    /* try { // try from 034ff0dc to 035ff0df has its CatchHandler @ 034ff3c0 */
  thunk_FUN_01efb3a4(Method_System_Numerics_BigNumber_FormatBigInteger__);
                    /* try { // try from 034ff0f0 to 035ff0f3 has its CatchHandler @ 034ff3bc */
  thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
  thunk_FUN_01efb3a4(Method_System_RuntimeType_GetEvent__);
                    /* try { // try from 034ff100 to 035ff103 has its CatchHandler @ 034ff3b0 */
                    /* try { // try from 034ff104 to 035ff20b has its CatchHandler @ 034feee4 */
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
  *(undefined1 *)(unaff_x20 + 0xefe) = 1;
  puVar8 = Method_System_RuntimeType_GetEvent__;
  if (unaff_x22 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar9 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(
                              Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_Run__
                              );
    FUN_034efd20(uVar9,uVar7);
    goto LAB_034ffcf4;
  }
  if (unaff_x21 == 0) {
    uVar11 = FUN_0358471c();
    if ((uVar11 & 1) != 0) {
      thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToUInt64__);
      uVar9 = thunk_FUN_01f117cc();
      puVar8 = Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_ReadValue__;
LAB_034ff5b0:
      uVar7 = thunk_FUN_01efb3a4(puVar8);
      FUN_03568188(uVar9,uVar7,0);
LAB_034ffcf4:
      uVar7 = thunk_FUN_01efb3a4(
                                Method_System_Runtime_Serialization_Formatters_Binary___BinaryWriter_WriteValue__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar9,uVar7);
    }
  }
  else {
    plVar4 = (long *)thunk_FUN_01f116d0();
    puVar1 = Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__;
    if (plVar4 == (long *)0x0) {
      uVar9 = thunk_FUN_01ecaf38();
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
      }
      uVar11 = FUN_03582560(uVar9);
      if ((uVar11 & 1) == 0) {
        thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToUInt64__);
        uVar9 = thunk_FUN_01f117cc();
        puVar8 = 
        Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_ReadObjectString__;
        goto LAB_034ff5b0;
      }
    }
    else {
      lVar5 = *(long *)Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar10 == 0) {
LAB_034ffd0c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar10 + 0x18) < 4) {
LAB_034ffcc4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (*(long *)(lVar10 + 0x38) == unaff_x22) {
        lVar5 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar8) {
              puVar6 = (undefined8 *)(lVar5 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_034ff698;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar8,1);
LAB_034ff698:
        uVar2 = (*(code *)*puVar6)(plVar4);
        in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar2) & 0xffffffffffffff01;
        puVar6 = (undefined8 *)
                 Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
        ;
LAB_034ff6b8:
        uVar9 = *puVar6;
      }
      else {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar5 = *(long *)puVar1;
          lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar10 == 0) goto LAB_034ffd0c;
        }
        if (*(uint *)(lVar10 + 0x18) < 5) goto LAB_034ffcc4;
        if (*(long *)(lVar10 + 0x40) == unaff_x22) {
          lVar5 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar8) {
                puVar6 = (undefined8 *)(lVar5 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                goto LAB_034ff710;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar8,2);
LAB_034ff710:
          uVar3 = (*(code *)*puVar6)(plVar4);
          puVar6 = (undefined8 *)Method_System_IO_CStreamReader_Read__;
          goto LAB_034ff728;
        }
                    /* try { // try from 034ff20c to 035ff233 has its CatchHandler @ 034ff3ac */
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar5 = *(long *)puVar1;
          lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar10 == 0) goto LAB_034ffd0c;
        }
        if (*(uint *)(lVar10 + 0x18) < 6) goto LAB_034ffcc4;
                    /* try { // try from 034ff234 to 035ff23f has its CatchHandler @ 034ff298 */
        if (*(long *)(lVar10 + 0x48) == unaff_x22) {
          lVar5 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar8) {
                puVar6 = (undefined8 *)(lVar5 + (long)(*piVar12 + 3) * 0x10 + 0x138);
                goto LAB_034ff784;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar8,3);
LAB_034ff784:
          uVar2 = (*(code *)*puVar6)(plVar4);
          puVar6 = (undefined8 *)
                   Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
          ;
        }
        else {
          if (*(int *)(lVar5 + 0xe0) == 0) {
                    /* try { // try from 034ff248 to 035ff253 has its CatchHandler @ 034ff294 */
            thunk_FUN_01ee6d7c();
            lVar5 = *(long *)puVar1;
            lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
            if (lVar10 == 0) goto LAB_034ffd0c;
          }
          if (*(uint *)(lVar10 + 0x18) < 7) goto LAB_034ffcc4;
          if (*(long *)(lVar10 + 0x50) != unaff_x22) {
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar5 = *(long *)puVar1;
              lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
              if (lVar10 == 0) goto LAB_034ffd0c;
            }
            if (*(uint *)(lVar10 + 0x18) < 8) goto LAB_034ffcc4;
            if (*(long *)(lVar10 + 0x58) == unaff_x22) {
              lVar5 = *plVar4;
              uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar8) {
                    puVar6 = (undefined8 *)(lVar5 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                    goto LAB_034ff89c;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar8,5);
LAB_034ff89c:
              uVar3 = (*(code *)*puVar6)(plVar4);
              puVar6 = (undefined8 *)Method_System_Globalization_Calendar_VerifyWritable__;
            }
            else {
              if (*(int *)(lVar5 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar5 = *(long *)puVar1;
                lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                if (lVar10 == 0) goto LAB_034ffd0c;
              }
              if (*(uint *)(lVar10 + 0x18) < 9) goto LAB_034ffcc4;
              if (*(long *)(lVar10 + 0x60) != unaff_x22) {
                if (*(int *)(lVar5 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                  lVar5 = *(long *)puVar1;
                  lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                  if (lVar10 == 0) goto LAB_034ffd0c;
                }
                if (*(uint *)(lVar10 + 0x18) < 10) goto LAB_034ffcc4;
                if (*(long *)(lVar10 + 0x68) == unaff_x22) {
                  lVar5 = *plVar4;
                  uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar11 != 0) {
                    piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) == *(long *)puVar8) {
                        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar12 + 7) * 0x10 + 0x138);
                        goto LAB_034ff974;
                      }
                      uVar11 = uVar11 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar11 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar8,7);
LAB_034ff974:
                  uVar13 = (*(code *)*puVar6)(plVar4);
                  puVar6 = (undefined8 *)
                           Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
                }
                else {
                  if (*(int *)(lVar5 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                    lVar5 = *(long *)puVar1;
                    lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                    if (lVar10 == 0) goto LAB_034ffd0c;
                  }
                  if (*(uint *)(lVar10 + 0x18) < 0xb) goto LAB_034ffcc4;
                  if (*(long *)(lVar10 + 0x70) != unaff_x22) {
                    if (*(int *)(lVar5 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                      lVar5 = *(long *)puVar1;
                      lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                      if (lVar10 == 0) goto LAB_034ffd0c;
                    }
                    if (*(uint *)(lVar10 + 0x18) < 0xc) goto LAB_034ffcc4;
                    if (*(long *)(lVar10 + 0x78) == unaff_x22) {
                      lVar5 = *plVar4;
                      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                      if (uVar11 != 0) {
                        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar12 + -2) == *(long *)puVar8) {
                            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar12 + 9) * 0x10 + 0x138);
                            goto LAB_034ffa54;
                          }
                          uVar11 = uVar11 - 1;
                          piVar12 = piVar12 + 4;
                        } while (uVar11 != 0);
                      }
                      puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar8,9);
LAB_034ffa54:
                      uVar9 = (*(code *)*puVar6)(plVar4);
                      puVar6 = (undefined8 *)
                               Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
                    }
                    else {
                      if (*(int *)(lVar5 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                        lVar5 = *(long *)puVar1;
                        lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                        if (lVar10 == 0) goto LAB_034ffd0c;
                      }
                      if (*(uint *)(lVar10 + 0x18) < 0xd) goto LAB_034ffcc4;
                      if (*(long *)(lVar10 + 0x80) != unaff_x22) {
                        if (*(int *)(lVar5 + 0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                          lVar5 = *(long *)puVar1;
                          lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                          if (lVar10 == 0) goto LAB_034ffd0c;
                        }
                        if (*(uint *)(lVar10 + 0x18) < 0xe) goto LAB_034ffcc4;
                        if (*(long *)(lVar10 + 0x88) == unaff_x22) {
                          lVar5 = *plVar4;
                          uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                          if (uVar11 != 0) {
                            piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar12 + -2) == *(long *)puVar8) {
                                puVar6 = (undefined8 *)
                                         (lVar5 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
                                goto LAB_034ffb34;
                              }
                              uVar11 = uVar11 - 1;
                              piVar12 = piVar12 + 4;
                            } while (uVar11 != 0);
                          }
                          puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar8,0xb);
LAB_034ffb34:
                          uVar13 = (*(code *)*puVar6)(plVar4);
                          in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar13);
                          puVar6 = (undefined8 *)
                                   Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                          ;
                        }
                        else {
                          if (*(int *)(lVar5 + 0xe0) == 0) {
                            thunk_FUN_01ee6d7c();
                            lVar5 = *(long *)puVar1;
                            lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                            if (lVar10 == 0) goto LAB_034ffd0c;
                          }
                          if (*(uint *)(lVar10 + 0x18) < 0xf) goto LAB_034ffcc4;
                          if (*(long *)(lVar10 + 0x90) != unaff_x22) {
                            if (*(int *)(lVar5 + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                              lVar5 = *(long *)puVar1;
                              lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                              if (lVar10 == 0) goto LAB_034ffd0c;
                            }
                            if (*(uint *)(lVar10 + 0x18) < 0x10) goto LAB_034ffcc4;
                            if (*(long *)(lVar10 + 0x98) == unaff_x22) {
                              lVar5 = *plVar4;
                              uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                              if (uVar11 != 0) {
                                piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar12 + -2) == *(long *)puVar8) {
                                    puVar6 = (undefined8 *)
                                             (lVar5 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
                                    goto LAB_034ffc1c;
                                  }
                                  uVar11 = uVar11 - 1;
                                  piVar12 = piVar12 + 4;
                                } while (uVar11 != 0);
                              }
                              puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar8,0xd);
LAB_034ffc1c:
                              _in_stack_00000008 = (*(code *)*puVar6)(plVar4);
                              puVar6 = (undefined8 *)
                                       Method_System_Numerics_BigNumber_FormatBigInteger__;
                              goto LAB_034ff6b8;
                            }
                            if (*(int *)(lVar5 + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                              lVar5 = *(long *)puVar1;
                              lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                              if (lVar10 == 0) goto LAB_034ffd0c;
                            }
                            if (*(uint *)(lVar10 + 0x18) < 0x11) goto LAB_034ffcc4;
                            if (*(long *)(lVar10 + 0xa0) != unaff_x22) {
                              if (*(int *)(lVar5 + 0xe0) == 0) {
                                thunk_FUN_01ee6d7c();
                                lVar5 = *(long *)puVar1;
                                lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                                if (lVar10 == 0) goto LAB_034ffd0c;
                              }
                              if (*(uint *)(lVar10 + 0x18) < 0x13) goto LAB_034ffcc4;
                              if (*(long *)(lVar10 + 0xb0) == unaff_x22) {
                                lVar5 = *plVar4;
                                uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                if (uVar11 != 0) {
                                  piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar12 + -2) == *(long *)puVar8) {
                                      puVar6 = (undefined8 *)
                                               (lVar5 + (long)(*piVar12 + 0xf) * 0x10 + 0x138);
                                      goto LAB_034ffca0;
                                    }
                                    uVar11 = uVar11 - 1;
                                    piVar12 = piVar12 + 4;
                                  } while (uVar11 != 0);
                                }
                                puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar8,0xf);
LAB_034ffca0:
                                lVar5 = (*(code *)*puVar6)(plVar4);
                              }
                              else {
                                if (*(int *)(lVar5 + 0xe0) == 0) {
                                  thunk_FUN_01ee6d7c();
                                  lVar10 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                                  if (lVar10 == 0) goto LAB_034ffd0c;
                                }
                                if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_034ffcc4;
                                if (*(long *)(lVar10 + 0x28) == unaff_x22) goto LAB_034ff820;
                                lVar5 = *plVar4;
                                uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                                if (uVar11 != 0) {
                                  piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar12 + -2) == *(long *)puVar8) {
                                      puVar6 = (undefined8 *)
                                               (lVar5 + (long)(*piVar12 + 0x10) * 0x10 + 0x138);
                                      goto LAB_034ffc78;
                                    }
                                    uVar11 = uVar11 - 1;
                                    piVar12 = piVar12 + 4;
                                  } while (uVar11 != 0);
                                }
                                puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar8,0x10);
LAB_034ffc78:
                                lVar5 = (*(code *)*puVar6)(plVar4);
                              }
                              if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
                                return lVar5;
                              }
                              goto LAB_034ffcc0;
                            }
                            lVar5 = *plVar4;
                            uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                            if (uVar11 != 0) {
                              piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar12 + -2) == *(long *)puVar8) {
                                  puVar6 = (undefined8 *)
                                           (lVar5 + (long)(*piVar12 + 0xe) * 0x10 + 0x138);
                                  goto LAB_034ffc4c;
                                }
                                uVar11 = uVar11 - 1;
                                piVar12 = piVar12 + 4;
                              } while (uVar11 != 0);
                            }
                            puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar8,0xe);
LAB_034ffc4c:
                            uVar9 = (*(code *)*puVar6)(plVar4);
                            puVar6 = (undefined8 *)
                                     Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
                            goto LAB_034ffad8;
                          }
                          lVar5 = *plVar4;
                          uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                          if (uVar11 != 0) {
                            piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar12 + -2) == *(long *)puVar8) {
                                puVar6 = (undefined8 *)
                                         (lVar5 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
                                goto LAB_034ffba4;
                              }
                              uVar11 = uVar11 - 1;
                              piVar12 = piVar12 + 4;
                            } while (uVar11 != 0);
                          }
                          puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar8,0xc);
LAB_034ffba4:
                          in_stack_00000008 = (*(code *)*puVar6)(plVar4);
                          puVar6 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
                        }
                        uVar9 = *puVar6;
                        goto LAB_034ff818;
                      }
                      lVar5 = *plVar4;
                      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                      if (uVar11 != 0) {
                        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar12 + -2) == *(long *)puVar8) {
                            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar12 + 10) * 0x10 + 0x138);
                            goto LAB_034ffac0;
                          }
                          uVar11 = uVar11 - 1;
                          piVar12 = piVar12 + 4;
                        } while (uVar11 != 0);
                      }
                      puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar8,10);
LAB_034ffac0:
                      uVar9 = (*(code *)*puVar6)(plVar4);
                      puVar6 = (undefined8 *)
                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                      ;
                    }
LAB_034ffad8:
                    in_stack_00000008 = uVar9;
                    uVar9 = *puVar6;
                    goto LAB_034ff818;
                  }
                  lVar5 = *plVar4;
                  uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar11 != 0) {
                    piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) == *(long *)puVar8) {
                        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar12 + 8) * 0x10 + 0x138);
                        goto LAB_034ff9e0;
                      }
                      uVar11 = uVar11 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar11 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar8,8);
LAB_034ff9e0:
                  uVar13 = (*(code *)*puVar6)(plVar4);
                  puVar6 = (undefined8 *)
                           Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__;
                }
                uVar9 = *puVar6;
                in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar13);
                goto LAB_034ff818;
              }
              lVar5 = *plVar4;
              uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar8) {
                    puVar6 = (undefined8 *)(lVar5 + (long)(*piVar12 + 6) * 0x10 + 0x138);
                    goto LAB_034ff908;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar8,6);
LAB_034ff908:
              uVar3 = (*(code *)*puVar6)(plVar4);
              puVar6 = (undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__;
            }
LAB_034ff728:
            uVar9 = *puVar6;
            in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,uVar3);
            goto LAB_034ff818;
          }
          lVar5 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar8) {
                puVar6 = (undefined8 *)(lVar5 + (long)(*piVar12 + 4) * 0x10 + 0x138);
                goto LAB_034ff7f0;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar8,4);
LAB_034ff7f0:
          uVar2 = (*(code *)*puVar6)(plVar4);
          puVar6 = (undefined8 *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
        }
        uVar9 = *puVar6;
        in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar2);
      }
LAB_034ff818:
      unaff_x21 = thunk_FUN_01f113fc(uVar9,&stack0x00000008);
    }
  }
LAB_034ff820:
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
    return unaff_x21;
  }
LAB_034ffcc0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


