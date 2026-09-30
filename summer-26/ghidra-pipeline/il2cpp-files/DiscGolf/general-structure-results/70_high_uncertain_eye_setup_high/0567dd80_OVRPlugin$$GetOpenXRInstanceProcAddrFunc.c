/*
FUNCTION_NAME: OVRPlugin$$GetOpenXRInstanceProcAddrFunc
ENTRY_POINT: 0567dd80
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetOpenXRInstanceProcAddrFunc(long param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  long *unaff_x23;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02dcfd18();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x1a8) == 0) {
      return;
    }
    lVar1 = *(long *)(*unaff_x23 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
    if (lVar1 != 0) {
      *unaff_x19 = *(undefined8 *)(lVar1 + 0x1a8);
      LeanTween__value();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


