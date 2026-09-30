/*
FUNCTION_NAME: Unity.Netcode.BufferSerializer<BufferSerializerWriter>$$SerializeNetworkSerializable<NetworkDeltaPosition>
ENTRY_POINT: 04d2a510
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


void Unity_Netcode_BufferSerializer<BufferSerializerWriter>__SerializeNetworkSerializable<NetworkDeltaPosition>
               (undefined8 *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000008 = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  uVar1 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue(param_2,0);
  if (param_3 < uVar1) {
    memcpy(&stack0x00000000,
           (void *)((long)param_2 + (ulong)*(uint *)(*param_2 + 0x104) * (long)(int)param_3 + 0x20),
           (ulong)*(uint *)(*param_2 + 0x104));
    param_1[1] = uStack0000000000000008;
    *param_1 = uStack0000000000000000;
    param_1[3] = uStack0000000000000018;
    param_1[2] = uStack0000000000000010;
    return;
  }
  thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
  uVar2 = thunk_FUN_03d2ef40();
  uVar3 = thunk_FUN_03d1e194(PTR_DAT_091b4480);
  FUN_070ccddc(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar2,param_4);
}


