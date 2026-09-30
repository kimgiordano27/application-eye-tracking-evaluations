/*
FUNCTION_NAME: FUN_03866618
ENTRY_POINT: 03866618
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


void FUN_03866618(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((DAT_03ff86ba & 1) == 0) {
    thunk_FUN_01ad9084(Method_System_Resources_ResourceReader_ResourceEnumerator_get_Value__);
    thunk_FUN_01ad9084(PTR_DAT_03da5ed8);
    DAT_03ff86ba = 1;
  }
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  uVar3 = **(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
  ;
  *(undefined8 *)(param_1 + 0xd0) =
       (*(undefined8 **)
         (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8))
       [1];
  *(undefined8 *)(param_1 + 200) = uVar3;
  puVar1 = PTR_DAT_03da5ed8;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  uVar4 = *(undefined4 *)
           (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1);
  *(undefined8 *)(param_1 + 0xb0) =
       **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0xc0),0);
  lVar2 = *(long *)(param_1 + 0xd8);
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  uVar4 = FUN_03920154(0xfffffffb,0);
  *(undefined4 *)(param_1 + 0x134) = uVar4;
  if (DAT_03fed2da == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
    DAT_03fed2da = '\x01';
  }
  *(undefined8 *)(param_1 + 0x138) =
       **(undefined8 **)
         (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ + 0xb8);
  if ((param_2 & 1) != 0) {
    FUN_038667a0(param_1);
    return;
  }
  return;
}


