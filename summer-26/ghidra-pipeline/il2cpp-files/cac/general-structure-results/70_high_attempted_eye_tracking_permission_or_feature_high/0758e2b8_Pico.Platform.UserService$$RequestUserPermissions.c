/*
FUNCTION_NAME: Pico.Platform.UserService$$RequestUserPermissions
ENTRY_POINT: 0758e2b8
PROGRAM: cac-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


bool Pico_Platform_UserService__RequestUserPermissions(void)

{
  ulong uVar1;
  long unaff_x19;
  int unaff_w20;
  
  thunk_FUN_03f6fea8();
  uVar1 = FUN_0758ddac();
                    /* try { // try from 0758e2d4 to 0768e2e3 has its CatchHandler @ 0758e2e4 */
  if (((uVar1 & 1) != 0) && (*(int *)(unaff_x19 + 0x20) < 100)) {
    unaff_w20 = unaff_w20 + 2;
  }
                    /* try { // try from 0758e2e8 to 0768e2eb has its CatchHandler @ 0758e2f4 */
                    /* try { // try from 0758e2ec to 0768e2f7 has its CatchHandler @ 0758e270 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0758e2e8 with catch @ 0758e2f4
                        */
                    /* try { // try from 0758e2f8 to 0768e333 has its CatchHandler @ 0758e2f8
                       catch() { ... } // from try @ 0758e2f8 with catch @ 0758e2f8
                       catch() { ... } // from try @ 0758e340 with catch @ 0758e2f8
                       catch() { ... } // from try @ 0758e384 with catch @ 0758e2f8
                       catch() { ... } // from try @ 0758e3bc with catch @ 0758e2f8 */
  return unaff_w20 == *(int *)(unaff_x19 + 0x30);
}


