/*
FUNCTION_NAME: FUN_055abfa8
ENTRY_POINT: 055abfa8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_055abfa8(long param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__;
  if ((DAT_06bbfb03 & 1) == 0) {
    FUN_02f08768(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__);
    FUN_02f08768(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__);
    FUN_02f08768(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__);
    FUN_02f08768(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__);
    DAT_06bbfb03 = 1;
  }
  lVar2 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_05116b38(lVar2,0);
  if (lVar2 != 0) {
    lVar6 = *(long *)(param_1 + 0x48);
    *(undefined4 *)(lVar2 + 0x10) = param_2;
    if (param_3 < 0) {
      uVar4 = 0;
    }
    else {
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x68), lVar3 == 0)) goto LAB_055ac0c0;
      uVar4 = FUN_055a9194(lVar3,param_3);
    }
    puVar1 = Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__;
    uVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__
                              );
    FUN_048351cc(uVar5,lVar2,*(undefined8 *)puVar1,0);
    if (lVar6 != 0) {
      FUN_0303b41c(lVar6,param_2,uVar4,param_4 & 1,uVar5,
                   *(undefined8 *)Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__);
      return;
    }
  }
LAB_055ac0c0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


