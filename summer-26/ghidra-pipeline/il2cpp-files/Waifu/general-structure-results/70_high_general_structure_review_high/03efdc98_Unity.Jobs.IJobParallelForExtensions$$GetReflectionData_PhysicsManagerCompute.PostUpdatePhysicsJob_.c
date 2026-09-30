/*
FUNCTION_NAME: Unity.Jobs.IJobParallelForExtensions$$GetReflectionData<PhysicsManagerCompute.PostUpdatePhysicsJob>
ENTRY_POINT: 03efdc98
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8
Unity_Jobs_IJobParallelForExtensions__GetReflectionData<PhysicsManagerCompute_PostUpdatePhysicsJob>
          (void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  
  FUN_0338f618();
  lVar4 = FUN_03398a84();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  puVar6 = (undefined8 *)(lVar4 + 0x10);
  *puVar6 = unaff_x22;
  if (DAT_08908cd0 == 0) {
    *(undefined8 *)(lVar4 + 0x18) = unaff_x21;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar6 = (undefined8 *)(lVar4 + 0x18);
    *puVar6 = unaff_x21;
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
    FUN_0338f618();
  }
  uVar5 = FUN_03398a84();
  FUN_043b9084(uVar5,lVar4,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),
               *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
  return uVar5;
}


