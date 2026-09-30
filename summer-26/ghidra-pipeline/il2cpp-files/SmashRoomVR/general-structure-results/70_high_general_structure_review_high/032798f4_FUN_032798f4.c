/*
FUNCTION_NAME: FUN_032798f4
ENTRY_POINT: 032798f4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_14;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_032798f4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long extraout_x1;
  long lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  if ((DAT_03ff5679 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d84f78);
    thunk_FUN_01ad9084(PTR_DAT_03d84f80);
    thunk_FUN_01ad9084(PTR_DAT_03d84f88);
    thunk_FUN_01ad9084(PTR_DAT_03d84f90);
    thunk_FUN_01ad9084(PTR_DAT_03d84f98);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_OVRSpatialAnchor_UnboundAnchor_ValidateLocalization__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d84fa0);
    thunk_FUN_01ad9084(PTR_DAT_03d84fa8);
    DAT_03ff5679 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if (1 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar7 != 0) {
    FUN_03278488(lVar7);
    if (extraout_x1 == *(long *)(lVar7 + 0x70)) {
      uVar9 = *(undefined4 *)(lVar7 + 0x20);
      uVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                );
      FUN_03924d70(uVar9,uVar5,0);
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar5);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038f2acc(*(undefined8 *)PTR_DAT_03d84fa8,0);
    if (*(long *)(lVar7 + 0x60) != 0) {
      FUN_02b5a400(&local_68,*(long *)(lVar7 + 0x60),*(undefined8 *)PTR_DAT_03d84f98);
      puVar2 = PTR_DAT_03d84f80;
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      uStack_48 = uStack_60;
      local_50 = local_68;
      local_40 = local_58;
      while (uVar6 = FUN_02739b98(&local_50,*(undefined8 *)puVar2), lVar3 = local_40,
            (uVar6 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar6 = FUN_0391f968(lVar3,0,0);
        if ((uVar6 & 1) != 0) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_038e8fc4(lVar3,1,0);
        }
      }
      FUN_02739b94(&local_50,*(undefined8 *)PTR_DAT_03d84f78);
      lVar7 = *(long *)(lVar7 + 0x60);
      if (lVar7 != 0) {
        iVar4 = *(int *)(lVar7 + 0x18);
        *(undefined4 *)(lVar7 + 0x18) = 0;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (0 < iVar4) {
          FUN_03062488(*(undefined8 *)(lVar7 + 0x10),0,iVar4,0);
        }
        puVar1 = Method_OVRSpatialAnchor_UnboundAnchor_ValidateLocalization__;
        if (*(int *)(*(long *)Method_OVRSpatialAnchor_UnboundAnchor_ValidateLocalization__ + 0xe0)
            == 0) {
          thunk_FUN_01ac7298();
        }
        iVar4 = FUN_0392f378(0);
        if (0 < iVar4) {
          iVar8 = 0;
          do {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar9 = FUN_0392f4b8(iVar8,0);
            FUN_03930018(uVar9,0);
            iVar8 = iVar8 + 1;
          } while (iVar4 != iVar8);
        }
        FUN_032795f8();
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_0392ff54(*(undefined8 *)PTR_DAT_03d84fa0,0);
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


