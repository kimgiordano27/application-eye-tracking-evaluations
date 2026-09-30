/*
FUNCTION_NAME: FUN_01c59bb0
ENTRY_POINT: 01c59bb0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_18;telemetry_or_network_hits_4
*/


void FUN_01c59bb0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined4 uVar13;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
  ;
  if ((DAT_03fed67b & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_A2DFDF9C2CED8BB1C0B9B06064345ACC9C22DFE5FEC9976FF061F0994451519B
                      );
    thunk_FUN_01ad9084(StringLiteral_156);
    thunk_FUN_01ad9084(StringLiteral_157);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(StringLiteral_158);
    thunk_FUN_01ad9084(StringLiteral_159);
    DAT_03fed67b = 1;
  }
  puVar4 = StringLiteral_157;
  puVar3 = 
  Field_<PrivateImplementationDetails>_A2DFDF9C2CED8BB1C0B9B06064345ACC9C22DFE5FEC9976FF061F0994451519B
  ;
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar6 = FUN_01c4997c();
  plVar10 = (long *)(param_1 + 0xe0);
  *plVar10 = lVar6;
  thunk_FUN_01b4f09c(plVar10,lVar6);
  lVar6 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar4);
  plVar11 = (long *)(param_1 + 0xd0);
  *plVar11 = lVar6;
  thunk_FUN_01b4f09c(plVar11,lVar6);
  uVar7 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0xd8) = uVar7;
  thunk_FUN_01b4f09c();
  uVar7 = FUN_01e8ac5c(param_1,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 200) = uVar7;
  thunk_FUN_01b4f09c();
  if (*plVar11 != 0) {
    plVar12 = (long *)(param_1 + 0xe8);
    *plVar12 = *(long *)(*plVar11 + 0x30);
    thunk_FUN_01b4f09c(plVar12);
    puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_2__;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*plVar12 != 0) {
      uVar7 = FUN_01e8ac5c(*plVar12,*(undefined8 *)StringLiteral_156);
      *(undefined8 *)(param_1 + 0xf0) = uVar7;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0xf0),uVar7);
      uVar7 = FUN_01b47fd0(*(undefined8 *)puVar2,*(undefined4 *)(param_1 + 0x84));
      *(undefined8 *)(param_1 + 0x150) = uVar7;
      thunk_FUN_01b4f09c(param_1 + 0x150);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_0391f968(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if ((*(long *)(param_1 + 0x20) == 0) ||
           (lVar6 = FUN_0391c27c(*(long *)(param_1 + 0x20),0), lVar6 == 0)) goto LAB_01c59f24;
        FUN_039294c8(lVar6,0,0);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_01c59f24;
        lVar6 = FUN_0391c27c(*(long *)(param_1 + 0x20),0);
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        if (lVar6 == 0) goto LAB_01c59f24;
        puVar9 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        FUN_03928dd4(*puVar9,puVar9[1],puVar9[2],lVar6,0);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_01c59f24;
        lVar6 = FUN_0391c27c(*(long *)(param_1 + 0x20),0);
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
        if (lVar6 == 0) goto LAB_01c59f24;
        puVar9 = *(undefined4 **)
                  (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                  0xb8);
        FUN_03928f54(*puVar9,puVar9[1],puVar9[2],puVar9[3],lVar6,0);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_01c59f24;
        uVar13 = FUN_038fcad8(*(long *)(param_1 + 0x20),0);
        *(undefined4 *)(param_1 + 0x100) = uVar13;
      }
      iVar5 = FUN_03920150(*(undefined4 *)(param_1 + 0x90),0);
      if (iVar5 == 0) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f2acc(*(undefined8 *)StringLiteral_158,0);
        uVar13 = FUN_03920154(1,0);
        *(undefined4 *)(param_1 + 0x90) = uVar13;
      }
      if (*(int *)(param_1 + 0x98) == 0) {
        if (*plVar10 == 0) goto LAB_01c59f24;
        if (*(char *)(*plVar10 + 0xd2) != '\0') {
          if (*(int *)(*(long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_038f2acc(*(undefined8 *)StringLiteral_159,0);
          *(undefined4 *)(param_1 + 0x98) = 1;
        }
      }
      *(undefined1 *)(param_1 + 0x104) = 1;
      return;
    }
  }
LAB_01c59f24:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


