/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.VisualizeEnvRaycast$$Awake
ENTRY_POINT: 06e108bc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06e11528) */

long * Meta_XR_MRUtilityKit_BuildingBlocks_VisualizeEnvRaycast__Awake(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 *puVar6;
  uint *puVar7;
  float *pfVar8;
  undefined8 *puVar9;
  short *psVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  int *piVar17;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar18;
  long unaff_x24;
  undefined8 uVar19;
  long unaff_x25;
  long *unaff_x27;
  float fVar20;
  
  do {
                    /* catch() { ... } // from try @ 06e1083c with catch @ 06e108bc
                       catch() { ... } // from try @ 06e10844 with catch @ 06e108bc */
                    /* catch() { ... } // from try @ 06e10834 with catch @ 06e108c0
                       catch() { ... } // from try @ 06e10840 with catch @ 06e108c0 */
                    /* catch() { ... } // from try @ 06e102a8 with catch @ 06e108c4 */
                    /* catch() { ... } // from try @ 06e103e4 with catch @ 06e108c8 */
    uVar4 = (**(code **)(param_1 + 0x198))(unaff_x23);
                    /* catch() { ... } // from try @ 06e10828 with catch @ 06e108cc
                       catch() { ... } // from try @ 06e10830 with catch @ 06e108cc */
    if ((uVar4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x06e10ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar5 = (long *)(**(code **)(*unaff_x23 + 0x1b8))(unaff_x23);
      return plVar5;
    }
    do {
      unaff_x24 = unaff_x24 + 1;
                    /* catch() { ... } // from try @ 06e10048 with catch @ 06e108d8 */
                    /* catch() { ... } // from try @ 06e10000 with catch @ 06e108dc */
      if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)(uint)unaff_x24) {
                    /* catch() { ... } // from try @ 06e1009c with catch @ 06e108e0 */
        if (unaff_x19 == (long *)0x0) {
          return (long *)0x0;
        }
                    /* catch() { ... } // from try @ 06e10818 with catch @ 06e108e4 */
                    /* catch() { ... } // from try @ 06e100b4 with catch @ 06e108e8 */
                    /* catch() { ... } // from try @ 06e10814 with catch @ 06e108ec */
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 06e10810 with catch @ 06e108f0 */
          thunk_FUN_03cd7500();
        }
                    /* catch() { ... } // from try @ 06e100c8 with catch @ 06e108f4 */
                    /* catch() { ... } // from try @ 06e10114 with catch @ 06e108f8 */
                    /* catch() { ... } // from try @ 06e10090 with catch @ 06e108fc */
                    /* catch() { ... } // from try @ 06e1080c with catch @ 06e10900 */
        uVar4 = FUN_07119344();
        puVar1 = PTR_DAT_08e810f0;
                    /* catch() { ... } // from try @ 06e10078 with catch @ 06e10904 */
        if ((uVar4 & 1) != 0) {
          thunk_FUN_03ce5214(PTR_DAT_08e76350);
          uVar18 = thunk_FUN_03cf5234();
          uVar19 = thunk_FUN_03ce5214(PTR_DAT_08e92d70);
          FUN_07064ba8(uVar18,uVar19,0);
          uVar19 = thunk_FUN_03ce5214(PTR_DAT_08e92d78);
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar18,uVar19);
        }
                    /* catch() { ... } // from try @ 06e1006c with catch @ 06e10908 */
                    /* catch() { ... } // from try @ 06e10808 with catch @ 06e1090c */
                    /* catch() { ... } // from try @ 06e1081c with catch @ 06e10910 */
        uVar18 = *(undefined8 *)PTR_DAT_08e810f0;
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
                    /* try { // try from 06e10928 to 06f1092b has its CatchHandler @ 06e10954 */
                    /* try { // try from 06e1092c to 06f10963 has its CatchHandler @ 06e0fcbc */
        FUN_0710fcf0(uVar18,0);
        uVar4 = FUN_07119344();
        if ((uVar4 & 1) == 0) {
          uVar18 = *(undefined8 *)PTR_DAT_08e79fa0;
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          FUN_0710fcf0(uVar18,0);
          uVar4 = FUN_07119344();
          if ((uVar4 & 1) == 0) {
            uVar18 = *(undefined8 *)PTR_DAT_08e80c78;
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            FUN_0710fcf0(uVar18,0);
            uVar4 = FUN_07119344();
            if ((uVar4 & 1) == 0) {
              uVar18 = *(undefined8 *)PTR_DAT_08e80e50;
              if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              FUN_0710fcf0(uVar18,0);
              uVar4 = FUN_07119344();
              if ((uVar4 & 1) == 0) {
                uVar18 = *(undefined8 *)PTR_DAT_08e80e40;
                if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                FUN_0710fcf0(uVar18,0);
                uVar4 = FUN_07119344();
                if ((uVar4 & 1) == 0) {
                  uVar18 = *(undefined8 *)PTR_DAT_08e80e98;
                  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                    thunk_FUN_03cd7500();
                  }
                  FUN_0710fcf0(uVar18,0);
                  uVar4 = FUN_07119344();
                  if ((uVar4 & 1) == 0) {
                    uVar18 = *(undefined8 *)PTR_DAT_08e80e48;
                    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                      thunk_FUN_03cd7500();
                    }
                    FUN_0710fcf0(uVar18,0);
                    uVar4 = FUN_07119344();
                    if ((uVar4 & 1) == 0) {
                      if (unaff_x22 == (long *)0x0) goto LAB_06e114b8;
                      uVar4 = (**(code **)(*unaff_x22 + 0x5d8))();
                      if ((uVar4 & 1) != 0) {
LAB_06e10d1c:
                        uVar18 = (**(code **)(*unaff_x19 + 0x168))();
                        plVar5 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e829c8);
                        FUN_06e137a4(plVar5,uVar18,0);
                        return plVar5;
                      }
                      uVar18 = (**(code **)(*unaff_x22 + 0x908))();
                      uVar19 = *(undefined8 *)PTR_DAT_08e92c50;
                      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                        thunk_FUN_03cd7500(*unaff_x27);
                      }
                      uVar19 = FUN_0710fcf0(uVar19,0);
                      puVar3 = PTR_DAT_08e92418;
                      uVar4 = FUN_04611b74(uVar18,uVar19,*(undefined8 *)PTR_DAT_08e92418);
                      if ((uVar4 & 1) == 0) {
                        uVar18 = (**(code **)(*unaff_x22 + 0x908))();
                        uVar19 = *(undefined8 *)PTR_DAT_08e81238;
                        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                          thunk_FUN_03cd7500(*unaff_x27);
                        }
                        uVar19 = FUN_0710fcf0(uVar19,0);
                        uVar4 = FUN_04611b74(uVar18,uVar19,*(undefined8 *)puVar3);
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
                          goto LAB_06e114b8;
                        }
                        plVar5 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e83f30);
                        FUN_06e13fcc(plVar5,0);
                        puVar1 = PTR_DAT_08e80c40;
                        lVar12 = thunk_FUN_03cf5138();
                        if (lVar12 != 0) {
                          lVar12 = *(long *)puVar1;
                          plVar11 = (long *)thunk_FUN_03cf5138();
                          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03c8fecc();
                          }
                          lVar16 = *plVar11;
                          uVar4 = (ulong)*(ushort *)(lVar16 + 0x12e);
                          if (uVar4 == 0) goto LAB_06e10f38;
                          piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                          goto LAB_06e10f20;
                        }
                      }
                      else {
                        plVar5 = (long *)thunk_FUN_03cf5138();
                        if (plVar5 != (long *)0x0) {
                          plVar11 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e91108);
                          FUN_06e13f44(plVar11,0);
                          lVar12 = (**(code **)(*unaff_x22 + 0x498))();
                          if (lVar12 == 0) goto LAB_06e114b8;
                          if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_06e114bc;
                          lVar16 = *plVar5;
                          uVar18 = *(undefined8 *)(lVar12 + 0x28);
                          uVar4 = (ulong)*(ushort *)(lVar16 + 0x12e);
                          if (uVar4 == 0) goto LAB_06e10e54;
                          piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                          goto LAB_06e10e3c;
                        }
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_03c8fecc();
                    }
                    plVar5 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e829c8);
                    if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_08e75a38 + 0x40))
                    {
                      plVar11 = (long *)thunk_FUN_03cf5388();
                      fVar20 = (float)*plVar11;
                      goto LAB_06e10b40;
                    }
                  }
                  else {
                    plVar5 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e829c8);
                    if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_08e80ea0 + 0x40))
                    {
                      psVar10 = (short *)thunk_FUN_03cf5388();
                      uVar4 = (ulong)*psVar10;
                      goto LAB_06e10a88;
                    }
                  }
                }
                else {
                  plVar5 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e829c8);
                  if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_08e698e8 + 0x40)) {
                    puVar9 = (undefined8 *)thunk_FUN_03cf5388();
                    FUN_06e149c4(*puVar9,plVar5,0);
                    return plVar5;
                  }
                }
              }
              else {
                plVar5 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e829c8);
                if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_08e69880 + 0x40)) {
                  pfVar8 = (float *)thunk_FUN_03cf5388();
                  fVar20 = *pfVar8;
LAB_06e10b40:
                  FUN_06e14a34(fVar20,plVar5,0);
                  return plVar5;
                }
              }
            }
            else {
              plVar5 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e829c8);
              if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_08e699d0 + 0x40)) {
                puVar7 = (uint *)thunk_FUN_03cf5388();
                uVar4 = (ulong)*puVar7;
LAB_06e10a88:
                FUN_06e1498c(plVar5,uVar4,0);
                return plVar5;
              }
            }
          }
          else {
            plVar5 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e829c8);
            if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_08e69860 + 0x40)) {
              puVar6 = (undefined1 *)thunk_FUN_03cf5388();
              FUN_06e149fc(plVar5,*puVar6,0);
              return plVar5;
            }
          }
        }
        else {
          plVar5 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e829c8);
          if (*unaff_x19 == *(long *)PTR_DAT_08e69d78) {
            FUN_06e137a4();
            return plVar5;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc();
      }
      if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x24) goto LAB_06e114bc;
      unaff_x23 = *(long **)(unaff_x25 + unaff_x24 * 8);
      if (unaff_x23 == (long *)0x0) goto LAB_06e114b8;
      uVar4 = (**(code **)(*unaff_x23 + 0x188))(unaff_x23,*(undefined8 *)(*unaff_x23 + 400));
    } while ((uVar4 & 1) == 0);
    param_1 = *unaff_x23;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar17 = piVar17 + 4;
    if (uVar4 == 0) break;
