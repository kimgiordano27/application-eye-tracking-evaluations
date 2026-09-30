/*
FUNCTION_NAME: FUN_032429c0
ENTRY_POINT: 032429c0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_032429c0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  
  puVar2 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  if ((DAT_03ff47a8 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_13__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d84458);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_13551);
    thunk_FUN_01ad9084(PTR_DAT_03d844b0);
    thunk_FUN_01ad9084(PTR_DAT_03d844b8);
    DAT_03ff47a8 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar3 = Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_13__;
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar5 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
  puVar4 = PTR_DAT_03d84458;
  if ((uVar5 & 1) != 0) {
    lVar6 = *(long *)PTR_DAT_03d84458;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *(long *)puVar4;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar2);
    }
    uVar5 = FUN_03922f24(uVar11,0,0);
    if ((uVar5 & 1) != 0) {
      uVar11 = FUN_038feca0(*(undefined8 *)PTR_DAT_03d844b0,0);
      uVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                                );
      FUN_038ff018(uVar7,uVar11,0);
      lVar6 = *(long *)puVar4;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *(long *)puVar4;
      }
      puVar8 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
      *puVar8 = uVar7;
      thunk_FUN_01b4f09c(puVar8,uVar7);
    }
    lVar6 = *(long *)puVar4;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *(long *)puVar4;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar2);
    }
    uVar5 = FUN_03922f24(uVar11,0,0);
    if ((uVar5 & 1) != 0) {
      uVar11 = FUN_038feca0(*(undefined8 *)PTR_DAT_03d844b8,0);
      uVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                                );
      FUN_038ff018(uVar7,uVar11,0);
      lVar6 = *(long *)puVar4;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *(long *)puVar4;
      }
      puVar8 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
      *puVar8 = uVar7;
      thunk_FUN_01b4f09c(puVar8,uVar7);
    }
  }
  uVar11 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar3);
  plVar1 = (long *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = uVar11;
  thunk_FUN_01b4f09c(plVar1,uVar11);
  plVar10 = (long *)(param_1 + 0xf8);
  if (*plVar10 != 0) {
    if (*(long *)(*plVar10 + 0x18) == 0) {
      lVar6 = FUN_01b47fd0(*(undefined8 *)StringLiteral_13551,1);
      *plVar10 = lVar6;
      thunk_FUN_01b4f09c(plVar10,lVar6);
    }
    lVar6 = *plVar1;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_0391f968(lVar6,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    lVar6 = *plVar10;
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_03242d00:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar11 = *(undefined8 *)(lVar6 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_03922f24(uVar11,0,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (*plVar1 != 0) {
        plVar10 = (long *)*plVar10;
        lVar6 = FUN_038fe880(*plVar1,0);
        if ((lVar6 != 0) && (lVar6 = FUN_038ff4d4(lVar6,0), plVar10 != (long *)0x0)) {
          if ((lVar6 != 0) &&
             (lVar9 = thunk_FUN_01afa9e0(lVar6,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)) {
            uVar11 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
            FUN_01b48050(uVar11,0);
          }
          if ((int)plVar10[3] != 0) {
            plVar10[4] = lVar6;
            thunk_FUN_01b4f09c(plVar10 + 4,lVar6);
            return;
          }
          goto LAB_03242d00;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


