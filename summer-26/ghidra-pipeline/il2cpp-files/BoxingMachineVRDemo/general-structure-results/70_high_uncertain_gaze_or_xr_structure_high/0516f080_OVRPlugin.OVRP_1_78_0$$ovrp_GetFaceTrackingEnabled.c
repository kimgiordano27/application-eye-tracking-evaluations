/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingEnabled
ENTRY_POINT: 0516f080
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingEnabled(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 0516f084 to 0526f08b has its CatchHandler @ 0516f5bc */
  uVar1 = thunk_FUN_02dc61f4(*(undefined8 *)(param_1 + 0x7c0));
  thunk_FUN_02d9d164(uVar1,&stack0x0000000c);
  thunk_FUN_02dc61f4(PTR_DAT_06782948);
  FUN_050f0ec0();
                    /* try { // try from 0516f0c0 to 0526f0c3 has its CatchHandler @ 0516f518 */
  uVar1 = FUN_050d5cd4();
  uVar2 = thunk_FUN_02dc61f4(PTR_DAT_06782950);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar1,uVar2);
}


