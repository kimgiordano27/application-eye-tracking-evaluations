/*
FUNCTION_NAME: System.ByReference<OVRPlugin.SpaceQueryResult>$$get_Value
ENTRY_POINT: 06b45130
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ByReference<OVRPlugin_SpaceQueryResult>__get_Value(ushort *param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  bool in_ZR;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  int *piVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined1 (*pauVar12) [16];
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  long unaff_x19;
  size_t sVar18;
  undefined8 *unaff_x22;
  undefined8 uVar19;
  undefined8 *unaff_x24;
  long *plVar20;
  undefined8 unaff_x25;
  int unaff_w28;
  long unaff_x29;
  undefined1 auVar21 [16];
  
  if (in_ZR) {
    if ((*param_1 & 1) == 0) {
      FUN_0406aaec();
    }
    puVar6 = (undefined8 *)thunk_FUN_0408f8bc();
    uVar19 = *puVar6;
    uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    *(undefined8 *)(unaff_x29 + -0x48) = puVar6[1];
    *(undefined8 *)(unaff_x29 + -0x50) = uVar19;
    if ((uVar2 & 1) == 0) {
      FUN_0406aaec();
    }
    puVar6 = (undefined8 *)thunk_FUN_0408f8bc();
    *puVar6 = 0;
    puVar6[1] = 0;
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0406aaec();
    }
    FUN_0403164c(*(undefined8 *)(**(long **)(lVar7 + 0xc0) + 0x80),4);
    puVar8 = (undefined4 *)thunk_FUN_0408f8bc();
    *puVar8 = 0xffffffff;
    goto LAB_06b460c8;
  }
  if ((*param_1 & 1) == 0) {
    FUN_0406aaec();
  }
  puVar6 = (undefined8 *)thunk_FUN_0408f8bc();
  plVar20 = (long *)*puVar6;
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0406aaec();
  }
  puVar6 = (undefined8 *)thunk_FUN_0408f8bc();
  if (plVar20 == (long *)0x0) {
    if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    goto LAB_06b46930;
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  uVar19 = *puVar6;
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0406aaec();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0406aaec(lVar7);
  }
  lVar15 = *plVar20;
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar17 != 0) {
    piVar9 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar7) {
        puVar6 = (undefined8 *)(lVar15 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_06b452b8;
      }
      uVar17 = uVar17 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar17 != 0);
  }
  puVar6 = (undefined8 *)FUN_0406ae20(plVar20,lVar7,0);
LAB_06b452b8:
  uVar19 = (*(code *)*puVar6)(plVar20,uVar19,puVar6[1]);
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0406aaec();
  }
  FUN_0403164c(*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0xa0,8);
  puVar6 = (undefined8 *)thunk_FUN_0408f8bc();
  *puVar6 = uVar19;
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0406aaec();
  }
  FUN_0403164c(*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0xc0,8);
  puVar6 = (undefined8 *)thunk_FUN_0408f8bc();
  *puVar6 = 0;
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0406aaec();
  }
  FUN_0403164c(*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0xe0,4);
  puVar8 = (undefined4 *)thunk_FUN_0408f8bc();
  *puVar8 = 0;
  puVar4 = PTR_DAT_08f6dac0;
  uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
  if (unaff_w28 == 0) {
    if ((uVar2 & 1) == 0) {
      FUN_0406aaec();
    }
    puVar6 = (undefined8 *)thunk_FUN_0408f8bc();
    uVar19 = *puVar6;
    uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    *(undefined8 *)(unaff_x29 + -0x38) = puVar6[1];
    *(undefined8 *)(unaff_x29 + -0x40) = uVar19;
    if ((uVar2 & 1) == 0) {
      FUN_0406aaec();
    }
    puVar6 = (undefined8 *)thunk_FUN_0408f8bc();
    *puVar6 = 0;
    puVar6[1] = 0;
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0406aaec();
    }
    FUN_0403164c(*(undefined8 *)(**(long **)(lVar7 + 0xc0) + 0x80),4);
    puVar8 = (undefined4 *)thunk_FUN_0408f8bc();
    *puVar8 = 0xffffffff;
LAB_06b455d4:
    plVar20 = *(long **)(unaff_x29 + -0x40);
    if (plVar20 == (long *)0x0) {
      if (*(char *)(unaff_x29 + -0x38) == '\0') goto LAB_06b45664;
    }
    else {
      uVar3 = *(undefined2 *)(unaff_x29 + -0x36);
      lVar7 = *(long *)(*(long *)PTR_DAT_08f6dab8 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0406aaec();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0406aaec(lVar7);
      }
      lVar15 = *plVar20;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar9 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06b45740;
          }
          uVar17 = uVar17 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar17 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(plVar20,lVar7,0);
LAB_06b45740:
      uVar17 = (*(code *)*puVar6)(plVar20,uVar3,puVar6[1]);
      if ((uVar17 & 1) == 0) {
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
    puVar6 = (undefined8 *)thunk_FUN_0408f8bc();
    plVar20 = (long *)*puVar6;
    if (plVar20 != (long *)0x0) {
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0406aaec();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0406aaec(lVar7);
      }
      lVar15 = *plVar20;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar9 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            lVar7 = lVar15 + (long)*piVar9 * 0x10 + 0x138;
            goto LAB_06b4580c;
          }
          uVar17 = uVar17 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar17 != 0);
      }
      lVar7 = FUN_0406ae20(plVar20,lVar7,0);
LAB_06b4580c:
      lVar7 = *(long *)(lVar7 + 8);
      *(undefined8 **)(unaff_x29 + -0x28) = unaff_x22;
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar20,unaff_x29 + -0x28);
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
  if (unaff_w28 == 1) {
    if ((uVar2 & 1) == 0) {
      FUN_0406aaec();
    }
    puVar6 = (undefined8 *)thunk_FUN_0408f8bc();
    uVar19 = *puVar6;
    uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    *(undefined8 *)(unaff_x29 + -0x38) = puVar6[1];
    *(undefined8 *)(unaff_x29 + -0x40) = uVar19;
    if ((uVar2 & 1) == 0) {
      FUN_0406aaec();
    }
    puVar6 = (undefined8 *)thunk_FUN_0408f8bc();
    *puVar6 = 0;
    puVar6[1] = 0;
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0406aaec();
    }
    FUN_0403164c(*(undefined8 *)(**(long **)(lVar7 + 0xc0) + 0x80),4);
    puVar8 = (undefined4 *)thunk_FUN_0408f8bc();
    *puVar8 = 0xffffffff;
    do {
      plVar20 = *(long **)(unaff_x29 + -0x40);
      if (plVar20 == (long *)0x0) {
        if (*(char *)(unaff_x29 + -0x38) == '\0') goto LAB_06b45d54;
      }
      else {
        uVar3 = *(undefined2 *)(unaff_x29 + -0x36);
        lVar7 = *(long *)(*(long *)PTR_DAT_08f6dab8 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0406aaec();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0406aaec(lVar7);
        }
        lVar15 = *plVar20;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar9 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar7) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06b45d40;
            }
            uVar17 = uVar17 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar17 != 0);
        }
        puVar6 = (undefined8 *)FUN_0406ae20(plVar20,lVar7,0);
LAB_06b45d40:
        uVar17 = (*(code *)*puVar6)(plVar20,uVar3,puVar6[1]);
        if ((uVar17 & 1) == 0) {
LAB_06b45d54:
          if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
            FUN_0406aaec();
          }
          pvVar10 = (void *)thunk_FUN_0408f8bc();
          memcpy(unaff_x22,pvVar10,*(size_t *)(unaff_x29 + -0x70));
          if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
            FUN_0406aaec();
          }
          FUN_04031654();
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0406aaec();
          }
          FUN_0403164c(*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0xe0,4);
          puVar8 = (undefined4 *)thunk_FUN_0408f8bc();
          *puVar8 = 1;
          if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
            FUN_0406aaec();
          }
          plVar20 = (long *)thunk_FUN_0408f8bc();
          if (*plVar20 == 0) goto LAB_06b4615c;
          if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
            FUN_0406aaec();
          }
          puVar6 = (undefined8 *)thunk_FUN_0408f8bc();
          plVar20 = (long *)*puVar6;
          if (plVar20 == (long *)0x0) {
            if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_0403188c();
            }
            goto LAB_06b46930;
          }
          lVar7 = *plVar20;
          uVar17 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar17 == 0) goto LAB_06b45ea4;
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_06b45e8c;
        }
      }
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      plVar20 = (long *)thunk_FUN_0408f8bc();
      lVar7 = *plVar20;
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      pvVar10 = (void *)thunk_FUN_0408f8bc();
      memcpy(unaff_x22,pvVar10,*(size_t *)(unaff_x29 + -0x70));
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      puVar6 = (undefined8 *)thunk_FUN_0408f8bc();
      plVar20 = (long *)*puVar6;
      if (plVar20 == (long *)0x0) {
LAB_06b465b4:
        if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_06b46930;
      }
      lVar15 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_0406aaec();
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x18);
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_0406aaec(lVar15);
      }
      lVar13 = *plVar20;
      uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar17 != 0) {
        piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar15) {
            lVar15 = lVar13 + (long)*piVar9 * 0x10 + 0x138;
            goto LAB_06b45a70;
          }
          uVar17 = uVar17 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar17 != 0);
      }
      lVar15 = FUN_0406ae20(plVar20,lVar15,0);
LAB_06b45a70:
      lVar15 = *(long *)(lVar15 + 8);
      *(undefined8 **)(unaff_x29 + -0x28) = unaff_x24;
      (**(code **)(lVar15 + 0x10))(*(undefined8 *)(lVar15 + 8),lVar15,plVar20,unaff_x29 + -0x28);
      if (lVar7 == 0) goto LAB_06b465b4;
      lVar13 = *(long *)(unaff_x19 + 0x20);
      uVar2 = *(ushort *)(lVar13 + 0x135);
      lVar15 = lVar13;
      if ((uVar2 & 1) == 0) {
        lVar15 = FUN_0406aaec();
        lVar13 = *(long *)(unaff_x19 + 0x20);
        uVar2 = *(ushort *)(lVar13 + 0x135);
      }
      uVar19 = **(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x60);
      lVar15 = lVar13;
      if ((uVar2 & 1) == 0) {
        lVar15 = FUN_0406aaec();
        lVar13 = *(long *)(unaff_x19 + 0x20);
        uVar2 = *(ushort *)(lVar13 + 0x135);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x60);
      if ((uVar2 & 1) == 0) {
        lVar13 = FUN_0406aaec();
      }
      puVar6 = unaff_x22;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x50) + 0x28)) {
        puVar6 = (undefined8 *)*unaff_x22;
      }
      lVar13 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_0406aaec();
      }
      puVar14 = unaff_x24;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x50) + 0x28)) {
        puVar14 = (undefined8 *)*unaff_x24;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar14;
      *(undefined8 *)(unaff_x29 + -0x18) = unaff_x25;
      pcVar16 = *(code **)(lVar15 + 0x10);
      *(undefined8 **)(unaff_x29 + -0x28) = puVar6;
      (*pcVar16)(uVar19,lVar15,lVar7,unaff_x29 + -0x28);
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      FUN_04031654();
LAB_06b45b98:
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      puVar6 = (undefined8 *)thunk_FUN_0408f8bc();
      plVar20 = (long *)*puVar6;
      if (plVar20 == (long *)0x0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_06b46930;
      }
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0406aaec();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0406aaec(lVar7);
      }
      lVar15 = *plVar20;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar9 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar15 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_06b45c58;
          }
          uVar17 = uVar17 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar17 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(plVar20,lVar7,1);
LAB_06b45c58:
      auVar21 = (*(code *)*puVar6)(plVar20,puVar6[1]);
      if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_08f6db00 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      uVar19 = *(undefined8 *)puVar4;
      *(undefined1 (*) [16])(unaff_x29 + -0x40) = auVar21;
      uVar17 = FUN_0425a2e4(unaff_x29 + -0x40,uVar19);
    } while ((uVar17 & 1) != 0);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0406aaec();
    }
    FUN_0403164c(*(undefined8 *)(**(long **)(lVar7 + 0xc0) + 0x80),4);
    puVar8 = (undefined4 *)thunk_FUN_0408f8bc();
    *puVar8 = 1;
    lVar7 = *(long *)(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x38);
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x40);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0406aaec();
    }
    FUN_0403164c(*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x140,0x10);
    puVar6 = (undefined8 *)thunk_FUN_0408f8bc();
    uVar19 = *(undefined8 *)(unaff_x29 + -0x90);
    puVar6[1] = *(undefined8 *)(unaff_x29 + -0x88);
    *puVar6 = uVar19;
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_0406aaec();
      uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    }
    pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x30);
    if ((uVar2 & 1) == 0) {
      FUN_0406aaec();
    }
    uVar19 = thunk_FUN_0408f8bc();
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    (*pcVar16)(uVar19,unaff_x29 + -0x40);
  }
  else {
    if ((uVar2 & 1) == 0) {
      FUN_0406aaec();
    }
    puVar6 = (undefined8 *)thunk_FUN_0408f8bc();
    plVar20 = (long *)*puVar6;
    if (plVar20 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_06b46930;
    }
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0406aaec();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0406aaec(lVar7);
    }
    lVar15 = *plVar20;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar9 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_06b4558c;
        }
        uVar17 = uVar17 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar17 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(plVar20,lVar7,1);
LAB_06b4558c:
    auVar21 = (*(code *)*puVar6)(plVar20,puVar6[1]);
    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_08f6db00 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    uVar19 = *(undefined8 *)puVar4;
    *(undefined1 (*) [16])(unaff_x29 + -0x40) = auVar21;
    uVar17 = FUN_0425a2e4(unaff_x29 + -0x40,uVar19);
    if ((uVar17 & 1) != 0) goto LAB_06b455d4;
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0406aaec();
    }
    FUN_0403164c(*(undefined8 *)(**(long **)(lVar7 + 0xc0) + 0x80),4);
    puVar8 = (undefined4 *)thunk_FUN_0408f8bc();
    *puVar8 = 0;
    lVar7 = *(long *)(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x38);
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x40);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0406aaec();
    }
    FUN_0403164c(*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x140,0x10);
    puVar6 = (undefined8 *)thunk_FUN_0408f8bc();
    uVar19 = *(undefined8 *)(unaff_x29 + -0x90);
    puVar6[1] = *(undefined8 *)(unaff_x29 + -0x88);
    *puVar6 = uVar19;
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_0406aaec();
      uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    }
    pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x30);
    if ((uVar2 & 1) == 0) {
      FUN_0406aaec();
    }
    uVar19 = thunk_FUN_0408f8bc();
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    (*pcVar16)(uVar19,unaff_x29 + -0x40);
  }
  goto LAB_06b46478;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar9 = piVar9 + 4;
    if (uVar17 == 0) break;
LAB_06b45e8c:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f8cf80) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_06b45fd4;
    }
  }
LAB_06b45ea4:
  puVar6 = (undefined8 *)FUN_0406ae20(plVar20,*(long *)PTR_DAT_08f8cf80,0);
LAB_06b45fd4:
  auVar21 = (*(code *)*puVar6)(plVar20,puVar6[1]);
  puVar4 = PTR_DAT_08f67a58;
  plVar20 = auVar21._0_8_;
  if (*(int *)(*(long *)PTR_DAT_08f67a58 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  *(undefined1 (*) [16])(unaff_x29 + -0x50) = auVar21;
  if (DAT_09539e0c == '\0') {
    FUN_0403162c(PTR_DAT_08f67a58);
    DAT_09539e0c = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  if (DAT_09539e0d == '\0') {
    FUN_0403162c(PTR_DAT_08f67c08);
    DAT_09539e0d = '\x01';
  }
  if (plVar20 != (long *)0x0) {
    lVar7 = *plVar20;
    uVar17 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar17 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f67c08) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06b460b4;
        }
        uVar17 = uVar17 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar17 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(plVar20,*(long *)PTR_DAT_08f67c08,0);
LAB_06b460b4:
    iVar5 = (*(code *)*puVar6)(plVar20,auVar21._8_8_ & 0xffffffff,puVar6[1]);
    if (iVar5 == 0) {
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0406aaec();
      }
      FUN_0403164c(*(undefined8 *)(**(long **)(lVar7 + 0xc0) + 0x80),4);
      puVar8 = (undefined4 *)thunk_FUN_0408f8bc();
      *puVar8 = 2;
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0406aaec();
      }
      FUN_0403164c(*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x160,0x10);
      pauVar12 = (undefined1 (*) [16])thunk_FUN_0408f8bc();
      *pauVar12 = auVar21;
      lVar7 = *(long *)(unaff_x19 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_0406aaec();
        uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      }
      pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x68);
      if ((uVar2 & 1) == 0) {
        FUN_0406aaec();
      }
      uVar19 = thunk_FUN_0408f8bc();
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      (*pcVar16)(uVar19,unaff_x29 + -0x50);
      goto LAB_06b46478;
    }
  }
LAB_06b460c8:
  if (DAT_09539e0e == '\0') {
    FUN_0403162c(PTR_DAT_08f67c08);
    DAT_09539e0e = '\x01';
  }
  plVar20 = *(long **)(unaff_x29 + -0x50);
  if (plVar20 != (long *)0x0) {
    lVar7 = *plVar20;
    uVar3 = *(undefined2 *)(unaff_x29 + -0x48);
    uVar17 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar17 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f67c08) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_06b4614c;
        }
        uVar17 = uVar17 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar17 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(plVar20,*(long *)PTR_DAT_08f67c08,2);
LAB_06b4614c:
    (*(code *)*puVar6)(plVar20,uVar3,puVar6[1]);
  }
LAB_06b4615c:
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0406aaec();
  }
  plVar20 = (long *)thunk_FUN_0408f8bc();
  plVar20 = (long *)*plVar20;
  if (plVar20 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_08f65af8 + 0x130);
    if ((*(byte *)(*plVar20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08f65af8))
    {
      if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_04031750();
      }
      goto LAB_06b46930;
    }
    lVar7 = FUN_07408528(plVar20,0);
    if (lVar7 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_06b46930;
    }
    FUN_074085e8(lVar7,0);
  }
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0406aaec();
  }
  piVar9 = (int *)thunk_FUN_0408f8bc();
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if (*piVar9 == 1) {
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    pvVar10 = (void *)thunk_FUN_0408f8bc();
    sVar18 = *(size_t *)(unaff_x29 + -0x70);
    memcpy(unaff_x22,pvVar10,sVar18);
    memcpy(*(void **)(unaff_x29 + -0x80),pvVar10,sVar18);
  }
  else {
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0406aaec();
    }
    FUN_0403164c(*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0xc0,8);
    puVar6 = (undefined8 *)thunk_FUN_0408f8bc();
    *puVar6 = 0;
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    pvVar10 = (void *)thunk_FUN_0408f8bc();
    memset(pvVar10,0,*(size_t *)(unaff_x29 + -0x70));
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0406aaec();
    }
    FUN_0403164c(*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0xa0,8);
    puVar6 = (undefined8 *)thunk_FUN_0408f8bc();
    *puVar6 = 0;
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0406aaec();
  }
  FUN_0403164c(*(undefined8 *)(**(long **)(lVar7 + 0xc0) + 0x80),4);
  puVar8 = (undefined4 *)thunk_FUN_0408f8bc();
  *puVar8 = 0xfffffffe;
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0406aaec();
  }
  FUN_0403164c(*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0xa0,8);
  puVar6 = (undefined8 *)thunk_FUN_0408f8bc();
  pvVar10 = *(void **)(unaff_x29 + -0x80);
  sVar18 = *(size_t *)(unaff_x29 + -0x70);
  *puVar6 = 0;
  memcpy(unaff_x22,pvVar10,sVar18);
  lVar15 = *(long *)(unaff_x19 + 0x20);
  uVar2 = *(ushort *)(lVar15 + 0x135);
  lVar7 = lVar15;
  if ((uVar2 & 1) == 0) {
    lVar15 = FUN_0406aaec(lVar15);
    uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar7 = *(long *)(unaff_x19 + 0x20);
  }
  uVar19 = **(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x78);
  lVar15 = lVar7;
  if ((uVar2 & 1) == 0) {
    lVar7 = FUN_0406aaec(lVar7);
    uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar15 = *(long *)(unaff_x19 + 0x20);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x78);
  if ((uVar2 & 1) == 0) {
    FUN_0406aaec(lVar15);
  }
  uVar11 = thunk_FUN_0408f8bc();
  lVar15 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_0406aaec(lVar15);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x50) + 0x28)) {
    unaff_x22 = (undefined8 *)*unaff_x22;
  }
  pcVar16 = *(code **)(lVar7 + 0x10);
  *(undefined8 **)(unaff_x29 + -0x10) = unaff_x22;
  (*pcVar16)(uVar19,lVar7,uVar11,unaff_x29 + -0x10,unaff_x22);
LAB_06b46478:
  if (*(long *)(*(long *)(unaff_x29 + -0x78) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_06b46930:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


