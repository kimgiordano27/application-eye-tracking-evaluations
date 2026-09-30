/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.LayerMask_DirectConverter$$CreateInstance
ENTRY_POINT: 0775ce5c
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__CreateInstance(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 unaff_w23;
  long lVar11;
  
  FUN_0335b6c8(&DAT_083e2b60,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083e2b70,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083e2b80,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083e2b88,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cc588,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x22 + 0x7f7) = unaff_w23;
  if (unaff_x20 == (long *)0x0) {
    *unaff_x19 = 0;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x19 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)unaff_x19 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    uVar5 = FUN_0339a700(*unaff_x20 + 0x20);
    if (*(int *)(DAT_083c9910 + 0xe0) == 0) {
      FUN_033b9870(DAT_083c9910);
    }
    uVar6 = FUN_0775f4d8(uVar5);
    if ((uVar6 & 1) == 0) {
      if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
        iVar4 = FUN_05dafc98();
        if (iVar4 < 0) {
          if (*(int *)(DAT_083c9910 + 0xe0) == 0) {
            FUN_033b9870();
          }
          plVar8 = (long *)FUN_0775f708();
          if (*unaff_x19 == 0) {
            if (plVar8 == (long *)0x0) goto LAB_0775d2bc;
            lVar7 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar6 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_083cc588) {
                  puVar9 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_0775d0bc;
                }
                uVar6 = uVar6 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar6 != 0);
            }
            puVar9 = (undefined8 *)FUN_0338f71c(plVar8,DAT_083cc588,1);
LAB_0775d0bc:
            lVar7 = (*(code *)*puVar9)(plVar8,uVar5);
            *unaff_x19 = lVar7;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x19 >> 0x12 & 0x7fff);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)unaff_x19 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
          }
          if ((*(long *)(unaff_x21 + 0x10) != 0) && (FUN_05db00ac(), plVar8 != (long *)0x0)) {
            lVar7 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar6 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_083cc588) {
                  puVar9 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                  goto LAB_0775d198;
                }
                uVar6 = uVar6 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar6 != 0);
            }
            puVar9 = (undefined8 *)FUN_0338f71c(plVar8,DAT_083cc588,2);
LAB_0775d198:
            (*(code *)*puVar9)(plVar8,uVar5);
            lVar7 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar6 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_083cc588) {
                  puVar9 = (undefined8 *)(lVar7 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                  goto LAB_0775d1fc;
                }
                uVar6 = uVar6 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar6 != 0);
            }
            puVar9 = (undefined8 *)FUN_0338f71c(plVar8,DAT_083cc588,3);
LAB_0775d1fc:
            (*(code *)*puVar9)(plVar8,uVar5);
            lVar7 = *plVar8;
            lVar11 = *unaff_x19;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar6 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_083cc588) {
                  puVar9 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
                  goto LAB_0775d26c;
                }
                uVar6 = uVar6 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar6 != 0);
            }
            puVar9 = (undefined8 *)FUN_0338f71c(plVar8,DAT_083cc588,4);
LAB_0775d26c:
            (*(code *)*puVar9)(plVar8,uVar5,lVar11,puVar9[1]);
            if (*(long *)(unaff_x21 + 0x10) != 0) {
              FUN_05db00ac();
              return;
            }
          }
        }
        else if (*(long *)(unaff_x21 + 0x10) != 0) {
          lVar7 = FUN_05daf524();
          *unaff_x19 = lVar7;
          if (DAT_08908cd0 == 0) {
            return;
          }
          puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x19 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)unaff_x19 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          return;
        }
      }
LAB_0775d2bc:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    *unaff_x19 = (long)unaff_x20;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x19 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)unaff_x19 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}


