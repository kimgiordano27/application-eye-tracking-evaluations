/*
FUNCTION_NAME: Unity.Netcode.BufferSerializer<BufferSerializerWriter>$$SerializeValue<HalfVector3>
ENTRY_POINT: 042c3b04
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


void Unity_Netcode_BufferSerializer<BufferSerializerWriter>__SerializeValue<HalfVector3>
               (void *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint unaff_w22;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000010 = param_2;
  uStack0000000000000020 = param_2;
  uStack0000000000000030 = param_2;
  uStack0000000000000040 = param_2;
  uStack0000000000000050 = param_2;
  uVar1 = FUN_06769a04();
  if (unaff_w22 < uVar1) {
    memcpy(&stack0x00000000,
           (void *)((long)param_3 + (ulong)*(uint *)(*param_3 + 0x104) * (long)(int)unaff_w22 + 0x20
                   ),(ulong)*(uint *)(*param_3 + 0x104));
    memcpy(param_1,&stack0x00000000,0x60);
    return;
  }
  thunk_FUN_03af1434(&DAT_08615060);
  uVar2 = thunk_FUN_03ac74bc();
  uVar3 = thunk_FUN_03af1434(&DAT_086ab710);
  FUN_066b7618(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar2);
}


