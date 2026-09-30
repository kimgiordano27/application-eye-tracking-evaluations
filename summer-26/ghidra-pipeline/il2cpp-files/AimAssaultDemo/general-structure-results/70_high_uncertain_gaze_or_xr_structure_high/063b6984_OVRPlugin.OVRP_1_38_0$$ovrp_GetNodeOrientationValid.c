/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodeOrientationValid
ENTRY_POINT: 063b6984
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


void OVRPlugin_OVRP_1_38_0__ovrp_GetNodeOrientationValid
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(unaff_x21 + 0x3a0);
  if ((*(byte *)(unaff_x20 + 0x750) & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db73a0);
                    /* try { // try from 063b69ac to 064b69bf has its CatchHandler @ 063b6aa8 */
    FUN_0373b518(PTR_DAT_07db71c0);
    *(undefined1 *)(unaff_x20 + 0x750) = 1;
  }
  lVar1 = FUN_03c6a8d4(param_3,*puVar2);
  if (lVar1 != 0) {
                    /* try { // try from 063b69e8 to 064b69eb has its CatchHandler @ 063b6aa0 */
    FUN_054d3fe8(param_1,param_2,lVar1,*(undefined8 *)PTR_DAT_07db71c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


