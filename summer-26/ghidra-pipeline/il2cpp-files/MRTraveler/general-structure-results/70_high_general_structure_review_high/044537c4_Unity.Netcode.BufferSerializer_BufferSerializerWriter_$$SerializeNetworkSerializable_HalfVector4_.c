/*
FUNCTION_NAME: Unity.Netcode.BufferSerializer<BufferSerializerWriter>$$SerializeNetworkSerializable<HalfVector4>
ENTRY_POINT: 044537c4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


void Unity_Netcode_BufferSerializer<BufferSerializerWriter>__SerializeNetworkSerializable<HalfVector4>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  
  uStack0000000000000000 = param_3;
  uStack0000000000000010 = param_2;
  uStack0000000000000020 = param_1;
  lVar1 = thunk_FUN_03cf4e64(**(undefined8 **)(unaff_x20 + 0x38));
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_03cf5138(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
    uVar3 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar3,0);
  }
  if (unaff_w19 < *(uint *)(unaff_x22 + 3)) {
    unaff_x22[(long)(int)unaff_w19 + 4] = lVar1;
    thunk_FUN_03d233cc(unaff_x22 + (long)(int)unaff_w19 + 4,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


