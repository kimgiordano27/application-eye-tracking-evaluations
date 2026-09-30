/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$Raycast
ENTRY_POINT: 077008a4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_EnvironmentDepthRaycaster__Raycast(float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  fVar7 = param_2;
  fVar8 = param_3;
  lVar3 = FUN_095258d0();
  if (lVar3 != 0) {
    param_1 = unaff_s10 - param_1;
    param_2 = unaff_s9 - param_2;
    param_3 = unaff_s8 - param_3;
    fVar4 = (float)FUN_0953a6a4(lVar3,0);
    if (DAT_0a51bf3f == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51bf3f = '\x01';
    }
    puVar1 = PTR_DAT_09f1e748;
    if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar5 = SQRT((param_3 * param_3 + param_1 * param_1 + param_2 * param_2) *
                 (fVar8 * fVar8 + fVar4 * fVar4 + fVar7 * fVar7));
    if (fVar5 < DAT_01c75bcc) {
      bVar2 = true;
    }
    else {
      fVar5 = ((param_2 * -fVar7 - param_1 * fVar4) - param_3 * fVar8) / fVar5;
      fVar7 = fVar5;
      if (1.0 < fVar5) {
        fVar7 = 1.0;
      }
      if (fVar5 < -1.0) {
        fVar7 = -1.0;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      dVar6 = acos((double)fVar7);
      bVar2 = (float)dVar6 * DAT_01c768e0 < 65.0;
    }
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


