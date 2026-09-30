/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryConfigured
ENTRY_POINT: 0600bab8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__GetBoundaryConfigured
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  int in_w8;
  ulong *unaff_x19;
  float *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 in_stack_000000a8;
  
  if (in_w8 == 0) {
    FUN_031f20f4(PTR_DAT_075b9420);
    *(undefined1 *)(unaff_x24 + 0xba2) = 1;
    param_1 = *unaff_x22;
    param_2 = unaff_x22[1];
    param_3 = unaff_x22[2];
    param_4 = unaff_x22[3];
    param_5 = unaff_x22[4];
    param_6 = unaff_x22[5];
  }
  fVar2 = ABS(unaff_s8);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = **(float **)(*(long *)PTR_DAT_075b9420 + 0xb8) * 8.0;
  fVar1 = fVar2 * DAT_014bab34;
  if (fVar2 * DAT_014bab34 <= fVar3) {
    fVar1 = fVar3;
  }
  fVar2 = 0.0;
  if (fVar1 <= ABS(0.0 - unaff_s8)) {
    fVar2 = unaff_s9 / unaff_s8;
  }
  FUN_0600bde8(param_1 + param_4 * fVar2,param_2 + param_5 * fVar2,param_3 + fVar2 * param_6);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06e67e1c(0,0,0,&stack0x00000040,0);
  FUN_0600bc38();
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000 & 0xffffffff00000000;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  return 1;
}


