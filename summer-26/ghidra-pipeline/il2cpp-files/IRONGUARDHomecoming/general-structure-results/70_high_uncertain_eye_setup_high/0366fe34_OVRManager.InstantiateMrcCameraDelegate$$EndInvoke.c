/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$EndInvoke
ENTRY_POINT: 0366fe34
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager_InstantiateMrcCameraDelegate__EndInvoke
                (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  float *pfVar1;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  float fVar2;
  float fVar3;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  float unaff_s11;
  float fVar4;
  float fVar5;
  float unaff_s14;
  float fVar6;
  float in_s16;
  float in_s17;
  undefined8 in_stack_00000008;
  
  fVar6 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(unaff_x19 + 0xfc);
  fVar4 = *(float *)(unaff_x19 + 0x100);
  fVar5 = *(float *)(unaff_x19 + 0x104);
  if (*(char *)(unaff_x23 + 0xe9b) == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    *(undefined1 *)(unaff_x23 + 0xe9b) = 1;
  }
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar2 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
  if (fVar2 <= param_4) {
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
    fVar3 = fVar3 / fVar2;
    fVar4 = fVar4 / fVar2;
    fVar5 = fVar5 / fVar2;
  }
  *(float *)(unaff_x19 + 0xa4) = fVar3;
  *(float *)(unaff_x19 + 0xa8) = fVar4;
  *(float *)(unaff_x19 + 0xac) = fVar5;
  *(float *)(unaff_x19 + 0xb0) = unaff_s11 * in_s16;
  fVar2 = fVar6 * fVar4 - in_s17 * fVar5;
  *(float *)(unaff_x19 + 0xbc) = fVar2;
  *(float *)(unaff_x19 + 0xc0) = in_s16 * fVar5 - fVar6 * fVar3;
  *(float *)(unaff_x19 + 0xc4) = in_s17 * fVar3 - in_s16 * fVar4;
  *(undefined4 *)(unaff_x19 + 200) = in_stack_00000008._4_4_;
  *(undefined4 *)(unaff_x19 + 0xcc) = unaff_s10;
  *(undefined4 *)(unaff_x19 + 0xd0) = unaff_s9;
  *(float *)(unaff_x19 + 0xb4) = unaff_s11 * in_s17;
  *(float *)(unaff_x19 + 0xb8) = unaff_s11 * fVar6;
  return unaff_s14 * unaff_s11 * fVar2;
}


