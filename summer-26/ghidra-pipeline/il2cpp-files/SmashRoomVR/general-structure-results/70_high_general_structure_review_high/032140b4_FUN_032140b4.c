/*
FUNCTION_NAME: FUN_032140b4
ENTRY_POINT: 032140b4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_12;telemetry_or_network_hits_4
*/


long FUN_032140b4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff45f0 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff45f0 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(param_2,0,0);
  lVar5 = 0;
  if ((uVar2 & 1) != 0) {
    if (param_2 == 0) goto LAB_0321430c;
    lVar5 = FUN_0392a75c(param_2,param_3,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(lVar5,0,0);
  if ((uVar2 & 1) != 0) {
    lVar5 = FUN_0391c27c(param_1,0);
    if (lVar5 == 0) goto LAB_0321430c;
    lVar5 = FUN_0392a75c(lVar5,param_3,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(lVar5,0,0);
  if ((uVar2 & 1) != 0) {
    lVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    FUN_0391fe00(lVar5,param_3,0);
    if (lVar5 == 0) goto LAB_0321430c;
    lVar5 = FUN_0391fab4(lVar5,0);
  }
  if (lVar5 != 0) {
    FUN_0392316c(lVar5,param_3,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(param_2,0,0);
    if ((uVar2 & 1) == 0) {
      param_2 = FUN_0391c27c(param_1,0);
    }
    FUN_039294c8(lVar5,param_2,0);
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed258 = '\x01';
    }
    puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    lVar3 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    FUN_039293f4(*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                 *(undefined4 *)(lVar3 + 0x14),lVar5,0);
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    puVar4 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
    FUN_039282dc(*puVar4,puVar4[1],puVar4[2],lVar5,0);
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    puVar4 = *(undefined4 **)
              (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
              0xb8);
    FUN_03929060(*puVar4,puVar4[1],puVar4[2],puVar4[3],lVar5,0);
    return lVar5;
  }
LAB_0321430c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


