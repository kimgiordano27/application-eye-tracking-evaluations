/*
FUNCTION_NAME: FUN_03b23208
ENTRY_POINT: 03b23208
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03b233d4) */

void FUN_03b23208(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  
  if ((DAT_03ffdb5f & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2351);
    thunk_FUN_01ad9084(PTR_DAT_03db6ea8);
    thunk_FUN_01ad9084(StringLiteral_3599);
    DAT_03ffdb5f = 1;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (uVar2 = FUN_03b22e48(param_1,*(undefined8 *)(param_1 + 0x28),param_2,1), (uVar2 & 1) != 0)) {
    uVar3 = FUN_03b22938();
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar2 = FUN_0391f968(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = FUN_03b22938();
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x160);
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar5 = FUN_03b273dc(lVar4);
      FUN_03b25a30(lVar4,uVar3,uVar5);
    }
    plVar6 = (long *)FUN_02d76b3c(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_03db6ea8);
    FUN_03b22f88(param_1,plVar6,param_2);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar1 = *(undefined4 *)((long)plVar6 + 0x9c);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)StringLiteral_2351 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03a7e098(uVar1,uVar3,0);
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03b233a8;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ae9f78(plVar6,*(long *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03b233a8:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  return;
}


