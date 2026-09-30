/*
FUNCTION_NAME: OVRManager.PassthroughCapabilities$$get_SupportsPassthrough
ENTRY_POINT: 0366fe40
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager_PassthroughCapabilities__get_SupportsPassthrough
                (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  int in_w8;
  float *pfVar1;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar5;
  float unaff_s14;
  float unaff_s15;
  float in_s16;
  float in_s17;
  undefined8 in_stack_00000008;
  
  fVar5 = *(float *)(unaff_x19 + 0x104);
  if (in_w8 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    *(undefined1 *)(unaff_x23 + 0xe9b) = 1;
  }
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar2 = SQRT(fVar5 * fVar5 + unaff_s8 * unaff_s8 + unaff_s12 * unaff_s12);
  if (fVar2 <= param_3) {
    if (*(char *)(unaff_x22 + 0xe12) == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      *(undefined1 *)(unaff_x22 + 0xe12) = 1;
    }
    pfVar1 = *(float **)(*unaff_x21 + 0xb8);
    fVar3 = *pfVar1;
    fVar4 = pfVar1[1];
    fVar5 = pfVar1[2];
  }
  else {
    fVar3 = unaff_s8 / fVar2;
    fVar4 = unaff_s12 / fVar2;
    fVar5 = fVar5 / fVar2;
  }
  *(float *)(unaff_x19 + 0xa4) = fVar3;
  *(float *)(unaff_x19 + 0xa8) = fVar4;
  *(float *)(unaff_x19 + 0xac) = fVar5;
  *(float *)(unaff_x19 + 0xb0) = unaff_s11 * in_s16;
  fVar2 = unaff_s15 * fVar4 - in_s17 * fVar5;
  *(float *)(unaff_x19 + 0xbc) = fVar2;
  *(float *)(unaff_x19 + 0xc0) = in_s16 * fVar5 - unaff_s15 * fVar3;
  *(float *)(unaff_x19 + 0xc4) = in_s17 * fVar3 - in_s16 * fVar4;
  *(undefined4 *)(unaff_x19 + 200) = in_stack_00000008._4_4_;
  *(undefined4 *)(unaff_x19 + 0xcc) = unaff_s10;
  *(undefined4 *)(unaff_x19 + 0xd0) = unaff_s9;
  *(float *)(unaff_x19 + 0xb4) = unaff_s11 * in_s17;
  *(float *)(unaff_x19 + 0xb8) = unaff_s11 * unaff_s15;
  return unaff_s14 * unaff_s11 * fVar2;
}


