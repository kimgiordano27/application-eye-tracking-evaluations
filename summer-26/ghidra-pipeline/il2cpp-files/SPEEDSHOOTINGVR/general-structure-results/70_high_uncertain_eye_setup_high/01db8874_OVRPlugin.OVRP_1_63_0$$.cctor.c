/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$.cctor
ENTRY_POINT: 01db8874
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_63_0___cctor(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 uVar3;
  long unaff_x21;
  ulong unaff_x22;
  
  lVar1 = FUN_00ff754c();
  if (lVar1 == 0) {
    if (((unaff_x22 & 1) == 0) && (uVar2 = FUN_01db86c8(), (uVar2 & 1) != 0)) {
      if (unaff_x21 == 0) goto LAB_01db88d0;
      FUN_01da7658();
    }
  }
  else {
    if (unaff_x21 == 0) {
LAB_01db88d0:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_01da7e9c();
  }
  uVar3 = *unaff_x19;
  thunk_FUN_00ffe618();
  return uVar3;
}


