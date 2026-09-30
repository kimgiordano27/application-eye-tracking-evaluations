/*
FUNCTION_NAME: FUN_051f2438
ENTRY_POINT: 051f2438
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 78
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


void FUN_051f2438(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  puVar2 = UnityEngine_XR_XRDisplaySubsystem_XRBlitParams_var;
  puVar1 = UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyTransformer_OrderedTransformation_var
  ;
  if ((DAT_06a51f9d & 1) == 0) {
    FUN_02d4dc40(UnityEngine_XR_XRDisplaySubsystem_XRBlitParams_var);
    FUN_02d4dc40(UnityEngine_XR_XRDisplaySubsystem_XRRenderParameter_var);
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_var
                );
    FUN_02d4dc40(
                Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var
                );
    FUN_02d4dc40(Cysharp_Threading_Tasks_UnityAsyncExtensions_AssetBundleRequestConfiguredSource_var
                );
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyTransformer_OrderedTransformation_var
                );
    DAT_06a51f9d = 1;
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)puVar1;
  thunk_FUN_02dc1ef0();
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0x32;
  FUN_05044d4c(param_1,0);
  *(undefined8 *)(param_1 + 0x78) = param_2;
  thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x78),param_2);
  uVar5 = *(undefined8 *)puVar2;
  *(undefined4 *)(param_1 + 0x38) = 0;
  lVar6 = thunk_FUN_02d8a638(uVar5);
  FUN_051f25dc(lVar6,param_1,param_3);
  plVar7 = (long *)(param_1 + 0x80);
  *plVar7 = lVar6;
  thunk_FUN_02dc1ef0(plVar7,lVar6);
  puVar4 = UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_var;
  puVar3 = UnityEngine_XR_XRDisplaySubsystem_XRRenderParameter_var;
  puVar2 = 
  Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_var;
  puVar1 = Cysharp_Threading_Tasks_UnityAsyncExtensions_AssetBundleRequestConfiguredSource_var;
  if (*plVar7 != 0) {
    uVar5 = *(undefined8 *)
             UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_var;
    *(undefined4 *)(*plVar7 + 0x28) = 1;
    uVar5 = thunk_FUN_02d8a638(uVar5);
    FUN_0483b4a8(uVar5,*(undefined8 *)puVar3);
    *(undefined8 *)(param_1 + 0x60) = uVar5;
    thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x60),uVar5);
    uVar5 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
    FUN_0483b4a8(uVar5,*(undefined8 *)puVar3);
    *(undefined8 *)(param_1 + 0x68) = uVar5;
    thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x68),uVar5);
    uVar5 = thunk_FUN_02d8a638(*(undefined8 *)puVar1);
                    /* try { // try from 051f25b4 to 052f2763 has its CatchHandler @ 051f25b4
                       catch() { ... } // from try @ 051f25b4 with catch @ 051f25b4
                       catch() { ... } // from try @ 051f2db4 with catch @ 051f25b4
                       catch() { ... } // from try @ 051f2e18 with catch @ 051f25b4
                       catch() { ... } // from try @ 051f2f0c with catch @ 051f25b4 */
    FUN_04caa7b0(uVar5,*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0x70) = uVar5;
    thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x70),uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


