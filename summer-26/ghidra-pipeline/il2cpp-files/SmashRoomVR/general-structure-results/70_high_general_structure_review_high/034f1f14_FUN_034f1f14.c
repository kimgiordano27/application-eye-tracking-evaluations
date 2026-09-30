/*
FUNCTION_NAME: FUN_034f1f14
ENTRY_POINT: 034f1f14
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void FUN_034f1f14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
                    /* try { // try from 034f1f14 to 035f1f23 has its CatchHandler @ 034f1f94 */
                    /* try { // try from 034f1f24 to 035f1f2b has its CatchHandler @ 034f1ce8 */
  if (DAT_03fed257 == '\0') {
                    /* try { // try from 034f1f2c to 035f1f3f has its CatchHandler @ 034f1f9c */
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
                    /* try { // try from 034f1f44 to 035f1f7b has its CatchHandler @ 034f1f8c */
  uVar3 = *(undefined4 *)
           (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1);
  *(undefined8 *)(param_1 + 0x78) =
       **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
                    /* try { // try from 034f1f7c to 035f1f7f has its CatchHandler @ 034f1f90 */
    DAT_03fed256 = '\x01';
  }
                    /* try { // try from 034f1f80 to 035f1f83 has its CatchHandler @ 034f1f84 */
                    /* catch() { ... } // from try @ 034f1f80 with catch @ 034f1f84
                       try { // try from 034f1f84 to 035f1fbf has its CatchHandler @ 034f1ce8 */
                    /* catch() { ... } // from try @ 034f1e8c with catch @ 034f1f88 */
                    /* catch() { ... } // from try @ 034f1f44 with catch @ 034f1f8c */
                    /* catch() { ... } // from try @ 034f1f7c with catch @ 034f1f90 */
                    /* catch() { ... } // from try @ 034f1f14 with catch @ 034f1f94 */
                    /* catch() { ... } // from try @ 034f1ed0 with catch @ 034f1f98 */
                    /* catch() { ... } // from try @ 034f1f2c with catch @ 034f1f9c */
  uVar2 = (*(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
          )[1];
  uVar1 = **(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
  ;
                    /* catch() { ... } // from try @ 034f1ef0 with catch @ 034f1fa0 */
                    /* catch() { ... } // from try @ 034f1ed4 with catch @ 034f1fa4 */
  *(undefined4 *)(param_1 + 0x94) = 3;
  *(undefined1 *)(param_1 + 0x9b) = 1;
  *(undefined8 *)(param_1 + 0x8c) = uVar2;
  *(undefined8 *)(param_1 + 0x84) = uVar1;
  FUN_039211e4(param_1,0);
  return;
}


