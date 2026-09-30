/*
FUNCTION_NAME: OVRPlugin.OVRP_1_48_0$$.cctor
ENTRY_POINT: 01db6bc4
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


void OVRPlugin_OVRP_1_48_0___cctor(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long unaff_x19;
  long unaff_x20;
  
  if ((param_1 != 0) && (uVar2 = FUN_01db71b8(), (uVar2 >> 3 & 1) == 0)) {
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_01db6d78();
  }
  if (*(int *)(*(long *)PTR_DAT_0234c670 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  puVar1 = PTR_DAT_0234bbd8;
  if (unaff_x20 != 0) {
    FUN_01db6dec();
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01da65cc();
  FUN_01db70c8();
  return;
}


