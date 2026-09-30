/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<KeyValuePair<OVRSpace,-OVRPlugin.SpaceQueryResult>>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 028b71f8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Array_EmptyInternalEnumerator<KeyValuePair<OVRSpace,_OVRPlugin_SpaceQueryResult>>__System_Collections_IEnumerator_Reset
          (undefined4 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  
  uVar1 = FUN_01c5d2fc(*unaff_x22,param_1);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x1a8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  uVar1 = FUN_01c5d2fc(lVar2,param_1);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
  return param_1;
}


