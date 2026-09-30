/*
FUNCTION_NAME: Unity.VisualScripting.GreaterThanOrEqualHandler.<>c$$<.ctor>b__0_26
ENTRY_POINT: 03667518
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


void Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_26(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)
           (*(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 0x14);
  *(undefined8 *)(unaff_x19 + 0x28) =
       *(undefined8 *)
        (*(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 0xc);
  *(undefined4 *)(unaff_x19 + 0x30) = uVar2;
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  uVar1 = **(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
  ;
  *(undefined8 *)(unaff_x19 + 0x3c) =
       (*(undefined8 **)
         (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8))
       [1];
  *(undefined8 *)(unaff_x19 + 0x34) = uVar1;
  FUN_039211e4();
  return;
}


