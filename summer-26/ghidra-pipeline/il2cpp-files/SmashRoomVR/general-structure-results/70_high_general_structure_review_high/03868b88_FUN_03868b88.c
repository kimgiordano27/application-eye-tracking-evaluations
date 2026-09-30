/*
FUNCTION_NAME: FUN_03868b88
ENTRY_POINT: 03868b88
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_6
*/


void FUN_03868b88(long param_1,uint param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  
  if ((DAT_03ff86d4 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4346);
    thunk_FUN_01ad9084(StringLiteral_4344);
    thunk_FUN_01ad9084(StringLiteral_368);
    thunk_FUN_01ad9084(StringLiteral_4345);
    thunk_FUN_01ad9084(StringLiteral_369);
    thunk_FUN_01ad9084(StringLiteral_370);
    thunk_FUN_01ad9084(StringLiteral_366);
    thunk_FUN_01ad9084(StringLiteral_367);
    thunk_FUN_01ad9084(PTR_DAT_03d7f730);
    thunk_FUN_01ad9084(StringLiteral_362);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff86d4 = 1;
  }
  if (param_3 != 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x50);
    if ((param_2 & 1) != 0) {
      *(undefined1 *)(param_3 + 0xf8) = 1;
      if (DAT_03fed2da == '\0') {
        thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
        DAT_03fed2da = '\x01';
      }
      uVar10 = **(undefined8 **)
                 (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ +
                 0xb8);
      *(undefined1 *)(param_3 + 0x145) = 0;
      *(undefined8 *)(param_3 + 0x10c) = uVar10;
      *(undefined8 *)(param_3 + 0x114) = *(undefined8 *)(param_3 + 0x104);
      memcpy((void *)(param_3 + 0xa0),(void *)(param_3 + 0x50),0x50);
      thunk_FUN_01b4f09c((void *)(param_3 + 0xa0),0);
      *(undefined1 *)(param_3 + 0x144) = 1;
      puVar2 = StringLiteral_362;
      if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar10 = FUN_01ed0670(uVar6,*(undefined8 *)PTR_DAT_03d7f730);
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_038692b8;
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x40);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar10,uVar8,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_038692b8;
        FUN_03b25a30(*(long *)(param_1 + 0x38),0,param_3,0);
      }
      lVar5 = *(long *)(param_1 + 0xb0);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))
                  (*(undefined8 *)(lVar5 + 0x40),uVar6,param_3,*(undefined8 *)(lVar5 + 0x28));
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03fed7c5 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03fed7c5 = '\x01';
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar5 = *(long *)puVar2;
      }
      uVar10 = FUN_01ed03b4(uVar6,param_3,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18),
                            *(undefined8 *)StringLiteral_4344);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      uVar3 = FUN_03922f24(uVar10,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar10 = FUN_01ed0670(uVar6,*(undefined8 *)StringLiteral_367);
      }
      fVar9 = (float)FUN_03925d1c(0);
      uVar8 = *(undefined8 *)(param_3 + 0x30);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03922f24(uVar10,uVar8,0);
      if (((uVar3 & 1) == 0) || (*(float *)(param_1 + 0x58) <= fVar9 - *(float *)(param_3 + 0x134)))
      {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(param_3 + 0x138) + 1;
      }
      *(int *)(param_3 + 0x138) = iVar4;
      *(float *)(param_3 + 0x134) = fVar9;
      FUN_03b261cc(param_3,uVar10,0);
      *(undefined8 *)(param_3 + 0x38) = uVar6;
      thunk_FUN_01b4f09c((undefined8 *)(param_3 + 0x38),uVar6);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar10 = FUN_01ed0670(uVar6,*(undefined8 *)StringLiteral_366);
      *(undefined8 *)(param_3 + 0x40) = uVar10;
      thunk_FUN_01b4f09c((undefined8 *)(param_3 + 0x40),uVar10);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar10,0,0);
      if ((uVar3 & 1) != 0) {
        lVar5 = *(long *)(param_1 + 0xd0);
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))
                    (*(undefined8 *)(lVar5 + 0x40),uVar10,param_3,*(undefined8 *)(lVar5 + 0x28));
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03ff00be == '\0') {
          thunk_FUN_01ad9084(StringLiteral_362);
          DAT_03ff00be = '\x01';
        }
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar5 = *(long *)puVar2;
        }
        FUN_01ecfb94(uVar10,param_3,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x30),
                     *(undefined8 *)StringLiteral_4345);
      }
    }
    if ((param_2 >> 1 & 1) == 0) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0xb8);
    uVar10 = *(undefined8 *)(param_3 + 0x28);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))
                (*(undefined8 *)(lVar5 + 0x40),uVar10,param_3,*(undefined8 *)(lVar5 + 0x28));
    }
    puVar2 = StringLiteral_362;
    if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03fed7c8 == '\0') {
      thunk_FUN_01ad9084(StringLiteral_362);
      DAT_03fed7c8 = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar5 = *(long *)puVar2;
    }
    FUN_01ecfb94(uVar10,param_3,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x20),
                 *(undefined8 *)StringLiteral_370);
    uVar8 = FUN_01ed0670(uVar6,*(undefined8 *)StringLiteral_367);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar7 = *(undefined8 *)(param_3 + 0x40);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar3 = FUN_03922f24(uVar10,uVar8,0);
    if (((uVar3 & 1) == 0) || (*(char *)(param_3 + 0xf8) == '\0')) {
      if (*(char *)(param_3 + 0x145) != '\0') {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_0391f968(uVar7,0,0);
        if ((uVar3 & 1) != 0) {
          lVar5 = *(long *)(param_1 + 0xf0);
          if (lVar5 != 0) {
            (**(code **)(lVar5 + 0x18))
                      (*(undefined8 *)(lVar5 + 0x40),uVar6,param_3,*(undefined8 *)(lVar5 + 0x28));
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (DAT_03ff00bf == '\0') {
            thunk_FUN_01ad9084(StringLiteral_362);
            DAT_03ff00bf = '\x01';
          }
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar5 = *(long *)puVar2;
          }
          FUN_01ed03b4(uVar6,param_3,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x50),
                       *(undefined8 *)StringLiteral_4346);
        }
      }
    }
    else {
      lVar5 = *(long *)(param_1 + 0xc0);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))
                  (*(undefined8 *)(lVar5 + 0x40),uVar10,param_3,*(undefined8 *)(lVar5 + 0x28));
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03fed7c7 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03fed7c7 = '\x01';
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar5 = *(long *)puVar2;
      }
      FUN_01ecfb94(uVar10,param_3,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x28),
                   *(undefined8 *)StringLiteral_369);
    }
    *(undefined1 *)(param_3 + 0xf8) = 0;
    FUN_03b261cc(param_3,0,0);
    *(undefined8 *)(param_3 + 0x38) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(param_3 + 0x38),0);
    if (*(char *)(param_3 + 0x145) != '\0') {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar7,0,0);
      if ((uVar3 & 1) != 0) {
        lVar5 = *(long *)(param_1 + 0xe8);
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))
                    (*(undefined8 *)(lVar5 + 0x40),uVar7,param_3,*(undefined8 *)(lVar5 + 0x28));
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03fed7c9 == '\0') {
          thunk_FUN_01ad9084(StringLiteral_362);
          DAT_03fed7c9 = '\x01';
        }
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar5 = *(long *)puVar2;
        }
        FUN_01ecfb94(uVar7,param_3,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x48),
                     *(undefined8 *)StringLiteral_368);
      }
    }
    *(undefined1 *)(param_3 + 0x145) = 0;
    *(undefined8 *)(param_3 + 0x40) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(param_3 + 0x40),0);
    return;
  }
LAB_038692b8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


