/*
FUNCTION_NAME: System.Xml.XmlBaseReader.NamespaceManager$$Register
ENTRY_POINT: 058dfa14
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;eye_or_gaze_keyword_boost_only
*/


void System_Xml_XmlBaseReader_NamespaceManager__Register(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  
  FUN_054f73b4(param_1 + 0x20,0);
  FUN_054f73b4(*(long *)(unaff_x27 + 0x10) + 0x20,0);
  uVar4 = thunk_FUN_02dd3144(*unaff_x26);
  FUN_058e0214(uVar4,*unaff_x28,0x13);
  puVar1 = Oculus_Avatar2_CAPI_LipSyncCallback_TypeInfo;
  if ((*(uint *)(unaff_x20 + -8) & 0xfffffffe) != 0) {
    *(undefined8 *)(unaff_x19 + 0x28) = uVar4;
    LeanTween__value((undefined8 *)(unaff_x19 + 0x28),uVar4);
    uVar4 = FUN_054f73b4(*(long *)(unaff_x27 + 0x28) + 0x20,0);
    uVar5 = thunk_FUN_02dd3144(*unaff_x26);
    FUN_058e0214(uVar5,*(undefined8 *)puVar1,0x1c,uVar4,0,1,1,0);
    puVar1 = Oculus_Avatar2_CAPI_RequestDelegate_TypeInfo;
    if (2 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x30) = uVar5;
      LeanTween__value((undefined8 *)(unaff_x19 + 0x30),uVar5);
      uVar4 = FUN_054f73b4(*(long *)(unaff_x27 + 0x10) + 0x20,0);
      uVar5 = FUN_054f73b4(*(long *)(unaff_x27 + 0x10) + 0x20,0);
      FUN_054f73b4(*(long *)(unaff_x27 + 0x10) + 0x20,0);
      uVar6 = thunk_FUN_02dd3144(*unaff_x26);
      FUN_058e0214(uVar6,*(undefined8 *)puVar1,0x12,uVar4,0,0,2,uVar5);
      puVar1 = Oculus_Avatar2_CAPI_InputTrackingCallback_TypeInfo;
      if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
        *(undefined8 *)(unaff_x19 + 0x38) = uVar6;
        LeanTween__value((undefined8 *)(unaff_x19 + 0x38),uVar6);
        uVar4 = FUN_054f73b4(*(long *)(unaff_x27 + 0x48) + 0x20,0);
        uVar5 = FUN_054f73b4(*(long *)(unaff_x27 + 0x90) + 0x20,0);
        uVar6 = thunk_FUN_02dd3144(*unaff_x26);
        FUN_058e0214(uVar6,*(undefined8 *)puVar1,4,uVar4,1,0,1,uVar5);
        puVar1 = Oculus_Avatar2_CAPI_EyePoseCallback_TypeInfo;
        if (4 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x40) = uVar6;
          LeanTween__value((undefined8 *)(unaff_x19 + 0x40),uVar6);
          uVar4 = FUN_054f73b4(*(long *)(unaff_x27 + 0x90) + 0x20,0);
          uVar5 = FUN_054f73b4(*(long *)(unaff_x27 + 0x90) + 0x20,0);
          FUN_054f73b4(*(long *)(unaff_x27 + 0x48) + 0x20,0);
          FUN_054f73b4(*(long *)(unaff_x27 + 0x48) + 0x20,0);
          uVar6 = thunk_FUN_02dd3144(*unaff_x26);
          FUN_058e0214(uVar6,*(undefined8 *)puVar1,0x10,uVar4,1,0,3,uVar5);
          puVar1 = Oculus_Avatar2_CAPI_ResourceDelegate_TypeInfo;
          if (5 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x48) = uVar6;
            LeanTween__value((undefined8 *)(unaff_x19 + 0x48),uVar6);
            uVar4 = FUN_054f73b4(*(long *)(unaff_x27 + 0x90) + 0x20,0);
            uVar5 = FUN_054f73b4(*(long *)(unaff_x27 + 0x90) + 0x20,0);
            uVar6 = thunk_FUN_02dd3144(*unaff_x26);
            FUN_058e0214(uVar6,*(undefined8 *)puVar1,0x1d,uVar4,1,0,1,uVar5);
            puVar1 = PTR_DAT_06a165d0;
            if (6 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x50) = uVar6;
              LeanTween__value((undefined8 *)(unaff_x19 + 0x50),uVar6);
              uVar4 = FUN_054f73b4(*(long *)(unaff_x27 + 0x10) + 0x20,0);
              uVar5 = FUN_054f73b4(*(long *)(unaff_x27 + 0x10) + 0x20,0);
              uVar6 = thunk_FUN_02dd3144(*unaff_x26);
              FUN_058e0214(uVar6,*(undefined8 *)puVar1,0x14,uVar4,0,1,1,uVar5);
              puVar3 = Oculus_Avatar2_CAPI_InputControlCallback_TypeInfo;
              puVar2 = PTR_DAT_06a0ad40;
              puVar1 = PTR_DAT_06a0ad38;
              if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff8) != 0) {
                *(undefined8 *)(unaff_x19 + 0x58) = uVar6;
                LeanTween__value((undefined8 *)(unaff_x19 + 0x58),uVar6);
                uVar4 = FUN_054f73b4(*(undefined8 *)puVar1,0);
                uVar5 = FUN_054f73b4(*(undefined8 *)puVar2,0);
                FUN_054f73b4(*(long *)(unaff_x27 + 0x48) + 0x20,0);
                FUN_054f73b4(*(long *)(unaff_x27 + 0x48) + 0x20,0);
                uVar6 = thunk_FUN_02dd3144(*unaff_x26);
                FUN_058e0214(uVar6,*(undefined8 *)puVar3,0x26,uVar4,0,1,3,uVar5);
                puVar1 = Oculus_Avatar2_CAPI_MemAllocDelegate_TypeInfo;
                if (8 < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0x60) = uVar6;
                  LeanTween__value((undefined8 *)(unaff_x19 + 0x60),uVar6);
                  uVar4 = FUN_054f73b4(*(long *)(unaff_x27 + 0x10) + 0x20,0);
                  uVar5 = thunk_FUN_02dd3144(*unaff_x26);
                  FUN_058e0214(uVar5,*(undefined8 *)puVar1,0x21,uVar4,0,0,1,0);
                  puVar1 = Oculus_Avatar2_CAPI_ovrAvatar2AssetStatus_TypeInfo;
                  if (9 < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0x68) = uVar5;
                    LeanTween__value((undefined8 *)(unaff_x19 + 0x68),uVar5);
                    uVar4 = FUN_054f73b4(*(long *)(unaff_x27 + 0x10) + 0x20,0);
                    uVar5 = thunk_FUN_02dd3144(*unaff_x26);
                    FUN_058e0214(uVar5,*(undefined8 *)puVar1,0x20,uVar4,0,0,1,0);
                    puVar1 = Oculus_Avatar2_CAPI_MemFreeDelegate_TypeInfo;
                    if (10 < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0x70) = uVar5;
                      LeanTween__value((undefined8 *)(unaff_x19 + 0x70),uVar5);
                      uVar4 = FUN_054f73b4(*(long *)(unaff_x27 + 0x10) + 0x20,0);
                      uVar5 = thunk_FUN_02dd3144(*unaff_x26);
                      FUN_058e0214(uVar5,*(undefined8 *)puVar1,0x1e,uVar4,0,0,1,0);
                      puVar1 = PTR_DAT_06a0f920;
                      if (0xb < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0x78) = uVar5;
                        LeanTween__value((undefined8 *)(unaff_x19 + 0x78),uVar5);
                        uVar4 = FUN_054f73b4(*(long *)(unaff_x27 + 0x10) + 0x20,0);
                        uVar5 = thunk_FUN_02dd3144(*unaff_x26);
                        FUN_058e0214(uVar5,*(undefined8 *)puVar1,0x22,uVar4,0,0,1,0);
                        puVar1 = Oculus_Avatar2_CAPI_ovrAvatar2EntityFeatures_TypeInfo;
                        if (0xc < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0x80) = uVar5;
                          LeanTween__value((undefined8 *)(unaff_x19 + 0x80),uVar5);
                          uVar4 = FUN_054f73b4(*(long *)(unaff_x27 + 0x10) + 0x20,0);
                          uVar5 = thunk_FUN_02dd3144(*unaff_x26);
                          FUN_058e0214(uVar5,*(undefined8 *)puVar1,0x25,uVar4,0,0,1,0);
                          puVar1 = Oculus_Avatar2_CAPI_ovrAvatar2CompactSkinningDataId_TypeInfo;
                          if (0xd < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined8 *)(unaff_x19 + 0x88) = uVar5;
                            LeanTween__value((undefined8 *)(unaff_x19 + 0x88),uVar5);
                            uVar4 = FUN_054f73b4(*(long *)(unaff_x27 + 0x10) + 0x20,0);
                            uVar5 = thunk_FUN_02dd3144(*unaff_x26);
                            FUN_058e0214(uVar5,*(undefined8 *)puVar1,0x23,uVar4,0,0,1,0);
                            puVar1 = Oculus_Avatar2_CAPI_LoggingDelegate_TypeInfo;
                            if (0xe < *(uint *)(unaff_x19 + 0x18)) {
                              *(undefined8 *)(unaff_x19 + 0x90) = uVar5;
                              LeanTween__value((undefined8 *)(unaff_x19 + 0x90),uVar5);
                              uVar4 = FUN_054f73b4(*(long *)(unaff_x27 + 0x10) + 0x20,0);
                              uVar5 = thunk_FUN_02dd3144(*unaff_x26);
                              FUN_058e0214(uVar5,*(undefined8 *)puVar1,0x1f,uVar4,0,0,1,0);
                              puVar1 = UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo;
                              if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff0) != 0) {
                                *(undefined8 *)(unaff_x19 + 0x98) = uVar5;
                                LeanTween__value((undefined8 *)(unaff_x19 + 0x98),uVar5);
                                **(long **)(*(long *)puVar1 + 0xb8) = unaff_x19;
                                LeanTween__value(*(undefined8 *)(*(long *)puVar1 + 0xb8));
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


