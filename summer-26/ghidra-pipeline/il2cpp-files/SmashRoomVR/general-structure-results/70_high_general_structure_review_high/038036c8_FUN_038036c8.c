/*
FUNCTION_NAME: FUN_038036c8
ENTRY_POINT: 038036c8
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


void FUN_038036c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  uVar4 = **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  uVar3 = *(undefined4 *)
           (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1);
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  uVar2 = (*(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
          )[1];
  uVar1 = **(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
  ;
  FUN_03081994(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x34) = uVar2;
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}


