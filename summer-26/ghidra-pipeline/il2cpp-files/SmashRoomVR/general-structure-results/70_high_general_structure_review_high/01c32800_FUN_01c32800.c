/*
FUNCTION_NAME: FUN_01c32800
ENTRY_POINT: 01c32800
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_10;telemetry_or_network_hits_5
*/


void FUN_01c32800(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  lVar3 = *(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  uVar7 = *(undefined4 *)(puVar4 + 1);
  *(undefined8 *)(param_1 + 0x40) = *puVar4;
  *(undefined4 *)(param_1 + 0x48) = uVar7;
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  uVar7 = *(undefined4 *)(puVar4 + 1);
  *(undefined8 *)(param_1 + 0x4c) = *puVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar7;
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
  lVar3 = *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  uVar5 = *puVar4;
  *(undefined8 *)(param_1 + 0x60) = puVar4[1];
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  uVar5 = *puVar4;
  *(undefined8 *)(param_1 + 0x70) = puVar4[1];
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  lVar3 = *(long *)puVar2;
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  uVar7 = *(undefined4 *)(puVar4 + 1);
  *(undefined8 *)(param_1 + 0x80) = *puVar4;
  *(undefined4 *)(param_1 + 0x88) = uVar7;
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  uVar7 = *(undefined4 *)(puVar4 + 1);
  *(undefined8 *)(param_1 + 0x8c) = *puVar4;
  *(undefined4 *)(param_1 + 0x94) = uVar7;
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  uVar5 = *puVar4;
  *(undefined8 *)(param_1 + 0xa0) = puVar4[1];
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  uVar5 = *puVar4;
  *(undefined8 *)(param_1 + 0xb0) = puVar4[1];
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  lVar3 = *(long *)puVar2;
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  uVar7 = *(undefined4 *)(puVar4 + 1);
  *(undefined8 *)(param_1 + 0xc0) = *puVar4;
  *(undefined4 *)(param_1 + 200) = uVar7;
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  uVar7 = *(undefined4 *)(puVar4 + 1);
  *(undefined8 *)(param_1 + 0xcc) = *puVar4;
  *(undefined4 *)(param_1 + 0xd4) = uVar7;
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  uVar5 = *puVar4;
  *(undefined8 *)(param_1 + 0xe0) = puVar4[1];
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  uVar6 = puVar4[1];
  uVar5 = *puVar4;
  *(undefined4 *)(param_1 + 0x138) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x180) = 0x3dcccccd;
  *(undefined8 *)(param_1 + 0xf0) = uVar6;
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  FUN_039211e4(param_1,0);
  return;
}


