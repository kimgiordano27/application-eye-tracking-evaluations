/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.VisualizeEnvRaycast$$.ctor
ENTRY_POINT: 06e10b70
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06e11528) */

long * Meta_XR_MRUtilityKit_BuildingBlocks_VisualizeEnvRaycast___ctor(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  short *psVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar15;
  undefined8 uVar16;
  long *unaff_x27;
  undefined8 *unaff_x28;
  
  FUN_0710fcf0(param_1,0);
  uVar4 = FUN_07119344();
  if ((uVar4 & 1) == 0) {
    uVar15 = *(undefined8 *)PTR_DAT_08e80e98;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_0710fcf0(uVar15,0);
    uVar4 = FUN_07119344();
    if ((uVar4 & 1) == 0) {
      uVar15 = *(undefined8 *)PTR_DAT_08e80e48;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0710fcf0(uVar15,0);
      uVar4 = FUN_07119344();
      if ((uVar4 & 1) == 0) {
        if (unaff_x22 != (long *)0x0) {
          uVar4 = (**(code **)(*unaff_x22 + 0x5d8))();
          if ((uVar4 & 1) != 0) {
LAB_06e10d1c:
            uVar15 = (**(code **)(*unaff_x19 + 0x168))();
            plVar5 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e829c8);
            FUN_06e137a4(plVar5,uVar15,0);
            return plVar5;
          }
          uVar15 = (**(code **)(*unaff_x22 + 0x908))();
          uVar16 = *(undefined8 *)PTR_DAT_08e92c50;
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*unaff_x27);
          }
          uVar16 = FUN_0710fcf0(uVar16,0);
          puVar1 = PTR_DAT_08e92418;
          uVar4 = FUN_04611b74(uVar15,uVar16,*(undefined8 *)PTR_DAT_08e92418);
          if ((uVar4 & 1) == 0) {
            uVar15 = (**(code **)(*unaff_x22 + 0x908))();
            uVar16 = *(undefined8 *)PTR_DAT_08e81238;
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*unaff_x27);
            }
            uVar16 = FUN_0710fcf0(uVar16,0);
            uVar4 = FUN_04611b74(uVar15,uVar16,*(undefined8 *)puVar1);
            if ((uVar4 & 1) == 0) {
              uVar4 = FUN_0711b6f0();
              if (((uVar4 & 1) != 0) ||
                 ((uVar4 = FUN_0711b738(), (uVar4 & 1) != 0 &&
                  (uVar4 = FUN_0711b9a0(), (uVar4 & 1) == 0)))) {
                if (*(int *)(*(long *)PTR_DAT_08e76e18 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                plVar5 = (long *)FUN_06e11628();
                return plVar5;
              }
              FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e92d68);
              if (unaff_x20 != 0) {
                FUN_06f84868();
                goto LAB_06e10d1c;
              }
            }
            else {
              plVar5 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e83f30);
              FUN_06e13fcc(plVar5,0);
              puVar1 = PTR_DAT_08e80c40;
              lVar9 = thunk_FUN_03cf5138();
              if (lVar9 == 0) goto LAB_06e11518;
              lVar9 = *(long *)puVar1;
              plVar8 = (long *)thunk_FUN_03cf5138();
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fecc();
              }
              lVar13 = *plVar8;
              uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar4 != 0) {
                piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar9) {
                    puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_06e11300;
                  }
                  uVar4 = uVar4 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar4 != 0);
              }
              puVar6 = (undefined8 *)FUN_03cf1348(plVar8,lVar9,0);
LAB_06e11300:
              plVar8 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
              uVar15 = (**(code **)(*unaff_x22 + 0x458))();
              if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                thunk_FUN_03cd7500(*unaff_x27);
              }
              uVar4 = FUN_07119344(uVar15,0,0);
              if ((((uVar4 & 1) != 0) && (lVar9 = (**(code **)(*unaff_x22 + 0x498))(), lVar9 != 0))
                 && (*(long *)(lVar9 + 0x18) != 0)) {
                if ((int)*(long *)(lVar9 + 0x18) == 0) goto LAB_06e114bc;
                uVar15 = *(undefined8 *)(lVar9 + 0x20);
              }
              puVar3 = PTR_DAT_08e76e18;
              puVar2 = PTR_DAT_08e6a290;
              puVar1 = PTR_DAT_08e69d78;
              if (plVar8 != (long *)0x0) {
                do {
                  lVar13 = *plVar8;
                  lVar9 = *(long *)puVar2;
                  uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar4 != 0) {
                    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == lVar9) {
                        puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_06e113e0;
                      }
                      uVar4 = uVar4 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_03cf1348(plVar8,lVar9,0);
LAB_06e113e0:
                  uVar4 = (*(code *)*puVar6)(plVar8,puVar6[1]);
                  if ((uVar4 & 1) == 0) {
                    return plVar5;
                  }
                  lVar13 = *plVar8;
                  lVar9 = *(long *)puVar2;
                  uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar4 != 0) {
                    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == lVar9) {
                        puVar6 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                        goto LAB_06e11440;
                      }
                      uVar4 = uVar4 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_03cf1348(plVar8,lVar9,1);
