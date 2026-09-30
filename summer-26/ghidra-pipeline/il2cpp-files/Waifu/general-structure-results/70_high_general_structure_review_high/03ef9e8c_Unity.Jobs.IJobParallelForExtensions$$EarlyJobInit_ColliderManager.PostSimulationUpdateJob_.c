/*
FUNCTION_NAME: Unity.Jobs.IJobParallelForExtensions$$EarlyJobInit<ColliderManager.PostSimulationUpdateJob>
ENTRY_POINT: 03ef9e8c
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8
Unity_Jobs_IJobParallelForExtensions__EarlyJobInit<ColliderManager_PostSimulationUpdateJob>
          (ulong param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  undefined8 unaff_x21;
  
  if (DAT_08908cd0 == 0) {
    *(undefined8 *)(param_2 + 0x18) = unaff_x21;
  }
  else {
    puVar1 = &DAT_0873ccb0 + (param_1 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar5 = (undefined8 *)(param_2 + 0x18);
    *puVar5 = unaff_x21;
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
  if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
    FUN_0338f618();
  }
  uVar4 = FUN_03398a84();
  FUN_043b4f80(uVar4,param_2,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),
               *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
  return uVar4;
}


