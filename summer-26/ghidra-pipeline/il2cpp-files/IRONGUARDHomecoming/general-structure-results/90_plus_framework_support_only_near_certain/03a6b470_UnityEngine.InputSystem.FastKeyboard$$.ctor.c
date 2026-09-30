/*
FUNCTION_NAME: UnityEngine.InputSystem.FastKeyboard$$.ctor
ENTRY_POINT: 03a6b470
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 166
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a6b31c) */
/* WARNING: Removing unreachable block (ram,0x03a6b4d0) */
/* WARNING: Removing unreachable block (ram,0x03a6b548) */

void UnityEngine_InputSystem_FastKeyboard___ctor(code *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w26;
  int unaff_w27;
  long unaff_x29;
  uint uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (*param_1)();
  if (unaff_x29 != 0) {
                    /* catch() { ... } // from try @ 03a6b4a0 with catch @ 03a6b4e8 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03a6b444 with catch @ 03a6b4ec */
    FUN_01eed990();
  }
  in_stack_00000028._4_1_ = in_stack_00000028._4_1_ & 1;
  if (unaff_w27 != 1) {
    if (in_stack_00000038._4_1_ != '\0') {
                    /* catch() { ... } // from try @ 03a6b524 with catch @ 03a6b538 */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
                (in_stack_00000020,0);
    }
                    /* try { // try from 03a6b53c to 03b6b557 has its CatchHandler @ 03a6b56c */
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14();
  }
  plVar10 = (long *)__cxa_begin_catch();
  lVar13 = *plVar10;
  __cxa_end_catch();
  iVar4 = 0;
  while( true ) {
    if (in_stack_00000038._4_1_ != '\0') {
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
                (in_stack_00000020,0);
    }
    if (lVar13 != 0) {
                    /* catch() { ... } // from try @ 03a6b4d0 with catch @ 03a6b4d8 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03a6b4c8 with catch @ 03a6b4dc */
      FUN_01eed990(lVar13);
    }
    if ((iVar4 != 9) && (iVar4 != 0)) {
                    /* catch() { ... } // from try @ 03a6b44c with catch @ 03a6b4ac */
                    /* try { // try from 03a6b4c8 to 03b6b4cb has its CatchHandler @ 03a6b4dc */
      return;
    }
    if (in_stack_00000028._4_1_ == 0) {
      plVar10 = (long *)unaff_x20[2];
      if (plVar10 == (long *)0x0) break;
      plVar10 = (long *)(**(code **)(*plVar10 + 0x3b8))
                                  (plVar10,*(undefined8 *)
                                            Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                                   ,*(undefined8 *)(*plVar10 + 0x3c0));
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)StringLiteral_7779 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)StringLiteral_7779)) {
                    /* try { // try from 03a6b4e0 to 03b6b503 has its CatchHandler @ 03a6b56c */
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar10);
        }
        FUN_03a66fe0(plVar10,1);
        FUN_03a6b57c(in_stack_00000030,in_stack_00000008,plVar10,uStack0000000000000004,
                     uStack0000000000000000 & 1,in_stack_00000010._4_4_ & 1);
      }
    }
    plVar10 = (long *)unaff_x20[2];
    if (plVar10 == (long *)0x0) break;
    iVar4 = (**(code **)(*plVar10 + 0x2a8))(plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
    if (iVar4 == 0) {
      uVar9 = FUN_030f28e4(in_stack_00000018,unaff_w26,
                           *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__
                          );
      FUN_03a678a4(in_stack_00000030,uVar9,0);
    }
    do {
      unaff_w26 = unaff_w26 + 1;
      if (*(int *)(in_stack_00000018 + 0x18) <= unaff_w26) {
        return;
      }
      plVar10 = *(long **)(in_stack_00000030 + 0x10);
      if (plVar10 == (long *)0x0) goto LAB_03a6b4cc;
      uVar9 = (**(code **)(*plVar10 + 0x3b8))(plVar10,*(undefined8 *)(*plVar10 + 0x3c0));
      in_stack_00000038._4_1_ = '\0';
      FUN_035ce230(uVar9,(long)&stack0x00000038 + 4,0);
      plVar10 = *(long **)(in_stack_00000030 + 0x10);
      uVar5 = FUN_030f28e4(in_stack_00000018,unaff_w26,
                           *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__
                          );
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar5,uVar5);
      }
      unaff_x20 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,uVar5,*(undefined8 *)(*plVar10 + 0x310));
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
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar9,0);
      }
    } while (unaff_x20 == (long *)0x0);
    plVar10 = (long *)unaff_x20[2];
    if (plVar10 == (long *)0x0) break;
    in_stack_00000020 = (**(code **)(*plVar10 + 0x308))(plVar10,*(undefined8 *)(*plVar10 + 0x310));
    in_stack_00000038._4_1_ = '\0';
    FUN_035ce230(in_stack_00000020,(long)&stack0x00000038 + 4,0);
    plVar10 = (long *)unaff_x20[2];
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x378))(plVar10,*(undefined8 *)(*plVar10 + 0x380));
    in_stack_00000028._4_1_ = 0;
    bVar3 = false;
UnityEngine_InputSystem_Pointer__set_press:
    do {
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar13 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x23) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03a6af8c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar10,*unaff_x23,0);
LAB_03a6af8c:
      uVar11 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      if ((uVar11 & 1) == 0) break;
      lVar13 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x23) {
            puVar6 = (undefined8 *)(lVar13 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_03a6afec;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar10,*unaff_x23,1);
LAB_03a6afec:
      plVar7 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar7 + 0x40) != *(long *)(*unaff_x22 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      plVar8 = (long *)thunk_FUN_01f11920();
      plVar7 = (long *)*plVar8;
      plVar8 = (long *)plVar8[1];
      if ((plVar7 != (long *)0x0) &&
         (*plVar7 != *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar7);
      }
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar13 = FUN_039fd90c();
      uVar9 = FUN_03a64408(plVar7);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar9,uVar9);
      }
      uVar11 = FUN_0340e66c(lVar13,uVar9,0);
      if ((uVar11 & 1) != 0) {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
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
        uVar11 = thunk_FUN_0340e318(plVar7,*(undefined8 *)
                                            Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                                    ,0);
        bVar3 = true;
        if ((uVar11 & 1) != 0) {
          in_stack_00000028._4_1_ = 1;
        }
        goto UnityEngine_InputSystem_Pointer__set_press;
      }
      bVar2 = !bVar3;
      bVar3 = false;
    } while (bVar2);
    iVar4 = 9;
    plVar10 = (long *)thunk_FUN_01f116d0(plVar10,*(undefined8 *)
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                        );
    if (plVar10 != (long *)0x0) {
      lVar13 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03a6b190;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar10,*(long *)
                                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03a6b190:
      (*(code *)*puVar6)(plVar10,puVar6[1]);
    }
    lVar13 = 0;
  }
LAB_03a6b4cc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


