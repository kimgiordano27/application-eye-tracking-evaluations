/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_EraseSpace
ENTRY_POINT: 02c55510
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_EraseSpace(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000008;
  
  FUN_017fc350();
  *(undefined1 *)(unaff_x20 + 0x15b) = 1;
  fVar3 = *(float *)(unaff_x19 + 0x28);
  if (fVar3 <= 0.0) goto LAB_02c555b4;
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_02c5569c;
  uVar1 = FUN_033b4f4c(*(long *)(unaff_x19 + 0x10),0);
  if (((uVar1 & 1) == 0) && (DAT_009a63ac < *(float *)(unaff_x19 + 0x28))) {
    fVar4 = *(float *)(unaff_x19 + 0x24);
    fVar3 = (float)FUN_033efea0(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(unaff_x19 + 0x24) = fVar4;
    if (fVar4 <= 0.0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_02c5569c;
      FUN_033b4dc8(*(long *)(unaff_x19 + 0x10),0);
    }
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_02c5569c;
  uVar1 = FUN_033b4f4c(*(long *)(unaff_x19 + 0x10),0);
  fVar3 = *(float *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_02c555b4:
    if (0.0 < fVar3) {
      return;
    }
  }
  else {
    fVar4 = (float)FUN_033efea0(0);
    fVar3 = fVar3 - fVar4;
    *(float *)(unaff_x19 + 0x28) = fVar3;
    if (0.0 <= fVar3) goto LAB_02c555b4;
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar1 = FUN_033b4f4c(*(long *)(unaff_x19 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0x20) != 0) {
        if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        FUN_033bd548(*(undefined8 *)PTR_DAT_0380cc88,0);
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_037f3058 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      in_stack_00000008 = FUN_02bb26b8(0);
      uVar2 = FUN_02bb3258(&stack0x00000008,0);
      uVar2 = FUN_02a43498(*(undefined8 *)PTR_DAT_0380cc80,uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
        thunk_FUN_01843fdc(*(long *)PTR_DAT_037f2d40);
      }
      FUN_033bce1c(uVar2,0);
      FUN_02c55480();
    }
    return;
  }
LAB_02c5569c:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


