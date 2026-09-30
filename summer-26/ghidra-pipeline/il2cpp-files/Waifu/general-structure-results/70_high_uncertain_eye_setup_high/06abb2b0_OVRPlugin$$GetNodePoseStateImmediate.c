/*
FUNCTION_NAME: OVRPlugin$$GetNodePoseStateImmediate
ENTRY_POINT: 06abb2b0
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePoseStateImmediate(long *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int in_w9;
  long unaff_x19;
  long *plVar7;
  undefined8 uVar8;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  do {
    if (in_w9 != 0) {
      puVar2 = (ulong *)(unaff_x27 + ((ulong)param_1 >> 0x12 & 0x7fff) * 8 + unaff_x28);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = *puVar2 | unaff_x29 << ((ulong)param_1 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar1 = unaff_x23 + 1;
    lVar5 = *(long *)(unaff_x24 + 0x858);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      FUN_033b9870();
      lVar5 = *(long *)(unaff_x24 + 0x858);
    }
    if (**(long **)(lVar5 + 0xb8) == 0) {
LAB_06abb30c:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if ((long)*(int *)(**(long **)(lVar5 + 0xb8) + 0x18) <= (long)uVar1) {
      FUN_069d3e0c();
      return;
    }
    plVar7 = *(long **)(unaff_x19 + 0xd8);
    uVar8 = *(undefined8 *)(unaff_x19 + 0xa0);
    lVar5 = FUN_03398a84(*(undefined8 *)(unaff_x25 + 400));
    FUN_06a71484(lVar5,uVar8,0);
    if (plVar7 == (long *)0x0) goto LAB_06abb30c;
    if ((lVar5 != 0) && (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0)) {
LAB_06abb314:
      uVar8 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar8,0);
    }
    if (*(uint *)(plVar7 + 3) <= uVar1) {
LAB_06abb310:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    plVar7 = plVar7 + unaff_x23 + 5;
    *plVar7 = lVar5;
    if (*(int *)(unaff_x26 + 0xcd0) != 0) {
      puVar2 = (ulong *)(unaff_x27 + ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + unaff_x28);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = *puVar2 | unaff_x29 << ((ulong)plVar7 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    param_1 = *(long **)(unaff_x19 + 0xe0);
    uVar8 = *(undefined8 *)(unaff_x19 + 0xa8);
    lVar5 = FUN_03398a84(*(undefined8 *)(unaff_x25 + 400));
    FUN_06a71484(lVar5,uVar8,0);
    if (param_1 == (long *)0x0) goto LAB_06abb30c;
    if ((lVar5 != 0) && (lVar6 = FUN_0339898c(lVar5,*(undefined8 *)(*param_1 + 0x40)), lVar6 == 0))
    goto LAB_06abb314;
    if (*(uint *)(param_1 + 3) <= uVar1) goto LAB_06abb310;
    param_1 = param_1 + unaff_x23 + 5;
    *param_1 = lVar5;
    in_w9 = *(int *)(unaff_x26 + 0xcd0);
    unaff_x23 = uVar1;
  } while( true );
}


