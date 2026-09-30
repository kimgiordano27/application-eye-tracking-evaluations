/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodePositionValid
ENTRY_POINT: 07a692d8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetNodePositionValid(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000008;
  
  if (!in_ZR && in_NG == in_OV) {
    fVar4 = *(float *)(unaff_x19 + 0x24);
    fVar3 = (float)FUN_089d7e60(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(unaff_x19 + 0x24) = fVar4;
    if (fVar4 <= 0.0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_07a69438;
      FUN_08968e84(*(long *)(unaff_x19 + 0x10),0);
    }
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_07a69438;
                    /* try { // try from 07a69314 to 07b69323 has its CatchHandler @ 07a69324 */
  uVar1 = FUN_089690e0(*(long *)(unaff_x19 + 0x10),0);
  fVar3 = *(float *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_07a69340:
    if (0.0 < fVar3) {
      return;
    }
  }
  else {
                    /* catch() { ... } // from try @ 07a69278 with catch @ 07a69324
                       catch() { ... } // from try @ 07a69314 with catch @ 07a69324 */
    fVar4 = (float)FUN_089d7e60(0);
                    /* try { // try from 07a69328 to 07b6932b has its CatchHandler @ 07a69334 */
    fVar3 = fVar3 - fVar4;
                    /* try { // try from 07a6932c to 07b69337 has its CatchHandler @ 07a68f50 */
    *(float *)(unaff_x19 + 0x28) = fVar3;
                    /* catch() { ... } // from try @ 07a69328 with catch @ 07a69334 */
    if (0.0 <= fVar3) goto LAB_07a69340;
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar1 = FUN_089690e0(*(long *)(unaff_x19 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0x20) != 0) {
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
      FUN_07a69208();
    }
    return;
  }
LAB_07a69438:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


