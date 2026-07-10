/*
FUNCTION_NAME: Unity.Netcode.BufferSerializer<BufferSerializerWriter>$$SerializeNetworkSerializable<HalfVector4>
ENTRY_POINT: 03a0e6ec
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


void Unity_Netcode_BufferSerializer<BufferSerializerWriter>__SerializeNetworkSerializable<HalfVector4>
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *extraout_x1;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  
  plVar2 = (long *)(**(code **)(param_1 + 0x3c8))(param_2,*(undefined8 *)(param_1 + 0x3d0));
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x318))(&stack0x00000008,plVar2,*(undefined8 *)(*plVar2 + 800));
    memcpy(&stack0x00000050,&stack0x00000008,0x48);
    uVar3 = FUN_03a0c774(&stack0x00000050);
    if ((uVar3 & 1) == 0) {
      if (unaff_x20 == 0) goto LAB_03a0e80c;
    }
    else {
      do {
        FUN_03a0c62c(&stack0x00000050);
        if (extraout_x1 == (long *)0x0) goto LAB_03a0e80c;
        (**(code **)(*extraout_x1 + 0x3d8))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x3e0));
        uVar4 = FUN_03a0f538();
        if (unaff_x20 == 0) goto LAB_03a0e80c;
        lVar5 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_03a0e80c;
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
          thunk_FUN_037aeb94();
        }
        else {
          FUN_049ceef4();
        }
        uVar3 = FUN_03a0c774(&stack0x00000050);
      } while ((uVar3 & 1) != 0);
    }
    uVar4 = FUN_049d0970();
    if (unaff_x19 != 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
      thunk_FUN_037aeb94();
      return;
    }
  }
LAB_03a0e80c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


