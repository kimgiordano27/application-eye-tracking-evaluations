/*
FUNCTION_NAME: OVRManager$$CreateMixedRealityCaptureConfigurationFileFromCmd
ENTRY_POINT: 073c67e0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__CreateMixedRealityCaptureConfigurationFileFromCmd
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4,float *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  uint *puVar4;
  long unaff_x21;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  puVar2 = PTR_DAT_08e78410;
  if ((*(byte *)(unaff_x21 + 0x64b) & 1) == 0) {
                    /* try { // try from 073c67fc to 074c67ff has its CatchHandler @ 073c6808 */
                    /* try { // try from 073c6800 to 074c6823 has its CatchHandler @ 073c6714 */
    FUN_03c8f898(PTR_DAT_08e68f00);
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 073c67c4 with catch @ 073c6804
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 073c67fc with catch @ 073c6808
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 073c67b0 with catch @ 073c680c
                        */
    FUN_03c8f898(PTR_DAT_08e78410);
    *(undefined1 *)(unaff_x21 + 0x64b) = 1;
  }
  puVar1 = PTR_DAT_08e68f00;
                    /* try { // try from 073c6824 to 074c6827 has its CatchHandler @ 073c6858 */
                    /* try { // try from 073c6828 to 074c6867 has its CatchHandler @ 073c6714 */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar11 = FUN_085e987c(param_5,0);
  uVar5 = *(undefined8 *)(param_4 + 0x30);
  uVar3 = param_2;
  uVar17 = param_3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 073c6824 with catch @ 073c6858 */
    thunk_FUN_03cd7500();
  }
  fVar13 = (float)uVar3;
                    /* try { // try from 073c6868 to 074c686f has its CatchHandler @ 073c6884 */
  uVar3 = FUN_085decd4(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 073c6870 to 074c687b has its CatchHandler @ 073c6714 */
    if (*(long *)(param_4 + 0x30) == 0) goto LAB_073c6b04;
    fVar22 = param_5[1];
    fVar6 = param_5[2];
                    /* try { // try from 073c687c to 074c6883 has its CatchHandler @ 073c6884 */
    fVar20 = *param_5;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 073c6868 with catch @ 073c6884
                       catch(type#2 @ 00000000) { ... } // from try @ 073c687c with catch @ 073c6884
                        */
                    /* try { // try from 073c6888 to 074c6a27 has its CatchHandler @ 073c6888
                       catch() { ... } // from try @ 073c6888 with catch @ 073c6888
                       catch() { ... } // from try @ 073c6ab8 with catch @ 073c6888
                       catch() { ... } // from try @ 073c6af0 with catch @ 073c6888
                       catch() { ... } // from try @ 073c6b1c with catch @ 073c6888
                       catch() { ... } // from try @ 073c6b5c with catch @ 073c6888 */
    fVar7 = (float)FUN_085eb198(*(long *)(param_4 + 0x30),0);
    fVar21 = (float)uVar17;
    fVar10 = fVar13;
    fVar14 = fVar21;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    fVar8 = (float)FUN_085e995c(param_5,0);
    if (DAT_09410ea2 == '\0') {
      FUN_03c8f898(PTR_DAT_08e722b0);
      DAT_09410ea2 = '\x01';
    }
    fVar9 = fVar14 * fVar14 + fVar8 * fVar8 + fVar10 * fVar10;
    fVar20 = fVar20 - fVar7;
    fVar22 = fVar22 - fVar13;
    fVar6 = fVar6 - fVar21;
    if (**(float **)(*(long *)PTR_DAT_08e722b0 + 0xb8) <= fVar9) {
      fVar13 = fVar6 * fVar14 + fVar20 * fVar8 + fVar22 * fVar10;
      fVar20 = fVar20 - (fVar8 * fVar13) / fVar9;
      fVar22 = fVar22 - (fVar10 * fVar13) / fVar9;
      fVar6 = fVar6 - (fVar14 * fVar13) / fVar9;
    }
    if (DAT_094100b4 == '\0') {
      FUN_03c8f898(PTR_DAT_08e6a6b8);
      DAT_094100b4 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar17 = (ulong)(uint)(fVar6 * fVar6);
    fVar13 = SQRT(fVar6 * fVar6 + fVar20 * fVar20 + fVar22 * fVar22);
    if (fVar13 <= DAT_018b0528) {
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      puVar4 = *(uint **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
      uVar11 = (ulong)*puVar4;
      param_2 = (ulong)puVar4[1];
      param_3 = (ulong)puVar4[2];
    }
    else {
      uVar11 = (ulong)(uint)(fVar20 / fVar13);
      param_2 = (ulong)(uint)(fVar22 / fVar13);
      param_3 = (ulong)(uint)(fVar6 / fVar13);
    }
  }
  if (*(long *)(param_4 + 0x40) != 0) {
    fVar14 = param_5[2];
    uVar3 = (ulong)(uint)fVar14;
    fVar13 = param_5[1];
    fVar6 = *(float *)(*(long *)(param_4 + 0x40) + 0x60);
    fVar10 = *param_5;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    fVar7 = (float)FUN_085e995c(param_5,0);
    fVar21 = *(float *)(param_4 + 0x58);
    uVar15 = uVar3;
    uVar18 = uVar17;
    uVar5 = FUN_085e995c(param_5,0);
    uVar16 = param_2;
    uVar19 = param_3;
    uVar12 = FUN_085d28c8(uVar11,param_2,param_3,uVar5,uVar15,uVar18,0);
    if (*(long *)(param_4 + 0x38) != 0) {
      FUN_085ebce8((fVar10 - (float)uVar11 * fVar6) + fVar7 * fVar21,
                   (fVar13 - (float)param_2 * fVar6) + (float)uVar3 * fVar21,
                   (fVar14 - (float)param_3 * fVar6) + (float)uVar17 * fVar21,uVar12,uVar16,uVar19,
                   uVar5,*(long *)(param_4 + 0x38),0);
      return;
    }
  }
LAB_073c6b04:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


