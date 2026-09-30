/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0145d038
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__Insert<OVRPlugin_SpaceQueryResult>(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x24;
  
  uVar1 = thunk_FUN_0124bba8();
  FUN_01c71b24(uVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20));
  lVar2 = *unaff_x24;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01220628();
    lVar2 = *unaff_x24;
  }
  *(int *)(*(long *)(lVar2 + 0xb8) + 0x3c) = *(int *)(*(long *)(lVar2 + 0xb8) + 0x3c) + 1;
  FUN_01335bac(uVar1,0);
  return uVar1;
}


