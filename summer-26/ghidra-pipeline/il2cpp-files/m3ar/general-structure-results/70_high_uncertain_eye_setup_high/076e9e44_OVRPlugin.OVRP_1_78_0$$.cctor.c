/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$.cctor
ENTRY_POINT: 076e9e44
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0___cctor(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 *in_x9;
  undefined4 *in_x10;
  long unaff_x19;
  long *unaff_x21;
  
  thunk_FUN_0854a9bc(*in_x9,*in_x10,param_2,*(undefined4 *)(param_1 + 0x10),0);
  if (*(long *)(unaff_x19 + 0x88) != 0) {
    lVar1 = FUN_076a165c(*(long *)(unaff_x19 + 0x88),0);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_0408f364(*unaff_x21);
    }
    if (lVar1 != 0) {
      thunk_FUN_0854a9bc(*(undefined4 *)(unaff_x19 + 0xac),*(undefined4 *)(unaff_x19 + 0xb0),
                         *(undefined4 *)(unaff_x19 + 0xb4),*(undefined4 *)(unaff_x19 + 0xb8),lVar1,
                         *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10),0);
      if (*(long *)(unaff_x19 + 0x80) != 0) {
        FUN_076a16c0(*(long *)(unaff_x19 + 0x80),0);
        if (*(long *)(unaff_x19 + 0x88) != 0) {
          FUN_076a16c0(*(long *)(unaff_x19 + 0x88),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


