/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRawPose
ENTRY_POINT: 073dbfcc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetTrackingTransformRawPose
                (float param_1,float param_2,float param_3,undefined1 param_4 [16],float param_5,
                float param_6,undefined8 param_7,float *param_8)

{
  undefined *puVar1;
  bool bVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = *param_8;
  fVar4 = param_8[1];
  fVar5 = param_8[2];
  fVar7 = param_8[3] - fVar8;
  param_6 = param_6 - fVar4;
                    /* try { // try from 073dbfe8 to 074dbfeb has its CatchHandler @ 073dc00c */
  param_5 = param_5 - fVar5;
  if (DAT_0941112a == '\0') {
                    /* try { // try from 073dbffc to 074dbfff has its CatchHandler @ 073dc010 */
                    /* try { // try from 073dc000 to 074dc003 has its CatchHandler @ 073dc00c */
                    /* catch() { ... } // from try @ 073dbfc0 with catch @ 073dc004
                       try { // try from 073dc004 to 074dc037 has its CatchHandler @ 073dbf04 */
    FUN_03c8f898(PTR_DAT_08e722b0);
                    /* catch() { ... } // from try @ 073dbf98 with catch @ 073dc008 */
                    /* catch() { ... } // from try @ 073dbfe8 with catch @ 073dc00c
                       catch() { ... } // from try @ 073dc000 with catch @ 073dc00c */
                    /* catch() { ... } // from try @ 073dbf70 with catch @ 073dc010
                       catch() { ... } // from try @ 073dbffc with catch @ 073dc010 */
    DAT_0941112a = '\x01';
  }
                    /* catch() { ... } // from try @ 073dbf50 with catch @ 073dc01c */
                    /* try { // try from 073dc038 to 074dc04f has its CatchHandler @ 073dc158 */
  fVar6 = param_5 * param_5 + fVar7 * fVar7 + param_6 * param_6;
  if (**(float **)(*(long *)PTR_DAT_08e722b0 + 0xb8) <= fVar6) {
                    /* try { // try from 073dc088 to 074dc0a7 has its CatchHandler @ 073dc150 */
    fVar4 = (param_3 - fVar5) * param_5 + (param_1 - fVar8) * fVar7 + (param_2 - fVar4) * param_6;
                    /* try { // try from 073dc0ac to 074dc117 has its CatchHandler @ 073dc168 */
    fVar5 = (fVar7 * fVar4) / fVar6;
    fVar8 = (param_6 * fVar4) / fVar6;
    fVar4 = (param_5 * fVar4) / fVar6;
  }
  else {
                    /* try { // try from 073dc050 to 074dc067 has its CatchHandler @ 073dbf04 */
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
                    /* try { // try from 073dc068 to 074dc06f has its CatchHandler @ 073dc148 */
      DAT_0940fff5 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
                    /* try { // try from 073dc07c to 074dc083 has its CatchHandler @ 073dc144 */
    fVar5 = *pfVar3;
    fVar8 = pfVar3[1];
    fVar4 = pfVar3[2];
  }
  if (0.0 <= param_5 * fVar4 + fVar7 * fVar5 + param_6 * fVar8) {
    if (DAT_094100b5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e6a6b8);
      DAT_094100b5 = '\x01';
    }
    puVar1 = PTR_DAT_08e6a6b8;
    if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      bVar2 = DAT_094100b5 == '\0';
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      FUN_03c8f898(PTR_DAT_08e6a6b8);
      DAT_094100b5 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (SQRT(fVar5 * fVar5 + fVar8 * fVar8 + fVar4 * fVar4) <= SQRT(fVar6)) {
      fVar5 = fVar5 + *param_8;
    }
    else {
      fVar5 = param_8[3];
    }
  }
  else {
    fVar5 = *param_8;
  }
  return fVar5;
}


