/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_aux_create_account_t_number_get
ENTRY_POINT: 078ccb1c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_aux_create_account_t_number_get
               (undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (param_2 == 0) {
    thunk_FUN_03af1434(PTR_DAT_08493908);
    uVar1 = thunk_FUN_03ac74bc();
    puVar3 = OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo;
                    /* try { // try from 078ccb48 to 079ccc27 has its CatchHandler @ 078ccb48
                       catch() { ... } // from try @ 078ccb48 with catch @ 078ccb48
                       catch() { ... } // from try @ 078cce80 with catch @ 078ccb48
                       catch() { ... } // from try @ 078ccedc with catch @ 078ccb48
                       catch() { ... } // from try @ 078ccf38 with catch @ 078ccb48
                       catch() { ... } // from try @ 078ccfb4 with catch @ 078ccb48
                       catch() { ... } // from try @ 078ccfec with catch @ 078ccb48
                       catch() { ... } // from try @ 078cd038 with catch @ 078ccb48
                       catch() { ... } // from try @ 078cd0c8 with catch @ 078ccb48 */
  }
  else {
    if (0 < *(int *)(param_2 + 0x30)) {
      return;
    }
    thunk_FUN_03af1434(PTR_DAT_08493908);
    uVar1 = thunk_FUN_03ac74bc();
    puVar3 = OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo;
  }
  uVar2 = thunk_FUN_03af1434(puVar3);
  FUN_078bbac4(uVar1,uVar2,0xc);
  uVar2 = thunk_FUN_03af1434(OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar1,uVar2);
}


