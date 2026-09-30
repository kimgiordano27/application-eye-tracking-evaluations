/*
FUNCTION_NAME: OVRPlugin.OVRP_1_34_0$$ovrp_EnqueueSubmitLayer2
ENTRY_POINT: 0290892c
PROGRAM: vrfs-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
OVRPlugin_OVRP_1_34_0__ovrp_EnqueueSubmitLayer2
          (ulong param_1,ushort *param_2,ulong param_3,undefined8 param_4,ulong param_5,
          undefined8 param_6)

{
  ushort *puVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  uint uVar11;
  long unaff_x19;
  ushort *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long unaff_x29;
  undefined1 auVar16 [16];
  undefined8 auStack_10 [2];
  
  *(undefined8 *)(unaff_x29 + -0x78) = param_6;
  *(undefined8 *)(unaff_x29 + -0x70) = param_4;
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06ddaad8);
    thunk_FUN_0159f088(PTR_DAT_06db2f60);
    thunk_FUN_0159f088(PTR_DAT_06d9bc98);
    thunk_FUN_0159f088(PTR_DAT_06e29960);
    thunk_FUN_0159f088(PTR_DAT_06e58380);
    thunk_FUN_0159f088(PTR_DAT_06ddfe48);
    thunk_FUN_0159f088(PTR_DAT_06e66ff8);
    *(undefined1 *)(unaff_x19 + 0xcc0) = 1;
  }
  uVar15 = param_3 & 0xffffffff00000000;
  uVar13 = param_5 & 0xffffffff00000000;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 **)(unaff_x29 + -0x80) = auStack_10;
  auStack_10[0] = 0;
  if (DAT_0722c535 == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dc26f0);
    DAT_0722c535 = '\x01';
  }
  puVar8 = PTR_DAT_06ddaad8;
  **(undefined4 **)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = 4;
LAB_02908a04:
  puVar12 = param_2;
  if ((int)param_3 == 0) {
    return 1;
  }
  do {
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar13 = FUN_029012a4(puVar12,uVar15 | param_3 & 0xffffffff,*(undefined8 *)(unaff_x29 + -0x70),
                          uVar13 | param_5 & 0xffffffff,unaff_x29 + -0x54,unaff_x29 + -0x58);
    uVar5 = *(uint *)(unaff_x29 + -0x58);
    **(int **)(unaff_x29 + -0x78) = uVar5 + **(int **)(unaff_x29 + -0x78);
    if ((uVar13 & 1) != 0) {
      return 1;
    }
    uVar11 = *(uint *)(unaff_x29 + -0x54);
    lVar14 = *(long *)PTR_DAT_06db2f60;
    if ((uint)param_3 < uVar11) {
      FUN_031db0c8(0);
    }
    if ((*(byte *)(*(long *)(lVar14 + 0x20) + 0x132) & 1) == 0) {
      FUN_015c2790();
    }
    uVar6 = (uint)param_3 - uVar11;
    lVar14 = *(long *)PTR_DAT_06e29960;
    if ((uint)param_5 < uVar5) {
      FUN_031db0c8(0);
    }
    if ((*(byte *)(*(long *)(lVar14 + 0x20) + 0x132) & 1) == 0) {
      FUN_015c2790();
    }
    if (uVar6 == 0) {
LAB_02908df8:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    puVar1 = puVar12 + (int)uVar11;
    uVar4 = *puVar1;
    iVar2 = *(int *)(*(long *)puVar8 + 0xe0);
    *(long *)(unaff_x29 + -0x70) = *(long *)(unaff_x29 + -0x70) + (long)(int)uVar5;
    if (iVar2 == 0) {
      thunk_FUN_016466fc();
    }
    uVar7 = (uint)param_5 - uVar5;
    param_5 = (ulong)uVar7;
    if ((0x20 < uVar4) || ((1L << ((ulong)uVar4 & 0x3f) & 0x100002600U) == 0)) break;
    if (uVar6 != 1) {
      uVar11 = 1;
      while (uVar11 < uVar6) {
        uVar4 = puVar1[(int)uVar11];
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        if ((0x20 < uVar4) || ((1L << ((ulong)uVar4 & 0x3f) & 0x100002600U) == 0)) {
          lVar14 = *(long *)PTR_DAT_06db2f60;
          if (uVar6 < uVar11) {
            FUN_031db0c8(0);
          }
          goto LAB_02908b58;
        }
        uVar11 = uVar11 + 1;
        if (uVar6 == uVar11) goto OVRPlugin_OVRP_1_36_0___cctor;
      }
      goto LAB_02908df8;
    }
OVRPlugin_OVRP_1_36_0___cctor:
    lVar14 = *(long *)PTR_DAT_06db2f60;
    uVar11 = uVar6;
LAB_02908b58:
    if ((*(byte *)(*(long *)(lVar14 + 0x20) + 0x132) & 1) == 0) {
      FUN_015c2790();
    }
    uVar6 = uVar6 - uVar11;
    param_3 = (ulong)uVar6;
    if (uVar5 != ((int)uVar5 / 3) * 3) {
      if (uVar6 == 0) {
        return 1;
      }
      goto LAB_02908dc4;
    }
    uVar15 = 0;
    uVar13 = 0;
    puVar12 = puVar1 + (int)uVar11;
    if (uVar6 == 0) {
      return 1;
    }
  } while( true );
  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar10 = *(undefined8 *)(unaff_x29 + -0x88);
  FUN_02908dfc(puVar1,uVar6,*(undefined8 *)(unaff_x29 + -0x80),uVar10,unaff_x29 + -0x5c,
               unaff_x29 + -0x60);
  puVar9 = PTR_DAT_06e58380;
  uVar5 = *(uint *)(unaff_x29 + -0x60);
  uVar13 = (ulong)uVar5;
  if ((uVar5 & 3) != 0) goto LAB_02908dc4;
  *(ulong *)(unaff_x29 + -0x90) = uVar13;
  lVar14 = *(long *)puVar9;
  if ((uint)uVar10 < uVar5) {
    FUN_031db0c8(0);
    uVar13 = *(ulong *)(unaff_x29 + -0x90);
  }
  if ((*(byte *)(*(long *)(lVar14 + 0x20) + 0x132) & 1) == 0) {
    FUN_015c2790(*(long *)(lVar14 + 0x20),uVar13);
    uVar13 = *(ulong *)(unaff_x29 + -0x90);
  }
  auVar16 = FUN_02aba43c(*(undefined8 *)(unaff_x29 + -0x80),uVar13,*(undefined8 *)PTR_DAT_06e66ff8);
  uVar10 = auVar16._0_8_;
  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
    *(undefined8 *)(unaff_x29 + -0x88) = uVar10;
    thunk_FUN_016466fc();
    uVar10 = *(undefined8 *)(unaff_x29 + -0x88);
  }
  uVar13 = FUN_029012a4(uVar10,auVar16._8_8_,*(undefined8 *)(unaff_x29 + -0x70),param_5,
                        unaff_x29 + -100,unaff_x29 + -0x68);
  if ((uVar13 & 1) == 0) goto LAB_02908dc4;
  iVar2 = **(int **)(unaff_x29 + -0x78);
  *(long *)(unaff_x29 + -0x88) = (long)*(int *)(unaff_x29 + -0x68);
  **(int **)(unaff_x29 + -0x78) = *(int *)(unaff_x29 + -0x68) + iVar2;
  uVar5 = *(uint *)(unaff_x29 + -0x5c);
  lVar14 = *(long *)PTR_DAT_06db2f60;
  if (uVar6 < uVar5) {
    FUN_031db0c8(0);
  }
  if ((*(byte *)(*(long *)(lVar14 + 0x20) + 0x132) & 1) == 0) {
    FUN_015c2790();
  }
  lVar14 = *(long *)PTR_DAT_06e29960;
  if (uVar7 < (uint)*(undefined8 *)(unaff_x29 + -0x88)) {
    FUN_031db0c8(0);
  }
  lVar14 = *(long *)(lVar14 + 0x20);
  *(long *)(unaff_x29 + -0x98) = (long)(int)uVar5;
  bVar3 = *(byte *)(lVar14 + 0x132);
  param_3 = (ulong)(uVar6 - uVar5);
  param_5 = (ulong)(uVar7 - (int)*(long *)(unaff_x29 + -0x88));
  *(long *)(unaff_x29 + -0x70) = *(long *)(unaff_x29 + -0x70) + *(long *)(unaff_x29 + -0x88);
  if ((bVar3 & 1) == 0) {
    FUN_015c2790();
  }
  lVar14 = *(long *)(unaff_x29 + -0x88);
  uVar13 = 0;
  iVar2 = (int)((ulong)(lVar14 * 0x55555556) >> 0x20);
  uVar15 = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x90);
  param_2 = puVar1 + (int)uVar5;
  if ((int)lVar14 != (iVar2 - (iVar2 >> 0x1f)) * 3) {
    if (0 < (int)(uVar6 - uVar5)) {
      puVar12 = puVar12 + *(long *)(unaff_x29 + -0x98) + (long)(int)uVar11;
      do {
        uVar4 = *puVar12;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        if ((0x20 < uVar4) || ((1L << ((ulong)uVar4 & 0x3f) & 0x100002600U) == 0)) {
LAB_02908dc4:
          **(undefined4 **)(unaff_x29 + -0x78) = 0;
          return 0;
        }
        puVar12 = puVar12 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    return 1;
  }
  goto LAB_02908a04;
}


