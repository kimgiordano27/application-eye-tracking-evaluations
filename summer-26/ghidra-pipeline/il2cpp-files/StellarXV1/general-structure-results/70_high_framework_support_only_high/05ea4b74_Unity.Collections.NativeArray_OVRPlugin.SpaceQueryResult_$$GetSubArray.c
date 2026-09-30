/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetSubArray
ENTRY_POINT: 05ea4b74
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetSubArray
               (long param_1,long param_2)

{
  long lVar1;
  ulong in_x9;
  long unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 uVar2;
  undefined8 unaff_x26;
  undefined8 unaff_x28;
  long unaff_x29;
  
  uVar2 = **(undefined8 **)(*(long *)(param_2 + 0xc0) + 0x40);
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_040b1acc(param_1);
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x40);
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x26;
  *(void **)(unaff_x29 + -0x10) = unaff_x23;
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x28;
  (**(code **)(lVar1 + 0x10))(uVar2,lVar1,*(undefined8 *)(unaff_x29 + -0x28),unaff_x29 + -0x20);
  memcpy(unaff_x21,unaff_x23,unaff_x22);
  if (*(long *)(unaff_x20 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


