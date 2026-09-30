/*
FUNCTION_NAME: FUN_02902028
ENTRY_POINT: 02902028
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_02902028(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  int *piVar16;
  undefined1 auStack_58 [16];
  long lStack_48;
  undefined *puVar10;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000007233c3a & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06df2be8);
                    /* try { // try from 02902074 to 02a020c7 has its CatchHandler @ 02902104 */
    thunk_FUN_0159f088(PTR_DAT_06e0ce20);
    thunk_FUN_0159f088(PTR_DAT_06e18670);
    thunk_FUN_0159f088(PTR_DAT_06ddaad8);
    thunk_FUN_0159f088(PTR_DAT_06e56f18);
    thunk_FUN_0159f088(PTR_DAT_06d98c30);
    thunk_FUN_0159f088(PTR_DAT_06e01080);
    thunk_FUN_0159f088(PTR_DAT_06deb360);
                    /* try { // try from 029020c8 to 02a020f7 has its CatchHandler @ 02902020 */
    thunk_FUN_0159f088(PTR_DAT_06e467c0);
    thunk_FUN_0159f088(PTR_DAT_06e1faf8);
    thunk_FUN_0159f088(PTR_DAT_06e199e0);
    thunk_FUN_0159f088(PTR_DAT_06e5e6c8);
    thunk_FUN_0159f088(PTR_DAT_06e10ca0);
    thunk_FUN_0159f088(PTR_DAT_06dc26f0);
    thunk_FUN_0159f088(PTR_DAT_06dc2fe0);
    thunk_FUN_0159f088(PTR_DAT_06dd3570);
    thunk_FUN_0159f088(PTR_DAT_06e4c678);
    bRam0000000007233c3a = 1;
  }
  puVar10 = PTR_DAT_06deb360;
  if (param_2 == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e01970);
    uVar12 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    uVar9 = thunk_FUN_0159f088(PTR_DAT_06e3fa30);
    FUN_028f2804(uVar12,uVar9);
    goto LAB_02902c08;
  }
  if (param_1 == 0) {
    uVar15 = FUN_031d42e4(param_2,0);
    if ((uVar15 & 1) != 0) {
      thunk_FUN_0159f088(PTR_DAT_06e1d950);
      uVar12 = thunk_FUN_015d056c();
      FUN_011a9bc8();
      puVar10 = PTR_DAT_06df4d28;
LAB_02902578:
      uVar9 = thunk_FUN_0159f088(puVar10);
      FUN_032192a4(uVar12,uVar9,0);
LAB_02902c08:
      uVar9 = thunk_FUN_0159f088(PTR_DAT_06da7538);
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar12,uVar9);
    }
  }
  else {
    plVar6 = (long *)thunk_FUN_015d0480(param_1,*(undefined8 *)PTR_DAT_06deb360);
    puVar3 = PTR_DAT_06ddaad8;
    puVar2 = PTR_DAT_06dc26f0;
    if (plVar6 == (long *)0x0) {
      uVar12 = thunk_FUN_0164ba04(param_1,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar2);
      }
      uVar15 = FUN_031d212c(uVar12,param_2,0);
      if ((uVar15 & 1) == 0) {
        thunk_FUN_0159f088(PTR_DAT_06e1d950);
        uVar12 = thunk_FUN_015d056c();
        FUN_011a9bc8();
        puVar10 = PTR_DAT_06e69c48;
        goto LAB_02902578;
      }
    }
    else {
      lVar7 = *(long *)PTR_DAT_06ddaad8;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar7 = *(long *)puVar3;
      }
      puVar2 = PTR_DAT_06df2be8;
      lVar13 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar13 == 0) {
LAB_02902c20:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(uint *)(lVar13 + 0x18) < 4) {
LAB_02902bd4:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      if (*(long *)(lVar13 + 0x38) == param_2) {
        lVar7 = *plVar6;
        uVar15 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar10) {
              puVar8 = (undefined8 *)(lVar7 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_02902670;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar10,1);
LAB_02902670:
        uVar4 = (*(code *)*puVar8)(plVar6,param_3,puVar8[1]);
        uVar12 = *(undefined8 *)puVar2;
        auStack_58._0_8_ = CONCAT71(auStack_58._1_7_,uVar4) & 0xffffffffffffff01;
        goto LAB_029027c0;
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar7 = *(long *)puVar3;
        lVar13 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if (lVar13 == 0) goto LAB_02902c20;
      }
      if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_02902bd4;
      if (*(long *)(lVar13 + 0x40) == param_2) {
        lVar13 = *plVar6;
        lVar7 = *(long *)puVar10;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
        puVar8 = (undefined8 *)PTR_DAT_06e18670;
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar7) {
              iVar14 = *piVar16 + 2;
              goto LAB_029026e0;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        uVar12 = 2;
        goto LAB_02902614;
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar7 = *(long *)puVar3;
        lVar13 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if (lVar13 == 0) goto LAB_02902c20;
      }
      if (*(uint *)(lVar13 + 0x18) < 6) goto LAB_02902bd4;
      if (*(long *)(lVar13 + 0x48) == param_2) {
        lVar13 = *plVar6;
        lVar7 = *(long *)puVar10;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
        puVar8 = (undefined8 *)PTR_DAT_06e5e6c8;
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar7) {
              iVar14 = *piVar16 + 3;
              goto LAB_02902798;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        uVar12 = 3;
FUN_029026cc:
        puVar11 = (undefined8 *)FUN_015c2a80(plVar6,lVar7,uVar12);
LAB_029027a0:
        uVar4 = (*(code *)*puVar11)(plVar6,param_3,puVar11[1]);
        uVar12 = *puVar8;
        auStack_58[0] = uVar4;
      }
      else {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar7 = *(long *)puVar3;
          lVar13 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
          if (lVar13 == 0) goto LAB_02902c20;
        }
        if (*(uint *)(lVar13 + 0x18) < 7) goto LAB_02902bd4;
        if (*(long *)(lVar13 + 0x50) == param_2) {
          lVar13 = *plVar6;
          lVar7 = *(long *)puVar10;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
          puVar8 = (undefined8 *)PTR_DAT_06e0ce20;
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
OVRPlugin_Qpl_Variant__From:
            if (*(long *)(piVar16 + -2) != lVar7) goto code_r0x029026bc;
            iVar14 = *piVar16 + 4;
LAB_02902798:
            puVar11 = (undefined8 *)(lVar13 + (long)iVar14 * 0x10 + 0x138);
            goto LAB_029027a0;
          }
LAB_029026c8:
          uVar12 = 4;
          goto FUN_029026cc;
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar7 = *(long *)puVar3;
          lVar13 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
          if (lVar13 == 0) goto LAB_02902c20;
        }
        if (*(uint *)(lVar13 + 0x18) < 8) goto LAB_02902bd4;
        if (*(long *)(lVar13 + 0x58) == param_2) {
          lVar13 = *plVar6;
          lVar7 = *(long *)puVar10;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
          puVar8 = (undefined8 *)PTR_DAT_06e467c0;
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar7) {
                iVar14 = *piVar16 + 5;
                goto LAB_029026e0;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          uVar12 = 5;
LAB_02902614:
          puVar11 = (undefined8 *)FUN_015c2a80(plVar6,lVar7,uVar12);
LAB_029026e8:
          uVar5 = (*(code *)*puVar11)(plVar6,param_3,puVar11[1]);
          uVar12 = *puVar8;
          auStack_58._0_2_ = uVar5;
        }
        else {
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar7 = *(long *)puVar3;
            lVar13 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
            if (lVar13 == 0) goto LAB_02902c20;
          }
          if (*(uint *)(lVar13 + 0x18) < 9) goto LAB_02902bd4;
          if (*(long *)(lVar13 + 0x60) == param_2) {
            lVar13 = *plVar6;
            lVar7 = *(long *)puVar10;
            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
            puVar8 = (undefined8 *)PTR_DAT_06dc2fe0;
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
LAB_02902770:
              if (*(long *)(piVar16 + -2) != lVar7) goto code_r0x0290277c;
              iVar14 = *piVar16 + 6;
LAB_029026e0:
              puVar11 = (undefined8 *)(lVar13 + (long)iVar14 * 0x10 + 0x138);
              goto LAB_029026e8;
            }
