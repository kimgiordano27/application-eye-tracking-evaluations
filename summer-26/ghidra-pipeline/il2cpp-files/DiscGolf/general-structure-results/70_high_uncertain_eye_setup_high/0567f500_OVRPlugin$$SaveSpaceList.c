/*
FUNCTION_NAME: OVRPlugin$$SaveSpaceList
ENTRY_POINT: 0567f500
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SaveSpaceList(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  int in_w10;
  undefined8 *unaff_x19;
  long *unaff_x21;
  
  if (in_w10 == 0) {
    thunk_FUN_02df485c(param_1);
  }
  uVar1 = FUN_06350670();
  if ((uVar1 & 1) != 0) {
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
    if (*(long *)(lVar2 + 0x1a0) == 0) {
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
      *unaff_x19 = *(undefined8 *)(lVar2 + 0x1a0);
      LeanTween__value();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


