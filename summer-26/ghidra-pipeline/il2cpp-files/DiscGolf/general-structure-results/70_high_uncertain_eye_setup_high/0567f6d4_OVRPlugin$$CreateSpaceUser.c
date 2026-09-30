/*
FUNCTION_NAME: OVRPlugin$$CreateSpaceUser
ENTRY_POINT: 0567f6d4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreateSpaceUser(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long *plVar3;
  long *unaff_x21;
  
  uVar1 = FUN_06350670(param_1,param_2,0);
  if (((uVar1 & 1) != 0) || (plVar3 = (long *)(unaff_x19 + 0x48), *plVar3 != 0)) {
    return;
  }
  lVar2 = *(long *)(*unaff_x21 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x1b8) == 0) {
      return;
    }
    lVar2 = *(long *)(*unaff_x21 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar2 != 0) {
      *plVar3 = *(long *)(lVar2 + 0x1b8);
      LeanTween__value(plVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


