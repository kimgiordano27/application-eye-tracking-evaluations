/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 024d29f0
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceDiscoveryResult>
               (long *param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  long in_x9;
  uint in_w11;
  long *unaff_x19;
  
  puVar2 = PTR_DAT_06db01f0;
  if ((*(byte *)(param_3 + 300) <= in_w11) &&
     (*(long *)(*(long *)(in_x9 + 200) + (ulong)*(byte *)(param_3 + 300) * 8 + -8) == param_3)) {
    **(undefined8 **)(*(long *)PTR_DAT_06db01f0 + 0xb8) = unaff_x19;
    if (unaff_x19 != (long *)0x0) {
      bVar1 = *(byte *)(*param_1 + 300);
      if ((*(byte *)(*unaff_x19 + 300) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *param_1))
      goto LAB_024d2a88;
    }
    thunk_FUN_01656ef8(*(undefined8 *)(*(long *)puVar2 + 0xb8));
    FUN_04a4f478();
    return;
  }
LAB_024d2a88:
                    /* WARNING: Subroutine does not return */
  FUN_0160f170();
}


