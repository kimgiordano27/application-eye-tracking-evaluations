/*
FUNCTION_NAME: FUN_03992c90
ENTRY_POINT: 03992c90
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_17;telemetry_or_network_hits_3
*/


long FUN_03992c90(long param_1,long param_2,undefined4 param_3,long param_4,undefined4 param_5,
                 undefined4 param_6,undefined8 param_7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_03ffc623 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03dacc80);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffc623 = 1;
  }
  if (param_2 != 0) {
    lVar7 = *(long *)(param_2 + 0x68);
    lVar4 = FUN_03977394(param_3,param_4,0,param_5,param_6,param_7,0);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (param_4 == 0) goto LAB_03992f7c;
    lVar4 = *(long *)(param_4 + 0x178);
    if (((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x18))) &&
       (lVar4 = FUN_039778f4(param_3,param_4,lVar4,1,param_5,param_6,param_7,0), lVar4 != 0))
    goto LAB_03992f48;
    iVar2 = FUN_03972440(param_4,0);
    if (*(long *)(param_2 + 0x40) == 0) goto LAB_03992f7c;
    iVar3 = FUN_03972440(*(long *)(param_2 + 0x40),0);
    if (iVar2 != iVar3) {
      lVar4 = FUN_03977394(param_3,*(undefined8 *)(param_2 + 0x40),0,param_5,param_6,param_7,0);
      if (lVar4 != 0) {
        lVar7 = *(long *)(param_1 + 0x15b8);
        *(undefined4 *)(param_1 + 0x78) = 0;
        if (lVar7 == 0) goto LAB_03992f7c;
        if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar7 + 0x38);
        thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x70));
        goto LAB_03992f48;
      }
      if (*(long *)(param_2 + 0x40) == 0) goto LAB_03992f7c;
      lVar4 = *(long *)(*(long *)(param_2 + 0x40) + 0x178);
      if (((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x18))) &&
         (lVar4 = FUN_039778f4(param_3,param_4,lVar4,1,param_5,param_6,param_7,0), lVar4 != 0))
      goto LAB_03992f48;
    }
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar6 = *(undefined8 *)(param_2 + 0x50);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_0391f968(uVar6,0,0);
    if (((uVar5 & 1) != 0) &&
       (lVar4 = FUN_03977ab4(param_3,*(undefined8 *)(param_2 + 0x50),1,0), lVar4 != 0)) {
      return lVar4;
    }
    if (lVar7 != 0) {
      lVar4 = *(long *)(lVar7 + 0x30);
      if (((lVar4 == 0) || (*(int *)(lVar4 + 0x18) < 1)) ||
         (lVar4 = FUN_039778f4(param_3,param_4,lVar4,1,param_5,param_6,param_7,0), lVar4 == 0)) {
        uVar6 = *(undefined8 *)(lVar7 + 0x20);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_0391f968(uVar6,0,0);
        if (((uVar5 & 1) == 0) ||
           (lVar4 = FUN_03977394(param_3,*(undefined8 *)(lVar7 + 0x20),1,param_5,param_6,param_7,0),
           lVar4 == 0)) {
          uVar6 = *(undefined8 *)(lVar7 + 0x48);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar5 = FUN_0391f968(uVar6,0,0);
          if ((uVar5 & 1) == 0) {
            return 0;
          }
          lVar4 = FUN_03977ab4(param_3,*(undefined8 *)(lVar7 + 0x48),1,0);
          return lVar4;
        }
      }
LAB_03992f48:
      FUN_03970100(param_4,param_3,lVar4,0);
      return lVar4;
    }
  }
LAB_03992f7c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


