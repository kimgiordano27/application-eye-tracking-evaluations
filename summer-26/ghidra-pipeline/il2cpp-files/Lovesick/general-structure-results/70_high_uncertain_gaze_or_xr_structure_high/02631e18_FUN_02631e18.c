/*
FUNCTION_NAME: FUN_02631e18
ENTRY_POINT: 02631e18
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


void FUN_02631e18(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long local_28;
  
  if ((DAT_0378357d & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_TrackingConfidence_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgez_s64__);
    thunk_FUN_00d48444(UnityEngine_HumanBodyBones___TypeInfo);
    thunk_FUN_00d48444(Method_Meta_WitAi_Data_RingBuffer<byte>_get_Capacity__);
    thunk_FUN_00d48444(Method_System_Globalization_DateTimeFormatInfo_GetAbbreviatedMonthName__);
    thunk_FUN_00d48444(StringLiteral_6776);
    DAT_0378357d = 1;
  }
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)((long)param_1 + 0x24) == '\0') {
    lVar7 = param_1[3];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_0268b4e0(lVar7,0,0);
    if ((uVar3 & 1) == 0) {
      local_28 = param_1[3];
    }
    else {
      FUN_010c31a0(param_1,&local_28,*(undefined8 *)OVRPlugin_TrackingConfidence_TypeInfo);
      param_1[3] = local_28;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgez_s64__;
    uVar3 = FUN_0268b4e0(local_28,0,0);
    puVar6 = (undefined8 *)Method_Meta_WitAi_Data_RingBuffer<byte>_get_Capacity__;
    if ((uVar3 & 1) == 0) {
      if ((param_1[3] == 0) || (lVar7 = FUN_02665444(param_1[3],0), lVar7 == 0)) {
LAB_02632038:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      puVar6 = (undefined8 *)UnityEngine_HumanBodyBones___TypeInfo;
      if (*(long *)(lVar7 + 0x18) != 0) {
        if (param_1[3] != 0) {
          lVar7 = param_1[4];
          lVar4 = FUN_02665444(param_1[3],0);
          puVar2 = Method_System_Globalization_DateTimeFormatInfo_GetAbbreviatedMonthName__;
          if (lVar4 != 0) {
            if (*(int *)(lVar4 + 0x18) < (int)lVar7) {
              uVar5 = FUN_015f6780(*(undefined8 *)StringLiteral_6776,param_1,0);
              uVar5 = FUN_015f5b28(uVar5,*(undefined8 *)puVar2,0);
              lVar7 = *(long *)puVar1;
              if (*(int *)(lVar7 + 0xe0) == 0) {
                thunk_FUN_00d32864(lVar7);
              }
              FUN_0256f0d0(uVar5,param_1,0);
              *(undefined4 *)(param_1 + 4) = 0;
              return;
            }
            (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
            return;
          }
        }
        goto LAB_02632038;
      }
    }
    uVar5 = FUN_015f6780(*puVar6,param_1,0);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar7);
    }
    FUN_0256f17c(uVar5,param_1,0);
    FUN_02689f9c(param_1,0,0);
  }
  return;
}


