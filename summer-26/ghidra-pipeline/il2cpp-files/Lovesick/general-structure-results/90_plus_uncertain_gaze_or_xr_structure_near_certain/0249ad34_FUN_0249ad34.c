/*
FUNCTION_NAME: FUN_0249ad34
ENTRY_POINT: 0249ad34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 169
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0249ad34(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
                    /* try { // try from 0249ad3c to 0259ad3f has its CatchHandler @ 0249ad78 */
                    /* try { // try from 0249ad40 to 0259ad43 has its CatchHandler @ 0249ad74 */
                    /* try { // try from 0249ad44 to 0259ad47 has its CatchHandler @ 0249ad70 */
                    /* try { // try from 0249ad48 to 0259ad4b has its CatchHandler @ 0249ad6c */
                    /* try { // try from 0249ad4c to 0259ad4f has its CatchHandler @ 0249ad68 */
  if ((DAT_037825eb & 1) == 0) {
                    /* try { // try from 0249ad50 to 0259ad57 has its CatchHandler @ 0249ad64 */
                    /* try { // try from 0249ad58 to 0259ad5b has its CatchHandler @ 0249ad60 */
    thunk_FUN_00d48444(StringLiteral_302);
                    /* try { // try from 0249ad5c to 0259adcb has its CatchHandler @ 0249a878 */
                    /* catch() { ... } // from try @ 0249ad58 with catch @ 0249ad60 */
                    /* catch() { ... } // from try @ 0249ad50 with catch @ 0249ad64 */
    thunk_FUN_00d48444(Method_OVRPlugin_PinnedArray<Guid>__ctor__);
                    /* catch() { ... } // from try @ 0249ad4c with catch @ 0249ad68 */
                    /* catch() { ... } // from try @ 0249ad48 with catch @ 0249ad6c */
                    /* catch() { ... } // from try @ 0249ad44 with catch @ 0249ad70 */
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<int>>__
                      );
                    /* catch() { ... } // from try @ 0249ad40 with catch @ 0249ad74 */
                    /* catch() { ... } // from try @ 0249ad3c with catch @ 0249ad78 */
    DAT_037825eb = 1;
  }
                    /* catch() { ... } // from try @ 0249acdc with catch @ 0249ad7c */
  lVar4 = FUN_0268fd4c(param_1,0);
  puVar3 = StringLiteral_302;
  puVar2 = Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<int>>__;
  puVar1 = Method_OVRPlugin_PinnedArray<Guid>__ctor__;
                    /* catch() { ... } // from try @ 0249aca8 with catch @ 0249ad88 */
  if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 0249ac4c with catch @ 0249ad8c */
                    /* catch() { ... } // from try @ 0249aae8 with catch @ 0249ad90 */
                    /* catch() { ... } // from try @ 0249aad0 with catch @ 0249ad94 */
                    /* catch() { ... } // from try @ 0249aa98 with catch @ 0249ad98 */
                    /* catch() { ... } // from try @ 0249aab0 with catch @ 0249ad9c */
                    /* catch() { ... } // from try @ 0249aa80 with catch @ 0249ada0 */
                    /* catch() { ... } // from try @ 0249ab94 with catch @ 0249ada4 */
                    /* catch() { ... } // from try @ 0249ab80 with catch @ 0249ada8 */
    uVar5 = FUN_0268b6ac(lVar4,0);
                    /* catch() { ... } // from try @ 0249abe0 with catch @ 0249adac */
                    /* catch() { ... } // from try @ 0249ab38 with catch @ 0249adb0 */
    uVar5 = FUN_01600424(*(undefined8 *)puVar2,uVar5,*(undefined8 *)puVar1,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    FUN_0266185c(uVar5,param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0249adcc with catch @ 0249adf8 */
  FUN_00da518c();
}