LAB_06e10e3c:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08e819d0) {
      puVar9 = (undefined8 *)(lVar16 + (long)(*piVar17 + 2) * 0x10 + 0x138);
      goto LAB_06e10fb0;
    }
  }
LAB_06e10e54:
  puVar9 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e819d0,2);
LAB_06e10fb0:
  plVar13 = (long *)(*(code *)*puVar9)(plVar5,puVar9[1]);
  if (plVar13 != (long *)0x0) {
    lVar12 = *plVar13;
    uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08e80c40) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_06e11018;
        }
        uVar4 = uVar4 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar4 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)PTR_DAT_08e80c40,0);
LAB_06e11018:
    plVar13 = (long *)(*(code *)*puVar9)(plVar13,puVar9[1]);
    puVar3 = PTR_DAT_08e6a290;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar16 = *plVar13;
      lVar12 = *(long *)puVar3;
      uVar4 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar12) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06e11080;
          }
          uVar4 = uVar4 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar4 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar13,lVar12,0);
LAB_06e11080:
      uVar4 = (*(code *)*puVar9)(plVar13,puVar9[1]);
      puVar2 = PTR_DAT_08e6a288;
      if ((uVar4 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_03cf5138(plVar13,*(undefined8 *)PTR_DAT_08e6a288);
        if (plVar5 == (long *)0x0) {
          return plVar11;
        }
        lVar12 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar4 == 0) goto LAB_06e11270;
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_06e11258;
      }
      lVar16 = *plVar13;
      lVar12 = *(long *)puVar3;
      uVar4 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar12) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_06e110e0;
          }
          uVar4 = uVar4 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar4 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar13,lVar12,1);
