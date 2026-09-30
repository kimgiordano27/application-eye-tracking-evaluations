/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodeOrientationValid
ENTRY_POINT: 07a69254
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetNodeOrientationValid(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000008;
  
                    /* catch() { ... } // from try @ 07a69210 with catch @ 07a69254 */
                    /* catch() { ... } // from try @ 07a69128 with catch @ 07a69258 */
                    /* catch() { ... } // from try @ 07a69068 with catch @ 07a6925c */
                    /* catch() { ... } // from try @ 07a69048 with catch @ 07a69260 */
  if ((DAT_098955e5 & 1) == 0) {
    FUN_04077588(PTR_DAT_09288e88);
                    /* try { // try from 07a69278 to 07b6928f has its CatchHandler @ 07a69324 */
    FUN_04077588(PTR_DAT_09285d70);
    FUN_04077588(PTR_DAT_092f0e78);
                    /* try { // try from 07a69290 to 07b69313 has its CatchHandler @ 07a68f50 */
    FUN_04077588(PTR_DAT_092f0e80);
    DAT_098955e5 = 1;
  }
  fVar3 = *(float *)(param_1 + 0x28);
  in_stack_00000008 = 0;
  if (fVar3 <= 0.0) goto LAB_07a69340;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_07a69438;
  uVar1 = FUN_089690e0(*(long *)(param_1 + 0x10),0);
  if (((uVar1 & 1) == 0) && (DAT_01aec3c4 < *(float *)(param_1 + 0x28))) {
    fVar4 = *(float *)(param_1 + 0x24);
    fVar3 = (float)FUN_089d7e60(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(param_1 + 0x24) = fVar4;
    if (fVar4 <= 0.0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_07a69438;
      FUN_08968e84(*(long *)(param_1 + 0x10),0);
    }
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_07a69438;
  uVar1 = FUN_089690e0(*(long *)(param_1 + 0x10),0);
  fVar3 = *(float *)(param_1 + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_07a69340:
    if (0.0 < fVar3) {
      return;
    }
  }
  else {
    fVar4 = (float)FUN_089d7e60(0);
    fVar3 = fVar3 - fVar4;
    *(float *)(param_1 + 0x28) = fVar3;
    if (0.0 <= fVar3) goto LAB_07a69340;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_089690e0(*(long *)(param_1 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(param_1 + 0x20) != 0) {
        if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_0897e8f4(*(undefined8 *)PTR_DAT_092f0e80,0);
        return;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_09288e88 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      in_stack_00000008 = Newtonsoft_Json_Utilities_FSharpUtils__set_GetUnionCases(0);
      uVar2 = FUN_0765ad38(&stack0x00000008,0);
      uVar2 = FUN_074d875c(*(undefined8 *)PTR_DAT_092f0e78,uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*(long *)PTR_DAT_09285d70);
      }
      FUN_0897e2a8(uVar2,0);
      FUN_07a69208(param_1);
    }
    return;
  }
LAB_07a69438:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


