/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$AsReadOnly
ENTRY_POINT: 04c3e80c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__AsReadOnly
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *piVar2;
  
  if (in_x9 != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar2 + -2) == param_3) {
                    /* try { // try from 04c3e848 to 04d3e84b has its CatchHandler @ 04c3e854 */
                    /* try { // try from 04c3e84c to 04d3e877 has its CatchHandler @ 04c3e3a8 */
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar2 + 1) * 0x10 + 0x138);
        goto LAB_04c3e850;
      }
      in_x9 = in_x9 + -1;
      piVar2 = piVar2 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_0377596c();
LAB_04c3e850:
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 04c3e848 with catch @ 04c3e854
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 04c3e774 with catch @ 04c3e858
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 04c3e6ac with catch @ 04c3e85c
                        */
  (*(code *)*puVar1)();
  return;
}


