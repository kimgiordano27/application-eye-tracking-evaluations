/*
FUNCTION_NAME: OVRPlugin.Media$$EncodeMrcFrame
ENTRY_POINT: 0749fa40
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__EncodeMrcFrame(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000008;
  
  uVar1 = FUN_08a00b4c(param_1,0);
  fVar4 = *(float *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) != 0) {
    fVar3 = (float)FUN_08a5a0a8(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(unaff_x19 + 0x28) = fVar4;
    if (fVar4 < 0.0) {
      *(undefined4 *)(unaff_x19 + 0x28) = 0;
      goto LAB_0749fa78;
    }
  }
  if (0.0 < fVar4) {
    return;
  }
LAB_0749fa78:
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar1 = FUN_08a00b4c(*(long *)(unaff_x19 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0x20) != 0) {
        if (*(int *)(*(long *)PTR_DAT_091a1120 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        FUN_08a106ac(*(undefined8 *)PTR_DAT_09223cf0,0);
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_091a1650 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      in_stack_00000008 = FUN_07158cdc(0);
      uVar2 = FUN_07159ed4(&stack0x00000008,0);
      uVar2 = FUN_06fc5244(*(undefined8 *)PTR_DAT_09223ce8,uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_091a1120 + 0xe0) == 0) {
        thunk_FUN_03db619c(*(long *)PTR_DAT_091a1120);
      }
      FUN_08a0ff80(uVar2,0);
      FUN_0749f93c();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


