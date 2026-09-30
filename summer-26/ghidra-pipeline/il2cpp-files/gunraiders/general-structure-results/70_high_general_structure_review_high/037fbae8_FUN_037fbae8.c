/*
FUNCTION_NAME: FUN_037fbae8
ENTRY_POINT: 037fbae8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void FUN_037fbae8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_04539064 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042367c0);
    FUN_01c5d288(Method_System_Configuration_IgnoreSection_SerializeSection__);
    FUN_01c5d288(Method_System_Collections_Generic_Dictionary<FriendFollowData,_bool>_set_Item__);
                    /* try { // try from 037fbb30 to 038fbb57 has its CatchHandler @ 037fc3cc */
    FUN_01c5d288(Method_LocomotionSampleSupport_SetupWalkOnly__);
    FUN_01c5d288(Method_System_IO_File_OpenText__);
    FUN_01c5d288(Method_LocomotionTeleport_AimCollisionTest__);
    FUN_01c5d288(Method_System_Runtime_Remoting_Messaging_LogicalCallContext_GetObjectData__);
    FUN_01c5d288(Method_System_HashCode_Combine<float3,_float3,_float3,_quaternion>__);
    DAT_04539064 = 1;
  }
  FUN_03313b6c(param_1,0);
  puVar2 = Method_System_Collections_Generic_Dictionary<FriendFollowData,_bool>_set_Item__;
  puVar1 = PTR_DAT_042367c0;
  if (param_2 == 0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar6 = thunk_FUN_01c496e0();
    uVar8 = thunk_FUN_01c273e8(Method_System_Data_LookupNode_Bind__);
    FUN_0323fc78(uVar6,uVar8,0);
    uVar8 = thunk_FUN_01c273e8(Method_System_Data_LookupNode_Eval__);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar6,uVar8);
  }
                    /* try { // try from 037fbb8c to 038fbbb7 has its CatchHandler @ 037fc328 */
  *(long *)(param_1 + 0x10) = param_2;
  puVar5 = Method_System_Runtime_Remoting_Messaging_LogicalCallContext_GetObjectData__;
  puVar4 = Method_LocomotionSampleSupport_SetupWalkOnly__;
  puVar3 = Method_System_IO_File_OpenText__;
  uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
  FUN_032a29ac(uVar6,0);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_032ab88c(uVar6,0);
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                    /* try { // try from 037fbbec to 038fbbf3 has its CatchHandler @ 037fc314 */
  FUN_032ab88c(uVar6,0);
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_032ab88c(uVar6,0);
                    /* try { // try from 037fbc0c to 038fbc17 has its CatchHandler @ 037fc304 */
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                    /* try { // try from 037fbc18 to 038fbd03 has its CatchHandler @ 037fba40 */
  FUN_037e6624(uVar6,param_1,*(undefined8 *)puVar5,0);
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  lVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
  FUN_03847764(lVar7,0);
  *(long *)(param_1 + 0x68) = lVar7;
  if (lVar7 != 0) {
    if (*(long *)(lVar7 + 0x20) == 0) {
      uVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_HashCode_Combine<float3,_float3,_float3,_quaternion>__
                                );
      FUN_0389d718(uVar6,0);
      FUN_03851104(lVar7,uVar6,0);
      lVar7 = *(long *)(param_1 + 0x68);
      if (lVar7 == 0) goto LAB_037fbd0c;
      *(undefined1 *)(lVar7 + 0x6a) = 0;
    }
    FUN_03851094(lVar7,param_2,0);
    puVar2 = Method_LocomotionTeleport_AimCollisionTest__;
    puVar1 = Method_System_Configuration_IgnoreSection_SerializeSection__;
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_03851624(*(long *)(param_1 + 0x68),0,0);
      uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
      FUN_037f53f4(uVar6,0);
      *(undefined8 *)(param_1 + 0x78) = uVar6;
      uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
      FUN_037ccc98(uVar6,0);
      *(undefined8 *)(param_1 + 0x60) = uVar6;
      *(undefined1 *)(param_1 + 0x58) = 1;
                    /* try { // try from 037fbd04 to 038fbd2b has its CatchHandler @ 037fc32c */
      return;
    }
  }
LAB_037fbd0c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


