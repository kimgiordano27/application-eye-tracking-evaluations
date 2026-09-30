/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingEnabled
ENTRY_POINT: 060149cc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_bodyTrackingEnabled(float param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000007a469da & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f7438);
    bRam0000000007a469da = 1;
  }
  fVar5 = param_1;
  if (*(char *)(param_2 + 0xa4) == '\0') {
    fVar7 = *(float *)(param_2 + 0xac);
    fVar8 = *(float *)(param_2 + 0xa0);
    fVar4 = (float)FUN_06e66384(0);
    fVar6 = fVar8 * fVar4;
    fVar5 = fVar6;
    if (param_1 - fVar7 < 0.0) {
      fVar5 = -(fVar8 * fVar4);
    }
    fVar5 = fVar7 + fVar5;
    if (ABS(param_1 - fVar7) <= fVar6) {
      fVar5 = param_1;
    }
  }
  *(float *)(param_2 + 0xac) = fVar5;
  puVar1 = PTR_DAT_075f7438;
  if (*(long *)(param_2 + 0x40) != 0) {
    lVar2 = thunk_FUN_06e03184(*(long *)(param_2 + 0x40),0);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar3);
    }
    if (lVar2 != 0) {
      thunk_FUN_06e1062c(*(undefined4 *)(param_2 + 0xac),lVar2,
                         **(undefined4 **)(*(long *)puVar1 + 0xb8),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


