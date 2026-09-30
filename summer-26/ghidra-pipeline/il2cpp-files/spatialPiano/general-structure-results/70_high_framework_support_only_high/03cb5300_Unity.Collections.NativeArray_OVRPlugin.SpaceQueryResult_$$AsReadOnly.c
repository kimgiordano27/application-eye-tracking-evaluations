/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$AsReadOnly
ENTRY_POINT: 03cb5300
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__AsReadOnly
               (ulong param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  void *__src;
  long unaff_x19;
  undefined8 uVar2;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar3;
  
  if ((param_1 & 1) == 0) {
    param_3 = FUN_02f41e9c(param_3);
  }
  if (unaff_x21 != (long *)0x0) {
    if (*(long *)(*unaff_x21 + 0x40) == *(long *)(param_3 + 0x40)) {
      __src = (void *)thunk_FUN_02f453b8();
      memcpy(&stack0x00000000,__src,0x48);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
      uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
      uVar3 = *(undefined8 *)
               (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd0)
                                   + 0x20) + 0xc0) + 0x148);
      memcpy(&stack0x00000048,&stack0x00000000,0x48);
      FUN_0361bf00(uVar2,&stack0x00000048,0,uVar1,uVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


