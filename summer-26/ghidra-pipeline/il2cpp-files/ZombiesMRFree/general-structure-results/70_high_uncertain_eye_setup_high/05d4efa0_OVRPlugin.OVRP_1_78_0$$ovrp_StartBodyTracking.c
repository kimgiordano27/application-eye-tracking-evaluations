/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartBodyTracking
ENTRY_POINT: 05d4efa0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartBodyTracking(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *piVar2;
  
  if (in_x9 != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 05d4ef8c with catch @ 05d4efb0 */
      if (*(long *)(piVar2 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar2 + 10) * 0x10 + 0x138);
        goto LAB_05d4eff0;
      }
                    /* try { // try from 05d4efb8 to 05e4efbf has its CatchHandler @ 05d4efd4 */
      in_x9 = in_x9 + -1;
      piVar2 = piVar2 + 4;
                    /* try { // try from 05d4efc0 to 05e4efcb has its CatchHandler @ 05d4ee14 */
    } while (in_x9 != 0);
  }
                    /* try { // try from 05d4efcc to 05e4efd3 has its CatchHandler @ 05d4efd4 */
  puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_05d4eff0:
                    /* WARNING: Could not recover jumptable at 0x05d4f004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


