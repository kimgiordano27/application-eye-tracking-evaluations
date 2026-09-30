/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_3$$.cctor
ENTRY_POINT: 05699d34
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_3___cctor(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack0000000000000030;
  ulong uStack0000000000000040;
  undefined8 in_stack_000000e8;
  
  uStack0000000000000030 = param_1;
  uStack0000000000000040 = param_2;
  while( true ) {
    uVar1 = FUN_05118c10(&stack0x00000030,*unaff_x26);
    if ((uVar1 & 1) == 0) {
      FUN_05118c0c(&stack0x00000030,*unaff_x25);
                    /* try { // try from 05699db4 to 05799dbf has its CatchHandler @ 0569a1e4 */
      return;
    }
    if (*(long *)(unaff_x22 + 0x10) == 0) break;
    FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),uStack0000000000000040 & 0xffffffff,*unaff_x24);
                    /* try { // try from 05699d60 to 05799d77 has its CatchHandler @ 0569a1f4 */
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05699dd0 to 05799dd7 has its CatchHandler @ 0569a1f8 */
      FUN_02d96860();
    }
    uVar1 = FUN_0569af78();
    if ((uVar1 & 1) != 0) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0632237c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


