/*
FUNCTION_NAME: FUN_06a46390
ENTRY_POINT: 06a46390
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06a46390(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_set_Item__
  ;
  if ((DAT_0755e686 & 1) == 0) {
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>_Clear__);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>_TryGetValue__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_set_Item__
                );
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<BodyJointId,_Pose>__ctor__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<BodyJointId,_Pose>_Clear__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<BodyJointId,_Pose>_TryGetValue__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<BodyJointId,_Pose>_set_Item__);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<Bounds,_ProbeBrickIndex_Brick[]>__ctor__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<Bounds,_ProbeBrickIndex_Brick[]>_Clear__
                );
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<byte,_HashSet<Player>>__ctor__);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<ValueTuple<uint,_uint>,_uint>_TryGetValue__
                );
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<byte,_HashSet<Player>>_TryGetValue__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<byte,_HashSet<Player>>_get_Item__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<byte,_HashSet<Player>>_get_Keys__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<byte,_HashSet<Player>>_set_Item__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<byte,_CustomType>__ctor__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<byte,_CustomType>_Add__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<byte,_CustomType>_ContainsKey__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<byte,_CustomType>_TryGetValue__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<byte,_LocalVoice>__ctor__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<byte,_LocalVoice>_GetEnumerator__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<byte,_LocalVoice>_Remove__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<byte,_LocalVoice>_set_Item__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<byte,_Message>__ctor__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<byte,_Message>_Add__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<byte,_Message>_get_Item__);
    DAT_0755e686 = 1;
  }
  if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
    return;
  }
  uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>_TryGetValue__
                    );
  FUN_0524411c(uVar7,*(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>_Clear__
              );
  puVar2 = Method_System_Collections_Generic_Dictionary<byte,_HashSet<Player>>__ctor__;
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar7;
  FUN_06a475f4(*(undefined8 *)puVar2,0);
  FUN_06a475f4(*(undefined8 *)
                Method_System_Collections_Generic_Dictionary<byte,_CustomType>_TryGetValue__,1);
  FUN_06a475f4(*(undefined8 *)
                Method_System_Collections_Generic_Dictionary<byte,_LocalVoice>_GetEnumerator__,2);
  FUN_06a475f4(*(undefined8 *)
                Method_System_Collections_Generic_Dictionary<Bounds,_ProbeBrickIndex_Brick[]>_Clear__
               ,3);
  iVar6 = FUN_069e15e0(0);
  puVar5 = Method_System_Collections_Generic_Dictionary<byte,_Message>_Add__;
  puVar4 = Method_System_Collections_Generic_Dictionary<byte,_CustomType>_ContainsKey__;
  puVar3 = Method_System_Collections_Generic_Dictionary<byte,_HashSet<Player>>_get_Keys__;
  puVar2 = Method_System_Collections_Generic_Dictionary<byte,_HashSet<Player>>_get_Item__;
  puVar1 = Method_System_Collections_Generic_Dictionary<Bounds,_ProbeBrickIndex_Brick[]>__ctor__;
  if (iVar6 == 1) {
    local_68 = 4;
    FUN_06a475f4(*(undefined8 *)Method_System_Collections_Generic_Dictionary<byte,_Message>__ctor__,
                 4);
    local_64 = 5;
    FUN_06a475f4(*(undefined8 *)puVar1,5);
    local_78 = 8;
    FUN_06a475f4(*(undefined8 *)puVar5,8);
    local_74 = 9;
    FUN_06a475f4(*(undefined8 *)puVar2,9);
    uVar14 = 0x10;
    FUN_06a475f4(*(undefined8 *)puVar3,0x10);
    uVar13 = 0x11;
    FUN_06a475f4(*(undefined8 *)puVar4,0x11);
    FUN_06a475f4(*(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<byte,_LocalVoice>_Remove__,0xc);
    local_70 = (undefined8 *)Method_System_Collections_Generic_Dictionary<byte,_LocalVoice>__ctor__;
    uVar12 = 0x13;
    uVar7 = 0xd;
    puVar8 = (undefined8 *)Method_System_Collections_Generic_Dictionary<byte,_LocalVoice>_set_Item__
    ;
    puVar9 = (undefined8 *)
             Method_System_Collections_Generic_Dictionary<BodyJointId,_Pose>_TryGetValue__;
    puVar10 = (undefined8 *)
              Method_System_Collections_Generic_Dictionary<BodyJointId,_Pose>_set_Item__;
    puVar11 = (undefined8 *)
              Method_System_Collections_Generic_Dictionary<byte,_HashSet<Player>>_TryGetValue__;
    puVar15 = (undefined8 *)Method_System_Collections_Generic_Dictionary<byte,_CustomType>_Add__;
    puVar16 = (undefined8 *)Method_System_Collections_Generic_Dictionary<byte,_CustomType>__ctor__;
    puVar17 = (undefined8 *)Method_System_Collections_Generic_Dictionary<BodyJointId,_Pose>_Clear__;
    puVar18 = (undefined8 *)Method_System_Collections_Generic_Dictionary<byte,_Message>_get_Item__;
  }
  else {
    uVar12 = 0x12;
    uVar13 = 0x10;
    uVar14 = 0xf;
    uVar7 = 0xe;
    local_70 = (undefined8 *)Method_System_Collections_Generic_Dictionary<BodyJointId,_Pose>__ctor__
    ;
    local_64 = 0x13;
    local_68 = 0xb;
    local_78 = 0x11;
    local_74 = 10;
    puVar8 = (undefined8 *)
             Method_System_Collections_Generic_Dictionary<byte,_HashSet<Player>>_get_Keys__;
    puVar9 = (undefined8 *)
             Method_System_Collections_Generic_Dictionary<ValueTuple<uint,_uint>,_uint>_TryGetValue__
    ;
    puVar10 = (undefined8 *)
              Method_System_Collections_Generic_Dictionary<byte,_HashSet<Player>>_get_Item__;
    puVar11 = (undefined8 *)Method_System_Collections_Generic_Dictionary<byte,_Message>_Add__;
    puVar15 = (undefined8 *)
              Method_System_Collections_Generic_Dictionary<byte,_CustomType>_ContainsKey__;
    puVar16 = (undefined8 *)Method_System_Collections_Generic_Dictionary<byte,_Message>__ctor__;
    puVar17 = (undefined8 *)
              Method_System_Collections_Generic_Dictionary<Bounds,_ProbeBrickIndex_Brick[]>__ctor__;
    puVar18 = (undefined8 *)
              Method_System_Collections_Generic_Dictionary<byte,_HashSet<Player>>_set_Item__;
  }
  FUN_06a475f4(*puVar11,uVar7);
  FUN_06a475f4(*puVar10,uVar14);
  FUN_06a475f4(*puVar8,uVar13);
  FUN_06a475f4(*puVar15,local_78);
  FUN_06a475f4(*puVar16,local_74);
  FUN_06a475f4(*puVar17,local_68);
  FUN_06a475f4(*puVar9,local_64);
  FUN_06a475f4(*puVar18,uVar12);
  FUN_06a475f4(*local_70,0x12);
  return;
}


