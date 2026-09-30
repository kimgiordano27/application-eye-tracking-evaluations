/*
FUNCTION_NAME: Unity.Jobs.IJobParallelForExtensions.ParallelForJobStruct<ColliderManager.PostSimulationUpdateJob>$$Initialize
ENTRY_POINT: 04f35a80
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Jobs_IJobParallelForExtensions_ParallelForJobStruct<ColliderManager_PostSimulationUpdateJob>__Initialize
               (void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  long *plVar8;
  
  plVar8 = (long *)*unaff_x19;
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_083cc7a8) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04f35ad8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0338f71c(plVar8,DAT_083cc7a8,0);
LAB_04f35ad8:
    (*(code *)*puVar4)(plVar8,puVar4[1]);
  }
  *unaff_x19 = 0;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x19 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)unaff_x19 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


