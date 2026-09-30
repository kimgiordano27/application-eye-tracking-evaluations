/*
FUNCTION_NAME: FUN_05f3626c
ENTRY_POINT: 05f3626c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 127
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05f3626c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  puVar9 = Method_System_Text_Decoder_Convert__;
  puVar8 = Method_System_Data_Common_DecimalStorage_Aggregate__;
  puVar7 = Method_System_Security_Cryptography_DSASignatureDeformatter__ctor__;
  puVar6 = Method_Mono_Security_Cryptography_DSAManaged_VerifySignature__;
  puVar5 = Method_Mono_Security_Cryptography_DSAManaged_ImportParameters__;
  puVar4 = Method_Mono_Security_Cryptography_DSAManaged_ExportParameters__;
  puVar3 = Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>__ctor__;
  puVar2 = PTR_DAT_067619b0;
  puVar1 = PTR_DAT_067619a8;
  if ((DAT_06b84055 & 1) == 0) {
    FUN_02d6084c(Method_System_Text_Decoder_Convert__);
    FUN_02d6084c(Method_UnityEngine_UIElements_DataBinding_UpdateUI<bool>__);
    FUN_02d6084c(Method_UnityEngine_UIElements_DataBinding_UpdateUI<byte>__);
    FUN_02d6084c(Method_System_Text_Decoder_GetCharCount__);
    FUN_02d6084c(Method_System_Text_Decoder_GetChars__);
    FUN_02d6084c(Method_System_Text_DecoderExceptionFallbackBuffer_Throw__);
    FUN_02d6084c(Method_System_Text_DecoderFallbackBuffer_InternalFallback__);
    FUN_02d6084c(Method_System_Text_DecoderFallbackBuffer_InternalFallback__);
    FUN_02d6084c(Method_System_Text_DecoderFallbackBuffer_ThrowLastBytesRecursive__);
    FUN_02d6084c(Method_System_Text_DecoderNLS_Convert__);
    FUN_02d6084c(Method_System_Text_DecoderNLS_Convert__);
    FUN_02d6084c(Method_Unity_Burst_BurstCompilerOptions_HasBurstCompileAttribute__);
    FUN_02d6084c(Method_Unity_Burst_BurstCompiler_CompileILPPMethod__);
    FUN_02d6084c(Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp__);
    FUN_02d6084c(Method_Unity_Burst_BurstCompiler_Compile__);
    FUN_02d6084c(Method_System_Text_DecoderNLS_GetCharCount__);
    FUN_02d6084c(Method_System_Data_Common_DecimalStorage_Aggregate__);
    FUN_02d6084c(Method_System_Text_Decoder_Convert__);
    FUN_02d6084c(Method_System_Text_DecoderNLS_GetCharCount__);
    FUN_02d6084c(Method_System_Text_DecoderNLS_GetChars__);
    FUN_02d6084c(Method_System_Text_DecoderNLS_GetChars__);
    FUN_02d6084c(Method_System_Text_DecoderReplacementFallback__ctor__);
    FUN_02d6084c(Method_System_Linq_Expressions_Interpreter_DecrementInstruction_Create__);
    FUN_02d6084c(Method_System_DefaultBinder_BindToField__);
    FUN_02d6084c(Method_System_DefaultBinder_BindToMethod__);
    FUN_02d6084c(Method_System_DefaultBinder_ChangeType__);
    FUN_02d6084c(Method_Mono_Security_Cryptography_DSAManaged_ExportParameters__);
    FUN_02d6084c(Method_Mono_Security_Cryptography_DSAManaged_ImportParameters__);
    FUN_02d6084c(PTR_DAT_067619b0);
    FUN_02d6084c(Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_Add__);
    FUN_02d6084c(PTR_DAT_067619a8);
    FUN_02d6084c(Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>__ctor__);
    FUN_02d6084c(Method_Mono_Security_Cryptography_DSAManaged_VerifySignature__);
    FUN_02d6084c(Method_System_Security_Cryptography_DSASignatureDeformatter__ctor__);
    FUN_02d6084c(Method_UnityEngine_Component_GetComponent<OVRManager>__);
    FUN_02d6084c(Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__);
    FUN_02d6084c(Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__);
    DAT_06b84055 = 1;
  }
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_03aabc60(uVar10,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x40) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x40),uVar10);
  uVar10 = FUN_05e9b5e0(1,0);
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x58) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x74) = 0x40400000;
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
  FUN_05e9bbac(uVar10,0);
  *(undefined8 *)(param_1 + 0x80) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x80),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
  FUN_05e9bc88(uVar10,0);
  *(undefined8 *)(param_1 + 0x88) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x88),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
  FUN_05e9bbac(uVar10,0);
  *(undefined8 *)(param_1 + 0x90) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x90),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
  FUN_05e9bc88(uVar10,0);
  *(undefined8 *)(param_1 + 0x98) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x98),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
  FUN_05e9bd78(uVar10,0);
  *(undefined8 *)(param_1 + 0xa0) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0xa0),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
  FUN_05e9bec0(uVar10,0);
  *(undefined8 *)(param_1 + 0xa8) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0xa8),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
  FUN_05e9bd78(uVar10,0);
  *(undefined8 *)(param_1 + 0xb0) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0xb0),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
  FUN_05e9bec0(uVar10,0);
  *(undefined8 *)(param_1 + 0xb8) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0xb8),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
  FUN_05e9c01c(uVar10,0);
  *(undefined8 *)(param_1 + 0xc0) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0xc0),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar9);
  FUN_05e9c100(uVar10,0);
  *(undefined8 *)(param_1 + 200) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 200),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
  FUN_05e9c01c(uVar10,0);
  *(undefined8 *)(param_1 + 0xd0) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0xd0),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar9);
  FUN_05e9c100(uVar10,0);
  *(undefined8 *)(param_1 + 0xd8) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0xd8),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Text_Decoder_Convert__);
  FUN_05e9c1f8(uVar10,0);
  *(undefined8 *)(param_1 + 0xe0) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0xe0),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Text_Decoder_GetCharCount__);
  FUN_05e9c318(uVar10,0);
  *(undefined8 *)(param_1 + 0xe8) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0xe8),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_DefaultBinder_ChangeType__);
  FUN_04db3670(uVar10,0,*(undefined8 *)Method_System_Text_DecoderReplacementFallback__ctor__);
  *(undefined8 *)(param_1 + 0xf0) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0xf0),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                               Method_System_Linq_Expressions_Interpreter_DecrementInstruction_Create__
                             );
  FUN_04db3670(uVar10,0,*(undefined8 *)Method_System_Text_DecoderNLS_GetChars__);
  *(undefined8 *)(param_1 + 0xf8) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0xf8),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_DefaultBinder_BindToMethod__);
  FUN_04db3670(uVar10,0,*(undefined8 *)Method_System_Text_DecoderNLS_GetChars__);
  *(undefined8 *)(param_1 + 0x108) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x108,uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
  puVar1 = Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_Add__;
  FUN_03aabc60(uVar10,*(undefined8 *)
                       Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_Add__
              );
  *(undefined8 *)(param_1 + 0x118) = uVar10;
  thunk_FUN_02dd37b4(param_1 + 0x118,uVar10);
  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)Method_Unity_Burst_BurstCompiler_Compile__);
  FUN_04cf7c14(lVar11,*(undefined8 *)Method_Unity_Burst_BurstCompiler_CompileILPPMethod__);
  puVar4 = Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp__;
  puVar2 = Method_Unity_Burst_BurstCompilerOptions_HasBurstCompileAttribute__;
  if (lVar11 != 0) {
    FUN_04167e70(lVar11,0,*(undefined8 *)
                           Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__
                );
    *(long *)(param_1 + 0x120) = lVar11;
    thunk_FUN_02dd37b4(param_1 + 0x120,lVar11);
    uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
    FUN_03aabc60(uVar10,*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0x128) = uVar10;
    thunk_FUN_02dd37b4(param_1 + 0x128,uVar10);
    lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
    FUN_04cf7c14(lVar11,*(undefined8 *)puVar2);
    puVar4 = Method_System_Text_DecoderNLS_GetCharCount__;
    puVar2 = Method_System_Text_DecoderNLS_Convert__;
    if (lVar11 != 0) {
      FUN_04167e70(lVar11,0,*(undefined8 *)
                             Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__);
      *(long *)(param_1 + 0x130) = lVar11;
      thunk_FUN_02dd37b4(param_1 + 0x130,lVar11);
      uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
      FUN_03aabc60(uVar10,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x138) = uVar10;
      thunk_FUN_02dd37b4(param_1 + 0x138,uVar10);
      lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
      FUN_04cf7c14(lVar11,*(undefined8 *)puVar2);
      puVar9 = Method_System_DefaultBinder_BindToField__;
      puVar8 = Method_System_Text_DecoderNLS_GetCharCount__;
      puVar7 = Method_System_Text_DecoderNLS_Convert__;
      puVar6 = Method_System_Text_DecoderFallbackBuffer_ThrowLastBytesRecursive__;
      puVar5 = Method_System_Text_DecoderFallbackBuffer_InternalFallback__;
      puVar4 = Method_System_Text_DecoderFallbackBuffer_InternalFallback__;
      puVar3 = Method_System_Text_DecoderExceptionFallbackBuffer_Throw__;
      puVar2 = Method_UnityEngine_UIElements_DataBinding_UpdateUI<byte>__;
      puVar1 = Method_UnityEngine_UIElements_DataBinding_UpdateUI<bool>__;
      if (lVar11 != 0) {
        FUN_04167e70(lVar11,0,*(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRManager>__
                    );
        *(long *)(param_1 + 0x140) = lVar11;
        thunk_FUN_02dd37b4(param_1 + 0x140,lVar11);
        uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
        FUN_04232394(0,uVar10,1,0,0,*(undefined8 *)puVar1);
        *(undefined8 *)(param_1 + 0x148) = uVar10;
        thunk_FUN_02dd37b4(param_1 + 0x148,uVar10);
        uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
        FUN_0489b358(uVar10,*(undefined8 *)puVar3);
        *(undefined8 *)(param_1 + 0x150) = uVar10;
        thunk_FUN_02dd37b4(param_1 + 0x150,uVar10);
        uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
        FUN_0489b358(uVar10,*(undefined8 *)puVar3);
        *(undefined8 *)(param_1 + 0x158) = uVar10;
        thunk_FUN_02dd37b4(param_1 + 0x158,uVar10);
        uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
        FUN_04894d4c(uVar10,*(undefined8 *)puVar4);
        *(undefined8 *)(param_1 + 0x160) = uVar10;
        thunk_FUN_02dd37b4(param_1 + 0x160,uVar10);
        uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar9);
        FUN_04db3670(uVar10,0,*(undefined8 *)puVar8);
        *(undefined8 *)(param_1 + 0x168) = uVar10;
        thunk_FUN_02dd37b4(param_1 + 0x168,uVar10);
        uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
        FUN_048bcdc4(uVar10,*(undefined8 *)Method_System_Text_Decoder_GetChars__);
        *(undefined8 *)(param_1 + 0x170) = uVar10;
        thunk_FUN_02dd37b4(param_1 + 0x170,uVar10);
        thunk_FUN_060665ac(param_1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


