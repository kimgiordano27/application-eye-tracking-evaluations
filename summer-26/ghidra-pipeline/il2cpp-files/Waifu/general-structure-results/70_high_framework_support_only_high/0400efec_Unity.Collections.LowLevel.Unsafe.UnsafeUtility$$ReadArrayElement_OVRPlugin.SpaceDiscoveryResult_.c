/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReadArrayElement<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0400efec
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<OVRPlugin_SpaceDiscoveryResult>
              (void)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  int *unaff_x19;
  undefined8 uVar14;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x24;
  int iVar15;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  if (*(long *)(unaff_x24 + 0x38) == 0) {
    FUN_0338f674();
  }
  plVar1 = (long *)(unaff_x21 + 0x120);
  uVar7 = FUN_073f5f5c();
  if ((uVar7 & 1) == 0) {
    return -1;
  }
  lVar8 = *plVar1;
  if (lVar8 != 0) {
    iVar3 = *unaff_x19;
    iVar15 = 0;
    do {
      if (*(int *)(lVar8 + 0x18) <= iVar15) {
        return iVar3;
      }
      FUN_04a9f994(&stack0x00000030,lVar8,iVar15,DAT_083f2dc8);
      uVar14 = in_stack_00000030;
      plVar9 = (long *)FUN_073fd434(&stack0x00000048,in_stack_00000030,0);
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870(DAT_083d23b8);
        if (plVar9 == (long *)0x0) goto LAB_0400f09c;
LAB_0400f078:
        if (*(char *)(unaff_x21 + 0x118) == '\0') {
          lVar8 = FUN_0685bdbc(plVar9,0,1);
          lVar12 = *(long *)(*(long *)(unaff_x24 + 0x38) + 8);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_0338f618(lVar12);
          }
          lVar12 = FUN_0339898c(lVar8,lVar12);
          if (lVar12 == 0) {
            lVar8 = FUN_03398188(DAT_083c7c90,8);
            if (lVar8 == 0) break;
            if (*(int *)(lVar8 + 0x18) == 0) {
LAB_0400f7b4:
                    /* WARNING: Subroutine does not return */
              FUN_033d1d44();
            }
            puVar13 = (undefined8 *)(lVar8 + 0x20);
            *puVar13 = DAT_0844a430;
            if (DAT_08908cd0 != 0) {
              puVar2 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar6) {
                  *puVar2 = *puVar2 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            uVar11 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
            uVar4 = *(uint *)(lVar8 + 0x18);
            if (uVar4 < 2) goto LAB_0400f7b4;
            puVar13 = (undefined8 *)(lVar8 + 0x28);
            *puVar13 = uVar11;
            if (DAT_08908cd0 == 0) {
              if (((uVar4 < 3) || (*(undefined8 *)(lVar8 + 0x30) = DAT_0842f7a8, uVar4 == 3)) ||
                 ((*(undefined8 *)(lVar8 + 0x38) = uVar14, uVar4 < 5 ||
                  ((*(undefined8 *)(lVar8 + 0x40) = DAT_0842f4d8, uVar4 == 5 ||
                   (*(undefined8 *)(lVar8 + 0x48) = unaff_x22, uVar4 < 7)))))) goto LAB_0400f7b4;
              *(undefined8 *)(lVar8 + 0x50) = DAT_0842f8b8;
            }
            else {
              puVar2 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar6) {
                  *puVar2 = *puVar2 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_0400f7b4;
              puVar13 = (undefined8 *)(lVar8 + 0x30);
              *puVar13 = DAT_0842f7a8;
              puVar2 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar6) {
                  *puVar2 = *puVar2 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_0400f7b4;
              puVar13 = (undefined8 *)(lVar8 + 0x38);
              *puVar13 = uVar14;
              puVar2 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar6) {
                  *puVar2 = *puVar2 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_0400f7b4;
              puVar13 = (undefined8 *)(lVar8 + 0x40);
              *puVar13 = DAT_0842f4d8;
              puVar2 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar6) {
                  *puVar2 = *puVar2 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_0400f7b4;
              puVar13 = (undefined8 *)(lVar8 + 0x48);
              *puVar13 = unaff_x22;
              puVar2 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar6) {
                  *puVar2 = *puVar2 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (*(uint *)(lVar8 + 0x18) < 7) goto LAB_0400f7b4;
              puVar13 = (undefined8 *)(lVar8 + 0x50);
              *puVar13 = DAT_0842f8b8;
              puVar2 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar6) {
                  *puVar2 = *puVar2 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            uVar14 = **(undefined8 **)(unaff_x24 + 0x38);
            if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
              FUN_033b9870();
            }
            plVar9 = (long *)FUN_0683eca4(uVar14,0);
            if (plVar9 == (long *)0x0) break;
            uVar14 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
            if (*(uint *)(lVar8 + 0x18) < 8) goto LAB_0400f7b4;
            puVar13 = (undefined8 *)(lVar8 + 0x58);
            *puVar13 = uVar14;
            if (DAT_08908cd0 != 0) {
              puVar2 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar6) {
                  *puVar2 = *puVar2 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            uVar14 = FUN_0666ee4c(lVar8,0);
            if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
              FUN_033b9870(DAT_083ca458);
            }
            FUN_079ca0b0(uVar14,0);
          }
          else {
            lVar12 = *(long *)(*(long *)(unaff_x24 + 0x38) + 8);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_0338f618(lVar12);
            }
            if (lVar8 == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = FUN_0339898c(lVar8,lVar12);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_033d1fec(lVar8,lVar12);
              }
            }
            if (*plVar1 == 0) break;
            FUN_04a9f994(&stack0x00000030,*plVar1,iVar15,DAT_083f2dc8);
            FUN_073e51e8(in_stack_00000038,in_stack_00000040,lVar10,in_stack_00000020,
                         in_stack_00000028,uVar14,unaff_x22,0);
            FUN_03c206e4(in_stack_00000018);
          }
        }
        else {
          *unaff_x19 = *unaff_x19 + 1;
        }
      }
      else {
        if (plVar9 != (long *)0x0) goto LAB_0400f078;
LAB_0400f09c:
        lVar8 = FUN_03398188(DAT_083c7c90,7);
        if (lVar8 == 0) break;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0400f7b4;
        puVar13 = (undefined8 *)(lVar8 + 0x20);
        *puVar13 = DAT_08441450;
        if (DAT_08908cd0 != 0) {
          puVar2 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = *puVar2 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        uVar11 = **(undefined8 **)(unaff_x24 + 0x38);
        if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        plVar9 = (long *)FUN_0683eca4(uVar11,0);
        if (plVar9 == (long *)0x0) break;
        uVar11 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
        uVar4 = *(uint *)(lVar8 + 0x18);
        if (uVar4 < 2) goto LAB_0400f7b4;
        puVar13 = (undefined8 *)(lVar8 + 0x28);
        *puVar13 = uVar11;
        if (DAT_08908cd0 == 0) {
          if ((((uVar4 < 3) || (*(undefined8 *)(lVar8 + 0x30) = DAT_0842eb80, uVar4 == 3)) ||
              (*(undefined8 *)(lVar8 + 0x38) = uVar14, uVar4 < 5)) ||
             ((*(undefined8 *)(lVar8 + 0x40) = DAT_0842f4d8, uVar4 == 5 ||
              (*(undefined8 *)(lVar8 + 0x48) = unaff_x22, uVar4 < 7)))) goto LAB_0400f7b4;
          *(undefined8 *)(lVar8 + 0x50) = DAT_0842f8a8;
        }
        else {
          puVar2 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = *puVar2 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_0400f7b4;
          puVar13 = (undefined8 *)(lVar8 + 0x30);
          *puVar13 = DAT_0842eb80;
          puVar2 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = *puVar2 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_0400f7b4;
          puVar13 = (undefined8 *)(lVar8 + 0x38);
          *puVar13 = uVar14;
          puVar2 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = *puVar2 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_0400f7b4;
          puVar13 = (undefined8 *)(lVar8 + 0x40);
          *puVar13 = DAT_0842f4d8;
          puVar2 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = *puVar2 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_0400f7b4;
          puVar13 = (undefined8 *)(lVar8 + 0x48);
          *puVar13 = unaff_x22;
          puVar2 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = *puVar2 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (*(uint *)(lVar8 + 0x18) < 7) goto LAB_0400f7b4;
          puVar13 = (undefined8 *)(lVar8 + 0x50);
          *puVar13 = DAT_0842f8a8;
          puVar2 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = *puVar2 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        uVar14 = FUN_0666ee4c(lVar8,0);
        if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
          FUN_033b9870(DAT_083ca458);
        }
        FUN_079ca0b0(uVar14,0);
      }
      lVar8 = *plVar1;
      iVar15 = iVar15 + 1;
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


