/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetTrackingTransformRelativePose
ENTRY_POINT: 02908c68
PROGRAM: vrfs-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose(void)

{
  undefined8 uVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ulong uVar8;
  uint uVar9;
  long unaff_x19;
  ushort *puVar10;
  ulong unaff_x20;
  ulong unaff_x21;
  long lVar11;
  long *unaff_x22;
  ushort *unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  ushort *unaff_x26;
  uint unaff_w27;
  long unaff_x28;
  long unaff_x29;
  undefined1 auVar12 [16];
  
code_r0x02908c68:
  thunk_FUN_016466fc();
  auVar12._8_8_ = unaff_x25;
  auVar12._0_8_ = *(undefined8 *)(unaff_x29 + -0x88);
  puVar10 = unaff_x23;
LAB_02908c70:
  uVar8 = FUN_029012a4(auVar12._0_8_,auVar12._8_8_,*(undefined8 *)(unaff_x29 + -0x70),unaff_x21,
                       unaff_x29 + -100,unaff_x29 + -0x68);
  if ((uVar8 & 1) == 0) goto LAB_02908dc4;
  iVar2 = **(int **)(unaff_x29 + -0x78);
  *(long *)(unaff_x29 + -0x88) = (long)*(int *)(unaff_x29 + -0x68);
  **(int **)(unaff_x29 + -0x78) = *(int *)(unaff_x29 + -0x68) + iVar2;
  uVar6 = *(uint *)(unaff_x29 + -0x5c);
  lVar11 = *(long *)PTR_DAT_06db2f60;
  if (unaff_w27 < uVar6) {
    FUN_031db0c8(0);
  }
  if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x132) & 1) == 0) {
    FUN_015c2790();
  }
  unaff_x23 = unaff_x26 + (int)uVar6;
  lVar11 = *(long *)PTR_DAT_06e29960;
  if ((uint)unaff_x20 < (uint)*(undefined8 *)(unaff_x29 + -0x88)) {
    FUN_031db0c8(0);
  }
  lVar11 = *(long *)(lVar11 + 0x20);
  *(long *)(unaff_x29 + -0x98) = (long)(int)uVar6;
  bVar3 = *(byte *)(lVar11 + 0x132);
  uVar6 = unaff_w27 - uVar6;
  unaff_x20 = (ulong)((uint)unaff_x20 - (int)*(long *)(unaff_x29 + -0x88));
  *(long *)(unaff_x29 + -0x70) = *(long *)(unaff_x29 + -0x70) + *(long *)(unaff_x29 + -0x88);
  if ((bVar3 & 1) == 0) {
    FUN_015c2790();
  }
  lVar11 = *(long *)(unaff_x29 + -0x88);
  iVar2 = (int)((ulong)(lVar11 * 0x55555556) >> 0x20);
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x90);
  if ((int)lVar11 == (iVar2 - (iVar2 >> 0x1f)) * 3) {
    if (uVar6 != 0) {
      do {
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar8 = FUN_029012a4(unaff_x23,uVar6,*(undefined8 *)(unaff_x29 + -0x70),unaff_x20,
                             unaff_x29 + -0x54,unaff_x29 + -0x58);
        uVar5 = *(uint *)(unaff_x29 + -0x58);
        **(int **)(unaff_x29 + -0x78) = uVar5 + **(int **)(unaff_x29 + -0x78);
        if ((uVar8 & 1) != 0) {
          return 1;
        }
        uVar9 = *(uint *)(unaff_x29 + -0x54);
        unaff_x19 = (long)(int)uVar9;
        lVar11 = *(long *)PTR_DAT_06db2f60;
        if (uVar6 < uVar9) {
          FUN_031db0c8(0);
        }
        if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x132) & 1) == 0) {
          FUN_015c2790();
        }
        unaff_w27 = uVar6 - uVar9;
        lVar11 = *(long *)PTR_DAT_06e29960;
        if ((uint)unaff_x20 < uVar5) {
          FUN_031db0c8(0);
        }
        if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x132) & 1) == 0) {
          FUN_015c2790();
        }
        if (unaff_w27 == 0) {
LAB_02908df8:
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        unaff_x26 = unaff_x23 + unaff_x19;
        uVar4 = *unaff_x26;
        iVar2 = *(int *)(*unaff_x22 + 0xe0);
        *(long *)(unaff_x29 + -0x70) = *(long *)(unaff_x29 + -0x70) + (long)(int)uVar5;
        if (iVar2 == 0) {
          thunk_FUN_016466fc();
        }
        unaff_x20 = (ulong)((uint)unaff_x20 - uVar5);
        if ((0x20 < uVar4) || ((unaff_x28 << ((ulong)uVar4 & 0x3f) & unaff_x24) == 0))
        goto LAB_02908bc4;
        if (unaff_w27 != 1) {
          uVar9 = 1;
          while (uVar9 < unaff_w27) {
            uVar4 = unaff_x26[(int)uVar9];
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            if ((0x20 < uVar4) || ((unaff_x28 << ((ulong)uVar4 & 0x3f) & unaff_x24) == 0)) {
              lVar11 = *(long *)PTR_DAT_06db2f60;
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
        lVar11 = *(long *)PTR_DAT_06db2f60;
        uVar9 = unaff_w27;
LAB_02908b58:
        if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x132) & 1) == 0) {
          FUN_015c2790();
        }
        uVar6 = unaff_w27 - uVar9;
        if (uVar5 != ((int)uVar5 / 3) * 3) {
          if (uVar6 == 0) {
            return 1;
          }
          goto LAB_02908dc4;
        }
        unaff_x23 = unaff_x26 + (int)uVar9;
        if (uVar6 == 0) {
          return 1;
        }
      } while( true );
    }
  }
  else if (0 < (int)uVar6) {
    uVar8 = (ulong)uVar6;
    puVar10 = puVar10 + *(long *)(unaff_x29 + -0x98) + unaff_x19;
    while( true ) {
      uVar4 = *puVar10;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      if ((0x20 < uVar4) || ((1L << ((ulong)uVar4 & 0x3f) & 0x100002600U) == 0)) break;
      puVar10 = puVar10 + 1;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) {
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
  uVar1 = *(undefined8 *)(unaff_x29 + -0x88);
  FUN_02908dfc(unaff_x26,unaff_w27,*(undefined8 *)(unaff_x29 + -0x80),uVar1,unaff_x29 + -0x5c,
               unaff_x29 + -0x60);
  puVar7 = PTR_DAT_06e58380;
  uVar6 = *(uint *)(unaff_x29 + -0x60);
  uVar8 = (ulong)uVar6;
  if ((uVar6 & 3) != 0) goto LAB_02908dc4;
  *(ulong *)(unaff_x29 + -0x90) = uVar8;
  lVar11 = *(long *)puVar7;
  if ((uint)uVar1 < uVar6) {
    FUN_031db0c8(0);
    uVar8 = *(ulong *)(unaff_x29 + -0x90);
  }
  if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x132) & 1) == 0) {
    FUN_015c2790(*(long *)(lVar11 + 0x20),uVar8);
    uVar8 = *(ulong *)(unaff_x29 + -0x90);
  }
  auVar12 = FUN_02aba43c(*(undefined8 *)(unaff_x29 + -0x80),uVar8,*(undefined8 *)PTR_DAT_06e66ff8);
  unaff_x25 = auVar12._8_8_;
  unaff_x21 = unaff_x20;
  puVar10 = unaff_x23;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) goto code_r0x02908c64;
  goto LAB_02908c70;
code_r0x02908c64:
  *(long *)(unaff_x29 + -0x88) = auVar12._0_8_;
  goto code_r0x02908c68;
}


