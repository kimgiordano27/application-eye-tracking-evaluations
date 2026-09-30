/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_GetNodePoseStateRaw
ENTRY_POINT: 07a68608
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_29_0__ovrp_GetNodePoseStateRaw(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x21;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0xbb0));
  *(undefined1 *)(unaff_x20 + 0x5d9) = 1;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x58);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar1 = FUN_089ca704(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar1 = FUN_089ca704(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x58) != 0) {
        if (*(long *)(*(long *)(unaff_x19 + 0x58) + 0x30) != 0) {
          FUN_07a686cc();
          FUN_07a6876c();
        }
        FUN_07a687e0();
        if (*(long *)(unaff_x19 + 0x58) != 0) {
          if (*(int *)(unaff_x19 + 0x50) == *(int *)(*(long *)(unaff_x19 + 0x58) + 0x3c)) {
            return;
          }
          FUN_07a67cac();
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  return;
}


