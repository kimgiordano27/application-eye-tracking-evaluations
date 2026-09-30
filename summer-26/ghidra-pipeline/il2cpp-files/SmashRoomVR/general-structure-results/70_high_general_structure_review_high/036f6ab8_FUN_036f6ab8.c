/*
FUNCTION_NAME: FUN_036f6ab8
ENTRY_POINT: 036f6ab8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_16;validity_or_gating_hits_18;telemetry_or_network_hits_3
*/


void FUN_036f6ab8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined4 local_34;
  
  puVar2 = PTR_DAT_03d9dad8;
  if ((DAT_03ff7650 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9daa0);
    thunk_FUN_01ad9084(PTR_DAT_03d9da90);
    thunk_FUN_01ad9084(PTR_DAT_03d9d8d8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9daa8);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb20);
    thunk_FUN_01ad9084(PTR_DAT_03d9dae0);
    thunk_FUN_01ad9084(PTR_DAT_03d9dad8);
    thunk_FUN_01ad9084(PTR_DAT_03d9dae8);
    thunk_FUN_01ad9084(PTR_DAT_03d9daf0);
    thunk_FUN_01ad9084(PTR_DAT_03d9daf8);
    thunk_FUN_01ad9084(PTR_DAT_03d9db00);
    thunk_FUN_01ad9084(PTR_DAT_03d9db08);
    thunk_FUN_01ad9084(PTR_DAT_03d9db10);
    DAT_03ff7650 = 1;
  }
  local_34 = 0;
  lVar6 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_03081994(lVar6,0);
  puVar4 = PTR_DAT_03d9dae0;
  puVar3 = PTR_DAT_03d9daa8;
  puVar2 = PTR_DAT_03d9cb20;
  if (lVar6 != 0) {
    plVar10 = (long *)(lVar6 + 0x10);
    *plVar10 = param_1;
    thunk_FUN_01b4f09c(plVar10,param_1);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar7 = *(long *)puVar2;
    }
    lVar7 = **(long **)(lVar7 + 0xb8);
    uVar8 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
    FUN_02d7dbc4(uVar8,lVar6,*(undefined8 *)puVar4,0);
    if (lVar7 != 0) {
      iVar5 = FUN_02b5a23c(lVar7,uVar8,*(undefined8 *)PTR_DAT_03d9daa0);
      if (iVar5 == -1) {
        if (*plVar10 != 0) {
          uVar8 = FUN_039230bc(*plVar10,0);
          uVar8 = FUN_02edd6e8(*(undefined8 *)PTR_DAT_03d9db08,uVar8,0);
LAB_036f6f54:
          if (*(int *)(*(long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                              );
          }
          FUN_038f2acc(uVar8,0);
          return;
        }
      }
      else {
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar6 = *(long *)puVar2;
        }
        puVar3 = PTR_DAT_03d9d8d8;
        if ((**(long **)(lVar6 + 0xb8) != 0) &&
           (lVar6 = FUN_02b59714(**(long **)(lVar6 + 0xb8),iVar5,*(undefined8 *)PTR_DAT_03d9d8d8),
           lVar6 != 0)) {
          lVar7 = *(long *)puVar2;
          iVar1 = *(int *)(lVar6 + 0x20);
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar7 = *(long *)puVar2;
          }
          if ((**(long **)(lVar7 + 0xb8) != 0) &&
             (lVar6 = FUN_02b59714(**(long **)(lVar7 + 0xb8),iVar5,*(undefined8 *)puVar3),
             lVar6 != 0)) {
            if (iVar1 < 2) {
              if (*(long *)(lVar6 + 0x18) != 0) {
                uVar8 = FUN_039230bc(*(long *)(lVar6 + 0x18),0);
                if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
                    (lVar6 = FUN_02b59714(**(long **)(*(long *)puVar2 + 0xb8),iVar5,
                                          *(undefined8 *)puVar3), lVar6 != 0)) &&
                   (*(long *)(lVar6 + 0x18) != 0)) {
                  local_34 = FUN_03922ce0(*(long *)(lVar6 + 0x18),0);
                  uVar9 = FUN_0303de64(&local_34,0);
                  uVar8 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9daf0,uVar8,
                                       *(undefined8 *)PTR_DAT_03d9dae8,uVar9,0);
                  if (*(int *)(*(long *)
                                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)
                                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                      );
                  }
                  FUN_038f2acc(uVar8,0);
                  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
                     (lVar6 = FUN_02b59714(**(long **)(*(long *)puVar2 + 0xb8),iVar5,
                                           *(undefined8 *)puVar3), lVar6 != 0)) {
                    uVar8 = *(undefined8 *)(lVar6 + 0x18);
                    if (*(int *)(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298(*(long *)
                                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                        );
                    }
                    FUN_03923b4c(uVar8,0);
                    if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
                      FUN_02b5b0dc(**(long **)(*(long *)puVar2 + 0xb8),iVar5,
                                   *(undefined8 *)PTR_DAT_03d9da90);
                      return;
                    }
                  }
                }
              }
            }
            else {
              *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + -1;
              lVar6 = FUN_01b47fd0(*(undefined8 *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__,5);
              if (lVar6 != 0) {
                if (*(int *)(lVar6 + 0x18) != 0) {
                  *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_03d9daf8;
                  thunk_FUN_01b4f09c();
                  if (((**(long **)(*(long *)puVar2 + 0xb8) == 0) ||
                      (lVar7 = FUN_02b59714(**(long **)(*(long *)puVar2 + 0xb8),iVar5,
                                            *(undefined8 *)puVar3), lVar7 == 0)) ||
                     (*(long *)(lVar7 + 0x18) == 0)) goto LAB_036f6f94;
                  uVar8 = FUN_039230bc(*(long *)(lVar7 + 0x18),0);
                  if (1 < *(uint *)(lVar6 + 0x18)) {
                    *(undefined8 *)(lVar6 + 0x28) = uVar8;
                    thunk_FUN_01b4f09c((undefined8 *)(lVar6 + 0x28),uVar8);
                    if (2 < *(uint *)(lVar6 + 0x18)) {
                      *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_03d9db10;
                      thunk_FUN_01b4f09c();
                      if ((**(long **)(*(long *)puVar2 + 0xb8) == 0) ||
                         (lVar7 = FUN_02b59714(**(long **)(*(long *)puVar2 + 0xb8),iVar5,
                                               *(undefined8 *)puVar3), lVar7 == 0))
                      goto LAB_036f6f94;
                      uVar8 = FUN_0303de64(lVar7 + 0x20,0);
                      if (3 < *(uint *)(lVar6 + 0x18)) {
                        *(undefined8 *)(lVar6 + 0x38) = uVar8;
                        thunk_FUN_01b4f09c((undefined8 *)(lVar6 + 0x38),uVar8);
                        if (4 < *(uint *)(lVar6 + 0x18)) {
                          *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_03d9db00;
                          thunk_FUN_01b4f09c();
                          uVar8 = FUN_02ee6e18(lVar6,0);
                          goto LAB_036f6f54;
                        }
                      }
                    }
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
            }
          }
        }
      }
    }
  }
LAB_036f6f94:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


