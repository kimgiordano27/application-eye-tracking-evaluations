/*
FUNCTION_NAME: OVRPlugin$$get_monoscopic
ENTRY_POINT: 0693c96c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_monoscopic
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long *param_6)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_08487320;
  if ((DAT_0897cf77 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08487320);
    DAT_0897cf77 = 1;
  }
  lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  FUN_07c9d4dc(lVar2,0);
  *param_6 = lVar2;
  thunk_FUN_03afed3c(param_6,lVar2);
  if (*param_6 != 0) {
    thunk_FUN_07ca23d0(*param_6,param_4,0);
                    /* catch() { ... } // from try @ 0693c93c with catch @ 0693c9e0 */
                    /* try { // try from 0693c9e4 to 06a3c9eb has its CatchHandler @ 0693c9f4 */
                    /* try { // try from 0693c9ec to 06a3c9f7 has its CatchHandler @ 0693bfdc */
    if ((*param_6 != 0) && (lVar2 = FUN_07c9c69c(*param_6,0), lVar2 != 0)) {
                    /* catch() { ... } // from try @ 0693c8dc with catch @ 0693c9f4
                       catch() { ... } // from try @ 0693c9e4 with catch @ 0693c9f4 */
      FUN_07cacdbc(lVar2,param_5,0);
      if ((*param_6 != 0) && (lVar2 = FUN_07c9c69c(*param_6,0), lVar2 != 0)) {
        FUN_07cab7ec(param_1,param_2,lVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


