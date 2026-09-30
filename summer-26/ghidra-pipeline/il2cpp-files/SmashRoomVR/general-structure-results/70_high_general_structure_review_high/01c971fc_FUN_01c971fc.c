/*
FUNCTION_NAME: FUN_01c971fc
ENTRY_POINT: 01c971fc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


undefined4 FUN_01c971fc(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
                    /* catch() { ... } // from try @ 01c96dc8 with catch @ 01c971fc */
                    /* catch() { ... } // from try @ 01c96d50 with catch @ 01c97200 */
                    /* catch() { ... } // from try @ 01c96bc4 with catch @ 01c97204 */
                    /* catch() { ... } // from try @ 01c96b5c with catch @ 01c97208 */
                    /* catch() { ... } // from try @ 01c96dac with catch @ 01c9720c */
                    /* try { // try from 01c97214 to 01d9721b has its CatchHandler @ 01c97220 */
  if ((DAT_03fed89e & 1) == 0) {
                    /* catch() { ... } // from try @ 01c97214 with catch @ 01c97220 */
    thunk_FUN_01ad9084(Method_System_Resources_ResourceReader_ResourceEnumerator_Reset__);
                    /* catch() { ... } // from try @ 01c96d34 with catch @ 01c97224 */
    DAT_03fed89e = 1;
  }
                    /* try { // try from 01c9722c to 01d97233 has its CatchHandler @ 01c97238 */
  local_30 = 0;
  uStack_28 = 0;
                    /* catch() { ... } // from try @ 01c9722c with catch @ 01c97238 */
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
                    /* catch() { ... } // from try @ 01c96c20 with catch @ 01c9723c */
  if (DAT_03fed256 == '\0') {
                    /* catch() { ... } // from try @ 01c96ba8 with catch @ 01c97240 */
                    /* try { // try from 01c97248 to 01d9724f has its CatchHandler @ 01c97254 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
                    /* catch() { ... } // from try @ 01c97248 with catch @ 01c97254 */
                    /* catch() { ... } // from try @ 01c96b40 with catch @ 01c97258 */
                    /* try { // try from 01c97260 to 01d97267 has its CatchHandler @ 01c9726c */
  uStack_28 = (*(undefined8 **)
                (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                0xb8))[1];
  local_30 = **(undefined8 **)
               (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
               0xb8);
  if (param_2 == 1) {
    local_40 = FUN_01c96df8();
  }
  else {
    if (param_2 != 0) goto LAB_01c972c0;
    local_40 = FUN_01c96d28();
  }
  puVar1 = Method_System_Resources_ResourceReader_ResourceEnumerator_Reset__;
  lVar2 = *(long *)Method_System_Resources_ResourceReader_ResourceEnumerator_Reset__;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar2 = *(long *)puVar1;
  }
  FUN_03b39aec(local_40,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x160),&local_30,0);
LAB_01c972c0:
  return (undefined4)local_30;
}


