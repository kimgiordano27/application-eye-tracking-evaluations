/*
FUNCTION_NAME: OVRPlugin$$SetInsightPassthroughStyle
ENTRY_POINT: 06abfcac
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SetInsightPassthroughStyle(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
                    /* try { // try from 06abfcac to 06bbfcd3 has its CatchHandler @ 06abfe14 */
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x1f7) = 1;
  uVar4 = FUN_06abf644();
  if (((uVar4 & 1) != 0) && (*(long *)(unaff_x20 + 0x70) != 0)) {
    FUN_06abf080();
    if (*(long *)(unaff_x20 + 0x70) != 0) {
                    /* try { // try from 06abfcec to 06bbfcef has its CatchHandler @ 06abfe10 */
      uVar5 = FUN_06abfdac();
      return uVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(int *)(DAT_083d04f0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (DAT_086e20da == '\0') {
                    /* try { // try from 06abfd18 to 06bbfd1f has its CatchHandler @ 06abfdf0 */
                    /* try { // try from 06abfd20 to 06bbfdcf has its CatchHandler @ 06abfa14 */
    FUN_0335b6c8(&DAT_083d04f0,1);
    DataMemoryBarrier(2,3);
    DAT_086e20da = '\x01';
  }
  if (*(int *)(DAT_083d04f0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  *unaff_x19 = **(undefined8 **)(DAT_083d04f0 + 0xb8);
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x19 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)unaff_x19 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return 0;
}


