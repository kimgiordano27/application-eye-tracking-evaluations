/*
FUNCTION_NAME: FUN_06cecdc8
ENTRY_POINT: 06cecdc8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_5;telemetry_or_network_hits_9;frame_or_lifecycle_behavior
*/


void FUN_06cecdc8(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  long local_38;
  
  if ((DAT_07a50b04 & 1) == 0) {
    FUN_031f20f4(
                Best_HTTP_Request_Upload_JSonDataStream<BulkCreateUpdateGameEventRequestData>_TypeInfo
                );
    DAT_07a50b04 = 1;
  }
  local_38 = 0;
  uVar1 = FUN_06ced668(param_1,param_2,&local_38);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (local_38 != 0) {
    if (*(char *)(local_38 + 0x28) == '\0') {
      return;
    }
    fVar4 = (float)FUN_06e663ac(0);
    if ((*(float *)(param_1 + 0x7c) <= 0.0) || (1.0 <= fVar4 - *(float *)(param_1 + 0x108))) {
      if (local_38 == 0) goto LAB_06cecf0c;
      uVar2 = *(undefined8 *)(local_38 + 0x30);
      uVar3 = *(undefined8 *)(param_1 + 0x120);
      if (*(int *)(*(long *)
                    Best_HTTP_Request_Upload_JSonDataStream<BulkCreateUpdateGameEventRequestData>_TypeInfo
                  + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      FUN_06c924a4(uVar2,uVar3,0);
    }
    else {
      if (local_38 == 0) goto LAB_06cecf0c;
      uVar2 = *(undefined8 *)(param_1 + 0x120);
      uVar3 = *(undefined8 *)(local_38 + 0x30);
      fVar4 = (float)FUN_06e663fc(0);
      fVar5 = *(float *)(param_1 + 0x7c);
      if (*(int *)(*(long *)
                    Best_HTTP_Request_Upload_JSonDataStream<BulkCreateUpdateGameEventRequestData>_TypeInfo
                  + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      FUN_06c91d30(fVar4 * fVar5,uVar2,uVar3,uVar2,1,1,0);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      thunk_FUN_06e00fb8(*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x120),0);
      return;
    }
  }
LAB_06cecf0c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


