/*
FUNCTION_NAME: OVRManager$$add_PassthroughLayerResumed
ENTRY_POINT: 0745aca8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_PassthroughLayerResumed
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  float *pfVar1;
  long unaff_x19;
  float *unaff_x20;
  long *unaff_x22;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float unaff_s9;
  float unaff_s10;
  float unaff_s14;
  float fVar15;
  float fVar16;
  ulong uVar8;
  
  param_4 = unaff_s10 - param_4;
  param_1 = unaff_s14 - param_1;
  if (DAT_0983637d == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_0983637d = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
                    /* try { // try from 0745ace8 to 0755aceb has its CatchHandler @ 0745ad04 */
                    /* try { // try from 0745acec to 0755acef has its CatchHandler @ 0745ad00 */
                    /* try { // try from 0745acf0 to 0755ad1f has its CatchHandler @ 0745ab10 */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745ac4c with catch @ 0745acf4
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745ac68 with catch @ 0745acf8
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745ac90 with catch @ 0745acfc
                        */
  uVar11 = (ulong)(uint)(param_1 * param_1);
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745acec with catch @ 0745ad00
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745ace8 with catch @ 0745ad04
                        */
  fVar2 = SQRT(param_1 * param_1 + unaff_s9 * unaff_s9 + param_4 * param_4);
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0745ac30 with catch @ 0745ad08
                        */
  if (fVar2 <= DAT_0191476c) {
                    /* try { // try from 0745ad20 to 0755ad23 has its CatchHandler @ 0745ad54 */
                    /* try { // try from 0745ad24 to 0755ad63 has its CatchHandler @ 0745ab10 */
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
    fVar16 = *pfVar1;
    param_4 = pfVar1[1];
                    /* catch() { ... } // from try @ 0745ad20 with catch @ 0745ad54 */
    param_1 = pfVar1[2];
  }
  else {
    fVar16 = unaff_s9 / fVar2;
    param_4 = param_4 / fVar2;
    param_1 = param_1 / fVar2;
  }
  uVar13 = (ulong)(uint)param_1;
  uVar10 = (ulong)(uint)param_4;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
                    /* try { // try from 0745ad64 to 0755ad6b has its CatchHandler @ 0745ad80 */
    fVar7 = unaff_x20[2];
    uVar8 = (ulong)(uint)fVar7;
    fVar2 = unaff_x20[1];
                    /* try { // try from 0745ad6c to 0755ad77 has its CatchHandler @ 0745ab10 */
    fVar14 = *(float *)(*(long *)(unaff_x19 + 0x40) + 0x60);
                    /* try { // try from 0745ad78 to 0755ad7f has its CatchHandler @ 0745ad80 */
    fVar3 = *unaff_x20;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0745ad64 with catch @ 0745ad80
                       catch(type#2 @ 00000000) { ... } // from try @ 0745ad78 with catch @ 0745ad80
                        */
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
                    /* try { // try from 0745ad90 to 0755aedb has its CatchHandler @ 0745ad90
                       catch() { ... } // from try @ 0745ad90 with catch @ 0745ad90
                       catch() { ... } // from try @ 0745af9c with catch @ 0745ad90
                       catch() { ... } // from try @ 0745aff4 with catch @ 0745ad90
                       catch() { ... } // from try @ 0745b010 with catch @ 0745ad90
                       catch() { ... } // from try @ 0745b050 with catch @ 0745ad90
                       catch() { ... } // from try @ 0745b084 with catch @ 0745ad90 */
    fVar4 = (float)FUN_08a5bc68();
    fVar15 = *(float *)(unaff_x19 + 0x58);
    uVar9 = uVar8;
    uVar12 = uVar11;
    uVar5 = FUN_08a5bc68();
    uVar6 = FUN_08a44a78(fVar16,uVar10,uVar13,uVar5,uVar9,uVar12,0);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_08a5e270((fVar3 - fVar16 * fVar14) + fVar4 * fVar15,
                   (fVar2 - param_4 * fVar14) + (float)uVar8 * fVar15,
                   (fVar7 - param_1 * fVar14) + (float)uVar11 * fVar15,uVar6,uVar10,uVar13,uVar5,
                   *(long *)(unaff_x19 + 0x38),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