LAB_02902788:
            uVar12 = 6;
            goto LAB_02902614;
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar7 = *(long *)puVar3;
            lVar13 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
            if (lVar13 == 0) goto LAB_02902c20;
          }
          if (*(uint *)(lVar13 + 0x18) < 10) goto LAB_02902bd4;
          if (*(long *)(lVar13 + 0x68) == param_2) {
            lVar13 = *plVar6;
            lVar7 = *(long *)puVar10;
            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
            puVar8 = (undefined8 *)PTR_DAT_06e1faf8;
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar7) {
                  iVar14 = *piVar16 + 7;
                  goto LAB_02902930;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            uVar12 = 7;
LAB_0290287c:
            puVar11 = (undefined8 *)FUN_015c2a80(plVar6,lVar7,uVar12);
LAB_02902938:
            auStack_58._0_4_ = (*(code *)*puVar11)(plVar6,param_3,puVar11[1]);
            uVar12 = *puVar8;
          }
          else {
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar7 = *(long *)puVar3;
              lVar13 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
              if (lVar13 == 0) goto LAB_02902c20;
            }
            if (*(uint *)(lVar13 + 0x18) < 0xb) goto LAB_02902bd4;
            if (*(long *)(lVar13 + 0x70) == param_2) {
              lVar13 = *plVar6;
              lVar7 = *(long *)puVar10;
              uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
              puVar8 = (undefined8 *)PTR_DAT_06dd3570;
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
LAB_02902860:
                if (*(long *)(piVar16 + -2) != lVar7) goto code_r0x0290286c;
                iVar14 = *piVar16 + 8;
LAB_02902930:
                puVar11 = (undefined8 *)(lVar13 + (long)iVar14 * 0x10 + 0x138);
                goto LAB_02902938;
              }
