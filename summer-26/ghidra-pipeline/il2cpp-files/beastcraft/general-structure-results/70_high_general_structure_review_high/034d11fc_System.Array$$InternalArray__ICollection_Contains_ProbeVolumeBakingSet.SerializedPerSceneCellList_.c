/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 034d11fc
PROGRAM: beastcraft-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined4 in_s3;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined4 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined4 in_stack_00000160;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined4 in_stack_000001a0;
  
  thunk_FUN_02e9a04c();
  uVar2 = FUN_062696b0();
  if ((uVar2 & 1) != 0) {
    return;
  }
  if ((unaff_x20 != 0) && (*(long *)(unaff_x20 + 0x120) != 0)) {
    uVar2 = FUN_0354bd84(*(long *)(unaff_x20 + 0x120),&stack0x00000170,&stack0x00000130,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      in_stack_000000f8 = in_stack_00000178;
      in_stack_000000f0 = in_stack_00000170;
      in_stack_00000108 = in_stack_00000188;
      in_stack_00000100 = in_stack_00000180;
      in_stack_00000120 = in_stack_000001a0;
      in_stack_00000118 = in_stack_00000198;
      in_stack_00000110 = in_stack_00000190;
      in_stack_000000b8 = in_stack_00000138;
      in_stack_000000b0 = in_stack_00000130;
      in_stack_000000c8 = in_stack_00000148;
      in_stack_000000c0 = in_stack_00000140;
      in_stack_000000e0 = in_stack_00000160;
      in_stack_000000d8 = in_stack_00000158;
      in_stack_000000d0 = in_stack_00000150;
      FUN_034ccac0(*(long *)(unaff_x19 + 0x38),&stack0x000000f0,&stack0x000000b0);
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        in_stack_00000078 = in_stack_00000178;
        in_stack_00000070 = in_stack_00000170;
        in_stack_00000088 = in_stack_00000188;
        in_stack_00000080 = in_stack_00000180;
        in_stack_000000a0 = in_stack_000001a0;
        in_stack_00000098 = in_stack_00000198;
        in_stack_00000090 = in_stack_00000190;
        in_stack_00000038 = in_stack_00000138;
        in_stack_00000030 = in_stack_00000130;
        in_stack_00000048 = in_stack_00000148;
        in_stack_00000040 = in_stack_00000140;
        in_stack_00000060 = in_stack_00000160;
        in_stack_00000058 = in_stack_00000158;
        in_stack_00000050 = in_stack_00000150;
        uVar13 = in_stack_00000140;
        uVar16 = in_stack_00000190;
        FUN_034d1b94(*(long *)(unaff_x19 + 0x48),&stack0x00000070,&stack0x00000030);
        puVar1 = PTR_DAT_06a5de68;
        uVar15 = (undefined4)uVar16;
        uVar12 = (undefined4)uVar13;
        plVar7 = *(long **)(unaff_x19 + 0x80);
        if (plVar7 != (long *)0x0) {
          lVar4 = *plVar7;
          lVar6 = *(long *)(unaff_x19 + 0x40);
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 != 0) {
            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06a5de68) {
                puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
                goto LAB_034d1320;
              }
              uVar2 = uVar2 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)FUN_02e759c0(plVar7,*(long *)PTR_DAT_06a5de68,2);
LAB_034d1320:
          lVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
          if (lVar4 != 0) {
            uVar8 = FUN_06276fd8(lVar4,0);
            plVar7 = *(long **)(unaff_x19 + 0x80);
            if (plVar7 != (long *)0x0) {
              lVar4 = *plVar7;
              uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
              uVar11 = uVar12;
              uVar14 = uVar15;
              if (uVar2 != 0) {
                piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
                    puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
                    goto LAB_034d139c;
                  }
                  uVar2 = uVar2 - 1;
                  piVar5 = piVar5 + 4;
                } while (uVar2 != 0);
              }
              puVar3 = (undefined8 *)FUN_02e759c0(plVar7,*(long *)puVar1,2);
LAB_034d139c:
              lVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
              if ((lVar4 != 0) && (uVar9 = FUN_06275204(lVar4,0), lVar6 != 0)) {
                FUN_034d1be0(uVar8,uVar12,uVar15,uVar9,uVar11,uVar14,in_s3,lVar6);
                plVar7 = *(long **)(unaff_x19 + 0x80);
                if (plVar7 != (long *)0x0) {
                  lVar4 = *plVar7;
                  lVar6 = *(long *)(unaff_x19 + 0x58);
                  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
                  if (uVar2 != 0) {
                    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
                        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                        goto LAB_034d1448;
                      }
                      uVar2 = uVar2 - 1;
                      piVar5 = piVar5 + 4;
                    } while (uVar2 != 0);
                  }
                  puVar3 = (undefined8 *)FUN_02e759c0(plVar7,*(long *)puVar1,5);
LAB_034d1448:
                  uVar8 = (*(code *)*puVar3)(plVar7,puVar3[1]);
                  plVar7 = *(long **)(unaff_x19 + 0x80);
                  if (plVar7 != (long *)0x0) {
                    lVar4 = *plVar7;
                    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    uVar11 = uVar12;
                    uVar14 = uVar15;
                    if (uVar2 != 0) {
                      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
                          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 6) * 0x10 + 0x138);
                          goto LAB_034d14b8;
                        }
                        uVar2 = uVar2 - 1;
                        piVar5 = piVar5 + 4;
                      } while (uVar2 != 0);
                    }
                    puVar3 = (undefined8 *)FUN_02e759c0(plVar7,*(long *)puVar1,6);
