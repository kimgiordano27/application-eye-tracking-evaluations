/*
FUNCTION_NAME: FUN_0152a22c
ENTRY_POINT: 0152a22c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_0152a22c(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_037779e0 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Text_UnicodeEncoding_GetBytes__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<InputDevice_ControlBitRangeNode>__
                      );
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_ValueTask<int>_AsTask__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_102_0_TypeInfo);
    thunk_FUN_00d48444(Method_OVRRuntimeSettings_HandleSettingsCreated__);
    thunk_FUN_00d48444(System_Collections_Generic_List<Instruction>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Linq_Extensions_Convert<object,___Il2CppFullySharedGenericType>__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_EaseFactory_<>c__DisplayClass2_0_<StopMotion>b__0__);
    thunk_FUN_00d48444(Unity_Mathematics_float2x3_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmvq_f64__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_21__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsubl_high_s32__);
    thunk_FUN_00d48444(StringLiteral_12225);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_16>_SliceWithStride<Vector4>__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<DeactivateEventArgs>_AddListener__);
    thunk_FUN_00d48444(StringLiteral_9871);
    thunk_FUN_00d48444(Method_System_Text_Latin1Encoding_GetMaxByteCount__);
    DAT_037779e0 = 1;
  }
  local_40 = 0;
  local_38 = 0;
  lVar8 = *(long *)(param_1 + 10);
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
LAB_0152a37c:
    FUN_013ba2d0(&local_38,&local_60,*(undefined8 *)Unity_Mathematics_float2x3_TypeInfo);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(undefined8 *)(lVar8 + 0x38) = local_60;
LAB_0152a500:
    uVar4 = FUN_0113a574(lVar8,*(undefined8 *)
                                Method_Newtonsoft_Json_Linq_Extensions_Convert<object,___Il2CppFullySharedGenericType>__
                        );
    if ((uVar4 & 1) != 0) goto LAB_0152a580;
    lVar6 = FUN_0113a328(lVar8,*(undefined8 *)Method_OVRRuntimeSettings_HandleSettingsCreated__);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    local_40 = FUN_013bdbc4(lVar6,*(undefined8 *)
                                   Method_Unity_Burst_Intrinsics_Arm_Neon_vsubl_high_s32__);
    uVar4 = FUN_013ba28c(&local_40,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_21__);
    if ((uVar4 & 1) == 0) {
      *param_1 = 1;
      puVar1 = Method_System_Text_UnicodeEncoding_GetBytes__;
      *(undefined8 *)(param_1 + 0x14) = local_40;
      FUN_010bc698(param_1 + 2,&local_40,param_1,*(undefined8 *)puVar1);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      local_50 = *(undefined8 *)(param_1 + 0x10);
      uStack_58 = *(undefined8 *)(param_1 + 0xe);
      local_60 = *(undefined8 *)(param_1 + 0xc);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(undefined8 *)(lVar8 + 0x30) = local_50;
      *(undefined8 *)(lVar8 + 0x28) = uStack_58;
      *(undefined8 *)(lVar8 + 0x20) = local_60;
      uVar4 = FUN_01529af4(lVar8);
      puVar3 = StringLiteral_302;
      puVar2 = Method_UnityEngine_Events_UnityEvent<DeactivateEventArgs>_AddListener__;
      puVar1 = UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo;
      if ((uVar4 & 1) == 0) {
        if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        local_60 = *(undefined8 *)(lVar8 + 0x28);
        uStack_58 = *(undefined8 *)(lVar8 + 0x30);
        uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&local_60);
        uVar7 = FUN_01600ba0(*(undefined8 *)
                              Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_16>_SliceWithStride<Vector4>__
                             ,*(undefined8 *)puVar2,uVar7,*(undefined8 *)StringLiteral_9871,0);
        uVar5 = FUN_0268fd4c(lVar8,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_0266185c(uVar7,uVar5,0);
      }
      else {
        if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        local_60 = *(undefined8 *)(lVar8 + 0x28);
        uStack_58 = *(undefined8 *)(lVar8 + 0x30);
        uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&local_60);
        uVar7 = FUN_01600b5c(*(undefined8 *)Method_System_Text_Latin1Encoding_GetMaxByteCount__,
                             *(undefined8 *)puVar2,uVar7,0);
        uVar5 = FUN_0268fd4c(lVar8,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660eb4(uVar7,uVar5,0);
      }
      uVar4 = FUN_0113a574(lVar8,*(undefined8 *)
                                  System_Collections_Generic_List<Instruction>_TypeInfo);
      if ((uVar4 & 1) == 0) {
        lVar6 = FUN_0113a328(lVar8,*(undefined8 *)OVRPlugin_OVRP_1_102_0_TypeInfo);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        local_38 = FUN_013bdbc4(lVar6,*(undefined8 *)StringLiteral_12225);
        uVar4 = FUN_013ba28c(&local_38,
                             *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmvq_f64__);
        if ((uVar4 & 1) == 0) {
          *param_1 = 0;
          puVar1 = 
          Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<InputDevice_ControlBitRangeNode>__
          ;
          *(undefined8 *)(param_1 + 0x12) = local_38;
          FUN_010bc698(param_1 + 2,&local_38,param_1,*(undefined8 *)puVar1);
          return;
        }
        goto LAB_0152a37c;
      }
      goto LAB_0152a500;
    }
    local_40 = *(undefined8 *)(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
  }
  FUN_013ba2d0(&local_40,&local_60,
               *(undefined8 *)Method_DG_Tweening_EaseFactory_<>c__DisplayClass2_0_<StopMotion>b__0__
              );
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  *(undefined8 *)(lVar8 + 0x40) = local_60;
LAB_0152a580:
  uVar7 = FUN_01529a64(lVar8);
  FUN_0268ee74(lVar8,uVar7,0);
  *param_1 = -2;
  FUN_016a1ab0(param_1 + 2,0);
  return;
}


