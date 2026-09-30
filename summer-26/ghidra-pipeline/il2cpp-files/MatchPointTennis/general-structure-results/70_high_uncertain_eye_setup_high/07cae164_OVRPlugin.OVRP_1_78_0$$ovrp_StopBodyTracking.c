/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopBodyTracking
ENTRY_POINT: 07cae164
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StopBodyTracking(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  
  puVar1 = PTR_DAT_09f51220;
  if ((DAT_0a526ab7 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f51220);
    DAT_0a526ab7 = 1;
  }
  uVar4 = *(undefined8 *)puVar1;
  if (param_2 == 5) {
    fVar5 = *(float *)(param_1 + 0x54) + -1.0;
    if (fVar5 <= 1.0) {
      fVar5 = 1.0;
    }
  }
  else {
    if (param_2 != 4) {
      if (param_2 != 0) {
        return;
      }
      FUN_07cad95c(param_1);
      return;
    }
    fVar5 = *(float *)(param_1 + 0x54) + 1.0;
    if (15.0 < fVar5) {
      fVar5 = 15.0;
    }
  }
  *(float *)(param_1 + 0x54) = fVar5;
  uVar2 = FUN_07a5081c((float *)(param_1 + 0x54),0);
  uVar4 = FUN_078a7764(uVar4,uVar2,0);
  if (*(char *)(param_1 + 0x58) != '\0') {
    FUN_07cab054();
    FUN_07cab50c(uVar4);
    lVar3 = FUN_07cab0c8();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    *(undefined4 *)(lVar3 + 0x3c) = 0x3fc00000;
    *(undefined1 *)(lVar3 + 0x38) = 1;
  }
  return;
}


