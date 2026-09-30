/*
FUNCTION_NAME: OVRPlugin$$SetClientColorDesc
ENTRY_POINT: 05d8ef54
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetClientColorDesc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000008;
  
  if ((DAT_076d88fc & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727a7d0);
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(PTR_DAT_072b1a20);
    thunk_FUN_032e1da0(PTR_DAT_072b1a28);
    DAT_076d88fc = 1;
  }
  fVar3 = *(float *)(param_1 + 0x28);
  if (fVar3 <= 0.0) goto LAB_05d8f034;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_05d8f11c;
  uVar1 = FUN_06ba5b14(*(long *)(param_1 + 0x10),0);
  if (((uVar1 & 1) == 0) && (DAT_013a0300 < *(float *)(param_1 + 0x28))) {
    fVar4 = *(float *)(param_1 + 0x24);
    fVar3 = (float)FUN_06bdff00(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(param_1 + 0x24) = fVar4;
    if (fVar4 <= 0.0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_05d8f11c;
      FUN_06ba5868(*(long *)(param_1 + 0x10),0);
    }
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_05d8f11c;
  uVar1 = FUN_06ba5b14(*(long *)(param_1 + 0x10),0);
  fVar3 = *(float *)(param_1 + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_05d8f034:
    if (0.0 < fVar3) {
      return;
    }
  }
  else {
    fVar4 = (float)FUN_06bdff00(0);
    fVar3 = fVar3 - fVar4;
    *(float *)(param_1 + 0x28) = fVar3;
    if (0.0 <= fVar3) goto LAB_05d8f034;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_06ba5b14(*(long *)(param_1 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(param_1 + 0x20) != 0) {
        if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_06bb2a00(*(undefined8 *)PTR_DAT_072b1a28,0);
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_0727a7d0 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      in_stack_00000008 = FUN_05904c9c(0);
      uVar2 = FUN_05905bd0(&stack0x00000008,0);
      uVar2 = FUN_057a19ac(*(undefined8 *)PTR_DAT_072b1a20,uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
      }
      FUN_06bb23f0(uVar2,0);
      FUN_05d8ef00(param_1);
    }
    return;
  }
LAB_05d8f11c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


