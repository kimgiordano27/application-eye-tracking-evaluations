/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$AsSpan
ENTRY_POINT: 03c7995c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__AsSpan(void)

{
  long lVar1;
  long *unaff_x19;
  
  if (*(char *)((long)unaff_x19 + 0x4a) == '\0') {
                    /* try { // try from 03c79990 to 03d799a7 has its CatchHandler @ 03c799e0 */
    lVar1 = *unaff_x19;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03c799b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),unaff_x19[1],*(undefined8 *)(lVar1 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
                    /* try { // try from 03c7996c to 03d7998f has its CatchHandler @ 03c79918 */
  if (unaff_x19[2] != 0) {
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03c79958 with catch @ 03c79978
                        */
    FUN_0357cd2c(*unaff_x19,unaff_x19[1],1,*(undefined8 *)PTR_DAT_06769c50);
    return;
  }
  FUN_0357d02c(*unaff_x19,unaff_x19[1],1,*(undefined8 *)PTR_DAT_06769c58);
  return;
}


