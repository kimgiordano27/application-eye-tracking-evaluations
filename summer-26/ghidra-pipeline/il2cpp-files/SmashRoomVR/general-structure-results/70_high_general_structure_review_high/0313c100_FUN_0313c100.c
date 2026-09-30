/*
FUNCTION_NAME: FUN_0313c100
ENTRY_POINT: 0313c100
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


void FUN_0313c100(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  if ((DAT_03ff1ef4 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03ff1ef4 = 1;
  }
  uVar4 = FUN_0313baec(param_1);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  plVar7 = (long *)(param_1 + 0x58);
  lVar8 = *plVar7;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_03922f24(lVar8,0,0);
  if ((uVar5 & 1) == 0) {
    plVar6 = (long *)*plVar7;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    iVar3 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
    if (iVar3 == (int)uVar4) {
      plVar6 = (long *)*plVar7;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      iVar3 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
      if (iVar3 == (int)(uVar4 >> 0x20)) {
        if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        bVar2 = FUN_0390ab88(*plVar7,0);
        if (*(byte *)(param_1 + 0x38) == (bVar2 & 1)) {
          return;
        }
      }
    }
  }
  lVar8 = *plVar7;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_0391f968(lVar8,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_038f0ff0(*(long *)(param_1 + 0x60),0,0);
    lVar8 = *plVar7;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03923b4c(lVar8,0);
  }
  lVar8 = thunk_FUN_01afaadc(*(undefined8 *)
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
  FUN_0390c074(lVar8,uVar4 & 0xffffffff,uVar4 >> 0x20,0x18,0,2,0);
  *plVar7 = lVar8;
  thunk_FUN_01b4f09c(plVar7,lVar8);
  if (*plVar7 != 0) {
    FUN_03905eb0(*plVar7,1,0);
    if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_0390abc4(*plVar7,*(undefined1 *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_038f0ff0(*(long *)(param_1 + 0x60),*plVar7,0);
      lVar8 = *(long *)(param_1 + 0x48);
      if (lVar8 != 0) {
        (**(code **)(lVar8 + 0x18))
                  (*(undefined8 *)(lVar8 + 0x40),*plVar7,*(undefined8 *)(lVar8 + 0x28));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


