/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKTrackable$$get_MarkerPayloadBytes
ENTRY_POINT: 06e36f68
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MRUtilityKit_MRUKTrackable__get_MarkerPayloadBytes(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (*(int *)((long)param_1 + 0xc) != *(int *)(lVar3 + 0x2c)) {
      FUN_07199bdc(0);
      lVar3 = *param_1;
      if (lVar3 == 0) goto LAB_06e37014;
    }
    uVar1 = *(uint *)(lVar3 + 0x20);
    uVar2 = *(uint *)(param_1 + 1);
    do {
      uVar5 = uVar2;
      if (uVar1 <= uVar5) {
        *(uint *)(param_1 + 1) = uVar1 + 1;
        param_1[2] = 0;
        param_1[3] = 0;
        goto LAB_06e37004;
      }
      lVar4 = *(long *)(lVar3 + 0x18);
      *(uint *)(param_1 + 1) = uVar5 + 1;
      if (lVar4 == 0) goto LAB_06e37014;
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      uVar2 = uVar5 + 1;
    } while (*(int *)(lVar4 + (long)(int)uVar5 * 0x30 + 0x20) < 0);
    lVar4 = lVar4 + (long)(int)uVar5 * 0x30;
    lVar3 = *(long *)(lVar4 + 0x28);
    param_1[3] = *(long *)(lVar4 + 0x30);
    param_1[2] = lVar3;
LAB_06e37004:
    return uVar5 < uVar1;
  }
LAB_06e37014:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


