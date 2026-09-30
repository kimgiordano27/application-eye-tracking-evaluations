/*
FUNCTION_NAME: OVRPlugin.OVRP_1_19_0$$.cctor
ENTRY_POINT: 051e661c
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_19_0___cctor(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000008;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9598);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c48);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066093d0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066093d8);
  *(undefined1 *)(unaff_x20 + 0x636) = 1;
  fVar3 = *(float *)(unaff_x19 + 0x28);
  if (fVar3 <= 0.0) goto LAB_051e66ec;
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_051e67d4;
  uVar1 = FUN_05ea6b1c(*(long *)(unaff_x19 + 0x10),0);
  if (((uVar1 & 1) == 0) && (DAT_013de0d0 < *(float *)(unaff_x19 + 0x28))) {
    fVar4 = *(float *)(unaff_x19 + 0x24);
    fVar3 = (float)FUN_05efe82c(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(unaff_x19 + 0x24) = fVar4;
    if (fVar4 <= 0.0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_051e67d4;
      FUN_05ea6954(*(long *)(unaff_x19 + 0x10),0);
    }
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_051e67d4;
  uVar1 = FUN_05ea6b1c(*(long *)(unaff_x19 + 0x10),0);
  fVar3 = *(float *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_051e66ec:
    if (0.0 < fVar3) {
      return;
    }
  }
  else {
    fVar4 = (float)FUN_05efe82c(0);
    fVar3 = fVar3 - fVar4;
    *(float *)(unaff_x19 + 0x28) = fVar3;
    if (0.0 <= fVar3) goto LAB_051e66ec;
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar1 = FUN_05ea6b1c(*(long *)(unaff_x19 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0x20) != 0) {
        if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_05eb30e4(*(undefined8 *)PTR_DAT_066093d8,0);
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_065c9598 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      in_stack_00000008 = FUN_04f11e60(0);
      uVar2 = FUN_04f12ef8(&stack0x00000008,0);
      uVar2 = FUN_04db00f0(*(undefined8 *)PTR_DAT_066093d0,uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
        thunk_FUN_02cd038c(*(long *)PTR_DAT_065c8c48);
      }
      FUN_05eb2ad4(uVar2,0);
      FUN_051e65b8();
    }
    return;
  }
LAB_051e67d4:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


