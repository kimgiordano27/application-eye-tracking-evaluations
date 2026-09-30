/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcFrameImageFlipped
ENTRY_POINT: 0749f9c4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcFrameImageFlipped(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000008;
  
  FUN_03d2d2b0(PTR_DAT_09223cf0);
  *(undefined1 *)(unaff_x20 + 0xb86) = 1;
  fVar3 = *(float *)(unaff_x19 + 0x28);
  if (fVar3 <= 0.0) goto LAB_0749fa70;
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0749fb58;
  uVar1 = FUN_08a00b4c(*(long *)(unaff_x19 + 0x10),0);
  if (((uVar1 & 1) == 0) && (DAT_01914938 < *(float *)(unaff_x19 + 0x28))) {
    fVar4 = *(float *)(unaff_x19 + 0x24);
    fVar3 = (float)FUN_08a5a0a8(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(unaff_x19 + 0x24) = fVar4;
    if (fVar4 <= 0.0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0749fb58;
      FUN_08a00950(*(long *)(unaff_x19 + 0x10),0);
    }
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0749fb58;
  uVar1 = FUN_08a00b4c(*(long *)(unaff_x19 + 0x10),0);
  fVar3 = *(float *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_0749fa70:
    if (0.0 < fVar3) {
      return;
    }
  }
  else {
    fVar4 = (float)FUN_08a5a0a8(0);
    fVar3 = fVar3 - fVar4;
    *(float *)(unaff_x19 + 0x28) = fVar3;
    if (0.0 <= fVar3) goto LAB_0749fa70;
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
  }
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
LAB_0749fb58:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


