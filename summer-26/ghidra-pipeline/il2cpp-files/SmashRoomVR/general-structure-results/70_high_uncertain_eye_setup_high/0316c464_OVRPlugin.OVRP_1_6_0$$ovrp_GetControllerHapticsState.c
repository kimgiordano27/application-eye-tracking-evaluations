/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetControllerHapticsState
ENTRY_POINT: 0316c464
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_GetControllerHapticsState(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  if (unaff_x20 != 0) {
    thunk_FUN_038fd510(*(undefined4 *)(unaff_x19 + 0xcc),*(undefined4 *)(unaff_x19 + 0xd0),
                       *(undefined4 *)(unaff_x19 + 0xd4),*(undefined4 *)(unaff_x19 + 0xd8));
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      lVar1 = FUN_03120f18(*(long *)(unaff_x19 + 0x88),0);
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*unaff_x21);
      }
      if (lVar1 != 0) {
        thunk_FUN_038fd510(*(undefined4 *)(unaff_x19 + 0xac),*(undefined4 *)(unaff_x19 + 0xb0),
                           *(undefined4 *)(unaff_x19 + 0xb4),*(undefined4 *)(unaff_x19 + 0xb8),lVar1
                           ,*(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10),0);
        if (*(long *)(unaff_x19 + 0x80) != 0) {
          FUN_03120f88(*(long *)(unaff_x19 + 0x80),0);
          if (*(long *)(unaff_x19 + 0x88) != 0) {
            FUN_03120f88(*(long *)(unaff_x19 + 0x88),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


