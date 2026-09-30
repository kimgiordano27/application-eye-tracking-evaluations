/*
FUNCTION_NAME: FUN_01cbe254
ENTRY_POINT: 01cbe254
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_13;telemetry_or_network_hits_4
*/


void FUN_01cbe254(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_03feda5e & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_1076);
    DAT_03feda5e = 1;
  }
  if (param_2 != 0) {
    uVar3 = FUN_01cb8664(param_2);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(long *)(param_2 + 0x10) != 0) {
      uVar4 = FUN_0391c2b8(*(long *)(param_2 + 0x10),0);
      uVar5 = FUN_0391c2b8(param_1,0);
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar3 = FUN_03922f24(uVar4,uVar5,0);
      puVar2 = StringLiteral_1076;
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar7 = *(long *)(param_1 + 0x20);
      if (lVar7 != 0) {
        lVar8 = 4;
        do {
          uVar3 = lVar8 - 4;
          if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar3) {
            return;
          }
          if (*(uint *)(lVar7 + 0x18) <= uVar3) {
LAB_01cbe3a4:
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          uVar4 = *(undefined8 *)(lVar7 + lVar8 * 8);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar6 = FUN_0391f968(uVar4,0,0);
          if ((uVar6 & 1) != 0) {
            lVar7 = *(long *)(param_1 + 0x20);
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_01cbe3a4;
            lVar7 = *(long *)(lVar7 + lVar8 * 8);
            if (lVar7 == 0) break;
            FUN_0391fda4(lVar7,*(undefined8 *)puVar2,param_2,1,0);
          }
          lVar7 = *(long *)(param_1 + 0x20);
          lVar8 = lVar8 + 1;
        } while (lVar7 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


