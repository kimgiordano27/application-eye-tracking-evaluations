/*
FUNCTION_NAME: FUN_0702d1c0
ENTRY_POINT: 0702d1c0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0702d1c0(long param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar2 = SpectrumKernel_TypeInfo;
  if ((DAT_07eebdca & 1) == 0) {
    FUN_03642964(Unity_InferenceEngine_Layers_ReduceL1_TypeInfo);
    FUN_03642964(UnityEngine_TextCore_LowLevel_LigatureSubstitutionRecord_TypeInfo);
    FUN_03642964(PTR_DAT_07a027e8);
    FUN_03642964(OVRPlugin_LogLevel_TypeInfo);
    FUN_03642964(UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo);
    FUN_03642964(OVR_OpenVR_IVROverlay__ComputeOverlayIntersection_TypeInfo);
    FUN_03642964(PTR_DAT_079ff4c8);
    FUN_03642964(PTR_DAT_07a020f0);
    FUN_03642964(SpectrumKernel_TypeInfo);
    FUN_03642964(TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo);
    DAT_07eebdca = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_06f10264(0);
  puVar2 = UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo;
  if (*(char *)(param_1 + 0x30) != '\0') {
    if (*(int *)(*(long *)UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo +
                0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if (DAT_07eeb188 == '\0') {
      FUN_03642964(UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo);
      DAT_07eeb188 = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_0702d4e0;
    FUN_06eaf134(lVar5,0);
  }
  if (*(int *)(*(long *)Unity_InferenceEngine_Layers_ReduceL1_TypeInfo + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_06ef957c(0);
  UnityEngine_UIElements_BaseListView__OnRemoveClicked(param_1,param_2 & 1,0);
  puVar2 = OVR_OpenVR_IVROverlay__ComputeOverlayIntersection_TypeInfo;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_06f89610(*(long *)(param_1 + 0x38),0);
    uVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
    FUN_07201254(uVar6,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_071fc188(uVar6,0);
    lVar5 = FUN_0700c4b8(0);
    puVar3 = TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo;
    puVar2 = PTR_DAT_079ff4c8;
    if (lVar5 != 0) {
      FUN_0700c540(lVar5,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_06e88404(0);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 != 0) {
        thunk_FUN_06f16960(lVar5,0);
        puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *puVar7 = 0;
        thunk_FUN_036b7ad0(puVar7,0);
        puVar4 = OVRPlugin_LogLevel_TypeInfo;
        puVar3 = UnityEngine_TextCore_LowLevel_LigatureSubstitutionRecord_TypeInfo;
        lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
        if (lVar5 != 0) {
          FUN_0700ab04(lVar5,0);
          puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
          *puVar7 = 0;
          thunk_FUN_036b7ad0(puVar7,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          FUN_07208cec(0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          if (DAT_07eebec7 == '\0') {
            FUN_03642964(UnityEngine_TextCore_LowLevel_LigatureSubstitutionRecord_TypeInfo);
            DAT_07eebec7 = '\x01';
          }
          puVar2 = PTR_DAT_07a027e8;
          lVar5 = *(long *)puVar3;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar5 = *(long *)puVar3;
          }
          puVar3 = PTR_DAT_07a020f0;
          lVar8 = *(long *)puVar2;
          iVar1 = *(int *)(lVar8 + 0xe4);
          *(undefined1 *)(*(long *)(lVar5 + 0xb8) + 8) = 0;
          if (iVar1 == 0) {
            thunk_FUN_036a1978(lVar8);
          }
          FUN_06e90ec8(0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          lVar5 = FUN_06ec2f60(0);
          if (lVar5 != 0) {
            FUN_06ec4820(lVar5,0);
            FUN_0702d4e4();
            FUN_06fce540(0);
            return;
          }
        }
      }
    }
  }
LAB_0702d4e0:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


