/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$.ctor
ENTRY_POINT: 03c93120
PROGRAM: hellodot-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<Guid>___ctor
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ushort uVar1;
  void *__src;
  long lVar2;
  long lVar3;
  void *unaff_x19;
  ulong __n;
  long unaff_x23;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  lVar2 = *(long *)(param_4 + 0x20);
  uVar1 = *(ushort *)(lVar2 + 0x135);
  lVar3 = lVar2;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_02ce0978(lVar2);
    uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
    lVar3 = *(long *)(param_4 + 0x20);
  }
  __n = (ulong)*(uint *)(**(long **)(lVar2 + 0xc0) + 0xfc);
  if ((uVar1 & 1) == 0) {
    FUN_02ce0978(lVar3);
  }
  __src = (void *)thunk_FUN_02cd0998();
  memcpy(&stack0x00000000 + -(__n + 0xf & 0x1fffffff0),__src,__n);
  memcpy(unaff_x19,&stack0x00000000 + -(__n + 0xf & 0x1fffffff0),__n);
  if (*(long *)(unaff_x23 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


