/*
FUNCTION_NAME: OVREyeGaze$$OnEnable
ENTRY_POINT: 06a40d58
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnEnable(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined1 unaff_w22;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0xda3) = unaff_w22;
  if (unaff_x20 != (long *)0x0) {
    if (*(byte *)(DAT_083cf7d8 + 0x130) <= *(byte *)(*unaff_x20 + 0x130)) {
      plVar4 = unaff_x20;
      if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(DAT_083cf7d8 + 0x130) * 8 + -8)
          != DAT_083cf7d8) {
        plVar4 = (long *)0x0;
      }
      goto LAB_06a40da0;
    }
  }
  plVar4 = (long *)0x0;
LAB_06a40da0:
  puVar5 = (undefined8 *)(unaff_x19 + 0xb8);
  *puVar5 = plVar4;
  if (DAT_08908cd0 == 0) {
    *(long **)(unaff_x19 + 0xc0) = unaff_x20;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar5 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar5 = (undefined8 *)(unaff_x19 + 0xc0);
    *puVar5 = unaff_x20;
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


