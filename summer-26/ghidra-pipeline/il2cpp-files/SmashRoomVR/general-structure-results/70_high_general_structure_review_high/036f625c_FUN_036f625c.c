/*
FUNCTION_NAME: FUN_036f625c
ENTRY_POINT: 036f625c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_3
*/


void FUN_036f625c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  
  if ((DAT_03ff764b & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d9da90);
    thunk_FUN_01ad9084(PTR_DAT_03d9d8d0);
    thunk_FUN_01ad9084(PTR_DAT_03d9d8d8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb20);
    DAT_03ff764b = 1;
  }
  puVar2 = PTR_DAT_03d9d8d8;
  puVar1 = PTR_DAT_03d9cb20;
  if (param_1 != 0) {
    iVar3 = FUN_03922ce0(param_1,0);
    iVar7 = 0;
    while( true ) {
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar5 = *(long *)puVar1;
      }
      lVar6 = **(long **)(lVar5 + 0xb8);
      if (lVar6 == 0) goto LAB_036f6448;
      if (*(int *)(lVar6 + 0x18) <= iVar7) {
        return;
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = **(long **)(*(long *)puVar1 + 0xb8);
        if (lVar6 == 0) goto LAB_036f6448;
      }
      lVar5 = FUN_02b59714(lVar6,iVar7,*(undefined8 *)puVar2);
      if ((lVar5 == 0) || (*(long *)(lVar5 + 0x18) == 0)) goto LAB_036f6448;
      iVar4 = FUN_03922ce0(*(long *)(lVar5 + 0x18),0);
      if (iVar4 == iVar3) break;
      iVar7 = iVar7 + 1;
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar5 = *(long *)puVar1;
    }
    if ((**(long **)(lVar5 + 0xb8) != 0) &&
       (lVar5 = FUN_02b59714(**(long **)(lVar5 + 0xb8),iVar7,*(undefined8 *)puVar2), lVar5 != 0)) {
      lVar6 = *(long *)puVar1;
      iVar3 = *(int *)(lVar5 + 0x20);
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *(long *)puVar1;
      }
      if ((**(long **)(lVar6 + 0xb8) != 0) &&
         (lVar5 = FUN_02b59714(**(long **)(lVar6 + 0xb8),iVar7,*(undefined8 *)puVar2), lVar5 != 0))
      {
        if (1 < iVar3) {
          *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + -1;
          return;
        }
        uVar8 = *(undefined8 *)(lVar5 + 0x18);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        FUN_03923b4c(uVar8,0);
        if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
          FUN_02b5b0dc(**(long **)(*(long *)puVar1 + 0xb8),iVar7,*(undefined8 *)PTR_DAT_03d9da90);
          return;
        }
      }
    }
  }
LAB_036f6448:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


