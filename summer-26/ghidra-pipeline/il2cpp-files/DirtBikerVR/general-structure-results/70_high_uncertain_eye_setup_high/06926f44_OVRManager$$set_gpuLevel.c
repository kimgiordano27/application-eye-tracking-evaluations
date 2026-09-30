/*
FUNCTION_NAME: OVRManager$$set_gpuLevel
ENTRY_POINT: 06926f44
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_gpuLevel(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x24) == 0) {
    if (lVar3 == 0) goto LAB_06926fc4;
    FUN_07c4dcc0(lVar3,0,0);
    uVar2 = 0;
  }
  else {
    if (lVar3 == 0) goto LAB_06926fc4;
    uVar2 = 1;
  }
  FUN_07c4dcc0(lVar3,uVar2,0);
  if (*(char *)(param_1 + 0x29) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = FUN_07c98840(*(long *)(param_1 + 0x30),0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_07c4e400(*(long *)(param_1 + 0x30),0);
      return;
    }
  }
LAB_06926fc4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


