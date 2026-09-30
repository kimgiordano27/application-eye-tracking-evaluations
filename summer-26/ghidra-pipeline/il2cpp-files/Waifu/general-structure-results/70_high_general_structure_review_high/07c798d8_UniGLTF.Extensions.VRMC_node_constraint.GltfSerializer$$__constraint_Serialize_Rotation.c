/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_node_constraint.GltfSerializer$$__constraint_Serialize_Rotation
ENTRY_POINT: 07c798d8
PROGRAM: Waifu-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void UniGLTF_Extensions_VRMC_node_constraint_GltfSerializer____constraint_Serialize_Rotation
               (code *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  long unaff_x24;
  
  *(code **)(unaff_x21 + 0x7c8) = param_1;
  uVar4 = (*param_1)();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
  plVar8 = (long *)(unaff_x19 + 0x20);
  *plVar8 = unaff_x20;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (DAT_086d8912 == '\0') {
    FUN_0335b6c8(&DAT_083d2c48,1);
    DataMemoryBarrier(2,3);
    DAT_086d8912 = '\x01';
  }
  lVar5 = DAT_083d2c48;
  *(undefined8 *)(unaff_x19 + 0x3c) = **(undefined8 **)(DAT_083d2c48 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0x44) = **(undefined8 **)(lVar5 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0x4c) = **(undefined8 **)(lVar5 + 0xb8);
  uVar4 = FUN_03398a84(DAT_083c4ef8);
  FUN_04ab03d4(uVar4,DAT_083f3a98);
  puVar6 = (undefined8 *)(unaff_x19 + 0x58);
  *puVar6 = uVar4;
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
  FUN_07a0900c();
  if (*(long *)(unaff_x19 + 0x20) == 0) {
    lVar5 = FUN_03398a84(*(undefined8 *)(unaff_x24 + 0x558));
    pcVar7 = *(code **)(unaff_x21 + 0x7c8);
    if (pcVar7 == (code *)0x0) {
      pcVar7 = (code *)FUN_033d1b68("UnityEngine.RectOffset::InternalCreate()");
      *(code **)(unaff_x21 + 0x7c8) = pcVar7;
    }
    uVar4 = (*pcVar7)();
    *(undefined8 *)(lVar5 + 0x10) = uVar4;
    *plVar8 = lVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}


