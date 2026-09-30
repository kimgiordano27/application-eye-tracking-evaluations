/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$DrawRenderer
ENTRY_POINT: 03f8cb48
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 171
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


undefined1  [16]
UnityEngine_Rendering_CommandBuffer__DrawRenderer(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  undefined8 unaff_x19;
  byte unaff_w21;
  int iVar14;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long lVar15;
  long *unaff_x29;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = unaff_x19;
  do {
    if ((auVar17._0_8_ & 0xff) == 0) {
      return auVar17;
    }
    if (unaff_x23 == 0) goto LAB_03f8cf04;
    lVar10 = *(long *)(unaff_x23 + 0x10);
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_03f8cf04;
    uVar2 = *(uint *)(unaff_x23 + 0x18);
    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = in_stack_00000018;
      thunk_FUN_01f51358();
    }
    else {
      FUN_030f2bb4();
    }
    if (unaff_x24 == 0) goto LAB_03f8cf04;
    lVar10 = *(long *)(unaff_x24 + 0x10);
    *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_03f8cf04;
    uVar2 = *(uint *)(unaff_x24 + 0x18);
    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(unaff_x24 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = in_stack_00000010;
      thunk_FUN_01f51358();
    }
    else {
      FUN_030f2bb4();
    }
    lVar10 = in_stack_00000018;
    if (in_stack_00000018 == 0) goto LAB_03f8cf04;
    if ((DAT_0483b73e & 1) == 0) {
      thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
      DAT_0483b73e = 1;
    }
    bVar4 = false;
    if (*(long **)(lVar10 + 0x10) != (long *)0x0) {
      bVar4 = **(long **)(lVar10 + 0x10) ==
              *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
    }
    unaff_w21 = unaff_w21 & bVar4;
    lVar10 = *unaff_x25;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03f8c9d0;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03f8c9d0:
    uVar11 = (*(code *)*puVar5)();
    uVar7 = in_stack_00000028;
    if ((uVar11 & 1) == 0) {
      if (unaff_w21 != 0) {
        if (*(int *)(*(long *)
                      Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar10 = FUN_03f8cf14();
        *in_stack_00000008 = lVar10;
        thunk_FUN_01f51358(in_stack_00000008,lVar10);
        if ((*in_stack_00000008 != 0) &&
           (lVar10 = FUN_03f8c2dc(), puVar3 = Method_System_DBNull_System_IConvertible_ToDouble__,
           unaff_x23 != 0)) {
          if (*(int *)(unaff_x23 + 0x18) < 1) {
            return auVar17;
          }
          iVar14 = 0;
          while (((lVar15 = FUN_030f28e4(), unaff_x24 != 0 && (uVar7 = FUN_030f28e4(), lVar15 != 0))
                 && (uVar6 = FUN_03f8b518(lVar15), lVar10 != 0))) {
            FUN_02b6b2d0(lVar10,uVar6,uVar7,*(undefined8 *)puVar3);
            iVar14 = iVar14 + 1;
            if (*(int *)(unaff_x23 + 0x18) <= iVar14) {
              return auVar17;
            }
          }
        }
        goto LAB_03f8cf04;
      }
      if (unaff_x23 == 0) goto LAB_03f8cf04;
      uVar1 = *(undefined4 *)(unaff_x23 + 0x18);
      if (*(int *)(*(long *)
                    Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__ +
                  0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar10 = UnityEngine_Rendering_CommandBuffer__ClearRandomWriteTargets(uVar1);
      *in_stack_00000008 = lVar10;
      thunk_FUN_01f51358(in_stack_00000008,lVar10);
      if (*in_stack_00000008 == 0) goto LAB_03f8cf04;
      lVar10 = FUN_03f8a108();
      puVar3 = Method_System_DBNull_System_IConvertible_ToDouble__;
      if (*(int *)(unaff_x23 + 0x18) < 1) {
        return auVar17;
      }
      iVar14 = 0;
      break;
    }
    lVar10 = *unaff_x25;
    lVar15 = *(long *)(unaff_x22 + 0x10);
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03f8ca34;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03f8ca34:
    uVar6 = (*(code *)*puVar5)();
    if (lVar15 == 0) goto LAB_03f8cf04;
    auVar16 = FUN_03fa041c(lVar15,uVar7,uVar6,&stack0x00000018,0);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    auVar17 = FUN_03f8a724(auVar17._0_8_,auVar17._8_8_,auVar16._0_8_,auVar16._8_8_);
    uVar7 = in_stack_00000020;
    if ((auVar17._0_8_ & 0xff) == 0) {
      return auVar17;
    }
    lVar10 = *unaff_x25;
    lVar15 = *(long *)(unaff_x22 + 0x10);
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_03f8caf0;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03f8caf0:
    uVar6 = (*(code *)*puVar5)();
    if (lVar15 == 0) goto LAB_03f8cf04;
    auVar16 = FUN_03fa041c(lVar15,uVar7,uVar6,&stack0x00000010,0);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    auVar17 = FUN_03f8a724(auVar17._0_8_,auVar17._8_8_,auVar16._0_8_,auVar16._8_8_);
  } while( true );
LAB_03f8cda8:
  uVar7 = FUN_030f28e4();
  if (unaff_x24 == 0) {
LAB_03f8cf04:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar6 = FUN_030f28e4();
  lVar15 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Linq_Enumerable_FirstOrDefault<string>__)
  ;
  FUN_02b6aa68(lVar15,*(undefined8 *)Method_System_Linq_Enumerable_FirstOrDefault<Type>__);
  if (lVar15 == 0) goto LAB_03f8cf04;
  FUN_02b6b2d0(lVar15,*(undefined8 *)
                       Method_Oculus_Interaction_FirstHoverInteractorGroup_HandleBestInteractorStateChanged__
               ,uVar7,*(undefined8 *)puVar3);
  FUN_02b6b2d0(lVar15,*(undefined8 *)Method_Oculus_Interaction_FingerPinchValue_HandleHandUpdated__,
               uVar6,*(undefined8 *)puVar3);
  lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__
                            );
  FUN_035ac8e8(lVar8,0);
  *(long *)(lVar8 + 0x10) = lVar15;
  thunk_FUN_01f51358((long *)(lVar8 + 0x10),lVar15);
  if (lVar10 == 0) goto LAB_03f8cf04;
  lVar15 = *(long *)(lVar10 + 0x10);
  lVar12 = *(long *)PTR_DAT_04581b10;
  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
  if (lVar15 == 0) goto LAB_03f8cf04;
  uVar2 = *(uint *)(lVar10 + 0x18);
  if (uVar2 < *(uint *)(lVar15 + 0x18)) {
    *(uint *)(lVar10 + 0x18) = uVar2 + 1;
    plVar9 = (long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
    *plVar9 = lVar8;
    thunk_FUN_01f51358(plVar9,lVar8);
  }
  else {
    FUN_030f2bb4(lVar10,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
  }
  iVar14 = iVar14 + 1;
  if (*(int *)(unaff_x23 + 0x18) <= iVar14) {
    return auVar17;
  }
  goto LAB_03f8cda8;
}


