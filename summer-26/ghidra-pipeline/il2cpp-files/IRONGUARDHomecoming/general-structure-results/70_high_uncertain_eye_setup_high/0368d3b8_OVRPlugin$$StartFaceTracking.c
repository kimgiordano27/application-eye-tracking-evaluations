/*
FUNCTION_NAME: OVRPlugin$$StartFaceTracking
ENTRY_POINT: 0368d3b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__StartFaceTracking(void)

{
  byte bVar1;
  long *unaff_x19;
  
  if (unaff_x19 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ +
                     0x130);
    if (bVar1 <= *(byte *)(*unaff_x19 + 0x130)) {
      if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__) {
        return unaff_x19;
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}


