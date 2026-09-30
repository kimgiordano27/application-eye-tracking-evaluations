/*
FUNCTION_NAME: FUN_06a44b14
ENTRY_POINT: 06a44b14
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_06a44b14(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  
  if ((DAT_0755e683 & 1) == 0) {
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>__ctor__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>_Add__);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_set_Item__
                );
    DAT_0755e683 = 1;
  }
  FUN_06a46390();
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_set_Item__
  ;
  if (param_2 != 0) {
    uVar2 = FUN_06a26280(param_2,0);
    uVar3 = FUN_06a26280(param_2,0);
    FUN_06a2630c(param_2,uVar3 & 0xffffffdf,0);
    lVar5 = **(long **)(*(long *)puVar1 + 0xb8);
    if (lVar5 != 0) {
      uVar3 = FUN_05244c48(lVar5,param_2,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>__ctor__
                          );
      if ((uVar3 & 1) != 0) {
        lVar5 = **(long **)(*(long *)puVar1 + 0xb8);
        if (lVar5 == 0) goto LAB_06a44c1c;
        uVar4 = FUN_052449d4(lVar5,param_2,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>_Add__
                            );
        FUN_06a4679c(param_1,uVar4);
      }
      FUN_06a2630c(param_2,uVar2,0);
      return uVar3 & 1;
    }
  }
LAB_06a44c1c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


