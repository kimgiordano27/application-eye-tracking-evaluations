/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionEnd
ENTRY_POINT: 063add6c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionEnd(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *piVar2;
  
  if ((int)in_x9 != 0) {
                    /* catch() { ... } // from try @ 063add50 with catch @ 063add70 */
                    /* try { // try from 063add74 to 064add7b has its CatchHandler @ 063add90 */
    piVar2 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* try { // try from 063add7c to 064add87 has its CatchHandler @ 063adb94 */
      if (*(long *)(piVar2 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar2 + 9) * 0x10 + 0x138);
        goto LAB_063adde0;
      }
      in_x9 = in_x9 + -1;
                    /* try { // try from 063add88 to 064add8f has its CatchHandler @ 063add90 */
      piVar2 = piVar2 + 4;
    } while (in_x9 != 0);
  }
                    /* catch() { ... } // from try @ 063add74 with catch @ 063add90
                       catch() { ... } // from try @ 063add88 with catch @ 063add90 */
  puVar1 = (undefined8 *)FUN_0377596c();
LAB_063adde0:
                    /* WARNING: Could not recover jumptable at 0x063ade00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


