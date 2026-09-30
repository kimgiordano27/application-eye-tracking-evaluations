/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<KeyValuePair<OVRSpace,-OVRPlugin.SpaceQueryResult>>
ENTRY_POINT: 0216a7f4
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


undefined8
System_Array__InternalArray__get_Item<KeyValuePair<OVRSpace,_OVRPlugin_SpaceQueryResult>>
          (long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((((**(long **)(*param_1 + 0xb8) != 0) &&
       (lVar2 = *(long *)(**(long **)(*param_1 + 0xb8) + 0x120), lVar2 != 0)) &&
      (lVar2 = *(long *)(lVar2 + 600), lVar2 != 0)) &&
     (((lVar2 = *(long *)(lVar2 + 0x40), lVar2 != 0 && (lVar2 = *(long *)(lVar2 + 0x58), lVar2 != 0)
       ) && (FUN_02d51464(lVar2,lVar3,*(undefined8 *)System_DefaultBinder_TypeInfo), lVar3 != 0))))
  {
    uVar1 = FUN_03d468e8(lVar3,0);
    if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
    }
    FUN_03d4ea0c(uVar1,0);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


