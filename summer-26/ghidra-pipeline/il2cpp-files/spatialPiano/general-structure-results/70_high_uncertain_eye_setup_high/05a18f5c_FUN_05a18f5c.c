/*
FUNCTION_NAME: FUN_05a18f5c
ENTRY_POINT: 05a18f5c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_05a18f5c(uint *param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  uint *puVar10;
  
                    /* try { // try from 05a18f74 to 05b18f77 has its CatchHandler @ 05a18f80 */
  if ((DAT_06bc2066 & 1) == 0) {
                    /* catch() { ... } // from try @ 05a18f74 with catch @ 05a18f80 */
                    /* try { // try from 05a18f88 to 05b18f8f has its CatchHandler @ 05a19100 */
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
                    /* try { // try from 05a18f90 to 05b18faf has its CatchHandler @ 05a18ce4 */
    DAT_06bc2066 = 1;
  }
  puVar4 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
                    /* catch() { ... } // from try @ 05a18e3c with catch @ 05a18f94 */
  uVar16 = *param_2;
  uVar17 = (ulong)uVar16;
  if ((int)*param_1 < (int)uVar16) {
    uVar14 = 0;
  }
  else {
                    /* try { // try from 05a18fb0 to 05b18fb3 has its CatchHandler @ 05a18fc0 */
    puVar8 = param_2 + 1;
    puVar18 = param_1 + 1;
                    /* catch() { ... } // from try @ 05a18fb0 with catch @ 05a18fc0 */
    puVar1 = puVar8 + (long)(int)uVar16 + -1;
                    /* try { // try from 05a18fc4 to 05b18fcb has its CatchHandler @ 05a19100 */
                    /* try { // try from 05a18fcc to 05b18feb has its CatchHandler @ 05a18ce4 */
                    /* catch() { ... } // from try @ 05a18f04 with catch @ 05a18fd0
                       catch() { ... } // from try @ 05a18f28 with catch @ 05a18fd0 */
    uVar6 = *puVar1 + 1;
    uVar14 = 0;
    if (uVar6 != 0) {
      uVar14 = puVar18[(long)(int)uVar16 + -1] / uVar6;
    }
    if (uVar6 <= puVar18[(long)(int)uVar16 + -1]) {
      uVar12 = 0;
      lVar11 = 0;
                    /* try { // try from 05a18fec to 05b19003 has its CatchHandler @ 05a190f0 */
      puVar7 = puVar18;
      puVar9 = puVar8;
      do {
        puVar10 = puVar9 + 1;
        uVar13 = uVar12 + (ulong)*puVar9 * (ulong)uVar14;
                    /* try { // try from 05a19004 to 05b190d3 has its CatchHandler @ 05a18ce4 */
        uVar12 = uVar13 >> 0x20;
        lVar2 = (lVar11 - (uVar13 & 0xffffffff)) + (ulong)*puVar7;
        lVar11 = lVar2 >> 0x20;
        *puVar7 = (uint)lVar2;
        puVar7 = puVar7 + 1;
        puVar9 = puVar10;
      } while (puVar10 <= puVar1);
      puVar7 = param_1 + uVar17;
      do {
        uVar15 = (uint)uVar17;
        uVar17 = (ulong)(uVar15 - 1);
        uVar6 = uVar16 & (int)uVar16 >> 0x1f;
        if ((int)uVar15 < 1) break;
        uVar3 = *puVar7;
        puVar7 = puVar7 + -1;
        uVar6 = uVar15;
      } while (uVar3 == 0);
      uVar17 = (ulong)uVar6;
      *param_1 = uVar6;
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    iVar5 = FUN_05a18440(param_1,param_2);
    if (-1 < iVar5) {
      lVar11 = 0;
      do {
        puVar7 = puVar8 + 1;
        lVar2 = (lVar11 - (ulong)*puVar8) + (ulong)*puVar18;
        lVar11 = lVar2 >> 0x20;
        *puVar18 = (uint)lVar2;
        puVar8 = puVar7;
        puVar18 = puVar18 + 1;
      } while (puVar7 <= puVar1);
      uVar16 = (uint)uVar17;
      uVar14 = uVar14 + 1;
      puVar8 = param_1 + uVar17;
      do {
        uVar15 = (uint)uVar17;
        uVar17 = (ulong)(uVar15 - 1);
        uVar6 = uVar16 & (int)uVar16 >> 0x1f;
        if ((int)uVar15 < 1) break;
        uVar3 = *puVar8;
        puVar8 = puVar8 + -1;
        uVar6 = uVar15;
      } while (uVar3 == 0);
      *param_1 = uVar6;
    }
  }
  return uVar14;
}


