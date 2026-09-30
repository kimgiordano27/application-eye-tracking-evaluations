/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMeshSpawner$$ReceiveRemovedRoom
ENTRY_POINT: 0146bb44
PROGRAM: Lovesick-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0146be30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__ReceiveRemovedRoom
               (ulong param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined4 uVar5;
  float fVar6;
  
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x22 + 0xae2) = 1;
  }
  if (unaff_x21 == 0) {
LAB_0146bf40:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar3 = FUN_015fe250();
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_015fe250();
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_015fe250();
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_015fe250();
        if ((uVar3 & 1) == 0) {
          *(undefined4 *)(unaff_x19 + 0x58) = 4;
        }
        else {
          *(undefined4 *)(unaff_x19 + 0x58) = 2;
          if (unaff_x20 == 0) goto LAB_0146bf40;
          bVar2 = FUN_0267e394();
          *(byte *)(unaff_x19 + 0x44) = bVar2 & 1;
          uVar3 = FUN_0267e21c();
          if ((uVar3 & 1) == 0) {
            *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x19 + 0xac);
            *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 0xa4);
          }
          else {
            uVar5 = FUN_0267d928();
            *(undefined4 *)(unaff_x19 + 0x48) = uVar5;
            *(undefined4 *)(unaff_x19 + 0x4c) = param_3;
            *(undefined4 *)(unaff_x19 + 0x50) = param_4;
            *(undefined4 *)(unaff_x19 + 0x54) = param_5;
          }
        }
      }
      else {
        *(undefined4 *)(unaff_x19 + 0x58) = 3;
        if (unaff_x20 == 0) goto LAB_0146bf40;
        uVar3 = FUN_0267e21c();
        if ((uVar3 & 1) == 0) {
          *(undefined4 *)(unaff_x19 + 0x40) = *(undefined4 *)(unaff_x19 + 0x78);
        }
        else {
          uVar3 = FUN_0267e21c();
          if ((uVar3 & 1) != 0) {
            uVar5 = FUN_0267f5a0();
            *(undefined4 *)(unaff_x19 + 0x40) = uVar5;
          }
        }
      }
    }
    else {
      *(undefined4 *)(unaff_x19 + 0x58) = 1;
      *(undefined4 *)(unaff_x19 + 0x38) = *(undefined4 *)(unaff_x19 + 0x6c);
      puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (unaff_x20 == 0) goto LAB_0146bf40;
      uVar4 = FUN_0267dbbc();
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      bVar2 = FUN_02681b9c(uVar4,0,0);
      *(byte *)(unaff_x19 + 0x3c) = bVar2 & 1;
      uVar3 = FUN_0267e21c();
      uVar5 = 0;
      if ((uVar3 & 1) != 0) {
        uVar5 = FUN_0267f5a0();
      }
      *(undefined4 *)(unaff_x19 + 0x38) = uVar5;
      uVar3 = FUN_0267e21c();
      if ((uVar3 & 1) == 0) {
        uVar5 = 0x3f800000;
      }
      else {
        uVar5 = FUN_0267f5a0();
      }
      *(undefined4 *)(unaff_x19 + 0x34) = uVar5;
      uVar3 = FUN_0267e21c();
      if ((uVar3 & 1) == 0) {
        *(undefined4 *)(unaff_x19 + 0x30) = 0;
      }
      else {
        uVar5 = FUN_0267f5a0();
        *(undefined4 *)(unaff_x19 + 0x30) = uVar5;
      }
    }
  }
  else {
    *(undefined4 *)(unaff_x19 + 0x58) = 0;
    if (unaff_x20 == 0) goto LAB_0146bf40;
    uVar3 = FUN_0267e21c();
    if ((uVar3 & 1) == 0) {
      *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 100);
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x5c);
    }
    else {
      uVar5 = FUN_0267d928();
      *(undefined4 *)(unaff_x19 + 0x18) = uVar5;
      *(undefined4 *)(unaff_x19 + 0x1c) = param_3;
      *(undefined4 *)(unaff_x19 + 0x20) = param_4;
      *(undefined4 *)(unaff_x19 + 0x24) = param_5;
    }
    uVar3 = FUN_0267e21c();
    if ((((uVar3 & 1) == 0) || (uVar3 = FUN_0267e21c(), (uVar3 & 1) == 0)) ||
       (fVar6 = (float)FUN_0267f5a0(), fVar6 != 1.0)) {
      *(undefined1 *)(unaff_x19 + 0x28) = 0;
      *(undefined4 *)(unaff_x19 + 0x2c) = 0x3f000000;
    }
    else {
      *(undefined1 *)(unaff_x19 + 0x28) = 1;
      fVar6 = (float)FUN_0267f5a0();
      if (fVar6 < _LAB_028aa024) {
        fVar6 = _LAB_028aa024;
      }
      *(float *)(unaff_x19 + 0x2c) = fVar6;
    }
  }
  return;
}


