/*
FUNCTION_NAME: Unity.Netcode.BufferSerializer<BufferSerializerWriter>$$SerializeNetworkSerializable<NetworkDeltaPosition>
ENTRY_POINT: 03a0e72c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


void Unity_Netcode_BufferSerializer<BufferSerializerWriter>__SerializeNetworkSerializable<NetworkDeltaPosition>
               (void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *extraout_x1;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  
  do {
    FUN_03a0c62c(&stack0x00000050);
    if (extraout_x1 == (long *)0x0) goto LAB_03a0e80c;
    (**(code **)(*extraout_x1 + 0x3d8))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x3e0));
    uVar2 = FUN_03a0f538();
    if (unaff_x20 == 0) goto LAB_03a0e80c;
    lVar4 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar4 == 0) goto LAB_03a0e80c;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
      thunk_FUN_037aeb94();
    }
    else {
      FUN_049ceef4();
    }
    uVar3 = FUN_03a0c774(&stack0x00000050);
  } while ((uVar3 & 1) != 0);
  uVar2 = FUN_049d0970();
  if (unaff_x19 != 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
    thunk_FUN_037aeb94();
    return;
  }
LAB_03a0e80c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


