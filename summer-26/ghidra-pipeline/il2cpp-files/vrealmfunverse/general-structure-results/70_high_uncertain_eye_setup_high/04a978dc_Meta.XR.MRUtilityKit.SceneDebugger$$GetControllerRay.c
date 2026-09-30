/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetControllerRay
ENTRY_POINT: 04a978dc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a97974) */

void Meta_XR_MRUtilityKit_SceneDebugger__GetControllerRay(void)

{
  int unaff_w19;
  long unaff_x20;
  undefined8 uStack0000000000000008;
  undefined1 *puStack0000000000000010;
  undefined8 *puStack0000000000000018;
  char cStack0000000000000024;
  undefined8 uStack0000000000000028;
  
  uStack0000000000000028 = *(undefined8 *)(unaff_x20 + 0x18);
  puStack0000000000000010 = &stack0x00000024;
  uStack0000000000000008 = 0;
  puStack0000000000000018 = &stack0x00000028;
  cStack0000000000000024 = '\0';
  FUN_04ddecfc(uStack0000000000000028,&stack0x00000024,0);
  if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_036fac1c(*(long *)(unaff_x20 + 0x18),unaff_w19,1,*(undefined8 *)PTR_DAT_06322c08);
  if (unaff_w19 < *(int *)(unaff_x20 + 0x10)) {
    *(int *)(unaff_x20 + 0x10) = unaff_w19;
  }
  if (cStack0000000000000024 != '\0') {
    thunk_FUN_02b4a54c(*puStack0000000000000018,0);
  }
  return;
}


