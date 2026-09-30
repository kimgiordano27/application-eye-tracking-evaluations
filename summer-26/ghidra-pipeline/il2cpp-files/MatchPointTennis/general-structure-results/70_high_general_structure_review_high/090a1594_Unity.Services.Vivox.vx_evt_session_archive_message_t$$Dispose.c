/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_archive_message_t$$Dispose
ENTRY_POINT: 090a1594
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_vx_evt_session_archive_message_t__Dispose(ulong param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
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
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
                    /* try { // try from 090a1594 to 091a1597 has its CatchHandler @ 090a16ec */
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09fc3cc0);
                    /* try { // try from 090a15b0 to 091a15b3 has its CatchHandler @ 090a16e8 */
    FUN_04447ba8(PTR_DAT_09fc3c68);
    FUN_04447ba8(PTR_DAT_09fc39c0);
                    /* try { // try from 090a15c4 to 091a15e3 has its CatchHandler @ 090a1708 */
    FUN_04447ba8(PTR_DAT_09f1fbc0);
    FUN_04447ba8(PTR_DAT_09fc3cc8);
    FUN_04447ba8(PTR_DAT_09fc3cd0);
                    /* try { // try from 090a15e4 to 091a163b has its CatchHandler @ 090a112c */
    FUN_04447ba8(PTR_DAT_09fc3cd8);
    *(undefined1 *)(unaff_x20 + 0xa53) = 1;
  }
  puVar1 = PTR_DAT_09fc39c0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000038 = 0;
  if (*param_2 == 0) {
                    /* catch() { ... } // from try @ 090a1694 with catch @ 090a16d4 */
    in_stack_00000038 = *(undefined8 *)(param_2 + 0xc);
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    *param_2 = -1;
  }
  else {
    if (*(long *)(param_2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar8 = *(long *)(*(long *)(param_2 + 8) + 0x10);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar11 = *(long *)(param_2 + 10);
                    /* try { // try from 090a163c to 091a1643 has its CatchHandler @ 090a16ac */
    uVar9 = FUN_05badb74(lVar8,0,*(undefined8 *)PTR_DAT_09f1fbc0);
    if (*(long *)(param_2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(uVar9,uVar9);
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(uVar9,uVar9);
    }
                    /* try { // try from 090a1650 to 091a166f has its CatchHandler @ 090a16b0 */
    lVar8 = FUN_0909dbe0(lVar11,uVar9,*(undefined8 *)(*(long *)(param_2 + 8) + 0x18));
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000038 = FUN_06851c74(lVar8,*(undefined8 *)PTR_DAT_09fc3cd8);
    uVar10 = System_Threading_Tasks_Task<ValueTuple<bool,_ValueTuple<bool,_UniTask>>>__ContinueWith
                       (&stack0x00000038,*(undefined8 *)PTR_DAT_09fc3cd0);
                    /* try { // try from 090a1688 to 091a168b has its CatchHandler @ 090a1714 */
    if ((uVar10 & 1) == 0) {
                    /* try { // try from 090a168c to 091a168f has its CatchHandler @ 090a16e4 */
      *param_2 = 0;
                    /* try { // try from 090a1690 to 091a1693 has its CatchHandler @ 090a16d8 */
                    /* try { // try from 090a1694 to 091a1697 has its CatchHandler @ 090a16d4 */
                    /* try { // try from 090a1698 to 091a169b has its CatchHandler @ 090a16cc */
      *(undefined8 *)(param_2 + 0xc) = in_stack_00000038;
                    /* try { // try from 090a169c to 091a169f has its CatchHandler @ 090a16c4 */
                    /* try { // try from 090a16a0 to 091a16a3 has its CatchHandler @ 090a16bc */
      thunk_FUN_044bb4b4(param_2 + 0xc,0);
                    /* try { // try from 090a16a4 to 091a16a7 has its CatchHandler @ 090a170c */
                    /* catch() { ... } // from try @ 090a12ec with catch @ 090a16a8
                       try { // try from 090a16a8 to 091a172b has its CatchHandler @ 090a112c */
                    /* catch() { ... } // from try @ 090a163c with catch @ 090a16ac */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 090a1650 with catch @ 090a16b0 */
        thunk_FUN_044a54b4();
      }
                    /* catch() { ... } // from try @ 090a1578 with catch @ 090a16b4 */
                    /* catch() { ... } // from try @ 090a1564 with catch @ 090a16b8 */
                    /* catch() { ... } // from try @ 090a16a0 with catch @ 090a16bc */
                    /* catch() { ... } // from try @ 090a1498 with catch @ 090a16c0 */
                    /* catch() { ... } // from try @ 090a169c with catch @ 090a16c4 */
                    /* catch() { ... } // from try @ 090a1480 with catch @ 090a16c8 */
                    /* catch() { ... } // from try @ 090a1698 with catch @ 090a16cc */
      FUN_0462924c(param_2 + 2,&stack0x00000038,param_2,*(undefined8 *)PTR_DAT_09fc3cc0);
      return;
                    /* catch() { ... } // from try @ 090a146c with catch @ 090a16d0 */
    }
  }
  FUN_0677ca18(&stack0x00000070,&stack0x00000038,*(undefined8 *)PTR_DAT_09fc3cc8);
  uVar7 = in_stack_00000098;
  uVar6 = in_stack_00000090;
  uVar5 = in_stack_00000088;
  uVar4 = in_stack_00000080;
  uVar3 = in_stack_00000078;
  uVar9 = in_stack_00000070;
  in_stack_00000048 = in_stack_00000078;
  in_stack_00000040 = in_stack_00000070;
  in_stack_00000058 = in_stack_00000088;
  in_stack_00000050 = in_stack_00000080;
  in_stack_00000068 = in_stack_00000098;
  in_stack_00000060 = in_stack_00000090;
  *param_2 = -2;
  puVar2 = PTR_DAT_09fc3c68;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  in_stack_00000070 = uVar9;
  in_stack_00000078 = uVar3;
  in_stack_00000080 = uVar4;
  in_stack_00000088 = uVar5;
  in_stack_00000090 = uVar6;
  in_stack_00000098 = uVar7;
  FUN_063bb6ac(param_2 + 2,&stack0x00000070,*(undefined8 *)puVar2);
  return;
}


