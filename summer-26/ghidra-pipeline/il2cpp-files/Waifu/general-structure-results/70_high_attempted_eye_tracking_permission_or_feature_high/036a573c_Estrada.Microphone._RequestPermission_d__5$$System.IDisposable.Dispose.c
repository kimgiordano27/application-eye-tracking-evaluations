/*
FUNCTION_NAME: Estrada.Microphone.<RequestPermission>d__5$$System.IDisposable.Dispose
ENTRY_POINT: 036a573c
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;attempted_use
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Estrada_Microphone_<RequestPermission>d__5__System_IDisposable_Dispose(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if ((*(byte *)(unaff_x20 + 0xad6) & 1) == 0) {
    FUN_0335b6c8(&DAT_0840cbe0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0840ccb0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0840ce10,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x20 + 0xad6) = 1;
  }
  if (*(char *)(param_1 + 0x45) == '\0') {
    if (DAT_086ef168 == (code *)0x0) {
      DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
    (*DAT_086ef168)(param_1,1);
    FUN_036a59d4(param_1);
  }
  puVar7 = (undefined8 *)(param_1 + 0x28);
  uVar6 = *puVar7;
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar4 = FUN_07a119fc(uVar6,0,0);
  if (((uVar4 & 1) == 0) || (*(int *)(param_1 + 0x40) != 0)) {
    puVar7 = (undefined8 *)(param_1 + 0x38);
    uVar6 = *puVar7;
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar4 = FUN_07a119fc(uVar6,0,0);
    if (((uVar4 & 1) != 0) && (*(int *)(param_1 + 0x40) == 1)) {
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar5 = (*DAT_086ef190)(param_1);
      if (lVar5 != 0) {
        uVar6 = FUN_03fa1bc8(lVar5,DAT_0840ce10);
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
        if (DAT_086ef190 == (code *)0x0) {
          DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        }
        lVar5 = (*DAT_086ef190)(param_1);
        if (lVar5 != 0) {
          uVar6 = FUN_03fa1bc8(lVar5,DAT_0840ccb0);
          puVar7 = (undefined8 *)(param_1 + 0x30);
          *puVar7 = uVar6;
          if (DAT_08908cd0 == 0) {
            return;
          }
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          return;
        }
      }
      goto LAB_036a59d0;
    }
  }
  else {
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar5 = (*DAT_086ef190)(param_1);
    if (lVar5 == 0) {
LAB_036a59d0:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar6 = FUN_03fa1bc8(lVar5,DAT_0840cbe0);
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
  }
  return;
}


