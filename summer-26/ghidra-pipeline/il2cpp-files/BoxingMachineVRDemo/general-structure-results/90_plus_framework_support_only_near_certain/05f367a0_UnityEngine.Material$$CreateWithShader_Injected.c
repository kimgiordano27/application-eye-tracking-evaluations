/*
FUNCTION_NAME: UnityEngine.Material$$CreateWithShader_Injected
ENTRY_POINT: 05f367a0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 108
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Material__CreateWithShader_Injected(void)

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
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x23;
  
  thunk_FUN_02dd37b4();
  uVar10 = thunk_FUN_02d9d534(*unaff_x23);
  puVar1 = Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_Add__;
  FUN_03aabc60(uVar10,*(undefined8 *)
                       Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_Add__
              );
  *(undefined8 *)(unaff_x21 + 0x20) = uVar10;
  thunk_FUN_02dd37b4(unaff_x21 + 0x20,uVar10);
  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)Method_Unity_Burst_BurstCompiler_Compile__);
  FUN_04cf7c14(lVar11,*(undefined8 *)Method_Unity_Burst_BurstCompiler_CompileILPPMethod__);
  puVar3 = Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp__;
  puVar2 = Method_Unity_Burst_BurstCompilerOptions_HasBurstCompileAttribute__;
  if (lVar11 != 0) {
    FUN_04167e70(lVar11,0,*(undefined8 *)
                           Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__
                );
    *(long *)(unaff_x19 + 0x120) = lVar11;
    thunk_FUN_02dd37b4(unaff_x19 + 0x120,lVar11);
    uVar10 = thunk_FUN_02d9d534(*unaff_x23);
    FUN_03aabc60(uVar10,*(undefined8 *)puVar1);
    *(undefined8 *)(unaff_x19 + 0x128) = uVar10;
    thunk_FUN_02dd37b4(unaff_x19 + 0x128,uVar10);
    lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
    FUN_04cf7c14(lVar11,*(undefined8 *)puVar2);
    puVar3 = Method_System_Text_DecoderNLS_GetCharCount__;
    puVar2 = Method_System_Text_DecoderNLS_Convert__;
    if (lVar11 != 0) {
      FUN_04167e70(lVar11,0,*(undefined8 *)
                             Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__);
      *(long *)(unaff_x19 + 0x130) = lVar11;
      thunk_FUN_02dd37b4(unaff_x19 + 0x130,lVar11);
      uVar10 = thunk_FUN_02d9d534(*unaff_x23);
      FUN_03aabc60(uVar10,*(undefined8 *)puVar1);
      *(undefined8 *)(unaff_x19 + 0x138) = uVar10;
      thunk_FUN_02dd37b4(unaff_x19 + 0x138,uVar10);
      lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
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
        *(long *)(unaff_x19 + 0x140) = lVar11;
        thunk_FUN_02dd37b4(unaff_x19 + 0x140,lVar11);
        uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
        FUN_04232394(0,uVar10,1,0,0,*(undefined8 *)puVar1);
        *(undefined8 *)(unaff_x19 + 0x148) = uVar10;
        thunk_FUN_02dd37b4(unaff_x19 + 0x148,uVar10);
        uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
        FUN_0489b358(uVar10,*(undefined8 *)puVar3);
        *(undefined8 *)(unaff_x19 + 0x150) = uVar10;
        thunk_FUN_02dd37b4(unaff_x19 + 0x150,uVar10);
        uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
        FUN_0489b358(uVar10,*(undefined8 *)puVar3);
        *(undefined8 *)(unaff_x19 + 0x158) = uVar10;
        thunk_FUN_02dd37b4(unaff_x19 + 0x158,uVar10);
        uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
        FUN_04894d4c(uVar10,*(undefined8 *)puVar4);
        *(undefined8 *)(unaff_x19 + 0x160) = uVar10;
        thunk_FUN_02dd37b4(unaff_x19 + 0x160,uVar10);
        uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar9);
        FUN_04db3670(uVar10,0,*(undefined8 *)puVar8);
        *(undefined8 *)(unaff_x19 + 0x168) = uVar10;
        thunk_FUN_02dd37b4(unaff_x19 + 0x168,uVar10);
        uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
        FUN_048bcdc4(uVar10,*(undefined8 *)Method_System_Text_Decoder_GetChars__);
        *(undefined8 *)(unaff_x19 + 0x170) = uVar10;
        thunk_FUN_02dd37b4(unaff_x19 + 0x170,uVar10);
        thunk_FUN_060665ac();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


