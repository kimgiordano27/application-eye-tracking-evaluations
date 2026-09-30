/*
FUNCTION_NAME: FUN_01c48b14
ENTRY_POINT: 01c48b14
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_14;telemetry_or_network_hits_3
*/


void FUN_01c48b14(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if ((DAT_03fed5d2 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed5d2 = 1;
  }
  uVar2 = FUN_01c40968(param_4);
  if ((uVar2 & 1) == 0) {
    iVar1 = *(int *)(param_4 + 0x254);
    iVar5 = iVar1 + 1;
    *(int *)(param_4 + 0x254) = iVar5;
    if (iVar1 == 0) {
      uVar6 = *(undefined8 *)(param_4 + 0x248);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_0391f968(uVar6,0,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = FUN_0391c27c(param_4,0);
        if (lVar3 == 0) goto LAB_01c48cdc;
        uVar6 = FUN_03928c2c(lVar3,0);
        *(undefined8 *)(param_4 + 0x220) = uVar6;
        thunk_FUN_01b4f09c(param_4 + 0x220);
        lVar3 = FUN_0391c27c(param_4,0);
        if ((*(long *)(param_4 + 0x248) == 0) ||
           (uVar6 = FUN_0391c27c(*(long *)(param_4 + 0x248),0), lVar3 == 0)) goto LAB_01c48cdc;
        FUN_039294c8(lVar3,uVar6,0);
      }
      iVar5 = *(int *)(param_4 + 0x254);
    }
    if (0 < iVar5) {
      uVar6 = *(undefined8 *)(param_4 + 0x248);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_0391f968(uVar6,0,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = FUN_0391c27c(param_4,0);
        if (lVar3 != 0) {
          uVar6 = FUN_03928c2c(lVar3,0);
          *(undefined8 *)(param_4 + 0x220) = uVar6;
          thunk_FUN_01b4f09c(param_4 + 0x220);
          lVar3 = FUN_0391c27c(param_4,0);
          if ((*(long *)(param_4 + 0x248) != 0) &&
             (uVar6 = FUN_0391c27c(*(long *)(param_4 + 0x248),0), lVar3 != 0)) {
            FUN_039294c8(lVar3,uVar6,0);
            if (*(long *)(param_4 + 0x248) != 0) {
              lVar3 = FUN_0391c27c(*(long *)(param_4 + 0x248),0);
              lVar4 = FUN_0391c27c(param_4,0);
              if ((lVar4 != 0) && (FUN_03928d34(lVar4,0), lVar3 != 0)) {
                uVar7 = FUN_0392a520(lVar3,0);
                *(undefined4 *)(param_4 + 0x228) = uVar7;
                *(undefined4 *)(param_4 + 0x22c) = param_2;
                *(undefined4 *)(param_4 + 0x230) = param_3;
                return;
              }
            }
          }
        }
LAB_01c48cdc:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
  }
  return;
}


