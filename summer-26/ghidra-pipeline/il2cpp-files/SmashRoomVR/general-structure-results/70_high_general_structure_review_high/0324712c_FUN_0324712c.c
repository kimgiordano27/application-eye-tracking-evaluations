/*
FUNCTION_NAME: FUN_0324712c
ENTRY_POINT: 0324712c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


void FUN_0324712c(long param_1,long param_2,undefined1 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_40;
  ulong local_38;
  
  if ((DAT_03ff47c4 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d84520);
    thunk_FUN_01ad9084(Method_System_Collections_Stack_StackEnumerator_get_Current__);
    thunk_FUN_01ad9084(PTR_DAT_03d84528);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d84530);
    thunk_FUN_01ad9084(PTR_DAT_03d84538);
    thunk_FUN_01ad9084(PTR_DAT_03d84540);
    DAT_03ff47c4 = 1;
  }
  puVar3 = PTR_DAT_03d84538;
  puVar2 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
  if (*(int *)(param_1 + 0x20) == 1) {
    if (*(long *)(param_1 + 0xd8) == 0) goto LAB_0324733c;
    uVar4 = FUN_025ec5e8(*(long *)(param_1 + 0xd8),param_2,*(undefined8 *)PTR_DAT_03d84520);
    if ((uVar4 & 1) == 0) {
      if (param_2 == 0) {
LAB_0324733c:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar5 = FUN_01ed712c(param_2,*(undefined8 *)
                                    Method_System_Collections_Stack_StackEnumerator_get_Current__);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar4 = FUN_03922f24(uVar5,0,0);
      if ((uVar4 & 1) == 0) {
        lVar10 = *(long *)(param_1 + 0xe0);
        local_38 = 0;
        local_40 = param_2;
        thunk_FUN_01b4f09c(&local_40,param_2);
        local_38 = CONCAT71(local_38._1_7_,param_3) & 0xffffffffffffff01;
        if (lVar10 != 0) {
          lVar8 = *(long *)(lVar10 + 0x10);
          lVar9 = *(long *)PTR_DAT_03d84528;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
              plVar6 = (long *)(lVar8 + 0x20);
              *plVar6 = local_40;
              *(ulong *)(lVar8 + 0x28) = local_38;
              thunk_FUN_01b4f09c(plVar6,0);
              return;
            }
            FUN_02c2dfec(lVar10,local_40,local_38,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
        goto LAB_0324733c;
      }
      puVar7 = (undefined8 *)PTR_DAT_03d84530;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        puVar7 = (undefined8 *)PTR_DAT_03d84530;
      }
    }
    else {
      puVar7 = (undefined8 *)PTR_DAT_03d84540;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        puVar7 = (undefined8 *)PTR_DAT_03d84540;
      }
    }
    uVar5 = *puVar7;
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = *(undefined8 *)puVar3;
  }
  FUN_038f2e04(uVar5,0);
  return;
}


