/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$WorldPosToNonNormalizedTextureCoords
ENTRY_POINT: 04a5cd3c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


int Meta_XR_EnvironmentDepthRaycaster__WorldPosToNonNormalizedTextureCoords(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long unaff_x24;
  ulong unaff_x25;
  
  while( true ) {
    unaff_x25 = unaff_x25 + 1;
    unaff_x24 = unaff_x24 + 0x10;
    if ((long)*(int *)(unaff_x21 + 0x24) <= (long)unaff_x25) {
      return unaff_w22;
    }
    lVar3 = *(long *)(unaff_x21 + 0x18);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    if (-1 < *(int *)(lVar3 + unaff_x24 + 0x20)) {
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar3 + unaff_x24 + 0x28)
                         ,*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar2 & 1) != 0) {
        uVar1 = FUN_04a5b1e4();
        unaff_w22 = unaff_w22 + (uVar1 & 1);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


