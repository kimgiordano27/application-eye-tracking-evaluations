/*
FUNCTION_NAME: FUN_032937fc
ENTRY_POINT: 032937fc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void FUN_032937fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff5766 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_5575);
    thunk_FUN_01ad9084(Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(PTR_DAT_03d85e78);
    thunk_FUN_01ad9084(PTR_DAT_03d85e80);
    thunk_FUN_01ad9084(PTR_DAT_03d85e88);
    thunk_FUN_01ad9084(PTR_DAT_03d85e90);
    thunk_FUN_01ad9084(PTR_DAT_03d85e98);
    thunk_FUN_01ad9084(PTR_DAT_03d85ea0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d85ea8);
    thunk_FUN_01ad9084(PTR_DAT_03d83998);
    thunk_FUN_01ad9084(PTR_DAT_03d85eb0);
    thunk_FUN_01ad9084(PTR_DAT_03d85eb8);
    DAT_03ff5766 = 1;
  }
  puVar11 = (undefined8 *)(param_1 + 0xb0);
  uVar12 = *puVar11;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_03922f24(uVar12,0,0);
  if ((uVar8 & 1) != 0) {
    uVar12 = FUN_038feca0(*(undefined8 *)PTR_DAT_03d85ea8,0);
    *puVar11 = uVar12;
    thunk_FUN_01b4f09c(puVar11,uVar12);
  }
  puVar11 = (undefined8 *)(param_1 + 0xb8);
  uVar12 = *puVar11;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar3 = PTR_DAT_03d85ea0;
  uVar8 = FUN_03922f24(uVar12,0,0);
  if ((uVar8 & 1) != 0) {
    uVar12 = FUN_038feca0(*(undefined8 *)PTR_DAT_03d83998,0);
    *puVar11 = uVar12;
    thunk_FUN_01b4f09c(puVar11,uVar12);
  }
  uVar12 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_0391f968(uVar12,0,0);
  if ((uVar8 & 1) == 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x68);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = FUN_03922f24(uVar12,0,0);
    if ((uVar8 & 1) != 0) {
      uVar12 = *(undefined8 *)(param_1 + 0x60);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_0391f968(uVar12,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(char *)(param_1 + 0x80) != '\0') {
          if (*(int *)(*(long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_038f336c(*(undefined8 *)PTR_DAT_03d85eb0,0);
        }
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x60);
        thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x68));
      }
    }
    uVar12 = *(undefined8 *)(param_1 + 0x78);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    puVar2 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
    uVar8 = FUN_03922f24(uVar12,0,0);
    if ((uVar8 & 1) != 0) {
      uVar12 = *(undefined8 *)(param_1 + 0x70);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_0391f968(uVar12,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(char *)(param_1 + 0x80) != '\0') {
          if (*(int *)(*(long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_038f336c(*(undefined8 *)PTR_DAT_03d85eb8,0);
        }
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
        thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x78));
      }
    }
    **(long **)(*(long *)puVar3 + 0xb8) = param_1;
    thunk_FUN_01b4f09c(*(undefined8 *)(*(long *)puVar3 + 0xb8),param_1);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03fed3d9 == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
      DAT_03fed3d9 = '\x01';
    }
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar9 = *(long *)puVar2;
    }
    uVar12 = **(undefined8 **)(lVar9 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    uVar8 = FUN_03923030(uVar12,0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03fed3d9 == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
        DAT_03fed3d9 = '\x01';
      }
      lVar9 = *(long *)puVar2;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar9 = *(long *)puVar2;
      }
      if (**(long **)(lVar9 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_03238be4(**(long **)(lVar9 + 0xb8),param_1,0);
    }
    puVar7 = PTR_DAT_03d85e98;
    puVar6 = PTR_DAT_03d85e90;
    puVar5 = PTR_DAT_03d85e88;
    puVar4 = PTR_DAT_03d85e80;
    puVar2 = PTR_DAT_03d85e78;
    puVar3 = StringLiteral_5575;
    puVar1 = Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__;
    FUN_03293564(param_1,*(undefined8 *)(param_1 + 0x58));
    uVar12 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
    FUN_02518558(uVar12,param_1,*(undefined8 *)puVar4,0);
    FUN_03292f0c(param_1,uVar12);
    uVar12 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
    FUN_02fd7524(uVar12,param_1,*(undefined8 *)puVar2,0);
    FUN_0329306c(param_1,uVar12);
    uVar12 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
    FUN_02fd7524(uVar12,param_1,*(undefined8 *)puVar5,0);
    FUN_032931a4(param_1,uVar12);
    uVar12 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
    FUN_02fd7524(uVar12,param_1,*(undefined8 *)puVar7,0);
    FUN_032932dc(param_1,uVar12);
    uVar12 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
    FUN_02fd7524(uVar12,param_1,*(undefined8 *)puVar6,0);
    FUN_03293414(param_1,uVar12);
    return;
  }
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  FUN_01853f74();
  FUN_03923a90(param_1,0);
  thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_4__);
  uVar12 = thunk_FUN_01afaadc();
  uVar10 = thunk_FUN_01ad9084(PTR_DAT_03d85ec0);
  FUN_03076790(uVar12,uVar10,0);
  uVar10 = thunk_FUN_01ad9084(PTR_DAT_03d85ec8);
                    /* WARNING: Subroutine does not return */
  FUN_01b48050(uVar12,uVar10);
}


