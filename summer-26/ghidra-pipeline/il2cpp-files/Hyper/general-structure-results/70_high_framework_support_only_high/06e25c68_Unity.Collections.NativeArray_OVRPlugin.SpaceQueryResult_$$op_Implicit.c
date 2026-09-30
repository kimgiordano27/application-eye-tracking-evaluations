/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$op_Implicit
ENTRY_POINT: 06e25c68
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__op_Implicit(void)

{
  undefined4 uVar1;
  ulong uVar2;
  void *__src;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar5;
  
  uVar2 = FUN_06e249b8();
  if ((uVar2 & 1) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34(lVar3);
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_0494850c();
    }
    __src = (void *)thunk_FUN_049840a8();
    memcpy(&stack0x00000000,__src,0x48);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
    uVar5 = *(undefined8 *)
             (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd0) +
                                 0x20) + 0xc0) + 0x150);
    memcpy(&stack0x00000048,&stack0x00000000,0x48);
    uVar4 = FUN_0564ab5c(uVar4,&stack0x00000048,0,uVar1,uVar5);
  }
  return uVar4;
}


