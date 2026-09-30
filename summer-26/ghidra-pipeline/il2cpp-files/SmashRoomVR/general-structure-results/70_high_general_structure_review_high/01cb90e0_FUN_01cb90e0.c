/*
FUNCTION_NAME: FUN_01cb90e0
ENTRY_POINT: 01cb90e0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_01cb90e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_03feda2f & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feda2f = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(uVar8,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)
                    Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
      lVar7 = *(long *)(param_1 + 0x20);
      if (lVar7 == 0) goto System_Array__InternalArray__get_Item<GlyphPairAdjustmentRecord>;
      plVar5 = *(long **)(lVar7 + 0x10);
      if ((uVar4 & 1) == 0) {
        if (plVar5 == (long *)0x0)
        goto System_Array__InternalArray__get_Item<GlyphPairAdjustmentRecord>;
        (**(code **)(*plVar5 + 0x1b8))(plVar5,lVar7,*(undefined8 *)(*plVar5 + 0x1c0));
      }
      else {
        if ((plVar5 == (long *)0x0) || (lVar7 = FUN_0391c2b8(plVar5,0), lVar7 == 0))
        goto System_Array__InternalArray__get_Item<GlyphPairAdjustmentRecord>;
        FUN_0391fda4(lVar7,param_2,*(undefined8 *)(param_1 + 0x20),1,0);
      }
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_0391f968(uVar8,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
        if ((uVar4 & 1) != 0) {
          if (((*(long *)(param_1 + 0x20) == 0) ||
              (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x30), lVar7 == 0)) ||
             (lVar7 = FUN_0391fab4(lVar7,0), lVar7 == 0))
          goto System_Array__InternalArray__get_Item<GlyphPairAdjustmentRecord>;
          iVar2 = FUN_0392a654(lVar7,0);
          if (0 < iVar2) {
            iVar2 = 0;
            do {
              lVar6 = FUN_0392a9fc(lVar7,iVar2,0);
              if ((lVar6 == 0) || (lVar6 = FUN_0391c2b8(lVar6,0), lVar6 == 0))
              goto System_Array__InternalArray__get_Item<GlyphPairAdjustmentRecord>;
              FUN_0391fda4(lVar6,param_2,*(undefined8 *)(param_1 + 0x20),1,0);
              iVar2 = iVar2 + 1;
              iVar3 = FUN_0392a654(lVar7,0);
            } while (iVar2 < iVar3);
          }
        }
      }
      return;
    }
  }
System_Array__InternalArray__get_Item<GlyphPairAdjustmentRecord>:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


