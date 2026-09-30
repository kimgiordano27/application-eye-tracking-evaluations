/*
FUNCTION_NAME: OVR.OpenVR.IVRInput._ShowBindingsForActionSet$$EndInvoke
ENTRY_POINT: 03717dcc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_10
*/


void OVR_OpenVR_IVRInput__ShowBindingsForActionSet__EndInvoke(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  puVar3 = 
  Method_Meta_WitAi_Requests_VoiceServiceRequest_<>c__DisplayClass5_0_<SimulateResponse>b__0__;
  puVar2 = Method_Meta_WitAi_Utilities_VoiceServiceReference_<>c_<get_VoiceService>b__2_0__;
  puVar1 = Method_Meta_WitAi_VoiceService_<>c__DisplayClass58_0_<OnAudioRequestCreated>b__0__;
  if ((*(byte *)(unaff_x22 + 0x135) & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_Utilities_VoiceServiceReference_<>c_<get_VoiceService>b__2_0__
                      );
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_Requests_VoiceServiceRequest_<>c__DisplayClass5_0_<SimulateResponse>b__0__
                      );
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_Requests_VoiceServiceRequest_<PerformMainThreadCallbacks>d__9_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_VoiceService_<>c__DisplayClass58_0_<OnAudioRequestCreated>b__0__
                      );
    *(undefined1 *)(unaff_x22 + 0x135) = 1;
  }
  FUN_037184fc(param_1,*(undefined8 *)puVar1);
  lVar4 = FUN_03708a54(0);
  uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_029dd14c(uVar5,param_1,*(undefined8 *)puVar3,0);
  if (lVar4 != 0) {
    FUN_026ddee8(lVar4,uVar5,
                 *(undefined8 *)
                  Method_Meta_WitAi_Requests_VoiceServiceRequest_<PerformMainThreadCallbacks>d__9_System_Collections_IEnumerator_Reset__
                );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


