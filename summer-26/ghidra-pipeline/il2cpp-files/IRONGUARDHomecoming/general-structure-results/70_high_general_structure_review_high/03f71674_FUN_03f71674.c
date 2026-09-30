/*
FUNCTION_NAME: FUN_03f71674
ENTRY_POINT: 03f71674
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


int FUN_03f71674(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  ulong uVar25;
  undefined8 local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined1 local_48 [4];
  undefined4 local_44;
  
                    /* try { // try from 03f71688 to 0407169f has its CatchHandler @ 03f71800 */
  if ((DAT_0483b588 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(StringLiteral_3739);
                    /* try { // try from 03f716bc to 040716c7 has its CatchHandler @ 03f717d4 */
    thunk_FUN_01efb3a4(StringLiteral_3734);
    thunk_FUN_01efb3a4(StringLiteral_3736);
                    /* try { // try from 03f716d0 to 040716e3 has its CatchHandler @ 03f717e8 */
    thunk_FUN_01efb3a4(StringLiteral_3737);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_0483b588 = 1;
  }
                    /* try { // try from 03f716ec to 040716f7 has its CatchHandler @ 03f717d0 */
  local_70 = 0;
  uStack_68 = 0;
  local_60 = (long *)0x0;
  local_48[0] = 0;
  local_44 = *(undefined4 *)(param_1 + 0x18);
                    /* try { // try from 03f71700 to 04071713 has its CatchHandler @ 03f717e4 */
  iVar6 = FUN_035683c8(&local_44,0);
  puVar4 = StringLiteral_3739;
  puVar3 = StringLiteral_3734;
  puVar2 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 03f71718 to 04071727 has its CatchHandler @ 03f717fc */
                    /* try { // try from 03f71728 to 0407179f has its CatchHandler @ 03f7153c */
    iVar6 = iVar6 + 0x187;
    FUN_02ee8778(&local_88,*(long *)(param_1 + 0x10),*(undefined8 *)StringLiteral_3737);
    uStack_68 = uStack_80;
    local_70 = local_88;
    local_60 = local_78;
    while( true ) {
      do {
        uVar25 = FUN_02c7a3f0(&local_70,*(undefined8 *)puVar3);
        plVar5 = local_60;
        if ((uVar25 & 1) == 0) {
                    /* try { // try from 03f717c0 to 040717c3 has its CatchHandler @ 03f717fc */
          FUN_02c7a3ec(&local_70,*(undefined8 *)puVar4);
                    /* try { // try from 03f717c4 to 040717c7 has its CatchHandler @ 03f717f0 */
          local_48[0] = *(undefined1 *)(param_1 + 0x1c);
                    /* try { // try from 03f717c8 to 040717cb has its CatchHandler @ 03f717ec */
                    /* try { // try from 03f717cc to 040717cf has its CatchHandler @ 03f717d8 */
                    /* catch() { ... } // from try @ 03f716ec with catch @ 03f717d0
                       try { // try from 03f717d0 to 04071817 has its CatchHandler @ 03f7153c */
                    /* catch() { ... } // from try @ 03f716bc with catch @ 03f717d4 */
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 03f717a0 with catch @ 03f717d8
                       catch() { ... } // from try @ 03f717cc with catch @ 03f717d8 */
            thunk_FUN_01ee6d7c();
          }
                    /* catch() { ... } // from try @ 03f7165c with catch @ 03f717dc */
                    /* catch() { ... } // from try @ 03f71634 with catch @ 03f717e0 */
                    /* catch() { ... } // from try @ 03f71700 with catch @ 03f717e4 */
          iVar7 = FUN_034f929c(local_48,0);
                    /* catch() { ... } // from try @ 03f716d0 with catch @ 03f717e8 */
          local_48[0] = *(undefined1 *)(param_1 + 0x1d);
                    /* catch() { ... } // from try @ 03f715f4 with catch @ 03f717ec
                       catch() { ... } // from try @ 03f717c8 with catch @ 03f717ec */
                    /* catch() { ... } // from try @ 03f715c0 with catch @ 03f717f0
                       catch() { ... } // from try @ 03f717c4 with catch @ 03f717f0 */
                    /* catch() { ... } // from try @ 03f71668 with catch @ 03f717f4 */
                    /* catch() { ... } // from try @ 03f71640 with catch @ 03f717f8 */
                    /* catch() { ... } // from try @ 03f71718 with catch @ 03f717fc
                       catch() { ... } // from try @ 03f717c0 with catch @ 03f717fc */
                    /* catch() { ... } // from try @ 03f71688 with catch @ 03f71800 */
          iVar8 = FUN_034f929c(local_48,0);
          local_48[0] = *(undefined1 *)(param_1 + 0x1e);
                    /* try { // try from 03f71818 to 0407181b has its CatchHandler @ 03f7182c */
          iVar9 = FUN_034f929c(local_48,0);
          local_48[0] = *(undefined1 *)(param_1 + 0x1f);
                    /* catch() { ... } // from try @ 03f71818 with catch @ 03f7182c */
          iVar10 = FUN_034f929c(local_48,0);
          local_48[0] = *(undefined1 *)(param_1 + 0x20);
          iVar11 = FUN_034f929c(local_48,0);
          local_48[0] = *(undefined1 *)(param_1 + 0x21);
          iVar12 = FUN_034f929c(local_48,0);
                    /* try { // try from 03f71864 to 0407188b has its CatchHandler @ 03f718a0 */
          local_48[0] = *(undefined1 *)(param_1 + 0x22);
          iVar13 = FUN_034f929c(local_48,0);
          local_48[0] = *(undefined1 *)(param_1 + 0x23);
                    /* try { // try from 03f7188c to 04071897 has its CatchHandler @ 03f7153c */
          iVar14 = FUN_034f929c(local_48,0);
          local_48[0] = *(undefined1 *)(param_1 + 0x24);
                    /* try { // try from 03f71898 to 0407189f has its CatchHandler @ 03f718a0 */
                    /* catch() { ... } // from try @ 03f71864 with catch @ 03f718a0
                       catch() { ... } // from try @ 03f71898 with catch @ 03f718a0 */
          iVar15 = FUN_034f929c(local_48,0);
          local_48[0] = *(undefined1 *)(param_1 + 0x25);
          iVar16 = FUN_034f929c(local_48,0);
          local_48[0] = *(undefined1 *)(param_1 + 0x26);
          iVar17 = FUN_034f929c(local_48,0);
          local_48[0] = *(undefined1 *)(param_1 + 0x27);
          iVar18 = FUN_034f929c(local_48,0);
          local_48[0] = *(undefined1 *)(param_1 + 0x28);
          iVar19 = FUN_034f929c(local_48,0);
          local_48[0] = *(undefined1 *)(param_1 + 0x29);
          iVar20 = FUN_034f929c(local_48,0);
          local_48[0] = *(undefined1 *)(param_1 + 0x2a);
          iVar21 = FUN_034f929c(local_48,0);
          local_48[0] = *(undefined1 *)(param_1 + 0x2b);
          iVar22 = FUN_034f929c(local_48,0);
          local_48[0] = *(undefined1 *)(param_1 + 0x2c);
          iVar23 = FUN_034f929c(local_48,0);
          local_48[0] = *(undefined1 *)(param_1 + 0x2d);
          iVar24 = FUN_034f929c(local_48,0);
          return iVar24 + (iVar23 + (iVar22 + (iVar21 + (iVar20 + (iVar19 + (iVar18 + (iVar17 + (
                                                  iVar16 + (iVar15 + (iVar14 + (iVar13 + (iVar12 + (
                                                  iVar11 + (iVar10 + (iVar9 + (iVar8 + (iVar7 + 
                                                  iVar6 * 0x17) * 0x17) * 0x17) * 0x17) * 0x17) *
                                                  0x17) * 0x17) * 0x17) * 0x17) * 0x17) * 0x17) *
                                                  0x17) * 0x17) * 0x17) * 0x17) * 0x17) * 0x17) *
                          0x17;
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar25 = FUN_03583338(plVar5,0,0);
      } while ((uVar25 & 1) == 0);
      if (plVar5 == (long *)0x0) break;
                    /* try { // try from 03f717a0 to 040717af has its CatchHandler @ 03f717d8 */
      iVar7 = (**(code **)(*plVar5 + 0x158))(plVar5,*(undefined8 *)(*plVar5 + 0x160));
                    /* try { // try from 03f717b0 to 040717bf has its CatchHandler @ 03f7153c */
      iVar6 = iVar7 + iVar6 * 0x17;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


