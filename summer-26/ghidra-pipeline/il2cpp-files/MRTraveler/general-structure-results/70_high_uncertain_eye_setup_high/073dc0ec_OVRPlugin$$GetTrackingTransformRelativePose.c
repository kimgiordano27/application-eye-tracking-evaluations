/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRelativePose
ENTRY_POINT: 073dc0ec
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetTrackingTransformRelativePose(void)

{
  undefined *puVar1;
  bool bVar2;
  float *unaff_x19;
  long unaff_x20;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  if (*(char *)(unaff_x20 + 0xb5) == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    *(undefined1 *)(unaff_x20 + 0xb5) = 1;
  }
  puVar1 = PTR_DAT_08e6a6b8;
                    /* try { // try from 073dc118 to 074dc12b has its CatchHandler @ 073dbf04 */
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
                    /* try { // try from 073dc12c to 074dc13b has its CatchHandler @ 073dc158 */
    bVar2 = *(char *)(unaff_x20 + 0xb5) == '\0';
  }
  else {
    bVar2 = false;
  }
                    /* try { // try from 073dc140 to 074dc143 has its CatchHandler @ 073dc14c */
                    /* catch() { ... } // from try @ 073dc07c with catch @ 073dc144 */
                    /* catch() { ... } // from try @ 073dc068 with catch @ 073dc148 */
  if (bVar2) {
                    /* catch() { ... } // from try @ 073dc140 with catch @ 073dc14c */
                    /* catch() { ... } // from try @ 073dc088 with catch @ 073dc150 */
    FUN_03c8f898(PTR_DAT_08e6a6b8);
                    /* catch() { ... } // from try @ 073dc038 with catch @ 073dc158
                       catch() { ... } // from try @ 073dc12c with catch @ 073dc158 */
                    /* try { // try from 073dc15c to 074dc15f has its CatchHandler @ 073dc1d0 */
    *(undefined1 *)(unaff_x20 + 0xb5) = 1;
  }
                    /* try { // try from 073dc160 to 074dc17f has its CatchHandler @ 073dbf04 */
                    /* catch() { ... } // from try @ 073dc0ac with catch @ 073dc168 */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (SQRT(unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10) <= SQRT(unaff_s11)) {
    fVar3 = unaff_s8 + *unaff_x19;
                    /* try { // try from 073dc198 to 074dc1b3 has its CatchHandler @ 073dbf04 */
  }
  else {
                    /* try { // try from 073dc180 to 074dc197 has its CatchHandler @ 073dc1c4 */
    fVar3 = unaff_x19[3];
  }
                    /* try { // try from 073dc1b4 to 074dc1c3 has its CatchHandler @ 073dc1c4 */
  return fVar3;
}


