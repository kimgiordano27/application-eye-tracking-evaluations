/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_DestroyPassthroughColorLut
ENTRY_POINT: 05170190
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_DestroyPassthroughColorLut(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000008;
  
  if ((DAT_06b79eb2 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067616f8);
    FUN_02d6084c(PTR_DAT_0675e660);
    FUN_02d6084c(PTR_DAT_06782988);
    FUN_02d6084c(PTR_DAT_06782990);
    DAT_06b79eb2 = 1;
  }
  in_stack_00000008 = 0;
  fVar3 = *(float *)(param_1 + 0x28);
  if (fVar3 <= 0.0) goto LAB_0517027c;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_05170364;
  uVar1 = FUN_0600f740(*(long *)(param_1 + 0x10),0);
  if (((uVar1 & 1) == 0) && (DAT_01208478 < *(float *)(param_1 + 0x28))) {
    fVar4 = *(float *)(param_1 + 0x24);
    fVar3 = (float)FUN_06074fe4(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(param_1 + 0x24) = fVar4;
    if (fVar4 <= 0.0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_05170364;
      FUN_0600f4cc(*(long *)(param_1 + 0x10),0);
    }
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_05170364;
  uVar1 = FUN_0600f740(*(long *)(param_1 + 0x10),0);
  fVar3 = *(float *)(param_1 + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_0517027c:
    if (0.0 < fVar3) {
      return;
    }
  }
  else {
    fVar4 = (float)FUN_06074fe4(0);
    fVar3 = fVar3 - fVar4;
    *(float *)(param_1 + 0x28) = fVar3;
    if (0.0 <= fVar3) goto LAB_0517027c;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_0600f740(*(long *)(param_1 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(param_1 + 0x20) != 0) {
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
      FUN_05170144(param_1);
    }
    return;
  }
LAB_05170364:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


