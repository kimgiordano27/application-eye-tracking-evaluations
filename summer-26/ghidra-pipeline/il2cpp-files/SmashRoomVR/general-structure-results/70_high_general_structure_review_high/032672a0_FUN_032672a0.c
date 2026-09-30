/*
FUNCTION_NAME: FUN_032672a0
ENTRY_POINT: 032672a0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


bool FUN_032672a0(undefined8 param_1,undefined8 param_2,long *param_3,long param_4,int param_5,
                 undefined4 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 local_80;
  undefined8 local_78;
  
  puVar2 = 
  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__;
  if ((DAT_03ff4951 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d84c78);
    thunk_FUN_01ad9084(PTR_DAT_03d84968);
    thunk_FUN_01ad9084(PTR_DAT_03d84ad0);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2992);
    thunk_FUN_01ad9084(PTR_DAT_03d84c68);
    thunk_FUN_01ad9084(PTR_DAT_03d84c80);
    DAT_03ff4951 = 1;
  }
  puVar3 = PTR_DAT_03d84968;
  local_80 = 0;
  local_78 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar9 = FUN_0324cebc(0);
  lVar14 = *(long *)puVar3;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar14);
    lVar14 = *(long *)puVar3;
  }
  uVar10 = FUN_0305fb14(uVar9,**(undefined8 **)(lVar14 + 0xb8),0);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((uVar10 & 1) == 0) {
    return false;
  }
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = FUN_03922f24(param_3,0,0);
  if ((uVar10 & 1) != 0) {
    puVar15 = (undefined8 *)PTR_DAT_03d84c80;
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
      puVar15 = (undefined8 *)PTR_DAT_03d84c80;
    }
LAB_03267434:
    FUN_038f2e04(*puVar15,0);
    return false;
  }
  iVar5 = FUN_03266350();
  puVar4 = PTR_DAT_03d84c78;
  if (iVar5 != 0) {
    puVar15 = (undefined8 *)PTR_DAT_03d84c68;
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
      puVar15 = (undefined8 *)PTR_DAT_03d84c68;
    }
    goto LAB_03267434;
  }
  local_78 = 0;
  uVar9 = **(undefined8 **)(*(long *)PTR_DAT_03d84c78 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = FUN_03922f24(uVar9,0,0);
  if ((uVar10 & 1) == 0) {
    plVar11 = (long *)**(long **)(*(long *)puVar4 + 0xb8);
    if ((plVar11 == (long *)0x0) ||
       (iVar5 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180)),
       param_3 == (long *)0x0)) goto LAB_03267768;
    iVar8 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
    if (iVar5 != iVar8) goto LAB_03267520;
    plVar11 = (long *)**(long **)(*(long *)puVar4 + 0xb8);
    if (plVar11 == (long *)0x0) goto LAB_03267768;
    iVar5 = (**(code **)(*plVar11 + 0x198))(plVar11,*(undefined8 *)(*plVar11 + 0x1a0));
    iVar8 = (**(code **)(*param_3 + 0x198))(param_3,*(undefined8 *)(*param_3 + 0x1a0));
    if (iVar5 != iVar8) goto LAB_03267520;
  }
  else {
    if (param_3 == (long *)0x0) goto LAB_03267768;
LAB_03267520:
    uVar6 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
    uVar7 = (**(code **)(*param_3 + 0x198))(param_3,*(undefined8 *)(*param_3 + 0x1a0));
    uVar9 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_2992);
    FUN_03907774(uVar9,uVar6,uVar7,5,0,0);
    **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar9;
    thunk_FUN_01b4f09c(*(undefined8 *)(*(long *)puVar4 + 0xb8),uVar9);
  }
  uVar9 = FUN_0390acec(0);
  FUN_0390ad14(param_3,0);
  lVar14 = **(long **)(*(long *)puVar4 + 0xb8);
  iVar5 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
  iVar8 = (**(code **)(*param_3 + 0x198))(param_3,*(undefined8 *)(*param_3 + 0x1a0));
  if (lVar14 != 0) {
    FUN_03907fd4(0,0,(float)iVar5,(float)iVar8,lVar14,0,0,0);
    FUN_0390ad14(uVar9,0);
    if (**(long **)(*(long *)puVar4 + 0xb8) != 0) {
      uVar9 = FUN_03907070(**(long **)(*(long *)puVar4 + 0xb8),0,0);
      local_78 = FUN_02f7c218(uVar9,3,0);
      uVar9 = FUN_02f7c128(&local_78,0);
      local_80 = 0;
      if (param_4 == 0) {
        param_5 = 0;
        uVar12 = 0;
      }
      else {
        local_80 = FUN_02f7c218(param_4,3,0);
        uVar12 = FUN_02f7c128(&local_80,0);
        param_5 = param_5 << 2;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar13 = FUN_0324cebc(0);
      puVar2 = PTR_DAT_03d84ad0;
      lVar14 = *(long *)PTR_DAT_03d84ad0;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar14);
        lVar14 = *(long *)puVar2;
      }
      uVar10 = FUN_0305fb14(uVar13,**(undefined8 **)(lVar14 + 0xb8),0);
      if ((uVar10 & 1) == 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        iVar5 = FUN_03267054(param_1,uVar9,uVar12,param_5,param_6,param_7);
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        iVar5 = FUN_03266f90(param_1,param_2,uVar9,uVar12,param_5,param_6,param_7);
      }
      System_RuntimeType__get_UnderlyingSystemType(&local_78,0);
      if (param_4 != 0) {
        System_RuntimeType__get_UnderlyingSystemType(&local_80,0);
      }
      return iVar5 == 0;
    }
  }
LAB_03267768:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


