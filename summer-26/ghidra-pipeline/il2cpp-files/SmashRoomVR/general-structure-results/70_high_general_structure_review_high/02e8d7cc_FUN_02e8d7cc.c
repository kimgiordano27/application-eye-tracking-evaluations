/*
FUNCTION_NAME: FUN_02e8d7cc
ENTRY_POINT: 02e8d7cc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_20;telemetry_or_network_hits_4
*/


void FUN_02e8d7cc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff05b8 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_6161);
    thunk_FUN_01ad9084(StringLiteral_6162);
    thunk_FUN_01ad9084(StringLiteral_2324);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_ValidateCommandEvent_<>c_<_cctor>b__0_0__);
    thunk_FUN_01ad9084(StringLiteral_6163);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_6164);
    DAT_03ff05b8 = 1;
  }
  plVar9 = (long *)(param_1 + 0x28);
  lVar10 = *plVar9;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03922f24(lVar10,0,0);
  if ((uVar4 & 1) != 0) {
    lVar10 = FUN_0391c2b8(param_1,0);
    if (lVar10 == 0) goto LAB_02e8db60;
    lVar10 = FUN_01ed7390(lVar10,*(undefined8 *)StringLiteral_6163);
    *plVar9 = lVar10;
    thunk_FUN_01b4f09c(plVar9,lVar10);
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    lVar10 = FUN_0391c2b8(param_1,0);
    puVar3 = StringLiteral_6164;
    puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__;
    if (lVar10 == 0) goto LAB_02e8db60;
    uVar5 = FUN_039230bc(lVar10,0);
    uVar5 = FUN_02edd6e8(uVar5,*(undefined8 *)puVar3,0);
    lVar10 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_0391fe00(lVar10,uVar5,0);
    puVar3 = StringLiteral_6162;
    puVar2 = StringLiteral_2324;
    if (lVar10 == 0) goto LAB_02e8db60;
    lVar10 = FUN_01ed7044(lVar10,*(undefined8 *)
                                  Method_UnityEngine_UIElements_ValidateCommandEvent_<>c_<_cctor>b__0_0__
                         );
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar6);
    }
    FUN_01e8c380(lVar10,*(undefined8 *)puVar3);
    lVar6 = *plVar9;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03922f24(lVar6,0,0);
    if (lVar10 == 0) goto LAB_02e8db60;
    lVar6 = FUN_0391c27c(lVar10,0);
    if ((uVar4 & 1) == 0) {
      if ((*plVar9 == 0) || (uVar5 = FUN_0391c27c(*plVar9,0), lVar6 == 0)) goto LAB_02e8db60;
      FUN_03929660(lVar6,uVar5,0,0);
      lVar6 = *plVar9;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01e8b960(lVar10,lVar6,*(undefined8 *)StringLiteral_6161);
    }
    else {
      uVar5 = FUN_0391c27c(param_1,0);
      if (lVar6 == 0) goto LAB_02e8db60;
      FUN_03929660(lVar6,uVar5,0,0);
      FUN_038eb0fc(0x3f800000,lVar10,0);
    }
    lVar6 = FUN_0391c27c(lVar10,0);
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    if (lVar6 == 0) goto LAB_02e8db60;
    puVar7 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    FUN_039282dc(*puVar7,puVar7[1],puVar7[2],lVar6,0);
    lVar6 = FUN_0391c27c(lVar10,0);
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    if (lVar6 == 0) goto LAB_02e8db60;
    puVar7 = *(undefined4 **)
              (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
              0xb8);
    FUN_03929060(*puVar7,puVar7[1],puVar7[2],puVar7[3],lVar6,0);
    lVar6 = FUN_0391c27c(lVar10,0);
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed258 = '\x01';
    }
    if (lVar6 == 0) goto LAB_02e8db60;
    lVar8 = *(long *)(*(long *)puVar1 + 0xb8);
    FUN_039293f4(*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10),
                 *(undefined4 *)(lVar8 + 0x14),lVar6,0);
    *plVar9 = lVar10;
    thunk_FUN_01b4f09c(plVar9,lVar10);
  }
  if (*plVar9 != 0) {
    FUN_038eaecc(*plVar9,0,0);
    return;
  }
LAB_02e8db60:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


