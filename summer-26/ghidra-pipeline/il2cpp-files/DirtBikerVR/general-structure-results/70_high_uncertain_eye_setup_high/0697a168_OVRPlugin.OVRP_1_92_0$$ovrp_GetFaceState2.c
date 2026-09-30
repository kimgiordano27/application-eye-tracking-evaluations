/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetFaceState2
ENTRY_POINT: 0697a168
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_GetFaceState2(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x21;
  float fVar3;
  float fVar4;
  
  puVar1 = PTR_DAT_08486c50;
  if ((*(byte *)(unaff_x21 + 0x12e) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486c50);
    *(undefined1 *)(unaff_x21 + 0x12e) = 1;
  }
  FUN_06976e70(param_3,0,0);
  FUN_069771d0(param_3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d27e2c(0);
  if (*(long *)(param_3 + 0xa0) != 0) {
    fVar3 = (float)FUN_07d306c8(*(long *)(param_3 + 0xa0),0);
    if (*(long *)(param_3 + 0x20) != 0) {
      lVar2 = *(long *)(param_3 + 0x28);
      fVar3 = fVar3 * param_2 * -0.25;
      *(float *)(*(long *)(param_3 + 0x20) + 0x24) = fVar3 * 6.0;
      if (lVar2 != 0) {
        fVar4 = fVar3 * DAT_015c58e4;
        *(float *)(param_3 + 0x88) = fVar3 + fVar3;
        *(float *)(lVar2 + 0x10) = fVar4;
        *(float *)(lVar2 + 0x14) = fVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


