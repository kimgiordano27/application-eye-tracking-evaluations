/*
FUNCTION_NAME: FUN_073d9150
ENTRY_POINT: 073d9150
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_073d9150(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_07ef3704 & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Dispose__
                );
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_OVRSceneAnchor>_get_Current__
                );
    FUN_03642964(Method_System_Collections_Generic_List<object>_Clear__);
    FUN_03642964(Method_System_Collections_Generic_List<object>_Contains__);
    DAT_07ef3704 = 1;
  }
  puVar4 = Method_System_Collections_Generic_List<object>_Contains__;
  puVar3 = Method_System_Collections_Generic_List<object>_Clear__;
  puVar2 = 
  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_OVRSceneAnchor>_get_Current__
  ;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Dispose__
  ;
  lVar5 = FUN_073d8fdc(param_1);
  if (lVar5 != 0) {
    lVar5 = FUN_073d8fdc(param_1);
    uVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
    FUN_0561f874(uVar6,param_1,*(undefined8 *)puVar4,0);
    if (lVar5 == 0) goto LAB_073d9320;
    FUN_072f2f20(lVar5,uVar6,0);
    lVar5 = FUN_073d8fdc(param_1);
    uVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
    FUN_0554a400(uVar6,param_1,*(undefined8 *)puVar3,0);
    if (lVar5 == 0) goto LAB_073d9320;
    FUN_072ee310(lVar5,uVar6,0);
  }
  FUN_073d9324(param_1,param_2);
  lVar5 = FUN_073d8fdc(param_1);
  if (lVar5 == 0) {
    return;
  }
  lVar5 = FUN_073d8fdc(param_1);
  uVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_0561f874(uVar6,param_1,*(undefined8 *)puVar4,0);
  if (lVar5 != 0) {
    FUN_072f2e70(lVar5,uVar6,0);
    lVar5 = FUN_073d8fdc(param_1);
    uVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
    FUN_0554a400(uVar6,param_1,*(undefined8 *)puVar3,0);
    if (lVar5 != 0) {
      FUN_072ee260(lVar5,uVar6,0);
      return;
    }
  }
LAB_073d9320:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


