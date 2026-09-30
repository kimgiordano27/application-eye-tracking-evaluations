/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateHandTrackingContextNative
ENTRY_POINT: 05597e10
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Oculus_Avatar2_OvrPluginTracking__CreateHandTrackingContextNative(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int unaff_w19;
  long *unaff_x22;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar1 = FUN_05597ea4();
  if (unaff_w19 != 1) {
    if (unaff_w19 == 0) {
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                    /* try { // try from 05597e44 to 05697e47 has its CatchHandler @ 05597e64 */
        thunk_FUN_02df485c();
      }
                    /* try { // try from 05597e48 to 05697e53 has its CatchHandler @ 05597d40 */
                    /* try { // try from 05597e54 to 05697e57 has its CatchHandler @ 05597e5c */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05597dc8 with catch @ 05597e58
                       try { // try from 05597e58 to 05697e7f has its CatchHandler @ 05597d40 */
      uVar1 = FUN_05597fdc(uVar1);
      return uVar1;
    }
    thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
    uVar1 = thunk_FUN_02dd3144();
                    /* try { // try from 05597e80 to 05697e83 has its CatchHandler @ 05597e90 */
    FUN_05453f1c(uVar1,0);
    uVar2 = thunk_FUN_02dfd288(Unity_Netcode_NetworkUpdateLoop_NetworkEarlyUpdate_var);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar1,uVar2);
  }
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05597e54 with catch @ 05597e5c
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05597da8 with catch @ 05597e60
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05597e04 with catch @ 05597e64
                       catch(type#1 @ 066567d8) { ... } // from try @ 05597e44 with catch @ 05597e64
                        */
  return uVar1;
}


