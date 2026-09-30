/*
FUNCTION_NAME: FUN_02e1ae60
ENTRY_POINT: 02e1ae60
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_15;telemetry_or_network_hits_3
*/


void FUN_02e1ae60(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_03ff015f & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff015f = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_4 + 0x73) == '\0') {
    return;
  }
  uVar5 = *(undefined8 *)(param_4 + 0x160);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(uVar5,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(long *)(param_4 + 0xa0) != 0) {
    if (*(char *)(*(long *)(param_4 + 0xa0) + 0x6a) == '\0') {
      return;
    }
    if (*(long *)(param_4 + 0x160) != 0) {
      if (*(char *)(*(long *)(param_4 + 0x160) + 0x24) != '\0') {
        if (DAT_03ff000c == '\0') {
          thunk_FUN_01ad9084(StringLiteral_4236);
          DAT_03ff000c = '\x01';
        }
        puVar2 = StringLiteral_4236;
        if (**(long **)(*(long *)StringLiteral_4236 + 0xb8) == 0) goto LAB_02e1b0a0;
        uVar5 = *(undefined8 *)(**(long **)(*(long *)StringLiteral_4236 + 0xb8) + 0x30);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_03923030(uVar5,0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)(param_4 + 0x160) == 0) goto LAB_02e1b0a0;
          lVar4 = FUN_0391c27c(*(long *)(param_4 + 0x160),0);
          if (DAT_03ff000c == '\0') {
            thunk_FUN_01ad9084(StringLiteral_4236);
            DAT_03ff000c = '\x01';
          }
          if ((**(long **)(*(long *)puVar2 + 0xb8) == 0) || (lVar4 == 0)) goto LAB_02e1b0a0;
          FUN_0392a01c(lVar4,*(undefined8 *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x30),0);
        }
      }
      if (*(long *)(param_4 + 0x160) != 0) {
        if (*(int *)(*(long *)(param_4 + 0x160) + 0x20) == 1) {
          return;
        }
        if (*(long *)(param_4 + 0xa0) != 0) {
          uVar5 = FUN_02de1fc4(*(long *)(param_4 + 0xa0),*(undefined8 *)(param_4 + 200),1,0);
          if ((*(long *)(param_4 + 0xa0) != 0) &&
             (lVar4 = FUN_0391c27c(*(long *)(param_4 + 0xa0),0), lVar4 != 0)) {
            uVar6 = FUN_03928d34(lVar4,0);
            uVar7 = param_2;
            uVar8 = param_3;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar3 = FUN_03923030(uVar5,0);
            if ((uVar3 & 1) != 0) {
              if (*(long *)(param_4 + 0x160) == 0) goto LAB_02e1b0a0;
              if (*(int *)(*(long *)(param_4 + 0x160) + 0x20) == 0) {
                if (*(long *)(param_4 + 200) == 0) goto LAB_02e1b0a0;
                uVar6 = FUN_02e1c6f8(*(long *)(param_4 + 200),*(undefined8 *)(param_4 + 0xa0),uVar5,
                                     1);
                param_2 = uVar7;
                param_3 = uVar8;
              }
            }
            if ((*(long *)(param_4 + 0x160) != 0) &&
               (lVar4 = FUN_0391c27c(*(long *)(param_4 + 0x160),0), lVar4 != 0)) {
              FUN_03928dd4(uVar6,param_2,param_3,lVar4,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_02e1b0a0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


