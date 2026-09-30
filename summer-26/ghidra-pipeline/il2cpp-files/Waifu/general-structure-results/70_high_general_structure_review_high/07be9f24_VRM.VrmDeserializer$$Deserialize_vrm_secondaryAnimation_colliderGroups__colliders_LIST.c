/*
FUNCTION_NAME: VRM.VrmDeserializer$$Deserialize_vrm_secondaryAnimation_colliderGroups__colliders_LIST
ENTRY_POINT: 07be9f24
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4
*/


void VRM_VrmDeserializer__Deserialize_vrm_secondaryAnimation_colliderGroups__colliders_LIST
               (undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar6;
  
  uVar4 = FUN_07a119fc(param_1,param_2,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_083d1130 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar5 = FUN_079da3b4(**(undefined8 **)(DAT_083d1130 + 0xb8),0);
    *unaff_x22 = uVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x22 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)unaff_x22 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  puVar6 = (undefined8 *)(unaff_x19 + 0x88);
  uVar5 = *puVar6;
  if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar4 = FUN_07a119fc(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_083d1130 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar5 = FUN_079da3b4(*(undefined8 *)(*(long *)(DAT_083d1130 + 0xb8) + 0x10),0);
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
  }
  puVar6 = (undefined8 *)(unaff_x19 + 0x90);
  uVar5 = *puVar6;
  if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar4 = FUN_07a119fc(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_083d1130 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar5 = FUN_079da3b4(*(undefined8 *)(*(long *)(DAT_083d1130 + 0xb8) + 0x18),0);
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
  }
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    FUN_07beb068(*(long *)(unaff_x19 + 0x68),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


