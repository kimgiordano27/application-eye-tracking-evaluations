/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Shutdown
ENTRY_POINT: 02908d54
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_Media_Shutdown(undefined8 param_1)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined1 in_ZR;
  undefined8 uVar7;
  uint uVar8;
  long unaff_x19;
  ushort *puVar9;
  uint unaff_w20;
  ulong uVar10;
  ulong unaff_x21;
  long *unaff_x22;
  ushort *unaff_x23;
  ulong unaff_x24;
  uint unaff_w25;
  long lVar11;
  ushort *unaff_x26;
  long unaff_x28;
  long unaff_x29;
  undefined1 auVar12 [16];
  
code_r0x02908d54:
  *(undefined8 *)(unaff_x29 + -0x88) = param_1;
  if ((bool)in_ZR) {
    if (unaff_w25 != 0) {
      do {
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar10 = FUN_029012a4(unaff_x26,unaff_w25,*(undefined8 *)(unaff_x29 + -0x70),
                              unaff_x21 | unaff_w20,unaff_x29 + -0x54,unaff_x29 + -0x58);
        uVar4 = *(uint *)(unaff_x29 + -0x58);
        **(int **)(unaff_x29 + -0x78) = uVar4 + **(int **)(unaff_x29 + -0x78);
        if ((uVar10 & 1) != 0) {
          return 1;
        }
        uVar5 = *(uint *)(unaff_x29 + -0x54);
        unaff_x19 = (long)(int)uVar5;
        lVar11 = *(long *)PTR_DAT_06db2f60;
        if (unaff_w25 < uVar5) {
          FUN_031db0c8(0);
        }
        if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x132) & 1) == 0) {
          FUN_015c2790();
        }
        uVar5 = unaff_w25 - uVar5;
        lVar11 = *(long *)PTR_DAT_06e29960;
        if (unaff_w20 < uVar4) {
          FUN_031db0c8(0);
        }
        if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x132) & 1) == 0) {
          FUN_015c2790();
        }
        if (uVar5 == 0) {
LAB_02908df8:
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        puVar9 = unaff_x26 + unaff_x19;
        uVar3 = *puVar9;
        iVar1 = *(int *)(*unaff_x22 + 0xe0);
        *(long *)(unaff_x29 + -0x70) = *(long *)(unaff_x29 + -0x70) + (long)(int)uVar4;
        if (iVar1 == 0) {
          thunk_FUN_016466fc();
        }
        unaff_w20 = unaff_w20 - uVar4;
        if ((0x20 < uVar3) || ((unaff_x28 << ((ulong)uVar3 & 0x3f) & unaff_x24) == 0))
        goto LAB_02908bc4;
        if (uVar5 != 1) {
          uVar8 = 1;
          while (uVar8 < uVar5) {
            uVar3 = puVar9[(int)uVar8];
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            if ((0x20 < uVar3) || ((unaff_x28 << ((ulong)uVar3 & 0x3f) & unaff_x24) == 0)) {
              lVar11 = *(long *)PTR_DAT_06db2f60;
              if (uVar5 < uVar8) {
                FUN_031db0c8(0);
              }
              goto LAB_02908b58;
            }
            uVar8 = uVar8 + 1;
            if (uVar5 == uVar8) goto OVRPlugin_OVRP_1_36_0___cctor;
          }
          goto LAB_02908df8;
        }
OVRPlugin_OVRP_1_36_0___cctor:
        lVar11 = *(long *)PTR_DAT_06db2f60;
        uVar8 = uVar5;
LAB_02908b58:
        if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x132) & 1) == 0) {
          FUN_015c2790();
        }
        unaff_w25 = uVar5 - uVar8;
        if (uVar4 != ((int)uVar4 / 3) * 3) {
          if (unaff_w25 == 0) {
            return 1;
          }
          goto LAB_02908dc4;
        }
        unaff_x21 = 0;
        unaff_x26 = puVar9 + (int)uVar8;
        if (unaff_w25 == 0) {
          return 1;
        }
      } while( true );
    }
  }
  else if (0 < (int)unaff_w25) {
    uVar10 = (ulong)unaff_w25;
    puVar9 = unaff_x23 + *(long *)(unaff_x29 + -0x98) + unaff_x19;
    while( true ) {
      uVar3 = *puVar9;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      if ((0x20 < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x100002600U) == 0)) break;
      puVar9 = puVar9 + 1;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return 1;
      }
    }