LAB_034d14b8:
                    uVar10 = (*(code *)*puVar3)(plVar7,puVar3[1]);
                    if (lVar6 != 0) {
                      FUN_034d1d54(uVar8,uVar12,uVar15,uVar10,uVar11,uVar14,uVar9,lVar6);
                      plVar7 = *(long **)(unaff_x19 + 0x80);
                      if (plVar7 != (long *)0x0) {
                        lVar4 = *plVar7;
                        lVar6 = *(long *)(unaff_x19 + 0x68);
                        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
                        if (uVar2 != 0) {
                          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
                              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                              goto LAB_034d1558;
                            }
                            uVar2 = uVar2 - 1;
                            piVar5 = piVar5 + 4;
                          } while (uVar2 != 0);
                        }
                        puVar3 = (undefined8 *)FUN_02e759c0(plVar7,*(long *)puVar1,5);
LAB_034d1558:
                        uVar8 = (*(code *)*puVar3)(plVar7,puVar3[1]);
                        plVar7 = *(long **)(unaff_x19 + 0x80);
                        if (plVar7 != (long *)0x0) {
                          lVar4 = *plVar7;
                          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
                          if (uVar2 != 0) {
                            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
                                puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 6) * 0x10 + 0x138);
                                goto LAB_034d15c8;
                              }
                              uVar2 = uVar2 - 1;
                              piVar5 = piVar5 + 4;
                            } while (uVar2 != 0);
                          }
                          puVar3 = (undefined8 *)FUN_02e759c0(plVar7,*(long *)puVar1,6);
LAB_034d15c8:
                          (*(code *)*puVar3)(plVar7,puVar3[1]);
                          if (lVar6 != 0) {
                            FUN_034d0404(uVar8,lVar6);
                            plVar7 = *(long **)(unaff_x19 + 0x80);
                            if (plVar7 != (long *)0x0) {
                              lVar4 = *plVar7;
                              lVar6 = *(long *)(unaff_x19 + 0x50);
                              uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
                              if (uVar2 != 0) {
                                piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
                                    puVar3 = (undefined8 *)
                                             (lVar4 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                                    goto LAB_034d1668;
                                  }
                                  uVar2 = uVar2 - 1;
                                  piVar5 = piVar5 + 4;
                                } while (uVar2 != 0);
                              }
                              puVar3 = (undefined8 *)FUN_02e759c0(plVar7,*(long *)puVar1,5);
LAB_034d1668:
                              uVar8 = (*(code *)*puVar3)(plVar7,puVar3[1]);
                              plVar7 = *(long **)(unaff_x19 + 0x80);
                              if (plVar7 != (long *)0x0) {
                                lVar4 = *plVar7;
                                uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
                                if (uVar2 != 0) {
                                  piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
                                      puVar3 = (undefined8 *)
                                               (lVar4 + (long)(*piVar5 + 6) * 0x10 + 0x138);
                                      goto LAB_034d16d8;
                                    }
                                    uVar2 = uVar2 - 1;
                                    piVar5 = piVar5 + 4;
                                  } while (uVar2 != 0);
                                }
                                puVar3 = (undefined8 *)FUN_02e759c0(plVar7,*(long *)puVar1,6);
