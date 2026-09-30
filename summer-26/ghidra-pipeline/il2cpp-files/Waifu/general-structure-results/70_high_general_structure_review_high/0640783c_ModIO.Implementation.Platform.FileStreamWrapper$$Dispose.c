/*
FUNCTION_NAME: ModIO.Implementation.Platform.FileStreamWrapper$$Dispose
ENTRY_POINT: 0640783c
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


long ModIO_Implementation_Platform_FileStreamWrapper__Dispose
               (ulong param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  int *piVar16;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  undefined8 uVar17;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  uStack0000000000000018 = param_6;
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083e3448,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083e3450,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_084097d8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083bca48,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ccb58,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ccb68,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cde50,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cdf00,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083c7c90,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083d23b8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0842f608,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0842d370,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0842d318,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0842e430,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0842f808,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08452888,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08457210,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0842e380,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08430a60,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x19 + 0xd7c) = 1;
  }
  uVar6 = FUN_0640c27c();
  if ((uVar6 & 1) != 0) {
    return param_3;
  }
  if (param_3 == 0) {
    param_3 = FUN_0685bdbc(param_2,0,1);
  }
  if (*(int *)(DAT_083cde50 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar7 = FUN_06408320(param_2);
  if ((unaff_x23 != (long *)0x0) && (lVar8 = (**(code **)(*unaff_x23 + 0x1e8))(), lVar8 != 0)) {
    if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
      uVar6 = 0;
      uVar13 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
      do {
        if (uVar13 <= uVar6) goto LAB_06408318;
        if (lVar7 == 0) goto LAB_0640831c;
        uVar17 = *(undefined8 *)(lVar8 + uVar6 * 8 + 0x20);
        iVar5 = FUN_05dafc98(lVar7,uVar17,
                             *(undefined8 *)
                              (*(long *)(*(long *)(DAT_083e3448 + 0x20) + 0xc0) + 0x108));
        if (iVar5 < 0) {
          lVar14 = FUN_03398188(DAT_083c7c90,5);
          if (lVar14 == 0) goto LAB_0640831c;
          if (*(int *)(lVar14 + 0x18) == 0) {
LAB_06408318:
                    /* WARNING: Subroutine does not return */
            FUN_033d1d44();
          }
          puVar10 = (undefined8 *)(lVar14 + 0x20);
          *puVar10 = DAT_0842d318;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (param_2 == (long *)0x0) goto LAB_0640831c;
          uVar11 = (**(code **)(*param_2 + 0x2f8))(param_2,*(undefined8 *)(*param_2 + 0x300));
          uVar2 = *(uint *)(lVar14 + 0x18);
          if (uVar2 < 2) goto LAB_06408318;
          puVar10 = (undefined8 *)(lVar14 + 0x28);
          *puVar10 = uVar11;
          if (DAT_08908cd0 == 0) {
            if (((uVar2 < 3) || (*(undefined8 *)(lVar14 + 0x30) = DAT_0842e430, uVar2 == 3)) ||
               (*(undefined8 *)(lVar14 + 0x38) = uVar17, uVar2 < 5)) goto LAB_06408318;
            *(undefined8 *)(lVar14 + 0x40) = DAT_0842f608;
          }
          else {
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_06408318;
            puVar10 = (undefined8 *)(lVar14 + 0x30);
            *puVar10 = DAT_0842e430;
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (*(uint *)(lVar14 + 0x18) < 4) goto LAB_06408318;
            puVar10 = (undefined8 *)(lVar14 + 0x38);
            *puVar10 = uVar17;
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (*(uint *)(lVar14 + 0x18) < 5) goto LAB_06408318;
            puVar10 = (undefined8 *)(lVar14 + 0x40);
            *puVar10 = DAT_0842f608;
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
LAB_06407fe0:
          FUN_0666ee4c(lVar14,0);
          if (unaff_x20 == 0) goto LAB_0640831c;
          FUN_0667fa20();
        }
        else {
          plVar9 = (long *)FUN_05daf524(lVar7,uVar17,DAT_083e3450);
          if (plVar9 == (long *)0x0) goto LAB_0640831c;
          lVar14 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar13 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == DAT_083ccb68) {
                puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto LAB_06407c9c;
              }
              uVar13 = uVar13 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_0338f71c(plVar9,DAT_083ccb68,2);
