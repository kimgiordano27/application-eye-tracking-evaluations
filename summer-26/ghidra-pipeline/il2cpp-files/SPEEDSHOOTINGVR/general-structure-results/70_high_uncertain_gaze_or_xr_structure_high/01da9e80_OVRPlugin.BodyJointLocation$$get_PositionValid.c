/*
FUNCTION_NAME: OVRPlugin.BodyJointLocation$$get_PositionValid
ENTRY_POINT: 01da9e80
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_BodyJointLocation__get_PositionValid(void)

{
  byte bVar1;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_00fdc2e4();
  *(undefined1 *)(unaff_x20 + 0x98c) = 1;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_02359ec0 + 0x130);
  if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_02359ec0))
  {
    FUN_01da8ae8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc8d0();
}


