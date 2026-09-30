/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<Dictionary.Entry<OVRSpace,-OVRPlugin.SpaceQueryResult>>
ENTRY_POINT: 02115110
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


void System_Array__InternalArray__IndexOf<Dictionary_Entry<OVRSpace,_OVRPlugin_SpaceQueryResult>>
               (long param_1)

{
  long lVar1;
  int unaff_w20;
  long *unaff_x21;
  int unaff_w22;
  undefined8 *unaff_x23;
  
  while ((param_1 != 0 && (lVar1 = FUN_02d4fd88(param_1,unaff_w20,*unaff_x23), lVar1 != 0))) {
    FUN_02107b38(lVar1,0);
    if (unaff_w22 == unaff_w20) {
      return;
    }
    lVar1 = *unaff_x21;
    unaff_w20 = unaff_w20 + 1;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar1 = *unaff_x21;
    }
    param_1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x38);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


