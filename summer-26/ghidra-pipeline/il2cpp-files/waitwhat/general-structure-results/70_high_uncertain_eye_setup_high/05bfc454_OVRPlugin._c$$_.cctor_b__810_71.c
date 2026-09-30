/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_71
ENTRY_POINT: 05bfc454
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_71(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  
  puVar1 = PTR_DAT_07117060;
  if (param_1 != 0) {
    FUN_03a67820(param_1,0,*(undefined8 *)PTR_DAT_07117060);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if (lVar2 != 0) {
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      if (*(long *)(lVar2 + 0x28) != 0) {
        FUN_03a67820(*(long *)(lVar2 + 0x28),1,*(undefined8 *)puVar1);
        FUN_05bfc4fc();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


