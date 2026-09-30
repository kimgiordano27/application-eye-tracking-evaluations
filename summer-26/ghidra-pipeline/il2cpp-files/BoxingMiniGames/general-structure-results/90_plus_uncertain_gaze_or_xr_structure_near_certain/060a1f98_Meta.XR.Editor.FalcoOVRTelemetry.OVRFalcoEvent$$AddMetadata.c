/*
FUNCTION_NAME: Meta.XR.Editor.FalcoOVRTelemetry.OVRFalcoEvent$$AddMetadata
ENTRY_POINT: 060a1f98
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Editor_FalcoOVRTelemetry_OVRFalcoEvent__AddMetadata(void)

{
  bool bVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  lVar2 = *(long *)(unaff_x19 + 0xa0);
  if (lVar2 != 0) {
    fVar3 = (float)(**(code **)(lVar2 + 0x18))
                             (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    bVar1 = fVar3 - *(float *)(unaff_x19 + 0xec) <= *(float *)(unaff_x19 + 0x74);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      if (*(char *)(*(long *)(unaff_x19 + 0x20) + 0x7c) != '\0' || bVar1) {
        if (*(char *)(unaff_x19 + 0xf1) == '\0') {
          FUN_060a136c();
          fVar3 = *(float *)(unaff_x19 + 0xd0);
          if (fVar3 < 0.0 && bVar1) {
            fVar3 = 0.0;
            *(undefined4 *)(unaff_x19 + 0xd0) = 0;
          }
          *(undefined4 *)(unaff_x19 + 0xec) = 0;
          *(undefined2 *)(unaff_x19 + 0x110) = 1;
          *(float *)(unaff_x19 + 0xcc) = unaff_s10 + *(float *)(unaff_x19 + 0xcc);
          *(float *)(unaff_x19 + 0xd0) = unaff_s9 + fVar3;
          *(float *)(unaff_x19 + 0xd4) = unaff_s8 + *(float *)(unaff_x19 + 0xd4);
        }
        else {
          *(undefined1 *)(unaff_x19 + 0xf1) = 0;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


