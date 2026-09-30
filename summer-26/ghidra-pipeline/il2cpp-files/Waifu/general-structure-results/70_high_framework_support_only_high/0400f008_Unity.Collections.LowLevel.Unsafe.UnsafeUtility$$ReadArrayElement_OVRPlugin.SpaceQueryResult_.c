/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReadArrayElement<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0400f008
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<OVRPlugin_SpaceQueryResult>
              (undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  int *unaff_x19;
  undefined8 uVar13;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x24;
  long *unaff_x26;
  int iVar14;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  uVar6 = FUN_073f5f5c(param_1,param_2,0);
  if ((uVar6 & 1) == 0) {
    return -1;
  }
  lVar7 = *unaff_x26;
  if (lVar7 != 0) {
    iVar2 = *unaff_x19;
    iVar14 = 0;
    do {
      if (*(int *)(lVar7 + 0x18) <= iVar14) {
        return iVar2;
      }
      FUN_04a9f994(&stack0x00000030,lVar7,iVar14,DAT_083f2dc8);
      uVar13 = in_stack_00000030;
      plVar8 = (long *)FUN_073fd434(&stack0x00000048,in_stack_00000030,0);
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870(DAT_083d23b8);
        if (plVar8 == (long *)0x0) goto LAB_0400f09c;
LAB_0400f078:
        if (*(char *)(unaff_x21 + 0x118) == '\0') {
          lVar7 = FUN_0685bdbc(plVar8,0,1);
          lVar11 = *(long *)(*(long *)(unaff_x24 + 0x38) + 8);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0338f618(lVar11);
          }
          lVar11 = FUN_0339898c(lVar7,lVar11);
          if (lVar11 == 0) {
            lVar7 = FUN_03398188(DAT_083c7c90,8);
            if (lVar7 == 0) break;
            if (*(int *)(lVar7 + 0x18) == 0) {
LAB_0400f7b4:
                    /* WARNING: Subroutine does not return */
              FUN_033d1d44();
            }
            puVar12 = (undefined8 *)(lVar7 + 0x20);
            *puVar12 = DAT_0844a430;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            uVar10 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
            uVar3 = *(uint *)(lVar7 + 0x18);
            if (uVar3 < 2) goto LAB_0400f7b4;
            puVar12 = (undefined8 *)(lVar7 + 0x28);
            *puVar12 = uVar10;
            if (DAT_08908cd0 == 0) {
              if (((uVar3 < 3) || (*(undefined8 *)(lVar7 + 0x30) = DAT_0842f7a8, uVar3 == 3)) ||
                 ((*(undefined8 *)(lVar7 + 0x38) = uVar13, uVar3 < 5 ||
                  ((*(undefined8 *)(lVar7 + 0x40) = DAT_0842f4d8, uVar3 == 5 ||
                   (*(undefined8 *)(lVar7 + 0x48) = unaff_x22, uVar3 < 7)))))) goto LAB_0400f7b4;
              *(undefined8 *)(lVar7 + 0x50) = DAT_0842f8b8;
            }
            else {
              puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_0400f7b4;
              puVar12 = (undefined8 *)(lVar7 + 0x30);
              *puVar12 = DAT_0842f7a8;
              puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_0400f7b4;
              puVar12 = (undefined8 *)(lVar7 + 0x38);
              *puVar12 = uVar13;
              puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (*(uint *)(lVar7 + 0x18) < 5) goto LAB_0400f7b4;
              puVar12 = (undefined8 *)(lVar7 + 0x40);
              *puVar12 = DAT_0842f4d8;
              puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (*(uint *)(lVar7 + 0x18) < 6) goto LAB_0400f7b4;
              puVar12 = (undefined8 *)(lVar7 + 0x48);
              *puVar12 = unaff_x22;
              puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (*(uint *)(lVar7 + 0x18) < 7) goto LAB_0400f7b4;
              puVar12 = (undefined8 *)(lVar7 + 0x50);
              *puVar12 = DAT_0842f8b8;
              puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            uVar13 = **(undefined8 **)(unaff_x24 + 0x38);
            if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
              FUN_033b9870();
            }
            plVar8 = (long *)FUN_0683eca4(uVar13,0);
            if (plVar8 == (long *)0x0) break;
            uVar13 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
            if (*(uint *)(lVar7 + 0x18) < 8) goto LAB_0400f7b4;
            puVar12 = (undefined8 *)(lVar7 + 0x58);
            *puVar12 = uVar13;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            uVar13 = FUN_0666ee4c(lVar7,0);
            if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
              FUN_033b9870(DAT_083ca458);
            }
            FUN_079ca0b0(uVar13,0);
          }
          else {
            lVar11 = *(long *)(*(long *)(unaff_x24 + 0x38) + 8);
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_0338f618(lVar11);
            }
            if (lVar7 == 0) {
              lVar9 = 0;
            }
            else {
              lVar9 = FUN_0339898c(lVar7,lVar11);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_033d1fec(lVar7,lVar11);
              }
            }
            if (*unaff_x26 == 0) break;
            FUN_04a9f994(&stack0x00000030,*unaff_x26,iVar14,DAT_083f2dc8);
            FUN_073e51e8(in_stack_00000038,in_stack_00000040,lVar9,in_stack_00000020,
                         in_stack_00000028,uVar13,unaff_x22,0);
            FUN_03c206e4(in_stack_00000018);
          }
        }
        else {
          *unaff_x19 = *unaff_x19 + 1;
        }
      }
      else {
        if (plVar8 != (long *)0x0) goto LAB_0400f078;
LAB_0400f09c:
        lVar7 = FUN_03398188(DAT_083c7c90,7);
        if (lVar7 == 0) break;
        if (*(int *)(lVar7 + 0x18) == 0) goto LAB_0400f7b4;
        puVar12 = (undefined8 *)(lVar7 + 0x20);
        *puVar12 = DAT_08441450;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uVar10 = **(undefined8 **)(unaff_x24 + 0x38);
        if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        plVar8 = (long *)FUN_0683eca4(uVar10,0);
        if (plVar8 == (long *)0x0) break;
        uVar10 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
        uVar3 = *(uint *)(lVar7 + 0x18);
        if (uVar3 < 2) goto LAB_0400f7b4;
        puVar12 = (undefined8 *)(lVar7 + 0x28);
        *puVar12 = uVar10;
        if (DAT_08908cd0 == 0) {
          if ((((uVar3 < 3) || (*(undefined8 *)(lVar7 + 0x30) = DAT_0842eb80, uVar3 == 3)) ||
              (*(undefined8 *)(lVar7 + 0x38) = uVar13, uVar3 < 5)) ||
             ((*(undefined8 *)(lVar7 + 0x40) = DAT_0842f4d8, uVar3 == 5 ||
              (*(undefined8 *)(lVar7 + 0x48) = unaff_x22, uVar3 < 7)))) goto LAB_0400f7b4;
          *(undefined8 *)(lVar7 + 0x50) = DAT_0842f8a8;
        }
        else {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_0400f7b4;
          puVar12 = (undefined8 *)(lVar7 + 0x30);
          *puVar12 = DAT_0842eb80;
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_0400f7b4;
          puVar12 = (undefined8 *)(lVar7 + 0x38);
          *puVar12 = uVar13;
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (*(uint *)(lVar7 + 0x18) < 5) goto LAB_0400f7b4;
          puVar12 = (undefined8 *)(lVar7 + 0x40);
          *puVar12 = DAT_0842f4d8;
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (*(uint *)(lVar7 + 0x18) < 6) goto LAB_0400f7b4;
          puVar12 = (undefined8 *)(lVar7 + 0x48);
          *puVar12 = unaff_x22;
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (*(uint *)(lVar7 + 0x18) < 7) goto LAB_0400f7b4;
          puVar12 = (undefined8 *)(lVar7 + 0x50);
          *puVar12 = DAT_0842f8a8;
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uVar13 = FUN_0666ee4c(lVar7,0);
        if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
          FUN_033b9870(DAT_083ca458);
        }
        FUN_079ca0b0(uVar13,0);
      }
      lVar7 = *unaff_x26;
      iVar14 = iVar14 + 1;
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


