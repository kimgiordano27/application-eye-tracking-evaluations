/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$BeginInvoke
ENTRY_POINT: 0565de48
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate__BeginInvoke
               (undefined4 param_1,float param_2,float param_3,float param_4)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 uVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  
  *(undefined4 *)(unaff_x19 + 0xb8) = param_1;
  *(float *)(unaff_x19 + 0xbc) = param_3 - unaff_s8;
  if (param_2 <= param_4) {
    param_4 = param_2;
  }
  fVar3 = unaff_s9;
  if (0.0 <= param_2) {
    fVar3 = param_4;
  }
  *(float *)(unaff_x19 + 0xac) =
       *(float *)(unaff_x19 + 0xac) +
       (*(float *)(unaff_x19 + 0xb0) - *(float *)(unaff_x19 + 0xac)) * fVar3;
  if ((param_3 - unaff_s8 < 0.0) && (*(int *)(unaff_x19 + 0xcc) != *(int *)(unaff_x19 + 0xb4))) {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar1 = FUN_0634eb94(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(char *)(*(long *)(unaff_x19 + 0x28) + 0x108) != '\0') {
        FUN_0565dda0();
        *(undefined4 *)(unaff_x19 + 0xbc) = 0;
      }
    }
  }
  fVar3 = *(float *)(unaff_x19 + 0xc4) - unaff_s8;
  if (fVar3 <= unaff_s9) {
    fVar3 = unaff_s9;
  }
  *(float *)(unaff_x19 + 0xc4) = fVar3;
  return;
}


