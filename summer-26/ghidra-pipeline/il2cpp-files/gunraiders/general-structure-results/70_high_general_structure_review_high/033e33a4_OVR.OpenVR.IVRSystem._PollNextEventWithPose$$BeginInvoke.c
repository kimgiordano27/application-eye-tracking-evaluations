/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$BeginInvoke
ENTRY_POINT: 033e33a4
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


undefined8
OVR_OpenVR_IVRSystem__PollNextEventWithPose__BeginInvoke
          (ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  void *__ptr;
  undefined8 uVar2;
  long unaff_x21;
  long *unaff_x22;
  
                    /* catch(type#1 @ 04025298) { ... } // from try @ 033e3320 with catch @ 033e33a8
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 033e3324 with catch @ 033e33ac
                        */
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(Method_System_Collections_Generic_List<AggregateException>_get_Count__);
                    /* try { // try from 033e33c4 to 034e33db has its CatchHandler @ 033e3450 */
    FUN_01c5d288(UnityEngine_UIElements_InlineStyleAccess_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0xa68) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                    /* try { // try from 033e33dc to 034e343f has its CatchHandler @ 033e32cc */
    thunk_FUN_01c1d1e8();
  }
  __ptr = (void *)FUN_033e1db0(param_2);
  puVar1 = UnityEngine_UIElements_InlineStyleAccess_TypeInfo;
  if (param_3 != 0) {
    uVar2 = FUN_0332aed8((long)*(int *)(param_3 + 0x18),0);
    uVar2 = FUN_033e3450(__ptr,param_3,uVar2);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar1);
    }
    free(__ptr);
                    /* try { // try from 033e3440 to 034e344f has its CatchHandler @ 033e3450 */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


