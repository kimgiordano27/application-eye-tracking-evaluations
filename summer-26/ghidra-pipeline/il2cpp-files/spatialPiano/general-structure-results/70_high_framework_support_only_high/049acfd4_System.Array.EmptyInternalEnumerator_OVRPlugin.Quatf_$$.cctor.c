/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$.cctor
ENTRY_POINT: 049acfd4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>___cctor(void)

{
  uint in_w8;
  long lVar1;
  int in_w9;
  int in_w10;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if (in_w9 < (int)(in_w8 - in_w10)) {
                    /* try { // try from 049acfe8 to 04aacffb has its CatchHandler @ 049ace40 */
    FUN_050f5b58(5,0);
    in_w8 = *(uint *)(unaff_x22 + 0x20);
  }
  if (0 < (int)in_w8) {
    lVar2 = *(long *)(unaff_x22 + 0x18);
                    /* try { // try from 049acffc to 04aad00b has its CatchHandler @ 049ad01c */
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar3 = 0;
    puVar4 = (undefined8 *)(lVar2 + 0x2c);
    do {
                    /* catch() { ... } // from try @ 049acfc8 with catch @ 049ad010 */
                    /* catch() { ... } // from try @ 049acfa4 with catch @ 049ad014 */
                    /* catch() { ... } // from try @ 049acfcc with catch @ 049ad018 */
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
LAB_049ad0b4:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
                    /* catch() { ... } // from try @ 049acf88 with catch @ 049ad01c
                       catch() { ... } // from try @ 049acffc with catch @ 049ad01c */
      if (-1 < *(int *)((long)puVar4 + -0xc)) {
                    /* try { // try from 049ad024 to 04aad027 has its CatchHandler @ 049ad0d8 */
                    /* try { // try from 049ad028 to 04aad03b has its CatchHandler @ 049ace40 */
        in_stack_00000048 = puVar4[1];
        in_stack_00000040 = *puVar4;
        in_stack_00000050 = puVar4[2];
                    /* try { // try from 049ad03c to 04aad053 has its CatchHandler @ 049ad0c8 */
        in_stack_00000020 = 0;
        uStack0000000000000028 = 0;
        uStack000000000000002c = 0;
        in_stack_00000038 = 0;
        uStack0000000000000030 = 0;
        uStack0000000000000034 = 0;
                    /* try { // try from 049ad054 to 04aad0b7 has its CatchHandler @ 049ace40 */
        FUN_03944f88(&stack0x00000020,*(undefined4 *)((long)puVar4 + -4),&stack0x00000040,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x150));
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w21) goto LAB_049ad0b4;
        lVar1 = unaff_x20 + (long)(int)unaff_w21 * 0x1c;
        unaff_w21 = unaff_w21 + 1;
        *(ulong *)(lVar1 + 0x28) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(undefined8 *)(lVar1 + 0x20) = in_stack_00000020;
        *(ulong *)(lVar1 + 0x34) = CONCAT44(in_stack_00000038,uStack0000000000000034);
        *(ulong *)(lVar1 + 0x2c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      }
      uVar3 = uVar3 + 1;
      puVar4 = (undefined8 *)((long)puVar4 + 0x24);
    } while (in_w8 != uVar3);
  }
  return;
}


