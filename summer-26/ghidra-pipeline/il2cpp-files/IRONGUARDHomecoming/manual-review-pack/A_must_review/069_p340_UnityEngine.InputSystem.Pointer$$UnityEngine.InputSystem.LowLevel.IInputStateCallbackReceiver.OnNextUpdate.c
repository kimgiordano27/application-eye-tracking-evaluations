/*
FUNCTION_NAME: UnityEngine.InputSystem.Pointer$$UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate
ENTRY_POINT: 03a6b000
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 207
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a6b1b8) */
/* WARNING: Removing unreachable block (ram,0x03a6b31c) */
/* WARNING: Removing unreachable block (ram,0x03a6b1e4) */
/* WARNING: Removing unreachable block (ram,0x03a6b4d8) */
/* WARNING: Removing unreachable block (ram,0x03a6b4d0) */

void UnityEngine_InputSystem_Pointer__UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate
               (long param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w26;
  uint uVar11;
  long *unaff_x28;
  uint uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  
  do {
                    /* catch() { ... } // from try @ 03a6aff8 with catch @ 03a6b000 */
    if (*(long *)(param_1 + 0x40) != *(long *)(*unaff_x22 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    plVar4 = (long *)thunk_FUN_01f11920();
    plVar8 = (long *)*plVar4;
    plVar4 = (long *)plVar4[1];
    if ((plVar8 != (long *)0x0) &&
       (*plVar8 != *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar8);
    }
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = FUN_039fd90c();
    uVar6 = FUN_03a64408(plVar8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar6,uVar6);
    }
    uVar7 = FUN_0340e66c(lVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      bVar1 = *(byte *)(*(long *)StringLiteral_7779 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)StringLiteral_7779
         )) {
        FUN_03a66fe0(plVar4,1);
        FUN_03a6b57c(in_stack_00000030,in_stack_00000008,plVar4,uStack0000000000000004,
                     uStack0000000000000000 & 1,in_stack_00000010._4_4_ & 1);
        uVar7 = thunk_FUN_0340e318(plVar8,*(undefined8 *)
                                           Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                                   ,0);
        uVar11 = 1;
        if ((uVar7 & 1) == 0) goto UnityEngine_InputSystem_Pointer__set_press;
        in_stack_00000028._4_1_ = '\x01';
        goto UnityEngine_InputSystem_Pointer__set_press;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar4);
    }
    uVar11 = 0;
    if ((unaff_w25 & 1) == 0) goto UnityEngine_InputSystem_Pointer__set_press;
    do {
      plVar8 = (long *)thunk_FUN_01f116d0(unaff_x28,
                                          *(undefined8 *)
                                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                         );
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar9 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03a6b190;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01ecb238(plVar8,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_03a6b190:
        (*(code *)*puVar9)(plVar8,puVar9[1]);
      }
      if (in_stack_00000038._4_1_ != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
                  (in_stack_00000020,0);
      }
      if (in_stack_00000028._4_1_ == '\0') {
        plVar8 = (long *)unaff_x20[2];
        if (plVar8 == (long *)0x0) goto LAB_03a6b4cc;
        plVar8 = (long *)(**(code **)(*plVar8 + 0x3b8))
                                   (plVar8,*(undefined8 *)
                                            Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                                    ,*(undefined8 *)(*plVar8 + 0x3c0));
        if (plVar8 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)StringLiteral_7779 + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)StringLiteral_7779)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar8);
          }
          FUN_03a66fe0(plVar8,1);
          FUN_03a6b57c(in_stack_00000030,in_stack_00000008,plVar8,uStack0000000000000004,
                       uStack0000000000000000 & 1,in_stack_00000010._4_4_ & 1);
        }
      }
      plVar8 = (long *)unaff_x20[2];
      if (plVar8 == (long *)0x0) {
LAB_03a6b4cc:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar2 = (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
      if (iVar2 == 0) {
        uVar6 = FUN_030f28e4(in_stack_00000018,unaff_w26,
                             *(undefined8 *)
                              Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
        FUN_03a678a4(in_stack_00000030,uVar6,0);
      }
      do {
        unaff_w26 = unaff_w26 + 1;
        if (*(int *)(in_stack_00000018 + 0x18) <= unaff_w26) {
          return;
        }
        plVar8 = *(long **)(in_stack_00000030 + 0x10);
        if (plVar8 == (long *)0x0) goto LAB_03a6b4cc;
        uVar6 = (**(code **)(*plVar8 + 0x3b8))(plVar8,*(undefined8 *)(*plVar8 + 0x3c0));
        in_stack_00000038._4_1_ = '\0';
        FUN_035ce230(uVar6,(long)&stack0x00000038 + 4,0);
        plVar8 = *(long **)(in_stack_00000030 + 0x10);
        uVar3 = FUN_030f28e4(in_stack_00000018,unaff_w26,
                             *(undefined8 *)
                              Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar3,uVar3);
        }
        unaff_x20 = (long *)(**(code **)(*plVar8 + 0x308))
                                      (plVar8,uVar3,*(undefined8 *)(*plVar8 + 0x310));
        if (unaff_x20 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)StringLiteral_7780 + 0x130);
          if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)StringLiteral_7780)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc();
          }
        }
        if (in_stack_00000038._4_1_ != '\0') {
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar6,0);
        }
      } while (unaff_x20 == (long *)0x0);
      plVar8 = (long *)unaff_x20[2];
      if (plVar8 == (long *)0x0) goto LAB_03a6b4cc;
      in_stack_00000020 = (**(code **)(*plVar8 + 0x308))(plVar8,*(undefined8 *)(*plVar8 + 0x310));
      in_stack_00000038._4_1_ = '\0';
      FUN_035ce230(in_stack_00000020,(long)&stack0x00000038 + 4,0);
      plVar8 = (long *)unaff_x20[2];
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      unaff_x28 = (long *)(**(code **)(*plVar8 + 0x378))(plVar8,*(undefined8 *)(*plVar8 + 0x380));
      uVar11 = 0;
      in_stack_00000028._4_1_ = '\0';
UnityEngine_InputSystem_Pointer__set_press:
      if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *unaff_x28;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x23) {
            puVar9 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03a6af8c;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(unaff_x28,*unaff_x23,0);
LAB_03a6af8c:
      uVar7 = (*(code *)*puVar9)(unaff_x28,puVar9[1]);
    } while ((uVar7 & 1) == 0);
    lVar5 = *unaff_x28;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x23) {
          puVar9 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_03a6afec;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(unaff_x28,*unaff_x23,1);
LAB_03a6afec:
    plVar8 = (long *)(*(code *)*puVar9)(unaff_x28,puVar9[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_1 = *plVar8;
    unaff_w25 = uVar11;
  } while( true );
}


