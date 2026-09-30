/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodePositionValid
ENTRY_POINT: 063b6a08
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetNodePositionValid
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(unaff_x21 + 0x3a8);
                    /* try { // try from 063b6a10 to 064b6abf has its CatchHandler @ 063b6978 */
  if ((*(byte *)(unaff_x20 + 0x751) & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db73a8);
    FUN_0373b518(PTR_DAT_07db71c0);
    *(undefined1 *)(unaff_x20 + 0x751) = 1;
  }
  lVar1 = FUN_03c6a920(param_3,*puVar2);
  if (lVar1 != 0) {
    FUN_054d3fe8(param_1,param_2,lVar1,*(undefined8 *)PTR_DAT_07db71c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


