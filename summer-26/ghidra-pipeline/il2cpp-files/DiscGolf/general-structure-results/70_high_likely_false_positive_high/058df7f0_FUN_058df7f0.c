/*
FUNCTION_NAME: FUN_058df7f0
ENTRY_POINT: 058df7f0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


void FUN_058df7f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  puVar1 = Oculus_Avatar2_CAPI_FileReadDelegate_TypeInfo;
  if ((DAT_06dc0e42 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0ad38);
    FUN_02d965b8(PTR_DAT_06a0ad40);
    FUN_02d965b8(UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_CAPI_FileReadDelegate_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_CAPI_HandStateCallback_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_CAPI_InputControlCallback_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_CAPI_InputTrackingCallback_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_CAPI_LipSyncCallback_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_CAPI_LoggingDelegate_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0f920);
    FUN_02d965b8(Oculus_Avatar2_CAPI_LoggingViewDelegate_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_CAPI_MemAllocDelegate_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_CAPI_MemFreeDelegate_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_CAPI_RequestDelegate_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_CAPI_ResourceDelegate_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_CAPI_ovrAvatar2AssetStatus_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_CAPI_ovrAvatar2Asset_Resource_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_CAPI_ovrAvatar2CompactSkinningDataId_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_CAPI_ovrAvatar2EntityFeatures_TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_CAPI_EyePoseCallback_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a165d0);
    DAT_06dc0e42 = 1;
  }
  puVar2 = Oculus_Avatar2_CAPI_ovrAvatar2Asset_Resource_TypeInfo;
  puVar4 = Oculus_Avatar2_CAPI_HandStateCallback_TypeInfo;
  lVar6 = FUN_02d966a4(*(undefined8 *)puVar1,0x10);
  puVar1 = PTR_DAT_069fb9c0;
  lVar12 = *(long *)(PTR_DAT_069fb9c0 + 0x10);
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
  }
  uVar7 = FUN_054f73b4(lVar12 + 0x20,0);
  uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x10) + 0x20,0);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
  FUN_058e0214(uVar9,*(undefined8 *)puVar2,0x1a,uVar7,1,0,1,uVar8,0,0,0);
  puVar2 = Oculus_Avatar2_CAPI_LoggingViewDelegate_TypeInfo;
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) != 0) {
      *(undefined8 *)(lVar6 + 0x20) = uVar9;
      LeanTween__value((undefined8 *)(lVar6 + 0x20),uVar9);
      uVar7 = FUN_054f73b4(*(long *)(puVar1 + 0x10) + 0x20,0);
      uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x10) + 0x20,0);
      uVar9 = FUN_054f73b4(*(long *)(puVar1 + 0x10) + 0x20,0);
      uVar10 = FUN_054f73b4(*(long *)(puVar1 + 0x10) + 0x20,0);
      uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
      FUN_058e0214(uVar11,*(undefined8 *)puVar2,0x13,uVar7,0,0,3,uVar8,uVar9,uVar10,0);
      puVar2 = Oculus_Avatar2_CAPI_LipSyncCallback_TypeInfo;
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar6 + 0x28) = uVar11;
        LeanTween__value((undefined8 *)(lVar6 + 0x28),uVar11);
        uVar7 = FUN_054f73b4(*(long *)(puVar1 + 0x28) + 0x20,0);
        uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
        FUN_058e0214(uVar8,*(undefined8 *)puVar2,0x1c,uVar7,0,1,1,0,0,0,0);
        puVar2 = Oculus_Avatar2_CAPI_RequestDelegate_TypeInfo;
        if (2 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x30) = uVar8;
          LeanTween__value((undefined8 *)(lVar6 + 0x30),uVar8);
          uVar7 = FUN_054f73b4(*(long *)(puVar1 + 0x10) + 0x20,0);
          uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x10) + 0x20,0);
          uVar9 = FUN_054f73b4(*(long *)(puVar1 + 0x10) + 0x20,0);
          uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
          FUN_058e0214(uVar10,*(undefined8 *)puVar2,0x12,uVar7,0,0,2,uVar8,uVar9,0,0);
          puVar2 = Oculus_Avatar2_CAPI_InputTrackingCallback_TypeInfo;
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar6 + 0x38) = uVar10;
            LeanTween__value((undefined8 *)(lVar6 + 0x38),uVar10);
            uVar7 = FUN_054f73b4(*(long *)(puVar1 + 0x48) + 0x20,0);
            uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x90) + 0x20,0);
            uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
            FUN_058e0214(uVar9,*(undefined8 *)puVar2,4,uVar7,1,0,1,uVar8,0,0,0);
            puVar2 = Oculus_Avatar2_CAPI_EyePoseCallback_TypeInfo;
            if (4 < *(uint *)(lVar6 + 0x18)) {
              *(undefined8 *)(lVar6 + 0x40) = uVar9;
              LeanTween__value((undefined8 *)(lVar6 + 0x40),uVar9);
              uVar7 = FUN_054f73b4(*(long *)(puVar1 + 0x90) + 0x20,0);
              uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x90) + 0x20,0);
              uVar9 = FUN_054f73b4(*(long *)(puVar1 + 0x48) + 0x20,0);
              uVar10 = FUN_054f73b4(*(long *)(puVar1 + 0x48) + 0x20,0);
              uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
              FUN_058e0214(uVar11,*(undefined8 *)puVar2,0x10,uVar7,1,0,3,uVar8,uVar9,uVar10,0);
              puVar2 = Oculus_Avatar2_CAPI_ResourceDelegate_TypeInfo;
              if (5 < *(uint *)(lVar6 + 0x18)) {
                *(undefined8 *)(lVar6 + 0x48) = uVar11;
                LeanTween__value((undefined8 *)(lVar6 + 0x48),uVar11);
                uVar7 = FUN_054f73b4(*(long *)(puVar1 + 0x90) + 0x20,0);
                uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x90) + 0x20,0);
                uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                FUN_058e0214(uVar9,*(undefined8 *)puVar2,0x1d,uVar7,1,0,1,uVar8,0,0,0);
                puVar2 = PTR_DAT_06a165d0;
                if (6 < *(uint *)(lVar6 + 0x18)) {
                  *(undefined8 *)(lVar6 + 0x50) = uVar9;
                  LeanTween__value((undefined8 *)(lVar6 + 0x50),uVar9);
                  uVar7 = FUN_054f73b4(*(long *)(puVar1 + 0x10) + 0x20,0);
                  uVar8 = FUN_054f73b4(*(long *)(puVar1 + 0x10) + 0x20,0);
                  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                  FUN_058e0214(uVar9,*(undefined8 *)puVar2,0x14,uVar7,0,1,1,uVar8,0,0,0);
                  puVar5 = Oculus_Avatar2_CAPI_InputControlCallback_TypeInfo;
                  puVar3 = PTR_DAT_06a0ad40;
                  puVar2 = PTR_DAT_06a0ad38;
                  if ((*(uint *)(lVar6 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar6 + 0x58) = uVar9;
                    LeanTween__value((undefined8 *)(lVar6 + 0x58),uVar9);
                    uVar7 = FUN_054f73b4(*(undefined8 *)puVar2,0);
                    uVar8 = FUN_054f73b4(*(undefined8 *)puVar3,0);
                    uVar9 = FUN_054f73b4(*(long *)(puVar1 + 0x48) + 0x20,0);
                    uVar10 = FUN_054f73b4(*(long *)(puVar1 + 0x48) + 0x20,0);
                    uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                    FUN_058e0214(uVar11,*(undefined8 *)puVar5,0x26,uVar7,0,1,3,uVar8,uVar9,uVar10,0)
                    ;
                    puVar2 = Oculus_Avatar2_CAPI_MemAllocDelegate_TypeInfo;
                    if (8 < *(uint *)(lVar6 + 0x18)) {
                      *(undefined8 *)(lVar6 + 0x60) = uVar11;
                      LeanTween__value((undefined8 *)(lVar6 + 0x60),uVar11);
                      uVar7 = FUN_054f73b4(*(long *)(puVar1 + 0x10) + 0x20,0);
                      uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                      FUN_058e0214(uVar8,*(undefined8 *)puVar2,0x21,uVar7,0,0,1,0,0,0,0);
                      puVar2 = Oculus_Avatar2_CAPI_ovrAvatar2AssetStatus_TypeInfo;
                      if (9 < *(uint *)(lVar6 + 0x18)) {
                        *(undefined8 *)(lVar6 + 0x68) = uVar8;
                        LeanTween__value((undefined8 *)(lVar6 + 0x68),uVar8);
                        uVar7 = FUN_054f73b4(*(long *)(puVar1 + 0x10) + 0x20,0);
                        uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                        FUN_058e0214(uVar8,*(undefined8 *)puVar2,0x20,uVar7,0,0,1,0,0,0,0);
                        puVar2 = Oculus_Avatar2_CAPI_MemFreeDelegate_TypeInfo;
                        if (10 < *(uint *)(lVar6 + 0x18)) {
                          *(undefined8 *)(lVar6 + 0x70) = uVar8;
                          LeanTween__value((undefined8 *)(lVar6 + 0x70),uVar8);
                          uVar7 = FUN_054f73b4(*(long *)(puVar1 + 0x10) + 0x20,0);
                          uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                          FUN_058e0214(uVar8,*(undefined8 *)puVar2,0x1e,uVar7,0,0,1,0,0,0,0);
                          puVar2 = PTR_DAT_06a0f920;
                          if (0xb < *(uint *)(lVar6 + 0x18)) {
                            *(undefined8 *)(lVar6 + 0x78) = uVar8;
                            LeanTween__value((undefined8 *)(lVar6 + 0x78),uVar8);
                            uVar7 = FUN_054f73b4(*(long *)(puVar1 + 0x10) + 0x20,0);
                            uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                            FUN_058e0214(uVar8,*(undefined8 *)puVar2,0x22,uVar7,0,0,1,0,0,0,0);
                            puVar2 = Oculus_Avatar2_CAPI_ovrAvatar2EntityFeatures_TypeInfo;
                            if (0xc < *(uint *)(lVar6 + 0x18)) {
                              *(undefined8 *)(lVar6 + 0x80) = uVar8;
                              LeanTween__value((undefined8 *)(lVar6 + 0x80),uVar8);
                              uVar7 = FUN_054f73b4(*(long *)(puVar1 + 0x10) + 0x20,0);
                              uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                              FUN_058e0214(uVar8,*(undefined8 *)puVar2,0x25,uVar7,0,0,1,0,0,0,0);
                              puVar2 = Oculus_Avatar2_CAPI_ovrAvatar2CompactSkinningDataId_TypeInfo;
                              if (0xd < *(uint *)(lVar6 + 0x18)) {
                                *(undefined8 *)(lVar6 + 0x88) = uVar8;
                                LeanTween__value((undefined8 *)(lVar6 + 0x88),uVar8);
                                uVar7 = FUN_054f73b4(*(long *)(puVar1 + 0x10) + 0x20,0);
                                uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                FUN_058e0214(uVar8,*(undefined8 *)puVar2,0x23,uVar7,0,0,1,0,0,0,0);
                                puVar2 = Oculus_Avatar2_CAPI_LoggingDelegate_TypeInfo;
                                if (0xe < *(uint *)(lVar6 + 0x18)) {
                                  *(undefined8 *)(lVar6 + 0x90) = uVar8;
                                  LeanTween__value((undefined8 *)(lVar6 + 0x90),uVar8);
                                  uVar7 = FUN_054f73b4(*(long *)(puVar1 + 0x10) + 0x20,0);
                                  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                  FUN_058e0214(uVar8,*(undefined8 *)puVar2,0x1f,uVar7,0,0,1,0,0,0,0)
                                  ;
                                  puVar1 = UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo;
                                  if ((*(uint *)(lVar6 + 0x18) & 0xfffffff0) != 0) {
                                    *(undefined8 *)(lVar6 + 0x98) = uVar8;
                                    LeanTween__value((undefined8 *)(lVar6 + 0x98),uVar8);
                                    **(long **)(*(long *)puVar1 + 0xb8) = lVar6;
                                    LeanTween__value(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar6);
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
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