LAB_06e110e0:
      plVar14 = (long *)(*(code *)*puVar9)(plVar13,puVar9[1]);
      lVar12 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08e819d0) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06e11144;
          }
          uVar4 = uVar4 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar4 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e819d0,0);
LAB_06e11144:
      lVar12 = (*(code *)*puVar9)(plVar5,plVar14,puVar9[1]);
      if (lVar12 == 0) {
        uVar19 = *(undefined8 *)puVar1;
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar19 = FUN_0710fcf0(uVar19,0);
        uVar4 = FUN_07119344(uVar18,uVar19,0);
        if ((uVar4 & 1) == 0) {
          lVar12 = FUN_0712c438(uVar18,0);
        }
        else {
          lVar12 = **(long **)(*(long *)PTR_DAT_08e69d78 + 0xb8);
        }
      }
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar19 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
      if (*(int *)(*(long *)PTR_DAT_08e76e18 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar15 = FUN_06e10658(uVar18,lVar12);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      (**(code **)(*plVar11 + 0x178))(plVar11,uVar19,uVar15,*(undefined8 *)(*plVar11 + 0x180));
    } while( true );
  }
  goto LAB_06e114b8;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar17 = piVar17 + 4;
    if (uVar4 == 0) break;
LAB_06e11258:
    if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_06e112dc;
    }
  }
