/*
FUNCTION_NAME: FUN_075384b4
ENTRY_POINT: 075384b4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_075384b4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if ((DAT_07ef4ce4 & 1) == 0) {
    FUN_03642964(
                Method_Unity_Collections_NativeArray_ReadOnly<GPUDrivenRendererMeshLodData>_UnsafeElementAt__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    DAT_07ef4ce4 = 1;
  }
  puVar1 = 
  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
  ;
  if (param_1 != 0) {
    FUN_0750c9fc(param_1,0);
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) != 0) {
      FUN_04ef5120(**(long **)(lVar2 + 0xb8),param_1,
                   *(undefined8 *)
                    Method_Unity_Collections_NativeArray_ReadOnly<GPUDrivenRendererMeshLodData>_UnsafeElementAt__
                  );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


