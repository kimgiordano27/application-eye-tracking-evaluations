/*
FUNCTION_NAME: OVRManager$$get_xrSession
ENTRY_POINT: 0908286c
PROGRAM: Hyper-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__get_xrSession(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_0b330144 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac56b50);
    DAT_0b330144 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x88);
  if (lVar1 != 0) {
    fVar2 = (float)(**(code **)(lVar1 + 0x18))
                             (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    if (*(long *)(param_1 + 0x20) != 0) {
      fVar7 = *(float *)(param_1 + 0xb8);
      if ((*(char *)(*(long *)(param_1 + 0x20) + 0x7c) == '\0') || (0.0 < fVar7)) {
        fVar5 = *(float *)(param_1 + 0xb4);
        fVar4 = 1.0 / (fVar2 * *(float *)(param_1 + 0x68) + 1.0);
        fVar9 = fVar5 * fVar4;
        fVar8 = *(float *)(param_1 + 0xbc) * fVar4;
        *(float *)(param_1 + 0xb4) = fVar9;
        *(float *)(param_1 + 0xbc) = fVar8;
        if (0.0 < fVar7) {
          fVar4 = fVar2 * *(float *)(param_1 + 100) + 1.0;
          fVar7 = fVar7 * (1.0 / fVar4);
          *(float *)(param_1 + 0xb8) = fVar7;
        }
        if (*(int *)(*(long *)PTR_DAT_0ac56b50 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        fVar3 = (float)FUN_0a1f1714(0);
        fVar6 = *(float *)(param_1 + 0x70);
        *(float *)(param_1 + 0xb4) = fVar9 + fVar2 * fVar3 * fVar6;
        *(float *)(param_1 + 0xb8) = fVar7 + fVar2 * fVar4 * fVar6;
        *(float *)(param_1 + 0xbc) = fVar8 + fVar2 * fVar5 * fVar6;
      }
      else {
        *(undefined4 *)(param_1 + 0xb8) = 0;
        fVar2 = 1.0 / (fVar2 * *(float *)(param_1 + 0x60) + 1.0);
        *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb4) * fVar2;
        *(float *)(param_1 + 0xbc) = *(float *)(param_1 + 0xbc) * fVar2;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


