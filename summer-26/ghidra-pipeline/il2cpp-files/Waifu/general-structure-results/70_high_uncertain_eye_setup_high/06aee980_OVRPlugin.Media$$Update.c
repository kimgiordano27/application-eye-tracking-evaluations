/*
FUNCTION_NAME: OVRPlugin.Media$$Update
ENTRY_POINT: 06aee980
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_Media__Update(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x496) & 1) == 0) {
    FUN_0335b6c8(&DAT_083c9bc8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cc7b0,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x20 + 0x496) = 1;
  }
  plVar5 = *(long **)(param_1 + 0x40);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == DAT_083cc7b0) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_06aeea18;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0338f71c(plVar5,DAT_083cc7b0,2);
LAB_06aeea18:
  plVar5 = (long *)(*(code *)*puVar1)(plVar5,puVar1[1]);
  if (plVar5 != (long *)0x0) {
    if (*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_083c9bc8 + 0x130)) {
      plVar5 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_083c9bc8 + 0x130) * 8 + -8)
             != DAT_083c9bc8) {
      plVar5 = (long *)0x0;
    }
  }
  return plVar5;
}


