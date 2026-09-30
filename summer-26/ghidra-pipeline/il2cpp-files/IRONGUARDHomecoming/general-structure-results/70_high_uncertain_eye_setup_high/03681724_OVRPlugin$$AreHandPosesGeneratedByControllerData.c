/*
FUNCTION_NAME: OVRPlugin$$AreHandPosesGeneratedByControllerData
ENTRY_POINT: 03681724
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x036817c8) */

float OVRPlugin__AreHandPosesGeneratedByControllerData
                (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  int in_w8;
  long unaff_x19;
  float fVar2;
  double dVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  if (in_w8 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    *(undefined1 *)(unaff_x19 + 0xe11) = 1;
  }
  puVar1 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar4 = SQRT((unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10) *
               (param_3 * param_3 + unaff_s11 * unaff_s11 + param_2 * param_2));
  fVar2 = 0.0;
  if (DAT_00c923fc <= fVar4) {
    fVar4 = (unaff_s8 * param_3 + unaff_s9 * unaff_s11 + unaff_s10 * param_2) / fVar4;
    if (fVar4 < -1.0) {
      fVar4 = -1.0;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    dVar3 = acos((double)fVar4);
    fVar2 = (float)dVar3 * DAT_00c92a9c;
  }
  return fVar2;
}


