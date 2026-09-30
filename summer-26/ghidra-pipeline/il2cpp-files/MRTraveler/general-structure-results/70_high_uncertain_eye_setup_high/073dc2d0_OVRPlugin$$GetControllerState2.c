/*
FUNCTION_NAME: OVRPlugin$$GetControllerState2
ENTRY_POINT: 073dc2d0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetControllerState2(float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  float *pfVar2;
  ulong *unaff_x19;
  float *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s8;
  float fVar17;
  float unaff_s9;
  float unaff_s15;
  float fVar18;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 in_stack_000000a8;
  
                    /* try { // try from 073dc2d8 to 074dc2e3 has its CatchHandler @ 073dc420 */
  if (*(char *)(unaff_x24 + 0xb4) == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    *(undefined1 *)(unaff_x24 + 0xb4) = 1;
  }
                    /* try { // try from 073dc2fc to 074dc307 has its CatchHandler @ 073dc41c */
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
                    /* try { // try from 073dc318 to 074dc32f has its CatchHandler @ 073dc418 */
  fVar3 = SQRT(unaff_s9 * unaff_s9 + unaff_s15 * unaff_s15 + unaff_s8 * unaff_s8);
  if (fVar3 <= DAT_018b0528) {
                    /* try { // try from 073dc350 to 074dc357 has its CatchHandler @ 073dc408 */
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
                    /* try { // try from 073dc36c to 074dc373 has its CatchHandler @ 073dc414 */
    pfVar2 = *(float **)(*unaff_x23 + 0xb8);
    fVar10 = *pfVar2;
    fVar13 = pfVar2[1];
    fVar3 = pfVar2[2];
  }
  else {
    fVar10 = unaff_s15 / fVar3;
    fVar13 = unaff_s8 / fVar3;
    fVar3 = unaff_s9 / fVar3;
  }
  puVar1 = PTR_DAT_08e78410;
  fVar4 = *unaff_x22;
  fVar5 = unaff_x22[1];
  fVar6 = unaff_x22[2];
  fVar7 = unaff_x22[3];
                    /* try { // try from 073dc388 to 074dc38f has its CatchHandler @ 073dc410 */
  fVar8 = unaff_x22[4];
  fVar9 = unaff_x22[5];
                    /* try { // try from 073dc3a0 to 074dc3df has its CatchHandler @ 073dc428 */
  fVar11 = fVar10 * fVar4;
  fVar14 = fVar13 * fVar5;
  fVar18 = fVar3 * fVar6;
  fVar17 = fVar3 * fVar9 + fVar10 * fVar7 + fVar13 * fVar8;
  if (DAT_094108d2 == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    DAT_094108d2 = '\x01';
    fVar4 = *unaff_x22;
    fVar5 = unaff_x22[1];
    fVar6 = unaff_x22[2];
    fVar7 = unaff_x22[3];
                    /* try { // try from 073dc3f4 to 074dc3f7 has its CatchHandler @ 073dc42c */
    fVar8 = unaff_x22[4];
    fVar9 = unaff_x22[5];
  }
                    /* try { // try from 073dc3f8 to 074dc3fb has its CatchHandler @ 073dc424 */
                    /* try { // try from 073dc3fc to 074dc3ff has its CatchHandler @ 073dc41c */
                    /* try { // try from 073dc400 to 074dc403 has its CatchHandler @ 073dc418 */
                    /* try { // try from 073dc404 to 074dc407 has its CatchHandler @ 073dc40c */
                    /* catch() { ... } // from try @ 073dc350 with catch @ 073dc408
                       try { // try from 073dc408 to 074dc453 has its CatchHandler @ 073dc1d4 */
  fVar15 = ABS(fVar17);
                    /* catch() { ... } // from try @ 073dc404 with catch @ 073dc40c */
                    /* catch() { ... } // from try @ 073dc388 with catch @ 073dc410 */
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  fVar16 = **(float **)(*(long *)PTR_DAT_08e722b0 + 0xb8) * 8.0;
  fVar12 = fVar15 * DAT_018b0840;
  if (fVar15 * DAT_018b0840 <= fVar16) {
    fVar12 = fVar16;
  }
  fVar15 = 0.0;
  if (fVar12 <= ABS(0.0 - fVar17)) {
    fVar15 = ((param_3 * fVar3 + param_1 * fVar10 + param_2 * fVar13) - (fVar18 + fVar11 + fVar14))
             / fVar17;
  }
  FUN_073dc704(fVar4 + fVar7 * fVar15,fVar5 + fVar8 * fVar15,fVar6 + fVar15 * fVar9);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_085e9668(0,0,0,&stack0x00000040,0);
  FUN_073dc554();
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000 & 0xffffffff00000000;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  return 1;
}


