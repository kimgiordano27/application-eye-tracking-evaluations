/*
FUNCTION_NAME: FUN_06016e44
ENTRY_POINT: 06016e44
PROGRAM: hellodot-libil2cpp.so
SCORE: 123
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;gaze_retrieval
MODULES: eye_source;validity_gate;ui_interaction;foveation_rendering;frame_behavior
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;strong_foveation_hits_4;frame_or_lifecycle_behavior;functionality_foveated_rendering;functionality_gaze_retrieval_or_extraction
*/


void FUN_06016e44(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  
  puVar5 = System_Xml_Schema_Parser_TypeInfo;
  puVar4 = System_Security_Util_Parser_TypeInfo;
  puVar3 = UnityEngine_Rendering_Universal_MotionVectorRenderPass_TypeInfo;
  if ((DAT_06a825de & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_ParsingPrimitivesMessages_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Threading_ParameterizedThreadStart_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Meta_XR_MetaXRFoveationFeature_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Xml_Schema_Parser_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Security_Util_Parser_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Xml_Schema_ParticleContentValidator_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_ParseContext_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_ParticleSystemRenderer_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Oculus_Platform_Models_Party_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_Rendering_Universal_MotionVectorRenderPass_TypeInfo);
    DAT_06a825de = 1;
  }
  puVar6 = System_Xml_Schema_ParticleContentValidator_TypeInfo;
  puVar2 = Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex_TypeInfo;
  uVar8 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
  FUN_03b33c64(uVar8,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar9 = *(long *)puVar3;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x110);
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = uVar8;
  uVar8 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  FUN_05f90538(uVar8,0);
  *(undefined8 *)(param_1 + 0x120) = uVar8;
  FUN_04f7383c(param_1,0);
  *(long *)(param_1 + 0x10) = param_2;
  uVar8 = thunk_FUN_02cea894(*(undefined8 *)puVar6);
  FUN_060bd164(uVar8,param_1,0);
  *(undefined8 *)(param_1 + 0x108) = uVar8;
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x118);
    puVar7 = Oculus_Platform_Models_Party_TypeInfo;
    puVar6 = UnityEngine_ParticleSystemRenderer_TypeInfo;
    puVar2 = Google_Protobuf_ParsingPrimitivesMessages_TypeInfo;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x120);
    puVar5 = Google_Protobuf_ParseContext_TypeInfo;
    puVar4 = Meta_XR_MetaXRFoveationFeature_TypeInfo;
    puVar3 = Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo;
    uVar8 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
    FUN_05ffd274(uVar8,param_1,*(undefined8 *)puVar6,0);
    *(undefined8 *)(param_1 + 0xf8) = uVar8;
    uVar8 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
    FUN_05ffd274(uVar8,param_1,*(undefined8 *)puVar7,0);
    *(undefined8 *)(param_1 + 0x100) = uVar8;
    lVar9 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
    FUN_03967c6c(lVar9,0x20,*(undefined8 *)puVar4);
    *(long *)(param_1 + 0xe0) = lVar9;
    uVar8 = thunk_FUN_02cea894(*(undefined8 *)puVar5);
    FUN_060bac04(uVar8,0);
    puVar3 = System_Threading_ParameterizedThreadStart_TypeInfo;
    if (lVar9 != 0) {
      iVar12 = 0x20;
      do {
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar11 = *(long *)puVar3;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 == 0) break;
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
        }
        else {
          FUN_039683cc(lVar9,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        iVar12 = iVar12 + -1;
        if (iVar12 == 0) {
          *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0x128);
          *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0x130);
          return;
        }
        lVar9 = *(long *)(param_1 + 0xe0);
        uVar8 = thunk_FUN_02cea894(*(undefined8 *)puVar5);
        FUN_060bac04(uVar8,0);
      } while (lVar9 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


