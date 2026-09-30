/*
FUNCTION_NAME: OVRManager$$SetColorScaleAndOffset_Internal
ENTRY_POINT: 0511ce6c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0511d24c) */
/* WARNING: Removing unreachable block (ram,0x0511d2b8) */

void OVRManager__SetColorScaleAndOffset_Internal(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *unaff_x25;
  long *unaff_x26;
  
  plVar9 = *(long **)(unaff_x20 + 0xf0);
  lVar10 = *unaff_x25;
  lVar11 = **(long **)(param_1 + 0xca8);
  lVar6 = *(long *)(lVar11 + 0x38);
  if (lVar6 == 0) {
    FUN_02d9a33c(lVar11);
    lVar6 = *(long *)(lVar11 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02d9a2e0();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar6 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02d9a2e0();
  }
  if (plVar9 == (long *)0x0) goto LAB_0511d2a4;
  uVar4 = (**(code **)(*plVar9 + 0x2b8))
                    (plVar9,lVar10,**(undefined8 **)(lVar6 + 0xb8),*(undefined8 *)(*plVar9 + 0x2c0))
  ;
  if ((*(ulong *)(unaff_x20 + 0xe8) & 0xff) != 0) {
    FUN_05126158(uVar4,*(undefined8 *)PTR_DAT_06780b20,*unaff_x25,
                 *(ulong *)(unaff_x20 + 0xe8) >> 0x20);
  }
  plVar9 = *(long **)(unaff_x20 + 0xf8);
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0511cf5c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar9,*unaff_x26,0);
LAB_0511cf5c:
    iVar3 = (*(code *)*puVar5)(plVar9,puVar5[1]);
    if (0 < iVar3) {
      plVar9 = (long *)*unaff_x25;
      if (plVar9 == (long *)0x0) goto LAB_0511d2a4;
      (**(code **)(*plVar9 + 0x5d8))
                (plVar9,*(undefined8 *)PTR_DAT_06780b40,*(undefined8 *)(*plVar9 + 0x5e0));
      plVar9 = *(long **)(unaff_x20 + 0xf8);
      if (plVar9 == (long *)0x0) goto LAB_0511d2a4;
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0511cfe8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar9,*unaff_x26,0);
LAB_0511cfe8:
      iVar3 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if (iVar3 != 1) {
        plVar9 = (long *)*unaff_x25;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x598))(plVar9,*(undefined8 *)(*plVar9 + 0x5a0));
          plVar9 = *(long **)(unaff_x20 + 0xf8);
          if (plVar9 != (long *)0x0) {
            lVar6 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06780ac8) {
                  puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_0511d0ec;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)PTR_DAT_06780ac8,0);
LAB_0511d0ec:
            plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
            puVar2 = PTR_DAT_06780ad0;
            puVar1 = PTR_DAT_0675f3d8;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            do {
              lVar6 = *plVar9;
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                    puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_0511d15c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar5 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar1,0);
LAB_0511d15c:
              uVar7 = (*(code *)*puVar5)(plVar9,puVar5[1]);
              if ((uVar7 & 1) == 0) goto LAB_0511d1d4;
              lVar6 = *plVar9;
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                    puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_0511d1b8;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar5 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar2,0);
LAB_0511d1b8:
              (*(code *)*puVar5)(plVar9,puVar5[1]);
              FUN_05126010();
            } while( true );
          }
        }
        goto LAB_0511d2a4;
      }
      plVar9 = *(long **)(unaff_x20 + 0xf8);
      if (plVar9 == (long *)0x0) goto LAB_0511d2a4;
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06780ad8) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0511d0c0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)PTR_DAT_06780ad8,0);
LAB_0511d0c0:
      (*(code *)*puVar5)(plVar9,0,puVar5[1]);
      FUN_05126010();
    }
  }
  goto LAB_0511d268;
LAB_0511d1d4:
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0511d234;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)PTR_DAT_0675f3d0,0);
LAB_0511d234:
    (*(code *)*puVar5)(plVar9,puVar5[1]);
  }
  plVar9 = (long *)*unaff_x25;
  if (plVar9 == (long *)0x0) goto LAB_0511d2a4;
  (**(code **)(*plVar9 + 0x5a8))(plVar9,*(undefined8 *)(*plVar9 + 0x5b0));
LAB_0511d268:
  plVar9 = (long *)*unaff_x25;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x588))(plVar9,*(undefined8 *)(*plVar9 + 0x590));
    return;
  }
LAB_0511d2a4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


