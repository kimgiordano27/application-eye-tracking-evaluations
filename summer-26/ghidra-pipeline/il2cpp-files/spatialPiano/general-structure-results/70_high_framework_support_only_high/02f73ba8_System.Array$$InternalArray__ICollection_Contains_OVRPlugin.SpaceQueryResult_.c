/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 02f73ba8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceQueryResult>(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_02f27ed8();
  uVar2 = FUN_02f27ed8(unaff_x22 + 1,*unaff_x21,*unaff_x19);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar3 = *unaff_x21;
    uVar5 = unaff_x19[1];
    uVar4 = *unaff_x19;
    unaff_x19[1] = unaff_x21[1];
    *unaff_x19 = uVar3;
    unaff_x21[1] = uVar5;
    *unaff_x21 = uVar4;
    uVar1 = FUN_02f27ed8(unaff_x22 + 1,*unaff_x19,*unaff_x20);
    if ((uVar1 & 1) != 0) {
      uVar3 = *unaff_x19;
      uVar5 = unaff_x20[1];
      uVar4 = *unaff_x20;
      unaff_x20[1] = unaff_x19[1];
      *unaff_x20 = uVar3;
      unaff_x19[1] = uVar5;
      *unaff_x19 = uVar4;
      return 2;
    }
  }
  else if ((uVar2 & 1) == 0) {
    uVar3 = *unaff_x19;
    uVar5 = unaff_x20[1];
    uVar4 = *unaff_x20;
    unaff_x20[1] = unaff_x19[1];
    *unaff_x20 = uVar3;
    unaff_x19[1] = uVar5;
    *unaff_x19 = uVar4;
    uVar1 = FUN_02f27ed8(unaff_x22 + 1,*unaff_x21,*unaff_x19);
    if ((uVar1 & 1) != 0) {
      uVar3 = *unaff_x21;
      uVar5 = unaff_x19[1];
      uVar4 = *unaff_x19;
      unaff_x19[1] = unaff_x21[1];
      *unaff_x19 = uVar3;
      unaff_x21[1] = uVar5;
      *unaff_x21 = uVar4;
      return 2;
    }
  }
  else {
    uVar3 = *unaff_x21;
    uVar5 = unaff_x20[1];
    uVar4 = *unaff_x20;
    unaff_x20[1] = unaff_x21[1];
    *unaff_x20 = uVar3;
    unaff_x21[1] = uVar5;
    *unaff_x21 = uVar4;
  }
  return 1;
}


