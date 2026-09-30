/*
FUNCTION_NAME: FUN_0617365c
ENTRY_POINT: 0617365c
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0617365c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar1 = OVR_OpenVR_IVRScreenshots__GetScreenshotPropertyFilename_TypeInfo;
  if ((DAT_06a83b75 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dcd18);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df918);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (OVR_OpenVR_IVRScreenshots__GetScreenshotPropertyType_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVR_OpenVR_IVRScreenshots__HookScreenshot_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (OVR_OpenVR_IVRCompositor__ForceReconnectProcess_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ded10);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89e8);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVR_OpenVR_IVRScreenshots__RequestScreenshot_TypeInfo)
    ;
    AkMIDIEventCallbackInfo__get_byProgramNum
              (OVR_OpenVR_IVRScreenshots__GetScreenshotPropertyFilename_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVR_OpenVR_IVRScreenshots__SubmitScreenshot_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (OVR_OpenVR_IVRScreenshots__TakeStereoScreenshot_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (OVR_OpenVR_IVRScreenshots__UpdateScreenshotProgress_TypeInfo);
    DAT_06a83b75 = 1;
  }
  lVar4 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  FUN_04f7383c(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x10) = param_1;
    *(undefined8 *)(lVar4 + 0x18) = param_2;
    iVar2 = FUN_06173c90(param_1);
    if (iVar2 != 2) {
      if (iVar2 != 1) {
        uVar5 = FUN_0615e0a0();
        uVar10 = thunk_FUN_02c7737c(OVR_OpenVR_IVRSettings__GetBool_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar5,uVar10);
      }
      uVar10 = *(undefined8 *)(lVar4 + 0x18);
      uVar5 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065dcd18);
      FUN_04a63944(uVar5,lVar4,*(undefined8 *)OVR_OpenVR_IVRScreenshots__RequestScreenshot_TypeInfo,
                   0);
LAB_06173928:
      FUN_06174470(param_1,uVar10,uVar5);
      return;
    }
    lVar6 = thunk_FUN_02cea894(*(undefined8 *)
                                OVR_OpenVR_IVRScreenshots__TakeStereoScreenshot_TypeInfo);
    FUN_04f7383c(lVar6,0);
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x18) = lVar4;
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar5 = FUN_03469cf0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),
                             *(undefined8 *)
                              OVR_OpenVR_IVRScreenshots__GetScreenshotPropertyType_TypeInfo);
        if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*(long *)PTR_DAT_065c89e8);
        }
        uVar7 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar5,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_0617394c;
          uVar3 = FUN_03469c64(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70),
                               *(undefined8 *)PTR_DAT_065df918);
          FUN_0615dcf4(uVar3 & 1,
                       *(undefined8 *)OVR_OpenVR_IVRScreenshots__UpdateScreenshotProgress_TypeInfo);
        }
        if ((*(long *)(lVar6 + 0x18) != 0) && (lVar4 = *(long *)(param_1 + 0x10), lVar4 != 0)) {
          uVar11 = *(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x18);
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
          uVar13 = *(undefined8 *)(lVar4 + 0x70);
          uVar10 = *(undefined8 *)(param_1 + 0x18);
          uVar9 = *(undefined8 *)(param_1 + 0x20);
          uVar8 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ded10);
          FUN_0619348c(uVar8,uVar9,0);
          if (*(long *)(param_1 + 0x10) != 0) {
            uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x78);
            uVar9 = thunk_FUN_02cea894(*(undefined8 *)
                                        OVR_OpenVR_IVRCompositor__ForceReconnectProcess_TypeInfo);
            FUN_0619278c(uVar9,uVar11,uVar10,uVar5,uVar12,uVar13,uVar8,uVar14,0);
            uVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                        OVR_OpenVR_IVRScreenshots__HookScreenshot_TypeInfo);
            FUN_06193058(uVar5,uVar9,0);
            *(undefined8 *)(lVar6 + 0x10) = uVar5;
            if (*(long *)(lVar6 + 0x18) != 0) {
              uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x18);
              uVar5 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065dcd18);
              FUN_04a63944(uVar5,lVar6,
                           *(undefined8 *)OVR_OpenVR_IVRScreenshots__SubmitScreenshot_TypeInfo,0);
              goto LAB_06173928;
            }
          }
        }
      }
    }
  }
LAB_0617394c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


