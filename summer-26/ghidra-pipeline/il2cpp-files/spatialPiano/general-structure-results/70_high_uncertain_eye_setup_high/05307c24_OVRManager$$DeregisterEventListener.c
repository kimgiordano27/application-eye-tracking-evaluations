/*
FUNCTION_NAME: OVRManager$$DeregisterEventListener
ENTRY_POINT: 05307c24
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__DeregisterEventListener(float param_1,float param_2,float param_3)

{
  float fVar1;
  char in_NG;
  char in_OV;
  int in_w8;
  long lVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined8 uVar8;
  float unaff_s14;
  float unaff_s15;
  
  fVar1 = param_2;
  if (in_NG == in_OV) {
    fVar1 = param_1;
  }
  if (in_w8 == 0) {
    thunk_FUN_02f6670c();
  }
  fVar3 = (float)FUN_060fdea8();
  if (DAT_06bb8a49 == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    DAT_06bb8a49 = '\x01';
  }
  fVar6 = param_3 * param_3 + fVar3 * fVar3 + param_2 * param_2;
  fVar5 = **(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8);
  if (fVar5 <= fVar6) {
    fVar5 = (unaff_s13 - unaff_s15) * param_3 +
            (unaff_s10 - unaff_s11) * fVar3 + (unaff_s12 - unaff_s14) * param_2;
    uVar8 = CONCAT44((param_2 * fVar5) / fVar6,(fVar3 * fVar5) / fVar6);
    fVar3 = (param_3 * fVar5) / fVar6;
  }
  else {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    uVar8 = **(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
    fVar3 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 1);
    fVar6 = fVar5;
  }
  if (DAT_06bb42c7 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c7 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar5 = (float)((ulong)uVar8 >> 0x20);
  fVar3 = fVar3 * fVar3;
  fVar7 = SQRT((float)uVar8 * (float)uVar8 + fVar5 * fVar5 + fVar3);
  fVar4 = (float)FUN_060fdea8();
  fVar5 = -fVar7;
  if (0.0 <= (unaff_s13 - unaff_s15) * fVar6 +
             (unaff_s10 - unaff_s11) * fVar4 + (unaff_s12 - unaff_s14) * fVar3) {
    fVar5 = fVar7;
  }
  *(float *)(unaff_x19 + 0x160) = fVar5;
  fVar3 = -1.0;
  if (0.0 <= fVar5) {
    fVar3 = 1.0;
  }
  if (fVar1 != fVar3) {
    lVar2 = *(long *)(unaff_x19 + 0x168);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x05307dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(fVar1,*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28))
      ;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  return;
}


