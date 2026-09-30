/*
FUNCTION_NAME: FUN_01ffb09c
ENTRY_POINT: 01ffb09c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_gaze_retrieval_or_extraction
*/


void FUN_01ffb09c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_0378084e & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    DAT_0378084e = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar2 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar3 = thunk_FUN_00d48444(UnityEngine_Assertions_Assert_TypeInfo);
    FUN_016f2f28(uVar2,uVar3,0);
    uVar3 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_List<TrackedPoseDriver_TrackedPose>_get_Item__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar2,uVar3);
  }
  if (*(int *)(*(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar1 = (long *)FUN_01ffe28c(param_1);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01ffb104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x198))(plVar1,param_1,*(undefined8 *)(*plVar1 + 0x1a0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


