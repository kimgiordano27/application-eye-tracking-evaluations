/*
FUNCTION_NAME: FUN_03b23494
ENTRY_POINT: 03b23494
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_14;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03b2369c) */

void FUN_03b23494(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  
  if ((DAT_03ffdb60 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03db6eb0);
    thunk_FUN_01ad9084(StringLiteral_3439);
    DAT_03ffdb60 = 1;
  }
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (uVar3 = FUN_03b22e48(param_1,*(undefined8 *)(param_1 + 0x28),param_2,0), (uVar3 & 1) == 0)) {
    return;
  }
  if (param_2 != 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x50);
    uVar4 = FUN_0391c2b8(param_1,0);
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar3 = FUN_03922f24(uVar9,uVar4,0);
    if ((uVar3 & 1) != 0) {
      uVar9 = *(undefined8 *)(param_2 + 0xa0);
      uVar4 = FUN_0391c2b8(param_1,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar2);
      }
      uVar3 = FUN_0391f968(uVar9,uVar4,0);
      puVar2 = StringLiteral_3439;
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_03b23698;
        iVar1 = *(int *)(*(long *)(param_1 + 0x28) + 0x10);
        lVar5 = *(long *)StringLiteral_3439;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar5 = *(long *)puVar2;
        }
        if (iVar1 != *(int *)(*(long *)(lVar5 + 0xb8) + 8)) {
          plVar6 = (long *)FUN_02d76b3c(*(undefined8 *)(param_1 + 0x28),
                                        *(undefined8 *)PTR_DAT_03db6eb0);
          FUN_03b22f88(param_1,plVar6,param_2);
          if (plVar6 != (long *)0x0) {
            lVar5 = *plVar6;
            uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar3 != 0) {
              piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) ==
                    *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
                  puVar7 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_03b2365c;
                }
                uVar3 = uVar3 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar3 != 0);
            }
            puVar7 = (undefined8 *)
                     FUN_01ae9f78(plVar6,*(long *)
                                          Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                  ,0);
LAB_03b2365c:
            (*(code *)*puVar7)(plVar6,puVar7[1]);
          }
        }
      }
    }
    lVar5 = *(long *)(param_1 + 0x28);
    if ((lVar5 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      FUN_03a93508(*(undefined4 *)(lVar5 + 0x2c),*(undefined4 *)(lVar5 + 0x30),
                   *(long *)(param_1 + 0x20),*(undefined4 *)(lVar5 + 0x10),0);
      return;
    }
  }
LAB_03b23698:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


