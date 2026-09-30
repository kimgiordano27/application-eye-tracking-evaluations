/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 02f9f718
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceDiscoveryResult>(void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x21;
  
  thunk_FUN_02dbd7b4();
  uVar1 = FUN_02fbc91c();
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*unaff_x21);
  }
  uVar2 = FUN_02fa0af4();
  if ((uVar2 & 1) == 0) {
    return uVar1 & 1;
  }
  thunk_FUN_02dc61f4(PTR_DAT_06763d50);
  FUN_028f4b80();
  uVar3 = FUN_02fa0b7c();
  uVar4 = thunk_FUN_02dc61f4(PTR_DAT_06763eb0);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar3,uVar4);
}


