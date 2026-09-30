/*
FUNCTION_NAME: FUN_076c45b8
ENTRY_POINT: 076c45b8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 118
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_076c45b8(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_082713e8 & 1) == 0) {
    FUN_0373b518(Method_OVRTask_Awaiter<OVRResult<Guid,_OVRColocationSession_Result>>_GetResult__);
    FUN_0373b518(
                Method_OVRTask_Awaiter<OVRResult<Guid,_OVRColocationSession_Result>>_get_IsCompleted__
                );
    FUN_0373b518(Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_GetResult__);
    DAT_082713e8 = 1;
  }
  auVar3 = NEON_fmov(0x3f800000,4);
  *(long *)(param_1 + 0x30) = auVar3._8_8_;
  *(long *)(param_1 + 0x28) = auVar3._0_8_;
  *(undefined2 *)(param_1 + 0x3a) = 0x101;
  FUN_078b88bc(param_1,0);
  plVar2 = (long *)(param_1 + 0x98);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    lVar1 = thunk_FUN_037788cc(*(undefined8 *)
                                Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_GetResult__
                              );
    FUN_054d2cbc(lVar1,*(undefined8 *)
                        Method_OVRTask_Awaiter<OVRResult<Guid,_OVRColocationSession_Result>>_get_IsCompleted__
                );
    *plVar2 = lVar1;
    thunk_FUN_037aeb94(plVar2,lVar1);
    lVar1 = *plVar2;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  }
  *(long *)(lVar1 + 0x10) = param_1;
  thunk_FUN_037aeb94((long *)(lVar1 + 0x10),param_1);
  *(undefined1 *)(param_1 + 0xa0) = 1;
  return;
}


