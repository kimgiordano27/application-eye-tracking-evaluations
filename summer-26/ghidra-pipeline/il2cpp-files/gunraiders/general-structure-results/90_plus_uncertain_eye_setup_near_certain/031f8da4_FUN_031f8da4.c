/*
FUNCTION_NAME: FUN_031f8da4
ENTRY_POINT: 031f8da4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_031f8da4(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_045326f4 & 1) == 0) {
    FUN_01c5d288(OVRPlugin_OVRP_1_3_0_TypeInfo);
    FUN_01c5d288(System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_TypeInfo
                );
    FUN_01c5d288(
                VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
                );
    FUN_01c5d288(VoxelBusters_EssentialKit_NetworkServicesUnitySettings_PingTestSettings_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(PTR_DAT_04236820);
    DAT_045326f4 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x90);
  if (lVar8 == 0) {
    lVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_TypeInfo
                              );
    FUN_031ea66c(lVar8,0);
    *(long *)(param_1 + 0x90) = lVar8;
  }
  if (param_2 == 6) {
    if (lVar8 == 0) goto LAB_031f91a8;
    FUN_031ea6f0(lVar8,param_1,0);
    if (*(long *)(param_1 + 0x90) == 0) goto LAB_031f91a8;
    FUN_031ea734(*(long *)(param_1 + 0x90),0);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x98);
    if (lVar8 == 0) {
      lVar8 = thunk_FUN_01c496e0(*(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo);
      FUN_031ea738(lVar8,0);
      *(long *)(param_1 + 0x98) = lVar8;
      if (lVar8 == 0) goto LAB_031f91a8;
    }
    FUN_031ea740(lVar8,param_1,0);
    if (*(long *)(param_1 + 0x98) == 0) goto LAB_031f91a8;
    FUN_031ea784(*(long *)(param_1 + 0x98),0);
    if ((*(long *)(param_1 + 0x98) == 0) || (*(long *)(param_1 + 0x10) == 0)) goto LAB_031f91a8;
    lVar8 = *(long *)(param_1 + 0x90);
    plVar4 = (long *)FUN_031f2bbc(*(long *)(param_1 + 0x10),
                                  *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x14),0);
    if (lVar8 == 0) goto LAB_031f91a8;
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else if (*plVar4 != *(long *)PTR_DAT_0422fc38) {
      plVar4 = (long *)0x0;
    }
    *(long **)(lVar8 + 0x18) = plVar4;
    lVar8 = *(long *)(param_1 + 0x90);
    if (lVar8 == 0) goto LAB_031f91a8;
    if (*(long *)(lVar8 + 0x18) == 0) {
      uVar3 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
      uVar5 = FUN_01c5d2fc(uVar3,2);
      FUN_019b2708();
      puVar1 = OVRPlugin_OVRP_1_30_0_TypeInfo;
      uVar3 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_30_0_TypeInfo);
      FUN_019b8dd4(uVar5,uVar3);
      uVar3 = thunk_FUN_01c273e8(puVar1);
      FUN_019b8e08(uVar5,0,uVar3);
      lVar8 = *(long *)(param_1 + 0x98);
      FUN_019b2708(lVar8);
      local_34 = *(undefined4 *)(lVar8 + 0x14);
      uVar3 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
      uVar3 = thunk_FUN_01c49334(uVar3,&local_34);
      FUN_019b2708(uVar5);
      FUN_019b8dd4(uVar5,uVar3);
      FUN_019b8e08(uVar5,1,uVar3);
      uVar3 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_31_0_TypeInfo);
      goto LAB_031f92e4;
    }
    if (*(long *)(param_1 + 0x98) == 0) goto LAB_031f91a8;
    *(undefined4 *)(lVar8 + 0x10) = *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x10);
  }
  lVar8 = FUN_031f7de4(param_1);
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x7c) = 0;
    *(undefined4 *)(lVar8 + 0x80) = 0;
    *(undefined8 *)(lVar8 + 0x30) = 0;
    *(undefined8 *)(lVar8 + 0x40) = 0;
    *(undefined8 *)(lVar8 + 0x48) = 0;
    *(undefined8 *)(lVar8 + 0x4d) = 0;
    *(undefined1 *)(lVar8 + 0x78) = 0;
    *(undefined8 *)(lVar8 + 0xd0) = 0;
    *(undefined8 *)(lVar8 + 0xd8) = 0;
    *(undefined8 *)(lVar8 + 200) = 0;
    *(undefined1 *)(lVar8 + 0xe0) = 0;
    *(undefined8 *)(lVar8 + 0xe8) = 0;
    *(undefined8 *)(lVar8 + 0xf0) = 0;
    *(undefined1 *)(lVar8 + 0x100) = 0;
    *(undefined8 *)(lVar8 + 0xf8) = 0;
    *(undefined4 *)(lVar8 + 0x118) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    *(undefined8 *)(lVar8 + 0x60) = 0;
    *(undefined8 *)(lVar8 + 0x58) = 0;
    *(undefined8 *)(lVar8 + 0x70) = 0;
    *(undefined8 *)(lVar8 + 0x68) = 0;
    *(undefined8 *)(lVar8 + 0x90) = 0;
    *(undefined8 *)(lVar8 + 0x88) = 0;
    *(undefined8 *)(lVar8 + 0xa0) = 0;
    *(undefined8 *)(lVar8 + 0x98) = 0;
    *(undefined8 *)(lVar8 + 0xb0) = 0;
    *(undefined8 *)(lVar8 + 0xa8) = 0;
    *(undefined8 *)(lVar8 + 0xb9) = 0;
    *(undefined8 *)(lVar8 + 0xb1) = 0;
    *(undefined8 *)(lVar8 + 0x108) = 0;
    *(undefined8 *)(lVar8 + 0x110) = 0;
    lVar8 = FUN_031f7de4(param_1);
    if (lVar8 != 0) {
      *(undefined4 *)(lVar8 + 0x10) = 2;
      lVar8 = FUN_031f7de4(param_1);
      if (((*(long *)(param_1 + 0x90) != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
         (uVar3 = FUN_031f4a9c(*(long *)(param_1 + 0x10),
                               (long)*(int *)(*(long *)(param_1 + 0x90) + 0x10),0), lVar8 != 0)) {
        *(undefined8 *)(lVar8 + 0x58) = uVar3;
        lVar8 = FUN_031f7de4(param_1);
        if (lVar8 != 0) {
          if (*(long *)(lVar8 + 0x58) == *(long *)(param_1 + 0x20)) {
            lVar8 = FUN_031f7de4(param_1);
            if (lVar8 == 0) goto LAB_031f91a8;
            *(undefined4 *)(lVar8 + 0x24) = 1;
          }
          lVar8 = FUN_031f7de4(param_1);
          if ((lVar8 != 0) && (*(undefined4 *)(lVar8 + 0x14) = 1, *(long *)(param_1 + 0x40) != 0)) {
            plVar4 = (long *)FUN_031fa42c();
            if ((plVar4 != (long *)0x0) &&
               (*plVar4 !=
                *(long *)
                 VoxelBusters_EssentialKit_NetworkServicesUnitySettings_PingTestSettings_TypeInfo))
            {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748(plVar4);
            }
            lVar8 = FUN_031f7de4(param_1);
            if ((*(long *)(param_1 + 0x90) != 0) && (lVar8 != 0)) {
              *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x18);
              lVar8 = FUN_031f7de4(param_1);
              puVar2 = 
              VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
              ;
              puVar1 = PTR_DAT_04236820;
              if (lVar8 != 0) {
                *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_04236820;
                lVar8 = FUN_031f7de4(param_1);
                lVar7 = *(long *)puVar2;
                if (*(int *)(lVar7 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(lVar7);
                }
                if (lVar8 != 0) {
                  *(undefined8 *)(lVar8 + 0x48) =
                       *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
                  lVar8 = FUN_031f7de4(param_1);
                  if (lVar8 != 0) {
                    *(undefined4 *)(lVar8 + 0x50) = 0;
                    lVar8 = FUN_031f7de4(param_1);
                    if ((*(long *)(param_1 + 0x90) != 0) && (lVar8 != 0)) {
                      *(undefined8 *)(lVar8 + 0x38) =
                           *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x18);
                      lVar8 = FUN_031f7de4(param_1);
                      if (lVar8 != 0) {
                        if (plVar4 == (long *)0x0) {
                          *(undefined4 *)(lVar8 + 0x10) = 2;
                          lVar8 = FUN_031f7de4(param_1);
                          if (lVar8 == 0) goto LAB_031f91a8;
                          *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)puVar1;
                        }
                        else {
                          *(undefined4 *)(lVar8 + 0x10) = 3;
                          lVar8 = FUN_031f7de4(param_1);
                          if (lVar8 == 0) goto LAB_031f91a8;
                          *(undefined4 *)(lVar8 + 0x20) = 1;
                          if ((int)plVar4[6] == 2) {
                            lVar8 = FUN_031f7de4(param_1);
                            if (lVar8 == 0) goto LAB_031f91a8;
                            uVar6 = 3;
                          }
                          else {
                            if ((int)plVar4[6] != 1) {
                              uVar3 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
                              uVar5 = FUN_01c5d2fc(uVar3,1);
                              FUN_019b2708(plVar4);
                              local_38 = (undefined4)plVar4[6];
                              uVar3 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_36_0_TypeInfo);
                              uVar3 = thunk_FUN_01c49334(uVar3,&local_38);
                              uVar3 = FUN_03307544(uVar3,0);
                              FUN_019b2708(uVar5);
                              FUN_019b8dd4(uVar5,uVar3);
                              FUN_019b8e08(uVar5,0,uVar3);
                              uVar3 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_40_0_TypeInfo);
LAB_031f92e4:
                              uVar3 = FUN_03315920(uVar3,uVar5,0);
                              thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
                              uVar5 = thunk_FUN_01c496e0();
                              FUN_031dce5c(uVar5,uVar3,0);
                              uVar3 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_41_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
                              FUN_01c5d37c(uVar5,uVar3);
                            }
                            lVar8 = FUN_031f7de4(param_1);
                            if (lVar8 == 0) goto LAB_031f91a8;
                            *(long *)(lVar8 + 0x28) = plVar4[5];
                            lVar8 = FUN_031f7de4(param_1);
                            if (lVar8 == 0) goto LAB_031f91a8;
                            uVar6 = 2;
                          }
                          *(undefined4 *)(lVar8 + 0x1c) = uVar6;
                        }
                        lVar8 = *(long *)(param_1 + 0x10);
                        uVar3 = FUN_031f7de4(param_1);
                        if (lVar8 != 0) {
                          FUN_031f2bec(lVar8,uVar3,0);
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
LAB_031f91a8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


