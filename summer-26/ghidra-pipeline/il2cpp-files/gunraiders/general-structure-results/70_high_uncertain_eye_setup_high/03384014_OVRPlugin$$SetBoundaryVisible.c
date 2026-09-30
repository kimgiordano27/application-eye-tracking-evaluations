/*
FUNCTION_NAME: OVRPlugin$$SetBoundaryVisible
ENTRY_POINT: 03384014
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetBoundaryVisible(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  
  lVar1 = thunk_FUN_01c495e4(param_2,*(undefined8 *)(param_1 + 0x40));
  if (lVar1 != 0) {
    uVar3 = *(uint *)(unaff_x22 + 0x18);
    if (1 < uVar3) {
      *(undefined8 *)(unaff_x22 + 0x28) = unaff_x24;
      if (unaff_x23 != 0) {
        lVar1 = thunk_FUN_01c495e4();
        if (lVar1 == 0) goto LAB_033840a8;
        uVar3 = *(uint *)(unaff_x22 + 0x18);
      }
      if (2 < uVar3) {
        *(long *)(unaff_x22 + 0x30) = unaff_x23;
        if (unaff_x19 != 0) {
          lVar1 = thunk_FUN_01c495e4();
          if (lVar1 == 0) goto LAB_033840a8;
          uVar3 = *(uint *)(unaff_x22 + 0x18);
        }
        if (3 < uVar3) {
          *(long *)(unaff_x22 + 0x38) = unaff_x19;
          FUN_03383e08();
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
LAB_033840a8:
  uVar2 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar2,0);
}


