/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 04005ba0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 145
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Qpl_Annotation>
               (long param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w20;
  undefined *puVar4;
  
  if (param_1 == 0) {
    FUN_03ac40ec();
  }
  if (param_2 == 0) {
    thunk_FUN_03af1434(&DAT_08615058);
    uVar1 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(&DAT_086a7228);
    FUN_066af6a0(uVar1,uVar2,0);
    goto LAB_04005cc0;
  }
                    /* try { // try from 04005bbc to 04105bc7 has its CatchHandler @ 04007674 */
  if (param_4 < 0) {
LAB_04005c18:
                    /* try { // try from 04005c18 to 04105c23 has its CatchHandler @ 04007640 */
    thunk_FUN_03af1434(&DAT_08615060);
    uVar1 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(&DAT_086b0140);
                    /* try { // try from 04005c3c to 04105c53 has its CatchHandler @ 040077b0 */
    puVar4 = &DAT_0868e988;
  }
  else {
    if (*(int *)(param_2 + 0x18) < param_4) goto LAB_04005c18;
    if ((-1 < unaff_w20) && (unaff_w20 <= *(int *)(param_2 + 0x18) - param_4)) {
                    /* try { // try from 04005bd8 to 04105bdf has its CatchHandler @ 04007608 */
                    /* try { // try from 04005bf4 to 04105bfb has its CatchHandler @ 04007628 */
      FUN_040202e4(param_2);
      return;
    }
    thunk_FUN_03af1434(&DAT_08615060);
    uVar1 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(&DAT_086a8b20);
    puVar4 = &DAT_08688840;
  }
  uVar3 = thunk_FUN_03af1434(puVar4);
  System_Threading_CancellationToken__get_IsCancellationRequested(uVar1,uVar2,uVar3,0);
LAB_04005cc0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar1);
}


