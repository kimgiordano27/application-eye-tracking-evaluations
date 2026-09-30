/*
FUNCTION_NAME: FUN_01146950
ENTRY_POINT: 01146950
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_01146950(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_30;
  long lStack_28;
  
                    /* try { // try from 01146954 to 01246987 has its CatchHandler @ 011469f0 */
  if (*(long *)(param_2 + 0x38) == 0) {
    thunk_FUN_00d48444(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Dispose__);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_00d59478(param_2);
    }
  }
                    /* try { // try from 01146988 to 012469b3 has its CatchHandler @ 011467c8 */
  if (param_1 != 0) {
    puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x38) + 8);
    (*(code *)puVar3[2])(*puVar3,puVar3,param_1,0,0);
    puVar1 = Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Dispose__;
                    /* try { // try from 011469b4 to 012469b7 has its CatchHandler @ 011469d4 */
    lVar2 = *(long *)Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Dispose__;
                    /* try { // try from 011469b8 to 012469bf has its CatchHandler @ 011469dc */
    if (*(int *)(lVar2 + 0xe0) == 0) {
                    /* try { // try from 011469c0 to 012469c3 has its CatchHandler @ 011469d0 */
      thunk_FUN_00d32864();
                    /* try { // try from 011469c4 to 012469cb has its CatchHandler @ 011469d8 */
      lVar2 = *(long *)puVar1;
    }
                    /* try { // try from 011469cc to 012469ff has its CatchHandler @ 011467c8 */
                    /* catch() { ... } // from try @ 011469c0 with catch @ 011469d0 */
                    /* catch() { ... } // from try @ 011469b4 with catch @ 011469d4 */
                    /* catch() { ... } // from try @ 011469c4 with catch @ 011469d8 */
    puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x38) + 0x10);
                    /* catch() { ... } // from try @ 011469b8 with catch @ 011469dc */
    local_30 = **(undefined8 **)(lVar2 + 0xb8);
                    /* catch() { ... } // from try @ 01146940 with catch @ 011469e0 */
                    /* catch() { ... } // from try @ 011468b0 with catch @ 011469e4 */
                    /* catch() { ... } // from try @ 01146930 with catch @ 011469e8 */
                    /* catch() { ... } // from try @ 011468a0 with catch @ 011469ec */
    lStack_28 = param_1;
                    /* catch() { ... } // from try @ 01146954 with catch @ 011469f0 */
    (*(code *)puVar3[2])(*puVar3,puVar3,0,&local_30,param_1);
                    /* try { // try from 01146a00 to 01246a03 has its CatchHandler @ 01146a28 */
                    /* try { // try from 01146a04 to 01246a2f has its CatchHandler @ 011467c8 */
    puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x38) + 0x18);
    local_30 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    lStack_28 = param_1;
    (*(code *)puVar3[2])(*puVar3,puVar3,0,&local_30,param_1);
                    /* catch() { ... } // from try @ 01146a00 with catch @ 01146a28 */
                    /* try { // try from 01146a30 to 01246a43 has its CatchHandler @ 01146aa4 */
    puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x38) + 0x20);
    local_30 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
                    /* catch() { ... } // from try @ 011468c4 with catch @ 01146a44
                       try { // try from 01146a44 to 01246a57 has its CatchHandler @ 011467c8 */
    lStack_28 = param_1;
    (*(code *)puVar3[2])(*puVar3,puVar3,0,&local_30,param_1);
                    /* try { // try from 01146a58 to 01246a5b has its CatchHandler @ 01146a7c */
                    /* try { // try from 01146a5c to 01246a83 has its CatchHandler @ 011467c8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


