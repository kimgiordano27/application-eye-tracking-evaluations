/*
FUNCTION_NAME: FUN_032b7004
ENTRY_POINT: 032b7004
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


void FUN_032b7004(ulong param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  byte bVar8;
  long unaff_x20;
  long lVar9;
  long *plVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *unaff_x26;
  long lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(PTR_DAT_03d86d08);
    thunk_FUN_01ad9084(PTR_DAT_03d86d38);
    thunk_FUN_01ad9084(PTR_DAT_03d86d40);
    thunk_FUN_01ad9084(PTR_DAT_03d86d48);
    thunk_FUN_01ad9084(PTR_DAT_03d86d50);
    thunk_FUN_01ad9084(PTR_DAT_03d86d18);
    thunk_FUN_01ad9084(PTR_DAT_03d86d58);
    thunk_FUN_01ad9084(PTR_DAT_03d86d60);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d86da0);
    *(undefined1 *)(unaff_x20 + 0x89e) = 1;
  }
  plVar12 = param_2 + 7;
  lVar9 = *plVar12;
  uVar1 = *(uint *)(param_2 + 4);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(lVar9,0);
  puVar2 = PTR_DAT_03d86da0;
  if ((uVar4 & 1) == 0) {
    lVar9 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    FUN_0391fe00(lVar9,*(undefined8 *)puVar2,0);
    *plVar12 = lVar9;
    thunk_FUN_01b4f09c(plVar12,lVar9);
    if (*plVar12 == 0) goto LAB_032b74b8;
    lVar9 = FUN_0391fab4(*plVar12,0);
    uVar5 = FUN_0391c27c(param_2,0);
    if (lVar9 == 0) goto LAB_032b74b8;
    FUN_03929660(lVar9,uVar5,0,0);
    if (*plVar12 == 0) goto LAB_032b74b8;
    lVar9 = FUN_0391fab4(*plVar12,0);
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    if (lVar9 == 0) goto LAB_032b74b8;
    puVar7 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    FUN_039282dc(*puVar7,puVar7[1],puVar7[2],lVar9,0);
    if (*plVar12 == 0) goto LAB_032b74b8;
    lVar9 = FUN_0391fab4(*plVar12,0);
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    if (lVar9 == 0) goto LAB_032b74b8;
    puVar7 = *(undefined4 **)
              (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
              0xb8);
    FUN_03929060(*puVar7,puVar7[1],puVar7[2],puVar7[3],lVar9,0);
  }
  puVar3 = PTR_DAT_03d86d38;
  puVar2 = PTR_DAT_03d86d18;
  plVar10 = param_2 + 10;
  lVar9 = *plVar10;
  if (lVar9 == 0) {
    uVar4 = (ulong)*(uint *)((long)param_2 + 0x6c);
LAB_032b7214:
    uVar5 = FUN_01b47fd0(*(undefined8 *)PTR_DAT_03d86d58,uVar4);
    lVar9 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_02b592d8(lVar9,uVar5,*(undefined8 *)puVar3);
    *plVar10 = lVar9;
    thunk_FUN_01b4f09c(plVar10,lVar9);
    if (*plVar10 == 0) goto LAB_032b74b8;
    lVar9 = FUN_02b59c0c(*plVar10,*(undefined8 *)PTR_DAT_03d86d08);
    param_2[0x14] = lVar9;
    thunk_FUN_01b4f09c(param_2 + 0x14,lVar9);
    lVar9 = param_2[10];
    if (lVar9 == 0) goto LAB_032b74b8;
  }
  else {
    uVar4 = (ulong)*(uint *)((long)param_2 + 0x6c);
    if ((long)*(int *)(lVar9 + 0x18) != uVar4) goto LAB_032b7214;
  }
  puVar2 = PTR_DAT_03d86d48;
  uVar4 = 0;
  bVar8 = 0;
  lVar16 = 0x40;
  do {
    if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar4) {
      if (*(int *)(lVar9 + 0x18) < 1 || (bool)(bVar8 ^ 1)) {
        return;
      }
      iVar11 = 0;
      goto LAB_032b74d4;
    }
    lVar9 = FUN_02b59714(lVar9,uVar4 & 0xffffffff,*(undefined8 *)puVar2);
    if (lVar9 == 0) {
      lVar13 = *plVar10;
      lVar9 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d86d60);
      FUN_03081994(lVar9,0);
      if (lVar13 == 0) break;
      FUN_02b59768(lVar13,uVar4 & 0xffffffff,lVar9,*(undefined8 *)PTR_DAT_03d86d50);
    }
    lVar13 = param_2[0xf];
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar4) {
LAB_032b75e0:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    if (lVar9 == 0) break;
    plVar14 = (long *)(lVar9 + 0x18);
    lVar15 = *plVar14;
    *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(lVar13 + lVar16 + -0x20);
    *(undefined2 *)(lVar9 + 0x14) = *(undefined2 *)(lVar13 + lVar16 + -0x1c);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_03922f24(lVar15,0,0);
    if ((uVar6 & 1) != 0) {
      uVar5 = (**(code **)(*param_2 + 0x1a8))
                        (param_2,*(undefined4 *)(lVar9 + 0x10),*(undefined8 *)(*param_2 + 0x1b0));
      *(undefined8 *)(lVar9 + 0x18) = uVar5;
      thunk_FUN_01b4f09c(plVar14,uVar5);
      uVar5 = *(undefined8 *)(lVar9 + 0x18);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_03922f24(uVar5,0,0);
      if ((uVar6 & 1) != 0) {
        uVar5 = FUN_032b75ec((int)param_2[4],*(undefined4 *)(lVar9 + 0x10));
        lVar9 = thunk_FUN_01afaadc(*(undefined8 *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
        FUN_0391fe00(lVar9,uVar5,0);
        if (lVar9 == 0) break;
        lVar9 = FUN_0391fab4(lVar9,0);
        *plVar14 = lVar9;
        thunk_FUN_01b4f09c(plVar14,lVar9);
      }
      bVar8 = 1;
    }
    lVar9 = param_2[0xf];
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_032b75e0;
    puVar7 = (undefined4 *)(lVar9 + lVar16);
    uVar20 = puVar7[-6];
    uVar19 = puVar7[-5];
    uVar18 = puVar7[-4];
    uVar17 = puVar7[-3];
    if (*(char *)((long)param_2 + 0x33) != '\0') {
      lVar9 = *plVar14;
      if (uVar1 < 2) {
        FUN_0320e700(0);
      }
      else {
        FUN_0320ba80(puVar7[-2],puVar7[-1],*puVar7,0);
      }
      if (lVar9 == 0) break;
      FUN_039282dc(lVar9,0);
    }
    lVar9 = *plVar14;
    if (uVar1 < 2) {
      FUN_03214d14(0);
    }
    else {
      FUN_0320bd30(uVar20,uVar19,uVar18,uVar17,0);
    }
    if (lVar9 == 0) break;
    FUN_03929060(lVar9,0);
    lVar9 = *plVar10;
    uVar4 = uVar4 + 1;
    lVar16 = lVar16 + 0x24;
  } while (lVar9 != 0);
LAB_032b74b8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
LAB_032b74d4:
  lVar9 = FUN_02b59714(lVar9,iVar11,*(undefined8 *)puVar2);
  if (lVar9 == 0) goto LAB_032b74b8;
  uVar4 = FUN_032b5acc(param_2,(long)*(short *)(lVar9 + 0x14));
  if (((uVar4 & 1) == 0) || ((int)param_2[4] == 2)) {
    if ((*plVar10 == 0) ||
       ((lVar9 = FUN_02b59714(*plVar10,iVar11,*(undefined8 *)puVar2), lVar9 == 0 || (*plVar12 == 0))
       )) goto LAB_032b74b8;
    lVar9 = *(long *)(lVar9 + 0x18);
    uVar5 = FUN_0391fab4(*plVar12,0);
    if (lVar9 == 0) goto LAB_032b74b8;
  }
  else {
    if (((*plVar10 == 0) ||
        (lVar9 = FUN_02b59714(*plVar10,iVar11,*(undefined8 *)puVar2), lVar9 == 0)) ||
       (lVar16 = *plVar10, lVar16 == 0)) goto LAB_032b74b8;
    lVar9 = *(long *)(lVar9 + 0x18);
    lVar13 = FUN_02b59714(lVar16,iVar11,*(undefined8 *)puVar2);
    if (((lVar13 == 0) ||
        (lVar16 = FUN_02b59714(lVar16,(long)*(short *)(lVar13 + 0x14),*(undefined8 *)puVar2),
        lVar16 == 0)) || (lVar9 == 0)) goto LAB_032b74b8;
    uVar5 = *(undefined8 *)(lVar16 + 0x18);
  }
  FUN_03929660(lVar9,uVar5,0,0);
  lVar9 = *plVar10;
  if (lVar9 == 0) goto LAB_032b74b8;
  iVar11 = iVar11 + 1;
  if (*(int *)(lVar9 + 0x18) <= iVar11) {
    return;
  }
  goto LAB_032b74d4;
}


