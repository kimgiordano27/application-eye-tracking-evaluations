/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSyncSessionArray_GetElement
ENTRY_POINT: 06a11c7c
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Oculus_Platform_CAPI__ovr_NetSyncSessionArray_GetElement(long param_1,long param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  
  if ((DAT_086e1c48 & 1) == 0) {
    FUN_0335b6c8(&DAT_083ecb78,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f3e40,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f3e58,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    DAT_086e1c48 = 1;
  }
  if (param_2 != 0) {
    if (DAT_086f1fd8 == (code *)0x0) {
      DAT_086f1fd8 = (code *)FUN_033d1b68("UnityEngine.Collider::get_attachedRigidbody()");
    }
    uVar6 = (*DAT_086f1fd8)(param_2);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870(DAT_083cf7d8);
    }
    uVar7 = FUN_07a119fc(uVar6,0,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar7 = FUN_04570440(*(long *)(param_1 + 0x20),uVar6,DAT_083ecb78);
      if ((uVar7 & 1) != 0) {
        return;
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar7 = FUN_04ab1208(*(long *)(param_1 + 0x28),uVar6,DAT_083f3e58);
        lVar5 = DAT_083f3e40;
        if ((uVar7 & 1) != 0) {
          return;
        }
        lVar8 = *(long *)(param_1 + 0x28);
        if (lVar8 != 0) {
          lVar9 = *(long *)(lVar8 + 0x10);
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar2 = *(uint *)(lVar8 + 0x18);
            if (*(uint *)(lVar9 + 0x18) <= uVar2) {
              FUN_04ab0e54(lVar8,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              return;
            }
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
            *puVar10 = uVar6;
            if (DAT_08908cd0 == 0) {
              return;
            }
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


