/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSyncSessionArray_GetSize
ENTRY_POINT: 06a11d00
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Oculus_Platform_CAPI__ovr_NetSyncSessionArray_GetSize(void)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long unaff_x19;
  long unaff_x21;
  
  pcVar6 = (code *)FUN_033d1b68("UnityEngine.Collider::get_attachedRigidbody()");
  *(code **)(unaff_x21 + 0xfd8) = pcVar6;
  uVar7 = (*pcVar6)();
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870(DAT_083cf7d8);
  }
  uVar8 = FUN_07a119fc(uVar7,0,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar8 = FUN_04570440(*(long *)(unaff_x19 + 0x20),uVar7,DAT_083ecb78);
    if ((uVar8 & 1) != 0) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      uVar8 = FUN_04ab1208(*(long *)(unaff_x19 + 0x28),uVar7,DAT_083f3e58);
      lVar5 = DAT_083f3e40;
      if ((uVar8 & 1) != 0) {
        return;
      }
      lVar9 = *(long *)(unaff_x19 + 0x28);
      if (lVar9 != 0) {
        lVar10 = *(long *)(lVar9 + 0x10);
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (*(uint *)(lVar10 + 0x18) <= uVar2) {
            FUN_04ab0e54(lVar9,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            return;
          }
          *(uint *)(lVar9 + 0x18) = uVar2 + 1;
          puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
          *puVar11 = uVar7;
          if (DAT_08908cd0 == 0) {
            return;
          }
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar11 >> 0x12 & 0x7fff);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


