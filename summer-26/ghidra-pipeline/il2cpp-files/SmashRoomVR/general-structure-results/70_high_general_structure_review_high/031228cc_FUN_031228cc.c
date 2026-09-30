/*
FUNCTION_NAME: FUN_031228cc
ENTRY_POINT: 031228cc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_5
*/


void FUN_031228cc(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  long local_38;
  
  if ((DAT_03ff1dcd & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13316);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_F0CF66F9B123DCEBB39C38C5D8E4821D4E94DB593889C506BCA0827036F1B7EB
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff1dcd = 1;
  }
  puVar4 = StringLiteral_13316;
  local_38 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_78 = 0;
  local_80 = 0;
  uStack_7c = 0;
  plVar12 = *(long **)(param_1 + 0x28);
  if (plVar12 == (long *)0x0) goto LAB_03122e68;
  lVar8 = *plVar12;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_13316) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x11) * 0x10 + 0x138);
        goto LAB_0312299c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)StringLiteral_13316,0x11);
LAB_0312299c:
  uVar9 = (*(code *)*puVar5)(plVar12,puVar5[1]);
  uVar6 = FUN_031223ec(param_1);
  if ((uVar9 & 1) == 0) {
    if (((uVar6 & 1) != 0) || (*(char *)(param_1 + 100) != '\0')) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_03122e68;
      FUN_038fe3fc(*(long *)(param_1 + 0x30),0,0);
    }
  }
  else {
    if (((uVar6 & 1) == 0) && (*(char *)(param_1 + 100) == '\0')) {
      lVar8 = *(long *)(param_1 + 0x30);
      if (lVar8 == 0) goto LAB_03122e68;
      uVar7 = 1;
LAB_03122a18:
      FUN_038fe3fc(lVar8,uVar7,0);
    }
    else {
      uVar9 = FUN_031223ec(param_1);
      if (((uVar9 & 1) != 0) && (*(char *)(param_1 + 100) != '\0')) {
        lVar8 = *(long *)(param_1 + 0x30);
        if (lVar8 == 0) goto LAB_03122e68;
        uVar7 = 0;
        goto LAB_03122a18;
      }
    }
    if (*(char *)(param_1 + 0x38) != '\0') {
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar9 = FUN_0391f968(uVar7,0,0);
      if ((uVar9 & 1) != 0) {
        plVar12 = *(long **)(param_1 + 0x28);
        if (plVar12 == (long *)0x0) goto LAB_03122e68;
        lVar8 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x12) * 0x10 + 0x138);
              goto LAB_03122ab0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar4,0x12);
LAB_03122ab0:
        uVar9 = (*(code *)*puVar5)(plVar12,&local_70,puVar5[1]);
        if ((uVar9 & 1) != 0) {
          if (*(long *)(param_1 + 0x40) == 0) goto LAB_03122e68;
          FUN_03928dd4(local_70 & 0xffffffff,local_70._4_4_,(undefined4)uStack_68,
                       *(long *)(param_1 + 0x40),0);
          if (*(long *)(param_1 + 0x40) == 0) goto LAB_03122e68;
          FUN_03928f54(uStack_68._4_4_,local_60 & 0xffffffff,local_60._4_4_,local_58,
                       *(long *)(param_1 + 0x40),0);
        }
      }
    }
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(char *)(param_1 + 0x39) != '\0') {
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar9 = FUN_0391f968(uVar7,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_03122e68;
        uVar7 = FUN_03928c2c(*(long *)(param_1 + 0x40),0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar9 = FUN_0391f968(uVar7,0,0);
        fVar14 = 1.0;
        if ((uVar9 & 1) != 0) {
          if ((*(long *)(param_1 + 0x40) == 0) ||
             (lVar8 = FUN_03928c2c(*(long *)(param_1 + 0x40),0), lVar8 == 0)) goto LAB_03122e68;
          fVar14 = (float)FUN_0392a7f0(lVar8,0);
        }
        plVar12 = *(long **)(param_1 + 0x28);
        if (plVar12 == (long *)0x0) goto LAB_03122e68;
        lVar8 = *plVar12;
        lVar13 = *(long *)(param_1 + 0x40);
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
              goto LAB_03122be8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar4,4);
LAB_03122be8:
        fVar15 = (float)(*(code *)*puVar5)(plVar12,puVar5[1]);
        if (DAT_03fed258 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed258 = '\x01';
        }
        if (lVar13 == 0) goto LAB_03122e68;
        fVar15 = fVar15 / fVar14;
        lVar8 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        FUN_039293f4(fVar15 * *(float *)(lVar8 + 0xc),fVar15 * *(float *)(lVar8 + 0x10),
                     fVar15 * *(float *)(lVar8 + 0x14),lVar13,0);
      }
    }
    plVar12 = *(long **)(param_1 + 0x28);
    if (plVar12 == (long *)0x0) goto LAB_03122e68;
    lVar8 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
          goto LAB_03122ca8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar4,0xb);
LAB_03122ca8:
    uVar9 = (*(code *)*puVar5)(plVar12,&local_38,puVar5[1]);
    puVar3 = 
    Field_<PrivateImplementationDetails>_F0CF66F9B123DCEBB39C38C5D8E4821D4E94DB593889C506BCA0827036F1B7EB
    ;
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if ((uVar9 & 1) == 0) {
      return;
    }
    iVar11 = 0;
    do {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_03122e68;
      uVar7 = FUN_02b59714(*(long *)(param_1 + 0x50),iVar11,*(undefined8 *)puVar3);
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar8);
      }
      uVar9 = FUN_03922f24(uVar7,0,0);
      if ((uVar9 & 1) == 0) {
        if ((*(long *)(param_1 + 0x50) == 0) ||
           (uVar7 = FUN_02b59714(*(long *)(param_1 + 0x50),iVar11,*(undefined8 *)puVar3),
           local_38 == 0)) goto LAB_03122e68;
        FUN_03173e64(&local_b0,local_38,iVar11,0);
        uStack_88 = uStack_a8;
        local_90 = local_b0;
        uStack_7c = (undefined4)uStack_9c;
        local_78 = (undefined4)((ulong)uStack_9c >> 0x20);
        uStack_84 = uStack_a4;
        local_80 = uStack_a0;
        FUN_03136e6c(uVar7,&local_90,1,0);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != 0x18);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar9 = FUN_0391f968(uVar7,0,0);
    if ((uVar9 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_03122e68;
      lVar8 = FUN_03120f18();
      plVar12 = *(long **)(param_1 + 0x28);
      if (plVar12 == (long *)0x0) goto LAB_03122e68;
      lVar13 = *plVar12;
      uVar1 = *(undefined4 *)(param_1 + 0x60);
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar5 = (undefined8 *)(lVar13 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_03122e08;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar4,4);
LAB_03122e08:
      (*(code *)*puVar5)(plVar12,puVar5[1]);
      if ((lVar8 == 0) || (FUN_038fdc5c(lVar8,uVar1,0), *(long *)(param_1 + 0x48) == 0))
      goto LAB_03122e68;
      FUN_03120f88();
    }
  }
  lVar8 = *(long *)(param_1 + 0x58);
  if (lVar8 != 0) {
    (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
    return;
  }
LAB_03122e68:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


