/*
FUNCTION_NAME: Oculus.Interaction.DistanceReticles.InteractorReticle<object>$$HandlePostProcessed
ENTRY_POINT: 0457bb54
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Oculus_Interaction_DistanceReticles_InteractorReticle<object>__HandlePostProcessed(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 unaff_w22;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  
  FUN_0335b6c8(&DAT_08436a78,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0844c180,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x1da) = unaff_w22;
  plVar14 = (long *)(unaff_x19 + 0x40);
  if (*plVar14 == 0) {
    return;
  }
  iVar4 = FUN_0670e5a4(*plVar14,DAT_08436a78,0);
  lVar10 = *plVar14;
  uVar12 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x110);
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870(DAT_083d23b8);
  }
  uVar12 = FUN_0683eca4(uVar12,0);
  if (lVar10 == 0) goto LAB_0457bf08;
  lVar10 = FUN_0670bb64(lVar10,DAT_08437510,uVar12,0);
  lVar13 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_0338f618(lVar13);
  }
  if (lVar10 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_0339898c(lVar10,lVar13);
    if (lVar6 == 0) goto LAB_0457bf0c;
  }
  plVar15 = (long *)(unaff_x19 + 0x30);
  *plVar15 = lVar6;
  lVar13 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_0338f618(lVar13);
  }
  if ((lVar10 != 0) && (lVar6 = FUN_0339898c(lVar10,lVar13), lVar6 == 0)) {
LAB_0457bf0c:
                    /* WARNING: Subroutine does not return */
    FUN_033d1fec(lVar10,lVar13);
  }
  if (DAT_08908cd0 == 0) {
    *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
    if (iVar4 != 0) goto LAB_0457bd04;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar15 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar15 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
    if (iVar4 == 0) {
      puVar8 = (undefined8 *)(unaff_x19 + 0x10);
      *puVar8 = 0;
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar8 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
LAB_0457bd04:
      uVar12 = FUN_03398188(DAT_083c7838,iVar4);
      puVar8 = (undefined8 *)(unaff_x19 + 0x10);
      *puVar8 = uVar12;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar8 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x118);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0338f618();
      }
      uVar12 = FUN_03398188(lVar10,iVar4);
      puVar8 = (undefined8 *)(unaff_x19 + 0x18);
      *puVar8 = uVar12;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar8 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar10 = *plVar14;
      uVar12 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x108);
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar12 = FUN_0683eca4(uVar12,0);
      if (lVar10 == 0) goto LAB_0457bf08;
      lVar10 = FUN_0670bb64(lVar10,DAT_08439708,uVar12,0);
      lVar13 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xc0);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_0338f618(lVar13);
      }
      if (lVar10 == 0) {
        FUN_033d1ba8(&DAT_083d0ff8);
        uVar12 = thunk_FUN_03398a84();
        uVar7 = FUN_033d1ba8(&DAT_08448948);
        FUN_0670130c(uVar12,uVar7,0);
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(uVar12);
      }
      lVar6 = FUN_0339898c(lVar10,lVar13);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(lVar10,lVar13);
      }
      if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
        uVar11 = 0;
        uVar9 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d44();
          }
          FUN_0457e044();
          uVar9 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar11 = uVar11 + 1;
        } while ((long)uVar11 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
    }
  }
  if (*plVar14 != 0) {
    uVar5 = FUN_0670e5a4(*plVar14,DAT_0844c180,0);
    *(undefined4 *)(unaff_x19 + 0x38) = uVar5;
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
LAB_0457bf08:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


