/*
FUNCTION_NAME: Unity.AppUI.UI.BaseSlider.UxmlSerializedData<int,-int>$$Deserialize
ENTRY_POINT: 05018a90
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_AppUI_UI_BaseSlider_UxmlSerializedData<int,_int>__Deserialize(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  
  if ((param_1 & 1) == 0) {
    FUN_0367c9fc();
  }
  if (unaff_x19 != 0) {
    uVar3 = FUN_07326618();
    if (((uVar3 & 1) == 0) || (*(long *)(unaff_x19 + 0x340) == 0)) {
      return;
    }
    fVar14 = *(float *)(unaff_x19 + 0x2dc);
    fVar9 = (float)FUN_07321e54();
    if (*(long *)(unaff_x19 + 0x340) != 0) {
      fVar10 = (float)FUN_07321e54(*(long *)(unaff_x19 + 0x340),0);
      if ((*(long *)(unaff_x19 + 0x340) != 0) &&
         (plVar4 = (long *)FUN_073199bc(*(long *)(unaff_x19 + 0x340),0), puVar1 = PTR_DAT_079fe6d0,
         plVar4 != (long *)0x0)) {
        lVar6 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_079fe6d0) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x2c) * 0x10 + 0x138);
              goto LAB_05018b54;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_0367cd30(plVar4,*(long *)PTR_DAT_079fe6d0,0x2c);
LAB_05018b54:
        fVar11 = (float)(*(code *)*puVar5)(plVar4,puVar5[1]);
        plVar4 = (long *)FUN_073199bc();
        if (plVar4 != (long *)0x0) {
          lVar6 = *plVar4;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x2c) * 0x10 + 0x138);
                goto LAB_05018bc8;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_0367cd30(plVar4,*(long *)puVar1,0x2c);
LAB_05018bc8:
          fVar12 = (float)(*(code *)*puVar5)(plVar4,puVar5[1]);
          fVar15 = *(float *)(unaff_x19 + 0x2e0);
          plVar4 = (long *)FUN_073199bc();
          if (plVar4 != (long *)0x0) {
            lVar6 = *plVar4;
            uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar3 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x2c) * 0x10 + 0x138);
                  goto LAB_05018c40;
                }
                uVar3 = uVar3 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar3 != 0);
            }
            puVar5 = (undefined8 *)FUN_0367cd30(plVar4,*(long *)puVar1,0x2c);
LAB_05018c40:
            fVar13 = (float)(*(code *)*puVar5)(plVar4,puVar5[1]);
            lVar6 = *(long *)(unaff_x19 + 0x338);
            if (lVar6 == 0) {
              lVar6 = *(long *)(unaff_x19 + 0x340);
            }
            if (*(long *)(unaff_x19 + 0x318) != 0) {
              fVar11 = (fVar9 - fVar10) - fVar11;
              plVar4 = (long *)FUN_07320328(*(long *)(unaff_x19 + 0x318),0);
              auVar16 = FUN_073408a4((fVar15 - fVar11) - fVar13,0);
              puVar2 = PTR_DAT_079fe6d8;
              if (plVar4 != (long *)0x0) {
                lVar7 = *plVar4;
                uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar3 != 0) {
                  piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_079fe6d8) {
                      puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 0x55) * 0x10 + 0x138);
                      goto LAB_05018cf0;
                    }
                    uVar3 = uVar3 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar3 != 0);
                }
                puVar5 = (undefined8 *)FUN_0367cd30(plVar4,*(long *)PTR_DAT_079fe6d8,0x55);
LAB_05018cf0:
                (*(code *)*puVar5)(plVar4,auVar16._0_8_,auVar16._8_8_ & 0xffffffff,puVar5[1]);
                if ((lVar6 != 0) && (plVar4 = (long *)FUN_073199bc(lVar6,0), plVar4 != (long *)0x0))
                {
                  lVar6 = *plVar4;
                  uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar3 != 0) {
                    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x4e) * 0x10 + 0x138);
                        goto LAB_05018d6c;
                      }
                      uVar3 = uVar3 - 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar3 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_0367cd30(plVar4,*(long *)puVar1,0x4e);
LAB_05018d6c:
                  fVar9 = (float)(*(code *)*puVar5)(plVar4,puVar5[1]);
                  if (*(long *)(unaff_x19 + 0x318) != 0) {
                    fVar10 = *(float *)(unaff_x19 + 0x2d8);
                    plVar4 = (long *)FUN_073199bc(*(long *)(unaff_x19 + 0x318),0);
                    if (plVar4 != (long *)0x0) {
                      lVar6 = *plVar4;
                      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
                      fVar9 = (float)(int)(fVar9 * fVar10) - (fVar14 + fVar11 + fVar12);
                      if (uVar3 != 0) {
                        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x4e) * 0x10 + 0x138);
                            goto LAB_05018dfc;
                          }
                          uVar3 = uVar3 - 1;
                          piVar8 = piVar8 + 4;
                        } while (uVar3 != 0);
                      }
                      puVar5 = (undefined8 *)FUN_0367cd30(plVar4,*(long *)puVar1,0x4e);
LAB_05018dfc:
                      fVar14 = (float)(*(code *)*puVar5)(plVar4,puVar5[1]);
                      if (ABS(fVar14 - fVar9) <= DAT_01650d9c) {
                        return;
                      }
                      if (*(long *)(unaff_x19 + 0x318) != 0) {
                        plVar4 = (long *)FUN_07320328(*(long *)(unaff_x19 + 0x318),0);
                        fVar14 = 0.0;
                        if (0.0 <= fVar9) {
                          fVar14 = fVar9;
                        }
                        auVar16 = FUN_073408a4(fVar14,0);
                        if (plVar4 != (long *)0x0) {
                          lVar6 = *plVar4;
                          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
                          if (uVar3 != 0) {
                            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                                puVar5 = (undefined8 *)
                                         (lVar6 + (long)(*piVar8 + 0xa7) * 0x10 + 0x138);
                                goto LAB_05018ec0;
                              }
                              uVar3 = uVar3 - 1;
                              piVar8 = piVar8 + 4;
                            } while (uVar3 != 0);
                          }
                          puVar5 = (undefined8 *)FUN_0367cd30(plVar4,*(long *)puVar2,0xa7);
LAB_05018ec0:
                    /* WARNING: Could not recover jumptable at 0x05018eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*(code *)*puVar5)(plVar4,auVar16._0_8_,auVar16._8_8_ & 0xffffffff,
                                             puVar5[1]);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


