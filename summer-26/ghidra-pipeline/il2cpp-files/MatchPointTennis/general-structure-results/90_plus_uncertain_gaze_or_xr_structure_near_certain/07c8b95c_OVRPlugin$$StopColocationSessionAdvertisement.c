/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionAdvertisement
ENTRY_POINT: 07c8b95c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRPlugin__StopColocationSessionAdvertisement(float param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  param_1 = SQRT(param_1);
  if (param_1 <= param_2) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar2 = *pfVar1;
    fVar3 = pfVar1[1];
    param_1 = pfVar1[2];
  }
  else {
    fVar2 = unaff_s8 / param_1;
    fVar3 = unaff_s9 / param_1;
    param_1 = unaff_s10 / param_1;
  }
  fVar4 = unaff_s13 * param_1 + unaff_s15 * fVar2 + unaff_s12 * fVar3;
  fVar2 = unaff_s14 * param_1 + fStack000000000000000c * fVar2 + fStack0000000000000008 * fVar3;
  fVar3 = fVar2 - fVar4;
                    /* try { // try from 07c8b9f0 to 07d8b9f7 has its CatchHandler @ 07c8bb20 */
                    /* try { // try from 07c8ba0c to 07d8ba1b has its CatchHandler @ 07c8bb1c */
                    /* try { // try from 07c8ba1c to 07d8ba73 has its CatchHandler @ 07c8b938 */
  return (0.0 < fVar3 || fVar3 < 0.0) && ABS(fVar2 - fVar4) < DAT_01c7621c;
}


