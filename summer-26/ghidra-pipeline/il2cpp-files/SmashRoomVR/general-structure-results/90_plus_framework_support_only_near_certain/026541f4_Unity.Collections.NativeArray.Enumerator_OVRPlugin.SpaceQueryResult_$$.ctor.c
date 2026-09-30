/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 026541f4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  
                    /* try { // try from 026541f4 to 02754247 has its CatchHandler @ 026541f4
                       catch() { ... } // from try @ 026541f4 with catch @ 026541f4
                       catch() { ... } // from try @ 0265430c with catch @ 026541f4
                       catch() { ... } // from try @ 02654394 with catch @ 026541f4
                       catch() { ... } // from try @ 026543d8 with catch @ 026541f4
                       catch() { ... } // from try @ 02654408 with catch @ 026541f4
                       catch() { ... } // from try @ 02654484 with catch @ 026541f4 */
  FUN_03060400(6,0);
  uVar1 = FUN_030584a8();
  if (uVar1 < unaff_w20) {
    FUN_03060c80(0);
  }
  iVar2 = FUN_030584a8();
  if ((int)(iVar2 - unaff_w20) < *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28)) {
    FUN_03060400(5,0);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x130);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    FUN_01ae9e74(lVar7);
  }
  lVar7 = thunk_FUN_01afa9e0();
  if (lVar7 != 0) {
    FUN_02652aec();
    return;
  }
  lVar7 = thunk_FUN_01afa9e0();
  if (lVar7 == 0) {
    plVar4 = (long *)thunk_FUN_01afa9e0();
    if (plVar4 == (long *)0x0) {
      FUN_03060cb8();
    }
    uVar1 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar1) {
      lVar7 = *(long *)(unaff_x21 + 0x18);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar9 = 0;
      puVar10 = (undefined8 *)(lVar7 + 0x28);
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        if (-1 < *(int *)(puVar10 + -1)) {
          in_stack_00000050 = 0;
          in_stack_00000038 = 0;
          in_stack_00000030 = 0;
          in_stack_00000048 = 0;
          in_stack_00000040 = 0;
          FUN_02a9e1d8(puVar10[2],puVar10[3],puVar10[4],&stack0x00000030,*puVar10,
                       *(undefined4 *)(puVar10 + 1),
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140));
          lVar8 = thunk_FUN_01afa70c(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          if ((lVar8 != 0) &&
             (lVar5 = thunk_FUN_01afa9e0(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
            uVar6 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
            FUN_01b48050(uVar6,0);
          }
          if (*(uint *)(plVar4 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          plVar4[(long)(int)unaff_w20 + 4] = lVar8;
          thunk_FUN_01b4f09c(plVar4 + (long)(int)unaff_w20 + 4,lVar8);
          unaff_w20 = unaff_w20 + 1;
        }
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 6;
      } while (uVar1 != uVar9);
    }
  }
  else {
    iVar2 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar2) {
      lVar8 = *(long *)(unaff_x21 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar9 = 0;
      puVar10 = (undefined8 *)(lVar8 + 0x38);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_026544bc;
        if (-1 < *(int *)(puVar10 + -3)) {
          in_stack_00000068 = *(undefined4 *)(puVar10 + -1);
          in_stack_00000060 = puVar10[-2];
          thunk_FUN_01afa70c(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                             &stack0x00000060);
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
LAB_026544bc:
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          in_stack_00000040 = puVar10[2];
          in_stack_00000038 = puVar10[1];
          in_stack_00000030 = *puVar10;
          thunk_FUN_01afa70c(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                             &stack0x00000030);
          FUN_03013558();
          if (*(uint *)(lVar7 + 0x18) <= unaff_w20) goto LAB_026544bc;
          lVar5 = lVar7 + (long)(int)unaff_w20 * 0x10;
          puVar3 = (undefined8 *)(lVar5 + 0x20);
          *(undefined8 *)(lVar5 + 0x28) = 0;
          *puVar3 = 0;
          unaff_w20 = unaff_w20 + 1;
          thunk_FUN_01b4f09c(puVar3,0);
          iVar2 = *(int *)(unaff_x21 + 0x20);
        }
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 6;
      } while ((long)uVar9 < (long)iVar2);
    }
  }
  return;
}


