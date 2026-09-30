/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetUserEyeHeight
ENTRY_POINT: 03397b54
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_SetUserEyeHeight(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = thunk_FUN_01c495e4();
  if (lVar1 == 0) {
    OVRPlugin_Sizei___cctor();
  }
  else {
                    /* try { // try from 03397b70 to 03497b73 has its CatchHandler @ 03397b74 */
    lVar1 = thunk_FUN_01c495e4();
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03397b70 with catch @ 03397b74
                       try { // try from 03397b74 to 03497b9f has its CatchHandler @ 033979cc */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03397a78 with catch @ 03397b78
                        */
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
  }
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03397a9c with catch @ 03397b7c
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03397adc with catch @ 03397b80
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03397ab0 with catch @ 03397b84
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03397a3c with catch @ 03397b88
                        */
  uVar2 = FUN_03394994();
  return uVar2;
}


