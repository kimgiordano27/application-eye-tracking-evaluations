/*
FUNCTION_NAME: UnityEngine.InputSystem.Pointer$$set_radius
ENTRY_POINT: 03a6af08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 201
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a6b1b8) */
/* WARNING: Removing unreachable block (ram,0x03a6b31c) */
/* WARNING: Removing unreachable block (ram,0x03a6b1e4) */
/* WARNING: Removing unreachable block (ram,0x03a6b4d8) */
/* WARNING: Removing unreachable block (ram,0x03a6b4d0) */

void UnityEngine_InputSystem_Pointer__set_radius(undefined8 param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w26;
  uint uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 uStack0000000000000020;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  
  do {
    uStack0000000000000020 = param_1;
    FUN_035ce230(param_1,param_2,0);
    plVar7 = (long *)unaff_x20[2];
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x378))(plVar7,*(undefined8 *)(*plVar7 + 0x380));
    bVar4 = false;
    bVar3 = false;
UnityEngine_InputSystem_Pointer__set_press:
    do {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar12 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x23) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03a6af8c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x23,0);
LAB_03a6af8c:
      uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar13 & 1) == 0) break;
      lVar12 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x23) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_03a6afec;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x23,1);
LAB_03a6afec:
      plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*unaff_x22 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      plVar10 = (long *)thunk_FUN_01f11920();
      plVar9 = (long *)*plVar10;
      plVar10 = (long *)plVar10[1];
      if ((plVar9 != (long *)0x0) &&
         (*plVar9 != *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar9);
      }
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar12 = FUN_039fd90c();
      uVar11 = FUN_03a64408(plVar9);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar11,uVar11);
      }
      uVar13 = FUN_0340e66c(lVar12,uVar11,0);
      if ((uVar13 & 1) != 0) {
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        bVar1 = *(byte *)(*(long *)StringLiteral_7779 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)StringLiteral_7779)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar10);
        }
        FUN_03a66fe0(plVar10,1);
        FUN_03a6b57c(in_stack_00000030,in_stack_00000008,plVar10,uStack0000000000000004,
                     uStack0000000000000000 & 1,in_stack_00000010._4_4_ & 1);
        uVar13 = thunk_FUN_0340e318(plVar9,*(undefined8 *)
                                            Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                                    ,0);
        bVar3 = true;
        if ((uVar13 & 1) != 0) {
          bVar4 = true;
        }
        goto UnityEngine_InputSystem_Pointer__set_press;
      }
      bVar2 = !bVar3;
      bVar3 = false;
    } while (bVar2);
    plVar7 = (long *)thunk_FUN_01f116d0(plVar7,*(undefined8 *)
                                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       );
    if (plVar7 != (long *)0x0) {
      lVar12 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03a6b190;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03a6b190:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
    }
    if (in_stack_00000038._4_1_ != '\0') {
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
                (uStack0000000000000020,0);
    }
    if (!bVar4) {
      plVar7 = (long *)unaff_x20[2];
      if (plVar7 == (long *)0x0) goto LAB_03a6b4cc;
      plVar7 = (long *)(**(code **)(*plVar7 + 0x3b8))
                                 (plVar7,*(undefined8 *)
                                          Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                                  ,*(undefined8 *)(*plVar7 + 0x3c0));
      if (plVar7 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)StringLiteral_7779 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)StringLiteral_7779)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar7);
        }
        FUN_03a66fe0(plVar7,1);
        FUN_03a6b57c(in_stack_00000030,in_stack_00000008,plVar7,uStack0000000000000004,
                     uStack0000000000000000 & 1,in_stack_00000010._4_4_ & 1);
      }
    }
    plVar7 = (long *)unaff_x20[2];
    if (plVar7 == (long *)0x0) {
LAB_03a6b4cc:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar5 = (**(code **)(*plVar7 + 0x2a8))(plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
    if (iVar5 == 0) {
      uVar11 = FUN_030f28e4(in_stack_00000018,unaff_w26,
                            *(undefined8 *)
                             Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
      FUN_03a678a4(in_stack_00000030,uVar11,0);
    }
    do {
      unaff_w26 = unaff_w26 + 1;
      if (*(int *)(in_stack_00000018 + 0x18) <= unaff_w26) {
        return;
      }
      plVar7 = *(long **)(in_stack_00000030 + 0x10);
      if (plVar7 == (long *)0x0) goto LAB_03a6b4cc;
      uVar11 = (**(code **)(*plVar7 + 0x3b8))(plVar7,*(undefined8 *)(*plVar7 + 0x3c0));
      in_stack_00000038._4_1_ = '\0';
      FUN_035ce230(uVar11,(long)&stack0x00000038 + 4,0);
      plVar7 = *(long **)(in_stack_00000030 + 0x10);
      uVar6 = FUN_030f28e4(in_stack_00000018,unaff_w26,
                           *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__
                          );
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar6,uVar6);
      }
      unaff_x20 = (long *)(**(code **)(*plVar7 + 0x308))
                                    (plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x310));
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
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar11,0);
      }
    } while (unaff_x20 == (long *)0x0);
    plVar7 = (long *)unaff_x20[2];
    if (plVar7 == (long *)0x0) goto LAB_03a6b4cc;
    param_1 = (**(code **)(*plVar7 + 0x308))(plVar7,*(undefined8 *)(*plVar7 + 0x310));
    in_stack_00000038._4_1_ = '\0';
    param_2 = (long)&stack0x00000038 + 4;
  } while( true );
}


