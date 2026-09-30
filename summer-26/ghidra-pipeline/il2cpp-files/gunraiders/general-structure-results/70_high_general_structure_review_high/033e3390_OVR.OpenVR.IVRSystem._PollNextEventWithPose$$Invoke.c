/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$Invoke
ENTRY_POINT: 033e3390
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRSystem__PollNextEventWithPose__Invoke(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  void *__ptr;
  undefined8 uVar2;
  
  puVar1 = Method_System_Collections_Generic_List<AggregateException>_get_Count__;
  if ((DAT_04533a68 & 1) == 0) {
    FUN_01c5d288(Method_System_Collections_Generic_List<AggregateException>_get_Count__);
    FUN_01c5d288(UnityEngine_UIElements_InlineStyleAccess_TypeInfo);
    DAT_04533a68 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  __ptr = (void *)FUN_033e1db0(param_1);
  puVar1 = UnityEngine_UIElements_InlineStyleAccess_TypeInfo;
  if (param_2 != 0) {
    uVar2 = FUN_0332aed8((long)*(int *)(param_2 + 0x18),0);
    uVar2 = FUN_033e3450(__ptr,param_2,uVar2);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar1);
    }
    free(__ptr);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


