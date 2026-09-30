/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 03c79388
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(long param_1)

{
  long lVar1;
  long unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  
  *(undefined8 *)(param_1 + 8) = unaff_x23;
  lVar1 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
                    /* try { // try from 03c793a0 to 03d793e7 has its CatchHandler @ 03c793a0
                       catch() { ... } // from try @ 03c793a0 with catch @ 03c793a0
                       catch() { ... } // from try @ 03c794e0 with catch @ 03c793a0
                       catch() { ... } // from try @ 03c79510 with catch @ 03c793a0
                       catch() { ... } // from try @ 03c79584 with catch @ 03c793a0 */
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x30);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  thunk_FUN_02dd37b4(*(long *)(lVar1 + 0xb8) + 8);
  FUN_035829e8();
                    /* WARNING: Could not recover jumptable at 0x03c793fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x22 + 0x188))();
  return;
}


