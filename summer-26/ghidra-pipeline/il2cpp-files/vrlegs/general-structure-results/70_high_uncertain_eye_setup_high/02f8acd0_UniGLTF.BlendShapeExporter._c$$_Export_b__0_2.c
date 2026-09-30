/*
FUNCTION_NAME: UniGLTF.BlendShapeExporter.<>c$$<Export>b__0_2
ENTRY_POINT: 02f8acd0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f8add4) */

void UniGLTF_BlendShapeExporter_<>c__<Export>b__0_2(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  long unaff_x26;
  char cStack000000000000001c;
  
  OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
  if (unaff_x26 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
                    /* try { // try from 02f8ace0 to 0308ace3 has its CatchHandler @ 02f8ae44 */
                    /* try { // try from 02f8ace4 to 0308acef has its CatchHandler @ 02f8ae60 */
                    /* try { // try from 02f8ad04 to 0308ad13 has its CatchHandler @ 02f8ae7c */
  if (((unaff_w24 != 0) &&
      ((unaff_w23 < *(int *)(unaff_x20 + 0x20) || (uVar3 = FUN_02f8b74c(), (uVar3 & 1) != 0)))) &&
     ((*(int *)(unaff_x20 + 0x24) < *(int *)(unaff_x20 + 0x1c) ||
      (uVar3 = FUN_02f8b74c(), (uVar3 & 1) != 0)))) {
    cStack000000000000001c = '\0';
                    /* try { // try from 02f8ad38 to 0308ad3f has its CatchHandler @ 02f8ae80 */
    FUN_027e0bd8();
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar1 = *(int *)(unaff_x20 + 0x24);
                    /* try { // try from 02f8ad4c to 0308ad57 has its CatchHandler @ 02f8ae58 */
    iVar2 = FUN_02f89ff4();
    *(int *)(unaff_x20 + 0x24) = iVar2 + iVar1;
                    /* try { // try from 02f8ad68 to 0308ad6f has its CatchHandler @ 02f8ae78 */
    if (cStack000000000000001c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
  }
  return;
}


