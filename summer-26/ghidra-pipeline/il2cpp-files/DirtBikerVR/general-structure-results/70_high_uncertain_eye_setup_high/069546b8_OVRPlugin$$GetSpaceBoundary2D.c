/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 069546b8
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


undefined8 OVRPlugin__GetSpaceBoundary2D(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    fVar4 = *(float *)(unaff_x19 + 0x28);
    fVar3 = 1.0;
    if (fVar4 <= 1.0) {
      fVar3 = fVar4;
    }
    fVar2 = 0.0;
    if (0.0 <= fVar4) {
      fVar2 = fVar3;
    }
    FUN_07d305f4((*(float *)(unaff_x19 + 0x54) + -30.0) * fVar2 + 30.0,*(long *)(param_1 + 0x20),0);
    fVar4 = *(float *)(unaff_x19 + 0x28);
    fVar3 = (float)FUN_07ca88b8(0);
    uVar1 = *(undefined8 *)PTR_DAT_084880f8;
    *(float *)(unaff_x19 + 0x28) = fVar4 + fVar3;
    uVar1 = thunk_FUN_03ac74bc(uVar1);
    FUN_07ca4ed8(uVar1,0);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar1);
    *(undefined4 *)(unaff_x19 + 0x10) = 2;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


