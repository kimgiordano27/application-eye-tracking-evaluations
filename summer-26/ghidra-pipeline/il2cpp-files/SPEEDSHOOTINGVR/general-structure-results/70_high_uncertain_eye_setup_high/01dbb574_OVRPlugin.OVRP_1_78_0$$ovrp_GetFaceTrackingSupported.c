/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingSupported
ENTRY_POINT: 01dbb574
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01dbb600) */

void OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingSupported(long param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (((param_2 & 1) == 0) || (uVar1 = FUN_01dbe0d4(), (uVar1 & 1) == 0)) {
    FUN_01dba9e8(param_1);
    return;
  }
  lVar2 = *param_3;
  if (lVar2 != 0) {
    *param_3 = 0;
    thunk_FUN_0106e12c(param_3,0);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
  if (lVar2 != 0) {
    *param_3 = lVar2;
    thunk_FUN_0106e12c(param_3,lVar2);
  }
  return;
}


