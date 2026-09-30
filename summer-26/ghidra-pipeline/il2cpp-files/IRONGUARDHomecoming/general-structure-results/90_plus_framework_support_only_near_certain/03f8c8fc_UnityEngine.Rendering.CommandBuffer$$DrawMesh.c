/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$DrawMesh
ENTRY_POINT: 03f8c8fc
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


undefined1  [16]
UnityEngine_Rendering_CommandBuffer__DrawMesh(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long in_x9;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  int iVar17;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long lVar18;
  long *unaff_x29;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  auVar20._8_8_ = unaff_x20;
  auVar20._0_8_ = unaff_x19;
  if (in_x9 != 0) {
    piVar16 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == param_3) {
        puVar7 = (undefined8 *)(param_1 + (long)(*piVar16 + 1) * 0x10 + 0x138);
        goto LAB_03f8c940;
      }
      in_x9 = in_x9 + -1;
      piVar16 = piVar16 + 4;
    } while (in_x9 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238();
LAB_03f8c940:
  uVar6 = (*(code *)*puVar7)();
  lVar8 = thunk_FUN_01f117cc(*unaff_x28);
  FUN_030f23f0(lVar8,uVar6,*unaff_x27);
  puVar3 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__;
  if (unaff_x25 != (long *)0x0) {
    bVar2 = true;
    do {
      lVar13 = *unaff_x25;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_03f8c9d0;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238();
LAB_03f8c9d0:
      uVar14 = (*(code *)*puVar7)();
      uVar10 = in_stack_00000028;
      if ((uVar14 & 1) == 0) {
        if (bVar2) {
          if (*(int *)(*(long *)
                        Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar13 = FUN_03f8cf14();
          *in_stack_00000008 = lVar13;
          thunk_FUN_01f51358(in_stack_00000008,lVar13);
          if ((*in_stack_00000008 != 0) &&
             (lVar13 = FUN_03f8c2dc(), puVar4 = PTR_DAT_04581b38,
             puVar3 = Method_System_DBNull_System_IConvertible_ToDouble__, unaff_x23 != 0)) {
            if (*(int *)(unaff_x23 + 0x18) < 1) {
              return auVar20;
            }
            iVar17 = 0;
            while (((lVar18 = FUN_030f28e4(), lVar8 != 0 &&
                    (uVar10 = FUN_030f28e4(lVar8,iVar17,*(undefined8 *)puVar4), lVar18 != 0)) &&
                   (uVar9 = FUN_03f8b518(lVar18), lVar13 != 0))) {
              FUN_02b6b2d0(lVar13,uVar9,uVar10,*(undefined8 *)puVar3);
              iVar17 = iVar17 + 1;
              if (*(int *)(unaff_x23 + 0x18) <= iVar17) {
                return auVar20;
              }
            }
          }
        }
        else if (unaff_x23 != 0) {
          uVar6 = *(undefined4 *)(unaff_x23 + 0x18);
          if (*(int *)(*(long *)
                        Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar13 = UnityEngine_Rendering_CommandBuffer__ClearRandomWriteTargets(uVar6);
          *in_stack_00000008 = lVar13;
          thunk_FUN_01f51358(in_stack_00000008,lVar13);
          if (*in_stack_00000008 != 0) {
            lVar13 = FUN_03f8a108();
            puVar4 = PTR_DAT_04581b38;
            puVar3 = Method_System_DBNull_System_IConvertible_ToDouble__;
            if (*(int *)(unaff_x23 + 0x18) < 1) {
              return auVar20;
            }
            iVar17 = 0;
            goto LAB_03f8cda8;
          }
        }
        break;
      }
      lVar13 = *unaff_x25;
      lVar18 = *(long *)(unaff_x22 + 0x10);
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_03f8ca34;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238();
LAB_03f8ca34:
      uVar9 = (*(code *)*puVar7)();
      if (lVar18 == 0) break;
      auVar19 = FUN_03fa041c(lVar18,uVar10,uVar9,&stack0x00000018,0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      auVar20 = FUN_03f8a724(auVar20._0_8_,auVar20._8_8_,auVar19._0_8_,auVar19._8_8_);
      uVar10 = in_stack_00000020;
      if ((auVar20._0_8_ & 0xff) == 0) {
        return auVar20;
      }
      lVar13 = *unaff_x25;
      lVar18 = *(long *)(unaff_x22 + 0x10);
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_03f8caf0;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238();
LAB_03f8caf0:
      uVar9 = (*(code *)*puVar7)();
      if (lVar18 == 0) break;
      auVar19 = FUN_03fa041c(lVar18,uVar10,uVar9,&stack0x00000010,0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      auVar20 = FUN_03f8a724(auVar20._0_8_,auVar20._8_8_,auVar19._0_8_,auVar19._8_8_);
      if ((auVar20._0_8_ & 0xff) == 0) {
        return auVar20;
      }
      if (unaff_x23 == 0) break;
      lVar13 = *(long *)(unaff_x23 + 0x10);
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      if (lVar13 == 0) break;
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
        *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000018;
        thunk_FUN_01f51358();
      }
      else {
        FUN_030f2bb4();
      }
      if (lVar8 == 0) break;
      lVar13 = *(long *)(lVar8 + 0x10);
      lVar18 = *(long *)PTR_DAT_04581b10;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar13 == 0) break;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000010;
        thunk_FUN_01f51358();
      }
      else {
        FUN_030f2bb4(lVar8,in_stack_00000010,
                     *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
      }
      lVar13 = in_stack_00000018;
      if (in_stack_00000018 == 0) break;
      if ((DAT_0483b73e & 1) == 0) {
        thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
        DAT_0483b73e = 1;
      }
      bVar5 = false;
      if (*(long **)(lVar13 + 0x10) != (long *)0x0) {
        bVar5 = **(long **)(lVar13 + 0x10) ==
                *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
      }
      bVar2 = (bool)(bVar2 & bVar5);
    } while( true );
  }
LAB_03f8cf04:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_03f8cda8:
  uVar10 = FUN_030f28e4();
  if (lVar8 == 0) goto LAB_03f8cf04;
  uVar9 = FUN_030f28e4(lVar8,iVar17,*(undefined8 *)puVar4);
  lVar18 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Linq_Enumerable_FirstOrDefault<string>__)
  ;
  FUN_02b6aa68(lVar18,*(undefined8 *)Method_System_Linq_Enumerable_FirstOrDefault<Type>__);
  if (lVar18 == 0) goto LAB_03f8cf04;
  FUN_02b6b2d0(lVar18,*(undefined8 *)
                       Method_Oculus_Interaction_FirstHoverInteractorGroup_HandleBestInteractorStateChanged__
               ,uVar10,*(undefined8 *)puVar3);
  FUN_02b6b2d0(lVar18,*(undefined8 *)Method_Oculus_Interaction_FingerPinchValue_HandleHandUpdated__,
               uVar9,*(undefined8 *)puVar3);
  lVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                               Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__
                             );
  FUN_035ac8e8(lVar11,0);
  *(long *)(lVar11 + 0x10) = lVar18;
  thunk_FUN_01f51358((long *)(lVar11 + 0x10),lVar18);
  if (lVar13 == 0) goto LAB_03f8cf04;
  lVar18 = *(long *)(lVar13 + 0x10);
  lVar15 = *(long *)PTR_DAT_04581b10;
  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
  if (lVar18 == 0) goto LAB_03f8cf04;
  uVar1 = *(uint *)(lVar13 + 0x18);
  if (uVar1 < *(uint *)(lVar18 + 0x18)) {
    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
    plVar12 = (long *)(lVar18 + (long)(int)uVar1 * 8 + 0x20);
    *plVar12 = lVar11;
    thunk_FUN_01f51358(plVar12,lVar11);
  }
  else {
    FUN_030f2bb4(lVar13,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
  }
  iVar17 = iVar17 + 1;
  if (*(int *)(unaff_x23 + 0x18) <= iVar17) {
    return auVar20;
  }
  goto LAB_03f8cda8;
}


