/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_EncodeMrcFrameWithPoseTime
ENTRY_POINT: 051ddacc
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameWithPoseTime(void)

{
  undefined4 uVar1;
  long lVar2;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined4 *unaff_x24;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  for (; (long)unaff_x21 < (long)(int)in_w8; unaff_x21 = unaff_x21 + 1) {
    if (in_w8 <= unaff_x21) {
LAB_051ddb0c:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    FUN_05155480(&stack0x00000020,*(undefined8 *)(unaff_x23 + unaff_x21 * 8),1,0);
    in_stack_00000048 = uStack0000000000000028;
    in_stack_00000040 = in_stack_00000020;
    uStack0000000000000054 = uStack0000000000000034;
    uStack000000000000004c = uStack000000000000002c;
    uStack0000000000000050 = uStack0000000000000030;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar1 = FUN_051ddb14(unaff_x21 & 0xffffffff,&stack0x00000068);
    uStack0000000000000028 = in_stack_00000048;
    in_stack_00000020 = in_stack_00000040;
    uStack0000000000000034 = uStack0000000000000054;
    uStack000000000000002c = uStack000000000000004c;
    uStack0000000000000030 = uStack0000000000000050;
    if (unaff_x20 == 0) goto LAB_051ddb10;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x21) goto LAB_051ddb0c;
    unaff_x24[9] = uVar1;
    unaff_x24[0x11] = 0;
    *(undefined8 *)(unaff_x24 + 0xf) = uStack0000000000000054;
    *(ulong *)(unaff_x24 + 0xd) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    *(ulong *)(unaff_x24 + 0xc) = CONCAT44(uStack000000000000004c,in_stack_00000048);
    *(undefined8 *)(unaff_x24 + 10) = in_stack_00000040;
    in_w8 = *(uint *)(unaff_x19 + 0x18);
    unaff_x24 = unaff_x24 + 9;
  }
                    /* try { // try from 051ddadc to 052ddaeb has its CatchHandler @ 051ddb68 */
  lVar2 = thunk_FUN_02cea894(*unaff_x22);
  FUN_051ddc10();
  if (lVar2 != 0) {
                    /* try { // try from 051ddaec to 052ddb1b has its CatchHandler @ 051dd690 */
    *(long *)(lVar2 + 0x10) = unaff_x20;
    return lVar2;
  }
LAB_051ddb10:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


