/*
FUNCTION_NAME: Unity.Collections.NativeArray<NudgeJobData>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 031dd4e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x031dd704) */

void Unity_Collections_NativeArray<NudgeJobData>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
                    /* try { // try from 031dd4e8 to 032dd4f7 has its CatchHandler @ 031dd4f8 */
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
                    /* catch() { ... } // from try @ 031dd4a8 with catch @ 031dd4f8
                       catch() { ... } // from try @ 031dd4e8 with catch @ 031dd4f8 */
    lVar3 = *unaff_x19;
                    /* try { // try from 031dd4fc to 032dd4ff has its CatchHandler @ 031dd508 */
                    /* try { // try from 031dd500 to 032dd50b has its CatchHandler @ 031dd430 */
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031dd4fc with catch @ 031dd508
                        */
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_031dd544;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_031dd544:
    uVar6 = (*(code *)*puVar2)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 == 0) goto LAB_031dd6ac;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_031dd5bc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_031dd5bc:
    (*(code *)*puVar2)(&stack0x00000030);
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    in_stack_00000078 = in_stack_00000048;
    in_stack_00000070 = in_stack_00000040;
    in_stack_00000088 = in_stack_00000058;
    in_stack_00000080 = in_stack_00000050;
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar5 = *(uint *)(unaff_x21 + 0x18);
    if (uVar5 == *(uint *)(lVar3 + 0x18)) {
      FUN_031dbad0();
      lVar3 = *(long *)(unaff_x21 + 0x10);
      uVar5 = *(uint *)(unaff_x21 + 0x18);
    }
    *(uint *)(unaff_x21 + 0x18) = uVar5 + 1;
    in_stack_00000038 = in_stack_00000068;
    in_stack_00000030 = in_stack_00000060;
    in_stack_00000048 = in_stack_00000078;
    in_stack_00000040 = in_stack_00000070;
    in_stack_00000058 = in_stack_00000088;
    in_stack_00000050 = in_stack_00000080;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar3 = lVar3 + (long)(int)uVar5 * 0x30;
    *(undefined8 *)(lVar3 + 0x38) = in_stack_00000078;
    *(undefined8 *)(lVar3 + 0x30) = in_stack_00000070;
    *(undefined8 *)(lVar3 + 0x48) = in_stack_00000088;
    *(undefined8 *)(lVar3 + 0x40) = in_stack_00000080;
    *(undefined8 *)(lVar3 + 0x28) = in_stack_00000068;
    *(undefined8 *)(lVar3 + 0x20) = in_stack_00000060;
    thunk_FUN_01f51358(lVar3 + 0x40,0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x22) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_031dd6c8;
    }
  }
LAB_031dd6ac:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_031dd6c8:
  (*(code *)*puVar2)();
  return;
}


