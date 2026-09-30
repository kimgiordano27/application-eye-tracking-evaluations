/*
FUNCTION_NAME: FUN_0735f650
ENTRY_POINT: 0735f650
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0735f650(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  if ((DAT_07ef3155 & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
                );
    FUN_03642964(Method_System_Collections_Generic_KeyValuePair<string,_Index>_get_Value__);
    DAT_07ef3155 = 1;
  }
  uVar1 = FUN_0735f74c(param_3);
  if ((uVar1 & 1) != 0) {
    plVar3 = (long *)(param_1 + 0x18);
    lVar2 = *plVar3;
    if (lVar2 == 0) {
      lVar2 = thunk_FUN_0367fe20(*(undefined8 *)
                                  Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
                                );
      FUN_073532f8(lVar2,0);
      *plVar3 = lVar2;
      thunk_FUN_036b7ad0(plVar3,lVar2);
      lVar2 = *plVar3;
      if (lVar2 == 0) {
LAB_0735f748:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
    }
    FUN_073535a8(lVar2,param_2,param_3,0);
    return;
  }
  plVar3 = (long *)(param_1 + 0x10);
  lVar2 = *plVar3;
  if (lVar2 == 0) {
    lVar2 = thunk_FUN_0367fe20(*(undefined8 *)
                                Method_System_Collections_Generic_KeyValuePair<string,_Index>_get_Value__
                              );
    FUN_0735f858();
    *plVar3 = lVar2;
    thunk_FUN_036b7ad0(plVar3,lVar2);
    lVar2 = *plVar3;
    if (lVar2 == 0) goto LAB_0735f748;
  }
  FUN_0735f9c4(lVar2,param_2,param_3);
  return;
}


