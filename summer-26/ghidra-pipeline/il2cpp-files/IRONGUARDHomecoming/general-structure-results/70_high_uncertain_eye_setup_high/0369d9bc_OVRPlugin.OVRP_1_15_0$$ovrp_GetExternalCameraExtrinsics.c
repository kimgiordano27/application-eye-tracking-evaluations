/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraExtrinsics
ENTRY_POINT: 0369d9bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraExtrinsics(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* try { // try from 0369d9bc to 0379d9d3 has its CatchHandler @ 0369dbf8 */
  if ((DAT_04833f41 & 1) == 0) {
                    /* try { // try from 0369d9d4 to 0379db57 has its CatchHandler @ 0369d5f4 */
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_57__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_24__);
    DAT_04833f41 = 1;
  }
  puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_24__;
  if (*(char *)(param_1 + 0x48) != '\0') {
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_57__);
    FUN_02b83988(uVar2,param_1,*(undefined8 *)puVar1,0);
    if (lVar3 != 0) {
      FUN_03691a90(lVar3,uVar2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  return;
}


