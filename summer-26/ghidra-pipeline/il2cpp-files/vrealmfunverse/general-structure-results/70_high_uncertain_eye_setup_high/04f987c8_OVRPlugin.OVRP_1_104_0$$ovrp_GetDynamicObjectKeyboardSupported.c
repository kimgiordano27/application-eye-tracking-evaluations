/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetDynamicObjectKeyboardSupported
ENTRY_POINT: 04f987c8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectKeyboardSupported(void)

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
    fVar3 = (float)FUN_05c98180(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(unaff_x19 + 0x24) = fVar4;
    if (fVar4 <= 0.0) {
                    /* try { // try from 04f987e8 to 050987eb has its CatchHandler @ 04f987f0 */
                    /* try { // try from 04f987ec to 05098817 has its CatchHandler @ 04f98678 */
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04f98928;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f987e8 with catch @ 04f987f0
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f987b4 with catch @ 04f987f4
                        */
      FUN_05c322d4(*(long *)(unaff_x19 + 0x10),0);
    }
  }
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f98740 with catch @ 04f987f8
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f98784 with catch @ 04f987fc
                        */
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04f98928;
  uVar1 = FUN_05c32558(*(long *)(unaff_x19 + 0x10),0);
  fVar3 = *(float *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_04f98830:
                    /* catch() { ... } // from try @ 04f98818 with catch @ 04f98834 */
    if (0.0 < fVar3) {
      return;
    }
  }
  else {
    fVar4 = (float)FUN_05c98180(0);
                    /* try { // try from 04f98818 to 0509881b has its CatchHandler @ 04f98834 */
    fVar3 = fVar3 - fVar4;
                    /* try { // try from 04f9881c to 05098837 has its CatchHandler @ 04f98678 */
    *(float *)(unaff_x19 + 0x28) = fVar3;
    if (0.0 <= fVar3) goto LAB_04f98830;
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
  }
                    /* try { // try from 04f98838 to 0509883f has its CatchHandler @ 04f98848 */
  if (*(long *)(unaff_x19 + 0x10) != 0) {
                    /* try { // try from 04f98840 to 0509884b has its CatchHandler @ 04f98678 */
    uVar1 = FUN_05c32558(*(long *)(unaff_x19 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0x20) != 0) {
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
      FUN_04f986f8();
    }
    return;
  }
LAB_04f98928:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


