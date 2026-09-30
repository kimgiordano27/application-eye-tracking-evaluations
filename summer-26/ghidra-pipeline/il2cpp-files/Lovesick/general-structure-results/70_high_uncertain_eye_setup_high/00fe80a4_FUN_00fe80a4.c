/*
FUNCTION_NAME: FUN_00fe80a4
ENTRY_POINT: 00fe80a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_00fe80a4(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((DAT_03775c4c & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetSourceJointId__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_MoveNext__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_FinalizeControlHierarchyRecursive__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ec3e0);
    thunk_FUN_00d48444(PTR_DAT_033f1698);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Face,_bool>_get_Keys__);
    DAT_03775c4c = 1;
  }
  if (*(char *)(param_1 + 0x6b) != '\0') {
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_00fe81e0;
    lVar2 = *(long *)(*(long *)(param_1 + 0x60) + 0x28);
    lVar1 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ec3e0);
    if ((lVar1 == 0) ||
       (FUN_013df2bc(lVar1,param_1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_MoveNext__
                     ,0), lVar2 == 0)) goto LAB_00fe81e0;
    FUN_013df780(lVar2,lVar1,*(undefined8 *)PTR_DAT_033f1698);
  }
  if (*(char *)(param_1 + 0x6c) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x60) + 0x48);
    lVar1 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_FinalizeControlHierarchyRecursive__
                              );
    if ((lVar1 != 0) &&
       (FUN_013df2bc(lVar1,param_1,
                     *(undefined8 *)
                      Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetSourceJointId__
                     ,0), lVar2 != 0)) {
      FUN_013df780(lVar2,lVar1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<Face,_bool>_get_Keys__);
      return;
    }
  }
LAB_00fe81e0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


