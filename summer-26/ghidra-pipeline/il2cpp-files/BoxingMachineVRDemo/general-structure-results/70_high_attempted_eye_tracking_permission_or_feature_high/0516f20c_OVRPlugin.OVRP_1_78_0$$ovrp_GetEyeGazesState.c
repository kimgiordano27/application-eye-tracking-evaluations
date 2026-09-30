/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeGazesState
ENTRY_POINT: 0516f20c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeGazesState(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
                    /* try { // try from 0516f20c to 0526f217 has its CatchHandler @ 0516f5ac */
  uVar1 = FUN_05475424(param_1,0);
                    /* try { // try from 0516f228 to 0526f22b has its CatchHandler @ 0516f5d0 */
  lVar2 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06782790);
  FUN_0504920c(lVar2,0);
                    /* try { // try from 0516f23c to 0526f247 has its CatchHandler @ 0516f5a8 */
  *(undefined8 *)(lVar2 + 0x20) = uVar1;
  thunk_FUN_02dd37b4((undefined8 *)(lVar2 + 0x20),uVar1);
  *(undefined2 *)(lVar2 + 0x28) = 5;
                    /* try { // try from 0516f258 to 0526f263 has its CatchHandler @ 0516f5a4 */
  FUN_0516eef8();
  return;
}


