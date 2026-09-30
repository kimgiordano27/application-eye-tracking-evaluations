/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeTrackingSupported
ENTRY_POINT: 01dbb4f8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingSupported(ulong param_1)

{
  ulong uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined8 *puVar3;
  long *unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234c670);
    *(undefined1 *)(unaff_x22 + 0xa4c) = 1;
  }
  FUN_01dbb48c();
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar1 = FUN_01da6aa0();
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x48);
    thunk_FUN_00ffe618();
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x28);
      *puVar3 = unaff_x19;
      thunk_FUN_0106e12c(puVar3,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  return;
}


