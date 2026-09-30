/*
FUNCTION_NAME: OVRPlugin$$GetLayerAndroidSurfaceObject
ENTRY_POINT: 06009284
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06009354) */

float OVRPlugin__GetLayerAndroidSurfaceObject(float param_1)

{
  long *unaff_x19;
  float fVar1;
  double dVar2;
  float fVar3;
  float unaff_s13;
  float unaff_s15;
  float in_stack_00000010;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  fVar3 = 0.0;
  if (param_1 <= 0.0) {
    if (DAT_07a444b2 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      DAT_07a444b2 = '\x01';
    }
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    fVar1 = SQRT((fStack000000000000002c * fStack000000000000002c +
                 in_stack_00000010 * in_stack_00000010 +
                 fStack0000000000000020 * fStack0000000000000020) *
                 (unaff_s13 * unaff_s13 +
                 fStack0000000000000028 * fStack0000000000000028 +
                 fStack0000000000000024 * fStack0000000000000024));
    fVar3 = 0.0;
    if (DAT_014ba698 <= fVar1) {
      fVar1 = (fStack000000000000002c * unaff_s13 +
              in_stack_00000010 * fStack0000000000000028 +
              fStack0000000000000020 * fStack0000000000000024) / fVar1;
      if (fVar1 < -1.0) {
        fVar1 = -1.0;
      }
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      dVar2 = acos((double)fVar1);
      fVar3 = (float)dVar2 * DAT_014baf34;
    }
    fVar3 = ABS(unaff_s15) / fVar3;
  }
  return fVar3;
}


