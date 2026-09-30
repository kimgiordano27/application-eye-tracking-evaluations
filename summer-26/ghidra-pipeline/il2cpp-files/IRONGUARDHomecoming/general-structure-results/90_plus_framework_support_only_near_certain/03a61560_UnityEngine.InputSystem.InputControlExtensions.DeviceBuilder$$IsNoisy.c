/*
FUNCTION_NAME: UnityEngine.InputSystem.InputControlExtensions.DeviceBuilder$$IsNoisy
ENTRY_POINT: 03a61560
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 178
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a61b0c) */
/* WARNING: Removing unreachable block (ram,0x03a619f8) */
/* WARNING: Removing unreachable block (ram,0x03a61a88) */
/* WARNING: Removing unreachable block (ram,0x03a61b28) */

long * UnityEngine_InputSystem_InputControlExtensions_DeviceBuilder__IsNoisy(void)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined4 *puVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  undefined4 unaff_w21;
  int iVar19;
  long *plVar20;
  long *plVar21;
  long *unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  undefined4 uStack0000000000000008;
  char cStack000000000000000c;
  
  FUN_035ce230();
  lVar8 = *unaff_x26;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar8 = *unaff_x26;
  }
  plVar18 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x38);
  uStack0000000000000008 = unaff_w21;
  uVar9 = thunk_FUN_01f113fc(*unaff_x27,&stack0x00000008);
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar9,uVar9);
  }
  plVar18 = (long *)(**(code **)(*plVar18 + 0x308))(plVar18,uVar9,*(undefined8 *)(*plVar18 + 0x310))
  ;
  if (plVar18 == (long *)0x0) {
    lVar8 = *(long *)StringLiteral_7678;
  }
  else {
    lVar8 = *plVar18;
    bVar3 = *(byte *)(*unaff_x24 + 0x130);
    if ((*(byte *)(lVar8 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    plVar18 = (long *)(**(code **)(lVar8 + 0x198))(plVar18,*(undefined8 *)(lVar8 + 0x1a0));
    lVar8 = *(long *)StringLiteral_7678;
    if (plVar18 != (long *)0x0) {
      if ((*(byte *)(*plVar18 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar18);
      }
      goto LAB_03a61714;
    }
  }
  plVar18 = (long *)thunk_FUN_01f117cc(lVar8);
  FUN_03a612ac(plVar18,unaff_w21);
  uVar9 = thunk_FUN_01f117cc(*unaff_x24);
  FUN_035c455c(uVar9,plVar18,0);
  lVar8 = *unaff_x26;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar8 = *unaff_x26;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0302d104(lVar8,uVar9,*(undefined8 *)StringLiteral_7677);
  plVar20 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 0x38);
  uStack0000000000000008 = unaff_w21;
  uVar10 = thunk_FUN_01f113fc(*unaff_x27,&stack0x00000008);
  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar10,uVar10);
  }
  (**(code **)(*plVar20 + 0x318))(plVar20,uVar10,uVar9,*(undefined8 *)(*plVar20 + 800));
  uVar1 = *(int *)(*(long *)(*unaff_x26 + 0xb8) + 0x30) + 1;
  *(uint *)(*(long *)(*unaff_x26 + 0xb8) + 0x30) = uVar1;
  if ((uVar1 & 0x1f) == 0) {
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Unity_Collections_NativeArray<BoneWeight>__ctor__);
    FUN_030ba0b0(lVar8,*(undefined8 *)
                        Method_Unity_Collections_NativeArray<BezierKnot>_GetEnumerator__);
    lVar11 = *unaff_x26;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar11 = *unaff_x26;
    }
    plVar20 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x38);
    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar20 = (long *)(**(code **)(*plVar20 + 0x328))(plVar20,*(undefined8 *)(*plVar20 + 0x330));
    puVar7 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
    puVar6 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar4 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar15 = *plVar20;
      lVar11 = *(long *)puVar6;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar12 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto 
            UnityEngine_InputSystem_InputControlExtensions_<GetAllButtonPresses>d__43__System_IDisposable_Dispose
            ;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar20,lVar11,0);

      UnityEngine_InputSystem_InputControlExtensions_<GetAllButtonPresses>d__43__System_IDisposable_Dispose
      :
      uVar16 = (*(code *)*puVar12)(plVar20,puVar12[1]);
      puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if ((uVar16 & 1) == 0) {
        plVar20 = (long *)thunk_FUN_01f116d0(plVar20,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                            );
        if (plVar20 == (long *)0x0) goto LAB_03a619ec;
        lVar11 = *plVar20;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar16 == 0) goto LAB_03a619c4;
        piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_03a619ac;
      }
      lVar15 = *plVar20;
      lVar11 = *(long *)puVar6;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar11) {
            puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_03a6187c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar20,lVar11,1);
LAB_03a6187c:
      plVar13 = (long *)(*(code *)*puVar12)(plVar20,puVar12[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      puVar12 = (undefined8 *)thunk_FUN_01f11920();
      plVar13 = (long *)puVar12[1];
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = *plVar13;
      bVar3 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(lVar11 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      plVar21 = (long *)*puVar12;
      lVar11 = (**(code **)(lVar11 + 0x198))(plVar13,*(undefined8 *)(lVar11 + 0x1a0));
      if (lVar11 == 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(*plVar21 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar21);
        }
        puVar14 = (undefined4 *)thunk_FUN_01f11920(plVar21);
        uVar2 = *puVar14;
        lVar11 = *(long *)(lVar8 + 0x10);
        lVar15 = *(long *)puVar4;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
        }
        else {
          FUN_030ba904(lVar8,uVar2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_03a61714;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_03a619ac:
    if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
      puVar12 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03a619e0;
    }
  }
LAB_03a619c4:
  puVar12 = (undefined8 *)FUN_01ecb238(plVar20,*(long *)puVar5,0);
LAB_03a619e0:
  (*(code *)*puVar12)(plVar20,puVar12[1]);
LAB_03a619ec:
  puVar4 = Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_GetPooled__;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (0 < *(int *)(lVar8 + 0x18)) {
    iVar19 = 0;
    do {
      lVar11 = *unaff_x26;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = *unaff_x26;
      }
      plVar20 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x38);
      uStack0000000000000008 = FUN_030ba614(lVar8,iVar19,*(undefined8 *)puVar4);
      uVar9 = thunk_FUN_01f113fc(*unaff_x27,&stack0x00000008);
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar9,uVar9);
      }
      (**(code **)(*plVar20 + 0x3a8))(plVar20,uVar9,*(undefined8 *)(*plVar20 + 0x3b0));
      iVar19 = iVar19 + 1;
    } while (iVar19 < *(int *)(lVar8 + 0x18));
  }
LAB_03a61714:
  if (cStack000000000000000c != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit();
  }
  return plVar18;
}


