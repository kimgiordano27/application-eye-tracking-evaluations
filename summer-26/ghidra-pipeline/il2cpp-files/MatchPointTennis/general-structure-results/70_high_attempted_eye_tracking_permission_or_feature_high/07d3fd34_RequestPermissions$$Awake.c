/*
FUNCTION_NAME: RequestPermissions$$Awake
ENTRY_POINT: 07d3fd34
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void RequestPermissions__Awake(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 unaff_x19;
  long *unaff_x21;
  
  lVar2 = *unaff_x21;
  if (*(int *)(lVar2 + 0xe4) == 0) {
                    /* try { // try from 07d3fd40 to 07e3fd5f has its CatchHandler @ 07d3fed4 */
    thunk_FUN_044a54b4();
    lVar2 = *unaff_x21;
  }
  if ((**(long **)(lVar2 + 0xb8) != 0) &&
     (lVar2 = *(long *)(**(long **)(lVar2 + 0xb8) + 0x100), lVar2 != 0)) {
                    /* try { // try from 07d3fd68 to 07e3fd6f has its CatchHandler @ 07d3fe90 */
    lVar3 = *(long *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
                    /* try { // try from 07d3fd84 to 07e3fd8f has its CatchHandler @ 07d3fec4 */
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
                    /* try { // try from 07d3fd98 to 07e3fd9f has its CatchHandler @ 07d3fe94 */
        puVar4 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
        *puVar4 = unaff_x19;
        thunk_FUN_044bb4b4(puVar4);
        return;
      }
                    /* try { // try from 07d3fdb4 to 07e3fdbf has its CatchHandler @ 07d3febc */
                    /* try { // try from 07d3fdc8 to 07e3fdcf has its CatchHandler @ 07d3fe98 */
      FUN_05bade44();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


