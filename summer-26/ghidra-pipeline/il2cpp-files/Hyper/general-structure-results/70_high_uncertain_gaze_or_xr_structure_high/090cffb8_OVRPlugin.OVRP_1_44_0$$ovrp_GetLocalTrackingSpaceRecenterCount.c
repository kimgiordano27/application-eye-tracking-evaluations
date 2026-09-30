/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetLocalTrackingSpaceRecenterCount
ENTRY_POINT: 090cffb8
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetLocalTrackingSpaceRecenterCount(void)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  undefined4 unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
                    /* catch() { ... } // from try @ 090cffac with catch @ 090cffbc */
  FUN_0a1ecff0(unaff_s12 + unaff_s12 + unaff_s13);
  FUN_0a1ed178();
  if (DAT_0b32d23b == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b32d23b = '\x01';
  }
  fVar2 = 0.0;
  if (0.0 <= unaff_s11) {
    fVar2 = unaff_s11;
  }
  lVar1 = *(long *)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
  fVar2 = fVar2 + unaff_s13 * 0.5;
  FUN_0a1ecce0(fVar2 * *(float *)(lVar1 + 0x48),fVar2 * *(float *)(lVar1 + 0x4c),
               fVar2 * *(float *)(lVar1 + 0x50));
  lVar1 = FUN_0a17834c();
  if (lVar1 != 0) {
    FUN_0a18ac70();
    FUN_0a18aea0(unaff_s10,lVar1,0);
    lVar1 = FUN_0a178414();
    if (lVar1 != 0) {
      FUN_0a17b958(lVar1,*(undefined4 *)(unaff_x19 + 0x4c),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


