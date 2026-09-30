/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0217e6c8
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


void System_Array__InternalArray__get_Item<OVRPlugin_SpaceQueryResult>(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  long *unaff_x23;
  
  FUN_01c5d288();
  FUN_01c5d288(OVR_OpenVR_ETrackedPropertyError_TypeInfo);
  FUN_01c5d288(PTR_DAT_042392c0);
  *(undefined1 *)(unaff_x20 + 0xd37) = 1;
  uVar4 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
  uVar1 = thunk_FUN_01c496e0(*unaff_x23);
  FUN_03245f44();
  plVar2 = (long *)FUN_033170a4(uVar4,uVar1,0);
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8) = 0;
    return;
  }
  lVar3 = *unaff_x23;
  if ((*plVar2 == lVar3) &&
     (*(long **)(*(long *)(*unaff_x22 + 0xb8) + 8) = plVar2, *plVar2 == lVar3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748();
}


