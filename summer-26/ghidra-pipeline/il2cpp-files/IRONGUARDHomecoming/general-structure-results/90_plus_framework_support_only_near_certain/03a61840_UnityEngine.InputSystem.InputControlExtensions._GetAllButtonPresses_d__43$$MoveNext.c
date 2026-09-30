/*
FUNCTION_NAME: UnityEngine.InputSystem.InputControlExtensions.<GetAllButtonPresses>d__43$$MoveNext
ENTRY_POINT: 03a61840
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 147
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03a61b0c) */
/* WARNING: Removing unreachable block (ram,0x03a619f8) */
/* WARNING: Removing unreachable block (ram,0x03a61a88) */
/* WARNING: Removing unreachable block (ram,0x03a61b28) */

void UnityEngine_InputSystem_InputControlExtensions_<GetAllButtonPresses>d__43__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong in_x9;
  long lVar10;
  long in_x10;
  int *piVar11;
  long unaff_x21;
  int iVar12;
  long *unaff_x22;
  long *plVar13;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined4 uStack0000000000000008;
  char cStack000000000000000c;
  
  do {
    piVar11 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar11 + -2) == param_3) {
                    /* catch() { ... } // from try @ 03a61668 with catch @ 03a6186c
                       catch() { ... } // from try @ 03a61860 with catch @ 03a6186c */
                    /* catch() { ... } // from try @ 03a61810 with catch @ 03a61870 */
                    /* catch() { ... } // from try @ 03a616b4 with catch @ 03a61874 */
                    /* catch() { ... } // from try @ 03a6185c with catch @ 03a61878 */
        puVar5 = (undefined8 *)(param_1 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_03a6187c;
      }
      in_x9 = in_x9 - 1;
      piVar11 = piVar11 + 4;
                    /* try { // try from 03a61858 to 03b6185b has its CatchHandler @ 03a6187c */
    } while (in_x9 != 0);
    do {
                    /* try { // try from 03a6185c to 03b6185f has its CatchHandler @ 03a61878 */
                    /* try { // try from 03a61860 to 03b61863 has its CatchHandler @ 03a6186c */
                    /* catch() { ... } // from try @ 03a61664 with catch @ 03a61864
                       try { // try from 03a61864 to 03b618a3 has its CatchHandler @ 03a615d0 */
      puVar5 = (undefined8 *)FUN_01ecb238();
                    /* catch() { ... } // from try @ 03a61834 with catch @ 03a61868 */
LAB_03a6187c:
                    /* catch() { ... } // from try @ 03a61858 with catch @ 03a6187c */
                    /* catch() { ... } // from try @ 03a617e4 with catch @ 03a61880 */
                    /* catch() { ... } // from try @ 03a617f4 with catch @ 03a61884 */
      plVar6 = (long *)(*(code *)*puVar5)();
                    /* catch() { ... } // from try @ 03a6180c with catch @ 03a61888 */
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
                    /* catch() { ... } // from try @ 03a617ac with catch @ 03a6188c */
                    /* catch() { ... } // from try @ 03a61740 with catch @ 03a61890 */
      if (*(long *)(*plVar6 + 0x40) != *(long *)(*unaff_x28 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
                    /* try { // try from 03a618a4 to 03b618a7 has its CatchHandler @ 03a618c0 */
      puVar5 = (undefined8 *)thunk_FUN_01f11920();
                    /* try { // try from 03a618a8 to 03b618df has its CatchHandler @ 03a615d0 */
      plVar6 = (long *)puVar5[1];
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = *plVar6;
                    /* catch() { ... } // from try @ 03a618a4 with catch @ 03a618c0 */
      bVar2 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(lVar10 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
                    /* try { // try from 03a618e0 to 03b618eb has its CatchHandler @ 03a618ec */
      plVar13 = (long *)*puVar5;
      lVar10 = (**(code **)(lVar10 + 0x198))(plVar6,*(undefined8 *)(lVar10 + 0x1a0));
                    /* catch() { ... } // from try @ 03a618e0 with catch @ 03a618ec */
      if (lVar10 == 0) {
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(*plVar13 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar13);
        }
        puVar7 = (undefined4 *)thunk_FUN_01f11920(plVar13);
        uVar1 = *puVar7;
        lVar10 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar3 = *(uint *)(unaff_x21 + 0x18);
        if (uVar3 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar3 + 1;
          *(undefined4 *)(lVar10 + (long)(int)uVar3 * 4 + 0x20) = uVar1;
        }
        else {
          FUN_030ba904();
        }
      }
      lVar10 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x25) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto 
            UnityEngine_InputSystem_InputControlExtensions_<GetAllButtonPresses>d__43__System_IDisposable_Dispose
            ;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238();

      UnityEngine_InputSystem_InputControlExtensions_<GetAllButtonPresses>d__43__System_IDisposable_Dispose
      :
      uVar9 = (*(code *)*puVar5)();
      puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if ((uVar9 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_01f116d0();
        if (plVar6 == (long *)0x0) goto LAB_03a619ec;
        lVar10 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 == 0) goto LAB_03a619c4;
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_03a619ac;
      }
      param_1 = *unaff_x22;
      param_3 = *unaff_x25;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
LAB_03a619ac:
    if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03a619e0;
    }
  }
LAB_03a619c4:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0);
LAB_03a619e0:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_03a619ec:
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    iVar12 = 0;
    do {
      lVar10 = *unaff_x26;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar10 = *unaff_x26;
      }
      plVar6 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x38);
      uStack0000000000000008 = FUN_030ba614();
      uVar8 = thunk_FUN_01f113fc(*unaff_x27,&stack0x00000008);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar8,uVar8);
      }
      (**(code **)(*plVar6 + 0x3a8))(plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x3b0));
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(unaff_x21 + 0x18));
  }
  if (cStack000000000000000c != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit();
  }
  return;
}


