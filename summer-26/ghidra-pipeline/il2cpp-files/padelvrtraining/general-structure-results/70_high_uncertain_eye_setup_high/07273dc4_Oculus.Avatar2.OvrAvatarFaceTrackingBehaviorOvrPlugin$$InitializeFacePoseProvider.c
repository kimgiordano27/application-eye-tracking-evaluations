/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarFaceTrackingBehaviorOvrPlugin$$InitializeFacePoseProvider
ENTRY_POINT: 07273dc4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Avatar2_OvrAvatarFaceTrackingBehaviorOvrPlugin__InitializeFacePoseProvider(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x22;
  long unaff_x23;
  
  lVar1 = thunk_FUN_03d2ee44();
  if (lVar1 != 0) {
    if (*(int *)(unaff_x22 + 0x18) != 0) {
      *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
      thunk_FUN_03d1023c();
      if ((unaff_x19 != 0) && (lVar1 = thunk_FUN_03d2ee44(), lVar1 == 0)) goto LAB_07273e50;
      if (1 < *(uint *)(unaff_x22 + 0x18)) {
        *(long *)(unaff_x22 + 0x28) = unaff_x19;
        thunk_FUN_03d1023c();
        if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07273e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x23 + 0x18))(*(undefined8 *)(unaff_x23 + 0x40));
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d550();
  }
LAB_07273e50:
  uVar2 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar2,0);
}


