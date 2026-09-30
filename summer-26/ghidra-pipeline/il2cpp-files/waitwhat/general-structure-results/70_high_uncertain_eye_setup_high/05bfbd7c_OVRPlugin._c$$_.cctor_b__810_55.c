/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_55
ENTRY_POINT: 05bfbd7c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_55(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x21;
  
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_05bfbe00();
  lVar2 = *(long *)(unaff_x19 + 0x20);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  puVar1 = PTR_DAT_07117020;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_05bfbdfc:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    if (*(long *)(lVar2 + 0x20) != 0) {
      FUN_03a67820(*(long *)(lVar2 + 0x20),0,*(undefined8 *)PTR_DAT_07117020);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if (lVar2 != 0) {
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_05bfbdfc;
        if (*(long *)(lVar2 + 0x28) != 0) {
          FUN_03a67820(*(long *)(lVar2 + 0x28),0,*(undefined8 *)puVar1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


