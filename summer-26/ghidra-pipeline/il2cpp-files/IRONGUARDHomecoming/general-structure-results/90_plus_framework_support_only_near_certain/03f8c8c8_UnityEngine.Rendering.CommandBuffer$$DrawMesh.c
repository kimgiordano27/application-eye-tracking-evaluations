/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$DrawMesh
ENTRY_POINT: 03f8c8c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_9;frame_or_lifecycle_behavior;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


undefined1  [16] UnityEngine_Rendering_CommandBuffer__DrawMesh(code *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  int iVar18;
  long unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long lVar19;
  long *unaff_x29;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  auVar21._8_8_ = unaff_x20;
  auVar21._0_8_ = unaff_x19;
  uVar6 = (*param_1)();
  lVar7 = thunk_FUN_01f117cc(*unaff_x28);
  FUN_030f23f0(lVar7,uVar6,*unaff_x27);
  lVar13 = *unaff_x24;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x21) {
        puVar8 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
        goto LAB_03f8c940;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03f8c940:
  uVar6 = (*(code *)*puVar8)();
  lVar13 = thunk_FUN_01f117cc(*unaff_x28);
  FUN_030f23f0(lVar13,uVar6,*unaff_x27);
  puVar3 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__;
  if (unaff_x25 != (long *)0x0) {
    bVar2 = true;
    do {
      lVar14 = *unaff_x25;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar8 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_03f8c9d0;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03f8c9d0:
      uVar15 = (*(code *)*puVar8)();
      uVar10 = in_stack_00000028;
      if ((uVar15 & 1) == 0) {
        if (bVar2) {
          if (*(int *)(*(long *)
                        Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar14 = FUN_03f8cf14();
          *in_stack_00000008 = lVar14;
          thunk_FUN_01f51358(in_stack_00000008,lVar14);
          if ((*in_stack_00000008 != 0) &&
             (lVar14 = FUN_03f8c2dc(), puVar4 = PTR_DAT_04581b38,
             puVar3 = Method_System_DBNull_System_IConvertible_ToDouble__, lVar7 != 0)) {
            if (*(int *)(lVar7 + 0x18) < 1) {
              return auVar21;
            }
            iVar18 = 0;
            while (((lVar19 = FUN_030f28e4(lVar7,iVar18,*(undefined8 *)puVar4), lVar13 != 0 &&
                    (uVar10 = FUN_030f28e4(lVar13,iVar18,*(undefined8 *)puVar4), lVar19 != 0)) &&
                   (uVar9 = FUN_03f8b518(lVar19), lVar14 != 0))) {
              FUN_02b6b2d0(lVar14,uVar9,uVar10,*(undefined8 *)puVar3);
              iVar18 = iVar18 + 1;
              if (*(int *)(lVar7 + 0x18) <= iVar18) {
                return auVar21;
              }
            }
          }
        }
        else if (lVar7 != 0) {
          uVar6 = *(undefined4 *)(lVar7 + 0x18);
          if (*(int *)(*(long *)
                        Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar14 = UnityEngine_Rendering_CommandBuffer__ClearRandomWriteTargets(uVar6);
          *in_stack_00000008 = lVar14;
          thunk_FUN_01f51358(in_stack_00000008,lVar14);
          if (*in_stack_00000008 != 0) {
            lVar14 = FUN_03f8a108();
            puVar4 = PTR_DAT_04581b38;
            puVar3 = Method_System_DBNull_System_IConvertible_ToDouble__;
            if (*(int *)(lVar7 + 0x18) < 1) {
              return auVar21;
            }
            iVar18 = 0;
            goto LAB_03f8cda8;
          }
        }
        break;
      }
      lVar14 = *unaff_x25;
      lVar19 = *(long *)(unaff_x22 + 0x10);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_03f8ca34;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03f8ca34:
      uVar9 = (*(code *)*puVar8)();
      if (lVar19 == 0) break;
      auVar20 = FUN_03fa041c(lVar19,uVar10,uVar9,&stack0x00000018,0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      auVar21 = FUN_03f8a724(auVar21._0_8_,auVar21._8_8_,auVar20._0_8_,auVar20._8_8_);
      uVar10 = in_stack_00000020;
      if ((auVar21._0_8_ & 0xff) == 0) {
        return auVar21;
      }
      lVar14 = *unaff_x25;
      lVar19 = *(long *)(unaff_x22 + 0x10);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_03f8caf0;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03f8caf0:
      uVar9 = (*(code *)*puVar8)();
      if (lVar19 == 0) break;
      auVar20 = FUN_03fa041c(lVar19,uVar10,uVar9,&stack0x00000010,0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      auVar21 = FUN_03f8a724(auVar21._0_8_,auVar21._8_8_,auVar20._0_8_,auVar20._8_8_);
      if ((auVar21._0_8_ & 0xff) == 0) {
        return auVar21;
      }
      if (lVar7 == 0) break;
      lVar14 = *(long *)(lVar7 + 0x10);
      lVar19 = *(long *)PTR_DAT_04581b10;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar14 == 0) break;
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000018;
        thunk_FUN_01f51358();
      }
      else {
        FUN_030f2bb4(lVar7,in_stack_00000018,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
      if (lVar13 == 0) break;
      lVar14 = *(long *)(lVar13 + 0x10);
      lVar19 = *(long *)PTR_DAT_04581b10;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar14 == 0) break;
      uVar1 = *(uint *)(lVar13 + 0x18);
      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000010;
        thunk_FUN_01f51358();
      }
      else {
        FUN_030f2bb4(lVar13,in_stack_00000010,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
      lVar14 = in_stack_00000018;
      if (in_stack_00000018 == 0) break;
      if ((DAT_0483b73e & 1) == 0) {
        thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
        DAT_0483b73e = 1;
      }
      bVar5 = false;
      if (*(long **)(lVar14 + 0x10) != (long *)0x0) {
        bVar5 = **(long **)(lVar14 + 0x10) ==
                *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
      }
      bVar2 = (bool)(bVar2 & bVar5);
    } while( true );
  }
LAB_03f8cf04:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_03f8cda8:
  uVar10 = FUN_030f28e4(lVar7,iVar18,*(undefined8 *)puVar4);
  if (lVar13 == 0) goto LAB_03f8cf04;
  uVar9 = FUN_030f28e4(lVar13,iVar18,*(undefined8 *)puVar4);
  lVar19 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Linq_Enumerable_FirstOrDefault<string>__)
  ;
  FUN_02b6aa68(lVar19,*(undefined8 *)Method_System_Linq_Enumerable_FirstOrDefault<Type>__);
  if (lVar19 == 0) goto LAB_03f8cf04;
  FUN_02b6b2d0(lVar19,*(undefined8 *)
                       Method_Oculus_Interaction_FirstHoverInteractorGroup_HandleBestInteractorStateChanged__
               ,uVar10,*(undefined8 *)puVar3);
  FUN_02b6b2d0(lVar19,*(undefined8 *)Method_Oculus_Interaction_FingerPinchValue_HandleHandUpdated__,
               uVar9,*(undefined8 *)puVar3);
  lVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                               Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__
                             );
  FUN_035ac8e8(lVar11,0);
  *(long *)(lVar11 + 0x10) = lVar19;
  thunk_FUN_01f51358((long *)(lVar11 + 0x10),lVar19);
  if (lVar14 == 0) goto LAB_03f8cf04;
  lVar19 = *(long *)(lVar14 + 0x10);
  lVar16 = *(long *)PTR_DAT_04581b10;
  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
  if (lVar19 == 0) goto LAB_03f8cf04;
  uVar1 = *(uint *)(lVar14 + 0x18);
  if (uVar1 < *(uint *)(lVar19 + 0x18)) {
    *(uint *)(lVar14 + 0x18) = uVar1 + 1;
    plVar12 = (long *)(lVar19 + (long)(int)uVar1 * 8 + 0x20);
    *plVar12 = lVar11;
    thunk_FUN_01f51358(plVar12,lVar11);
  }
  else {
    FUN_030f2bb4(lVar14,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
  }
  iVar18 = iVar18 + 1;
  if (*(int *)(lVar7 + 0x18) <= iVar18) {
    return auVar21;
  }
  goto LAB_03f8cda8;
}


