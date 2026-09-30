/*
FUNCTION_NAME: Unity.Jobs.IJobParallelForExtensions.ParallelForJobStruct.ExecuteJobFunction<PhysicsManagerCompute.PostUpdatePhysicsJob>$$.ctor
ENTRY_POINT: 04179844
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8
Unity_Jobs_IJobParallelForExtensions_ParallelForJobStruct_ExecuteJobFunction<PhysicsManagerCompute_PostUpdatePhysicsJob>___ctor
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_3 + 0x38);
  if (lVar5 == 0) {
    FUN_0338f674(param_3);
    lVar5 = *(long *)(param_3 + 0x38);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = FUN_03f1c6cc(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(lVar5 + 8));
  lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0338f618(lVar5);
  }
  uVar4 = FUN_03398a84(lVar5);
  FUN_05991630(uVar4,uVar1,uVar2,uVar3,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20));
  return uVar4;
}


