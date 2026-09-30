/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<KeyValuePair<OVRSpace,-OVRPlugin.SpaceQueryResult>>
ENTRY_POINT: 024302ec
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


void System_Array__InternalArray__IReadOnlyList_get_Item<KeyValuePair<OVRSpace,_OVRPlugin_SpaceQueryResult>>
               (void *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *unaff_x19;
  size_t unaff_x20;
  void *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  void *unaff_x24;
  void *unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  memcpy(param_1,param_2,param_3);
  memcpy(unaff_x26,unaff_x19,unaff_x20);
  uVar1 = FUN_01c5d464(*(undefined8 *)(unaff_x23 + 8));
  if ((uVar1 & 1) == 0) {
    puVar3 = *(undefined8 **)(*(long *)(unaff_x22 + 0x38) + 0x10);
    uVar2 = *puVar3;
    *(void **)(unaff_x29 + -0x10) = unaff_x21;
    (*(code *)puVar3[2])(uVar2,puVar3,0,unaff_x29 + -0x10);
    memcpy(unaff_x26,unaff_x21,unaff_x20);
    memcpy(unaff_x28,unaff_x26,unaff_x20);
    memcpy(*(void **)(unaff_x29 + -0x18),unaff_x26,unaff_x20);
    if ((*(byte *)(*(long *)(*(long *)(unaff_x22 + 0x38) + 8) + 0x135) & 1) == 0) {
      FUN_01c72394();
    }
    memcpy(unaff_x24,unaff_x28,unaff_x20);
  }
  else {
    memcpy(unaff_x21,unaff_x19,unaff_x20);
    unaff_x24 = unaff_x21;
  }
  memcpy(unaff_x27,unaff_x24,unaff_x20);
  memcpy(unaff_x25,unaff_x27,unaff_x20);
  memcpy(unaff_x21,unaff_x25,unaff_x20);
  memcpy(*(void **)(unaff_x29 + -0x28),unaff_x21,unaff_x20);
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


