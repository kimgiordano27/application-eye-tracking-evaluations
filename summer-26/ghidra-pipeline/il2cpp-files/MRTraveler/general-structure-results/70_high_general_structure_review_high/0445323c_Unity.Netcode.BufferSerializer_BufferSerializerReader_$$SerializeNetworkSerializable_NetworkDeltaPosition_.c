/*
FUNCTION_NAME: Unity.Netcode.BufferSerializer<BufferSerializerReader>$$SerializeNetworkSerializable<NetworkDeltaPosition>
ENTRY_POINT: 0445323c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


void Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeNetworkSerializable<NetworkDeltaPosition>
               (long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  void *unaff_x21;
  
  if (param_1 == 0) {
    FUN_03c8f898(PTR_DAT_08e69878);
    if (*(long *)(unaff_x20 + 0x38) == 0) {
      FUN_03cf12a0();
    }
  }
  uVar1 = FUN_07119d8c(param_2,0);
  if (uVar1 <= param_3) {
    thunk_FUN_03ce5214(PTR_DAT_08e6a5d8);
    uVar6 = thunk_FUN_03cf5234();
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e805f0);
    FUN_07066198(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar6);
  }
  plVar2 = (long *)thunk_FUN_03cf5138(param_2,*(undefined8 *)PTR_DAT_08e69878);
  if (plVar2 == (long *)0x0) {
    FUN_03c8f934(param_2,param_3);
    return;
  }
  memcpy(&stack0x00000008,unaff_x21,0x68);
  lVar3 = thunk_FUN_03cf4e64(**(undefined8 **)(unaff_x20 + 0x38),&stack0x00000008);
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_03cf5138(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar6,0);
  }
  if (param_3 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_3 + 4] = lVar3;
    thunk_FUN_03d233cc(plVar2 + (long)(int)param_3 + 4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


