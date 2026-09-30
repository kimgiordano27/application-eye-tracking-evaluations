/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetDynamicObjectKeyboardSupported
ENTRY_POINT: 0697c1a4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectKeyboardSupported(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000008;
  
  FUN_03a8a718();
  *(undefined1 *)(unaff_x20 + 0x141) = 1;
  fVar3 = *(float *)(unaff_x19 + 0x28);
  in_stack_00000008 = 0;
  if (fVar3 <= 0.0) goto LAB_0697c24c;
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0697c344;
  uVar1 = FUN_07c35ac4(*(long *)(unaff_x19 + 0x10),0);
  if (((uVar1 & 1) == 0) && (DAT_015c5990 < *(float *)(unaff_x19 + 0x28))) {
    fVar4 = *(float *)(unaff_x19 + 0x24);
    fVar3 = (float)FUN_07ca8818(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(unaff_x19 + 0x24) = fVar4;
    if (fVar4 <= 0.0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0697c344;
      FUN_07c35868(*(long *)(unaff_x19 + 0x10),0);
    }
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0697c344;
  uVar1 = FUN_07c35ac4(*(long *)(unaff_x19 + 0x10),0);
  fVar3 = *(float *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_0697c24c:
    if (0.0 < fVar3) {
      return;
    }
  }
  else {
    fVar4 = (float)FUN_07ca8818(0);
    fVar3 = fVar3 - fVar4;
    *(float *)(unaff_x19 + 0x28) = fVar3;
    if (0.0 <= fVar3) goto LAB_0697c24c;
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar1 = FUN_07c35ac4(*(long *)(unaff_x19 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0x20) != 0) {
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07c4fb40(*(undefined8 *)PTR_DAT_084b7620,0);
        return;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_08488d10 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      in_stack_00000008 = FUN_067318c0(0);
      uVar2 = FUN_06732568(&stack0x00000008,0);
      uVar2 = FUN_065c0764(*(undefined8 *)PTR_DAT_084b7618,uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
      }
      FUN_07c4f4f4(uVar2,0);
      FUN_0697c114();
    }
    return;
  }
LAB_0697c344:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


