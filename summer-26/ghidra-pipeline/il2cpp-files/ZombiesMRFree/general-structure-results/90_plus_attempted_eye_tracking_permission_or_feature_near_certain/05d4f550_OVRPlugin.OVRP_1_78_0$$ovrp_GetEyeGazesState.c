/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeGazesState
ENTRY_POINT: 05d4f550
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_8;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeGazesState(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000008;
  
  if ((DAT_07398ba4 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6dcf8);
    FUN_02fe925c(PTR_DAT_06f6d668);
    FUN_02fe925c(PTR_DAT_06fb9398);
    FUN_02fe925c(PTR_DAT_06fb93a0);
    DAT_07398ba4 = 1;
  }
  fVar3 = *(float *)(param_1 + 0x28);
  if (fVar3 <= 0.0) goto LAB_05d4f63c;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_05d4f724;
  uVar1 = FUN_068add90(*(long *)(param_1 + 0x10),0);
  if (((uVar1 & 1) == 0) && (DAT_0136a174 < *(float *)(param_1 + 0x28))) {
    fVar4 = *(float *)(param_1 + 0x24);
    fVar3 = (float)FUN_068eec18(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(param_1 + 0x24) = fVar4;
    if (fVar4 <= 0.0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_05d4f724;
      FUN_068adbc0(*(long *)(param_1 + 0x10),0);
    }
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_05d4f724;
  uVar1 = FUN_068add90(*(long *)(param_1 + 0x10),0);
  fVar3 = *(float *)(param_1 + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_05d4f63c:
    if (0.0 < fVar3) {
      return;
    }
  }
  else {
    fVar4 = (float)FUN_068eec18(0);
    fVar3 = fVar3 - fVar4;
    *(float *)(param_1 + 0x28) = fVar3;
    if (0.0 <= fVar3) goto LAB_05d4f63c;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_068add90(*(long *)(param_1 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(param_1 + 0x20) != 0) {
        if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        FUN_068bd958(*(undefined8 *)PTR_DAT_06fb93a0,0);
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_06f6dcf8 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      in_stack_00000008 = FUN_05ad0aa0(0);
      uVar2 = FUN_05ad1900(&stack0x00000008,0);
      uVar2 = FUN_059687dc(*(undefined8 *)PTR_DAT_06fb9398,uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d668);
      }
      FUN_068bd348(uVar2,0);
      FUN_05d4f508(param_1);
    }
    return;
  }
LAB_05d4f724:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


