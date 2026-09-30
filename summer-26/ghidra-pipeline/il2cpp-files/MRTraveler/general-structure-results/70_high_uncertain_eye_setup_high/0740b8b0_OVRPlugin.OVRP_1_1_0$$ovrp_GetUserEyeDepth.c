/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserEyeDepth
ENTRY_POINT: 0740b8b0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeDepth(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000008;
  
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 0740b5ec with catch @ 0740b8b0
                        */
  fVar3 = *(float *)(unaff_x19 + 0x28);
  if (fVar3 <= 0.0) goto LAB_0740b948;
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0740ba30;
                    /* try { // try from 0740b8c8 to 0750b8cb has its CatchHandler @ 0740b8f4 */
  uVar1 = FUN_08593748(*(long *)(unaff_x19 + 0x10),0);
                    /* try { // try from 0740b8cc to 0750b903 has its CatchHandler @ 0740b48c */
  if (((uVar1 & 1) == 0) && (DAT_018b0710 < *(float *)(unaff_x19 + 0x28))) {
    fVar4 = *(float *)(unaff_x19 + 0x24);
    fVar3 = (float)FUN_085d4c70(0);
    fVar4 = fVar4 - fVar3;
                    /* catch() { ... } // from try @ 0740b8c8 with catch @ 0740b8f4 */
    *(float *)(unaff_x19 + 0x24) = fVar4;
    if (fVar4 <= 0.0) {
                    /* try { // try from 0740b904 to 0750b90b has its CatchHandler @ 0740b920 */
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0740ba30;
                    /* try { // try from 0740b90c to 0750b917 has its CatchHandler @ 0740b48c */
      FUN_08593508(*(long *)(unaff_x19 + 0x10),0);
    }
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0740ba30;
  uVar1 = FUN_08593748(*(long *)(unaff_x19 + 0x10),0);
  fVar3 = *(float *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_0740b948:
    if (0.0 < fVar3) {
      return;
    }
  }
  else {
    fVar4 = (float)FUN_085d4c70(0);
    fVar3 = fVar3 - fVar4;
    *(float *)(unaff_x19 + 0x28) = fVar3;
    if (0.0 <= fVar3) goto LAB_0740b948;
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar1 = FUN_08593748(*(long *)(unaff_x19 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0x20) != 0) {
        if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_085a437c(*(undefined8 *)PTR_DAT_08eb6480,0);
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_08e698e0 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      in_stack_00000008 = FUN_070e1508(0);
      uVar2 = FUN_070e243c(&stack0x00000008,0);
      uVar2 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08eb6478,uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
      }
      FUN_085a3c50(uVar2,0);
      FUN_0740b814();
    }
    return;
  }
LAB_0740ba30:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


