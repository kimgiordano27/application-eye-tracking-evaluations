/*
FUNCTION_NAME: UnityEngine.InputSystem.Pointer$$set_current
ENTRY_POINT: 03a6afa8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 201
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a6b1b8) */
/* WARNING: Removing unreachable block (ram,0x03a6b31c) */
/* WARNING: Removing unreachable block (ram,0x03a6b1e4) */
/* WARNING: Removing unreachable block (ram,0x03a6b4d8) */
/* WARNING: Removing unreachable block (ram,0x03a6b4d0) */

void UnityEngine_InputSystem_Pointer__set_current(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong in_x9;
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
    if (in_x9 != 0) {
      piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == param_3) {
          puVar4 = (undefined8 *)(param_1 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_03a6afec;
        }
        in_x9 = in_x9 - 1;
        piVar10 = piVar10 + 4;
      } while (in_x9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(unaff_x28,param_3,1);
LAB_03a6afec:
    plVar5 = (long *)(*(code *)*puVar4)(unaff_x28,puVar4[1]);
                    /* try { // try from 03a6aff8 to 03b6afff has its CatchHandler @ 03a6b000 */
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar5 + 0x40) != *(long *)(*unaff_x22 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    plVar6 = (long *)thunk_FUN_01f11920();
    plVar5 = (long *)*plVar6;
    plVar6 = (long *)plVar6[1];
    if ((plVar5 != (long *)0x0) &&
       (*plVar5 != *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar5);
    }
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = FUN_039fd90c();
    uVar8 = FUN_03a64408(plVar5);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar8,uVar8);
    }
    uVar9 = FUN_0340e66c(lVar7,uVar8,0);
    if ((uVar9 & 1) != 0) {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      bVar1 = *(byte *)(*(long *)StringLiteral_7779 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)StringLiteral_7779
         )) {
        FUN_03a66fe0(plVar6,1);
        FUN_03a6b57c(in_stack_00000030,in_stack_00000008,plVar6,uStack0000000000000004,
                     uStack0000000000000000 & 1,in_stack_00000010._4_4_ & 1);
        uVar9 = thunk_FUN_0340e318(plVar5,*(undefined8 *)
                                           Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                                   ,0);
        uVar11 = 1;
        if ((uVar9 & 1) == 0) goto UnityEngine_InputSystem_Pointer__set_press;
        in_stack_00000028._4_1_ = '\x01';
        goto UnityEngine_InputSystem_Pointer__set_press;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar6);
    }
    uVar11 = 0;
    if ((unaff_w25 & 1) == 0) goto UnityEngine_InputSystem_Pointer__set_press;
    do {
      plVar5 = (long *)thunk_FUN_01f116d0(unaff_x28,
                                          *(undefined8 *)
                                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                         );
      if (plVar5 != (long *)0x0) {
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03a6b190;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01ecb238(plVar5,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_03a6b190:
        (*(code *)*puVar4)(plVar5,puVar4[1]);
      }
      if (in_stack_00000038._4_1_ != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
                  (in_stack_00000020,0);
      }
      if (in_stack_00000028._4_1_ == '\0') {
        plVar5 = (long *)unaff_x20[2];
        if (plVar5 == (long *)0x0) goto LAB_03a6b4cc;
        plVar5 = (long *)(**(code **)(*plVar5 + 0x3b8))
                                   (plVar5,*(undefined8 *)
                                            Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                                    ,*(undefined8 *)(*plVar5 + 0x3c0));
        if (plVar5 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)StringLiteral_7779 + 0x130);
          if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)StringLiteral_7779)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar5);
          }
          FUN_03a66fe0(plVar5,1);
          FUN_03a6b57c(in_stack_00000030,in_stack_00000008,plVar5,uStack0000000000000004,
                       uStack0000000000000000 & 1,in_stack_00000010._4_4_ & 1);
        }
      }
      plVar5 = (long *)unaff_x20[2];
      if (plVar5 == (long *)0x0) {
LAB_03a6b4cc:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar2 = (**(code **)(*plVar5 + 0x2a8))(plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
      if (iVar2 == 0) {
        uVar8 = FUN_030f28e4(in_stack_00000018,unaff_w26,
                             *(undefined8 *)
                              Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
        FUN_03a678a4(in_stack_00000030,uVar8,0);
      }
      do {
        unaff_w26 = unaff_w26 + 1;
        if (*(int *)(in_stack_00000018 + 0x18) <= unaff_w26) {
          return;
        }
        plVar5 = *(long **)(in_stack_00000030 + 0x10);
        if (plVar5 == (long *)0x0) goto LAB_03a6b4cc;
        uVar8 = (**(code **)(*plVar5 + 0x3b8))(plVar5,*(undefined8 *)(*plVar5 + 0x3c0));
        in_stack_00000038._4_1_ = '\0';
        FUN_035ce230(uVar8,(long)&stack0x00000038 + 4,0);
        plVar5 = *(long **)(in_stack_00000030 + 0x10);
        uVar3 = FUN_030f28e4(in_stack_00000018,unaff_w26,
                             *(undefined8 *)
                              Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar3,uVar3);
        }
        unaff_x20 = (long *)(**(code **)(*plVar5 + 0x308))
                                      (plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x310));
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
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar8,0);
        }
      } while (unaff_x20 == (long *)0x0);
      plVar5 = (long *)unaff_x20[2];
      if (plVar5 == (long *)0x0) goto LAB_03a6b4cc;
      in_stack_00000020 = (**(code **)(*plVar5 + 0x308))(plVar5,*(undefined8 *)(*plVar5 + 0x310));
      in_stack_00000038._4_1_ = '\0';
      FUN_035ce230(in_stack_00000020,(long)&stack0x00000038 + 4,0);
      plVar5 = (long *)unaff_x20[2];
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      unaff_x28 = (long *)(**(code **)(*plVar5 + 0x378))(plVar5,*(undefined8 *)(*plVar5 + 0x380));
      uVar11 = 0;
      in_stack_00000028._4_1_ = '\0';
UnityEngine_InputSystem_Pointer__set_press:
      if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *unaff_x28;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x23) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03a6af8c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(unaff_x28,*unaff_x23,0);
LAB_03a6af8c:
      uVar9 = (*(code *)*puVar4)(unaff_x28,puVar4[1]);
    } while ((uVar9 & 1) == 0);
    param_1 = *unaff_x28;
    param_3 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_w25 = uVar11;
  } while( true );
}


