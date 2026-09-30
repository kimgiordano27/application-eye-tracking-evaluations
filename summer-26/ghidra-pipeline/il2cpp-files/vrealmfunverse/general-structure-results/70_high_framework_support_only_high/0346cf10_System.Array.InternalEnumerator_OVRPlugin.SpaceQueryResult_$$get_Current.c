/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 0346cf10
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__get_Current(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  byte unaff_w27;
  long in_stack_00000008;
  
  while (uVar1 = thunk_FUN_04dd5180(&stack0x00000008,unaff_x22,0), (uVar1 & 1) == 0) {
    unaff_x23 = unaff_x23 + 1;
    unaff_w27 = unaff_x23 < unaff_x26;
    if (unaff_x26 == unaff_x23) break;
    memcpy(&stack0x00000148,(void *)(unaff_x24 + unaff_x23 * *(uint *)(*unaff_x21 + 0x104)),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    memcpy(&stack0x000000b0,&stack0x00000148,0x98);
    unaff_x22 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x000000b0);
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218(lVar2);
    }
    in_stack_00000008 = lVar2;
    memcpy((void *)(unaff_x25 + 0x10),unaff_x20,0x98);
  }
  return unaff_w27 & 1;
}


