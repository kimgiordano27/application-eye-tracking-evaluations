/*
FUNCTION_NAME: Meta.XR.Editor.FalcoOVRTelemetry.OVRFalcoEvent$$AddMetadata
ENTRY_POINT: 060a1e60
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Editor_FalcoOVRTelemetry_OVRFalcoEvent__AddMetadata(float param_1)

{
  long unaff_x19;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float fVar5;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  
  fVar2 = unaff_s10 * unaff_s12 + unaff_s9 * unaff_s13 + unaff_s11 * unaff_s14;
  fVar4 = (unaff_s13 * fVar2) / param_1;
  fVar5 = unaff_s9 - fVar4;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    fVar1 = (float)FUN_071d0360(*(long *)(unaff_x19 + 0x28),0);
    if (*(char *)(unaff_x19 + 0xf1) == '\0') {
      fVar3 = 0.0;
    }
    else {
      fVar3 = *(float *)(unaff_x19 + 0x4c);
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_071d043c(fVar5 + fVar1,fVar3 + unaff_s8 + *(float *)(unaff_x19 + 0x48),
                   (unaff_s10 - (unaff_s12 * fVar2) / param_1) + fVar4,*(long *)(unaff_x19 + 0x28),0
                  );
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_0609eda8(*(long *)(unaff_x19 + 0x20),&stack0x00000020);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


