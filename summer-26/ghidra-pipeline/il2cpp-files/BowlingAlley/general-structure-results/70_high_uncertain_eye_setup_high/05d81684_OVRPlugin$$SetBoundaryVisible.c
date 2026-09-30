/*
FUNCTION_NAME: OVRPlugin$$SetBoundaryVisible
ENTRY_POINT: 05d81684
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetBoundaryVisible(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x19;
  long lVar4;
  long lStack0000000000000018;
  
  puVar2 = PTR_DAT_072b15b8;
  puVar1 = PTR_DAT_072b15b0;
  lStack0000000000000018 = 0;
  if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  FUN_041e3694(&stack0x00000008,*(long *)(unaff_x19 + 0x68),*(undefined8 *)PTR_DAT_072b15c8);
  while( true ) {
                    /* try { // try from 05d816b8 to 05e816c3 has its CatchHandler @ 05d817e4 */
    uVar3 = FUN_052d44b4(&stack0x00000008,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      FUN_052d44b0(&stack0x00000008,*(undefined8 *)puVar1);
                    /* try { // try from 05d81710 to 05e8171b has its CatchHandler @ 05d817e0 */
      return;
    }
    if (lStack0000000000000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar4 = *(long *)(lStack0000000000000018 + 0x20);
    FUN_05d80fdc(*(long *)(unaff_x19 + 0x40),*(undefined4 *)(lStack0000000000000018 + 0x10));
    if (lVar4 == 0) break;
                    /* try { // try from 05d816ec to 05e816f7 has its CatchHandler @ 05d817f4 */
    FUN_06c42eb8(lVar4,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


