/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 047df984
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(long param_1)

{
  int iVar1;
  uint uVar2;
  int in_w9;
  int unaff_w19;
  long unaff_x20;
  
                    /* try { // try from 047df984 to 048df98f has its CatchHandler @ 047df470 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 047df97c with catch @ 047df98c
                        */
  uVar2 = (**(code **)(param_1 + (long)(in_w9 + 1) * 0x10 + 0x138))();
  if (unaff_w19 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    unaff_w19 = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x18);
  }
  iVar1 = 0;
  if (unaff_w19 != 0) {
    iVar1 = (int)(uVar2 & 0x7fffffff) / unaff_w19;
  }
  return (uVar2 & 0x7fffffff) - iVar1 * unaff_w19;
}


