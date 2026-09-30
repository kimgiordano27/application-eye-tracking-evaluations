/*
FUNCTION_NAME: QRCoder.PayloadGenerator.RussiaPaymentOrder.MandatoryFields$$.ctor
ENTRY_POINT: 064426b8
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 QRCoder_PayloadGenerator_RussiaPaymentOrder_MandatoryFields___ctor(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined1 unaff_w21;
  undefined4 uVar9;
  float fVar10;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cf7d8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ff4f8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0844d6e8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0844d6d0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0xfa5) = unaff_w21;
  if (4 < *(uint *)(unaff_x19 + 0x10)) goto LAB_064429b4;
  lVar8 = *(long *)(unaff_x19 + 0x20);
  switch(*(uint *)(unaff_x19 + 0x10)) {
  case 0:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    *(undefined4 *)(unaff_x19 + 0x28) = 0x41200000;
    if (DAT_086ef688 == (code *)0x0) {
      DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
    }
    uVar9 = (*DAT_086ef688)();
    *(undefined4 *)(unaff_x19 + 0x2c) = uVar9;
    break;
  case 1:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    break;
  case 2:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (lVar8 == 0) goto LAB_06442a78;
    uVar6 = FUN_0644195c(lVar8);
    puVar7 = (undefined8 *)(unaff_x19 + 0x18);
    *puVar7 = uVar6;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar9 = 3;
    goto LAB_06442a64;
  case 3:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (lVar8 == 0) goto LAB_06442a78;
    uVar6 = *(undefined8 *)(lVar8 + 0x30);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar4 = FUN_07a119fc(uVar6,0,0);
    if ((uVar4 & 1) != 0) goto LAB_064429b4;
    *(undefined4 *)(unaff_x19 + 0x28) = 0x40400000;
    if (DAT_086ef688 == (code *)0x0) {
      DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
    }
    uVar9 = (*DAT_086ef688)();
    *(undefined4 *)(unaff_x19 + 0x2c) = uVar9;
    goto LAB_064428cc;
  case 4:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (lVar8 == 0) goto LAB_06442a78;
LAB_064428cc:
    lVar5 = *(long *)(lVar8 + 0x30);
    if (lVar5 == 0) goto LAB_06442a78;
    if (*(char *)(lVar5 + 0x20) != '\0') {
      if (*(long *)(lVar8 + 0x28) == 0) goto LAB_06442a78;
      lVar8 = *(long *)(*(long *)(lVar8 + 0x28) + 0x20);
      if (lVar8 != 0) {
        uVar6 = FUN_03c89df4(lVar5,DAT_08405a58);
        FUN_0548cdf0(lVar8,uVar6,DAT_083ff4f8);
      }
      goto LAB_064429b4;
    }
    if (DAT_086ef688 == (code *)0x0) {
      DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
    }
    fVar10 = (float)(*DAT_086ef688)();
    if (*(float *)(unaff_x19 + 0x28) < fVar10 - *(float *)(unaff_x19 + 0x2c)) {
      uVar6 = DAT_0844d6d0;
      if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
        FUN_033b9870();
        uVar6 = DAT_0844d6d0;
      }
      goto LAB_064429ac;
    }
    puVar7 = (undefined8 *)(unaff_x19 + 0x18);
    *puVar7 = 0;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar9 = 4;
    goto LAB_06442a64;
  }
  uVar6 = FUN_06beabfc(3);
  uVar4 = FUN_079afc94(uVar6,0);
  if ((uVar4 & 1) == 0) {
    if (DAT_086ef688 == (code *)0x0) {
      DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
    }
    fVar10 = (float)(*DAT_086ef688)();
    if (fVar10 - *(float *)(unaff_x19 + 0x2c) <= *(float *)(unaff_x19 + 0x28)) {
      puVar7 = (undefined8 *)(unaff_x19 + 0x18);
      *puVar7 = 0;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar6 = 1;
      *(undefined4 *)(unaff_x19 + 0x10) = 1;
    }
    else {
      uVar6 = DAT_0844d6e8;
      if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
        FUN_033b9870();
        uVar6 = DAT_0844d6e8;
      }
LAB_064429ac:
      FUN_079ca678(uVar6,0);
LAB_064429b4:
      uVar6 = 0;
    }
  }
  else {
    if (lVar8 == 0) {
LAB_06442a78:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar6 = FUN_06441a00(lVar8);
    puVar7 = (undefined8 *)(unaff_x19 + 0x18);
    *puVar7 = uVar6;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar9 = 2;
LAB_06442a64:
    *(undefined4 *)(unaff_x19 + 0x10) = uVar9;
    uVar6 = 1;
  }
  return uVar6;
}


