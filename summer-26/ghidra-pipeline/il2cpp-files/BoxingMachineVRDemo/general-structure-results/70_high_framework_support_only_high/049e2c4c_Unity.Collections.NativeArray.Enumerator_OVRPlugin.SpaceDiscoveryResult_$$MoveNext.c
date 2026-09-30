/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$MoveNext
ENTRY_POINT: 049e2c4c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
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
               (undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
                    /* try { // try from 049e2c50 to 04ae2ca7 has its CatchHandler @ 049e2c50
                       catch() { ... } // from try @ 049e2c50 with catch @ 049e2c50
                       catch() { ... } // from try @ 049e2d68 with catch @ 049e2c50
                       catch() { ... } // from try @ 049e2df0 with catch @ 049e2c50
                       catch() { ... } // from try @ 049e2e34 with catch @ 049e2c50
                       catch() { ... } // from try @ 049e2e64 with catch @ 049e2c50
                       catch() { ... } // from try @ 049e2ee4 with catch @ 049e2c50 */
  FUN_02d9a2e0(param_1);
  FUN_0504920c();
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  **(undefined8 **)(lVar1 + 0xb8) = unaff_x20;
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x20);
                    /* try { // try from 049e2ca8 to 04ae2cd7 has its CatchHandler @ 049e2d68 */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  thunk_FUN_02dd37b4(*(undefined8 *)(lVar1 + 0xb8));
  return;
}


