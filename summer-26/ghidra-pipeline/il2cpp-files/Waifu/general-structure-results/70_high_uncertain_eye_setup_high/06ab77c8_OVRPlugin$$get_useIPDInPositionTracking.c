/*
FUNCTION_NAME: OVRPlugin$$get_useIPDInPositionTracking
ENTRY_POINT: 06ab77c8
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_useIPDInPositionTracking(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  code *in_x9;
  long unaff_x19;
  long *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  
  (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x250));
  *(undefined1 *)((long)unaff_x20 + 0x21) = 0;
  lVar4 = (**(code **)(*unaff_x20 + 600))();
  if (lVar4 != 0) {
    lVar6 = *(long *)(lVar4 + 0x78);
    lVar4 = FUN_06ab761c();
    if ((lVar6 != 0) && (lVar4 != 0)) {
      *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(lVar6 + 0x10);
      lVar4 = FUN_06ab761c();
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)(lVar4 + 0x18);
        *puVar5 = *(undefined8 *)(lVar6 + 0x18);
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar5 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar4 = FUN_06ab761c();
        uVar7 = *(undefined8 *)(unaff_x19 + 0x60);
        if (*(int *)(DAT_083cc008 + 0xe0) == 0) {
          FUN_033b9870(DAT_083cc008);
        }
        uVar7 = FUN_06ac65d8(uVar7,0);
        if (lVar4 != 0) {
          puVar5 = (undefined8 *)(lVar4 + 0x20);
          *puVar5 = uVar7;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar5 >> 0x12 & 0x7fff);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


