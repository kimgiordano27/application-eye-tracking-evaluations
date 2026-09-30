/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$get_IsCreated
ENTRY_POINT: 03c69120
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__get_IsCreated(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)(param_1 + unaff_x22);
  uVar4 = puVar1[4];
  uVar3 = puVar1[7];
  uVar2 = puVar1[6];
  uVar8 = puVar1[1];
  uVar7 = *puVar1;
  uVar6 = puVar1[3];
  uVar5 = puVar1[2];
  unaff_x19[5] = puVar1[5];
  unaff_x19[4] = uVar4;
  unaff_x19[7] = uVar3;
  unaff_x19[6] = uVar2;
  unaff_x19[1] = uVar8;
  *unaff_x19 = uVar7;
  unaff_x19[3] = uVar6;
  unaff_x19[2] = uVar5;
  return;
}


