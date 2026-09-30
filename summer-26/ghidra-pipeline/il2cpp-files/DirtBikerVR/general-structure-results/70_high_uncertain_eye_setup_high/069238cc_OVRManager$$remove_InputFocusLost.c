/*
FUNCTION_NAME: OVRManager$$remove_InputFocusLost
ENTRY_POINT: 069238cc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_InputFocusLost(long param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  
  if (param_1 != 0) {
                    /* catch() { ... } // from try @ 069238c4 with catch @ 069238d0 */
    uVar1 = *(int *)(unaff_x19 + 0x18) + 1;
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(char *)(param_1 + (int)uVar1 + 0x20) = (char)((ulong)unaff_x20 >> 8);
      lVar2 = *(long *)(unaff_x19 + 0x10);
      if (lVar2 == 0) goto LAB_06923958;
      uVar1 = *(int *)(unaff_x19 + 0x18) + 2;
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        *(char *)(lVar2 + (int)uVar1 + 0x20) = (char)((ulong)unaff_x20 >> 0x10);
        lVar2 = *(long *)(unaff_x19 + 0x10);
        if (lVar2 == 0) goto LAB_06923958;
        uVar1 = *(int *)(unaff_x19 + 0x18) + 3;
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          *(char *)(lVar2 + (int)uVar1 + 0x20) = (char)((ulong)unaff_x20 >> 0x18);
          *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 4;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
LAB_06923958:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


