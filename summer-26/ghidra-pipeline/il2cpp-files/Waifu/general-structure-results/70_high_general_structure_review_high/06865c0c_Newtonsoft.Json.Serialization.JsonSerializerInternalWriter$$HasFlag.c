/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 06865c0c
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag(void)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined1 unaff_w24;
  uint uVar17;
  long *plVar18;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c9e30,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c9fc0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cb2f0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d0c20,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d23b8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0845a150,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08444be0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08440f28,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x23 + 0xe88) = unaff_w24;
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (unaff_x20 == (long *)0x0) {
    FUN_033d1ba8(&DAT_083c8a10);
    uVar10 = thunk_FUN_03398a84();
    uVar11 = FUN_033d1ba8(&DAT_084523d8);
    FUN_0677f140(uVar10,uVar11,0);
    uVar11 = FUN_033d1ba8(&DAT_08409318);
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar10,uVar11);
  }
  if (*(byte *)(*unaff_x20 + 0x130) < *(byte *)(DAT_083d0c20 + 0x130)) {
    plVar18 = (long *)0x0;
  }
  else {
    plVar18 = unaff_x20;
    if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(DAT_083d0c20 + 0x130) * 8 + -8) !=
        DAT_083d0c20) {
      plVar18 = (long *)0x0;
    }
  }
  if (*(int *)(DAT_083d0c20 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (plVar18 == (long *)0x0) {
    puVar12 = &DAT_0844a540;
  }
  else {
    uVar8 = (**(code **)(*unaff_x20 + 0x5c8))();
    if ((uVar8 & 1) != 0) {
      if (unaff_x22 == 0) {
        FUN_06866558();
        return 0;
      }
      lVar9 = FUN_066731e8();
      if (lVar9 == 0) {
LAB_068661e4:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (*(int *)(lVar9 + 0x10) == 0) {
LAB_06865ea8:
        FUN_068665dc();
        return 0;
      }
      if (0 < *(int *)(lVar9 + 0x10)) {
        uVar4 = *(undefined2 *)(lVar9 + 0x14);
        if (*(int *)(DAT_083c97d0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar8 = FUN_06785924(uVar4,0);
        if ((uVar8 & 1) == 0) {
          if (*(int *)(lVar9 + 0x10) < 1) goto LAB_06865f84;
          if ((*(short *)(lVar9 + 0x14) != 0x2d) && (*(short *)(lVar9 + 0x14) != 0x2b)) {
            if (*(int *)(DAT_083cb2f0 + 0xe0) == 0) {
              FUN_033b9870();
            }
            lVar9 = FUN_06671434(lVar9,**(undefined8 **)(DAT_083cb2f0 + 0xb8),0);
            lVar14 = FUN_06864e0c(plVar18,1);
            if ((lVar14 != 0) && (lVar9 != 0)) {
              uVar3 = *(uint *)(lVar9 + 0x18);
              if ((int)uVar3 < 1) {
LAB_06866170:
                if (*(int *)(DAT_083cb2f0 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                uVar10 = FUN_06866c80();
                *unaff_x19 = uVar10;
                if (DAT_08908cd0 == 0) {
                  return 1;
                }
                puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x19 >> 0x12 & 0x7fff);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar6) {
                    *puVar1 = *puVar1 | 1L << ((ulong)unaff_x19 >> 0xc & 0x3f);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                return 1;
              }
              lVar2 = *(long *)(lVar14 + 0x10);
              lVar14 = *(long *)(lVar14 + 0x18);
              uVar17 = 0;
LAB_0686603c:
              if (uVar3 <= uVar17) goto LAB_068661e0;
              plVar18 = (long *)(lVar9 + (long)(int)uVar17 * 8 + 0x20);
              if (*plVar18 == 0) goto LAB_068661e4;
              lVar15 = FUN_066731e8(*plVar18,2);
              if (uVar17 < *(uint *)(lVar9 + 0x18)) {
                *plVar18 = lVar15;
                if (DAT_08908cd0 != 0) {
                  puVar1 = &DAT_0873ccb0 + ((ulong)plVar18 >> 0x12 & 0x7fff);
                  do {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                      *puVar1 = *puVar1 | 1L << ((ulong)plVar18 >> 0xc & 0x3f);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                if (lVar14 != 0) {
                  if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
                    uVar8 = 0;
                    uVar16 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
                    do {
                      if ((uVar16 <= uVar8) || (*(uint *)(lVar9 + 0x18) <= uVar17))
                      goto LAB_068661e0;
                      lVar15 = *(long *)(lVar14 + 0x20 + uVar8 * 8);
                      if ((unaff_x21 & 1) == 0) {
                        if (lVar15 == 0) goto LAB_068661e4;
                        uVar16 = FUN_0666e0c0(lVar15,*plVar18,0);
                        if ((uVar16 & 1) != 0) goto LAB_06866120;
                      }
                      else {
                        iVar7 = FUN_0666d0cc(lVar15,*plVar18,5,0);
                        if (iVar7 == 0) goto LAB_06866120;
                      }
                      uVar16 = (ulong)*(uint *)(lVar14 + 0x18);
                      uVar8 = uVar8 + 1;
                      if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar8) break;
                    } while( true );
                  }
                  goto LAB_06865ea8;
                }
                goto LAB_068661e4;
              }
              goto LAB_068661e0;
            }
            goto LAB_068661e4;
          }
        }
        if (*(int *)(DAT_083cb2f0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar10 = FUN_068666a0();
        if (*(int *)(DAT_083c9fc0 + 0xe0) == 0) {
          FUN_033b9870(DAT_083c9fc0);
        }
        uVar11 = FUN_067d14f8(0);
        if (*(int *)(DAT_083c9e30 + 0xe0) == 0) {
          FUN_033b9870();
        }
        FUN_0678fec4(lVar9,uVar10,uVar11,0);
        if (*(int *)(DAT_083cb2f0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar10 = FUN_06866750();
        *unaff_x19 = uVar10;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x19 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | 1L << ((ulong)unaff_x19 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        return 1;
      }
LAB_06865f84:
                    /* WARNING: Subroutine does not return */
      FUN_06850b80(0);
    }
    puVar12 = &DAT_0844a5f8;
  }
  uVar10 = FUN_033d1ba8(puVar12);
  FUN_033d1ba8(&DAT_083c8a08);
  uVar11 = thunk_FUN_03398a84();
  uVar13 = FUN_033d1ba8(&DAT_084523d8);
  FUN_0677f1f8(uVar11,uVar10,uVar13,0);
  uVar10 = FUN_033d1ba8(&DAT_08409318);
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(uVar11,uVar10);
LAB_06866120:
  if (lVar2 == 0) goto LAB_068661e4;
  if ((uint)uVar8 < *(uint *)(lVar2 + 0x18)) {
    uVar3 = *(uint *)(lVar9 + 0x18);
    uVar17 = uVar17 + 1;
    if ((int)uVar3 <= (int)uVar17) goto LAB_06866170;
    goto LAB_0686603c;
  }
LAB_068661e0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


