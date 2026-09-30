/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_GetNodePoseStateRaw
ENTRY_POINT: 06afa148
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


/* WARNING: Removing unreachable block (ram,0x06afa228) */

void OVRPlugin_OVRP_1_29_0__ovrp_GetNodePoseStateRaw(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  long *in_stack_00000008;
  long *in_stack_00000018;
  
  FUN_0335b6c8(&DAT_083e4bd0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083e50d0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083e4bd8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x51c) = unaff_w21;
  in_stack_00000018 = (long *)0x0;
  in_stack_00000008 = (long *)0x0;
  if (unaff_x19 == 0) goto LAB_06afa328;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    if (*(int *)(DAT_083c9658 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (**(long **)(DAT_083c9658 + 0xb8) == 0) goto LAB_06afa328;
    uVar4 = System_Array_EmptyInternalEnumerator<RoundedBoxVideoController_BoxAnimation>__MoveNext
                      (**(long **)(DAT_083c9658 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18),
                       &stack0x00000018,DAT_083e4bd8);
    if ((uVar4 & 1) != 0) {
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      (**(code **)(*in_stack_00000018 + 0x178))();
      if (*(int *)(DAT_083c9658 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if (**(long **)(DAT_083c9658 + 0xb8) != 0) {
        FUN_05e7c2bc(**(long **)(DAT_083c9658 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18),DAT_083e4bd0
                    );
        return;
      }
      goto LAB_06afa328;
    }
  }
  if (*(int *)(DAT_083c9658 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar5 = *(long *)(*(long *)(DAT_083c9658 + 0xb8) + 8);
  if (lVar5 == 0) {
LAB_06afa328:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  uVar4 = FUN_05e75d40(lVar5,*(undefined4 *)(unaff_x19 + 0x10),&stack0x00000008,DAT_083e50d0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(DAT_083c9658 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar5 = *(long *)(DAT_083c9658 + 0xb8);
    if ((*(char *)(lVar5 + 0x10) == '\0') && (*(int *)(unaff_x19 + 0x10) == 0x773889f6)) {
      if (*(int *)(DAT_083c9658 + 0xe0) == 0) {
        FUN_033b9870();
        lVar5 = *(long *)(DAT_083c9658 + 0xb8);
      }
      plVar6 = (long *)(lVar5 + 0x18);
      *plVar6 = unaff_x19;
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
    }
  }
  else {
    if (in_stack_00000008 == (long *)0x0) goto LAB_06afa328;
    (**(code **)(*in_stack_00000008 + 0x178))();
  }
  return;
}


