/*
FUNCTION_NAME: FUN_019d9724
ENTRY_POINT: 019d9724
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void FUN_019d9724(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = 
  Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
  ;
  if ((DAT_0377a782 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
                      );
    thunk_FUN_00d48444(OVR_OpenVR_IVROverlay__CloseMessageOverlay_TypeInfo);
    DAT_0377a782 = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
                    /* try { // try from 019d9778 to 01ad979f has its CatchHandler @ 019d9944 */
    FUN_012d1810(lVar2,param_1,*(undefined8 *)OVR_OpenVR_IVROverlay__CloseMessageOverlay_TypeInfo,0)
    ;
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_019d8d0c(*(long *)(param_1 + 0x60),param_2,*(undefined8 *)(param_1 + 0x58),lVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


