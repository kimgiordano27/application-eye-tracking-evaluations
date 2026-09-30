/*
FUNCTION_NAME: FUN_06174cd0
ENTRY_POINT: 06174cd0
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_06174cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar2 = OVR_OpenVR_IVRSystem__DriverDebugRequest_TypeInfo;
  if ((DAT_06a83b79 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dcd18);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df918);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (OVR_OpenVR_IVRScreenshots__GetScreenshotPropertyType_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVR_OpenVR_IVRScreenshots__HookScreenshot_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (OVR_OpenVR_IVRCompositor__ForceReconnectProcess_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ded30);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89e8);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (OVR_OpenVR_IVRSystem__GetArrayTrackedDeviceProperty_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVR_OpenVR_IVRSystem__DriverDebugRequest_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (OVR_OpenVR_IVRSystem__GetBoolTrackedDeviceProperty_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (OVR_OpenVR_IVRSystem__GetButtonIdNameFromEnum_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (OVR_OpenVR_IVRScreenshots__UpdateScreenshotProgress_TypeInfo);
    DAT_06a83b79 = 1;
  }
  lVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  FUN_04f7383c(lVar5,0);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = param_1;
    *(undefined8 *)(lVar5 + 0x18) = param_2;
    *(undefined8 *)(lVar5 + 0x20) = param_3;
    iVar3 = FUN_06173c90(param_1);
    if (iVar3 != 2) {
      if (iVar3 != 1) {
        uVar11 = FUN_0615e0a0();
        uVar12 = thunk_FUN_02c7737c(OVR_OpenVR_IVRSystem__GetControllerAxisTypeNameFromEnum_TypeInfo
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar11,uVar12);
      }
      uVar11 = *(undefined8 *)(lVar5 + 0x18);
      uVar12 = *(undefined8 *)(lVar5 + 0x20);
      uVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065dcd18);
      FUN_04a63944(uVar6,lVar5,
                   *(undefined8 *)OVR_OpenVR_IVRSystem__GetArrayTrackedDeviceProperty_TypeInfo,0);
LAB_06174fa0:
      FUN_06173ecc(param_1,uVar11,uVar12,uVar6);
      return;
    }
    lVar7 = thunk_FUN_02cea894(*(undefined8 *)OVR_OpenVR_IVRSystem__GetButtonIdNameFromEnum_TypeInfo
                              );
    FUN_04f7383c(lVar7,0);
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x18) = lVar5;
      uVar11 = FUN_03469cf0(*(undefined8 *)(lVar5 + 0x20),
                            *(undefined8 *)
                             OVR_OpenVR_IVRScreenshots__GetScreenshotPropertyType_TypeInfo);
      if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
        thunk_FUN_02cd038c(*(long *)PTR_DAT_065c89e8);
      }
      uVar8 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar11,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_06174fc4;
        uVar4 = FUN_03469c64(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70),
                             *(undefined8 *)PTR_DAT_065df918);
        FUN_0615dcf4(uVar4 & 1,
                     *(undefined8 *)OVR_OpenVR_IVRScreenshots__UpdateScreenshotProgress_TypeInfo);
      }
      lVar5 = *(long *)(lVar7 + 0x18);
      if ((lVar5 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
        uVar12 = *(undefined8 *)(lVar5 + 0x18);
        uVar1 = *(undefined8 *)(lVar5 + 0x20);
        uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70);
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        uVar10 = *(undefined8 *)(param_1 + 0x20);
        uVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ded30);
        FUN_061935a4(uVar9,uVar10,0);
        if (*(long *)(param_1 + 0x10) != 0) {
          uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x78);
          uVar10 = thunk_FUN_02cea894(*(undefined8 *)
                                       OVR_OpenVR_IVRCompositor__ForceReconnectProcess_TypeInfo);
          FUN_0619278c(uVar10,uVar12,uVar6,uVar11,uVar1,uVar13,uVar9,uVar14,0);
          uVar11 = thunk_FUN_02cea894(*(undefined8 *)
                                       OVR_OpenVR_IVRScreenshots__HookScreenshot_TypeInfo);
          FUN_06193058(uVar11,uVar10,0);
          lVar5 = *(long *)(lVar7 + 0x18);
          *(undefined8 *)(lVar7 + 0x10) = uVar11;
          if (lVar5 != 0) {
            uVar11 = *(undefined8 *)(lVar5 + 0x18);
            uVar12 = *(undefined8 *)(lVar5 + 0x20);
            uVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065dcd18);
            FUN_04a63944(uVar6,lVar7,
                         *(undefined8 *)OVR_OpenVR_IVRSystem__GetBoolTrackedDeviceProperty_TypeInfo,
                         0);
            goto LAB_06174fa0;
          }
        }
      }
    }
  }
LAB_06174fc4:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


