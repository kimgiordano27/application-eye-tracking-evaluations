/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$MoveNext
ENTRY_POINT: 070b4240
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceDiscoveryResult>__MoveNext
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_040dedf8(PTR_DAT_0929cb88);
  uVar1 = thunk_FUN_040b4efc();
                    /* try { // try from 070b4260 to 071b426f has its CatchHandler @ 070b4270 */
  uVar2 = thunk_FUN_040dedf8(&DAT_09540968);
                    /* catch() { ... } // from try @ 070b41e4 with catch @ 070b4270
                       catch() { ... } // from try @ 070b4260 with catch @ 070b4270 */
  FUN_07679464(uVar1,uVar2,0);
                    /* try { // try from 070b4274 to 071b4277 has its CatchHandler @ 070b4280 */
                    /* try { // try from 070b4278 to 071b4283 has its CatchHandler @ 070b3fe8 */
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar1,param_2);
}


