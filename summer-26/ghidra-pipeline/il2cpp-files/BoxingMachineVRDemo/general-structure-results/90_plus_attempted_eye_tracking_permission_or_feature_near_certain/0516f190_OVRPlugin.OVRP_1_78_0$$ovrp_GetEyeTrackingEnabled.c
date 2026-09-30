/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeTrackingEnabled
ENTRY_POINT: 0516f190
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingEnabled(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  
                    /* try { // try from 0516f190 to 0526f1a7 has its CatchHandler @ 0516f5d4 */
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x790));
  *(undefined1 *)(unaff_x21 + 0xea2) = 1;
  puVar1 = PTR_DAT_067677e0;
  if ((unaff_x20 != (long *)0x0) && (*unaff_x20 == *(long *)PTR_DAT_067677e0)) {
    thunk_FUN_02d9d688();
    FUN_050d3d08();
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar2 = FUN_05475424();
    lVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06782790);
    FUN_0504920c(lVar3,0);
    *(undefined8 *)(lVar3 + 0x20) = uVar2;
    thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20),uVar2);
    *(undefined2 *)(lVar3 + 0x28) = 5;
    FUN_0516eef8();
    return;
  }
                    /* try { // try from 0516f1c0 to 0526f1c3 has its CatchHandler @ 0516f508 */
                    /* try { // try from 0516f1c4 to 0526f20b has its CatchHandler @ 0516f5d8 */
  FUN_050d2a48();
  return;
}


