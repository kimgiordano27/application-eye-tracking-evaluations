/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0460f64c
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceQueryResult>
          (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 uVar3;
  long unaff_x21;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(unaff_x21 + 0xef8);
  uVar1 = (**(code **)(param_1 + 0x1b8))
                    (param_2,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(param_1 + 0x1c0));
  uVar3 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar2 = thunk_FUN_0406deb8(*puVar4);
  FUN_04606f80(uVar2,uVar1,uVar3);
  return uVar2;
}


