/*
FUNCTION_NAME: UnityEngine.InputSystem.InputControlExtensions.DeviceBuilder$$WithControlTree
ENTRY_POINT: 03a616bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 178
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a61b0c) */
/* WARNING: Removing unreachable block (ram,0x03a619f8) */
/* WARNING: Removing unreachable block (ram,0x03a61a88) */
/* WARNING: Removing unreachable block (ram,0x03a61b28) */

void UnityEngine_InputSystem_InputControlExtensions_DeviceBuilder__WithControlTree(void)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined4 unaff_w21;
  int iVar17;
  long *plVar18;
  long *plVar19;
  long *unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  undefined4 uStack0000000000000008;
  char cStack000000000000000c;
  
  plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 0x38);
  uStack0000000000000008 = unaff_w21;
  uVar8 = thunk_FUN_01f113fc(*unaff_x27,&stack0x00000008);
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar8,uVar8);
  }
  (**(code **)(*plVar18 + 0x318))(plVar18);
  uVar1 = *(int *)(*(long *)(*unaff_x26 + 0xb8) + 0x30) + 1;
  *(uint *)(*(long *)(*unaff_x26 + 0xb8) + 0x30) = uVar1;
  if ((uVar1 & 0x1f) == 0) {
    lVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Unity_Collections_NativeArray<BoneWeight>__ctor__);
    FUN_030ba0b0(lVar9,*(undefined8 *)
                        Method_Unity_Collections_NativeArray<BezierKnot>_GetEnumerator__);
    lVar10 = *unaff_x26;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar10 = *unaff_x26;
    }
    plVar18 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x38);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
                    /* try { // try from 03a617ac to 03b617d3 has its CatchHandler @ 03a6188c */
    plVar18 = (long *)(**(code **)(*plVar18 + 0x328))(plVar18,*(undefined8 *)(*plVar18 + 0x330));
    puVar7 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
    puVar6 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar4 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar14 = *plVar18;
      lVar10 = *(long *)puVar6;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
                    /* try { // try from 03a617e4 to 03b617eb has its CatchHandler @ 03a61880 */
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar10) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto 
            UnityEngine_InputSystem_InputControlExtensions_<GetAllButtonPresses>d__43__System_IDisposable_Dispose
            ;
          }
                    /* try { // try from 03a617f4 to 03b617fb has its CatchHandler @ 03a61884 */
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar18,lVar10,0);

      UnityEngine_InputSystem_InputControlExtensions_<GetAllButtonPresses>d__43__System_IDisposable_Dispose
      :
      uVar15 = (*(code *)*puVar11)(plVar18,puVar11[1]);
      puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if ((uVar15 & 1) == 0) {
        plVar18 = (long *)thunk_FUN_01f116d0(plVar18,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                            );
        if (plVar18 == (long *)0x0) goto LAB_03a619ec;
        lVar10 = *plVar18;
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 == 0) goto LAB_03a619c4;
        piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_03a619ac;
      }
      lVar14 = *plVar18;
      lVar10 = *(long *)puVar6;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar10) {
            puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_03a6187c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar18,lVar10,1);
LAB_03a6187c:
      plVar12 = (long *)(*(code *)*puVar11)(plVar18,puVar11[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)puVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      puVar11 = (undefined8 *)thunk_FUN_01f11920();
      plVar12 = (long *)puVar11[1];
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = *plVar12;
      bVar3 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(lVar10 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      plVar19 = (long *)*puVar11;
      lVar10 = (**(code **)(lVar10 + 0x198))(plVar12,*(undefined8 *)(lVar10 + 0x1a0));
      if (lVar10 == 0) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(*plVar19 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar19);
        }
        puVar13 = (undefined4 *)thunk_FUN_01f11920(plVar19);
        uVar2 = *puVar13;
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar14 = *(long *)puVar4;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
        }
        else {
          FUN_030ba904(lVar9,uVar2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_03a61714;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_03a619ac:
    if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
      puVar11 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_03a619e0;
    }
  }
LAB_03a619c4:
  puVar11 = (undefined8 *)FUN_01ecb238(plVar18,*(long *)puVar5,0);
LAB_03a619e0:
  (*(code *)*puVar11)(plVar18,puVar11[1]);
LAB_03a619ec:
  puVar4 = Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_GetPooled__;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (0 < *(int *)(lVar9 + 0x18)) {
    iVar17 = 0;
    do {
      lVar10 = *unaff_x26;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar10 = *unaff_x26;
      }
      plVar18 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x38);
      uStack0000000000000008 = FUN_030ba614(lVar9,iVar17,*(undefined8 *)puVar4);
      uVar8 = thunk_FUN_01f113fc(*unaff_x27,&stack0x00000008);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar8,uVar8);
      }
      (**(code **)(*plVar18 + 0x3a8))(plVar18,uVar8,*(undefined8 *)(*plVar18 + 0x3b0));
      iVar17 = iVar17 + 1;
    } while (iVar17 < *(int *)(lVar9 + 0x18));
  }
LAB_03a61714:
  if (cStack000000000000000c != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit();
  }
                    /* try { // try from 03a61740 to 03b61767 has its CatchHandler @ 03a61890 */
  return;
}


