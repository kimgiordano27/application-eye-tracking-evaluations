/*
FUNCTION_NAME: OVRPlugin$$SetControllerLocalizedVibration
ENTRY_POINT: 06abc418
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerLocalizedVibration(long param_1)

{
  uint in_w3;
  long lVar1;
  long in_x9;
  long lVar2;
  int in_w11;
  uint unaff_w19;
  undefined4 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar3;
  
  if ((unaff_w19 < *(uint *)(param_1 + 0x18)) && (unaff_w19 < *(uint *)(in_x9 + 0x18))) {
    FUN_06abc674(param_1 + unaff_x22 * 8 + 0x20,in_x9 + unaff_x22 * 8 + 0x20,in_w11 - 1U < 2,
                 in_w3 & 1);
    lVar1 = *(long *)(unaff_x21 + 0x150);
    if (lVar1 == 0) {
LAB_06abc4c0:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
      lVar2 = *(long *)(unaff_x21 + 0x148);
      if (lVar2 == 0) goto LAB_06abc4c0;
      if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
        lVar1 = lVar1 + unaff_x22 * 0x10;
        uVar3 = *(undefined8 *)(lVar1 + 0x20);
        lVar2 = lVar2 + unaff_x22 * 0x10;
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
        *(undefined8 *)(lVar2 + 0x20) = uVar3;
        lVar1 = *(long *)(unaff_x21 + 0x158);
        if (lVar1 == 0) goto LAB_06abc4c0;
        if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
          *(undefined4 *)(lVar1 + unaff_x22 * 4 + 0x20) = *unaff_x20;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


