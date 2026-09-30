/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionBegin
ENTRY_POINT: 03699194
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x036991e4) */

float OVRPlugin_UnityOpenXR__OnSessionBegin(long param_1)

{
  long in_x9;
  uint in_w10;
  uint unaff_w19;
  int unaff_w20;
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_s8;
  
  if (((uint)in_x9 != 0) && (unaff_w19 < in_w10)) {
    fVar2 = *(float *)(param_1 + in_x9 * unaff_w20 * 4 + 0x20);
    fVar3 = *(float *)(param_1 + in_x9 * (int)unaff_w19 * 4 + 0x20);
    fVar1 = 0.0;
    if ((fVar2 != fVar3) && (fVar2 = (unaff_s8 - fVar2) / (fVar3 - fVar2), 0.0 <= fVar2)) {
      fVar1 = fVar2;
    }
    if (1 < (uint)in_x9) {
      fVar2 = *(float *)(param_1 + 0x20 + in_x9 * unaff_w20 * 4 + 4);
      return fVar2 + fVar1 * (*(float *)(param_1 + 0x20 + in_x9 * (int)unaff_w19 * 4 + 4) - fVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


