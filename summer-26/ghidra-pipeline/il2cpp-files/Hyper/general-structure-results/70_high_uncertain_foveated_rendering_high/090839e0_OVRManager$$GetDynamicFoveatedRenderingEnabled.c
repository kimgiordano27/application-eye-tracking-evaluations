/*
FUNCTION_NAME: OVRManager$$GetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 090839e0
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetDynamicFoveatedRenderingEnabled(void)

{
  long unaff_x19;
  long unaff_x20;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  
  if (*(char *)(unaff_x19 + 0x3e6) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    *(undefined1 *)(unaff_x19 + 0x3e6) = 1;
  }
                    /* try { // try from 09083a0c to 09183b9f has its CatchHandler @ 09083a0c
                       catch() { ... } // from try @ 09083a0c with catch @ 09083a0c
                       catch() { ... } // from try @ 09083bac with catch @ 09083a0c
                       catch() { ... } // from try @ 09083c58 with catch @ 09083a0c
                       catch() { ... } // from try @ 09083c7c with catch @ 09083a0c
                       catch() { ... } // from try @ 09083cc4 with catch @ 09083a0c
                       catch() { ... } // from try @ 09083d78 with catch @ 09083a0c
                       catch() { ... } // from try @ 09083d90 with catch @ 09083a0c */
  if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if ((SQRT(unaff_s14 * unaff_s14 + unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13) <= DAT_01df50c4)
     && (DAT_0b31f3e7 == '\0')) {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b31f3e7 = '\x01';
  }
  if (*(char *)(unaff_x20 + 0x23b) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    *(undefined1 *)(unaff_x20 + 0x23b) = 1;
  }
  FUN_0a16adac(0);
  FUN_0a16a4c4(0);
  return;
}


