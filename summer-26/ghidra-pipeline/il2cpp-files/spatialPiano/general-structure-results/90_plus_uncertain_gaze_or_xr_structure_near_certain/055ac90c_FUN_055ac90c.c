/*
FUNCTION_NAME: FUN_055ac90c
ENTRY_POINT: 055ac90c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


undefined1  [16] FUN_055ac90c(long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 local_40;
  undefined4 local_38;
  
  if ((DAT_06bbfafa & 1) == 0) {
    FUN_02f08768(Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_get_IsCompleted__);
    FUN_02f08768(
                Method_OVRTask_Awaiter<OVRResult<Guid,_OVRColocationSession_Result>>_get_IsCompleted__
                );
    FUN_02f08768(Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_GetResult__);
    DAT_06bbfafa = 1;
  }
  if (param_2 == 0) {
    local_38 = 0;
    local_40 = 0;
LAB_055aca14:
    auVar7._8_4_ = local_38;
    auVar7._0_8_ = local_40;
    auVar7._12_4_ = 0;
    return auVar7;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    iVar2 = FUN_04005f40(*(long *)(param_1 + 0x38),param_2,
                         *(undefined8 *)
                          Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_get_IsCompleted__
                        );
    puVar1 = Method_OVRTask_Awaiter<OVRResult<Guid,_OVRColocationSession_Result>>_get_IsCompleted__;
    if (*(long *)(param_1 + 0x38) != 0) {
      iVar3 = FUN_04006ef8(*(long *)(param_1 + 0x38),param_2,
                           *(undefined8 *)
                            Method_OVRTask_Awaiter<OVRResult<Guid,_OVRColocationSession_Result>>_get_IsCompleted__
                          );
      iVar5 = iVar2;
      if (iVar3 != 0) {
        lVar6 = *(long *)(param_1 + 0x38);
        if (lVar6 == 0) goto LAB_055aca30;
        uVar4 = FUN_04006ef8(lVar6,param_2,*(undefined8 *)puVar1);
        iVar5 = FUN_04006f50(lVar6,uVar4,
                             *(undefined8 *)
                              Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_GetResult__
                            );
        iVar5 = iVar2 + iVar5 + -1;
      }
      local_38 = 0;
      local_40 = 0;
      FUN_055a89a8(&local_40,iVar2,iVar5);
      goto LAB_055aca14;
    }
  }
LAB_055aca30:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


