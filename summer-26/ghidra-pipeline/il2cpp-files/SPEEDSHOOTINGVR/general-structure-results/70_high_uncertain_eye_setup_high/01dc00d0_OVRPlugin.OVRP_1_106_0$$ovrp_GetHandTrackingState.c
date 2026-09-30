/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetHandTrackingState
ENTRY_POINT: 01dc00d0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_106_0__ovrp_GetHandTrackingState(void)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  long lVar4;
  
  plVar2 = (long *)FUN_00fdc2fc(*unaff_x19);
  lVar4 = *plVar2;
  if (lVar4 == 0) {
                    /* catch() { ... } // from try @ 01dbf974 with catch @ 01dc0100 */
    uVar3 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 01dc00b0 with catch @ 01dc00e8
                       try { // try from 01dc00e8 to 01ec0153 has its CatchHandler @ 01dbf890 */
    uVar1 = FUN_01db6d64(lVar4,0);
    uVar3 = 0;
                    /* catch() { ... } // from try @ 01dbf9a8 with catch @ 01dc00f4 */
    if ((uVar1 >> 4 & 1) == 0) {
                    /* catch() { ... } // from try @ 01dbfff8 with catch @ 01dc00f8 */
      uVar3 = *(undefined8 *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 01dbffac with catch @ 01dc00fc */
    }
  }
                    /* catch() { ... } // from try @ 01dbff58 with catch @ 01dc0104 */
                    /* catch() { ... } // from try @ 01dbfdb8 with catch @ 01dc0108 */
                    /* catch() { ... } // from try @ 01dbff50 with catch @ 01dc010c */
  return uVar3;
}


