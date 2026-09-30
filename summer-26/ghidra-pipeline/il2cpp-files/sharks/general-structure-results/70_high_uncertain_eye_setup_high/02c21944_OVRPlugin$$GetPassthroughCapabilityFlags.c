/*
FUNCTION_NAME: OVRPlugin$$GetPassthroughCapabilityFlags
ENTRY_POINT: 02c21944
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetPassthroughCapabilityFlags(long param_1)

{
  int iVar1;
  long unaff_x19;
  
  if (param_1 != 0) {
    iVar1 = FUN_02c20e48(param_1,0);
    if (iVar1 != 0) {
      *(int *)(unaff_x19 + 0x70) = iVar1;
    }
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      iVar1 = FUN_02c20e48(*(long *)(unaff_x19 + 0x10),2);
      if (iVar1 == 0) {
        iVar1 = *(int *)(unaff_x19 + 0x74);
      }
      else {
        *(int *)(unaff_x19 + 0x74) = iVar1;
      }
      *(int *)(unaff_x19 + 0x78) = iVar1;
      *(undefined4 *)(unaff_x19 + 0x7c) = *(undefined4 *)(unaff_x19 + 0x70);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