LAB_02908dc4:
    **(undefined4 **)(unaff_x29 + -0x78) = 0;
    return 0;
  }
  return 1;
LAB_02908bc4:
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar7 = *(undefined8 *)(unaff_x29 + -0x88);
  FUN_02908dfc(puVar9,uVar5,*(undefined8 *)(unaff_x29 + -0x80),uVar7,unaff_x29 + -0x5c,
               unaff_x29 + -0x60);
  puVar6 = PTR_DAT_06e58380;
  uVar4 = *(uint *)(unaff_x29 + -0x60);
  uVar10 = (ulong)uVar4;
  if ((uVar4 & 3) != 0) goto LAB_02908dc4;
  *(ulong *)(unaff_x29 + -0x90) = uVar10;
  lVar11 = *(long *)puVar6;
  if ((uint)uVar7 < uVar4) {
    FUN_031db0c8(0);
    uVar10 = *(ulong *)(unaff_x29 + -0x90);
  }
  if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x132) & 1) == 0) {
    FUN_015c2790(*(long *)(lVar11 + 0x20),uVar10);
    uVar10 = *(ulong *)(unaff_x29 + -0x90);
  }
  auVar12 = FUN_02aba43c(*(undefined8 *)(unaff_x29 + -0x80),uVar10,*(undefined8 *)PTR_DAT_06e66ff8);
  uVar7 = auVar12._0_8_;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    *(undefined8 *)(unaff_x29 + -0x88) = uVar7;
    thunk_FUN_016466fc();
    uVar7 = *(undefined8 *)(unaff_x29 + -0x88);
  }
  uVar10 = FUN_029012a4(uVar7,auVar12._8_8_,*(undefined8 *)(unaff_x29 + -0x70),unaff_w20,
                        unaff_x29 + -100,unaff_x29 + -0x68);
  if ((uVar10 & 1) == 0) goto LAB_02908dc4;
  iVar1 = **(int **)(unaff_x29 + -0x78);
  *(long *)(unaff_x29 + -0x88) = (long)*(int *)(unaff_x29 + -0x68);
  **(int **)(unaff_x29 + -0x78) = *(int *)(unaff_x29 + -0x68) + iVar1;
  uVar4 = *(uint *)(unaff_x29 + -0x5c);
  lVar11 = *(long *)PTR_DAT_06db2f60;
  if (uVar5 < uVar4) {
    FUN_031db0c8(0);
  }
  if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x132) & 1) == 0) {
    FUN_015c2790();
  }
  lVar11 = *(long *)PTR_DAT_06e29960;
  if (unaff_w20 < (uint)*(undefined8 *)(unaff_x29 + -0x88)) {
    FUN_031db0c8(0);
  }
  lVar11 = *(long *)(lVar11 + 0x20);
  *(long *)(unaff_x29 + -0x98) = (long)(int)uVar4;
  bVar2 = *(byte *)(lVar11 + 0x132);
  unaff_w25 = uVar5 - uVar4;
  unaff_w20 = unaff_w20 - (int)*(long *)(unaff_x29 + -0x88);
  *(long *)(unaff_x29 + -0x70) = *(long *)(unaff_x29 + -0x70) + *(long *)(unaff_x29 + -0x88);
  if ((bVar2 & 1) == 0) {
    FUN_015c2790();
  }
  unaff_x21 = 0;
  iVar1 = (int)((ulong)(*(long *)(unaff_x29 + -0x88) * 0x55555556) >> 0x20);
  in_ZR = (int)*(long *)(unaff_x29 + -0x88) == (iVar1 - (iVar1 >> 0x1f)) * 3;
  param_1 = *(undefined8 *)(unaff_x29 + -0x90);
  unaff_x23 = unaff_x26;
  unaff_x26 = puVar9 + (int)uVar4;
  goto code_r0x02908d54;
}


