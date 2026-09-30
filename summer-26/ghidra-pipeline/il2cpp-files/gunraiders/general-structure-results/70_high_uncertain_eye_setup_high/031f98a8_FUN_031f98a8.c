/*
FUNCTION_NAME: FUN_031f98a8
ENTRY_POINT: 031f98a8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_031f98a8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 local_24;
  
  if ((DAT_045326f5 & 1) == 0) {
    FUN_01c5d288(
                VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
                );
    FUN_01c5d288(ONSPPropagation_FMODPluginInterface_TypeInfo);
    FUN_01c5d288(VoxelBusters_EssentialKit_NetworkServicesUnitySettings_PingTestSettings_TypeInfo);
    FUN_01c5d288(OVRPlugin_OVRP_1_45_0_TypeInfo);
    DAT_045326f5 = 1;
  }
  lVar5 = *(long *)(param_1 + 0xa0);
  if (lVar5 == 0) {
    lVar5 = thunk_FUN_01c496e0(*(undefined8 *)ONSPPropagation_FMODPluginInterface_TypeInfo);
    FUN_031ea7bc(lVar5,0);
    *(long *)(param_1 + 0xa0) = lVar5;
    if (lVar5 == 0) goto LAB_031f9b5c;
  }
  FUN_031ea830(lVar5,param_1,0);
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_031ea878(*(long *)(param_1 + 0xa0),0);
    lVar5 = FUN_031f7de4(param_1);
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x14) = 1;
      if (*(long *)(param_1 + 0x40) != 0) {
        plVar1 = (long *)FUN_031fa42c();
        if (plVar1 != (long *)0x0) {
          if (*plVar1 !=
              *(long *)
               VoxelBusters_EssentialKit_NetworkServicesUnitySettings_PingTestSettings_TypeInfo) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar1);
          }
        }
        lVar5 = FUN_031f7de4(param_1);
        if (lVar5 != 0) {
          *(undefined4 *)(lVar5 + 0x7c) = 0;
          *(undefined4 *)(lVar5 + 0x80) = 0;
          *(undefined8 *)(lVar5 + 0x30) = 0;
          *(undefined8 *)(lVar5 + 0x40) = 0;
          *(undefined8 *)(lVar5 + 0x48) = 0;
          *(undefined8 *)(lVar5 + 0x4d) = 0;
          *(undefined1 *)(lVar5 + 0x78) = 0;
          *(undefined8 *)(lVar5 + 0xd0) = 0;
          *(undefined8 *)(lVar5 + 0xd8) = 0;
          *(undefined8 *)(lVar5 + 200) = 0;
          *(undefined1 *)(lVar5 + 0xe0) = 0;
          *(undefined8 *)(lVar5 + 0xe8) = 0;
          *(undefined8 *)(lVar5 + 0xf0) = 0;
          *(undefined1 *)(lVar5 + 0x100) = 0;
          *(undefined8 *)(lVar5 + 0xf8) = 0;
          *(undefined4 *)(lVar5 + 0x118) = 0;
          *(undefined8 *)(lVar5 + 0x18) = 0;
          *(undefined8 *)(lVar5 + 0x10) = 0;
          *(undefined8 *)(lVar5 + 0x28) = 0;
          *(undefined8 *)(lVar5 + 0x20) = 0;
          *(undefined8 *)(lVar5 + 0x60) = 0;
          *(undefined8 *)(lVar5 + 0x58) = 0;
          *(undefined8 *)(lVar5 + 0x70) = 0;
          *(undefined8 *)(lVar5 + 0x68) = 0;
          *(undefined8 *)(lVar5 + 0x90) = 0;
          *(undefined8 *)(lVar5 + 0x88) = 0;
          *(undefined8 *)(lVar5 + 0xa0) = 0;
          *(undefined8 *)(lVar5 + 0x98) = 0;
          *(undefined8 *)(lVar5 + 0xb0) = 0;
          *(undefined8 *)(lVar5 + 0xa8) = 0;
          *(undefined8 *)(lVar5 + 0xb9) = 0;
          *(undefined8 *)(lVar5 + 0xb1) = 0;
          *(undefined8 *)(lVar5 + 0x108) = 0;
          *(undefined8 *)(lVar5 + 0x110) = 0;
          lVar5 = FUN_031f7de4(param_1);
          if ((*(long *)(param_1 + 0xa0) != 0) && (lVar5 != 0)) {
            *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x18);
            lVar5 = FUN_031f7de4(param_1);
            if (*(long *)(param_1 + 0xa0) != 0) {
              uVar4 = *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x10);
              if (*(int *)(*(long *)
                            VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
                          + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar2 = FUN_031e9010(uVar4,0);
              if (lVar5 != 0) {
                *(undefined8 *)(lVar5 + 0x40) = uVar2;
                lVar5 = FUN_031f7de4(param_1);
                if ((*(long *)(param_1 + 0xa0) != 0) &&
                   (uVar2 = FUN_031e90c8(*(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x10),0),
                   lVar5 != 0)) {
                  *(undefined8 *)(lVar5 + 0x48) = uVar2;
                  lVar5 = FUN_031f7de4(param_1);
                  if ((*(long *)(param_1 + 0xa0) != 0) && (lVar5 != 0)) {
                    *(undefined4 *)(lVar5 + 0x50) =
                         *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x10);
                    lVar5 = FUN_031f7de4(param_1);
                    if (lVar5 != 0) {
                      if (plVar1 == (long *)0x0) {
                        *(undefined4 *)(lVar5 + 0x10) = 2;
                        lVar5 = FUN_031f7de4(param_1);
                        if (lVar5 == 0) goto LAB_031f9b5c;
                        *(undefined8 *)(lVar5 + 0x28) =
                             *(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo;
                      }
                      else {
                        *(undefined4 *)(lVar5 + 0x10) = 3;
                        lVar5 = FUN_031f7de4(param_1);
                        if (lVar5 == 0) goto LAB_031f9b5c;
                        *(undefined4 *)(lVar5 + 0x20) = 1;
                        if ((int)plVar1[6] == 2) {
                          lVar5 = FUN_031f7de4(param_1);
                          if (lVar5 == 0) goto LAB_031f9b5c;
                          uVar4 = 3;
                        }
                        else {
                          if ((int)plVar1[6] != 1) {
                            uVar2 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
                            uVar2 = FUN_01c5d2fc(uVar2,1);
                            FUN_019b2708(plVar1);
                            local_24 = (undefined4)plVar1[6];
                            uVar3 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_36_0_TypeInfo);
                            uVar3 = thunk_FUN_01c49334(uVar3,&local_24);
                            uVar3 = FUN_03307544(uVar3,0);
                            FUN_019b2708(uVar2);
                            FUN_019b8dd4(uVar2,uVar3);
                            FUN_019b8e08(uVar2,0,uVar3);
                            uVar3 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_40_0_TypeInfo);
                            uVar2 = FUN_03315920(uVar3,uVar2,0);
                            thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
                            uVar3 = thunk_FUN_01c496e0();
                            FUN_031dce5c(uVar3,uVar2,0);
                            uVar2 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_46_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
                            FUN_01c5d37c(uVar3,uVar2);
                          }
                          lVar5 = FUN_031f7de4(param_1);
                          if (lVar5 == 0) goto LAB_031f9b5c;
                          *(long *)(lVar5 + 0x28) = plVar1[5];
                          lVar5 = FUN_031f7de4(param_1);
                          if (lVar5 == 0) goto LAB_031f9b5c;
                          uVar4 = 2;
                        }
                        *(undefined4 *)(lVar5 + 0x1c) = uVar4;
                      }
                      lVar5 = *(long *)(param_1 + 0x10);
                      uVar2 = FUN_031f7de4(param_1);
                      if (lVar5 != 0) {
                        FUN_031f2bec(lVar5,uVar2,0);
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
LAB_031f9b5c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


