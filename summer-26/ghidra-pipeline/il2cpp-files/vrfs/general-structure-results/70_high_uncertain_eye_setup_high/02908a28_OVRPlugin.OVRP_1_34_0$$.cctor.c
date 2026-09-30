/*
FUNCTION_NAME: OVRPlugin.OVRP_1_34_0$$.cctor
ENTRY_POINT: 02908a28
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRPlugin_OVRP_1_34_0___cctor(void)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  ushort *puVar11;
  ulong unaff_x20;
  long lVar12;
  long *unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  long lVar13;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined1 auVar14 [16];
  
  do {
    thunk_FUN_016466fc();
    do {
      uVar8 = FUN_029012a4(unaff_x23,unaff_x26,*(undefined8 *)(unaff_x29 + -0x70),unaff_x27,
                           unaff_x29 + -0x54,unaff_x29 + -0x58);
      uVar4 = *(uint *)(unaff_x29 + -0x58);
      **(int **)(unaff_x29 + -0x78) = uVar4 + **(int **)(unaff_x29 + -0x78);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      uVar10 = *(uint *)(unaff_x29 + -0x54);
      lVar13 = *(long *)PTR_DAT_06db2f60;
      if ((uint)unaff_x25 < uVar10) {
        FUN_031db0c8(0);
      }
      if ((*(byte *)(*(long *)(lVar13 + 0x20) + 0x132) & 1) == 0) {
        FUN_015c2790();
      }
      uVar5 = (uint)unaff_x25 - uVar10;
      lVar13 = *(long *)PTR_DAT_06e29960;
      if ((uint)unaff_x20 < uVar4) {
        FUN_031db0c8(0);
      }
      if ((*(byte *)(*(long *)(lVar13 + 0x20) + 0x132) & 1) == 0) {
        FUN_015c2790();
      }
      if (uVar5 == 0) {
LAB_02908df8:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      puVar11 = (ushort *)(unaff_x23 + (long)(int)uVar10 * 2);
      uVar3 = *puVar11;
      iVar1 = *(int *)(*unaff_x22 + 0xe0);
      *(long *)(unaff_x29 + -0x70) = *(long *)(unaff_x29 + -0x70) + (long)(int)uVar4;
      if (iVar1 == 0) {
        thunk_FUN_016466fc();
      }
      uVar6 = (uint)unaff_x20 - uVar4;
      unaff_x20 = (ulong)uVar6;
      if ((uVar3 < 0x21) && ((unaff_x28 << ((ulong)uVar3 & 0x3f) & unaff_x24) != 0)) {
        if (uVar5 != 1) {
          uVar10 = 1;
          while (uVar10 < uVar5) {
            uVar3 = puVar11[(int)uVar10];
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            if ((0x20 < uVar3) || ((unaff_x28 << ((ulong)uVar3 & 0x3f) & unaff_x24) == 0)) {
              lVar13 = *(long *)PTR_DAT_06db2f60;
              if (uVar5 < uVar10) {
                FUN_031db0c8(0);
              }
              goto LAB_02908b58;
            }
            uVar10 = uVar10 + 1;
            if (uVar5 == uVar10) goto OVRPlugin_OVRP_1_36_0___cctor;
          }
          goto LAB_02908df8;
        }
OVRPlugin_OVRP_1_36_0___cctor:
        lVar13 = *(long *)PTR_DAT_06db2f60;
        uVar10 = uVar5;
LAB_02908b58:
        if ((*(byte *)(*(long *)(lVar13 + 0x20) + 0x132) & 1) == 0) {
          FUN_015c2790();
        }
        uVar5 = uVar5 - uVar10;
        if (uVar4 != ((int)uVar4 / 3) * 3) {
          if (uVar5 == 0) {
            return 1;
          }
          goto LAB_02908dc4;
        }
        lVar13 = (long)(int)uVar10 << 1;
      }
      else {
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar9 = *(undefined8 *)(unaff_x29 + -0x88);
        FUN_02908dfc(puVar11,uVar5,*(undefined8 *)(unaff_x29 + -0x80),uVar9,unaff_x29 + -0x5c,
                     unaff_x29 + -0x60);
        puVar7 = PTR_DAT_06e58380;
        uVar4 = *(uint *)(unaff_x29 + -0x60);
        uVar8 = (ulong)uVar4;
        if ((uVar4 & 3) != 0) goto LAB_02908dc4;
        *(ulong *)(unaff_x29 + -0x90) = uVar8;
        lVar13 = *(long *)puVar7;
        if ((uint)uVar9 < uVar4) {
          FUN_031db0c8(0);
          uVar8 = *(ulong *)(unaff_x29 + -0x90);
        }
        if ((*(byte *)(*(long *)(lVar13 + 0x20) + 0x132) & 1) == 0) {
          FUN_015c2790(*(long *)(lVar13 + 0x20),uVar8);
          uVar8 = *(ulong *)(unaff_x29 + -0x90);
        }
        auVar14 = FUN_02aba43c(*(undefined8 *)(unaff_x29 + -0x80),uVar8,
                               *(undefined8 *)PTR_DAT_06e66ff8);
        uVar9 = auVar14._0_8_;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          *(undefined8 *)(unaff_x29 + -0x88) = uVar9;
          thunk_FUN_016466fc();
          uVar9 = *(undefined8 *)(unaff_x29 + -0x88);
        }
        uVar8 = FUN_029012a4(uVar9,auVar14._8_8_,*(undefined8 *)(unaff_x29 + -0x70),unaff_x20,
                             unaff_x29 + -100,unaff_x29 + -0x68);
        if ((uVar8 & 1) == 0) goto LAB_02908dc4;
        iVar1 = **(int **)(unaff_x29 + -0x78);
        *(long *)(unaff_x29 + -0x88) = (long)*(int *)(unaff_x29 + -0x68);
        **(int **)(unaff_x29 + -0x78) = *(int *)(unaff_x29 + -0x68) + iVar1;
        uVar4 = *(uint *)(unaff_x29 + -0x5c);
        lVar13 = *(long *)PTR_DAT_06db2f60;
        if (uVar5 < uVar4) {
          FUN_031db0c8(0);
        }
        if ((*(byte *)(*(long *)(lVar13 + 0x20) + 0x132) & 1) == 0) {
          FUN_015c2790();
        }
        lVar13 = (long)(int)uVar4 << 1;
        lVar12 = *(long *)PTR_DAT_06e29960;
        if (uVar6 < (uint)*(undefined8 *)(unaff_x29 + -0x88)) {
          FUN_031db0c8(0);
        }
        lVar12 = *(long *)(lVar12 + 0x20);
        *(long *)(unaff_x29 + -0x98) = (long)(int)uVar4;
        bVar2 = *(byte *)(lVar12 + 0x132);
        uVar5 = uVar5 - uVar4;
        unaff_x20 = (ulong)(uVar6 - (int)*(long *)(unaff_x29 + -0x88));
        *(long *)(unaff_x29 + -0x70) = *(long *)(unaff_x29 + -0x70) + *(long *)(unaff_x29 + -0x88);
        if ((bVar2 & 1) == 0) {
          FUN_015c2790();
        }
        lVar12 = *(long *)(unaff_x29 + -0x88);
        iVar1 = (int)((ulong)(lVar12 * 0x55555556) >> 0x20);
        *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x90);
        if ((int)lVar12 != (iVar1 - (iVar1 >> 0x1f)) * 3) {
          if ((int)uVar5 < 1) {
            return 1;
          }
          uVar8 = (ulong)uVar5;
          puVar11 = (ushort *)(unaff_x23 + *(long *)(unaff_x29 + -0x98) * 2 + (long)(int)uVar10 * 2)
          ;
          while( true ) {
            uVar3 = *puVar11;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            if ((0x20 < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x100002600U) == 0)) break;
            puVar11 = puVar11 + 1;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) {
              return 1;
            }
          }
LAB_02908dc4:
          **(undefined4 **)(unaff_x29 + -0x78) = 0;
          return 0;
        }
      }
      if (uVar5 == 0) {
        return 1;
      }
      unaff_x25 = (ulong)uVar5;
      unaff_x23 = (long)puVar11 + lVar13;
      unaff_x26 = unaff_x25;
      unaff_x27 = unaff_x20;
    } while (*(int *)(*unaff_x22 + 0xe0) != 0);
  } while( true );
}


