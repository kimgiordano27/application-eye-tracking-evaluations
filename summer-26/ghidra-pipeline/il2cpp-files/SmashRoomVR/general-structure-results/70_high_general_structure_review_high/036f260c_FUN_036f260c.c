/*
FUNCTION_NAME: FUN_036f260c
ENTRY_POINT: 036f260c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


long FUN_036f260c(long param_1,undefined4 param_2,long param_3,undefined4 param_4,undefined4 param_5
                 ,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_03d9cb18;
  if ((DAT_03ff7639 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d9cb10);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb18);
    thunk_FUN_01ad9084(PTR_DAT_03d9c920);
    DAT_03ff7639 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar5 = FUN_036d1ff4(param_2,param_3,0,param_4,param_5,param_6,0);
  if (lVar5 != 0) {
    return lVar5;
  }
  if (param_3 != 0) {
    lVar5 = *(long *)(param_3 + 0x138);
    if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x18))) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar5 = FUN_036d2514(param_2,param_3,lVar5,1,param_4,param_5,param_6,0);
      if (lVar5 != 0) {
        return lVar5;
      }
    }
    iVar3 = FUN_036c1bb4(param_3,0);
    if (*(long *)(param_1 + 0xf8) != 0) {
      iVar4 = FUN_036c1bb4(*(long *)(param_1 + 0xf8),0);
      if (iVar3 != iVar4) {
        uVar8 = *(undefined8 *)(param_1 + 0xf8);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar5 = FUN_036d1ff4(param_2,uVar8,0,param_4,param_5,param_6,0);
        if (lVar5 != 0) {
          *(undefined4 *)(param_1 + 0x120) = 0;
          puVar2 = PTR_DAT_03d9c920;
          lVar7 = *(long *)PTR_DAT_03d9c920;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar7 = *(long *)puVar2;
          }
          lVar7 = **(long **)(lVar7 + 0xb8);
          if (lVar7 != 0) {
            if (*(int *)(lVar7 + 0x18) != 0) {
              *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(lVar7 + 0x38);
              thunk_FUN_01b4f09c(param_1 + 0x118);
              return lVar5;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          goto LAB_036f29f0;
        }
        if (*(long *)(param_1 + 0xf8) == 0) goto LAB_036f29f0;
        lVar5 = *(long *)(*(long *)(param_1 + 0xf8) + 0x138);
        if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x18))) {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          lVar5 = FUN_036d2514(param_2,param_3,lVar5,1,param_4,param_5,param_6,0);
          if (lVar5 != 0) {
            return lVar5;
          }
        }
      }
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      uVar8 = *(undefined8 *)(param_1 + 0x1b0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_0391f968(uVar8,0,0);
      if ((uVar6 & 1) != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x1b0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar5 = FUN_036d2778(param_2,uVar8,1,0);
        if (lVar5 != 0) {
          return lVar5;
        }
      }
      lVar5 = FUN_036fba04(0);
      if (lVar5 != 0) {
        lVar5 = FUN_036fba04(0);
        if (lVar5 == 0) goto LAB_036f29f0;
        if (0 < *(int *)(lVar5 + 0x18)) {
          uVar8 = FUN_036fba04(0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar2);
          }
          lVar5 = FUN_036d2514(param_2,param_3,uVar8,1,param_4,param_5,param_6,0);
          if (lVar5 != 0) {
            return lVar5;
          }
        }
      }
      uVar8 = FUN_036fb8e4(0);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar5);
      }
      uVar6 = FUN_0391f968(uVar8,0,0);
      if ((uVar6 & 1) != 0) {
        uVar8 = FUN_036fb8e4(0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        lVar5 = FUN_036d1ff4(param_2,uVar8,1,param_4,param_5,param_6,0);
        if (lVar5 != 0) {
          return lVar5;
        }
      }
      uVar8 = FUN_036fba3c(0);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar5);
      }
      uVar6 = FUN_0391f968(uVar8,0,0);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      uVar8 = FUN_036fba3c(0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar2);
      }
      lVar5 = FUN_036d2778(param_2,uVar8,1,0);
      return lVar5;
    }
  }
LAB_036f29f0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