LAB_02902878:
              uVar12 = 8;
              goto LAB_0290287c;
            }
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar7 = *(long *)puVar3;
              lVar13 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
              if (lVar13 == 0) goto LAB_02902c20;
            }
            if (*(uint *)(lVar13 + 0x18) < 0xc) goto LAB_02902bd4;
            if (*(long *)(lVar13 + 0x78) == param_2) {
              lVar13 = *plVar6;
              lVar7 = *(long *)puVar10;
              uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
              puVar8 = (undefined8 *)PTR_DAT_06e199e0;
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar7) {
                    iVar14 = *piVar16 + 9;
                    goto LAB_029029f8;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              uVar12 = 9;
LAB_0290291c:
              puVar11 = (undefined8 *)FUN_015c2a80(plVar6,lVar7,uVar12);
LAB_02902a00:
              uVar12 = (*(code *)*puVar11)(plVar6,param_3,puVar11[1]);
              auStack_58._0_8_ = uVar12;
              uVar12 = *puVar8;
            }
            else {
              if (*(int *)(lVar7 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar7 = *(long *)puVar3;
                lVar13 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
                if (lVar13 == 0) goto LAB_02902c20;
              }
              if (*(uint *)(lVar13 + 0x18) < 0xd) goto LAB_02902bd4;
              if (*(long *)(lVar13 + 0x80) == param_2) {
                lVar13 = *plVar6;
                lVar7 = *(long *)puVar10;
                uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
                puVar8 = (undefined8 *)PTR_DAT_06e4c678;
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar7) {
                      iVar14 = *piVar16 + 10;
                      goto LAB_029029f8;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                uVar12 = 10;
                goto LAB_0290291c;
              }
              if (*(int *)(lVar7 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar7 = *(long *)puVar3;
                lVar13 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
                if (lVar13 == 0) goto LAB_02902c20;
              }
              puVar2 = PTR_DAT_06e10ca0;
              if (*(uint *)(lVar13 + 0x18) < 0xe) goto LAB_02902bd4;
              if (*(long *)(lVar13 + 0x88) == param_2) {
                lVar7 = *plVar6;
                uVar15 = (ulong)*(ushort *)(lVar7 + 0x12a);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)puVar10) {
                      puVar8 = (undefined8 *)(lVar7 + (long)(*piVar16 + 0xb) * 0x10 + 0x138);
                      goto LAB_02902a74;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar8 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar10,0xb);
LAB_02902a74:
                auStack_58._0_4_ = (*(code *)*puVar8)(plVar6,param_3,puVar8[1]);
                uVar12 = *(undefined8 *)puVar2;
              }
              else {
                if (*(int *)(lVar7 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar7 = *(long *)puVar3;
                  lVar13 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
                  if (lVar13 == 0) goto LAB_02902c20;
                }
                puVar2 = PTR_DAT_06e01080;
                if (*(uint *)(lVar13 + 0x18) < 0xf) goto LAB_02902bd4;
                if (*(long *)(lVar13 + 0x90) == param_2) {
                  lVar7 = *plVar6;
                  uVar15 = (ulong)*(ushort *)(lVar7 + 0x12a);
                  if (uVar15 != 0) {
                    piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)puVar10) {
                        puVar8 = (undefined8 *)(lVar7 + (long)(*piVar16 + 0xc) * 0x10 + 0x138);
                        goto LAB_02902ae0;
                      }
                      uVar15 = uVar15 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar10,0xc);
LAB_02902ae0:
                  uVar12 = (*(code *)*puVar8)(plVar6,param_3,puVar8[1]);
                  auStack_58._0_8_ = uVar12;
                  uVar12 = *(undefined8 *)puVar2;
                }
                else {
                  if (*(int *)(lVar7 + 0xe0) == 0) {
                    thunk_FUN_016466fc();
                    lVar7 = *(long *)puVar3;
                    lVar13 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
                    if (lVar13 == 0) goto LAB_02902c20;
                  }
                  puVar2 = PTR_DAT_06d98c30;
                  if (*(uint *)(lVar13 + 0x18) < 0x10) goto LAB_02902bd4;
                  if (*(long *)(lVar13 + 0x98) != param_2) {
                    if (*(int *)(lVar7 + 0xe0) == 0) {
                      thunk_FUN_016466fc();
                      lVar7 = *(long *)puVar3;
                      lVar13 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
                      if (lVar13 == 0) goto LAB_02902c20;
                    }
                    if (*(uint *)(lVar13 + 0x18) < 0x11) goto LAB_02902bd4;
                    if (*(long *)(lVar13 + 0xa0) != param_2) {
                      if (*(int *)(lVar7 + 0xe0) == 0) {
                        thunk_FUN_016466fc();
                        lVar7 = *(long *)puVar3;
                        lVar13 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
                        if (lVar13 == 0) goto LAB_02902c20;
                      }
                      if (*(uint *)(lVar13 + 0x18) < 0x13) goto LAB_02902bd4;
                      if (*(long *)(lVar13 + 0xb0) == param_2) {
                        lVar7 = *plVar6;
                        uVar15 = (ulong)*(ushort *)(lVar7 + 0x12a);
                        if (uVar15 != 0) {
                          piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar16 + -2) == *(long *)puVar10) {
                              puVar8 = (undefined8 *)(lVar7 + (long)(*piVar16 + 0xf) * 0x10 + 0x138)
                              ;
                              goto LAB_02902bb0;
                            }
                            uVar15 = uVar15 - 1;
                            piVar16 = piVar16 + 4;
                          } while (uVar15 != 0);
                        }
                        puVar8 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar10,0xf);
LAB_02902bb0:
                        lVar7 = (*(code *)*puVar8)(plVar6,param_3,puVar8[1]);
                      }
                      else {
                        if (*(int *)(lVar7 + 0xe0) == 0) {
                          thunk_FUN_016466fc();
                          lVar13 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
                          if (lVar13 == 0) goto LAB_02902c20;
                        }
                        if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_02902bd4;
                        if (*(long *)(lVar13 + 0x28) == param_2) goto LAB_029027c8;
                        lVar7 = *plVar6;
                        uVar15 = (ulong)*(ushort *)(lVar7 + 0x12a);
                        if (uVar15 != 0) {
                          piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar16 + -2) == *(long *)puVar10) {
                              puVar8 = (undefined8 *)
                                       (lVar7 + (long)(*piVar16 + 0x10) * 0x10 + 0x138);
                              goto LAB_02902b88;
                            }
                            uVar15 = uVar15 - 1;
                            piVar16 = piVar16 + 4;
                          } while (uVar15 != 0);
                        }
                        puVar8 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar10,0x10);
