/*
FUNCTION_NAME: UnityEngine.InputSystem.InputControlExtensions.DeviceBuilder$$WithShortDisplayName
ENTRY_POINT: 03a61494
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 178
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a61b0c) */
/* WARNING: Removing unreachable block (ram,0x03a619f8) */
/* WARNING: Removing unreachable block (ram,0x03a61a88) */
/* WARNING: Removing unreachable block (ram,0x03a61b28) */

long * UnityEngine_InputSystem_InputControlExtensions_DeviceBuilder__WithShortDisplayName(void)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined4 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long *unaff_x19;
  undefined8 uVar20;
  undefined4 unaff_w21;
  int iVar21;
  long *plVar22;
  long *plVar23;
  long *unaff_x26;
  long *unaff_x27;
  undefined4 in_stack_00000008;
  char cStack000000000000000c;
  
  puVar4 = Method_System_Reflection_RuntimePropertyInfo_GetObjectData__;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar9 = (long *)(**(code **)(*unaff_x19 + 0x308))();
  if (plVar9 != (long *)0x0) {
    lVar16 = *plVar9;
    bVar3 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(lVar16 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    plVar9 = (long *)(**(code **)(lVar16 + 0x198))(plVar9,*(undefined8 *)(lVar16 + 0x1a0));
    if (plVar9 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)StringLiteral_7678 + 0x130);
      if ((bVar3 <= *(byte *)(*plVar9 + 0x130)) &&
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) == *(long *)StringLiteral_7678
         )) {
        return plVar9;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar9);
    }
  }
  lVar16 = *unaff_x26;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar16 = *unaff_x26;
  }
  uVar20 = *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8);
  cStack000000000000000c = '\0';
  FUN_035ce230(uVar20,&stack0x0000000c,0);
  lVar16 = *unaff_x26;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar16 = *unaff_x26;
  }
  plVar9 = *(long **)(*(long *)(lVar16 + 0xb8) + 0x38);
  in_stack_00000008 = unaff_w21;
  uVar10 = thunk_FUN_01f113fc(*unaff_x27,&stack0x00000008);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar10,uVar10);
  }
  plVar9 = (long *)(**(code **)(*plVar9 + 0x308))(plVar9,uVar10,*(undefined8 *)(*plVar9 + 0x310));
  if (plVar9 == (long *)0x0) {
    lVar16 = *(long *)StringLiteral_7678;
  }
  else {
    lVar16 = *plVar9;
    bVar3 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(lVar16 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    plVar9 = (long *)(**(code **)(lVar16 + 0x198))(plVar9,*(undefined8 *)(lVar16 + 0x1a0));
    lVar16 = *(long *)StringLiteral_7678;
    if (plVar9 != (long *)0x0) {
      if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar16 + 0x130)) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8) != lVar16)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar9);
      }
      goto LAB_03a61714;
    }
  }
  plVar9 = (long *)thunk_FUN_01f117cc(lVar16);
  FUN_03a612ac(plVar9,unaff_w21);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
  FUN_035c455c(uVar10,plVar9,0);
  lVar16 = *unaff_x26;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar16 = *unaff_x26;
  }
  lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0302d104(lVar16,uVar10,*(undefined8 *)StringLiteral_7677);
  plVar22 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 0x38);
  in_stack_00000008 = unaff_w21;
  uVar11 = thunk_FUN_01f113fc(*unaff_x27,&stack0x00000008);
  if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar11,uVar11);
  }
  (**(code **)(*plVar22 + 0x318))(plVar22,uVar11,uVar10,*(undefined8 *)(*plVar22 + 800));
  uVar1 = *(int *)(*(long *)(*unaff_x26 + 0xb8) + 0x30) + 1;
  *(uint *)(*(long *)(*unaff_x26 + 0xb8) + 0x30) = uVar1;
  if ((uVar1 & 0x1f) == 0) {
    lVar16 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<BoneWeight>__ctor__);
    FUN_030ba0b0(lVar16,*(undefined8 *)
                         Method_Unity_Collections_NativeArray<BezierKnot>_GetEnumerator__);
    lVar12 = *unaff_x26;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar12 = *unaff_x26;
    }
    plVar22 = *(long **)(*(long *)(lVar12 + 0xb8) + 0x38);
    if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar22 = (long *)(**(code **)(*plVar22 + 0x328))(plVar22,*(undefined8 *)(*plVar22 + 0x330));
    puVar8 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
    puVar7 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar5 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar17 = *plVar22;
      lVar12 = *(long *)puVar7;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar12) {
            puVar13 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
            goto 
            UnityEngine_InputSystem_InputControlExtensions_<GetAllButtonPresses>d__43__System_IDisposable_Dispose
            ;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar22,lVar12,0);

      UnityEngine_InputSystem_InputControlExtensions_<GetAllButtonPresses>d__43__System_IDisposable_Dispose
      :
      uVar18 = (*(code *)*puVar13)(plVar22,puVar13[1]);
      puVar6 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if ((uVar18 & 1) == 0) {
        plVar22 = (long *)thunk_FUN_01f116d0(plVar22,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                            );
        if (plVar22 == (long *)0x0) goto LAB_03a619ec;
        lVar12 = *plVar22;
        uVar18 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar18 == 0) goto LAB_03a619c4;
        piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_03a619ac;
      }
      lVar17 = *plVar22;
      lVar12 = *(long *)puVar7;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar12) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_03a6187c;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar22,lVar12,1);
