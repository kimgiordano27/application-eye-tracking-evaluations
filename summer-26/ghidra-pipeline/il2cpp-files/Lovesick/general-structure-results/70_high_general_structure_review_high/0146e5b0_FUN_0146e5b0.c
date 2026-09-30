/*
FUNCTION_NAME: FUN_0146e5b0
ENTRY_POINT: 0146e5b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_3;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


/* WARNING: Removing unreachable block (ram,0x0146e904) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0146e5b0(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if ((DAT_03776af3 & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(System_Globalization_CompareInfo_var);
    thunk_FUN_00d48444(
                      Method_System_IO_Enumeration_FileSystemEnumerableFactory_<>c_<UserEntries>b__5_0__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__);
    thunk_FUN_00d48444(CollisionSound_<SoundPlayBuffer>d__14_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ec030);
    thunk_FUN_00d48444(Method_System_Threading_EventWaitHandle_Reset__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<IInputInteraction>__
                      );
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
    DAT_03776af3 = 1;
  }
  if (param_7 == 0) {
LAB_0146e9e4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar5 = FUN_015fe250(param_7,*(undefined8 *)PTR_DAT_033ec030,0);
  puVar1 = Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__;
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_015fe250(param_7,*(undefined8 *)
                                  Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__,0);
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_015fe250(param_7,*(undefined8 *)StringLiteral_12470,0);
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_015fe250(param_7,*(undefined8 *)
                                      Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
                             ,0);
        if ((uVar5 & 1) == 0) {
          *(undefined4 *)(param_5 + 100) = 4;
        }
        else {
          *(undefined4 *)(param_5 + 100) = 2;
          puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__;
          if (param_6 == 0) goto LAB_0146e9e4;
          bVar4 = FUN_0267e394(param_6,*(undefined8 *)
                                        Method_System_Threading_EventWaitHandle_Reset__,0);
          *(byte *)(param_5 + 0x50) = bVar4 & 1;
          uVar5 = FUN_0267e21c(param_6,*(undefined8 *)puVar1,0);
          if ((uVar5 & 1) == 0) {
            *(undefined8 *)(param_5 + 0x70) = *(undefined8 *)(param_5 + 0xd0);
            *(undefined8 *)(param_5 + 0x68) = *(undefined8 *)(param_5 + 200);
          }
          else {
            uVar7 = FUN_0267d928(param_6,*(undefined8 *)puVar1,0);
            *(undefined4 *)(param_5 + 0x54) = uVar7;
            *(undefined4 *)(param_5 + 0x58) = param_2;
            *(undefined4 *)(param_5 + 0x5c) = param_3;
            *(undefined4 *)(param_5 + 0x60) = param_4;
          }
        }
      }
      else {
        *(undefined4 *)(param_5 + 100) = 3;
        if (param_6 == 0) goto LAB_0146e9e4;
        uVar5 = FUN_0267e21c(param_6,param_7,0);
        puVar1 = OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo;
        if ((uVar5 & 1) == 0) {
          *(undefined4 *)(param_5 + 0x4c) = *(undefined4 *)(param_5 + 0x90);
        }
        else {
          uVar5 = FUN_0267e21c(param_6,*(undefined8 *)
                                        OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo
                               ,0);
          if ((uVar5 & 1) != 0) {
            uVar7 = FUN_0267f5a0(param_6,*(undefined8 *)puVar1,0);
            *(undefined4 *)(param_5 + 0x4c) = uVar7;
          }
        }
      }
    }
    else {
      *(undefined4 *)(param_5 + 100) = 1;
      *(undefined8 *)(param_5 + 0x40) = *(undefined8 *)(param_5 + 0x80);
      *(undefined8 *)(param_5 + 0x38) = *(undefined8 *)(param_5 + 0x78);
      puVar3 = Method_System_IO_Enumeration_FileSystemEnumerableFactory_<>c_<UserEntries>b__5_0__;
      puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (param_6 == 0) goto LAB_0146e9e4;
      uVar6 = FUN_0267dbbc(param_6,*(undefined8 *)puVar1,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      puVar1 = Method_UnityEngine_Component_GetComponentsInChildren<Animator>__;
      bVar4 = FUN_02681b9c(uVar6,0,0);
      *(byte *)(param_5 + 0x48) = bVar4 & 1;
      uVar5 = FUN_0267e21c(param_6,*(undefined8 *)puVar3,0);
      uVar9 = 0x3f800000;
      uVar8 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar7 = uVar9;
      if ((uVar5 & 1) != 0) {
        uVar7 = 0x3f800000;
        uVar8 = FUN_0267d928(param_6,*(undefined8 *)puVar3,0);
      }
      *(undefined4 *)(param_5 + 0x38) = uVar8;
      *(undefined4 *)(param_5 + 0x3c) = uVar11;
      *(undefined4 *)(param_5 + 0x40) = uVar12;
      *(undefined4 *)(param_5 + 0x44) = uVar7;
      puVar2 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__;
      uVar5 = FUN_0267e21c(param_6,*(undefined8 *)puVar1,0);
      if ((uVar5 & 1) != 0) {
        uVar9 = FUN_0267f5a0(param_6,*(undefined8 *)puVar1,0);
      }
      *(undefined4 *)(param_5 + 0x34) = uVar9;
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
    *(undefined4 *)(param_5 + 100) = 0;
    puVar2 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<IInputInteraction>__;
    puVar1 = CollisionSound_<SoundPlayBuffer>d__14_TypeInfo;
    if (param_6 == 0) goto LAB_0146e9e4;
    uVar5 = FUN_0267e21c(param_6,*(undefined8 *)CollisionSound_<SoundPlayBuffer>d__14_TypeInfo,0);
    if ((uVar5 & 1) == 0) {
      *(undefined8 *)(param_5 + 0x20) = *(undefined8 *)(param_5 + 0x70);
      *(undefined8 *)(param_5 + 0x18) = *(undefined8 *)(param_5 + 0x68);
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
       (fVar10 = (float)FUN_0267f5a0(param_6,*(undefined8 *)puVar2,0), fVar10 != 1.0)) {
      *(undefined1 *)(param_5 + 0x28) = 0;
      *(undefined4 *)(param_5 + 0x2c) = 0x3f000000;
    }
    else {
      *(undefined1 *)(param_5 + 0x28) = 1;
      fVar10 = (float)FUN_0267f5a0(param_6,*(undefined8 *)puVar1,0);
      if (fVar10 < _LAB_028aa024) {
        fVar10 = _LAB_028aa024;
      }
      *(float *)(param_5 + 0x2c) = fVar10;
    }
  }
  return;
}


