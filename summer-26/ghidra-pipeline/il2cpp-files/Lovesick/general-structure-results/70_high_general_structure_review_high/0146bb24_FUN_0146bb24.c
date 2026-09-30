/*
FUNCTION_NAME: FUN_0146bb24
ENTRY_POINT: 0146bb24
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;ray_or_cast_sink_hits_3;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0146be30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0146bb24(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  if ((DAT_03776ae2 & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(System_Globalization_CompareInfo_var);
    thunk_FUN_00d48444(CollisionSound_<SoundPlayBuffer>d__14_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ec030);
    thunk_FUN_00d48444(Method_System_Threading_EventWaitHandle_Reset__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<IInputInteraction>__
                      );
    thunk_FUN_00d48444(OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo);
    thunk_FUN_00d48444(OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12470);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentsInChildren<Animator>__);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                      );
    DAT_03776ae2 = 1;
  }
  if (param_7 == 0) {
LAB_0146bf40:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar5 = FUN_015fe250(param_7,*(undefined8 *)PTR_DAT_033ec030,0);
  puVar1 = Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__;
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_015fe250(param_7,*(undefined8 *)
                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                         ,0);
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_015fe250(param_7,*(undefined8 *)StringLiteral_12470,0);
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_015fe250(param_7,*(undefined8 *)
                                      Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
                             ,0);
        if ((uVar5 & 1) == 0) {
          *(undefined4 *)(param_5 + 0x58) = 4;
        }
        else {
          *(undefined4 *)(param_5 + 0x58) = 2;
          puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__;
          if (param_6 == 0) goto LAB_0146bf40;
          bVar4 = FUN_0267e394(param_6,*(undefined8 *)
                                        Method_System_Threading_EventWaitHandle_Reset__,0);
          *(byte *)(param_5 + 0x44) = bVar4 & 1;
          uVar5 = FUN_0267e21c(param_6,*(undefined8 *)puVar1,0);
          if ((uVar5 & 1) == 0) {
            *(undefined8 *)(param_5 + 0x50) = *(undefined8 *)(param_5 + 0xac);
            *(undefined8 *)(param_5 + 0x48) = *(undefined8 *)(param_5 + 0xa4);
          }
          else {
            uVar7 = FUN_0267d928(param_6,*(undefined8 *)puVar1,0);
            *(undefined4 *)(param_5 + 0x48) = uVar7;
            *(undefined4 *)(param_5 + 0x4c) = param_2;
            *(undefined4 *)(param_5 + 0x50) = param_3;
            *(undefined4 *)(param_5 + 0x54) = param_4;
          }
        }
      }
      else {
        *(undefined4 *)(param_5 + 0x58) = 3;
        if (param_6 == 0) goto LAB_0146bf40;
        uVar5 = FUN_0267e21c(param_6,param_7,0);
        puVar1 = OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo;
        if ((uVar5 & 1) == 0) {
          *(undefined4 *)(param_5 + 0x40) = *(undefined4 *)(param_5 + 0x78);
        }
        else {
          uVar5 = FUN_0267e21c(param_6,*(undefined8 *)
                                        OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo
                               ,0);
          if ((uVar5 & 1) != 0) {
            uVar7 = FUN_0267f5a0(param_6,*(undefined8 *)puVar1,0);
            *(undefined4 *)(param_5 + 0x40) = uVar7;
          }
        }
      }
    }
    else {
      *(undefined4 *)(param_5 + 0x58) = 1;
      *(undefined4 *)(param_5 + 0x38) = *(undefined4 *)(param_5 + 0x6c);
      puVar3 = OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo;
      puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (param_6 == 0) goto LAB_0146bf40;
      uVar6 = FUN_0267dbbc(param_6,*(undefined8 *)puVar1,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      puVar1 = Method_UnityEngine_Component_GetComponentsInChildren<Animator>__;
      bVar4 = FUN_02681b9c(uVar6,0,0);
      *(byte *)(param_5 + 0x3c) = bVar4 & 1;
      uVar5 = FUN_0267e21c(param_6,*(undefined8 *)puVar3,0);
      uVar7 = 0;
      if ((uVar5 & 1) != 0) {
        uVar7 = FUN_0267f5a0(param_6,*(undefined8 *)puVar3,0);
      }
      *(undefined4 *)(param_5 + 0x38) = uVar7;
      puVar2 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__;
      uVar5 = FUN_0267e21c(param_6,*(undefined8 *)puVar1,0);
      if ((uVar5 & 1) == 0) {
        uVar7 = 0x3f800000;
      }
      else {
        uVar7 = FUN_0267f5a0(param_6,*(undefined8 *)puVar1,0);
      }
      *(undefined4 *)(param_5 + 0x34) = uVar7;
      uVar5 = FUN_0267e21c(param_6,*(undefined8 *)puVar2,0);
      if ((uVar5 & 1) == 0) {
        *(undefined4 *)(param_5 + 0x30) = 0;
      }
      else {
        uVar7 = FUN_0267f5a0(param_6,*(undefined8 *)puVar2,0);
        *(undefined4 *)(param_5 + 0x30) = uVar7;
      }
    }
  }
  else {
    *(undefined4 *)(param_5 + 0x58) = 0;
    puVar2 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<IInputInteraction>__;
    puVar1 = CollisionSound_<SoundPlayBuffer>d__14_TypeInfo;
    if (param_6 == 0) goto LAB_0146bf40;
    uVar5 = FUN_0267e21c(param_6,*(undefined8 *)CollisionSound_<SoundPlayBuffer>d__14_TypeInfo,0);
    if ((uVar5 & 1) == 0) {
      *(undefined8 *)(param_5 + 0x20) = *(undefined8 *)(param_5 + 100);
      *(undefined8 *)(param_5 + 0x18) = *(undefined8 *)(param_5 + 0x5c);
    }
    else {
      uVar7 = FUN_0267d928(param_6,*(undefined8 *)puVar1,0);
      *(undefined4 *)(param_5 + 0x18) = uVar7;
      *(undefined4 *)(param_5 + 0x1c) = param_2;
      *(undefined4 *)(param_5 + 0x20) = param_3;
      *(undefined4 *)(param_5 + 0x24) = param_4;
    }
    uVar5 = FUN_0267e21c(param_6,*(undefined8 *)puVar2,0);
    puVar1 = System_Globalization_CompareInfo_var;
    if ((((uVar5 & 1) == 0) ||
        (uVar5 = FUN_0267e21c(param_6,*(undefined8 *)System_Globalization_CompareInfo_var,0),
        (uVar5 & 1) == 0)) ||
       (fVar8 = (float)FUN_0267f5a0(param_6,*(undefined8 *)puVar2,0), fVar8 != 1.0)) {
      *(undefined1 *)(param_5 + 0x28) = 0;
      *(undefined4 *)(param_5 + 0x2c) = 0x3f000000;
    }
    else {
      *(undefined1 *)(param_5 + 0x28) = 1;
      fVar8 = (float)FUN_0267f5a0(param_6,*(undefined8 *)puVar1,0);
      if (fVar8 < _LAB_028aa024) {
        fVar8 = _LAB_028aa024;
      }
      *(float *)(param_5 + 0x2c) = fVar8;
    }
  }
  return;
}


