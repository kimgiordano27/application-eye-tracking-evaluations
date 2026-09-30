/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_UpdatePassthroughColorLut
ENTRY_POINT: 0517020c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_UpdatePassthroughColorLut(long param_1,float param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000008;
  
  if (*(float *)(param_1 + 0x478) < param_2) {
    fVar4 = *(float *)(unaff_x19 + 0x24);
    fVar3 = (float)FUN_06074fe4(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(unaff_x19 + 0x24) = fVar4;
    if (fVar4 <= 0.0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_05170364;
      FUN_0600f4cc(*(long *)(unaff_x19 + 0x10),0);
    }
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_05170364;
  uVar1 = FUN_0600f740(*(long *)(unaff_x19 + 0x10),0);
  fVar3 = *(float *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_0517027c:
    if (0.0 < fVar3) {
      return;
    }
  }
  else {
    fVar4 = (float)FUN_06074fe4(0);
    fVar3 = fVar3 - fVar4;
    *(float *)(unaff_x19 + 0x28) = fVar3;
    if (0.0 <= fVar3) goto LAB_0517027c;
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar1 = FUN_0600f740(*(long *)(unaff_x19 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0x20) != 0) {
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_060223e8(*(undefined8 *)PTR_DAT_06782990,0);
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_067616f8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      in_stack_00000008 = FUN_04fe8d24(0);
      uVar2 = FUN_04fe9b08(&stack0x00000008,0);
      uVar2 = FUN_04e83184(*(undefined8 *)PTR_DAT_06782988,uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e660);
      }
      FUN_06021dcc(uVar2,0);
      FUN_05170144();
    }
    return;
  }
LAB_05170364:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


