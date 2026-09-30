/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_get_session_fonts_t$$op_Implicit
ENTRY_POINT: 0793ceb0
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


undefined8 Unity_Services_Vivox_vx_req_account_get_session_fonts_t__op_Implicit(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_08486bc0);
  *(undefined1 *)(unaff_x21 + 0xdb9) = 1;
  puVar1 = OVRPlugin_Vector2f___TypeInfo;
  plVar2 = *(long **)(unaff_x19 + 0x10);
  uVar4 = *unaff_x20;
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    uVar4 = FUN_065cddf0(uVar4,*(undefined8 *)puVar1,uVar3,0);
    return uVar4;
  }
  return uVar4;
}