LAB_02902b88:
                        lVar7 = (*(code *)*puVar8)(plVar6,param_2,param_3,puVar8[1]);
                      }
                      if (*(long *)(lVar1 + 0x28) == lStack_48) {
                        return lVar7;
                      }
                      goto LAB_02902bd0;
                    }
                    lVar13 = *plVar6;
                    lVar7 = *(long *)puVar10;
                    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
                    puVar8 = (undefined8 *)PTR_DAT_06e56f18;
                    if (uVar15 != 0) {
                      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
LAB_02902ab0:
                      if (*(long *)(piVar16 + -2) != lVar7) goto code_r0x02902abc;
                      iVar14 = *piVar16 + 0xe;
LAB_029029f8:
                      puVar11 = (undefined8 *)(lVar13 + (long)iVar14 * 0x10 + 0x138);
                      goto LAB_02902a00;
                    }
LAB_02902ac8:
                    uVar12 = 0xe;
                    goto LAB_0290291c;
                  }
                  lVar7 = *plVar6;
                  uVar15 = (ulong)*(ushort *)(lVar7 + 0x12a);
                  if (uVar15 != 0) {
                    piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)puVar10) {
                        puVar8 = (undefined8 *)(lVar7 + (long)(*piVar16 + 0xd) * 0x10 + 0x138);
                        goto LAB_02902b50;
                      }
                      uVar15 = uVar15 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar10,0xd);
LAB_02902b50:
                  auStack_58 = (*(code *)*puVar8)(plVar6,param_3,puVar8[1]);
                  uVar12 = *(undefined8 *)puVar2;
                }
              }
            }
          }
        }
      }
LAB_029027c0:
      param_1 = thunk_FUN_015d01b0(uVar12,auStack_58);
    }
  }
LAB_029027c8:
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return param_1;
  }
LAB_02902bd0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x029026bc:
  uVar15 = uVar15 - 1;
  piVar16 = piVar16 + 4;
  if (uVar15 == 0) goto LAB_029026c8;
  goto OVRPlugin_Qpl_Variant__From;
code_r0x0290277c:
  uVar15 = uVar15 - 1;
  piVar16 = piVar16 + 4;
  if (uVar15 == 0) goto LAB_02902788;
  goto LAB_02902770;
code_r0x0290286c:
  uVar15 = uVar15 - 1;
  piVar16 = piVar16 + 4;
  if (uVar15 == 0) goto LAB_02902878;
  goto LAB_02902860;
code_r0x02902abc:
  uVar15 = uVar15 - 1;
  piVar16 = piVar16 + 4;
  if (uVar15 == 0) goto LAB_02902ac8;
  goto LAB_02902ab0;
}


