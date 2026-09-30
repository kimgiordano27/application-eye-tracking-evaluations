/*
FUNCTION_NAME: FUN_01f70d9c
ENTRY_POINT: 01f70d9c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


void FUN_01f70d9c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 uint param_13,undefined4 param_14,undefined8 param_15,long param_16)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(long *)(param_16 + 0x38) == 0) {
    thunk_FUN_01ad9084(StringLiteral_692);
    if (*(long *)(param_16 + 0x38) == 0) {
      FUN_01ae9ed0(param_16);
    }
  }
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  uVar2 = **(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  uVar3 = (*(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8))[2];
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  uVar4 = **(undefined4 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
  ;
  uVar5 = (*(undefined4 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
          )[2];
  if (*(int *)(*(long *)StringLiteral_692 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar1 = *(undefined8 **)(*(long *)(param_16 + 0x38) + 0x10);
  (*(code *)*puVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12,param_13 & 1,param_14,param_15,puVar1,uVar2,uVar3,
                     uVar4,uVar5);
  return;
}


