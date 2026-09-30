/*
FUNCTION_NAME: FUN_06c92794
ENTRY_POINT: 06c92794
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_3;telemetry_or_network_hits_9;frame_or_lifecycle_behavior
*/


undefined8 FUN_06c92794(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_07a50797 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075fa298);
    FUN_031f20f4(
                Best_HTTP_Request_Upload_JSonDataStream<BulkCreateUpdateGameEventRequestData>_TypeInfo
                );
    DAT_07a50797 = 1;
  }
  puVar2 = Best_HTTP_Request_Upload_JSonDataStream<BulkCreateUpdateGameEventRequestData>_TypeInfo;
  uVar1 = param_1 - 2;
  if (6 < uVar1) {
    uVar4 = FUN_031f21dc(*(undefined8 *)PTR_DAT_075fa298,param_1);
    return uVar4;
  }
  lVar3 = *(long *)
           Best_HTTP_Request_Upload_JSonDataStream<BulkCreateUpdateGameEventRequestData>_TypeInfo;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x20);
  if (lVar3 != 0) {
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      return *(undefined8 *)(lVar3 + (ulong)uVar1 * 8 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


