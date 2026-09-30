/*
FUNCTION_NAME: FUN_01cb43c4
ENTRY_POINT: 01cb43c4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_01cb43c4(long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long local_58;
  undefined8 local_48;
  
  if ((DAT_03feda13 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_998);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_TypeUtility_<>c_<GetDictionaryItemType>b__25_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_1026);
    thunk_FUN_01ad9084(StringLiteral_1027);
    thunk_FUN_01ad9084(StringLiteral_1028);
    thunk_FUN_01ad9084(StringLiteral_1029);
    thunk_FUN_01ad9084(StringLiteral_1030);
    thunk_FUN_01ad9084(StringLiteral_1031);
    thunk_FUN_01ad9084(Method_Unity_Properties_TypeUtility_<>c_<_cctor>b__11_1__);
    thunk_FUN_01ad9084(StringLiteral_1032);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_ProBuilder_MeshOperations_UVEditing_<>c_<ProjectFacesAuto>b__8_1__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feda13 = 1;
  }
  local_48 = 0;
  local_58 = 0;
  if ((((param_2 == 0) || (lVar4 = FUN_0391c2b8(param_2,0), lVar4 == 0)) ||
      (lVar5 = FUN_0391fab4(lVar4,0), param_3 == 0)) ||
     (uVar6 = FUN_0391c27c(param_3,0),
     puVar3 = Method_UnityEngine_ProBuilder_MeshOperations_UVEditing_<>c_<ProjectFacesAuto>b__8_1__,
     puVar2 = 
     Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
     , puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__, lVar5 == 0))
  goto LAB_01cb47e0;
  FUN_03929660(lVar5,uVar6,1,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
  uVar6 = FUN_01ed712c(lVar4,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  puVar2 = StringLiteral_998;
  if ((uVar7 & 1) == 0) {
    FUN_03923b4c(uVar6,0);
  }
  else {
    FUN_03923a90();
  }
  plVar8 = (long *)FUN_01e8a9f8(param_2,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  uVar7 = FUN_03922f24(plVar8,0,0);
  if (((uVar7 & 1) == 0) || (*(char *)(param_1 + 0x24) == '\0')) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_0391f968(plVar8,0,0);
    if ((uVar7 & 1) != 0) {
      if (((param_4 == 0) || (lVar5 = *(long *)(param_4 + 0x10), lVar5 == 0)) ||
         (plVar8 == (long *)0x0)) goto LAB_01cb47e0;
      *(undefined4 *)((long)plVar8 + 0x5c) = *(undefined4 *)(lVar5 + 0x5c);
      *(undefined8 *)((long)plVar8 + 100) = *(undefined8 *)(lVar5 + 100);
      if (*(long *)(param_4 + 0x10) == 0) goto LAB_01cb47e0;
      plVar8[10] = *(long *)(*(long *)(param_4 + 0x10) + 0x50);
      goto LAB_01cb4634;
    }
  }
  else {
    plVar8 = (long *)FUN_01ed7044(lVar4,*(undefined8 *)StringLiteral_1030);
    if ((param_4 == 0) || (plVar8 == (long *)0x0)) goto LAB_01cb47e0;
    (**(code **)(*plVar8 + 0x198))
              (plVar8,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(*plVar8 + 0x1a0));
LAB_01cb4634:
    *(undefined4 *)(plVar8 + 0x13) = 1;
  }
  if (*(char *)(param_1 + 0x24) != '\0') {
    uVar7 = FUN_01e8b8bc(param_1,&local_48,
                         *(undefined8 *)
                          Method_Unity_VisualScripting_TypeUtility_<>c_<GetDictionaryItemType>b__25_0__
                        );
    if ((uVar7 & 1) != 0) {
      uVar6 = FUN_01ed712c(lVar4,*(undefined8 *)
                                  Method_Unity_Properties_TypeUtility_<>c_<_cctor>b__11_1__);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      uVar7 = FUN_03922f24(uVar6,0,0);
      if ((uVar7 & 1) != 0) {
        lVar5 = FUN_01ed7044(lVar4,*(undefined8 *)StringLiteral_1028);
        if (lVar5 == 0) goto LAB_01cb47e0;
        FUN_01cb7048(lVar5,local_48);
      }
    }
    uVar7 = FUN_01e8b8bc(param_1,&local_58,*(undefined8 *)StringLiteral_1026);
    if ((uVar7 & 1) != 0) {
      uVar6 = FUN_01ed712c(lVar4,*(undefined8 *)StringLiteral_1032);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      uVar7 = FUN_03922f24(uVar6,0,0);
      if ((uVar7 & 1) != 0) {
        lVar5 = FUN_01ed7044(lVar4,*(undefined8 *)StringLiteral_1029);
        if ((lVar5 == 0) || (local_58 == 0)) goto LAB_01cb47e0;
        *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(local_58 + 0x20);
        *(undefined4 *)(lVar5 + 0x28) = *(undefined4 *)(local_58 + 0x28);
        *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)(local_58 + 0x2c);
      }
    }
    uVar6 = FUN_01ed712c(lVar4,*(undefined8 *)StringLiteral_1031);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    uVar7 = FUN_03922f24(uVar6,0,0);
    if ((uVar7 & 1) != 0) {
      lVar4 = FUN_01ed7044(lVar4,*(undefined8 *)StringLiteral_1027);
      if (lVar4 == 0) {
LAB_01cb47e0:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_1 + 0x20);
      *(undefined1 *)(lVar4 + 0x25) = *(undefined1 *)(param_1 + 0x25);
      *(undefined1 *)(lVar4 + 0x26) = *(undefined1 *)(param_1 + 0x26);
    }
  }
  return;
}


