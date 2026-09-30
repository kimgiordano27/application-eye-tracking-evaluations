/*
FUNCTION_NAME: UnityEngine.InputSystem.Pointer$$get_press
ENTRY_POINT: 03a6af30
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

void UnityEngine_InputSystem_Pointer__get_press(void)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w26;
  long *unaff_x28;
  uint uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  uint uStack000000000000002c;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  
  do {
                    /* try { // try from 03a6af34 to 03b6af3b has its CatchHandler @ 03a6b010 */
    uStack000000000000002c = 0;
    bVar4 = false;
UnityEngine_InputSystem_Pointer__set_press:
    do {
      if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = *unaff_x28;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x23) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03a6af8c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(unaff_x28,*unaff_x23,0);
LAB_03a6af8c:
      uVar12 = (*(code *)*puVar7)(unaff_x28,puVar7[1]);
      if ((uVar12 & 1) == 0) break;
      lVar11 = *unaff_x28;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x23) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_03a6afec;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(unaff_x28,*unaff_x23,1);
LAB_03a6afec:
      plVar8 = (long *)(*(code *)*puVar7)(unaff_x28,puVar7[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar8 + 0x40) != *(long *)(*unaff_x22 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      plVar9 = (long *)thunk_FUN_01f11920();
      plVar8 = (long *)*plVar9;
      plVar9 = (long *)plVar9[1];
      if ((plVar8 != (long *)0x0) &&
         (*plVar8 != *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar8);
      }
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = FUN_039fd90c();
      uVar10 = FUN_03a64408(plVar8);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar10,uVar10);
      }
      uVar12 = FUN_0340e66c(lVar11,uVar10,0);
      if ((uVar12 & 1) != 0) {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        bVar1 = *(byte *)(*(long *)StringLiteral_7779 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)StringLiteral_7779)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar9);
        }
        FUN_03a66fe0(plVar9,1);
        FUN_03a6b57c(in_stack_00000030,in_stack_00000008,plVar9,uStack0000000000000004,
                     uStack0000000000000000 & 1,in_stack_00000010._4_4_ & 1);
        uVar12 = thunk_FUN_0340e318(plVar8,*(undefined8 *)
                                            Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                                    ,0);
        bVar4 = true;
        if ((uVar12 & 1) != 0) {
          uStack000000000000002c = 1;
        }
        goto UnityEngine_InputSystem_Pointer__set_press;
      }
      bVar3 = !bVar4;
      bVar4 = false;
    } while (bVar3);
    plVar8 = (long *)thunk_FUN_01f116d0(unaff_x28,
                                        *(undefined8 *)
                                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       );
    if (plVar8 != (long *)0x0) {
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03a6b190;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar8,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03a6b190:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
    }
    uVar2 = uStack000000000000002c & 0xff;
    if (in_stack_00000038._4_1_ != '\0') {
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
                (in_stack_00000020,0);
    }
    if (uVar2 == 0) {
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
    iVar5 = (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
    if (iVar5 == 0) {
      uVar10 = FUN_030f28e4(in_stack_00000018,unaff_w26,
                            *(undefined8 *)
                             Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
      FUN_03a678a4(in_stack_00000030,uVar10,0);
    }
    do {
      unaff_w26 = unaff_w26 + 1;
      if (*(int *)(in_stack_00000018 + 0x18) <= unaff_w26) {
        return;
      }
      plVar8 = *(long **)(in_stack_00000030 + 0x10);
      if (plVar8 == (long *)0x0) goto LAB_03a6b4cc;
      uVar10 = (**(code **)(*plVar8 + 0x3b8))(plVar8,*(undefined8 *)(*plVar8 + 0x3c0));
      in_stack_00000038._4_1_ = '\0';
      FUN_035ce230(uVar10,(long)&stack0x00000038 + 4,0);
      plVar8 = *(long **)(in_stack_00000030 + 0x10);
      uVar6 = FUN_030f28e4(in_stack_00000018,unaff_w26,
                           *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__
                          );
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar6,uVar6);
      }
      unaff_x20 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,uVar6,*(undefined8 *)(*plVar8 + 0x310));
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
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar10,0);
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
  } while( true );
}


