/*
FUNCTION_NAME: Unity.Netcode.BufferSerializer<BufferSerializerReader>$$SerializeNetworkSerializable<NetworkDeltaPosition>
ENTRY_POINT: 042c360c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


void Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeNetworkSerializable<NetworkDeltaPosition>
               (void *param_1,int param_2,size_t param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long in_stack_00000d08;
  
  memset(param_1,param_2,param_3);
  uVar1 = FUN_06769a04();
  if (unaff_w22 < uVar1) {
    memcpy(&stack0x00000008,
           (void *)((long)unaff_x21 +
                   (ulong)*(uint *)(*unaff_x21 + 0x104) * (long)(int)unaff_w22 + 0x20),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    memcpy(unaff_x20,&stack0x00000008,0xd00);
    if (*(long *)(unaff_x23 + 0x28) == in_stack_00000d08) {
      return;
    }
  }
  else {
    thunk_FUN_03af1434(&DAT_08615060);
    uVar2 = thunk_FUN_03ac74bc();
    uVar3 = thunk_FUN_03af1434(&DAT_086ab710);
    if (*(long *)(unaff_x23 + 0x28) == in_stack_00000d08) {
      FUN_066b7618(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


