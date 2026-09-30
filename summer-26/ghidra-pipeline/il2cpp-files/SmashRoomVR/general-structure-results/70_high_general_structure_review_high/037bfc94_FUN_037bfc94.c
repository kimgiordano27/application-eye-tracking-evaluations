/*
FUNCTION_NAME: FUN_037bfc94
ENTRY_POINT: 037bfc94
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


undefined1  [16] FUN_037bfc94(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  if ((DAT_03ff805c & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da3a98);
    thunk_FUN_01ad9084(PTR_DAT_03da3aa0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_3419);
    thunk_FUN_01ad9084(StringLiteral_2840);
    DAT_03ff805c = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                     0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01b4841c(param_2);
    }
  }
  lVar5 = FUN_037bfb98(param_1);
  if (lVar5 != 0) {
    iVar2 = *(int *)(lVar5 + 0x18);
    uVar6 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_3419);
    FUN_037d3224(uVar6,(long)iVar2,0);
    *param_3 = uVar6;
    thunk_FUN_01b4f09c(param_3,uVar6);
    lVar5 = FUN_037bfb98(param_1);
    if (lVar5 != 0) {
      lVar7 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)PTR_DAT_03da3a98;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      puVar4 = StringLiteral_2840;
      if (lVar7 != 0) {
        uVar3 = *(uint *)(lVar5 + 0x18);
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar3 + 1;
          plVar8 = (long *)(lVar7 + (long)(int)uVar3 * 8 + 0x20);
          *plVar8 = (long)param_2;
          thunk_FUN_01b4f09c(plVar8,param_2);
        }
        else {
          FUN_02b599e4(lVar5,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        lVar5 = *(long *)puVar4;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar5 = *(long *)puVar4;
        }
        return *(undefined1 (*) [16])(*(long *)(lVar5 + 0xb8) + 8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


