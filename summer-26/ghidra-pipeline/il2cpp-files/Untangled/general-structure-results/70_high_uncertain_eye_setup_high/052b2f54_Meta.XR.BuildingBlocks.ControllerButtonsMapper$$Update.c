/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$Update
ENTRY_POINT: 052b2f54
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_BuildingBlocks_ControllerButtonsMapper__Update(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
  if (unaff_x20 != 0) {
    *(undefined1 *)(unaff_x20 + 0x181) = 1;
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
    fVar2 = *(float *)(unaff_x20 + 0x194);
    if (*(char *)(unaff_x19 + 0x28) == '\0') {
      fVar3 = 0.0 - fVar2;
      uVar4 = 0x3f800000;
    }
    else {
      uVar4 = 0xbf800000;
      fVar3 = fVar2 - *(float *)(unaff_x19 + 0x2c);
      fVar2 = *(float *)(unaff_x19 + 0x2c);
    }
    *(undefined4 *)(unaff_x19 + 0x40) = uVar4;
    *(float *)(unaff_x19 + 0x34) = fVar3;
    *(float *)(unaff_x19 + 0x38) = fVar2;
    *(undefined4 *)(unaff_x19 + 0x3c) = 0;
    if (*(float *)(unaff_x19 + 0x34) <= *(float *)(unaff_x19 + 0x30)) {
      uVar1 = 0;
      *(undefined1 *)(unaff_x20 + 0x181) = 0;
    }
    else {
      fVar3 = *(float *)(unaff_x20 + 0x194);
      fVar5 = *(float *)(unaff_x19 + 0x40);
      fVar2 = (float)FUN_066bfb3c(0);
      *(float *)(unaff_x20 + 0x194) = fVar3 + fVar5 * fVar2 * *(float *)(unaff_x20 + 0x84);
      fVar3 = *(float *)(unaff_x19 + 0x30);
      fVar2 = (float)FUN_066bfb3c(0);
      *(float *)(unaff_x19 + 0x30) = fVar3 + fVar2 * *(float *)(unaff_x20 + 0x84);
      fVar3 = *(float *)(unaff_x20 + 0x194);
      fVar2 = *(float *)(unaff_x19 + 0x3c);
      if (fVar3 <= *(float *)(unaff_x19 + 0x3c)) {
        fVar2 = fVar3;
      }
      if (fVar3 < *(float *)(unaff_x19 + 0x38)) {
        fVar2 = *(float *)(unaff_x19 + 0x38);
      }
      *(float *)(unaff_x20 + 0x194) = fVar2;
      uVar1 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d02508);
      FUN_066cf17c(uVar1,0);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
      thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x18),uVar1);
      uVar1 = 1;
      *(undefined4 *)(unaff_x19 + 0x10) = 1;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


