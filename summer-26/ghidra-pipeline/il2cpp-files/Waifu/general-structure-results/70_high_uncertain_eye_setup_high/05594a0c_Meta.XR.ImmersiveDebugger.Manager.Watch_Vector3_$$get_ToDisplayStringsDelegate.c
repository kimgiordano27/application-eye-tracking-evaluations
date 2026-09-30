/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_ToDisplayStringsDelegate
ENTRY_POINT: 05594a0c
PROGRAM: Waifu-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_ToDisplayStringsDelegate
               (long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if ((DAT_086dc403 & 1) == 0) {
    FUN_0335b6c8(&DAT_083c7c90,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_084303c8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0842fe68,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_084301d0,1);
    DataMemoryBarrier(2,3);
    DAT_086dc403 = 1;
  }
  lVar4 = FUN_03398188(DAT_083c7c90,5);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(int *)(lVar4 + 0x18) != 0) {
    puVar7 = (undefined8 *)(lVar4 + 0x20);
    *puVar7 = DAT_0842fe68;
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
    lVar5 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618();
    }
    uVar6 = FUN_0682c29c(param_1,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 200));
    if (1 < *(uint *)(lVar4 + 0x18)) {
      puVar7 = (undefined8 *)(lVar4 + 0x28);
      *puVar7 = uVar6;
      if (DAT_08908cd0 == 0) {
        if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_05594ca8;
        *(undefined8 *)(lVar4 + 0x30) = DAT_084303c8;
      }
      else {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_05594ca8;
        puVar7 = (undefined8 *)(lVar4 + 0x30);
        *puVar7 = DAT_084303c8;
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
      lVar5 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0338f618();
      }
      uVar6 = FUN_0682c29c(param_1 + 4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0xd0));
      if (3 < *(uint *)(lVar4 + 0x18)) {
        puVar7 = (undefined8 *)(lVar4 + 0x38);
        *puVar7 = uVar6;
        if (DAT_08908cd0 == 0) {
          if (4 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x40) = DAT_084301d0;
            goto LAB_05594c90;
          }
        }
        else {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (4 < *(uint *)(lVar4 + 0x18)) {
            puVar7 = (undefined8 *)(lVar4 + 0x40);
            *puVar7 = DAT_084301d0;
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
LAB_05594c90:
            FUN_0666ee4c(lVar4,0);
            return;
          }
        }
      }
    }
  }
LAB_05594ca8:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


