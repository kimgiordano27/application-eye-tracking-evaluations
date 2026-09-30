/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$GetSubArray
ENTRY_POINT: 05ebd1a0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetSubArray(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  
  puVar2 = PTR_DAT_092b92f0;
  puVar1 = PTR_DAT_09285e40;
  if (unaff_x22 != 0) {
    *(undefined8 *)(unaff_x22 + 0x10) = unaff_x21;
    thunk_FUN_040ec700();
    *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
    thunk_FUN_040ec700();
    uVar3 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
    FUN_075d444c();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 05ebd0f4 with catch @ 05ebd20c
                       try { // try from 05ebd20c to 05fbd22f has its CatchHandler @ 05ebd0c0 */
    FUN_07303384(uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


