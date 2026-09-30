/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetUserEyeDepth
ENTRY_POINT: 0740b914
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetUserEyeDepth(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000008;
  
  if (param_1 == 0) goto LAB_0740ba30;
                    /* try { // try from 0740b918 to 0750b91f has its CatchHandler @ 0740b920 */
  uVar1 = FUN_08593748(param_1,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0740b904 with catch @ 0740b920
                       catch(type#2 @ 00000000) { ... } // from try @ 0740b918 with catch @ 0740b920
                        */
  fVar4 = *(float *)(unaff_x19 + 0x28);
                    /* try { // try from 0740b924 to 0750ba67 has its CatchHandler @ 0740b924
                       catch() { ... } // from try @ 0740b924 with catch @ 0740b924
                       catch() { ... } // from try @ 0740bcf0 with catch @ 0740b924
                       catch() { ... } // from try @ 0740bd2c with catch @ 0740b924
                       catch() { ... } // from try @ 0740bd64 with catch @ 0740b924
                       catch() { ... } // from try @ 0740bda4 with catch @ 0740b924 */
  if ((uVar1 & 1) == 0) {
LAB_0740b948:
    if (0.0 < fVar4) {
      return;
    }
  }
  else {
    fVar3 = (float)FUN_085d4c70(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(unaff_x19 + 0x28) = fVar4;
    if (0.0 <= fVar4) goto LAB_0740b948;
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


