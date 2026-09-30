/*
FUNCTION_NAME: FUN_02e0cb04
ENTRY_POINT: 02e0cb04
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


void FUN_02e0cb04(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_03ff00ef & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_4545);
    DAT_03ff00ef = 1;
  }
  lVar3 = param_1[0x24];
  (**(code **)(*param_1 + 0x528))(param_1,*(undefined8 *)(*param_1 + 0x530));
  if (lVar3 != 0) {
    FUN_022228a0(lVar3,*(undefined8 *)StringLiteral_4545);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if ((param_1[7] != 0) && (param_1[8] != 0)) {
      lVar3 = *(long *)(param_1[7] + 0x98);
      lVar5 = *(long *)(param_1[8] + 0x98);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(lVar3,0);
      lVar4 = 0;
      if ((uVar2 & 1) != 0) {
        if (lVar3 == 0) goto LAB_02e0cce8;
        lVar4 = *(long *)(lVar3 + 0xa8);
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(lVar5,0);
      lVar3 = 0;
      if ((uVar2 & 1) != 0) {
        if (lVar5 == 0) goto LAB_02e0cce8;
        lVar3 = *(long *)(lVar5 + 0xa8);
      }
      if ((param_1[7] != 0) && (lVar5 = *(long *)(param_1[7] + 0x78), lVar5 != 0)) {
        FUN_03959ef0(*(undefined4 *)((long)param_1 + 0x204),(int)param_1[0x41],
                     *(undefined4 *)((long)param_1 + 0x20c),lVar5,0);
        if ((param_1[8] != 0) && (lVar5 = *(long *)(param_1[8] + 0x78), lVar5 != 0)) {
          FUN_03959ef0((int)param_1[0x42],*(undefined4 *)((long)param_1 + 0x214),(int)param_1[0x43],
                       lVar5,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar2 = FUN_03923030(lVar4,0);
          if ((uVar2 & 1) != 0) {
            if (lVar4 == 0) goto LAB_02e0cce8;
            FUN_03959ef0(*(undefined4 *)((long)param_1 + 0x21c),(int)param_1[0x44],
                         *(undefined4 *)((long)param_1 + 0x224),lVar4,0);
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar2 = FUN_03923030(lVar3,0);
          if ((uVar2 & 1) != 0) {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar2 = FUN_0391f968(lVar3,lVar4,0);
            if ((uVar2 & 1) != 0) {
              if (lVar3 != 0) {
                FUN_03959ef0((int)param_1[0x45],*(undefined4 *)((long)param_1 + 0x22c),
                             (int)param_1[0x46],lVar3,0);
                return;
              }
              goto LAB_02e0cce8;
            }
          }
          return;
        }
      }
    }
  }
LAB_02e0cce8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


