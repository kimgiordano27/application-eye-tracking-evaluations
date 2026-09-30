/*
FUNCTION_NAME: OVRPlugin$$GetNodePoseStateAtTime
ENTRY_POINT: 0600a070
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetNodePoseStateAtTime(long param_1)

{
  float *pfVar1;
  float *unaff_x19;
  long *unaff_x20;
  float in_s4;
  float unaff_s8;
  float unaff_s9;
  float fVar2;
  float fVar3;
  float unaff_s14;
  float fVar4;
  float in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  
  pfVar1 = *(float **)(**(long **)(param_1 + 0x378) + 0xb8);
  fVar2 = *pfVar1;
  fVar4 = pfVar1[1];
  fVar3 = pfVar1[2];
                    /* try { // try from 0600a0d8 to 0610a28b has its CatchHandler @ 0600a0d8
                       catch() { ... } // from try @ 0600a0d8 with catch @ 0600a0d8
                       catch() { ... } // from try @ 0600a394 with catch @ 0600a0d8
                       catch() { ... } // from try @ 0600a470 with catch @ 0600a0d8
                       catch() { ... } // from try @ 0600a480 with catch @ 0600a0d8
                       catch() { ... } // from try @ 0600a548 with catch @ 0600a0d8 */
  if (unaff_s8 * fVar3 + unaff_s9 * fVar2 + unaff_s14 * fVar4 <= 0.0) {
    fVar3 = 0.0;
    in_stack_00000018._4_4_ = fStack0000000000000024;
  }
  else {
    fVar4 = fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3;
    fVar3 = 1.0;
    if (fVar4 < in_s4) {
      if (DAT_07a3f7a9 == '\0') {
        FUN_031f20f4(0x3f800000,in_stack_00000018._4_4_,uStack0000000000000020,PTR_DAT_0759b370);
        DAT_07a3f7a9 = '\x01';
      }
      if ((*(int *)(*unaff_x20 + 0xe4) == 0) &&
         (Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(), DAT_07a3f7a9 == '\0'
         )) {
        FUN_031f20f4(PTR_DAT_0759b370);
        DAT_07a3f7a9 = '\x01';
      }
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      in_stack_00000018._4_4_ = fStack0000000000000024 + fVar2;
      fVar3 = SQRT(fVar4) / in_stack_00000010;
    }
  }
  *unaff_x19 = fVar3;
  return in_stack_00000018._4_4_;
}


