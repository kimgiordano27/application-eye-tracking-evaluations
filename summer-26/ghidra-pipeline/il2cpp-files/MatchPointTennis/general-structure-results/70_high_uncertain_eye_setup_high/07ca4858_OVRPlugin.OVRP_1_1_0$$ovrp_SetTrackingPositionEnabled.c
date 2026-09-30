/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetTrackingPositionEnabled
ENTRY_POINT: 07ca4858
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetTrackingPositionEnabled(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_0a526a21 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f4eb90);
    DAT_0a526a21 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar2 = *plVar5;
                    /* try { // try from 07ca489c to 07da489f has its CatchHandler @ 07ca49a4 */
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* try { // try from 07ca48a0 to 07da48b3 has its CatchHandler @ 07ca4280 */
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
                    /* try { // try from 07ca48b4 to 07da48b7 has its CatchHandler @ 07ca4998 */
                    /* try { // try from 07ca48b8 to 07da48bb has its CatchHandler @ 07ca498c */
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_09f4eb90) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto FUN_07ca48e8;
      }
                    /* try { // try from 07ca48bc to 07da49df has its CatchHandler @ 07ca4280 */
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f4eb90,2);
FUN_07ca48e8:
                    /* WARNING: Could not recover jumptable at 0x07ca48fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}


