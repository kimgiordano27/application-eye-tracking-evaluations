/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingOriginType
ENTRY_POINT: 028127b8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


int OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingOriginType(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x22;
  
  thunk_FUN_01a58e78();
  FUN_027454b4(&stack0x00000008,0);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*unaff_x22);
  }
  uVar1 = FUN_02821cb8();
  lVar2 = *(long *)(unaff_x19 + 0x90);
  if (lVar2 != 0) {
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      *(undefined2 *)(lVar2 + (long)(int)uVar1 * 2 + 0x20) = *(undefined2 *)(unaff_x19 + 0x80);
      return uVar1 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


