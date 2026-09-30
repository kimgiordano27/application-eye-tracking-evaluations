/*
FUNCTION_NAME: OVRPlugin$$RequestBoundaryVisibility
ENTRY_POINT: 07c8c050
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRPlugin__RequestBoundaryVisibility(long *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
                    /* try { // try from 07c8c054 to 07d8c07b has its CatchHandler @ 07c8c404 */
  pfVar1 = *(float **)(*param_1 + 0xb8);
  fVar5 = *pfVar1;
  fVar6 = pfVar1[1];
  fVar4 = pfVar1[2];
  if (DAT_0a51c0c3 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1f580);
    DAT_0a51c0c3 = '\x01';
  }
  fVar2 = fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
  if (**(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8) <= fVar2) {
                    /* try { // try from 07c8c110 to 07d8c137 has its CatchHandler @ 07c8c250 */
    fVar3 = (fStack000000000000007c - fStack0000000000000008) * fVar4 +
            (fStack000000000000000c - unaff_s14) * fVar5 +
            (fStack0000000000000078 - unaff_s15) * fVar6;
    fVar5 = (fVar5 * fVar3) / fVar2;
    fVar6 = (fVar6 * fVar3) / fVar2;
    fVar2 = (fVar4 * fVar3) / fVar2;
  }
  else {
                    /* try { // try from 07c8c0b4 to 07d8c0db has its CatchHandler @ 07c8c254 */
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar5 = *pfVar1;
    fVar6 = pfVar1[1];
    fVar2 = pfVar1[2];
  }
  return 0.0 < unaff_s11 * fVar2 + unaff_s13 * fVar5 + unaff_s12 * fVar6;
}


