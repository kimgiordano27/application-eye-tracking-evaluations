/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$set_LabelLayoutStyle
ENTRY_POINT: 04daad64
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__set_LabelLayoutStyle(void)

{
  int iVar1;
  int iVar2;
  code *in_x9;
  long *unaff_x19;
  int iVar3;
  float fVar4;
  float unaff_s8;
  
  (*in_x9)();
  fVar4 = (float)FUN_04daa740();
  fVar4 = unaff_s8 / fVar4;
  iVar3 = -0x7ffffffe;
  if (fVar4 != INFINITY) {
    iVar3 = (int)fVar4 + 2;
  }
  if (fVar4 <= 0.0) {
    iVar3 = 0;
  }
  iVar1 = FUN_04655224();
  if (iVar1 <= iVar3) {
    iVar3 = iVar1;
  }
  iVar1 = (**(code **)(*unaff_x19 + 0x198))();
  if (iVar1 != iVar3) {
    iVar1 = (**(code **)(*unaff_x19 + 0x198))();
    iVar2 = (**(code **)(*unaff_x19 + 0x198))();
    if (iVar3 < iVar2) {
      iVar1 = iVar1 - iVar3;
      if (0 < iVar1) {
        do {
          if (unaff_x19[5] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          (**(code **)(*unaff_x19 + 0x2b8))();
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    else {
      iVar1 = (**(code **)(*unaff_x19 + 0x198))();
      iVar3 = iVar3 - iVar1;
      if (0 < iVar3) {
        do {
          (**(code **)(*unaff_x19 + 0x178))();
          (**(code **)(*unaff_x19 + 0x2a8))();
          FUN_04656298();
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x04daaed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x2c8))();
  return;
}


