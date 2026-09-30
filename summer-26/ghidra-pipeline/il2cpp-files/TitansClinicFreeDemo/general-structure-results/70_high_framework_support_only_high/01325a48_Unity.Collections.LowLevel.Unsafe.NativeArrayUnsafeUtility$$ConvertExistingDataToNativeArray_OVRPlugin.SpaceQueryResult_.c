/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 01325a48
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_SpaceQueryResult>
          (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x19;
  undefined8 *puVar5;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar6;
  long unaff_x25;
  undefined8 *puVar7;
  
  puVar2 = PTR_DAT_027b2768;
  puVar1 = PTR_DAT_027b2570;
  puVar6 = *(undefined8 **)(unaff_x22 + 0x758);
  puVar7 = *(undefined8 **)(unaff_x25 + 0x760);
  puVar5 = (undefined8 *)(unaff_x21 + 0x10);
  *puVar5 = unaff_x19;
  thunk_FUN_01286abc(puVar5);
  uVar3 = thunk_FUN_0124bba8(*puVar6);
  FUN_015e0e28();
  uVar4 = thunk_FUN_0124bba8(*puVar7);
  FUN_015e187c();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar3 = FUN_0131161c(uVar3,uVar4,0);
  FUN_0145e060(uVar3,*puVar5,*(undefined8 *)puVar2);
  return uVar3;
}


