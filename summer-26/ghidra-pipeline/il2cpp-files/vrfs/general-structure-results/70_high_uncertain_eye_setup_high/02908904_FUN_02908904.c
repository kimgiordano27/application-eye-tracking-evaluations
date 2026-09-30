/*
FUNCTION_NAME: FUN_02908904
ENTRY_POINT: 02908904
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_02908904(ushort *param_1,ulong param_2,long param_3,ulong param_4,int *param_5)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ushort *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined8 auStack_c0 [3];
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 *puStack_90;
  int *piStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  piStack_88 = param_5;
  lStack_80 = param_3;
  if ((bRam0000000007233cc0 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06ddaad8);
    thunk_FUN_0159f088(PTR_DAT_06db2f60);
    thunk_FUN_0159f088(PTR_DAT_06d9bc98);
    thunk_FUN_0159f088(PTR_DAT_06e29960);
    thunk_FUN_0159f088(PTR_DAT_06e58380);
    thunk_FUN_0159f088(PTR_DAT_06ddfe48);
    thunk_FUN_0159f088(PTR_DAT_06e66ff8);
    bRam0000000007233cc0 = 1;
  }
  uVar14 = param_2 & 0xffffffff00000000;
  uVar11 = param_4 & 0xffffffff00000000;
  puStack_90 = auStack_c0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  auStack_c0[0] = 0;
  if (DAT_0722c535 == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dc26f0);
    DAT_0722c535 = '\x01';
  }
  puVar5 = PTR_DAT_06ddaad8;
  *piStack_88 = 0;
  uStack_98 = 4;
LAB_02908a04:
  puVar10 = param_1;
  if ((int)param_2 == 0) {
    return 1;
  }
  do {
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar11 = FUN_029012a4(puVar10,uVar14 | param_2 & 0xffffffff,lStack_80,
                          uVar11 | param_4 & 0xffffffff,(long)&uStack_68 + 4,&uStack_68);
    uVar6 = (uint)uStack_68;
    lVar12 = (long)(int)(uint)uStack_68;
    *piStack_88 = (uint)uStack_68 + *piStack_88;
    if ((uVar11 & 1) != 0) {
      return 1;
    }
    uVar3 = uStack_68._4_4_;
    lVar9 = (long)(int)uStack_68._4_4_;
    lVar13 = *(long *)PTR_DAT_06db2f60;
    if ((uint)param_2 < uStack_68._4_4_) {
      FUN_031db0c8(0);
    }
    if ((*(byte *)(*(long *)(lVar13 + 0x20) + 0x132) & 1) == 0) {
      FUN_015c2790();
    }
    uVar3 = (uint)param_2 - uVar3;
    lVar13 = *(long *)PTR_DAT_06e29960;
    if ((uint)param_4 < uVar6) {
      FUN_031db0c8(0);
    }
    if ((*(byte *)(*(long *)(lVar13 + 0x20) + 0x132) & 1) == 0) {
      FUN_015c2790();
    }
    if (uVar3 == 0) {
LAB_02908df8:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    puVar1 = puVar10 + lVar9;
    uVar2 = *puVar1;
    lStack_80 = lStack_80 + lVar12;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar8 = (uint)param_4 - uVar6;
    param_4 = (ulong)uVar8;
    if ((0x20 < uVar2) || ((1L << ((ulong)uVar2 & 0x3f) & 0x100002600U) == 0)) break;
    if (uVar3 != 1) {
      uVar8 = 1;
      while (uVar8 < uVar3) {
        uVar2 = puVar1[(int)uVar8];
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        if ((0x20 < uVar2) || ((1L << ((ulong)uVar2 & 0x3f) & 0x100002600U) == 0)) {
          lVar12 = *(long *)PTR_DAT_06db2f60;
          if (uVar3 < uVar8) {
            FUN_031db0c8(0);
          }
          goto LAB_02908b58;
        }
        uVar8 = uVar8 + 1;
        if (uVar3 == uVar8) goto OVRPlugin_OVRP_1_36_0___cctor;
      }
      goto LAB_02908df8;
    }
OVRPlugin_OVRP_1_36_0___cctor:
    lVar12 = *(long *)PTR_DAT_06db2f60;
    uVar8 = uVar3;
LAB_02908b58:
    if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x132) & 1) == 0) {
      FUN_015c2790();
    }
    uVar3 = uVar3 - uVar8;
    param_2 = (ulong)uVar3;
    if (uVar6 != ((int)uVar6 / 3) * 3) {
      if (uVar3 == 0) {
        return 1;
      }
      goto LAB_02908dc4;
    }
    uVar14 = 0;
    uVar11 = 0;
    puVar10 = puVar1 + (int)uVar8;
    if (uVar3 == 0) {
      return 1;
    }
  } while( true );
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar11 = uStack_98;
  FUN_02908dfc(puVar1,uVar3,puStack_90,uStack_98,(long)&uStack_70 + 4,&uStack_70);
  uStack_a0 = uStack_70 & 0xffffffff;
  if ((uStack_70 & 3) != 0) goto LAB_02908dc4;
  lVar12 = *(long *)PTR_DAT_06e58380;
  if ((uint)uVar11 < (uint)uStack_70) {
    FUN_031db0c8(0);
  }
  if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x132) & 1) == 0) {
    FUN_015c2790(*(long *)(lVar12 + 0x20),uStack_a0);
  }
  auVar15 = FUN_02aba43c(puStack_90,uStack_a0,*(undefined8 *)PTR_DAT_06e66ff8);
  uVar11 = auVar15._0_8_;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    uStack_98 = auVar15._0_8_;
    thunk_FUN_016466fc();
    uVar11 = uStack_98;
  }
  uVar11 = FUN_029012a4(uVar11,auVar15._8_8_,lStack_80,param_4,(long)&uStack_78 + 4,&uStack_78);
  if ((uVar11 & 1) == 0) goto LAB_02908dc4;
  uStack_98 = (ulong)(int)uStack_78;
  *piStack_88 = (int)uStack_78 + *piStack_88;
  uVar6 = uStack_70._4_4_;
  lVar13 = (long)(int)uStack_70._4_4_;
  lVar12 = *(long *)PTR_DAT_06db2f60;
  if (uVar3 < uStack_70._4_4_) {
    FUN_031db0c8(0);
  }
  if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x132) & 1) == 0) {
    FUN_015c2790();
  }
  lVar12 = *(long *)PTR_DAT_06e29960;
  if (uVar8 < (uint)uStack_98) {
    FUN_031db0c8(0);
  }
  param_2 = (ulong)(uVar3 - uVar6);
  lStack_80 = lStack_80 + uStack_98;
  param_4 = (ulong)(uVar8 - (int)uStack_98);
  lStack_a8 = lVar13;
  if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x132) & 1) == 0) {
    FUN_015c2790();
  }
  uVar11 = 0;
  iVar4 = (int)(uStack_98 * 0x55555556 >> 0x20);
  iVar7 = (int)uStack_98;
  uStack_98 = uStack_a0;
  uVar14 = 0;
  param_1 = puVar1 + lVar13;
  if (iVar7 != (iVar4 - (iVar4 >> 0x1f)) * 3) {
    if (0 < (int)(uVar3 - uVar6)) {
      puVar10 = puVar10 + lStack_a8 + lVar9;
      do {
        uVar2 = *puVar10;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        if ((0x20 < uVar2) || ((1L << ((ulong)uVar2 & 0x3f) & 0x100002600U) == 0)) {
LAB_02908dc4:
          *piStack_88 = 0;
          return 0;
        }
        puVar10 = puVar10 + 1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    return 1;
  }
  goto LAB_02908a04;
}


