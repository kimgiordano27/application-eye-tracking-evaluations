/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetDynamicObjectTrackerSupported
ENTRY_POINT: 04f9874c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectTrackerSupported(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000008;
  
  if ((DAT_066c9e06 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313c50);
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(System_Func<CancellationToken,_Task<int>>_TypeInfo);
                    /* try { // try from 04f98784 to 050987af has its CatchHandler @ 04f987fc */
    FUN_02b3c81c(System_Func<CatchBlock,_CatchBlock>_TypeInfo);
    DAT_066c9e06 = 1;
  }
  fVar3 = *(float *)(param_1 + 0x28);
  in_stack_00000008 = 0;
  if (fVar3 <= 0.0) goto LAB_04f98830;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_04f98928;
  uVar1 = FUN_05c32558(*(long *)(param_1 + 0x10),0);
                    /* try { // try from 04f987b4 to 050987b7 has its CatchHandler @ 04f987f4 */
                    /* try { // try from 04f987b8 to 050987e7 has its CatchHandler @ 04f98678 */
  if (((uVar1 & 1) == 0) && (DAT_010322e4 < *(float *)(param_1 + 0x28))) {
    fVar4 = *(float *)(param_1 + 0x24);
    fVar3 = (float)FUN_05c98180(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(param_1 + 0x24) = fVar4;
    if (fVar4 <= 0.0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_04f98928;
      FUN_05c322d4(*(long *)(param_1 + 0x10),0);
    }
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_04f98928;
  uVar1 = FUN_05c32558(*(long *)(param_1 + 0x10),0);
  fVar3 = *(float *)(param_1 + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_04f98830:
    if (0.0 < fVar3) {
      return;
    }
  }
  else {
    fVar4 = (float)FUN_05c98180(0);
    fVar3 = fVar3 - fVar4;
    *(float *)(param_1 + 0x28) = fVar3;
    if (0.0 <= fVar3) goto LAB_04f98830;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_05c32558(*(long *)(param_1 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(param_1 + 0x20) != 0) {
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c44f60(*(undefined8 *)System_Func<CatchBlock,_CatchBlock>_TypeInfo,0);
        return;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_06313c50 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      in_stack_00000008 = FUN_04d5cf7c(0);
      uVar2 = FUN_04d5dc7c(&stack0x00000008,0);
      uVar2 = FUN_04bffdac(*(undefined8 *)System_Func<CancellationToken,_Task<int>>_TypeInfo,uVar2,0
                          );
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
      }
      FUN_05c44914(uVar2,0);
      FUN_04f986f8(param_1);
    }
    return;
  }
LAB_04f98928:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


