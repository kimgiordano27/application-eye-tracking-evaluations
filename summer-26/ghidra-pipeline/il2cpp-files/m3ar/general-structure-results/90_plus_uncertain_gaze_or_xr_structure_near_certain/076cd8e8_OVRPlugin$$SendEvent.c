/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 076cd8e8
PROGRAM: m3ar-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SendEvent(long param_1)

{
  byte bVar1;
  long *plVar2;
  long *unaff_x19;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0x1fa) & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f65598);
    *(undefined1 *)(unaff_x21 + 0x1fa) = 1;
  }
  if (unaff_x19 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_08f65598 + 0x130);
    if (bVar1 <= *(byte *)(*unaff_x19 + 0x130)) {
      plVar2 = unaff_x19;
      if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)PTR_DAT_08f65598) {
        plVar2 = (long *)0x0;
      }
      goto LAB_076cd948;
    }
  }
  plVar2 = (long *)0x0;
LAB_076cd948:
  *(long **)(param_1 + 0x20) = plVar2;
  *(long **)(param_1 + 0x28) = unaff_x19;
                    /* try { // try from 076cd950 to 077cd953 has its CatchHandler @ 076cd968 */
                    /* try { // try from 076cd954 to 077cd993 has its CatchHandler @ 076cd638 */
  return;
}


