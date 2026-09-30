/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetNodePresent
ENTRY_POINT: 063b1b24
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_GetNodePresent(long param_1,long param_2)

{
  long lVar1;
  byte unaff_w19;
  long *unaff_x20;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      if (*(byte *)(lVar1 + 0x20) <= unaff_w19) {
        if (*(int *)(param_2 + 0xe4) == 0) {
          thunk_FUN_03798b70();
          param_2 = *unaff_x20;
          lVar1 = *(long *)(*(long *)(param_2 + 0xb8) + 0x10);
          if (lVar1 == 0) goto LAB_063b1c08;
        }
        if (*(uint *)(lVar1 + 0x18) < 2) goto LAB_063b1c0c;
        if (unaff_w19 <= *(byte *)(lVar1 + 0x21)) {
          return 3;
        }
      }
                    /* try { // try from 063b1b74 to 064b1b87 has its CatchHandler @ 063b1cf4 */
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        param_2 = *unaff_x20;
      }
      lVar1 = *(long *)(*(long *)(param_2 + 0xb8) + 0x18);
                    /* try { // try from 063b1b8c to 064b1b8f has its CatchHandler @ 063b1cf0 */
      if (lVar1 == 0) goto LAB_063b1c08;
                    /* try { // try from 063b1b94 to 064b1b97 has its CatchHandler @ 063b1cf8 */
      if (*(int *)(lVar1 + 0x18) != 0) {
        if (*(byte *)(lVar1 + 0x20) <= unaff_w19) {
          if (*(int *)(param_2 + 0xe4) == 0) {
            thunk_FUN_03798b70();
            lVar1 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
            if (lVar1 == 0) goto LAB_063b1c08;
          }
          if (*(uint *)(lVar1 + 0x18) < 2) goto LAB_063b1c0c;
          if (unaff_w19 <= *(byte *)(lVar1 + 0x21)) {
            return 4;
          }
        }
        return 0;
      }
    }
LAB_063b1c0c:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
LAB_063b1c08:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


