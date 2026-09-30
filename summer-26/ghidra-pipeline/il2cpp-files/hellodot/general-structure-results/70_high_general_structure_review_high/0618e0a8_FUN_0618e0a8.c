/*
FUNCTION_NAME: FUN_0618e0a8
ENTRY_POINT: 0618e0a8
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_0618e0a8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_065dc880;
                    /* try { // try from 0618e0b4 to 0628e16b has its CatchHandler @ 0618e0b4
                       catch() { ... } // from try @ 0618e0b4 with catch @ 0618e0b4
                       catch() { ... } // from try @ 0618e174 with catch @ 0618e0b4
                       catch() { ... } // from try @ 0618e1e8 with catch @ 0618e0b4
                       catch() { ... } // from try @ 0618e228 with catch @ 0618e0b4 */
  if ((DAT_06a83c86 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_IAP_MetaIAPManager_<>c__DisplayClass3_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_Xr_MetaGestureManager_<PointRayCastCoroutine>d__113_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_Xr_MetaGestureManager_<PointThresholdCheckCorotuine>d__112_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_VFX_SDF_MeshToSDFBaker_Kernels_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc880);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_Reflection_MessageDescriptor_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_MetaOpenXRProvider_TypeInfo
              );
    DAT_06a83c86 = 1;
  }
  puVar5 = 
  UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_MetaOpenXRProvider_TypeInfo;
  puVar4 = Niantic_Peridot_Xr_MetaGestureManager_<PointRayCastCoroutine>d__113_TypeInfo;
  puVar3 = Google_Protobuf_Reflection_MessageDescriptor_<>c_TypeInfo;
  puVar2 = UnityEngine_VFX_SDF_MeshToSDFBaker_Kernels_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
                    /* try { // try from 0618e16c to 0628e173 has its CatchHandler @ 0618e1cc */
  uVar6 = FUN_0353b038(param_2,*(undefined8 *)puVar2);
                    /* try { // try from 0618e174 to 0628e1e3 has its CatchHandler @ 0618e0b4 */
  FUN_0615dd3c(uVar6 & 1,*(undefined8 *)puVar5,param_2,0);
  lVar7 = FUN_033ac628(param_1,*(undefined8 *)puVar4);
  uVar8 = FUN_0354e230(param_2,param_3,*(undefined8 *)puVar3);
  if ((lVar7 != 0) &&
     (lVar7 = FUN_04a4713c(lVar7,uVar8,
                           *(undefined8 *)
                            Niantic_Peridot_Xr_MetaGestureManager_<PointThresholdCheckCorotuine>d__112_TypeInfo
                          ), lVar7 != 0)) {
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 0618e16c with catch @ 0618e1cc
                        */
    FUN_0339769c(lVar7,*(undefined8 *)
                        Niantic_Peridot_IAP_MetaIAPManager_<>c__DisplayClass3_0_TypeInfo);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0618e1e4 to 0628e1e7 has its CatchHandler @ 0618e210 */
  FUN_02ce7c7c();
}


