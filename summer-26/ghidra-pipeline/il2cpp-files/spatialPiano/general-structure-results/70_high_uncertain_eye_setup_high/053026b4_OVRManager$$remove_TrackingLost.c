/*
FUNCTION_NAME: OVRManager$$remove_TrackingLost
ENTRY_POINT: 053026b4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_TrackingLost(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_06bbb10d & 1) == 0) {
    FUN_02f08768(System_Runtime_Remoting_Messaging_ConstructionResponse_TypeInfo);
    DAT_06bbb10d = 1;
  }
  lVar2 = FUN_05119fa4(*(undefined8 *)(param_1 + 0x170),param_2,0);
  puVar1 = System_Runtime_Remoting_Messaging_ConstructionResponse_TypeInfo;
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x170) = 0;
    return;
  }
  uVar4 = *(undefined8 *)System_Runtime_Remoting_Messaging_ConstructionResponse_TypeInfo;
  lVar3 = thunk_FUN_02f45174(lVar2,uVar4);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)puVar1;
    *(long *)(param_1 + 0x170) = lVar3;
    lVar3 = thunk_FUN_02f45174(lVar2,uVar4);
    if (lVar3 != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f08d48(lVar2,uVar4);
}


