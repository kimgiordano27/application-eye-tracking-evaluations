/*
FUNCTION_NAME: System.Linq.Enumerable.WhereEnumerableIterator<char>$$MoveNext
ENTRY_POINT: 0283d58c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0283d780) */

void System_Linq_Enumerable_WhereEnumerableIterator<char>__MoveNext(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  
                    /* catch() { ... } // from try @ 0283d3b4 with catch @ 0283d58c */
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* catch() { ... } // from try @ 0283d29c with catch @ 0283d590 */
                    /* catch() { ... } // from try @ 0283d284 with catch @ 0283d594 */
                    /* catch() { ... } // from try @ 0283d3f0 with catch @ 0283d598 */
                    /* catch() { ... } // from try @ 0283d3a8 with catch @ 0283d59c
                       catch() { ... } // from try @ 0283d580 with catch @ 0283d59c */
                    /* catch() { ... } // from try @ 0283d360 with catch @ 0283d5a0
                       catch() { ... } // from try @ 0283d574 with catch @ 0283d5a0 */
                    /* catch() { ... } // from try @ 0283d314 with catch @ 0283d5a4
                       catch() { ... } // from try @ 0283d56c with catch @ 0283d5a4 */
                    /* catch() { ... } // from try @ 0283d278 with catch @ 0283d5a8
                       catch() { ... } // from try @ 0283d55c with catch @ 0283d5a8 */
  in_stack_000000c8 = in_stack_00000068;
  in_stack_000000c0 = in_stack_00000060;
                    /* catch() { ... } // from try @ 0283cf14 with catch @ 0283d5ac */
  in_stack_000000d0 = in_stack_00000070;
                    /* catch() { ... } // from try @ 0283d248 with catch @ 0283d5b0
                       catch() { ... } // from try @ 0283d39c with catch @ 0283d5b0
                       catch() { ... } // from try @ 0283d57c with catch @ 0283d5b0 */
  in_stack_000000a8 = in_stack_00000048;
  in_stack_000000a0 = in_stack_00000040;
                    /* catch() { ... } // from try @ 0283d208 with catch @ 0283d5b4
                       catch() { ... } // from try @ 0283d26c with catch @ 0283d5b4
                       catch() { ... } // from try @ 0283d558 with catch @ 0283d5b4 */
  in_stack_000000b0 = in_stack_00000050;
                    /* catch() { ... } // from try @ 0283d42c with catch @ 0283d5b8
                       catch() { ... } // from try @ 0283d584 with catch @ 0283d5b8 */
                    /* catch() { ... } // from try @ 0283d364 with catch @ 0283d5bc
                       catch() { ... } // from try @ 0283d578 with catch @ 0283d5bc */
                    /* catch() { ... } // from try @ 0283d318 with catch @ 0283d5c0
                       catch() { ... } // from try @ 0283d570 with catch @ 0283d5c0 */
                    /* catch() { ... } // from try @ 0283d2cc with catch @ 0283d5c4
                       catch() { ... } // from try @ 0283d568 with catch @ 0283d5c4 */
  uVar1 = (**(code **)(*param_1 + 0x1b8))
                    (param_1,&stack0x000000c0,&stack0x000000a0,*(undefined8 *)(*param_1 + 0x1c0));
                    /* catch() { ... } // from try @ 0283d2c8 with catch @ 0283d5c8
                       catch() { ... } // from try @ 0283d560 with catch @ 0283d5c8 */
  if ((uVar1 & 1) == 0) {
                    /* catch() { ... } // from try @ 0283cfac with catch @ 0283d5cc */
                    /* catch() { ... } // from try @ 0283d030 with catch @ 0283d5d0
                       catch() { ... } // from try @ 0283d554 with catch @ 0283d5d0 */
                    /* catch() { ... } // from try @ 0283ceac with catch @ 0283d5d4 */
    lVar2 = FUN_04224ea4();
                    /* catch() { ... } // from try @ 0283d0f4 with catch @ 0283d5d8 */
    if (lVar2 == 0) {
      in_stack_000000d0 = unaff_x21[2];
      in_stack_000000c8 = unaff_x21[1];
      in_stack_000000c0 = *unaff_x21;
      (**(code **)(*unaff_x20 + 0x838))();
    }
    else {
                    /* catch() { ... } // from try @ 0283cf3c with catch @ 0283d5dc
                       catch() { ... } // from try @ 0283cfe0 with catch @ 0283d5dc */
                    /* catch() { ... } // from try @ 0283d0d0 with catch @ 0283d5e0 */
      lVar5 = unaff_x20[0x80];
                    /* catch() { ... } // from try @ 0283d18c with catch @ 0283d5e4 */
      lVar10 = unaff_x20[0x7f];
      lVar8 = unaff_x20[0x7e];
                    /* catch() { ... } // from try @ 0283d07c with catch @ 0283d5e8 */
                    /* catch() { ... } // from try @ 0283d540 with catch @ 0283d5ec */
                    /* catch() { ... } // from try @ 0283d114 with catch @ 0283d5f0 */
      in_stack_000000d0 = unaff_x21[2];
      in_stack_000000c8 = unaff_x21[1];
      in_stack_000000c0 = *unaff_x21;
                    /* try { // try from 0283d608 to 0293d60b has its CatchHandler @ 0283d61c */
                    /* catch() { ... } // from try @ 0283d608 with catch @ 0283d61c */
      (**(code **)(*unaff_x20 + 0x838))();
      lVar6 = unaff_x20[0x80];
      lVar11 = unaff_x20[0x7f];
      lVar9 = unaff_x20[0x7e];
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
                    /* try { // try from 0283d650 to 0293d67b has its CatchHandler @ 0283d690 */
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
                    /* try { // try from 0283d67c to 0293d687 has its CatchHandler @ 0283cd40 */
      in_stack_000000a0 = lVar9;
      in_stack_000000a8 = lVar11;
      in_stack_000000b0 = lVar6;
      in_stack_000000c0 = lVar8;
      in_stack_000000c8 = lVar10;
      in_stack_000000d0 = lVar5;
                    /* try { // try from 0283d688 to 0293d68f has its CatchHandler @ 0283d690 */
                    /* catch() { ... } // from try @ 0283d650 with catch @ 0283d690
                       catch() { ... } // from try @ 0283d688 with catch @ 0283d690 */
                    /* try { // try from 0283d694 to 0293d7fb has its CatchHandler @ 0283d694
                       catch() { ... } // from try @ 0283d694 with catch @ 0283d694
                       catch() { ... } // from try @ 0283d8bc with catch @ 0283d694
                       catch() { ... } // from try @ 0283d910 with catch @ 0283d694
                       catch() { ... } // from try @ 0283daa0 with catch @ 0283d694
                       catch() { ... } // from try @ 0283dbe8 with catch @ 0283d694
                       catch() { ... } // from try @ 0283dc90 with catch @ 0283d694
                       catch() { ... } // from try @ 0283dc98 with catch @ 0283d694
                       catch() { ... } // from try @ 0283dcbc with catch @ 0283d694
                       catch() { ... } // from try @ 0283dce8 with catch @ 0283d694
                       catch() { ... } // from try @ 0283dd1c with catch @ 0283d694
                       catch() { ... } // from try @ 0283ddbc with catch @ 0283d694
                       catch() { ... } // from try @ 0283de4c with catch @ 0283d694
                       catch() { ... } // from try @ 0283df00 with catch @ 0283d694 */
      plVar3 = (long *)FUN_029e4e58(&stack0x000000c0,&stack0x000000a0,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar3);
      (**(code **)(*unaff_x20 + 0x198))();
      lVar2 = *plVar3;
      uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar1 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0283d754;
          }
          uVar1 = uVar1 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar1 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar3,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0283d754:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
  }
  return;
}


