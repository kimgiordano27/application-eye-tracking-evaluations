/*
FUNCTION_NAME: UnityEngine.InputSystem.Pointer$$set_press
ENTRY_POINT: 03a6af38
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

void UnityEngine_InputSystem_Pointer__set_press(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w26;
  uint unaff_w27;
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
  
code_r0x03a6af38:
  do {
    if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
                    /* catch() { ... } // from try @ 03a6aed0 with catch @ 03a6af3c
                       try { // try from 03a6af3c to 03b6af5b has its CatchHandler @ 03a6ad64 */
    lVar9 = *unaff_x28;
                    /* catch() { ... } // from try @ 03a6aee4 with catch @ 03a6af44 */
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x23) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03a6af8c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(unaff_x28,*unaff_x23,0);
LAB_03a6af8c:
    uVar10 = (*(code *)*puVar5)(unaff_x28,puVar5[1]);
    if ((uVar10 & 1) == 0) {
LAB_03a6b11c:
      plVar6 = (long *)thunk_FUN_01f116d0(unaff_x28,
                                          *(undefined8 *)
                                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                         );
      if (plVar6 != (long *)0x0) {
        lVar9 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03a6b190;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01ecb238(plVar6,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_03a6b190:
        (*(code *)*puVar5)(plVar6,puVar5[1]);
      }
      if (in_stack_00000038._4_1_ != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
                  (in_stack_00000020,0);
      }
      if (in_stack_00000028._4_1_ == '\0') {
        plVar6 = (long *)unaff_x20[2];
        if (plVar6 == (long *)0x0) goto LAB_03a6b4cc;
        plVar6 = (long *)(**(code **)(*plVar6 + 0x3b8))
                                   (plVar6,*(undefined8 *)
                                            Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                                    ,*(undefined8 *)(*plVar6 + 0x3c0));
        if (plVar6 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)StringLiteral_7779 + 0x130);
          if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)StringLiteral_7779)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar6);
          }
          FUN_03a66fe0(plVar6,1);
          FUN_03a6b57c(in_stack_00000030,in_stack_00000008,plVar6,uStack0000000000000004,
                       uStack0000000000000000 & 1,in_stack_00000010._4_4_ & 1);
        }
      }
      plVar6 = (long *)unaff_x20[2];
      if (plVar6 != (long *)0x0) {
        iVar3 = (**(code **)(*plVar6 + 0x2a8))(plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
        if (iVar3 == 0) {
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
          plVar6 = *(long **)(in_stack_00000030 + 0x10);
          if (plVar6 == (long *)0x0) goto LAB_03a6b4cc;
          uVar8 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0));
          in_stack_00000038._4_1_ = '\0';
          FUN_035ce230(uVar8,(long)&stack0x00000038 + 4,0);
          plVar6 = *(long **)(in_stack_00000030 + 0x10);
          uVar4 = FUN_030f28e4(in_stack_00000018,unaff_w26,
                               *(undefined8 *)
                                Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(uVar4,uVar4);
          }
          unaff_x20 = (long *)(**(code **)(*plVar6 + 0x308))
                                        (plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x310));
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
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
                      (uVar8,0);
          }
        } while (unaff_x20 == (long *)0x0);
        plVar6 = (long *)unaff_x20[2];
        if (plVar6 != (long *)0x0) {
          in_stack_00000020 =
               (**(code **)(*plVar6 + 0x308))(plVar6,*(undefined8 *)(*plVar6 + 0x310));
          in_stack_00000038._4_1_ = '\0';
          FUN_035ce230(in_stack_00000020,(long)&stack0x00000038 + 4,0);
          plVar6 = (long *)unaff_x20[2];
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          unaff_x28 = (long *)(**(code **)(*plVar6 + 0x378))
                                        (plVar6,*(undefined8 *)(*plVar6 + 0x380));
          unaff_w27 = 0;
          in_stack_00000028._4_1_ = '\0';
          goto code_r0x03a6af38;
        }
      }
LAB_03a6b4cc:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *unaff_x28;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x23) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_03a6afec;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(unaff_x28,*unaff_x23,1);
LAB_03a6afec:
    plVar6 = (long *)(*(code *)*puVar5)(unaff_x28,puVar5[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar6 + 0x40) != *(long *)(*unaff_x22 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    plVar7 = (long *)thunk_FUN_01f11920();
    plVar6 = (long *)*plVar7;
    plVar7 = (long *)plVar7[1];
    if ((plVar6 != (long *)0x0) &&
       (*plVar6 != *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar6);
    }
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = FUN_039fd90c();
    uVar8 = FUN_03a64408(plVar6);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar8,uVar8);
    }
    uVar10 = FUN_0340e66c(lVar9,uVar8,0);
    if ((uVar10 & 1) == 0) {
      uVar2 = unaff_w27 & 1;
      unaff_w27 = 0;
      if (uVar2 != 0) goto LAB_03a6b11c;
    }
    else {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      bVar1 = *(byte *)(*(long *)StringLiteral_7779 + 0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_7779
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar7);
      }
      FUN_03a66fe0(plVar7,1);
      FUN_03a6b57c(in_stack_00000030,in_stack_00000008,plVar7,uStack0000000000000004,
                   uStack0000000000000000 & 1,in_stack_00000010._4_4_ & 1);
      uVar10 = thunk_FUN_0340e318(plVar6,*(undefined8 *)
                                          Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                                  ,0);
      unaff_w27 = 1;
      if ((uVar10 & 1) != 0) {
        in_stack_00000028._4_1_ = '\x01';
      }
    }
  } while( true );
}


