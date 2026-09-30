/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarEyeTrackingBehaviorOvrPlugin$$InitializeEyePoseProvider
ENTRY_POINT: 072734c8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin__InitializeEyePoseProvider(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  
  thunk_FUN_03d1023c();
  lVar2 = thunk_FUN_03d2ef40(*unaff_x22);
  FUN_072cdde4(lVar2,0);
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_03d2ee44(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0)) {
LAB_07273588:
    uVar4 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar4,0);
  }
  puVar1 = PTR_DAT_09217fd8;
  if (8 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[0xc] = lVar2;
    thunk_FUN_03d1023c(unaff_x19 + 0xc,lVar2);
    lVar2 = thunk_FUN_03d2ef40(*(undefined8 *)puVar1);
    FUN_072d460c(lVar2,0);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03d2ee44(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
    goto LAB_07273588;
    if (9 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[0xd] = lVar2;
      thunk_FUN_03d1023c(unaff_x19 + 0xd,lVar2);
      *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x10) = unaff_x19;
      thunk_FUN_03d1023c();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


