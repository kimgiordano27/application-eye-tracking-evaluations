/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 01995b50
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x18);
                    /* try { // try from 01995b54 to 01a95b63 has its CatchHandler @ 01995b64 */
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
                    /* catch() { ... } // from try @ 01995a78 with catch @ 01995b64
                       catch() { ... } // from try @ 01995ab4 with catch @ 01995b64
                       catch() { ... } // from try @ 01995ae0 with catch @ 01995b64
                       catch() { ... } // from try @ 01995b54 with catch @ 01995b64 */
    param_1 = param_1 + (long)(int)uVar1 * 0x10;
                    /* try { // try from 01995b68 to 01a95b6b has its CatchHandler @ 01995b74 */
    *(uint *)(param_2 + 0x18) = uVar1 + 1;
                    /* try { // try from 01995b6c to 01a95b77 has its CatchHandler @ 01995914 */
    *(undefined8 *)(param_1 + 0x20) = param_3;
    *(undefined8 *)(param_1 + 0x28) = param_4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01995b68 with catch @ 01995b74
                        */
    return;
  }
                    /* catch() { ... } // from try @ 01995bb8 with catch @ 01995b78
                       catch() { ... } // from try @ 01995bf0 with catch @ 01995b78
                       catch() { ... } // from try @ 01995c28 with catch @ 01995b78
                       catch() { ... } // from try @ 01995c78 with catch @ 01995b78
                       catch() { ... } // from try @ 01995ca4 with catch @ 01995b78
                       catch() { ... } // from try @ 01995d18 with catch @ 01995b78 */
  FUN_01995b90();
  return;
}


