/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_SetEyeOcclusionMeshEnabled
ENTRY_POINT: 07a6550c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_3_0__ovrp_SetEyeOcclusionMeshEnabled(void)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  
  FUN_04077588();
  *(undefined1 *)(unaff_x21 + 0x4f1) = 1;
  uVar1 = **(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8);
  uVar3 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8) + 1);
  fVar2 = (float)((ulong)uVar1 >> 0x20);
  *unaff_x19 = uVar1;
  *(undefined4 *)(unaff_x19 + 1) = uVar3;
  if (ABS((float)uVar1) <= ABS(fVar2)) {
    if (fVar2 <= 0.0) {
      if (unaff_x20 == 0) goto LAB_07a65590;
      uVar1 = 4;
    }
    else {
      if (unaff_x20 == 0) goto LAB_07a65590;
      uVar1 = 5;
    }
  }
  else if ((float)uVar1 <= 0.0) {
    if (unaff_x20 == 0) goto LAB_07a65590;
    uVar1 = 3;
  }
  else {
    if (unaff_x20 == 0) {
LAB_07a65590:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x07a65468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x18))
            (*(undefined8 *)(unaff_x20 + 0x40),uVar1,*(undefined8 *)(unaff_x20 + 0x28));
  return;
}


