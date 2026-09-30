/*
FUNCTION_NAME: FUN_06c924f4
ENTRY_POINT: 06c924f4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_06c924f4(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  
  puVar3 = Best_HTTP_Request_Upload_JSonDataStream<BulkCreateUpdateGameEventRequestData>_TypeInfo;
  if ((DAT_07a50792 & 1) == 0) {
    FUN_031f20f4(
                Best_HTTP_Request_Upload_JSonDataStream<BulkCreateUpdateGameEventRequestData>_TypeInfo
                );
    FUN_031f20f4(PTR_DAT_075b7458);
    FUN_031f20f4(PTR_DAT_075e0828);
    DAT_07a50792 = 1;
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar4 = *(long *)puVar3;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 != 0) {
    fVar8 = (float)param_1 * 100.0;
    iVar1 = -0x80000000;
    if (fVar8 != INFINITY) {
      iVar1 = (int)fVar8;
    }
    uVar5 = FUN_0439d228(lVar4,iVar1,*(undefined8 *)PTR_DAT_075b7458);
    if ((uVar5 & 1) == 0) {
      return;
    }
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar4 = *(long *)puVar3;
    }
    lVar4 = **(long **)(lVar4 + 0xb8);
    if (lVar4 != 0) {
      lVar6 = *(long *)(lVar4 + 0x10);
      lVar7 = *(long *)PTR_DAT_075e0828;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar2 = *(uint *)(lVar4 + 0x18);
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar2 + 1;
          *(float *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = (float)param_1;
          return;
        }
        FUN_048380f0(param_1,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                    );
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


