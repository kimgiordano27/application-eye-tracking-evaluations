/*
FUNCTION_NAME: System.ByReference<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 06b450fc
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ByReference<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  int iVar6;
  uint *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  int *piVar11;
  void *pvVar12;
  undefined8 uVar13;
  undefined1 (*pauVar14) [16];
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  code *pcVar18;
  ulong uVar19;
  long unaff_x19;
  size_t sVar20;
  undefined8 *unaff_x22;
  undefined8 uVar21;
  undefined8 *unaff_x24;
  long *plVar22;
  undefined8 unaff_x25;
  long unaff_x29;
  undefined1 auVar23 [16];
  
  FUN_0406aaec();
  puVar7 = (uint *)thunk_FUN_0408f8bc();
  uVar1 = *puVar7;
  if (1 < uVar1) {
    uVar3 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    if (uVar1 == 2) {
      if ((uVar3 & 1) == 0) {
        FUN_0406aaec();
      }
      puVar8 = (undefined8 *)thunk_FUN_0408f8bc();
      uVar21 = *puVar8;
      uVar3 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      *(undefined8 *)(unaff_x29 + -0x48) = puVar8[1];
      *(undefined8 *)(unaff_x29 + -0x50) = uVar21;
      if ((uVar3 & 1) == 0) {
        FUN_0406aaec();
      }
      puVar8 = (undefined8 *)thunk_FUN_0408f8bc();
      *puVar8 = 0;
      puVar8[1] = 0;
      lVar9 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec();
      }
      FUN_0403164c(*(undefined8 *)(**(long **)(lVar9 + 0xc0) + 0x80),4);
      puVar10 = (undefined4 *)thunk_FUN_0408f8bc();
      *puVar10 = 0xffffffff;
      goto LAB_06b460c8;
    }
    if ((uVar3 & 1) == 0) {
      FUN_0406aaec();
    }
    puVar8 = (undefined8 *)thunk_FUN_0408f8bc();
    plVar22 = (long *)*puVar8;
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    puVar8 = (undefined8 *)thunk_FUN_0408f8bc();
    if (plVar22 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_06b46930;
    }
    lVar9 = *(long *)(unaff_x19 + 0x20);
    uVar21 = *puVar8;
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec(lVar9);
    }
    lVar17 = *plVar22;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar11 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar9) {
          puVar8 = (undefined8 *)(lVar17 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06b452b8;
        }
        uVar19 = uVar19 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar19 != 0);
    }
    puVar8 = (undefined8 *)FUN_0406ae20(plVar22,lVar9,0);
LAB_06b452b8:
    uVar21 = (*(code *)*puVar8)(plVar22,uVar21,puVar8[1]);
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    FUN_0403164c(*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0xa0,8);
    puVar8 = (undefined8 *)thunk_FUN_0408f8bc();
    *puVar8 = uVar21;
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    FUN_0403164c(*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0xc0,8);
    puVar8 = (undefined8 *)thunk_FUN_0408f8bc();
    *puVar8 = 0;
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    FUN_0403164c(*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0xe0,4);
    puVar10 = (undefined4 *)thunk_FUN_0408f8bc();
    *puVar10 = 0;
  }
  puVar5 = PTR_DAT_08f6dac0;
  uVar3 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
  if (uVar1 == 0) {
    if ((uVar3 & 1) == 0) {
      FUN_0406aaec();
    }
    puVar8 = (undefined8 *)thunk_FUN_0408f8bc();
    uVar21 = *puVar8;
    uVar3 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    *(undefined8 *)(unaff_x29 + -0x38) = puVar8[1];
    *(undefined8 *)(unaff_x29 + -0x40) = uVar21;
    if ((uVar3 & 1) == 0) {
      FUN_0406aaec();
    }
    puVar8 = (undefined8 *)thunk_FUN_0408f8bc();
    *puVar8 = 0;
    puVar8[1] = 0;
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    FUN_0403164c(*(undefined8 *)(**(long **)(lVar9 + 0xc0) + 0x80),4);
    puVar10 = (undefined4 *)thunk_FUN_0408f8bc();
    *puVar10 = 0xffffffff;
LAB_06b455d4:
    plVar22 = *(long **)(unaff_x29 + -0x40);
    if (plVar22 == (long *)0x0) {
      if (*(char *)(unaff_x29 + -0x38) == '\0') goto LAB_06b45664;
    }
    else {
      uVar4 = *(undefined2 *)(unaff_x29 + -0x36);
      lVar9 = *(long *)(*(long *)PTR_DAT_08f6dab8 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec(lVar9);
      }
      lVar17 = *plVar22;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar11 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar9) {
            puVar8 = (undefined8 *)(lVar17 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06b45740;
          }
          uVar19 = uVar19 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar19 != 0);
      }
      puVar8 = (undefined8 *)FUN_0406ae20(plVar22,lVar9,0);
LAB_06b45740:
      uVar19 = (*(code *)*puVar8)(plVar22,uVar4,puVar8[1]);
      if ((uVar19 & 1) == 0) {
LAB_06b45664:
        FUN_04f8cf2c(0);
        if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04031750();
        }
        goto LAB_06b46930;
      }
    }
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    puVar8 = (undefined8 *)thunk_FUN_0408f8bc();
    plVar22 = (long *)*puVar8;
    if (plVar22 != (long *)0x0) {
      lVar9 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec(lVar9);
      }
      lVar17 = *plVar22;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar11 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar9) {
            lVar9 = lVar17 + (long)*piVar11 * 0x10 + 0x138;
            goto LAB_06b4580c;
          }
          uVar19 = uVar19 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar19 != 0);
      }
      lVar9 = FUN_0406ae20(plVar22,lVar9,0);
LAB_06b4580c:
      lVar9 = *(long *)(lVar9 + 8);
      *(undefined8 **)(unaff_x29 + -0x28) = unaff_x22;
      (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar22,unaff_x29 + -0x28);
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      FUN_04031654();
      goto LAB_06b45b98;
    }
    if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    goto LAB_06b46930;
  }
  if (uVar1 == 1) {
    if ((uVar3 & 1) == 0) {
      FUN_0406aaec();
    }
    puVar8 = (undefined8 *)thunk_FUN_0408f8bc();
    uVar21 = *puVar8;
    uVar3 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    *(undefined8 *)(unaff_x29 + -0x38) = puVar8[1];
    *(undefined8 *)(unaff_x29 + -0x40) = uVar21;
    if ((uVar3 & 1) == 0) {
      FUN_0406aaec();
    }
    puVar8 = (undefined8 *)thunk_FUN_0408f8bc();
    *puVar8 = 0;
    puVar8[1] = 0;
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    FUN_0403164c(*(undefined8 *)(**(long **)(lVar9 + 0xc0) + 0x80),4);
    puVar10 = (undefined4 *)thunk_FUN_0408f8bc();
    *puVar10 = 0xffffffff;
    do {
      plVar22 = *(long **)(unaff_x29 + -0x40);
      if (plVar22 == (long *)0x0) {
        if (*(char *)(unaff_x29 + -0x38) == '\0') goto LAB_06b45d54;
      }
      else {
        uVar4 = *(undefined2 *)(unaff_x29 + -0x36);
        lVar9 = *(long *)(*(long *)PTR_DAT_08f6dab8 + 0x20);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_0406aaec();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_0406aaec(lVar9);
        }
        lVar17 = *plVar22;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar11 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar9) {
              puVar8 = (undefined8 *)(lVar17 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_06b45d40;
            }
            uVar19 = uVar19 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar19 != 0);
        }
        puVar8 = (undefined8 *)FUN_0406ae20(plVar22,lVar9,0);
LAB_06b45d40:
        uVar19 = (*(code *)*puVar8)(plVar22,uVar4,puVar8[1]);
        if ((uVar19 & 1) == 0) {
LAB_06b45d54:
          if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
            FUN_0406aaec();
          }
          pvVar12 = (void *)thunk_FUN_0408f8bc();
          memcpy(unaff_x22,pvVar12,*(size_t *)(unaff_x29 + -0x70));
          if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
            FUN_0406aaec();
          }
          FUN_04031654();
          lVar9 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_0406aaec();
          }
          FUN_0403164c(*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0xe0,4);
          puVar10 = (undefined4 *)thunk_FUN_0408f8bc();
          *puVar10 = 1;
          if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
            FUN_0406aaec();
          }
          plVar22 = (long *)thunk_FUN_0408f8bc();
          if (*plVar22 == 0) goto LAB_06b4615c;
          if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
            FUN_0406aaec();
          }
          puVar8 = (undefined8 *)thunk_FUN_0408f8bc();
          plVar22 = (long *)*puVar8;
          if (plVar22 == (long *)0x0) {
            if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_0403188c();
            }
            goto LAB_06b46930;
          }
          lVar9 = *plVar22;
          uVar19 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar19 == 0) goto LAB_06b45ea4;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_06b45e8c;
        }
      }
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      plVar22 = (long *)thunk_FUN_0408f8bc();
      lVar9 = *plVar22;
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      pvVar12 = (void *)thunk_FUN_0408f8bc();
      memcpy(unaff_x22,pvVar12,*(size_t *)(unaff_x29 + -0x70));
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      puVar8 = (undefined8 *)thunk_FUN_0408f8bc();
      plVar22 = (long *)*puVar8;
      if (plVar22 == (long *)0x0) {
LAB_06b465b4:
        if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_06b46930;
      }
      lVar17 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_0406aaec();
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x18);
      if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_0406aaec(lVar17);
      }
      lVar15 = *plVar22;
      uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar19 != 0) {
        piVar11 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar17) {
            lVar17 = lVar15 + (long)*piVar11 * 0x10 + 0x138;
            goto LAB_06b45a70;
          }
          uVar19 = uVar19 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar19 != 0);
      }
      lVar17 = FUN_0406ae20(plVar22,lVar17,0);
LAB_06b45a70:
      lVar17 = *(long *)(lVar17 + 8);
      *(undefined8 **)(unaff_x29 + -0x28) = unaff_x24;
      (**(code **)(lVar17 + 0x10))(*(undefined8 *)(lVar17 + 8),lVar17,plVar22,unaff_x29 + -0x28);
      if (lVar9 == 0) goto LAB_06b465b4;
      lVar15 = *(long *)(unaff_x19 + 0x20);
      uVar3 = *(ushort *)(lVar15 + 0x135);
      lVar17 = lVar15;
      if ((uVar3 & 1) == 0) {
        lVar17 = FUN_0406aaec();
        lVar15 = *(long *)(unaff_x19 + 0x20);
        uVar3 = *(ushort *)(lVar15 + 0x135);
      }
      uVar21 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x60);
      lVar17 = lVar15;
      if ((uVar3 & 1) == 0) {
        lVar17 = FUN_0406aaec();
        lVar15 = *(long *)(unaff_x19 + 0x20);
        uVar3 = *(ushort *)(lVar15 + 0x135);
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x60);
      if ((uVar3 & 1) == 0) {
        lVar15 = FUN_0406aaec();
      }
      puVar8 = unaff_x22;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x50) + 0x28)) {
        puVar8 = (undefined8 *)*unaff_x22;
      }
      lVar15 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_0406aaec();
      }
      puVar16 = unaff_x24;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x50) + 0x28)) {
        puVar16 = (undefined8 *)*unaff_x24;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar16;
      *(undefined8 *)(unaff_x29 + -0x18) = unaff_x25;
      pcVar18 = *(code **)(lVar17 + 0x10);
      *(undefined8 **)(unaff_x29 + -0x28) = puVar8;
      (*pcVar18)(uVar21,lVar17,lVar9,unaff_x29 + -0x28);
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      FUN_04031654();
LAB_06b45b98:
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      puVar8 = (undefined8 *)thunk_FUN_0408f8bc();
      plVar22 = (long *)*puVar8;
      if (plVar22 == (long *)0x0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_06b46930;
      }
      lVar9 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec(lVar9);
      }
      lVar17 = *plVar22;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar11 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar9) {
            puVar8 = (undefined8 *)(lVar17 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_06b45c58;
          }
          uVar19 = uVar19 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar19 != 0);
      }
      puVar8 = (undefined8 *)FUN_0406ae20(plVar22,lVar9,1);
LAB_06b45c58:
      auVar23 = (*(code *)*puVar8)(plVar22,puVar8[1]);
      if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_08f6db00 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      uVar21 = *(undefined8 *)puVar5;
      *(undefined1 (*) [16])(unaff_x29 + -0x40) = auVar23;
      uVar19 = FUN_0425a2e4(unaff_x29 + -0x40,uVar21);
    } while ((uVar19 & 1) != 0);
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    FUN_0403164c(*(undefined8 *)(**(long **)(lVar9 + 0xc0) + 0x80),4);
    puVar10 = (undefined4 *)thunk_FUN_0408f8bc();
    *puVar10 = 1;
    lVar9 = *(long *)(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x38);
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x40);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    FUN_0403164c(*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x140,0x10);
    puVar8 = (undefined8 *)thunk_FUN_0408f8bc();
    uVar21 = *(undefined8 *)(unaff_x29 + -0x90);
    puVar8[1] = *(undefined8 *)(unaff_x29 + -0x88);
    *puVar8 = uVar21;
    lVar9 = *(long *)(unaff_x19 + 0x20);
    uVar3 = *(ushort *)(lVar9 + 0x135);
    if ((uVar3 & 1) == 0) {
      lVar9 = FUN_0406aaec();
      uVar3 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    }
    pcVar18 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x30);
    if ((uVar3 & 1) == 0) {
      FUN_0406aaec();
    }
    uVar21 = thunk_FUN_0408f8bc();
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    (*pcVar18)(uVar21,unaff_x29 + -0x40);
  }
  else {
    if ((uVar3 & 1) == 0) {
      FUN_0406aaec();
    }
    puVar8 = (undefined8 *)thunk_FUN_0408f8bc();
    plVar22 = (long *)*puVar8;
    if (plVar22 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_06b46930;
    }
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec(lVar9);
    }
    lVar17 = *plVar22;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar11 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar9) {
          puVar8 = (undefined8 *)(lVar17 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_06b4558c;
        }
        uVar19 = uVar19 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar19 != 0);
    }
    puVar8 = (undefined8 *)FUN_0406ae20(plVar22,lVar9,1);
LAB_06b4558c:
    auVar23 = (*(code *)*puVar8)(plVar22,puVar8[1]);
    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_08f6db00 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    uVar21 = *(undefined8 *)puVar5;
    *(undefined1 (*) [16])(unaff_x29 + -0x40) = auVar23;
    uVar19 = FUN_0425a2e4(unaff_x29 + -0x40,uVar21);
    if ((uVar19 & 1) != 0) goto LAB_06b455d4;
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    FUN_0403164c(*(undefined8 *)(**(long **)(lVar9 + 0xc0) + 0x80),4);
    puVar10 = (undefined4 *)thunk_FUN_0408f8bc();
    *puVar10 = 0;
    lVar9 = *(long *)(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x38);
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x40);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    FUN_0403164c(*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x140,0x10);
    puVar8 = (undefined8 *)thunk_FUN_0408f8bc();
    uVar21 = *(undefined8 *)(unaff_x29 + -0x90);
    puVar8[1] = *(undefined8 *)(unaff_x29 + -0x88);
    *puVar8 = uVar21;
    lVar9 = *(long *)(unaff_x19 + 0x20);
    uVar3 = *(ushort *)(lVar9 + 0x135);
    if ((uVar3 & 1) == 0) {
      lVar9 = FUN_0406aaec();
      uVar3 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    }
    pcVar18 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x30);
    if ((uVar3 & 1) == 0) {
      FUN_0406aaec();
    }
    uVar21 = thunk_FUN_0408f8bc();
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    (*pcVar18)(uVar21,unaff_x29 + -0x40);
  }
  goto LAB_06b46478;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar11 = piVar11 + 4;
    if (uVar19 == 0) break;
LAB_06b45e8c:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f8cf80) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_06b45fd4;
    }
  }
LAB_06b45ea4:
  puVar8 = (undefined8 *)FUN_0406ae20(plVar22,*(long *)PTR_DAT_08f8cf80,0);
LAB_06b45fd4:
  auVar23 = (*(code *)*puVar8)(plVar22,puVar8[1]);
  puVar5 = PTR_DAT_08f67a58;
  plVar22 = auVar23._0_8_;
  if (*(int *)(*(long *)PTR_DAT_08f67a58 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  *(undefined1 (*) [16])(unaff_x29 + -0x50) = auVar23;
  if (DAT_09539e0c == '\0') {
    FUN_0403162c(PTR_DAT_08f67a58);
    DAT_09539e0c = '\x01';
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  if (DAT_09539e0d == '\0') {
    FUN_0403162c(PTR_DAT_08f67c08);
    DAT_09539e0d = '\x01';
  }
  if (plVar22 != (long *)0x0) {
    lVar9 = *plVar22;
    uVar19 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar19 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f67c08) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06b460b4;
        }
        uVar19 = uVar19 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar19 != 0);
    }
    puVar8 = (undefined8 *)FUN_0406ae20(plVar22,*(long *)PTR_DAT_08f67c08,0);
LAB_06b460b4:
    iVar6 = (*(code *)*puVar8)(plVar22,auVar23._8_8_ & 0xffffffff,puVar8[1]);
    if (iVar6 == 0) {
      lVar9 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec();
      }
      FUN_0403164c(*(undefined8 *)(**(long **)(lVar9 + 0xc0) + 0x80),4);
      puVar10 = (undefined4 *)thunk_FUN_0408f8bc();
      *puVar10 = 2;
      lVar9 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0406aaec();
      }
      FUN_0403164c(*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x160,0x10);
      pauVar14 = (undefined1 (*) [16])thunk_FUN_0408f8bc();
      *pauVar14 = auVar23;
      lVar9 = *(long *)(unaff_x19 + 0x20);
      uVar3 = *(ushort *)(lVar9 + 0x135);
      if ((uVar3 & 1) == 0) {
        lVar9 = FUN_0406aaec();
        uVar3 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      }
      pcVar18 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x68);
      if ((uVar3 & 1) == 0) {
        FUN_0406aaec();
      }
      uVar21 = thunk_FUN_0408f8bc();
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      (*pcVar18)(uVar21,unaff_x29 + -0x50);
      goto LAB_06b46478;
    }
  }
LAB_06b460c8:
  if (DAT_09539e0e == '\0') {
    FUN_0403162c(PTR_DAT_08f67c08);
    DAT_09539e0e = '\x01';
  }
  plVar22 = *(long **)(unaff_x29 + -0x50);
  if (plVar22 != (long *)0x0) {
    lVar9 = *plVar22;
    uVar4 = *(undefined2 *)(unaff_x29 + -0x48);
    uVar19 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar19 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f67c08) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_06b4614c;
        }
        uVar19 = uVar19 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar19 != 0);
    }
    puVar8 = (undefined8 *)FUN_0406ae20(plVar22,*(long *)PTR_DAT_08f67c08,2);
LAB_06b4614c:
    (*(code *)*puVar8)(plVar22,uVar4,puVar8[1]);
  }
LAB_06b4615c:
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0406aaec();
  }
  plVar22 = (long *)thunk_FUN_0408f8bc();
  plVar22 = (long *)*plVar22;
  if (plVar22 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_08f65af8 + 0x130);
    if ((*(byte *)(*plVar22 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_08f65af8))
    {
      if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_04031750();
      }
      goto LAB_06b46930;
    }
    lVar9 = FUN_07408528(plVar22,0);
    if (lVar9 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_06b46930;
    }
    FUN_074085e8(lVar9,0);
  }
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0406aaec();
  }
  piVar11 = (int *)thunk_FUN_0408f8bc();
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if (*piVar11 == 1) {
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    pvVar12 = (void *)thunk_FUN_0408f8bc();
    sVar20 = *(size_t *)(unaff_x29 + -0x70);
    memcpy(unaff_x22,pvVar12,sVar20);
    memcpy(*(void **)(unaff_x29 + -0x80),pvVar12,sVar20);
  }
  else {
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    FUN_0403164c(*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0xc0,8);
    puVar8 = (undefined8 *)thunk_FUN_0408f8bc();
    *puVar8 = 0;
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    pvVar12 = (void *)thunk_FUN_0408f8bc();
    memset(pvVar12,0,*(size_t *)(unaff_x29 + -0x70));
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0406aaec();
    }
    FUN_0403164c(*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0xa0,8);
    puVar8 = (undefined8 *)thunk_FUN_0408f8bc();
    *puVar8 = 0;
  }
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0406aaec();
  }
  FUN_0403164c(*(undefined8 *)(**(long **)(lVar9 + 0xc0) + 0x80),4);
  puVar10 = (undefined4 *)thunk_FUN_0408f8bc();
  *puVar10 = 0xfffffffe;
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0406aaec();
  }
  FUN_0403164c(*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0xa0,8);
  puVar8 = (undefined8 *)thunk_FUN_0408f8bc();
  pvVar12 = *(void **)(unaff_x29 + -0x80);
  sVar20 = *(size_t *)(unaff_x29 + -0x70);
  *puVar8 = 0;
  memcpy(unaff_x22,pvVar12,sVar20);
  lVar17 = *(long *)(unaff_x19 + 0x20);
  uVar3 = *(ushort *)(lVar17 + 0x135);
  lVar9 = lVar17;
  if ((uVar3 & 1) == 0) {
    lVar17 = FUN_0406aaec(lVar17);
    uVar3 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x19 + 0x20);
  }
  uVar21 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x78);
  lVar17 = lVar9;
  if ((uVar3 & 1) == 0) {
    lVar9 = FUN_0406aaec(lVar9);
    uVar3 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar17 = *(long *)(unaff_x19 + 0x20);
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x78);
  if ((uVar3 & 1) == 0) {
    FUN_0406aaec(lVar17);
  }
  uVar13 = thunk_FUN_0408f8bc();
  lVar17 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = FUN_0406aaec(lVar17);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x50) + 0x28)) {
    unaff_x22 = (undefined8 *)*unaff_x22;
  }
  pcVar18 = *(code **)(lVar9 + 0x10);
  *(undefined8 **)(unaff_x29 + -0x10) = unaff_x22;
  (*pcVar18)(uVar21,lVar9,uVar13,unaff_x29 + -0x10,unaff_x22);
LAB_06b46478:
  if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_06b46930:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


