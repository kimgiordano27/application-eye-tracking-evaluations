/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStart
ENTRY_POINT: 07407334
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_Qpl__MarkerStart(long param_1,undefined8 param_2)

{
  int iVar1;
  long unaff_x19;
  
  iVar1 = FUN_07407054(*(undefined4 *)(param_1 + 0x30),param_2,6);
  if (iVar1 != 0) {
    return false;
  }
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    iVar1 = FUN_07407054(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x38),
                         *(undefined4 *)(unaff_x19 + 0x8c),10);
    if (iVar1 != 0) {
      return false;
    }
    if (*(long *)(unaff_x19 + 0x80) != 0) {
      iVar1 = FUN_07407054(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x3c),
                           *(undefined4 *)(unaff_x19 + 0x8c),7);
      return iVar1 == 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