LAB_06e11270:
  puVar9 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar2,0);
LAB_06e112dc:
  (*(code *)*puVar9)(plVar5,puVar9[1]);
  return plVar11;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar17 = piVar17 + 4;
    if (uVar4 == 0) break;
LAB_06e10f20:
    if (*(long *)(piVar17 + -2) == lVar12) {
      puVar9 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_06e11300;
    }
  }
LAB_06e10f38:
  puVar9 = (undefined8 *)FUN_03cf1348(plVar11,lVar12,0);
LAB_06e11300:
  plVar11 = (long *)(*(code *)*puVar9)(plVar11,puVar9[1]);
  uVar18 = (**(code **)(*unaff_x22 + 0x458))();
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*unaff_x27);
  }
  uVar4 = FUN_07119344(uVar18,0,0);
  if ((((uVar4 & 1) != 0) && (lVar12 = (**(code **)(*unaff_x22 + 0x498))(), lVar12 != 0)) &&
     (*(long *)(lVar12 + 0x18) != 0)) {
    if ((int)*(long *)(lVar12 + 0x18) == 0) {
LAB_06e114bc:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    uVar18 = *(undefined8 *)(lVar12 + 0x20);
  }
  puVar2 = PTR_DAT_08e76e18;
  puVar3 = PTR_DAT_08e6a290;
  puVar1 = PTR_DAT_08e69d78;
  if (plVar11 != (long *)0x0) {
    do {
      lVar16 = *plVar11;
      lVar12 = *(long *)puVar3;
      uVar4 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar12) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06e113e0;
          }
          uVar4 = uVar4 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar4 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar11,lVar12,0);
LAB_06e113e0:
      uVar4 = (*(code *)*puVar9)(plVar11,puVar9[1]);
      if ((uVar4 & 1) == 0) {
        return plVar5;
      }
      lVar16 = *plVar11;
      lVar12 = *(long *)puVar3;
      uVar4 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar12) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_06e11440;
          }
          uVar4 = uVar4 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar4 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar11,lVar12,1);
LAB_06e11440:
      uVar19 = (*(code *)*puVar9)(plVar11,puVar9[1]);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)puVar2);
      }
      uVar19 = FUN_06e0e2d0(uVar18,uVar19);
      uVar15 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
      uVar19 = FUN_06e10658(uVar18,uVar19);
      if (plVar5 == (long *)0x0) break;
      (**(code **)(*plVar5 + 0x178))(plVar5,uVar15,uVar19,*(undefined8 *)(*plVar5 + 0x180));
    } while( true );
  }
LAB_06e114b8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


