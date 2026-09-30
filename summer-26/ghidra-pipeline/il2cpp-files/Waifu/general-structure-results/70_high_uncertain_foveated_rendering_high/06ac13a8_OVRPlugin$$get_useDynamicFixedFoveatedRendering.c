/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 06ac13a8
PROGRAM: Waifu-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_useDynamicFixedFoveatedRendering(ulong *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong in_x9;
  long unaff_x19;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x21;
  long unaff_x22;
  
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = *param_1 | in_x9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar6 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar4 = FUN_0339898c(uVar6,DAT_083cca30);
  puVar5 = (undefined8 *)(unaff_x19 + 0x38);
  *puVar5 = uVar4;
  FUN_0339898c(uVar6,DAT_083cca30);
  if (*(int *)(unaff_x22 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x464e0);
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


