/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlayerNameTagSpawner$$Start
ENTRY_POINT: 0638149c
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_PlayerNameTagSpawner__Start
               (long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulong uVar4;
  long in_x9;
  long in_x10;
  long lVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
                    /* catch() { ... } // from try @ 063813c8 with catch @ 0638149c
                       catch() { ... } // from try @ 06381400 with catch @ 0638149c */
  if (0 < *(int *)(in_x9 + 0xc)) {
    param_1 = param_1 + in_x10 * 0x44;
    lVar5 = (long)*(int *)(param_1 + 4);
                    /* try { // try from 063814b8 to 064814d3 has its CatchHandler @ 0638155c */
                    /* try { // try from 063814d4 to 064814df has its CatchHandler @ 063810b4 */
    uVar3 = *(uint *)(*(long *)(unaff_x19 + 0x50) +
                     (long)((param_3 - *(int *)(param_1 + 0x14)) +
                           *(int *)(*(long *)(unaff_x19 + 0x10) + lVar5 * 0x50 + 0x14)) * 4);
    uVar4 = (ulong)(uVar3 >> 0x18) & 0xf;
    if ((int)uVar4 != 0) {
                    /* try { // try from 063814e0 to 064814fb has its CatchHandler @ 0638155c */
                    /* try { // try from 063814fc to 0648154b has its CatchHandler @ 063810b4 */
      fVar13 = 0.0;
      iVar6 = *(int *)(*(long *)(unaff_x19 + 0x10) + lVar5 * 0x50 + 0x44) + (uVar3 & 0xffffff);
      fVar14 = 0.0;
      fVar15 = 0.0;
      fVar10 = 0.0;
      fVar11 = 0.0;
      fVar12 = 0.0;
      do {
        lVar5 = (long)iVar6;
        uVar4 = uVar4 - 1;
        iVar6 = iVar6 + 1;
        iVar1 = *(int *)(*(long *)(unaff_x19 + 0x60) + lVar5 * 4) + *(int *)(in_x9 + 0x34);
        pfVar8 = (float *)(*(long *)(unaff_x19 + 0x70) + (long)iVar1 * 0xc);
        pfVar7 = (float *)(*(long *)(unaff_x19 + 0x80) + (long)iVar1 * 0xc);
        fVar12 = fVar12 + *pfVar8;
        fVar11 = fVar11 + pfVar8[1];
                    /* try { // try from 0638154c to 0648155b has its CatchHandler @ 0638155c */
        fVar10 = fVar10 + pfVar8[2];
        fVar15 = fVar15 + *pfVar7;
        fVar14 = fVar14 + pfVar7[1];
                    /* catch() { ... } // from try @ 063814b8 with catch @ 0638155c
                       catch() { ... } // from try @ 063814e0 with catch @ 0638155c
                       catch() { ... } // from try @ 0638154c with catch @ 0638155c */
        fVar13 = fVar13 + pfVar7[2];
                    /* try { // try from 06381560 to 06481563 has its CatchHandler @ 0638156c */
      } while (uVar4 != 0);
                    /* try { // try from 06381564 to 0648156f has its CatchHandler @ 063810b4 */
                    /* catch() { ... } // from try @ 06381474 with catch @ 0638156c
                       catch() { ... } // from try @ 06381560 with catch @ 0638156c */
      fVar16 = fVar10 * fVar10 + fVar12 * fVar12 + fVar11 * fVar11;
      if (DAT_012edc5c < fVar16) {
        if (DAT_086d90cb == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          DAT_086d90cb = '\x01';
        }
        if ((*(int *)(DAT_083ce8b0 + 0xe0) == 0) && (FUN_033b9870(), DAT_086d90cb == '\0')) {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          DAT_086d90cb = '\x01';
        }
        fVar16 = 1.0 / SQRT(fVar16);
        fVar11 = fVar11 * fVar16;
        fVar10 = fVar10 * fVar16;
        if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        fVar15 = fVar15 * (1.0 / SQRT(fVar13 * fVar13 + fVar15 * fVar15 + fVar14 * fVar14));
        uVar9 = FUN_03794fcc(fVar12 * fVar16,0);
        puVar2 = (undefined4 *)(*(long *)(unaff_x19 + 0x90) + unaff_x20 * 0x10);
        *puVar2 = uVar9;
        puVar2[1] = fVar11;
        puVar2[2] = fVar10;
        puVar2[3] = fVar15;
      }
    }
  }
  return;
}


