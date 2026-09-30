/*
FUNCTION_NAME: Newtonsoft.Json.JsonReaderException$$get_LinePosition
ENTRY_POINT: 067d4744
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonReaderException__get_LinePosition(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  ulong uStack0000000000000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  ulong uStack0000000000000020;
  ulong uStack0000000000000028;
  ulong uStack0000000000000030;
  ulong uStack0000000000000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  ulong uStack0000000000000054;
  
  uStack0000000000000054 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000048 = 0;
  uStack000000000000004c = 0;
  _uStack0000000000000040 = 0;
  uStack0000000000000018 = 0;
  uStack000000000000001c = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000014 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000008 = 0;
  _uStack0000000000000000 = 0;
  if ((*(long *)(param_1 + 0x58) == 0) || (*(int *)(*(long *)(param_1 + 0x58) + 0x10) == 0)) {
    if (param_2 == 0) goto LAB_067d4cc8;
    bVar3 = DAT_08908cd0 == 0;
  }
  else {
    uStack0000000000000054 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000048 = 0;
    uStack000000000000004c = 0;
    _uStack0000000000000040 = 0;
    uStack0000000000000018 = 0;
    uStack000000000000001c = 0;
    uStack0000000000000010 = 0;
    uStack0000000000000014 = 0;
    uStack0000000000000028 = 0;
    uStack0000000000000020 = 0;
    uStack0000000000000008 = 0;
    _uStack0000000000000000 = 0;
    uVar4 = FUN_033bdc18(*(undefined4 *)(param_1 + 0x68));
    uVar5 = FUN_067d4674(uVar4,uStack0000000000000008._4_4_,uStack0000000000000010);
    if (param_2 == 0) {
LAB_067d4cc8:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    puVar6 = (undefined8 *)(param_2 + 0x18);
    *puVar6 = uVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar5 = FUN_067d4674(uVar5,uStack0000000000000038 & 0xffffffff,uStack0000000000000038._4_4_);
    puVar6 = (undefined8 *)(param_2 + 0x10);
    *puVar6 = uVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar5 = FUN_067d4630(uVar4,uStack0000000000000020 & 0xffffffff);
    FUN_067cdf68(param_2,uVar5,0);
    *(undefined4 *)(param_2 + 0xb0) = uStack0000000000000000;
    uVar5 = FUN_067d4630(uVar4,uStack0000000000000004);
    puVar6 = (undefined8 *)(param_2 + 0x50);
    *puVar6 = uVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar5 = FUN_067d4630(uVar4,uStack0000000000000008 & 0xffffffff);
    puVar6 = (undefined8 *)(param_2 + 0x48);
    *puVar6 = uVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar5 = NEON_rev64(CONCAT44(uStack0000000000000018,uStack0000000000000014),4);
    *(undefined8 *)(param_2 + 0xb4) = uVar5;
    uVar5 = FUN_067d4630(uVar4,uStack000000000000001c);
    puVar6 = (undefined8 *)(param_2 + 0x58);
    *puVar6 = uVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar5 = FUN_067d4630(uVar4,uStack0000000000000020._4_4_);
    puVar6 = (undefined8 *)(param_2 + 0x78);
    *puVar6 = uVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar5 = FUN_067d4630(uVar4,uStack0000000000000028 & 0xffffffff);
    puVar6 = (undefined8 *)(param_2 + 0x30);
    *puVar6 = uVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined4 *)(param_2 + 0xac) = uStack0000000000000028._4_4_;
    uVar5 = FUN_067d4630(uVar4,uStack0000000000000030 & 0xffffffff);
    puVar6 = (undefined8 *)(param_2 + 0x38);
    *puVar6 = uVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar5 = FUN_067d4630(uVar4,uStack0000000000000030._4_4_);
    puVar6 = (undefined8 *)(param_2 + 0x40);
    *puVar6 = uVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined4 *)(param_2 + 0xbc) = uStack0000000000000040;
    uVar5 = FUN_067d4630(uVar4,uStack0000000000000044);
    puVar6 = (undefined8 *)(param_2 + 0x98);
    *puVar6 = uVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar5 = NEON_rev64(CONCAT44(uStack000000000000004c,uStack0000000000000048),4);
    *(undefined8 *)(param_2 + 0xc0) = uVar5;
    uVar5 = FUN_067d4630(uVar4,uStack0000000000000050);
    puVar6 = (undefined8 *)(param_2 + 0x90);
    *puVar6 = uVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar5 = FUN_067d4630(uVar4,uStack0000000000000054 & 0xffffffff);
    puVar6 = (undefined8 *)(param_2 + 0x70);
    *puVar6 = uVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar4 = FUN_067d4630(uVar4,uStack0000000000000054._4_4_);
    puVar6 = (undefined8 *)(param_2 + 0x28);
    *puVar6 = uVar4;
    if (DAT_08908cd0 == 0) {
      bVar3 = true;
    }
    else {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar3 = false;
    }
  }
  puVar6 = (undefined8 *)(param_2 + 0x80);
  *puVar6 = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_2 + 0xac);
  if (bVar3) {
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_2 + 0x40);
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar6 = (undefined8 *)(param_2 + 0x20);
    *puVar6 = *(undefined8 *)(param_2 + 0x10);
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar6 = (undefined8 *)(param_2 + 0x88);
    *puVar6 = *(undefined8 *)(param_2 + 0x40);
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


