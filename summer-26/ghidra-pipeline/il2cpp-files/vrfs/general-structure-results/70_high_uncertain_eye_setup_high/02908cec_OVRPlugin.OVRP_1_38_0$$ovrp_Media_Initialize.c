/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Initialize
ENTRY_POINT: 02908cec
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


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_Media_Initialize(undefined8 param_1)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  long unaff_x19;
  ushort *puVar10;
  uint unaff_w20;
  ulong uVar11;
  long unaff_x21;
  long *unaff_x22;
  ushort *unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  ushort *unaff_x26;
  uint unaff_w27;
  long unaff_x28;
  long unaff_x29;
  undefined1 auVar12 [16];
  
code_r0x02908cec:
  if (unaff_w20 < (uint)param_1) {
    FUN_031db0c8(0);
  }
  lVar7 = *(long *)(unaff_x21 + 0x20);
  *(long *)(unaff_x29 + -0x98) = unaff_x25;
  bVar2 = *(byte *)(lVar7 + 0x132);
  uVar5 = unaff_w27 - (int)unaff_x25;
  unaff_w20 = unaff_w20 - (int)*(long *)(unaff_x29 + -0x88);
  *(long *)(unaff_x29 + -0x70) = *(long *)(unaff_x29 + -0x70) + *(long *)(unaff_x29 + -0x88);
  if ((bVar2 & 1) == 0) {
    FUN_015c2790();
  }
  lVar7 = *(long *)(unaff_x29 + -0x88);
  iVar1 = (int)((ulong)(lVar7 * 0x55555556) >> 0x20);
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x90);
  if ((int)lVar7 == (iVar1 - (iVar1 >> 0x1f)) * 3) {
    if (uVar5 != 0) {
      do {
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar11 = FUN_029012a4(unaff_x26,uVar5,*(undefined8 *)(unaff_x29 + -0x70),unaff_w20,
                              unaff_x29 + -0x54,unaff_x29 + -0x58);
        uVar4 = *(uint *)(unaff_x29 + -0x58);
        **(int **)(unaff_x29 + -0x78) = uVar4 + **(int **)(unaff_x29 + -0x78);
        if ((uVar11 & 1) != 0) {
          return 1;
        }
        uVar9 = *(uint *)(unaff_x29 + -0x54);
        unaff_x19 = (long)(int)uVar9;
        lVar7 = *(long *)PTR_DAT_06db2f60;
        if (uVar5 < uVar9) {
          FUN_031db0c8(0);
        }
        if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x132) & 1) == 0) {
          FUN_015c2790();
        }
        unaff_w27 = uVar5 - uVar9;
        lVar7 = *(long *)PTR_DAT_06e29960;
        if (unaff_w20 < uVar4) {
          FUN_031db0c8(0);
        }
        if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x132) & 1) == 0) {
          FUN_015c2790();
        }
        if (unaff_w27 == 0) {
LAB_02908df8:
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        puVar10 = unaff_x26 + unaff_x19;
        uVar3 = *puVar10;
        iVar1 = *(int *)(*unaff_x22 + 0xe0);
        *(long *)(unaff_x29 + -0x70) = *(long *)(unaff_x29 + -0x70) + (long)(int)uVar4;
        if (iVar1 == 0) {
          thunk_FUN_016466fc();
        }
        unaff_w20 = unaff_w20 - uVar4;
        if ((0x20 < uVar3) || ((unaff_x28 << ((ulong)uVar3 & 0x3f) & unaff_x24) == 0))
        goto LAB_02908bc4;
        if (unaff_w27 != 1) {
          uVar9 = 1;
          while (uVar9 < unaff_w27) {
            uVar3 = puVar10[(int)uVar9];
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            if ((0x20 < uVar3) || ((unaff_x28 << ((ulong)uVar3 & 0x3f) & unaff_x24) == 0)) {
              lVar7 = *(long *)PTR_DAT_06db2f60;
              if (unaff_w27 < uVar9) {
                FUN_031db0c8(0);
              }
              goto LAB_02908b58;
            }
            uVar9 = uVar9 + 1;
            if (unaff_w27 == uVar9) goto OVRPlugin_OVRP_1_36_0___cctor;
          }
          goto LAB_02908df8;
        }
OVRPlugin_OVRP_1_36_0___cctor:
        lVar7 = *(long *)PTR_DAT_06db2f60;
        uVar9 = unaff_w27;
LAB_02908b58:
        if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x132) & 1) == 0) {
          FUN_015c2790();
        }
        uVar5 = unaff_w27 - uVar9;
        if (uVar4 != ((int)uVar4 / 3) * 3) {
          if (uVar5 == 0) {
            return 1;
          }
          goto LAB_02908dc4;
        }
        unaff_x26 = puVar10 + (int)uVar9;
        if (uVar5 == 0) {
          return 1;
        }
      } while( true );
    }
  }
  else if (0 < (int)uVar5) {
    uVar11 = (ulong)uVar5;
    puVar10 = unaff_x23 + *(long *)(unaff_x29 + -0x98) + unaff_x19;
    while( true ) {
      uVar3 = *puVar10;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      if ((0x20 < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x100002600U) == 0)) break;
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) {
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
  uVar8 = *(undefined8 *)(unaff_x29 + -0x88);
  FUN_02908dfc(puVar10,unaff_w27,*(undefined8 *)(unaff_x29 + -0x80),uVar8,unaff_x29 + -0x5c,
               unaff_x29 + -0x60);
  puVar6 = PTR_DAT_06e58380;
  uVar5 = *(uint *)(unaff_x29 + -0x60);
  uVar11 = (ulong)uVar5;
  if ((uVar5 & 3) != 0) goto LAB_02908dc4;
  *(ulong *)(unaff_x29 + -0x90) = uVar11;
  lVar7 = *(long *)puVar6;
  if ((uint)uVar8 < uVar5) {
    FUN_031db0c8(0);
    uVar11 = *(ulong *)(unaff_x29 + -0x90);
  }
  if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x132) & 1) == 0) {
    FUN_015c2790(*(long *)(lVar7 + 0x20),uVar11);
    uVar11 = *(ulong *)(unaff_x29 + -0x90);
  }
  auVar12 = FUN_02aba43c(*(undefined8 *)(unaff_x29 + -0x80),uVar11,*(undefined8 *)PTR_DAT_06e66ff8);
  uVar8 = auVar12._0_8_;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    *(undefined8 *)(unaff_x29 + -0x88) = uVar8;
    thunk_FUN_016466fc();
    uVar8 = *(undefined8 *)(unaff_x29 + -0x88);
  }
  uVar11 = FUN_029012a4(uVar8,auVar12._8_8_,*(undefined8 *)(unaff_x29 + -0x70),unaff_w20,
                        unaff_x29 + -100,unaff_x29 + -0x68);
  if ((uVar11 & 1) == 0) goto LAB_02908dc4;
  iVar1 = **(int **)(unaff_x29 + -0x78);
  *(long *)(unaff_x29 + -0x88) = (long)*(int *)(unaff_x29 + -0x68);
  **(int **)(unaff_x29 + -0x78) = *(int *)(unaff_x29 + -0x68) + iVar1;
  unaff_x25 = (long)(int)*(uint *)(unaff_x29 + -0x5c);
  lVar7 = *(long *)PTR_DAT_06db2f60;
  if (unaff_w27 < *(uint *)(unaff_x29 + -0x5c)) {
    FUN_031db0c8(0);
  }
  if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x132) & 1) == 0) {
    FUN_015c2790();
  }
  unaff_x21 = *(long *)PTR_DAT_06e29960;
  param_1 = *(undefined8 *)(unaff_x29 + -0x88);
  unaff_x23 = unaff_x26;
  unaff_x26 = puVar10 + unaff_x25;
  goto code_r0x02908cec;
}


