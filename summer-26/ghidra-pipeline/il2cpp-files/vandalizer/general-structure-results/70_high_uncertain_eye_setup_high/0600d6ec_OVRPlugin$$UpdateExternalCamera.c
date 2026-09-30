/*
FUNCTION_NAME: OVRPlugin$$UpdateExternalCamera
ENTRY_POINT: 0600d6ec
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateExternalCamera(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    fVar4 = (float)*(undefined8 *)(lVar1 + 0x1c) - (float)*(undefined8 *)(lVar1 + 0x10);
    fVar5 = (float)((ulong)*(undefined8 *)(lVar1 + 0x1c) >> 0x20) -
            (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20);
    fVar3 = *(float *)(lVar1 + 0x24) - *(float *)(lVar1 + 0x18);
    fVar3 = fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3;
    if (fVar3 <= DAT_014bab34) {
      if (DAT_07a3caf2 == '\0') {
        FUN_031f20f4(PTR_DAT_0759b378);
        DAT_07a3caf2 = '\x01';
      }
      uVar2 = *(undefined8 *)PTR_DAT_0759b378;
    }
    else {
      if (DAT_07a3ca81 == '\0') {
        FUN_031f20f4(PTR_DAT_0759b370);
        DAT_07a3ca81 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      if (SQRT(fVar3) <= DAT_014ba9b8) {
        if (DAT_07a3ca82 == '\0') {
          FUN_031f20f4(PTR_DAT_0759b378);
          DAT_07a3ca82 = '\x01';
        }
        uVar2 = *(undefined8 *)PTR_DAT_0759b378;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


