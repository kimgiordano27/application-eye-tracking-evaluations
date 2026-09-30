/*
FUNCTION_NAME: Unity.Netcode.BufferSerializerWriter$$SerializeNetworkSerializable<HalfVector4>
ENTRY_POINT: 04b523ec
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_Netcode_BufferSerializerWriter__SerializeNetworkSerializable<HalfVector4>
          (long param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if (param_1 == 0) {
    FUN_04482014(param_3);
    param_1 = *(long *)(param_3 + 0x38);
  }
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  if ((*(byte *)(*(long *)(param_1 + 8) + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  uVar1 = thunk_FUN_0448520c();
  in_stack_00000020 = uVar4;
  in_stack_00000028 = uVar5;
  in_stack_00000030 = uVar2;
  in_stack_00000038 = uVar3;
  FUN_06875fdc(uVar1,0,&stack0x00000020,0x4000,0,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
  return uVar1;
}


