/*
FUNCTION_NAME: FUN_01be0fd8
ENTRY_POINT: 01be0fd8
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


void FUN_01be0fd8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (DAT_03fed257 == '\0') {
                    /* try { // try from 01be0ff0 to 01ce0ffb has its CatchHandler @ 01be10a0 */
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  uVar3 = *(undefined4 *)
           (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1);
  *(undefined8 *)(param_1 + 0x30) =
       **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  if (DAT_03fed256 == '\0') {
                    /* try { // try from 01be1034 to 01ce103f has its CatchHandler @ 01be108c */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
                    /* try { // try from 01be1054 to 01ce105f has its CatchHandler @ 01be1084 */
  uVar2 = (*(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
          )[1];
  uVar1 = **(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
  ;
                    /* try { // try from 01be1060 to 01ce10af has its CatchHandler @ 01be0f68 */
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x44) = uVar2;
  *(undefined8 *)(param_1 + 0x3c) = uVar1;
  FUN_039211e4(param_1,0);
  return;
}


