/*
FUNCTION_NAME: FUN_036674a0
ENTRY_POINT: 036674a0
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


void FUN_036674a0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_DAT_03d9b4f0;
  if ((DAT_03ff73b1 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d9b4f0);
    DAT_03ff73b1 = 1;
  }
  uVar2 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_03081994(uVar2,0);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x20),uVar2);
  if (DAT_03fed258 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed258 = '\x01';
  }
  uVar3 = *(undefined4 *)
           (*(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 0x14);
  *(undefined8 *)(param_1 + 0x28) =
       *(undefined8 *)
        (*(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 0xc);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  uVar2 = **(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
  ;
  *(undefined8 *)(param_1 + 0x3c) =
       (*(undefined8 **)
         (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8))
       [1];
  *(undefined8 *)(param_1 + 0x34) = uVar2;
  FUN_039211e4(param_1,0);
  return;
}


