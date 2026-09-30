/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyTrackingSupported
ENTRY_POINT: 0697818c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetBodyTrackingSupported(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long lVar4;
  long *unaff_x22;
  
  uVar1 = FUN_07c9c218();
                    /* try { // try from 06978190 to 06a7819b has its CatchHandler @ 06978488 */
  if ((uVar1 & 1) == 0) {
                    /* try { // try from 0697822c to 06a7824b has its CatchHandler @ 06978478 */
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07c4fb40(*(undefined8 *)PTR_DAT_084b7528,0);
    return;
  }
                    /* try { // try from 069781a0 to 06a781ab has its CatchHandler @ 069784a8 */
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar2 != 0)) {
    uVar3 = FUN_07d2ddfc(lVar2,0);
                    /* try { // try from 069781ac to 06a7820b has its CatchHandler @ 06977ed0 */
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x22);
    }
    FUN_07ca310c(uVar3,0);
    lVar2 = *(long *)(unaff_x19 + 0x30);
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar2 + 0x40);
      uVar3 = FUN_06978e60(*(float *)(lVar2 + 100) * DAT_015c5d4c,
                           *(float *)(lVar2 + 0x58) * DAT_015c592c,0xc);
      if (lVar4 != 0) {
        FUN_07d2decc(lVar4,uVar3,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


