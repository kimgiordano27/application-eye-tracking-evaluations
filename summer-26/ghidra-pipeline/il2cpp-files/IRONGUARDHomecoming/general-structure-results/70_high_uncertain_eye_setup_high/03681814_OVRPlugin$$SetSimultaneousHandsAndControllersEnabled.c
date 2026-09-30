/*
FUNCTION_NAME: OVRPlugin$$SetSimultaneousHandsAndControllersEnabled
ENTRY_POINT: 03681814
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03681908) */

float OVRPlugin__SetSimultaneousHandsAndControllersEnabled
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                undefined8 param_5)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = (float)FUN_03681bd0(6,param_4);
  fVar6 = param_2;
  fVar8 = param_3;
  fVar3 = (float)FUN_03681d64(6,param_4,param_5);
  if (DAT_0482ee11 == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482ee11 = '\x01';
  }
  puVar1 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar7 = SQRT((param_3 * param_3 + fVar2 * fVar2 + param_2 * param_2) *
               (fVar8 * fVar8 + fVar3 * fVar3 + fVar6 * fVar6));
  fVar4 = 0.0;
  if (DAT_00c923fc <= fVar7) {
    fVar7 = (param_3 * fVar8 + fVar2 * fVar3 + param_2 * fVar6) / fVar7;
    if (fVar7 < -1.0) {
      fVar7 = -1.0;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    dVar5 = acos((double)fVar7);
    fVar4 = (float)dVar5 * DAT_00c92a9c;
  }
  return fVar4;
}


