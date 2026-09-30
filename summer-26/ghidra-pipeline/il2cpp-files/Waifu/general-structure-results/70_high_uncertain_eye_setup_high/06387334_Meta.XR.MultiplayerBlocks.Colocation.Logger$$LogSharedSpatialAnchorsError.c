/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Logger$$LogSharedSpatialAnchorsError
ENTRY_POINT: 06387334
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06387430) */
/* WARNING: Removing unreachable block (ram,0x06387370) */

void Meta_XR_MultiplayerBlocks_Colocation_Logger__LogSharedSpatialAnchorsError
               (ulong param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined8 param_4,
               undefined8 param_5,long param_6)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  float unaff_s8;
  
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083cf7d8,1);
                    /* try { // try from 06387350 to 0648735f has its CatchHandler @ 06387724 */
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x20 + 0xa0d) = 1;
  }
  lVar1 = Meta_XR_MultiplayerBlocks_Colocation_NetworkAdapter__set_NetworkData(param_6);
  if (lVar1 != 0) {
    fVar4 = unaff_s8;
                    /* try { // try from 06387378 to 0648737b has its CatchHandler @ 06387734 */
                    /* try { // try from 0638737c to 0648737f has its CatchHandler @ 06387730 */
    if (unaff_s8 < 0.0) {
      fVar4 = 0.0;
    }
                    /* try { // try from 06387380 to 06487383 has its CatchHandler @ 06387728 */
    *(float *)(lVar1 + 0x20) = fVar4;
                    /* try { // try from 06387384 to 06487387 has its CatchHandler @ 06387720 */
    if (*(long *)(lVar1 + 0x58) != 0) {
                    /* try { // try from 06387388 to 0648738b has its CatchHandler @ 06387710 */
                    /* try { // try from 0638738c to 0648738f has its CatchHandler @ 0638770c */
      *(undefined1 *)(*(long *)(lVar1 + 0x58) + 0x18) = 1;
                    /* try { // try from 06387390 to 06487393 has its CatchHandler @ 063876f0 */
                    /* try { // try from 06387394 to 06487397 has its CatchHandler @ 063876ec */
                    /* try { // try from 06387398 to 0648739b has its CatchHandler @ 063876e8 */
      uVar3 = *(undefined8 *)(param_6 + 0x20);
                    /* try { // try from 063873a0 to 064873a3 has its CatchHandler @ 06387698 */
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                    /* try { // try from 063873a4 to 064873a7 has its CatchHandler @ 063876e4 */
        FUN_033b9870();
      }
                    /* try { // try from 063873a8 to 064873ab has its CatchHandler @ 063876e0 */
                    /* try { // try from 063873ac to 064873af has its CatchHandler @ 063876dc */
                    /* try { // try from 063873b0 to 064873b3 has its CatchHandler @ 063876d8 */
      uVar2 = FUN_07a11b14(uVar3,0);
                    /* try { // try from 063873b4 to 064873b7 has its CatchHandler @ 063876d4 */
      if ((uVar2 & 1) != 0) {
                    /* try { // try from 063873b8 to 064873bb has its CatchHandler @ 063876d0 */
        lVar1 = *(long *)(param_6 + 0x20);
                    /* try { // try from 063873bc to 064873bf has its CatchHandler @ 063876cc */
        if (lVar1 == 0) goto LAB_063874d0;
        fVar4 = *(float *)(param_6 + 0x28);
                    /* try { // try from 063873c4 to 064873c7 has its CatchHandler @ 06387690 */
                    /* try { // try from 063873c8 to 064873cb has its CatchHandler @ 063876b4 */
                    /* try { // try from 063873cc to 064873cf has its CatchHandler @ 063876b0 */
                    /* try { // try from 063873d0 to 064873d3 has its CatchHandler @ 063876ac */
        if (DAT_086f4118 == (code *)0x0) {
                    /* try { // try from 063873d4 to 064873d7 has its CatchHandler @ 063876a8 */
                    /* try { // try from 063873d8 to 064873db has its CatchHandler @ 063876fc */
                    /* try { // try from 063873dc to 064873df has its CatchHandler @ 063876a4 */
          DAT_086f4118 = (code *)FUN_033d1b68("UnityEngine.WindZone::set_windMain(System.Single)");
        }
        (*DAT_086f4118)(fVar4 * unaff_s8,lVar1);
      }
      uVar3 = *(undefined8 *)(param_6 + 0x30);
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar2 = FUN_07a11b14(uVar3,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(long *)(param_6 + 0x38) != 0) {
        fVar4 = unaff_s8 / 50.0;
        uVar3 = 0;
        if (fVar4 < 0.0) {
          fVar4 = 0.0;
        }
        uVar5 = FUN_079fbccc(fVar4,*(long *)(param_6 + 0x38),0);
        lVar1 = *(long *)(param_6 + 0x30);
        if (lVar1 != 0) {
          if (DAT_086edc60 == (code *)0x0) {
            DAT_086edc60 = (code *)FUN_033d1b68("UnityEngine.Renderer::GetMaterial()");
          }
          lVar1 = (*DAT_086edc60)(lVar1);
          if (lVar1 != 0) {
            FUN_079de5f8(uVar5,uVar3,param_4,param_5,lVar1,0);
            return;
          }
        }
      }
    }
  }
LAB_063874d0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


