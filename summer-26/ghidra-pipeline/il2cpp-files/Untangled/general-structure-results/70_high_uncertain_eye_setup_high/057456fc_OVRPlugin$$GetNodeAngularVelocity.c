/*
FUNCTION_NAME: OVRPlugin$$GetNodeAngularVelocity
ENTRY_POINT: 057456fc
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetNodeAngularVelocity(void)

{
  bool in_ZR;
  long lVar1;
  int in_w8;
  long unaff_x19;
  
  if (in_ZR) {
    lVar1 = *(long *)(unaff_x19 + 0x30);
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (lVar1 == 0) {
LAB_05745784:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    *(long *)(unaff_x19 + 0x30) = *(long *)(lVar1 + 0x10);
  }
  else {
    if (in_w8 != 0) {
      return 0;
    }
    lVar1 = *(long *)(unaff_x19 + 0x28);
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (*(char *)(unaff_x19 + 0x24) == '\0') {
      if (lVar1 == 0) goto LAB_05745784;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    *(long *)(unaff_x19 + 0x30) = lVar1;
  }
  thunk_FUN_02f411dc();
  lVar1 = *(long *)(unaff_x19 + 0x30);
  if (lVar1 == 0) {
    *(long *)(unaff_x19 + 0x30) = 0;
    thunk_FUN_02f411dc();
    return 0;
  }
  *(long *)(unaff_x19 + 0x18) = lVar1;
  thunk_FUN_02f411dc((long *)(unaff_x19 + 0x18));
  *(undefined4 *)(unaff_x19 + 0x10) = 1;
  return 1;
}


