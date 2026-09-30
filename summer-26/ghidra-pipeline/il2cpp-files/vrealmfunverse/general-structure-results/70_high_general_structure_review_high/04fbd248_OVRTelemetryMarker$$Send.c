/*
FUNCTION_NAME: OVRTelemetryMarker$$Send
ENTRY_POINT: 04fbd248
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 OVRTelemetryMarker__Send(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((DAT_066cbe30 & 1) == 0) {
    FUN_02b3c81c(System_Func<OpenXRInteractionFeature_ActionBinding,_bool>_TypeInfo);
    FUN_02b3c81c(System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo);
    FUN_02b3c81c(System_Func<OpenXRInteractionFeature_DeviceConfig,_bool>_TypeInfo);
    FUN_02b3c81c(System_Func<OpenXRInteractionFeature_DeviceConfig,_string>_TypeInfo);
    FUN_02b3c81c(System_Func<OpenXRSettings_ColorSubmissionModeGroup,_int>_TypeInfo);
    FUN_02b3c81c(System_Func<PlayerEditorConnectionEvents_MessageTypeSubscribers,_bool>_TypeInfo);
    FUN_02b3c81c(System_Func<NativeInputUpdateType,_bool>_TypeInfo);
    FUN_02b3c81c(System_Func<Sequence_ActivationStep,_bool>_TypeInfo);
    FUN_02b3c81c(System_Func<Sequence_ActivationStep,_IActiveState>_TypeInfo);
    FUN_02b3c81c(System_Func<Spectrum_Point,_float>_TypeInfo);
    FUN_02b3c81c(System_Func<AsyncCallback,_object,_IAsyncResult>_TypeInfo);
    FUN_02b3c81c(System_Func<object,_bool>_TypeInfo);
    FUN_02b3c81c(System_Func<BackgroundSize,_BackgroundSize,_bool>_TypeInfo);
    FUN_02b3c81c(System_Func<Rect,_float>_TypeInfo);
    FUN_02b3c81c(System_Func<float,_bool>_TypeInfo);
    FUN_02b3c81c(System_Func<Color,_Color,_bool>_TypeInfo);
    FUN_02b3c81c(System_Func<SortColumnDescription,_bool>_TypeInfo);
    DAT_066cbe30 = 1;
  }
  if (param_2 < 0x4e83f2de) {
    if (param_2 < 0x267db4f5) {
      if (param_2 < 0x1569feb6) {
        if (param_2 < 0x102fa3df) {
          if (param_2 == 0x3e0d149) goto LAB_04fbd8ec;
          if (param_2 == 0xb6d8d76) {
            uVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                        System_Func<OpenXRInteractionFeature_DeviceConfig,_string>_TypeInfo
                                      );
            FUN_04fc0794(uVar1,param_1);
            return uVar1;
          }
          uVar2 = 0x102fa3de;
        }
        else {
          if (0x11741f03 < param_2) {
            if (param_2 == 0x121c317c) {
              uVar1 = thunk_FUN_02b79644(*(undefined8 *)System_Func<float,_bool>_TypeInfo);
              FUN_04fbd0e4(uVar1,param_1);
              return uVar1;
            }
            if (param_2 != 0x1569feb5) {
              return 0;
            }
LAB_04fbd7b8:
            uVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                        System_Func<NativeInputUpdateType,_bool>_TypeInfo);
            FUN_04fbca5c(uVar1,param_1);
            return uVar1;
          }
          if (param_2 == 0x112aca17) {
LAB_04fbd980:
            uVar1 = thunk_FUN_02b79644(*(undefined8 *)System_Func<Spectrum_Point,_float>_TypeInfo);
            FUN_04fc109c(uVar1,param_1);
            return uVar1;
          }
          uVar2 = 0x11741f03;
        }
        goto LAB_04fbd80c;
      }
      if (param_2 < 0x19c2b32c) {
        if ((param_2 == 0x185251ce) || (param_2 == 0x186dc4dd)) goto LAB_04fbd8ec;
        uVar2 = 0x19c2b32b;
LAB_04fbd604:
        if (param_2 != uVar2) {
          return 0;
        }
LAB_04fbd8ac:
        uVar1 = thunk_FUN_02b79644(*(undefined8 *)System_Func<Color,_Color,_bool>_TypeInfo);
        FUN_04fc2344(uVar1,param_1);
        return uVar1;
      }
      if (param_2 < 0x1c577d88) {
        if (param_2 == 0x1ad31b4f) goto LAB_04fbd778;
        uVar2 = 0x1c577d87;
      }
      else {
        if (param_2 == 0x1ed726c7) goto LAB_04fbd814;
        uVar2 = 0x267db4f4;
      }
    }
    else {
      if (param_2 < 0x34557eb3) {
        if (param_2 < 0x30ff006f) {
          if ((param_2 == 0x27670f58) || (param_2 == 0x2dafcdd5)) goto LAB_04fbd8ec;
          uVar2 = 0x30ff006e;
        }
        else {
          if (param_2 < 0x329206d2) {
            if (param_2 == 0x3215666d) goto LAB_04fbd8ec;
            uVar2 = 0x329206d1;
            goto LAB_04fbd8e4;
          }
          if (param_2 == 0x3302f770) goto LAB_04fbd8ec;
          uVar2 = 0x34557eb2;
        }
LAB_04fbd80c:
        if (param_2 != uVar2) {
          return 0;
        }
LAB_04fbd814:
        uVar1 = thunk_FUN_02b79644(*(undefined8 *)System_Func<Rect,_float>_TypeInfo);
        FUN_04fbcf2c(uVar1,param_1);
        return uVar1;
      }
      if (param_2 < 0x3e9b1f62) {
        if (param_2 < 0x35b5c4e4) {
          if (param_2 == 0x3497d7f6) goto LAB_04fbd8ec;
          uVar2 = 0x35b5c4e3;
LAB_04fbd770:
          if (param_2 != uVar2) {
            return 0;
          }
LAB_04fbd778:
          uVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                      System_Func<AsyncCallback,_object,_IAsyncResult>_TypeInfo);
          FUN_04fc148c(uVar1,param_1);
          return uVar1;
        }
        if (param_2 == 0x36e84f8c) goto LAB_04fbd814;
        uVar2 = 0x3e9b1f61;
      }
      else {
        if (param_2 < 0x4cb13a6f) {
          if (param_2 == 0x44e40dca) {
            uVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                        System_Func<PlayerEditorConnectionEvents_MessageTypeSubscribers,_bool>_TypeInfo
                                      );
            FUN_04fc0ab4(uVar1,param_1);
            return uVar1;
          }
          uVar2 = 0x4cb13a6e;
LAB_04fbd924:
          if (param_2 != uVar2) {
            return 0;
          }
          uVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                      System_Func<OpenXRInteractionFeature_DeviceConfig,_bool>_TypeInfo
                                    );
          FUN_04fc032c(uVar1,param_1);
          return uVar1;
        }
        if (param_2 == 0x4e81dc59) goto LAB_04fbd814;
        uVar2 = 0x4e83f2dd;
      }
    }
  }
  else if (param_2 < 0x63dffc8f) {
    if (param_2 < 0x58129c8f) {
      if (param_2 < 0x520f744d) {
        if (param_2 != 0x4f32e10d) {
          if (param_2 != 0x501ac7be) {
            if (param_2 != 0x520f744c) {
              return 0;
            }
            uVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                        System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo
                                      );
            FUN_04fbfec4(uVar1,param_1);
            return uVar1;
          }
LAB_04fbd71c:
          uVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                      System_Func<OpenXRSettings_ColorSubmissionModeGroup,_int>_TypeInfo
                                    );
          FUN_04fc08bc(uVar1,param_1);
          return uVar1;
        }
        goto LAB_04fbd8ec;
      }
      if (param_2 < 0x5662a012) {
        if (param_2 == 0x5585ff0a) {
LAB_04fbd960:
          uVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                      System_Func<Sequence_ActivationStep,_IActiveState>_TypeInfo);
          FUN_04fc0f74(uVar1,param_1);
          return uVar1;
        }
        uVar2 = 0x5662a011;
        goto LAB_04fbd604;
      }
      if (param_2 == 0x577ba8a0) goto LAB_04fbd980;
      uVar2 = 0x58129c8e;
    }
    else if (param_2 < 0x5c95a4f4) {
      if (param_2 == 0x5842d210) goto LAB_04fbd814;
      if (param_2 == 0x58cbff2a) {
        uVar1 = thunk_FUN_02b79644(*(undefined8 *)System_Func<object,_bool>_TypeInfo);
        FUN_04fbcb64(uVar1,param_1);
        return uVar1;
      }
      uVar2 = 0x5c95a4f3;
    }
    else if (param_2 < 0x5ed0ea33) {
      if (param_2 == 0x5e8953bd) {
        uVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                    System_Func<BackgroundSize,_BackgroundSize,_bool>_TypeInfo);
        FUN_04fc1294(uVar1,param_1);
        return uVar1;
      }
      uVar2 = 0x5ed0ea32;
    }
    else {
      if (param_2 == 0x60788c8b) goto LAB_04fbd8ac;
      uVar2 = 0x63dffc8e;
    }
  }
  else {
    if (0x6c6e33e3 < param_2) {
      if (0x7287c183 < param_2) {
        if (param_2 < 0x7b2f5cdd) {
          if (param_2 != 0x76a5a7c4) {
            if (param_2 != 0x7b2f5cdc) {
              return 0;
            }
            goto LAB_04fbd71c;
          }
        }
        else if (param_2 != 0x7bcfd98e) {
          uVar2 = 0x7f835863;
          goto LAB_04fbd924;
        }
        goto LAB_04fbd814;
      }
      if (0x6fb63223 < param_2) {
        if (param_2 == 0x71010917) goto LAB_04fbd8ec;
        uVar2 = 0x7287c183;
        goto LAB_04fbd770;
      }
      if (param_2 == 0x6ed60a35) {
        uVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                    System_Func<Sequence_ActivationStep,_bool>_TypeInfo);
        FUN_04fc0d7c(uVar1,param_1);
        return uVar1;
      }
      uVar2 = 0x6fb63223;
      goto LAB_04fbd80c;
    }
    if (param_2 < 0x67e19d38) {
      if (param_2 == 0x646d855f) goto LAB_04fbd7b8;
      if (param_2 != 0x6570b2bd) {
        if (param_2 != 0x67e19d37) {
          return 0;
        }
        goto LAB_04fbd960;
      }
      goto LAB_04fbd8ec;
    }
    if (0x6a94ad8e < param_2) {
      if (param_2 != 0x6b36a54f) {
        if (param_2 != 0x6c6e33e3) {
          return 0;
        }
        uVar1 = thunk_FUN_02b79644(*(undefined8 *)
                                    System_Func<OpenXRInteractionFeature_ActionBinding,_bool>_TypeInfo
                                  );
        FUN_04fbddb0(uVar1,param_1);
        return uVar1;
      }
      goto LAB_04fbd814;
    }
    if (param_2 == 0x68027c73) goto LAB_04fbd778;
    uVar2 = 0x6a94ad8e;
  }
LAB_04fbd8e4:
  if (param_2 != uVar2) {
    return 0;
  }
LAB_04fbd8ec:
  uVar1 = thunk_FUN_02b79644(*(undefined8 *)System_Func<SortColumnDescription,_bool>_TypeInfo);
  FUN_04fba014(uVar1,param_1);
  return uVar1;
}


