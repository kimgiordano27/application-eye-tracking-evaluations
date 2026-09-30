/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$get_Label
ENTRY_POINT: 04daad7c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__get_Label(float param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float in_w8;
  uint in_w10;
  long *unaff_x19;
  
  uVar1 = in_w10 & 0xffff | 0x80000000;
  if (param_1 != in_w8) {
    uVar1 = (int)param_1 + 2;
  }
  if (param_1 <= 0.0) {
    uVar1 = 0;
  }
  uVar2 = FUN_04655224();
  if ((int)uVar2 <= (int)uVar1) {
    uVar1 = uVar2;
  }
  uVar2 = (**(code **)(*unaff_x19 + 0x198))();
  if (uVar2 != uVar1) {
    iVar3 = (**(code **)(*unaff_x19 + 0x198))();
    iVar4 = (**(code **)(*unaff_x19 + 0x198))();
    if ((int)uVar1 < iVar4) {
      iVar3 = iVar3 - uVar1;
      if (0 < iVar3) {
        do {
          if (unaff_x19[5] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          (**(code **)(*unaff_x19 + 0x2b8))();
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else {
      iVar3 = (**(code **)(*unaff_x19 + 0x198))();
      iVar3 = uVar1 - iVar3;
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