LAB_034d16d8:
                                uVar11 = (*(code *)*puVar3)(plVar7,puVar3[1]);
                                plVar7 = *(long **)(unaff_x19 + 0x80);
                                if (plVar7 != (long *)0x0) {
                                  lVar4 = *plVar7;
                                  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
                                  if (uVar2 != 0) {
                                    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
                                        puVar3 = (undefined8 *)
                                                 (lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                                        goto LAB_034d1750;
                                      }
                                      uVar2 = uVar2 - 1;
                                      piVar5 = piVar5 + 4;
                                    } while (uVar2 != 0);
                                  }
                                  puVar3 = (undefined8 *)FUN_02e759c0(plVar7,*(long *)puVar1,1);
LAB_034d1750:
                                  lVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
                                  if (lVar4 != 0) {
                                    FUN_06276fd8(lVar4,0);
                                    plVar7 = *(long **)(unaff_x19 + 0x80);
                                    if (plVar7 != (long *)0x0) {
                                      lVar4 = *plVar7;
                                      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
                                      if (uVar2 != 0) {
                                        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
                                            puVar3 = (undefined8 *)
                                                     (lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                                            goto LAB_034d17cc;
                                          }
                                          uVar2 = uVar2 - 1;
                                          piVar5 = piVar5 + 4;
                                        } while (uVar2 != 0);
                                      }
                                      puVar3 = (undefined8 *)FUN_02e759c0(plVar7,*(long *)puVar1,1);
LAB_034d17cc:
                                      lVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
                                      if ((lVar4 != 0) && (FUN_06275204(lVar4,0), lVar6 != 0)) {
                                        FUN_034d1eb4(uVar8,lVar6);
                                        plVar7 = *(long **)(unaff_x19 + 0x80);
                                        if (plVar7 != (long *)0x0) {
                                          lVar4 = *plVar7;
                                          lVar6 = *(long *)(unaff_x19 + 0x78);
                                          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
                                          if (uVar2 != 0) {
                                            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                            do {
                                              if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
                                                puVar3 = (undefined8 *)
                                                         (lVar4 + (long)(*piVar5 + 5) * 0x10 + 0x138
                                                         );
                                                goto LAB_034d1878;
                                              }
                                              uVar2 = uVar2 - 1;
                                              piVar5 = piVar5 + 4;
                                            } while (uVar2 != 0);
                                          }
                                          puVar3 = (undefined8 *)
                                                   FUN_02e759c0(plVar7,*(long *)puVar1,5);
LAB_034d1878:
                                          uVar8 = (*(code *)*puVar3)(plVar7,puVar3[1]);
                                          plVar7 = *(long **)(unaff_x19 + 0x80);
                                          if (plVar7 != (long *)0x0) {
                                            lVar4 = *plVar7;
                                            uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
                                            uVar14 = uVar12;
                                            uVar9 = uVar15;
                                            if (uVar2 != 0) {
                                              piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                              do {
                                                if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
                                                  puVar3 = (undefined8 *)
                                                           (lVar4 + (long)(*piVar5 + 6) * 0x10 +
                                                           0x138);
                                                  goto LAB_034d18e8;
                                                }
                                                uVar2 = uVar2 - 1;
                                                piVar5 = piVar5 + 4;
                                              } while (uVar2 != 0);
                                            }
                                            puVar3 = (undefined8 *)
                                                     FUN_02e759c0(plVar7,*(long *)puVar1,6);
LAB_034d18e8:
                                            uVar10 = (*(code *)*puVar3)(plVar7,puVar3[1]);
                                            plVar7 = *(long **)(unaff_x19 + 0x80);
                                            if (plVar7 != (long *)0x0) {
                                              lVar4 = *plVar7;
                                              uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
                                              if (uVar2 != 0) {
                                                piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                                do {
                                                  if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
                                                    puVar3 = (undefined8 *)
                                                             (lVar4 + (long)(*piVar5 + 1) * 0x10 +
                                                             0x138);
                                                    goto LAB_034d1960;
                                                  }
                                                  uVar2 = uVar2 - 1;
                                                  piVar5 = piVar5 + 4;
                                                } while (uVar2 != 0);
                                              }
                                              puVar3 = (undefined8 *)
                                                       FUN_02e759c0(plVar7,*(long *)puVar1,1);
LAB_034d1960:
                                              lVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
                                              if (lVar4 != 0) {
                                                FUN_06276fd8(lVar4,0);
                                                plVar7 = *(long **)(unaff_x19 + 0x80);
                                                if (plVar7 != (long *)0x0) {
                                                  lVar4 = *plVar7;
                                                  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
                                                  if (uVar2 != 0) {
                                                    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar5 + -2) == *(long *)puVar1)
                                                      {
                                                        puVar3 = (undefined8 *)
                                                                 (lVar4 + (long)(*piVar5 + 1) * 0x10
                                                                 + 0x138);
                                                        goto LAB_034d19dc;
                                                      }
                                                      uVar2 = uVar2 - 1;
                                                      piVar5 = piVar5 + 4;
                                                    } while (uVar2 != 0);
                                                  }
                                                  puVar3 = (undefined8 *)
                                                           FUN_02e759c0(plVar7,*(long *)puVar1,1);
LAB_034d19dc:
                                                  lVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
                                                  if ((lVar4 != 0) &&
                                                     (FUN_06275204(lVar4,0), lVar6 != 0)) {
                                                    FUN_034cd458(uVar8,uVar12,uVar15,uVar10,uVar14,
                                                                 uVar9,uVar11,lVar6);
                                                    plVar7 = *(long **)(unaff_x19 + 0x80);
                                                    if (plVar7 != (long *)0x0) {
                                                      lVar4 = *plVar7;
                                                      lVar6 = *(long *)(unaff_x19 + 0x70);
                                                      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
                                                      if (uVar2 != 0) {
                                                        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8
                                                                        );
                                                        do {
                                                          if (*(long *)(piVar5 + -2) ==
                                                              *(long *)puVar1) {
                                                            puVar3 = (undefined8 *)
                                                                     (lVar4 + (long)(*piVar5 + 2) *
                                                                              0x10 + 0x138);
                                                            goto LAB_034d1a88;
                                                          }
                                                          uVar2 = uVar2 - 1;
                                                          piVar5 = piVar5 + 4;
                                                        } while (uVar2 != 0);
                                                      }
                                                      puVar3 = (undefined8 *)
                                                               FUN_02e759c0(plVar7,*(long *)puVar1,2
                                                                           );
LAB_034d1a88:
                                                      lVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
                                                      if (lVar4 != 0) {
                                                        uVar8 = FUN_06276fd8(lVar4,0);
                                                        plVar7 = *(long **)(unaff_x19 + 0x80);
                                                        if (plVar7 != (long *)0x0) {
                                                          lVar4 = *plVar7;
                                                          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
                                                          uVar11 = uVar12;
                                                          uVar14 = uVar15;
                                                          if (uVar2 != 0) {
                                                            piVar5 = (int *)(*(long *)(lVar4 + 0xb0)
                                                                            + 8);
                                                            do {
                                                              if (*(long *)(piVar5 + -2) ==
                                                                  *(long *)puVar1) {
                                                                puVar3 = (undefined8 *)
                                                                         (lVar4 + (long)(*piVar5 + 2
                                                                                        ) * 0x10 +
                                                                         0x138);
                                                                goto LAB_034d1b04;
                                                              }
                                                              uVar2 = uVar2 - 1;
                                                              piVar5 = piVar5 + 4;
                                                            } while (uVar2 != 0);
                                                          }
                                                          puVar3 = (undefined8 *)
                                                                   FUN_02e759c0(plVar7,*(long *)
                                                  puVar1,2);
LAB_034d1b04:
                                                  lVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
                                                  if ((lVar4 != 0) &&
                                                     (uVar9 = FUN_06275204(lVar4,0), lVar6 != 0)) {
                                                    FUN_034d23fc(uVar8,uVar12,uVar15,uVar9,uVar11,
                                                                 uVar14,uVar10,lVar6);
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


