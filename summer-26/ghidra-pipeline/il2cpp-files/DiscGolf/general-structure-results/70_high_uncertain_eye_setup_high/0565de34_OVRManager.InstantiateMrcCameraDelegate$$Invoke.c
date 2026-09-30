/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$Invoke
ENTRY_POINT: 0565de34
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


void OVRManager_InstantiateMrcCameraDelegate__Invoke(void)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  
  uVar3 = FUN_06359de0();
  fVar5 = unaff_s8 / *(float *)(unaff_x19 + 0xc0);
  fVar6 = *(float *)(unaff_x19 + 0xbc) - unaff_s8;
  *(undefined4 *)(unaff_x19 + 0xb8) = uVar3;
  *(float *)(unaff_x19 + 0xbc) = fVar6;
  fVar4 = 1.0;
  if (fVar5 <= 1.0) {
    fVar4 = fVar5;
  }
  fVar7 = 0.0;
  if (0.0 <= fVar5) {
    fVar7 = fVar4;
  }
  *(float *)(unaff_x19 + 0xac) =
       *(float *)(unaff_x19 + 0xac) +
       (*(float *)(unaff_x19 + 0xb0) - *(float *)(unaff_x19 + 0xac)) * fVar7;
  if ((fVar6 < 0.0) && (*(int *)(unaff_x19 + 0xcc) != *(int *)(unaff_x19 + 0xb4))) {
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
  fVar4 = *(float *)(unaff_x19 + 0xc4) - unaff_s8;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)(unaff_x19 + 0xc4) = fVar4;
  return;
}


