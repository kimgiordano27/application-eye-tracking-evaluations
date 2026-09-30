/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<KeyValuePair<OVRSpace,-OVRPlugin.SpaceQueryResult>>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 028b71e4
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
System_Array_EmptyInternalEnumerator<KeyValuePair<OVRSpace,_OVRPlugin_SpaceQueryResult>>__System_Collections_IEnumerator_get_Current
          (void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined8 *unaff_x22;
  
  uVar1 = FUN_0329f478(unaff_w21,0);
  *(undefined4 *)(unaff_x19 + 0x24) = 0xffffffff;
  uVar2 = FUN_01c5d2fc(*unaff_x22,uVar1);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x1a8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01c72394();
  }
  uVar2 = FUN_01c5d2fc(lVar3,uVar1);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  return uVar1;
}


