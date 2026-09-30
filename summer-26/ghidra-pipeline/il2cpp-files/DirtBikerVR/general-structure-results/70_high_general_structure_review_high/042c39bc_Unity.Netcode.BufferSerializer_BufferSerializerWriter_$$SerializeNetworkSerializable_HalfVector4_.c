/*
FUNCTION_NAME: Unity.Netcode.BufferSerializer<BufferSerializerWriter>$$SerializeNetworkSerializable<HalfVector4>
ENTRY_POINT: 042c39bc
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


undefined1  [16]
Unity_Netcode_BufferSerializer<BufferSerializerWriter>__SerializeNetworkSerializable<HalfVector4>
          (uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  uint unaff_w21;
  undefined1 in_stack_00000000 [16];
  
  if (unaff_w21 < param_1) {
    memcpy(&stack0x00000000,
           (void *)((long)unaff_x20 +
                   (ulong)*(uint *)(*unaff_x20 + 0x104) * (long)(int)unaff_w21 + 0x20),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    return in_stack_00000000;
  }
  thunk_FUN_03af1434(&DAT_08615060);
  uVar1 = thunk_FUN_03ac74bc();
  uVar2 = thunk_FUN_03af1434(&DAT_086ab710);
  FUN_066b7618(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar1);
}