LAB_03a6187c:
      plVar14 = (long *)(*(code *)*puVar13)(plVar22,puVar13[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)puVar8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      puVar13 = (undefined8 *)thunk_FUN_01f11920();
      plVar14 = (long *)puVar13[1];
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar12 = *plVar14;
      bVar3 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((*(byte *)(lVar12 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      plVar23 = (long *)*puVar13;
      lVar12 = (**(code **)(lVar12 + 0x198))(plVar14,*(undefined8 *)(lVar12 + 0x1a0));
      if (lVar12 == 0) {
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(*plVar23 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar23);
        }
        puVar15 = (undefined4 *)thunk_FUN_01f11920(plVar23);
        uVar2 = *puVar15;
        lVar12 = *(long *)(lVar16 + 0x10);
        lVar17 = *(long *)puVar5;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar16 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar16 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar12 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
        }
        else {
          FUN_030ba904(lVar16,uVar2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_03a61714;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_03a619ac:
    if (*(long *)(piVar19 + -2) == *(long *)puVar6) {
      puVar13 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_03a619e0;
    }
  }
LAB_03a619c4:
  puVar13 = (undefined8 *)FUN_01ecb238(plVar22,*(long *)puVar6,0);
LAB_03a619e0:
  (*(code *)*puVar13)(plVar22,puVar13[1]);
LAB_03a619ec:
  puVar4 = Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_GetPooled__;
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (0 < *(int *)(lVar16 + 0x18)) {
    iVar21 = 0;
    do {
      lVar12 = *unaff_x26;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar12 = *unaff_x26;
      }
      plVar22 = *(long **)(*(long *)(lVar12 + 0xb8) + 0x38);
      in_stack_00000008 = FUN_030ba614(lVar16,iVar21,*(undefined8 *)puVar4);
      uVar10 = thunk_FUN_01f113fc(*unaff_x27,&stack0x00000008);
      if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar10,uVar10);
      }
      (**(code **)(*plVar22 + 0x3a8))(plVar22,uVar10,*(undefined8 *)(*plVar22 + 0x3b0));
      iVar21 = iVar21 + 1;
    } while (iVar21 < *(int *)(lVar16 + 0x18));
  }
LAB_03a61714:
  if (cStack000000000000000c != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar20,0);
  }
  return plVar9;
}


