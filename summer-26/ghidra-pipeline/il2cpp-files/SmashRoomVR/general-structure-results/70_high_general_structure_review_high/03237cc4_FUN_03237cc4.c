/*
FUNCTION_NAME: FUN_03237cc4
ENTRY_POINT: 03237cc4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_16;telemetry_or_network_hits_5
*/


void FUN_03237cc4(byte param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  
  puVar1 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
  if ((DAT_03ff475e & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff475e = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar4 = FUN_03237f4c();
  if ((param_1 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (lVar4 == 0) goto LAB_03237f48;
    FUN_038f0dc4(lVar4,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x140),0);
    uVar5 = 0;
    lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
    *(undefined8 *)(lVar4 + 0x138) = 0;
  }
  else {
    if (lVar4 == 0) {
LAB_03237f48:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar2 = FUN_038f0d88(lVar4,0);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar7);
      lVar7 = *(long *)puVar1;
    }
    *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x140) = uVar2;
    uVar3 = FUN_038f0d88(lVar4,0);
    FUN_038f0dc4(lVar4,uVar3 | 5,0);
    lVar7 = FUN_0391c27c(lVar4,0);
    if (lVar7 == 0) goto LAB_03237f48;
    uVar5 = FUN_03928c2c(lVar7,0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar6 = FUN_03922f24(uVar5,0,0);
    if ((uVar6 & 1) != 0) {
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar1;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x138);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      if (lVar4 == 0) goto LAB_03237f48;
      puVar8 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      FUN_03928dd4(*puVar8,puVar8[1],puVar8[2],lVar4,0);
      lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x138);
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      if (lVar4 == 0) goto LAB_03237f48;
      puVar8 = *(undefined4 **)
                (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                0xb8);
      FUN_03928f54(*puVar8,puVar8[1],puVar8[2],puVar8[3],lVar4,0);
      goto LAB_03237f0c;
    }
    lVar4 = FUN_0391c27c(lVar4,0);
    if (lVar4 == 0) goto LAB_03237f48;
    uVar5 = FUN_03928c2c(lVar4,0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar4);
      lVar4 = *(long *)puVar1;
    }
    lVar4 = *(long *)(lVar4 + 0xb8);
    *(undefined8 *)(lVar4 + 0x138) = uVar5;
  }
  thunk_FUN_01b4f09c(lVar4 + 0x138,uVar5);
LAB_03237f0c:
  FUN_0329a35c(param_1 & 1,0);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar4 = *(long *)puVar1;
  }
  *(byte *)(*(long *)(lVar4 + 0xb8) + 0x134) = param_1 & 1;
  return;
}


