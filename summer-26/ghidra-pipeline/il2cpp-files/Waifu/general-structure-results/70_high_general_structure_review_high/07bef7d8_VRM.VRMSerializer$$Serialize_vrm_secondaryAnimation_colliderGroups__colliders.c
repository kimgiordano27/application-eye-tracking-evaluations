/*
FUNCTION_NAME: VRM.VRMSerializer$$Serialize_vrm_secondaryAnimation_colliderGroups__colliders
ENTRY_POINT: 07bef7d8
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4
*/


void VRM_VRMSerializer__Serialize_vrm_secondaryAnimation_colliderGroups__colliders(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  int unaff_w26;
  long unaff_x27;
  long unaff_x28;
  undefined8 in_stack_00000008;
  
  while( true ) {
    lVar7 = *(long *)(*(long *)(unaff_x23 + 0xc88) + 0xb8);
    uVar6 = *(undefined8 *)(lVar7 + 8);
    lVar7 = *(long *)(lVar7 + 0x10);
    if (*(int *)(*(long *)(param_1 + 0xb8) + 0x40) < unaff_w26) break;
    uVar5 = FUN_0682c29c((long)&stack0x00000008 + 4,0);
    uVar6 = FUN_06660dbc(uVar6,uVar5,0);
    if (lVar7 == 0) goto LAB_07bef95c;
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar10 = *(long *)(unaff_x25 + 0x490);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_07bef95c;
    uVar2 = *(uint *)(lVar7 + 0x18);
    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
      puVar9 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
      *puVar9 = uVar6;
      if (*(int *)(unaff_x22 + 0xcd0) != 0) {
        puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + unaff_x27);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | unaff_x28 << ((ulong)puVar9 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      FUN_04ab0e54(lVar7,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    unaff_w26 = unaff_w26 + 1;
    param_1 = *(long *)(unaff_x24 + 0x968);
    in_stack_00000008._4_4_ = unaff_w26;
    if (*(int *)(param_1 + 0xe0) == 0) {
      FUN_033b9870();
      param_1 = *(long *)(unaff_x24 + 0x968);
    }
  }
  uVar6 = FUN_06660dbc(uVar6,DAT_08455520,0);
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar10 = *(long *)(unaff_x25 + 0x490);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
        puVar9 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
        *puVar9 = uVar6;
        if (*(int *)(unaff_x22 + 0xcd0) != 0) {
          puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      else {
        FUN_04ab0e54(lVar7,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      return;
    }
  }
LAB_07bef95c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