LAB_06e11440:
                  uVar16 = (*(code *)*puVar6)(plVar8,puVar6[1]);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_03cd7500(*(long *)puVar3);
                  }
                  uVar16 = FUN_06e0e2d0(uVar15,uVar16);
                  uVar12 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
                  uVar16 = FUN_06e10658(uVar15,uVar16);
                  if (plVar5 == (long *)0x0) break;
                  (**(code **)(*plVar5 + 0x178))
                            (plVar5,uVar12,uVar16,*(undefined8 *)(*plVar5 + 0x180));
                } while( true );
              }
            }
          }
          else {
            plVar5 = (long *)thunk_FUN_03cf5138();
            if (plVar5 == (long *)0x0) {
LAB_06e11518:
                    /* WARNING: Subroutine does not return */
              FUN_03c8fecc();
            }
            plVar8 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e91108);
            FUN_06e13f44(plVar8,0);
            lVar9 = (**(code **)(*unaff_x22 + 0x498))();
            if (lVar9 != 0) {
              if (*(uint *)(lVar9 + 0x18) < 2) {
LAB_06e114bc:
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
              lVar13 = *plVar5;
              uVar15 = *(undefined8 *)(lVar9 + 0x28);
              uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar4 != 0) {
                piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08e819d0) {
                    puVar6 = (undefined8 *)(lVar13 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                    goto LAB_06e10fb0;
                  }
                  uVar4 = uVar4 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar4 != 0);
              }
              puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e819d0,2);
LAB_06e10fb0:
              plVar10 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
              if (plVar10 != (long *)0x0) {
                lVar9 = *plVar10;
                uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar4 != 0) {
                  piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08e80c40) {
                      puVar6 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_06e11018;
                    }
                    uVar4 = uVar4 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar4 != 0);
                }
                puVar6 = (undefined8 *)FUN_03cf1348(plVar10,*(long *)PTR_DAT_08e80c40,0);
LAB_06e11018:
                plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
                puVar1 = PTR_DAT_08e6a290;
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                do {
                  lVar13 = *plVar10;
                  lVar9 = *(long *)puVar1;
                  uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar4 != 0) {
                    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == lVar9) {
                        puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_06e11080;
                      }
                      uVar4 = uVar4 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_03cf1348(plVar10,lVar9,0);
LAB_06e11080:
                  uVar4 = (*(code *)*puVar6)(plVar10,puVar6[1]);
                  puVar2 = PTR_DAT_08e6a288;
                  if ((uVar4 & 1) == 0) {
                    plVar5 = (long *)thunk_FUN_03cf5138(plVar10,*(undefined8 *)PTR_DAT_08e6a288);
                    if (plVar5 == (long *)0x0) {
                      return plVar8;
                    }
                    lVar9 = *plVar5;
                    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar4 == 0) goto LAB_06e11270;
                    piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    goto LAB_06e11258;
                  }
                  lVar13 = *plVar10;
                  lVar9 = *(long *)puVar1;
                  uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar4 != 0) {
                    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == lVar9) {
                        puVar6 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                        goto LAB_06e110e0;
                      }
                      uVar4 = uVar4 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_03cf1348(plVar10,lVar9,1);
LAB_06e110e0:
                  plVar11 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
                  lVar9 = *plVar5;
                  uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar4 != 0) {
                    piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08e819d0) {
                        puVar6 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_06e11144;
                      }
                      uVar4 = uVar4 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e819d0,0);
LAB_06e11144:
                  lVar9 = (*(code *)*puVar6)(plVar5,plVar11,puVar6[1]);
                  if (lVar9 == 0) {
                    uVar16 = *unaff_x28;
                    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                      thunk_FUN_03cd7500();
                    }
                    uVar16 = FUN_0710fcf0(uVar16,0);
                    uVar4 = FUN_07119344(uVar15,uVar16,0);
                    if ((uVar4 & 1) == 0) {
                      lVar9 = FUN_0712c438(uVar15,0);
                    }
                    else {
                      lVar9 = **(long **)(*(long *)PTR_DAT_08e69d78 + 0xb8);
                    }
                  }
                  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fb30();
                  }
                  uVar16 = (**(code **)(*plVar11 + 0x168))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x170));
                  if (*(int *)(*(long *)PTR_DAT_08e76e18 + 0xe0) == 0) {
                    thunk_FUN_03cd7500();
                  }
                  uVar12 = FUN_06e10658(uVar15,lVar9);
                  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fb30();
                  }
                  (**(code **)(*plVar8 + 0x178))
                            (plVar8,uVar16,uVar12,*(undefined8 *)(*plVar8 + 0x180));
                } while( true );
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      plVar5 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e829c8);
      if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_08e75a38 + 0x40)) {
        plVar8 = (long *)thunk_FUN_03cf5388();
        FUN_06e14a34((float)*plVar8,plVar5,0);
        return plVar5;
      }
    }
    else {
      plVar5 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e829c8);
      if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_08e80ea0 + 0x40)) {
        psVar7 = (short *)thunk_FUN_03cf5388();
        FUN_06e1498c(plVar5,(long)*psVar7,0);
        return plVar5;
      }
    }
  }
  else {
    plVar5 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e829c8);
    if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_08e698e8 + 0x40)) {
      puVar6 = (undefined8 *)thunk_FUN_03cf5388();
      FUN_06e149c4(*puVar6,plVar5,0);
      return plVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fecc();
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar14 = piVar14 + 4;
    if (uVar4 == 0) break;
LAB_06e11258:
    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_06e112dc;
    }
  }
LAB_06e11270:
  puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar2,0);
LAB_06e112dc:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return plVar8;
}


