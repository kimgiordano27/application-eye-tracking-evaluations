/*
FUNCTION_NAME: FUN_06c9203c
ENTRY_POINT: 06c9203c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_06c9203c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  if ((DAT_07a50791 & 1) == 0) {
    FUN_031f20f4(
                Best_HTTP_Request_Upload_JSonDataStream<BulkCreateUpdateGameEventRequestData>_TypeInfo
                );
    DAT_07a50791 = 1;
  }
  puVar1 = Best_HTTP_Request_Upload_JSonDataStream<BulkCreateUpdateGameEventRequestData>_TypeInfo;
  if (param_1 != 0) {
    if (0 < (int)*(ulong *)(param_1 + 0x18)) {
      uVar3 = 0;
      uVar2 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
      puVar4 = (undefined4 *)(param_1 + 0x24);
      do {
        if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        uVar5 = *puVar4;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_06c92630(uVar5);
        uVar2 = (ulong)*(uint *)(param_1 + 0x18);
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 2;
      } while ((long)uVar3 < (long)(int)*(uint *)(param_1 + 0x18));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


