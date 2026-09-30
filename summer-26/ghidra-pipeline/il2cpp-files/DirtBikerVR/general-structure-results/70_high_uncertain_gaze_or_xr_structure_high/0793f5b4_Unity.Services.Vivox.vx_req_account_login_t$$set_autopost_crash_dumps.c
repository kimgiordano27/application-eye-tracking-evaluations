/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_login_t$$set_autopost_crash_dumps
ENTRY_POINT: 0793f5b4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_Services_Vivox_vx_req_account_login_t__set_autopost_crash_dumps(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  long unaff_x21;
  int iStack0000000000000010;
  
  uVar3 = *unaff_x20;
  *(undefined8 *)(&stack0x00000008 + unaff_x21 * 8) = uVar3;
  iStack0000000000000010 = (int)unaff_x21 + 1;
                    /* try { // try from 0793f5c4 to 07a3f5cb has its CatchHandler @ 0793f638 */
  __cxa_end_catch();
  *unaff_x19 = 0xfffffffe;
                    /* try { // try from 0793f5d8 to 07a3f5f7 has its CatchHandler @ 0793f63c */
  lVar1 = thunk_FUN_03af1434(OVRPlugin_Vector3f___TypeInfo);
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar2 = thunk_FUN_03af1434(RootMotion_FinalIK_RagdollUtility_Child___TypeInfo);
  FUN_05338d34(unaff_x19 + 2,uVar3,uVar2);
  return;
}


