/*
FUNCTION_NAME: FUN_0406f988
ENTRY_POINT: 0406f988
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void FUN_0406f988(undefined8 param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = Method_UnityEngine_Vector3_get_Item__;
                    /* try { // try from 0406f994 to 0416f9bb has its CatchHandler @ 0406fb58 */
  if ((DAT_0483e2a8 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__);
    thunk_FUN_01efb3a4(Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Vector3_get_Item__);
                    /* try { // try from 0406f9cc to 0416f9d7 has its CatchHandler @ 0406fb50 */
    thunk_FUN_01efb3a4(Method_OVREyeGaze_OnPermissionGranted__);
    DAT_0483e2a8 = 1;
  }
  plVar2 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_0340c4f0(plVar2,param_1,0,0);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
    if ((uVar3 & 1) != 0) {
      return;
    }
    uVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                              );
    FUN_034df214(uVar4,plVar2,2,0);
    plVar2 = (long *)thunk_FUN_01f117cc(*(undefined8 *)Method_OVREyeGaze_OnPermissionGranted__);
    FUN_034ccd08(plVar2,uVar4,0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x288))(plVar2,1,*(undefined8 *)(*plVar2 + 0x290));
      if (*(int *)(*(long *)Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_035b2b58(plVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


