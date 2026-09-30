/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 04439d44
PROGRAM: waitwhat-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>___ctor(void)

{
  int iVar1;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  
  if (unaff_w20 < 0) {
    LipSyncMicInput__CanStartMic(0x10,4,0);
  }
                    /* catch() { ... } // from try @ 04439c64 with catch @ 04439d4c
                       catch() { ... } // from try @ 04439c9c with catch @ 04439d4c
                       catch() { ... } // from try @ 04439cc8 with catch @ 04439d4c
                       catch() { ... } // from try @ 04439d3c with catch @ 04439d4c */
                    /* try { // try from 04439d50 to 04539d53 has its CatchHandler @ 04439d5c */
                    /* try { // try from 04439d54 to 04539d5f has its CatchHandler @ 04439bac */
  if (*(int *)(unaff_x19 + 0x18) - unaff_w21 < unaff_w20) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04439d50 with catch @ 04439d5c
                        */
    FUN_0595040c(0x17,0);
  }
  if (0 < unaff_w20) {
    iVar1 = *(int *)(unaff_x19 + 0x18) - unaff_w20;
    *(int *)(unaff_x19 + 0x18) = iVar1;
    if (iVar1 - unaff_w21 != 0 && unaff_w21 <= iVar1) {
      FUN_0595261c(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20 + unaff_w21,
                   *(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar1 - unaff_w21,0);
      iVar1 = *(int *)(unaff_x19 + 0x18);
    }
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    FUN_0595236c(*(undefined8 *)(unaff_x19 + 0x10),iVar1,unaff_w20,0);
    return;
  }
  return;
}


