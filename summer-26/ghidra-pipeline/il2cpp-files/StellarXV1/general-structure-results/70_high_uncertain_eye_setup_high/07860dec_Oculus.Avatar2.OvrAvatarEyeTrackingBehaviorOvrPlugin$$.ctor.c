/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarEyeTrackingBehaviorOvrPlugin$$.ctor
ENTRY_POINT: 07860dec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin___ctor(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w8;
  
  if (in_w8 == 0) {
    thunk_FUN_040d65a8();
  }
  plVar1 = (long *)FUN_0768890c();
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  (**(code **)(*plVar1 + 0x2f8))(plVar1,*(undefined8 *)(*plVar1 + 0x300));
  FUN_03b089e0();
  FUN_03b08cc0();
  uVar2 = FUN_074e752c();
  thunk_FUN_040dedf8(PTR_DAT_092bbaa8);
  uVar3 = thunk_FUN_040b4efc();
  FUN_0787a7f0(uVar3,uVar2);
  uVar2 = thunk_FUN_040dedf8(PTR_DAT_092e6008);
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar3,uVar2);
}


