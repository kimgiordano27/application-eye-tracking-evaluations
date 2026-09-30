/*
FUNCTION_NAME: FUN_071ba0a8
ENTRY_POINT: 071ba0a8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_071ba0a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar4 = Method_System_Collections_Generic_Dictionary<BodyJointId,_Pose>__ctor__;
  puVar3 = Method_System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>_TryGetValue__;
  puVar2 = Method_System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>_Add__;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Add__
  ;
  if ((DAT_07eef686 & 1) == 0) {
    FUN_03642964(Method_System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>_Add__);
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>_TryGetValue__
                );
    FUN_03642964(Method_System_Collections_Generic_Dictionary<BodyJointId,_Pose>__ctor__);
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Add__
                );
    DAT_07eef686 = 1;
  }
  uVar5 = FUN_03642a4c(*(undefined8 *)puVar3,1);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar5;
  thunk_FUN_036b7ad0(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar5);
  uVar5 = FUN_03642a4c(*(undefined8 *)puVar4,1);
  puVar6 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  *puVar6 = uVar5;
  thunk_FUN_036b7ad0(puVar6,uVar5);
  uVar5 = FUN_03642a4c(*(undefined8 *)puVar1,1);
  puVar6 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  *puVar6 = uVar5;
  thunk_FUN_036b7ad0(puVar6,uVar5);
  return;
}