LAB_06407c9c:
          uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar13 & 1) == 0) {
            lVar14 = FUN_03398188(DAT_083c7c90,7);
            if (lVar14 != 0) {
              if (*(int *)(lVar14 + 0x18) == 0) goto LAB_06408318;
              puVar10 = (undefined8 *)(lVar14 + 0x20);
              *puVar10 = DAT_0842d318;
              if (DAT_08908cd0 != 0) {
                puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar4) {
                    *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              if (param_2 != (long *)0x0) {
                uVar11 = (**(code **)(*param_2 + 0x2f8))(param_2,*(undefined8 *)(*param_2 + 0x300));
                uVar2 = *(uint *)(lVar14 + 0x18);
                if (uVar2 < 2) goto LAB_06408318;
                puVar10 = (undefined8 *)(lVar14 + 0x28);
                *puVar10 = uVar11;
                iVar5 = DAT_08908cd0;
                if (DAT_08908cd0 == 0) {
                  if (((uVar2 < 3) || (*(undefined8 *)(lVar14 + 0x30) = DAT_0842e380, uVar2 == 3))
                     || (*(undefined8 *)(lVar14 + 0x38) = uVar17, uVar2 < 5)) goto LAB_06408318;
                  *(undefined8 *)(lVar14 + 0x40) = DAT_0842f808;
                }
                else {
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_06408318;
                  puVar10 = (undefined8 *)(lVar14 + 0x30);
                  *puVar10 = DAT_0842e380;
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (*(uint *)(lVar14 + 0x18) < 4) goto LAB_06408318;
                  puVar10 = (undefined8 *)(lVar14 + 0x38);
                  *puVar10 = uVar17;
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (*(uint *)(lVar14 + 0x18) < 5) goto LAB_06408318;
                  puVar10 = (undefined8 *)(lVar14 + 0x40);
                  *puVar10 = DAT_0842f808;
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                if (*(byte *)(*plVar9 + 0x130) < *(byte *)(DAT_083cdf00 + 0x130)) {
                  plVar9 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar9 + 200) +
                                   (ulong)*(byte *)(DAT_083cdf00 + 0x130) * 8 + -8) != DAT_083cdf00)
                {
                  plVar9 = (long *)0x0;
                }
                if (*(uint *)(lVar14 + 0x18) < 6) goto LAB_06408318;
                puVar10 = &DAT_08452888;
                if (plVar9 != (long *)0x0) {
                  puVar10 = &DAT_08457210;
                }
                puVar15 = (undefined8 *)(lVar14 + 0x48);
                *puVar15 = *puVar10;
                if (iVar5 == 0) {
                  if (*(uint *)(lVar14 + 0x18) < 7) goto LAB_06408318;
                  *(undefined8 *)(lVar14 + 0x50) = DAT_08430a60;
                }
                else {
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar15 >> 0x12 & 0x7fff);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar15 >> 0xc & 0x3f);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (*(uint *)(lVar14 + 0x18) < 7) goto LAB_06408318;
                  puVar10 = (undefined8 *)(lVar14 + 0x50);
                  *puVar10 = DAT_08430a60;
                  puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                goto LAB_06407fe0;
              }
            }
            goto LAB_0640831c;
          }
          lVar14 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar13 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == DAT_083ccb68) {
                puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_06408010;
              }
              uVar13 = uVar13 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_0338f71c(plVar9,DAT_083ccb68,1);
LAB_06408010:
          uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar13 & 1) == 0) {
            uVar11 = 0;
          }
          else {
            lVar14 = *plVar9;
            uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar13 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == DAT_083ccb68) {
                  puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                  goto LAB_0640807c;
                }
                uVar13 = uVar13 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar13 != 0);
            }
            puVar10 = (undefined8 *)FUN_0338f71c(plVar9,DAT_083ccb68,4);
LAB_0640807c:
            uVar11 = (*(code *)*puVar10)(plVar9,param_3,puVar10[1]);
          }
          lVar14 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar13 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == DAT_083ccb68) {
                puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                goto LAB_064080e4;
              }
              uVar13 = uVar13 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_0338f71c(plVar9,DAT_083ccb68,3);
LAB_064080e4:
          uVar12 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          uVar17 = (**(code **)(*unaff_x23 + 0x1a8))
                             (unaff_x23,uVar17,*(undefined8 *)(*unaff_x23 + 0x1b0));
          if (*(int *)(DAT_083cde50 + 0xe0) == 0) {
            FUN_033b9870(DAT_083cde50);
          }
          uVar17 = FUN_064060b0(uVar12,uVar11,uVar17);
          lVar14 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar13 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == DAT_083ccb68) {
                puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 5) * 0x10 + 0x138);
                goto LAB_0640819c;
              }
              uVar13 = uVar13 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_0338f71c(plVar9,DAT_083ccb68,5);
LAB_0640819c:
          (*(code *)*puVar10)(plVar9,param_3,uVar17,puVar10[1]);
        }
        uVar13 = (ulong)*(uint *)(lVar8 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar8 + 0x18));
    }
    if (param_2 != (long *)0x0) {
      uVar11 = (**(code **)(*param_2 + 0x8f8))(param_2,*(undefined8 *)(*param_2 + 0x900));
      uVar17 = DAT_083bca48;
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870(DAT_083d23b8);
      }
      uVar17 = FUN_0683eca4(uVar17,0);
      uVar6 = FUN_03f22c64(uVar11,uVar17,DAT_084097d8);
      if ((uVar6 & 1) != 0) {
        lVar8 = FUN_0339898c(param_3,DAT_083ccb58);
        lVar7 = DAT_083ccb58;
        if (lVar8 == 0) goto LAB_0640831c;
        plVar9 = (long *)FUN_0339898c(param_3,DAT_083ccb58);
        lVar8 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar7) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_06408294;
            }
            uVar6 = uVar6 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar6 != 0);
        }
        puVar10 = (undefined8 *)FUN_0338f71c(plVar9,lVar7,0);
LAB_06408294:
        uVar6 = (*(code *)*puVar10)(plVar9,unaff_x23,puVar10[1]);
        uVar17 = DAT_0842d370;
        if ((uVar6 & 1) == 0) {
          in_stack_00000048 = 0;
          in_stack_00000040 = 0;
          in_stack_00000058 = 0;
          in_stack_00000050 = 0;
          FUN_0683f31c(&stack0x00000040,param_2,0);
          in_stack_00000028 = in_stack_00000048;
          in_stack_00000020 = in_stack_00000040;
          in_stack_00000038 = in_stack_00000058;
          in_stack_00000030 = in_stack_00000050;
          FUN_0666f060(0,uVar17,&stack0x00000020);
          if (unaff_x20 == 0) goto LAB_0640831c;
          FUN_0667fa20();
        }
      }
      return param_3;
    }
  }
LAB_0640831c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


