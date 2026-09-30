/*
FUNCTION_NAME: FUN_069a013c
ENTRY_POINT: 069a013c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_069a013c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_0755b5db & 1) == 0) {
    FUN_03188a78(
                Method_OVRTask_Awaiter<OVRResult<Guid,_OVRColocationSession_Result>>_get_IsCompleted__
                );
    FUN_03188a78(Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_GetResult__);
    DAT_0755b5db = 1;
  }
  puVar1 = Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_GetResult__;
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_069ed9b0(param_1,0);
    }
    if (DAT_0755b618 == (code *)0x0) {
      DAT_0755b618 = (code *)FUN_03188a3c(
                                         "UnityEngine.Renderer::GetMaterial_Injected(System.IntPtr)"
                                         );
    }
    uVar2 = (*DAT_0755b618)(lVar3);
    FUN_0695e17c(uVar2,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


