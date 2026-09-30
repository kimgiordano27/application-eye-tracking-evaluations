/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$get_IsValid
ENTRY_POINT: 052d4dc4
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster__get_IsValid(undefined4 *param_1)

{
  undefined4 *puVar1;
  long unaff_x19;
  long lVar2;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  
  FUN_06744330(*param_1,param_1[1],param_1[2]);
  lVar2 = *unaff_x21;
  if (*(char *)(unaff_x23 + 0xbf5) == '\0') {
    FUN_02f07e70(PTR_DAT_06d02c10);
                    /* try { // try from 052d4dec to 053d4df3 has its CatchHandler @ 052d4e64 */
    *(undefined1 *)(unaff_x23 + 0xbf5) = 1;
  }
  if (lVar2 != 0) {
    puVar1 = *(undefined4 **)(*unaff_x24 + 0xb8);
    FUN_067441f8(*puVar1,puVar1[1],puVar1[2],lVar2,0);
                    /* try { // try from 052d4e10 to 053d4e17 has its CatchHandler @ 052d4e60 */
    if (unaff_x22 != 0) {
                    /* try { // try from 052d4e18 to 053d4e4f has its CatchHandler @ 052d4d94 */
      FUN_052abc4c();
      *(undefined1 *)(unaff_x19 + 0x404) = *(undefined1 *)(unaff_x19 + 0x348);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


