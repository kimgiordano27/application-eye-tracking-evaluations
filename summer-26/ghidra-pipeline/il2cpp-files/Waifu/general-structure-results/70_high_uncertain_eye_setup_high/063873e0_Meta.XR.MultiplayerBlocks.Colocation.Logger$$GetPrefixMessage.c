/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Logger$$GetPrefixMessage
ENTRY_POINT: 063873e0
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06387430) */

void Meta_XR_MultiplayerBlocks_Colocation_Logger__GetPrefixMessage
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
               undefined8 param_4,code *param_5)

{
  ulong uVar1;
  long unaff_x19;
  long lVar2;
  undefined8 uVar3;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar4;
  float fVar5;
  float unaff_s8;
  
  *(code **)(unaff_x22 + 0x118) = param_5;
                    /* try { // try from 063873ec to 06487427 has its CatchHandler @ 0638769c */
  (*param_5)();
  uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar1 = FUN_07a11b14(uVar3,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    fVar5 = unaff_s8 / 50.0;
                    /* try { // try from 06387434 to 0648746f has its CatchHandler @ 06387694 */
    uVar3 = 0;
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    uVar4 = FUN_079fbccc(fVar5,*(long *)(unaff_x19 + 0x38),0);
    lVar2 = *(long *)(unaff_x19 + 0x30);
    if (lVar2 != 0) {
      if (DAT_086edc60 == (code *)0x0) {
                    /* try { // try from 06387470 to 06487473 has its CatchHandler @ 06387680 */
                    /* try { // try from 06387474 to 06487477 has its CatchHandler @ 0638767c */
        DAT_086edc60 = (code *)FUN_033d1b68("UnityEngine.Renderer::GetMaterial()");
                    /* try { // try from 06387478 to 0648747b has its CatchHandler @ 06387678 */
                    /* try { // try from 0638747c to 0648747f has its CatchHandler @ 06387674 */
      }
                    /* try { // try from 06387480 to 06487483 has its CatchHandler @ 0638766c */
                    /* try { // try from 06387484 to 06487487 has its CatchHandler @ 06387668 */
      lVar2 = (*DAT_086edc60)(lVar2);
      if (lVar2 != 0) {
        FUN_079de5f8(uVar4,uVar3,param_3,param_4,lVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


