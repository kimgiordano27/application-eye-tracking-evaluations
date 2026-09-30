/*
FUNCTION_NAME: FUN_062306d4
ENTRY_POINT: 062306d4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void FUN_062306d4(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnNegateModePerformed__
  ;
  puVar2 = Method_Unity_Properties_PropertyBag_Register<StyleLength>__;
  puVar1 = Method_UnityEngine_Rendering_Universal_PostProcessPass_RenderBloomTexture__;
  if ((DAT_06b8b70c & 1) == 0) {
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnNegateModePerformed__
                );
    FUN_02d6084c(PTR_DAT_06789668);
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnPrimary2DAxisClickCanceled__
                );
    FUN_02d6084c(Method_System_Xml_Ucs4Decoder2143_GetFullChars__);
    FUN_02d6084c(Method_System_Text_UTF8Encoding_GetChars__);
    FUN_02d6084c(Method_System_Text_UTF8Encoding_GetMaxCharCount__);
    FUN_02d6084c(Method_System_Xml_Ucs4Decoder1234_GetFullChars__);
    FUN_02d6084c(Method_System_Text_UTF8Encoding_GetMaxByteCount__);
    FUN_02d6084c(PTR_DAT_06789670);
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnPrimary2DAxisClickPerformed__
                );
    FUN_02d6084c(Method_System_Text_UTF8Encoding_GetCharCount__);
    FUN_02d6084c(Method_UnityEngine_UIElements_UIR_UIRenderDevice_PtrToSlice<DrawBufferRange>__);
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnPrimary2DAxisTouchCanceled__
                );
    FUN_02d6084c(Method_Unity_Properties_PropertyBag_Register<StyleLength>__);
    FUN_02d6084c(Method_UnityEngine_Rendering_Universal_PostProcessPass_RenderBloomTexture__);
    FUN_02d6084c(Method_UnityEngine_UIElements_UIR_UIRenderDevice_OnFlushPendingResources__);
    DAT_06b8b70c = 1;
  }
  *(undefined8 *)(param_5 + 0x18) = 0;
  thunk_FUN_02dd37b4((undefined8 *)(param_5 + 0x18),0);
  *(undefined8 *)(param_5 + 0x20) = 0;
  thunk_FUN_02dd37b4((undefined8 *)(param_5 + 0x20),0);
  uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
  FUN_062243d4(uVar8,0x100,0x40,0);
  *(undefined8 *)(param_5 + 0x28) = uVar8;
  thunk_FUN_02dd37b4((undefined8 *)(param_5 + 0x28),uVar8);
  uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_06165950(uVar8,1,0);
  *(undefined8 *)(param_5 + 0x50) = uVar8;
  thunk_FUN_02dd37b4((undefined8 *)(param_5 + 0x50),uVar8);
  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_0615993c(lVar9,0);
  uVar10 = FUN_060275ec(0);
  puVar7 = Method_System_Xml_Ucs4Decoder2143_GetFullChars__;
  puVar6 = Method_System_Xml_Ucs4Decoder1234_GetFullChars__;
  puVar5 = Method_System_Text_UTF8Encoding_GetMaxCharCount__;
  puVar4 = Method_System_Text_UTF8Encoding_GetMaxByteCount__;
  puVar3 = Method_System_Text_UTF8Encoding_GetCharCount__;
  puVar2 = PTR_DAT_06789670;
  puVar1 = PTR_DAT_06789668;
  if (lVar9 != 0) {
    *(undefined4 *)(lVar9 + 0x38) = uVar10;
    *(undefined4 *)(lVar9 + 0x3c) = param_2;
    *(undefined4 *)(lVar9 + 0x40) = param_3;
    *(undefined4 *)(lVar9 + 0x44) = param_4;
    *(undefined1 *)(lVar9 + 0xe1) = 1;
    *(undefined1 *)(lVar9 + 0x130) = 1;
    *(long *)(param_5 + 0x58) = lVar9;
    thunk_FUN_02dd37b4((long *)(param_5 + 0x58),lVar9);
    uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
    FUN_0398d8f4(uVar8,*(undefined8 *)puVar5);
    *(undefined8 *)(param_5 + 0x60) = uVar8;
    thunk_FUN_02dd37b4((undefined8 *)(param_5 + 0x60),uVar8);
    uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
    FUN_0398b12c(uVar8,*(undefined8 *)puVar7);
    *(undefined8 *)(param_5 + 0x68) = uVar8;
    thunk_FUN_02dd37b4((undefined8 *)(param_5 + 0x68),uVar8);
    uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
    FUN_03aabc60(uVar8,*(undefined8 *)puVar1);
    *(undefined8 *)(param_5 + 0x70) = uVar8;
    thunk_FUN_02dd37b4((undefined8 *)(param_5 + 0x70),uVar8);
    uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
    FUN_03a3a1cc(uVar8,*(undefined8 *)Method_System_Text_UTF8Encoding_GetChars__);
    *(undefined8 *)(param_5 + 0x78) = uVar8;
    thunk_FUN_02dd37b4((undefined8 *)(param_5 + 0x78),uVar8);
    uVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnPrimary2DAxisClickPerformed__
                              );
    FUN_03bc6c60(uVar8,0x100,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnPrimary2DAxisClickCanceled__
                );
    *(undefined8 *)(param_5 + 0x88) = uVar8;
    thunk_FUN_02dd37b4((undefined8 *)(param_5 + 0x88),uVar8);
    FUN_0504920c(param_5,0);
    *(undefined8 *)(param_5 + 0x10) = param_6;
    thunk_FUN_02dd37b4((undefined8 *)(param_5 + 0x10),param_6);
    uVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_UIElements_UIR_UIRenderDevice_PtrToSlice<DrawBufferRange>__
                              );
    FUN_0622fd20(uVar8,param_5,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnPrimary2DAxisTouchCanceled__
                );
    *(undefined8 *)(param_5 + 0x80) = uVar8;
    thunk_FUN_02dd37b4((undefined8 *)(param_5 + 0x80),uVar8);
    uVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_UIElements_UIR_UIRenderDevice_OnFlushPendingResources__
                              );
    FUN_061f9880(uVar8,0);
    *(undefined8 *)(param_5 + 0x48) = uVar8;
    thunk_FUN_02dd37b4((undefined8 *)(param_5 + 0x48),uVar8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


