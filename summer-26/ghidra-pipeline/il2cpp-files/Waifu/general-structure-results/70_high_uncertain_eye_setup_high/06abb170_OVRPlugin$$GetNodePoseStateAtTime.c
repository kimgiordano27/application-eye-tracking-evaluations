/*
FUNCTION_NAME: OVRPlugin$$GetNodePoseStateAtTime
ENTRY_POINT: 06abb170
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePoseStateAtTime(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  FUN_06785b70();
  FUN_069d3d68();
  uVar8 = 0;
  do {
    if (*(int *)(DAT_083cb858 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (**(long **)(DAT_083cb858 + 0xb8) == 0) {
LAB_06abb30c:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if ((long)*(int *)(**(long **)(DAT_083cb858 + 0xb8) + 0x18) <= (long)uVar8) {
      FUN_069d3e0c();
      return;
    }
    plVar6 = *(long **)(unaff_x19 + 0xd8);
    uVar7 = *(undefined8 *)(unaff_x19 + 0xa0);
    lVar4 = FUN_03398a84(DAT_083d0190);
    FUN_06a71484(lVar4,uVar7,0);
    if (plVar6 == (long *)0x0) goto LAB_06abb30c;
    if ((lVar4 != 0) && (lVar5 = FUN_0339898c(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)) {
LAB_06abb314:
      uVar7 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar7,0);
    }
    if (*(uint *)(plVar6 + 3) <= uVar8) {
LAB_06abb310:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    plVar6 = plVar6 + uVar8 + 4;
    *plVar6 = lVar4;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = *(long **)(unaff_x19 + 0xe0);
    uVar7 = *(undefined8 *)(unaff_x19 + 0xa8);
    lVar4 = FUN_03398a84(DAT_083d0190);
    FUN_06a71484(lVar4,uVar7,0);
    if (plVar6 == (long *)0x0) goto LAB_06abb30c;
    if ((lVar4 != 0) && (lVar5 = FUN_0339898c(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
    goto LAB_06abb314;
    if (*(uint *)(plVar6 + 3) <= uVar8) goto LAB_06abb310;
    plVar6 = plVar6 + uVar8 + 4;
    *plVar6 = lVar4;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar6 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar8 = uVar8 + 1;
  } while( true );
}


