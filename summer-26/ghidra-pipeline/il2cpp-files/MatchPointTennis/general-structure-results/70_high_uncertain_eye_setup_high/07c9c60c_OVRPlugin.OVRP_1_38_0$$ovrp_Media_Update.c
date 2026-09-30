/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Update
ENTRY_POINT: 07c9c60c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_Update(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *in_x10;
  int *piVar3;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* try { // try from 07c9c624 to 07d9c64f has its CatchHandler @ 07c9c7f0 */
      if (*(long *)(piVar3 + -2) == *in_x10) {
                    /* try { // try from 07c9c654 to 07d9c65b has its CatchHandler @ 07c9c7e4 */
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar3 + 0x13) * 0x10 + 0x138);
        goto LAB_07c9c658;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 != 0);
  }
  puVar1 = (undefined8 *)FUN_044822ac();
LAB_07c9c658:
                    /* WARNING: Could not recover jumptable at 0x07c9c668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


