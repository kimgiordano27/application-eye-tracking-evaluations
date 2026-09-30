/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_edit_message_t$$Dispose
ENTRY_POINT: 084d6a90
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_vx_evt_session_edit_message_t__Dispose(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 in_stack_00000008;
  
  if ((DAT_098512bc & 1) == 0) {
                    /* try { // try from 084d6aa8 to 085d6acf has its CatchHandler @ 084d6b1c */
    FUN_03d2d2b0(PTR_DAT_09280ba0);
    FUN_03d2d2b0(PTR_DAT_09280ba8);
    FUN_03d2d2b0(PTR_StringLiteral_52016_092806f0);
    FUN_03d2d2b0(PTR_DAT_09280bb0);
    FUN_03d2d2b0(PTR_DAT_09280b10);
                    /* try { // try from 084d6ae4 to 085d6b0b has its CatchHandler @ 084d6b14 */
    FUN_03d2d2b0(PTR_DAT_09280bb8);
    FUN_03d2d2b0(PTR_DAT_09280bc0);
    FUN_03d2d2b0(PTR_DAT_09280bc8);
                    /* catch() { ... } // from try @ 084d6974 with catch @ 084d6b0c
                       try { // try from 084d6b0c to 085d6b83 has its CatchHandler @ 084d670c */
    FUN_03d2d2b0(PTR_DAT_09280bd0);
                    /* catch() { ... } // from try @ 084d69dc with catch @ 084d6b10 */
                    /* catch() { ... } // from try @ 084d6a38 with catch @ 084d6b14
                       catch() { ... } // from try @ 084d6ae4 with catch @ 084d6b14 */
                    /* catch() { ... } // from try @ 084d69d0 with catch @ 084d6b18 */
    FUN_03d2d2b0(PTR_DAT_09280bd8);
                    /* catch() { ... } // from try @ 084d69ec with catch @ 084d6b1c
                       catch() { ... } // from try @ 084d6aa8 with catch @ 084d6b1c */
                    /* catch() { ... } // from try @ 084d6988 with catch @ 084d6b20 */
    DAT_098512bc = 1;
  }
  puVar1 = PTR_StringLiteral_52016_092806f0;
                    /* catch() { ... } // from try @ 084d68b8 with catch @ 084d6b24 */
  in_stack_00000008 = 0;
                    /* catch() { ... } // from try @ 084d68a4 with catch @ 084d6b28 */
                    /* catch() { ... } // from try @ 084d69e4 with catch @ 084d6b2c */
                    /* catch() { ... } // from try @ 084d67d0 with catch @ 084d6b30 */
  lVar7 = *(long *)(param_1 + 8);
                    /* catch() { ... } // from try @ 084d69c4 with catch @ 084d6b34 */
  if (*param_1 == 0) {
    in_stack_00000008 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 084d6c8c to 085d6c8f has its CatchHandler @ 084d6de8 */
      FUN_03d2d548();
    }
                    /* catch() { ... } // from try @ 084d692c with catch @ 084d6b40 */
                    /* catch() { ... } // from try @ 084d691c with catch @ 084d6b44 */
                    /* catch() { ... } // from try @ 084d69c0 with catch @ 084d6b48 */
    lVar3 = FUN_084d1698(lVar7,*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xc));
                    /* catch() { ... } // from try @ 084d68d4 with catch @ 084d6b4c */
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
                    /* catch() { ... } // from try @ 084d6808 with catch @ 084d6b50
                       catch() { ... } // from try @ 084d69e0 with catch @ 084d6b50 */
                    /* catch() { ... } // from try @ 084d67e8 with catch @ 084d6b54 */
                    /* catch() { ... } // from try @ 084d6908 with catch @ 084d6b58
                       catch() { ... } // from try @ 084d69bc with catch @ 084d6b58 */
                    /* catch() { ... } // from try @ 084d68e8 with catch @ 084d6b5c */
    in_stack_00000008 = FUN_0636bf40(lVar3,*(undefined8 *)PTR_DAT_09280bd0);
                    /* catch() { ... } // from try @ 084d684c with catch @ 084d6b60
                       catch() { ... } // from try @ 084d69e8 with catch @ 084d6b60 */
    uVar4 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_09280bc8);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
                    /* try { // try from 084d6b84 to 085d6b9b has its CatchHandler @ 084d6e04 */
      *(undefined8 *)(param_1 + 0xe) = in_stack_00000008;
      thunk_FUN_03d1023c(param_1 + 0xe,0);
                    /* try { // try from 084d6b9c to 085d6bf7 has its CatchHandler @ 084d670c */
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04b91014(param_1 + 2,&stack0x00000008,param_1,*(undefined8 *)PTR_DAT_09280ba0);
      return;
    }
  }
  uVar5 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_09280bc0);
  uVar6 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_09280bb8);
  FUN_054c1b80(uVar6,lVar7,*(undefined8 *)PTR_DAT_09280bd8,0);
  uVar5 = FUN_04f14b58(uVar5,uVar6,*(undefined8 *)PTR_DAT_09280bb0);
  uVar5 = FUN_04f22458(uVar5,*(undefined8 *)PTR_DAT_09280b10);
  *param_1 = -2;
  puVar2 = PTR_DAT_09280ba8;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_062285f0(param_1 + 2,uVar5,*(undefined8 *)puVar2);
  return;
}


