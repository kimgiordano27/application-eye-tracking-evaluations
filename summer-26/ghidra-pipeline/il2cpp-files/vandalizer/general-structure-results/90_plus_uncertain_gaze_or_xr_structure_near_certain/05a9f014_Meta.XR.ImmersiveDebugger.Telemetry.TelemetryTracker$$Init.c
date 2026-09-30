/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$Init
ENTRY_POINT: 05a9f014
PROGRAM: vandalizer-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


bool Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__Init(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  if (*(int *)((long)param_2 + 0xc) != *(int *)(param_1 + 0x2c)) {
    FUN_05e229e0(0);
    param_1 = *param_2;
    if (param_1 == 0) {
LAB_05a9f0b4:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = *(uint *)(param_2 + 1);
  do {
    uVar4 = uVar2;
    if (uVar1 <= uVar4) {
      *(uint *)(param_2 + 1) = uVar1 + 1;
      param_2[2] = 0;
      param_2[3] = 0;
      goto LAB_05a9f0a4;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    *(uint *)(param_2 + 1) = uVar4 + 1;
    if (lVar3 == 0) goto LAB_05a9f0b4;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar2 = uVar4 + 1;
  } while (*(int *)(lVar3 + (long)(int)uVar4 * 0x60 + 0x20) < 0);
  lVar3 = lVar3 + (long)(int)uVar4 * 0x60;
  lVar5 = *(long *)(lVar3 + 0x28);
  param_2[3] = *(long *)(lVar3 + 0x30);
  param_2[2] = lVar5;
LAB_05a9f0a4:
  return uVar4 < uVar1;
}


