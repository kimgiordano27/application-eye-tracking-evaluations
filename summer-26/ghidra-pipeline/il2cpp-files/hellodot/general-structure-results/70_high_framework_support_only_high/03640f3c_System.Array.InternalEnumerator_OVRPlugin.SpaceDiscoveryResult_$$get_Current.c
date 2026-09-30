/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$get_Current
ENTRY_POINT: 03640f3c
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current
               (undefined8 param_1,long param_2,void *param_3,long param_4)

{
  undefined8 uVar1;
  void *__src;
  long lVar2;
  ulong __n;
  long unaff_x22;
  long unaff_x23;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8) + 0xfc);
  uVar1 = FUN_04d0dad8(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),0);
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978(lVar2);
  }
  __src = (void *)FUN_02ce7b78(uVar1,lVar2,(long)&stack0x00000000 - (__n + 0xf & 0x1fffffff0));
  memcpy(param_3,__src,__n);
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


