/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarFaceTrackingBehaviorOvrPlugin$$get_FacePoseProvider
ENTRY_POINT: 07273dac
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Avatar2_OvrAvatarFaceTrackingBehaviorOvrPlugin__get_FacePoseProvider
               (undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x23;
  
  lVar1 = FUN_03d2d394(*param_1);
  if (lVar1 == 0) {
LAB_07273e48:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if ((unaff_x20 != 0) && (lVar2 = thunk_FUN_03d2ee44(), lVar2 == 0)) {
LAB_07273e50:
    uVar3 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar3,0);
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    *(long *)(lVar1 + 0x20) = unaff_x20;
    thunk_FUN_03d1023c();
    if ((unaff_x19 != 0) && (lVar2 = thunk_FUN_03d2ee44(), lVar2 == 0)) goto LAB_07273e50;
    if (1 < *(uint *)(lVar1 + 0x18)) {
      *(long *)(lVar1 + 0x28) = unaff_x19;
      thunk_FUN_03d1023c();
      if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07273e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x23 + 0x18))(*(undefined8 *)(unaff_x23 + 0x40));
        return;
      }
      goto LAB_07273e48;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


