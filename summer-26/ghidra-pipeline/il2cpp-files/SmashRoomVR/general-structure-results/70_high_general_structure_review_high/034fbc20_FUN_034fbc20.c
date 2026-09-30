/*
FUNCTION_NAME: FUN_034fbc20
ENTRY_POINT: 034fbc20
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


void FUN_034fbc20(long param_1,long param_2,long param_3)

{
  bool bVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  float fVar15;
  
  if ((DAT_03ff6d5e & 1) == 0) {
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
    thunk_FUN_01ad9084(StringLiteral_2535);
    thunk_FUN_01ad9084(StringLiteral_2534);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff6d5e = 1;
  }
  puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (param_3 == 0) goto LAB_034fc494;
  lVar11 = *(long *)(param_3 + 0x50);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_0391f968(lVar11,0,0);
  if ((uVar5 & 1) != 0) {
    if (lVar11 == 0) goto LAB_034fc494;
    uVar6 = FUN_0391fab4(lVar11,0);
    uVar5 = FUN_034fc944(param_1,uVar6);
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
  if ((*(uint *)(param_2 + 4) & 0xfffffffd) == 0) {
    plVar12 = (long *)**(undefined8 **)(*(long *)StringLiteral_2534 + 0xb8);
    if (plVar12 == (long *)0x0) goto LAB_034fc494;
    lVar9 = *plVar12;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_2535) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0x15) * 0x10 + 0x138);
          goto LAB_034fbdd8;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)StringLiteral_2535,0x15);
LAB_034fbdd8:
    uVar14 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    *(undefined4 *)(param_2 + 8) = uVar14;
    if (DAT_03fed2da == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
      DAT_03fed2da = '\x01';
    }
    uVar6 = **(undefined8 **)
              (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ + 0xb8);
    *(undefined1 *)(param_3 + 0x145) = 0;
    *(undefined8 *)(param_3 + 0x10c) = uVar6;
    *(undefined8 *)(param_3 + 0x114) = *(undefined8 *)(param_3 + 0x104);
    memcpy((void *)(param_3 + 0xa0),(void *)(param_3 + 0x50),0x50);
    thunk_FUN_01b4f09c((void *)(param_3 + 0xa0),0);
    *(undefined1 *)(param_3 + 0xf8) = 1;
    *(undefined1 *)(param_3 + 0x144) = 1;
    puVar4 = StringLiteral_362;
    if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_01ed0670(lVar11,*(undefined8 *)PTR_DAT_03d7f730);
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_034fc494;
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x40);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_0391f968(uVar6,uVar13,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_0391f968(uVar6,0,0);
      if (((uVar5 & 1) != 0) || (*(char *)(param_1 + 200) != '\0')) {
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_034fc494;
        FUN_03b25a30(*(long *)(param_1 + 0x38),0,param_3,0);
      }
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03fed7c5 == '\0') {
      thunk_FUN_01ad9084(StringLiteral_362);
      DAT_03fed7c5 = '\x01';
    }
    lVar9 = *(long *)puVar4;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar9 = *(long *)puVar4;
    }
    uVar6 = FUN_01ed03b4(lVar11,param_3,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x18),
                         *(undefined8 *)StringLiteral_4344);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar3);
    }
    uVar5 = FUN_03922f24(uVar6,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_01ed0670(lVar11,*(undefined8 *)StringLiteral_367);
    }
    uVar13 = *(undefined8 *)(param_3 + 0x30);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_03922f24(uVar6,uVar13,0);
    fVar2 = DAT_00b556ec;
    if ((uVar5 & 1) == 0) {
      *(undefined1 *)(param_2 + 0x91) = 0;
      if (0 < *(int *)(param_3 + 0x138)) goto LAB_034fc024;
    }
    else {
      fVar15 = *(float *)(param_2 + 8) - *(float *)(param_3 + 0x134);
      *(bool *)(param_2 + 0x91) = fVar15 <= DAT_00b556ec;
      if ((0 < *(int *)(param_3 + 0x138)) && (fVar2 < fVar15)) {
LAB_034fc024:
        *(undefined8 *)(param_3 + 0x134) = 0;
      }
    }
    FUN_03b261cc(param_3,uVar6,0);
    *(long *)(param_3 + 0x38) = lVar11;
    thunk_FUN_01b4f09c((long *)(param_3 + 0x38),lVar11);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_01ed0670(lVar11,*(undefined8 *)StringLiteral_366);
    puVar7 = (undefined8 *)(param_3 + 0x40);
    *puVar7 = uVar6;
    thunk_FUN_01b4f09c(puVar7,uVar6);
    uVar6 = *puVar7;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_0391f968(uVar6,0,0);
    if ((uVar5 & 1) != 0) {
      uVar6 = *puVar7;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03ff00be == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03ff00be = '\x01';
      }
      lVar9 = *(long *)puVar4;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar9 = *(long *)puVar4;
      }
      FUN_01ecfb94(uVar6,param_3,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x30),
                   *(undefined8 *)StringLiteral_4345);
    }
  }
  puVar4 = StringLiteral_362;
  if (*(int *)(param_2 + 4) - 1U < 2) {
    if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_01ed0670(lVar11,*(undefined8 *)StringLiteral_367);
    uVar13 = *(undefined8 *)(param_3 + 0x28);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar3);
    }
    uVar5 = FUN_03922f24(uVar13,uVar6,0);
    if (((uVar5 & 1) == 0) || (*(char *)(param_3 + 0xf8) == '\0')) {
      bVar1 = true;
    }
    else {
      if (*(char *)(param_2 + 0x91) == '\0') {
        iVar8 = 1;
      }
      else {
        iVar8 = *(int *)(param_3 + 0x138) + 1;
      }
      *(int *)(param_3 + 0x138) = iVar8;
      plVar12 = (long *)**(undefined8 **)(*(long *)StringLiteral_2534 + 0xb8);
      if (plVar12 == (long *)0x0) {
LAB_034fc494:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar9 = *plVar12;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_2535) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0x15) * 0x10 + 0x138);
            goto LAB_034fc21c;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)StringLiteral_2535,0x15);
LAB_034fc21c:
      uVar14 = (*(code *)*puVar7)(plVar12,puVar7[1]);
      bVar1 = false;
      *(undefined4 *)(param_3 + 0x134) = uVar14;
    }
    uVar6 = *(undefined8 *)(param_3 + 0x28);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03fed7c8 == '\0') {
      thunk_FUN_01ad9084(StringLiteral_362);
      DAT_03fed7c8 = '\x01';
    }
    lVar9 = *(long *)puVar4;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar9 = *(long *)puVar4;
    }
    FUN_01ecfb94(uVar6,param_3,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x20),
                 *(undefined8 *)StringLiteral_370);
    if (bVar1) {
      if (*(char *)(param_3 + 0x145) != '\0') {
        uVar6 = *(undefined8 *)(param_3 + 0x40);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_0391f968(uVar6,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (DAT_03ff00bf == '\0') {
            thunk_FUN_01ad9084(StringLiteral_362);
            DAT_03ff00bf = '\x01';
          }
          lVar9 = *(long *)puVar4;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar9 = *(long *)puVar4;
          }
          FUN_01ed03b4(lVar11,param_3,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x50),
                       *(undefined8 *)StringLiteral_4346);
        }
      }
    }
    else {
      uVar6 = *(undefined8 *)(param_3 + 0x28);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03fed7c7 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03fed7c7 = '\x01';
      }
      lVar11 = *(long *)puVar4;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar11 = *(long *)puVar4;
      }
      FUN_01ecfb94(uVar6,param_3,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x28),
                   *(undefined8 *)StringLiteral_369);
    }
    *(undefined1 *)(param_3 + 0xf8) = 0;
    FUN_03b261cc(param_3,0,0);
    *(undefined8 *)(param_3 + 0x38) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(param_3 + 0x38),0);
    if (*(char *)(param_3 + 0x145) != '\0') {
      uVar6 = *(undefined8 *)(param_3 + 0x40);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_0391f968(uVar6,0,0);
      if ((uVar5 & 1) != 0) {
        uVar6 = *(undefined8 *)(param_3 + 0x40);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03fed7c9 == '\0') {
          thunk_FUN_01ad9084(StringLiteral_362);
          DAT_03fed7c9 = '\x01';
        }
        lVar11 = *(long *)puVar4;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar11 = *(long *)puVar4;
        }
        FUN_01ecfb94(uVar6,param_3,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x48),
                     *(undefined8 *)StringLiteral_368);
      }
    }
    *(undefined8 *)(param_3 + 0x40) = 0;
    *(undefined1 *)(param_3 + 0x145) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(param_3 + 0x40),0);
    *(undefined1 *)(param_2 + 0x92) = 0;
  }
  FUN_034fd118(param_2,param_3);
  return;
}


