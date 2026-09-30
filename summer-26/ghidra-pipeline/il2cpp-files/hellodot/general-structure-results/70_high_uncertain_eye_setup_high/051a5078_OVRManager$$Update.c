/*
FUNCTION_NAME: OVRManager$$Update
ENTRY_POINT: 051a5078
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Update(long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  long unaff_x19;
  float *unaff_x20;
  long *unaff_x22;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  float fVar11;
  float unaff_s15;
  
  if (param_1 != 0) {
    fVar6 = unaff_x20[2];
    fVar1 = unaff_x20[1];
    fVar10 = *(float *)(param_1 + 0x60);
    fVar2 = *unaff_x20;
    fVar7 = fVar6;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    fVar3 = (float)FUN_05f0023c();
    fVar11 = *(float *)(unaff_x19 + 0x58);
    uVar4 = FUN_05f0023c();
    uVar8 = unaff_d9;
    uVar9 = unaff_d10;
    uVar5 = FUN_05ee9fc0(0);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_05f0278c((fVar2 - unaff_s15 * fVar10) + fVar3 * fVar11,
                   (fVar1 - (float)unaff_d9 * fVar10) + fVar7 * fVar11,
                   (fVar6 - (float)unaff_d10 * fVar10) + param_4 * fVar11,uVar5,uVar8,uVar9,uVar4,
                   *(long *)(unaff_x19 + 0x38),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


