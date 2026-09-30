/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 0417768c
PROGRAM: Untangled-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x19;
  long unaff_x21;
  int unaff_w24;
  
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 041774fc with catch @ 0417768c
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 0417753c with catch @ 04177690
                        */
  puVar1 = (undefined8 *)FUN_02eea86c(param_1,param_2,0);
                    /* try { // try from 041776a8 to 042776ab has its CatchHandler @ 041776c0 */
  (*(code *)*puVar1)();
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ecbb70();
  }
  if (unaff_w24 != 5) {
    if (unaff_w24 != 0) {
      return;
    }
                    /* catch() { ... } // from try @ 041776a8 with catch @ 041776c0 */
    FUN_0417800c();
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


