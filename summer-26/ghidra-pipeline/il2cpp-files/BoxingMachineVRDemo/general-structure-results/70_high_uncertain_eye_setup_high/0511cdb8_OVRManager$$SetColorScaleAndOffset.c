/*
FUNCTION_NAME: OVRManager$$SetColorScaleAndOffset
ENTRY_POINT: 0511cdb8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0511d24c) */
/* WARNING: Removing unreachable block (ram,0x0511d2b8) */

void OVRManager__SetColorScaleAndOffset(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long in_x10;
  int *piVar9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar10;
  int unaff_w23;
  long lVar11;
  long *unaff_x25;
  long *unaff_x26;
  
  lVar7 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == **(long **)(in_x10 + 0x3d0)) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0511ce08;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_0511ce08:
  (*(code *)*puVar4)();
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae0();
  }
  if ((unaff_w23 != 0xb) && (unaff_w23 != 0)) {
    return;
  }
  plVar5 = (long *)*unaff_x25;
  if (plVar5 == (long *)0x0) goto LAB_0511d2a4;
  uVar6 = (**(code **)(*plVar5 + 0x5a8))(plVar5,*(undefined8 *)(*plVar5 + 0x5b0));
  if (*(long *)(unaff_x20 + 0xf0) != 0) {
    plVar5 = (long *)*unaff_x25;
    if (plVar5 == (long *)0x0) goto LAB_0511d2a4;
    (**(code **)(*plVar5 + 0x5d8))
              (plVar5,*(undefined8 *)PTR_DAT_0676a770,*(undefined8 *)(*plVar5 + 0x5e0));
    plVar5 = *(long **)(unaff_x20 + 0xf0);
    lVar10 = *unaff_x25;
    lVar11 = *(long *)PTR_DAT_0677eca8;
    lVar7 = *(long *)(lVar11 + 0x38);
    if (lVar7 == 0) {
      FUN_02d9a33c(lVar11);
      lVar7 = *(long *)(lVar11 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar7 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02d9a2e0();
    }
    if (plVar5 == (long *)0x0) goto LAB_0511d2a4;
    uVar6 = (**(code **)(*plVar5 + 0x2b8))
                      (plVar5,lVar10,**(undefined8 **)(lVar7 + 0xb8),
                       *(undefined8 *)(*plVar5 + 0x2c0));
  }
  if ((*(ulong *)(unaff_x20 + 0xe8) & 0xff) != 0) {
    FUN_05126158(uVar6,*(undefined8 *)PTR_DAT_06780b20,*unaff_x25,
                 *(ulong *)(unaff_x20 + 0xe8) >> 0x20);
  }
  plVar5 = *(long **)(unaff_x20 + 0xf8);
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0511cf5c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4(plVar5,*unaff_x26,0);
LAB_0511cf5c:
    iVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if (0 < iVar3) {
      plVar5 = (long *)*unaff_x25;
      if (plVar5 == (long *)0x0) goto LAB_0511d2a4;
      (**(code **)(*plVar5 + 0x5d8))
                (plVar5,*(undefined8 *)PTR_DAT_06780b40,*(undefined8 *)(*plVar5 + 0x5e0));
      plVar5 = *(long **)(unaff_x20 + 0xf8);
      if (plVar5 == (long *)0x0) goto LAB_0511d2a4;
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0511cfe8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4(plVar5,*unaff_x26,0);
LAB_0511cfe8:
      iVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if (iVar3 != 1) {
        plVar5 = (long *)*unaff_x25;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x598))(plVar5,*(undefined8 *)(*plVar5 + 0x5a0));
          plVar5 = *(long **)(unaff_x20 + 0xf8);
          if (plVar5 != (long *)0x0) {
            lVar7 = *plVar5;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06780ac8) {
                  puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_0511d0ec;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_06780ac8,0);
LAB_0511d0ec:
            plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
            puVar2 = PTR_DAT_06780ad0;
            puVar1 = PTR_DAT_0675f3d8;
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            do {
              lVar7 = *plVar5;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                    puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_0511d15c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)puVar1,0);
LAB_0511d15c:
              uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
              if ((uVar8 & 1) == 0) goto LAB_0511d1d4;
              lVar7 = *plVar5;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                    puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_0511d1b8;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)puVar2,0);
LAB_0511d1b8:
              (*(code *)*puVar4)(plVar5,puVar4[1]);
              FUN_05126010();
            } while( true );
          }
        }
        goto LAB_0511d2a4;
      }
      plVar5 = *(long **)(unaff_x20 + 0xf8);
      if (plVar5 == (long *)0x0) goto LAB_0511d2a4;
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06780ad8) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0511d0c0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_06780ad8,0);
LAB_0511d0c0:
      (*(code *)*puVar4)(plVar5,0,puVar4[1]);
      FUN_05126010();
    }
  }
  goto LAB_0511d268;
LAB_0511d1d4:
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0511d234;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_0675f3d0,0);
LAB_0511d234:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  plVar5 = (long *)*unaff_x25;
  if (plVar5 == (long *)0x0) goto LAB_0511d2a4;
  (**(code **)(*plVar5 + 0x5a8))(plVar5,*(undefined8 *)(*plVar5 + 0x5b0));
LAB_0511d268:
  plVar5 = (long *)*unaff_x25;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x588))(plVar5,*(undefined8 *)(*plVar5 + 0x590));
    return;
  }
LAB_0511d2a4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


