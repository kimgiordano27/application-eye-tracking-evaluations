/*
FUNCTION_NAME: OVRPlugin$$DestroySpaceUser
ENTRY_POINT: 06953444
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


undefined1  [16] OVRPlugin__DestroySpaceUser(long param_1,float param_2)

{
  long in_x9;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (in_x9 != 0) {
    if (param_2 <= *(float *)(in_x9 + 0x10)) {
      return ZEXT416((uint)*(float *)(in_x9 + 0x10));
    }
    if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 0695345c to 06a5361f has its CatchHandler @ 0695345c
                       catch() { ... } // from try @ 0695345c with catch @ 0695345c
                       catch() { ... } // from try @ 06953640 with catch @ 0695345c
                       catch() { ... } // from try @ 0695370c with catch @ 0695345c
                       catch() { ... } // from try @ 06953718 with catch @ 0695345c
                       catch() { ... } // from try @ 06953820 with catch @ 0695345c */
      FUN_06926524(*(long *)(param_1 + 0x10),0);
      auVar1._4_4_ = extraout_var;
      auVar1._0_4_ = extraout_s0;
      auVar1._8_8_ = extraout_var_00;
      return auVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


