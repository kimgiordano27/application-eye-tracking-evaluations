/*
FUNCTION_NAME: FUN_02476480
ENTRY_POINT: 02476480
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


void FUN_02476480(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long local_48;
  
  if ((DAT_03feebbe & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_3441);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feebbe = 1;
  }
  local_48 = 0;
  if (param_1 != 0) {
    FUN_029b8578(param_1,param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x68)
                );
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar3 = FUN_025bddd0(*(long *)(param_1 + 0x18),param_2,&local_48,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48));
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_025bdac0(*(long *)(param_1 + 0x18),param_2,
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70));
        lVar7 = local_48;
        puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_0391f968(lVar7,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if ((local_48 != 0) &&
           (FUN_0391b78c(local_48,0,0), puVar2 = StringLiteral_3441, local_48 != 0)) {
          plVar6 = (long *)(local_48 + 0x20);
          lVar7 = *plVar6;
          uVar4 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_3441);
          FUN_0251f5b8(uVar4,param_1,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x58),0);
          lVar7 = FUN_03084da8(lVar7,uVar4,0);
          if (lVar7 == 0) {
            lVar5 = 0;
            *plVar6 = 0;
          }
          else {
            uVar4 = *(undefined8 *)puVar2;
            lVar5 = thunk_FUN_01afa9e0(lVar7,uVar4);
            if (lVar5 == 0) {
LAB_024765ec:
                    /* WARNING: Subroutine does not return */
              FUN_01b4841c(lVar7,uVar4);
            }
            *plVar6 = lVar5;
            uVar4 = *(undefined8 *)puVar2;
            lVar5 = thunk_FUN_01afa9e0(lVar7,uVar4);
            if (lVar5 == 0) goto LAB_024765ec;
          }
          thunk_FUN_01b4f09c(plVar6,lVar5);
          if (local_48 != 0) {
            plVar6 = (long *)(local_48 + 0x28);
            lVar7 = *plVar6;
            uVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
            FUN_0251f5b8(uVar4,param_1,
                         *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x60),0);
            lVar7 = FUN_03084da8(lVar7,uVar4,0);
            if (lVar7 != 0) {
              uVar4 = *(undefined8 *)puVar2;
              lVar5 = thunk_FUN_01afa9e0(lVar7,uVar4);
              if (lVar5 != 0) {
                *plVar6 = lVar5;
                uVar4 = *(undefined8 *)puVar2;
                lVar5 = thunk_FUN_01afa9e0(lVar7,uVar4);
                if (lVar5 != 0) goto LAB_02476690;
              }
                    /* WARNING: Subroutine does not return */
              FUN_01b4841c(lVar7,uVar4);
            }
            lVar5 = 0;
            *plVar6 = 0;
LAB_02476690:
            thunk_FUN_01b4f09c(plVar6,lVar5);
            lVar7 = local_48;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_03923a90(lVar7,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


