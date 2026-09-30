/*
FUNCTION_NAME: FUN_01be7b04
ENTRY_POINT: 01be7b04
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_8;telemetry_or_network_hits_4
*/


void FUN_01be7b04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
                    /* try { // try from 01be7b18 to 01ce7b1f has its CatchHandler @ 01be7d6c */
  *(undefined4 *)(param_1 + 0x20) = 2;
                    /* try { // try from 01be7b20 to 01ce7cff has its CatchHandler @ 01be7d7c */
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  uVar6 = *(undefined4 *)
           (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1);
  *(undefined8 *)(param_1 + 0x3c) =
       **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(undefined4 *)(param_1 + 0x44) = uVar6;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    cVar3 = DAT_03fed257;
    DAT_03fed256 = '\x01';
    uVar5 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    *(undefined8 *)(param_1 + 0x50) = (*(undefined8 **)(*(long *)puVar1 + 0xb8))[1];
    *(undefined8 *)(param_1 + 0x48) = uVar5;
    if (cVar3 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
      bVar4 = DAT_03fed256 == '\0';
    }
    else {
      bVar4 = false;
    }
  }
  else {
    bVar4 = false;
    uVar5 = **(undefined8 **)
              (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
              0xb8);
    *(undefined8 *)(param_1 + 0x50) =
         (*(undefined8 **)
           (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8))
         [1];
    *(undefined8 *)(param_1 + 0x48) = uVar5;
  }
  uVar6 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar2 + 0xb8) + 1);
  *(undefined8 *)(param_1 + 0x58) = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  *(undefined4 *)(param_1 + 0x60) = uVar6;
  if (bVar4) {
    thunk_FUN_01ad9084(puVar1);
    cVar3 = DAT_03fed257;
    DAT_03fed256 = '\x01';
    uVar5 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    *(undefined8 *)(param_1 + 0x6c) = (*(undefined8 **)(*(long *)puVar1 + 0xb8))[1];
    *(undefined8 *)(param_1 + 100) = uVar5;
    if (cVar3 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
      bVar4 = DAT_03fed256 == '\0';
    }
    else {
      bVar4 = false;
    }
  }
  else {
    uVar5 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    *(undefined8 *)(param_1 + 0x6c) = (*(undefined8 **)(*(long *)puVar1 + 0xb8))[1];
    *(undefined8 *)(param_1 + 100) = uVar5;
    bVar4 = false;
  }
  uVar6 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar2 + 0xb8) + 1);
  *(undefined8 *)(param_1 + 0x74) = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  if (bVar4) {
    thunk_FUN_01ad9084(puVar1);
    cVar3 = DAT_03fed257;
    DAT_03fed256 = '\x01';
    uVar5 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    *(undefined8 *)(param_1 + 0x88) = (*(undefined8 **)(*(long *)puVar1 + 0xb8))[1];
    *(undefined8 *)(param_1 + 0x80) = uVar5;
    if (cVar3 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
  }
  else {
    uVar5 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    *(undefined8 *)(param_1 + 0x88) = (*(undefined8 **)(*(long *)puVar1 + 0xb8))[1];
    *(undefined8 *)(param_1 + 0x80) = uVar5;
  }
  uVar6 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar2 + 0xb8) + 1);
  *(undefined8 *)(param_1 + 0x90) = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  *(undefined4 *)(param_1 + 0x98) = uVar6;
  FUN_039211e4(param_1,0);
  return;
}


