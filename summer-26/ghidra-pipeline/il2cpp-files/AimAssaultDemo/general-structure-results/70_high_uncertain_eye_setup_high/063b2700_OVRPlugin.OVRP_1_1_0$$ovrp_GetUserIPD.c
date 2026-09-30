/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserIPD
ENTRY_POINT: 063b2700
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 063b24ac with catch @ 063b2708 */
                    /* catch() { ... } // from try @ 063b2510 with catch @ 063b270c */
  FUN_06315730(param_1,param_2,0);
                    /* catch() { ... } // from try @ 063b26d0 with catch @ 063b2710 */
                    /* catch() { ... } // from try @ 063b2598 with catch @ 063b2714 */
  OVRPlugin_OVRP_1_1_0__ovrp_SetUserIPD(param_1);
                    /* catch() { ... } // from try @ 063b26cc with catch @ 063b2718 */
                    /* catch() { ... } // from try @ 063b2614 with catch @ 063b271c */
                    /* catch() { ... } // from try @ 063b24c0 with catch @ 063b2720 */
  iVar1 = FUN_06301110(param_1,0);
                    /* catch() { ... } // from try @ 063b25e8 with catch @ 063b2724 */
  if (iVar1 != 0) {
                    /* catch() { ... } // from try @ 063b24d8 with catch @ 063b2728 */
    return;
  }
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
                    /* try { // try from 063b2744 to 064b275b has its CatchHandler @ 063b2814 */
    FUN_063ae52c(lVar3,uVar2);
    FUN_063aedc8(lVar3,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


