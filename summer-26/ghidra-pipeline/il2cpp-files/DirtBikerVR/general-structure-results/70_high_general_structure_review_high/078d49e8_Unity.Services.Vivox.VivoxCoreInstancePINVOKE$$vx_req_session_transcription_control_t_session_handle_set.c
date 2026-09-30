/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_transcription_control_t_session_handle_set
ENTRY_POINT: 078d49e8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_transcription_control_t_session_handle_set
               (long param_1)

{
  undefined8 uVar1;
  int in_w8;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x22;
  
  if (in_w8 == 0) {
    thunk_FUN_03ae8be4();
    param_1 = *unaff_x22;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar2[3] == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar2 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
                    /* try { // try from 078d4a1c to 079d4a67 has its CatchHandler @ 078d4b64 */
    uVar3 = *puVar2;
    uVar1 = thunk_FUN_03ac74bc(*(undefined8 *)System_Predicate<KerningPair>_TypeInfo);
    FUN_049639e4(uVar1,uVar3,*(undefined8 *)System_Predicate<NetworkObject>_TypeInfo,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
    *puVar2 = uVar1;
    thunk_FUN_03afed3c(puVar2,uVar1);
  }
  if (unaff_x19 != 0) {
                    /* try { // try from 078d4a68 to 079d4ab3 has its CatchHandler @ 078d4b60 */
    FUN_04513f78();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


