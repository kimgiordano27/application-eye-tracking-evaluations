/*
FUNCTION_NAME: FUN_078d2034
ENTRY_POINT: 078d2034
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_078d2034(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  undefined8 uVar1;
  
  if ((DAT_08987a2f & 1) == 0) {
    FUN_03a8a718(OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo);
    DAT_08987a2f = 1;
  }
  FUN_0679343c(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x10),param_3);
  *(undefined8 *)(param_1 + 0x28) = param_4;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x28),param_4);
  *(undefined8 *)(param_1 + 0x20) = param_5;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x20),param_5);
  if (param_2 != 0) {
    uVar1 = FUN_04de87dc(param_2,*(undefined8 *)
                                  OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo
                        );
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    thunk_FUN_03afed3c();
    *(undefined8 *)(param_1 + 0x30) = param_6;
    thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x30),param_6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


