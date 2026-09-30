/*
FUNCTION_NAME: Firebase.Firestore.Converters.EnumerableConverter$$DeserializeArray
ENTRY_POINT: 02f0ae6c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


float Firebase_Firestore_Converters_EnumerableConverter__DeserializeArray(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  float fVar5;
  float unaff_s9;
  
  FUN_02d6084c(PTR_DAT_0675e318);
                    /* try { // try from 02f0ae7c to 0300ae87 has its CatchHandler @ 02f0c4d8 */
  *(undefined1 *)(unaff_x20 + 0x24a) = 1;
  puVar1 = PTR_DAT_0675e318;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar2 = PTR_DAT_0675e6c8;
  FUN_060219fc(0);
  if (*(char *)(unaff_x20 + 0x24a) == '\0') {
    FUN_02d6084c(PTR_DAT_0675e318);
                    /* try { // try from 02f0af04 to 0300af1b has its CatchHandler @ 02f0c4e0 */
    *(undefined1 *)(unaff_x20 + 0x24a) = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar3 = FUN_060ed6b8(unaff_x19 + 0x44,0);
  if ((uVar3 & 1) == 0) {
    if (DAT_06b7224b == '\0') {
      FUN_02d6084c(PTR_DAT_0675e318);
      DAT_06b7224b = '\x01';
    }
    fVar5 = **(float **)(*(long *)puVar1 + 0xb8);
  }
  else {
                    /* try { // try from 02f0af68 to 0300af6f has its CatchHandler @ 02f0c4c8 */
    FUN_060f3440(unaff_x19 + 0x44,0);
    fVar5 = unaff_s9;
    lVar4 = FUN_06066c74();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_06078c44(lVar4,0);
    unaff_s9 = unaff_s9 - fVar5;
    fVar5 = *(float *)(unaff_x19 + 0x3c);
    if (unaff_s9 <= *(float *)(unaff_x19 + 0x3c)) {
      fVar5 = unaff_s9;
    }
    if (unaff_s9 < *(float *)(unaff_x19 + 0x38)) {
      fVar5 = *(float *)(unaff_x19 + 0x38);
    }
    if (DAT_06b72245 == '\0') {
      FUN_02d6084c(PTR_DAT_0675e318);
      DAT_06b72245 = '\x01';
    }
                    /* try { // try from 02f0afc0 to 0300afd7 has its CatchHandler @ 02f0c4e0 */
    fVar5 = fVar5 * *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
  }
                    /* try { // try from 02f0b024 to 0300b02b has its CatchHandler @ 02f0c4c4 */
  return fVar5;
}


