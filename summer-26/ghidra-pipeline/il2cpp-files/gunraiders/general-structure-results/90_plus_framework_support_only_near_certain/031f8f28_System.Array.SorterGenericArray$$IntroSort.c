/*
FUNCTION_NAME: System.Array.SorterGenericArray$$IntroSort
ENTRY_POINT: 031f8f28
PROGRAM: gunraiders-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_Array_SorterGenericArray__IntroSort(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  long unaff_x19;
  undefined4 in_stack_00000008;
  
  lVar3 = FUN_031f7de4();
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x7c) = 0;
    *(undefined4 *)(lVar3 + 0x80) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x4d) = 0;
    *(undefined1 *)(lVar3 + 0x78) = 0;
    *(undefined8 *)(lVar3 + 0xd0) = 0;
    *(undefined8 *)(lVar3 + 0xd8) = 0;
    *(undefined8 *)(lVar3 + 200) = 0;
    *(undefined1 *)(lVar3 + 0xe0) = 0;
    *(undefined8 *)(lVar3 + 0xe8) = 0;
    *(undefined8 *)(lVar3 + 0xf0) = 0;
    *(undefined1 *)(lVar3 + 0x100) = 0;
    *(undefined8 *)(lVar3 + 0xf8) = 0;
    *(undefined4 *)(lVar3 + 0x118) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x70) = 0;
    *(undefined8 *)(lVar3 + 0x68) = 0;
    *(undefined8 *)(lVar3 + 0x90) = 0;
    *(undefined8 *)(lVar3 + 0x88) = 0;
    *(undefined8 *)(lVar3 + 0xa0) = 0;
    *(undefined8 *)(lVar3 + 0x98) = 0;
    *(undefined8 *)(lVar3 + 0xb0) = 0;
    *(undefined8 *)(lVar3 + 0xa8) = 0;
    *(undefined8 *)(lVar3 + 0xb9) = 0;
    *(undefined8 *)(lVar3 + 0xb1) = 0;
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined8 *)(lVar3 + 0x110) = 0;
    lVar3 = FUN_031f7de4();
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x10) = 2;
      lVar3 = FUN_031f7de4();
      if (((*(long *)(unaff_x19 + 0x90) != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) &&
         (uVar4 = FUN_031f4a9c(*(long *)(unaff_x19 + 0x10),
                               (long)*(int *)(*(long *)(unaff_x19 + 0x90) + 0x10),0), lVar3 != 0)) {
        *(undefined8 *)(lVar3 + 0x58) = uVar4;
        lVar3 = FUN_031f7de4();
        if (lVar3 != 0) {
          if (*(long *)(lVar3 + 0x58) == *(long *)(unaff_x19 + 0x20)) {
            lVar3 = FUN_031f7de4();
            if (lVar3 == 0) goto LAB_031f91a8;
            *(undefined4 *)(lVar3 + 0x24) = 1;
          }
          lVar3 = FUN_031f7de4();
          if (lVar3 != 0) {
            *(undefined4 *)(lVar3 + 0x14) = 1;
            if (*(long *)(unaff_x19 + 0x40) != 0) {
              plVar5 = (long *)FUN_031fa42c();
              if (plVar5 != (long *)0x0) {
                if (*plVar5 !=
                    *(long *)
                     VoxelBusters_EssentialKit_NetworkServicesUnitySettings_PingTestSettings_TypeInfo
                   ) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(plVar5);
                }
              }
              lVar3 = FUN_031f7de4();
              if ((*(long *)(unaff_x19 + 0x90) != 0) && (lVar3 != 0)) {
                *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(*(long *)(unaff_x19 + 0x90) + 0x18);
                lVar3 = FUN_031f7de4();
                puVar2 = 
                VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
                ;
                puVar1 = PTR_DAT_04236820;
                if (lVar3 != 0) {
                  *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_04236820;
                  lVar3 = FUN_031f7de4();
                  lVar8 = *(long *)puVar2;
                  if (*(int *)(lVar8 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(lVar8);
                  }
                  if (lVar3 != 0) {
                    *(undefined8 *)(lVar3 + 0x48) =
                         *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
                    lVar3 = FUN_031f7de4();
                    if (lVar3 != 0) {
                      *(undefined4 *)(lVar3 + 0x50) = 0;
                      lVar3 = FUN_031f7de4();
                      if ((*(long *)(unaff_x19 + 0x90) != 0) && (lVar3 != 0)) {
                        *(undefined8 *)(lVar3 + 0x38) =
                             *(undefined8 *)(*(long *)(unaff_x19 + 0x90) + 0x18);
                        lVar3 = FUN_031f7de4();
                        if (lVar3 != 0) {
                          if (plVar5 == (long *)0x0) {
                            *(undefined4 *)(lVar3 + 0x10) = 2;
                            lVar3 = FUN_031f7de4();
                            if (lVar3 == 0) goto LAB_031f91a8;
                            *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)puVar1;
                          }
                          else {
                            *(undefined4 *)(lVar3 + 0x10) = 3;
                            lVar3 = FUN_031f7de4();
                            if (lVar3 == 0) goto LAB_031f91a8;
                            *(undefined4 *)(lVar3 + 0x20) = 1;
                            if ((int)plVar5[6] == 2) {
                              lVar3 = FUN_031f7de4();
                              if (lVar3 == 0) goto LAB_031f91a8;
                              uVar7 = 3;
                            }
                            else {
                              if ((int)plVar5[6] != 1) {
                                uVar4 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
                                uVar4 = FUN_01c5d2fc(uVar4,1);
                                FUN_019b2708(plVar5);
                                in_stack_00000008 = (undefined4)plVar5[6];
                                uVar6 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_36_0_TypeInfo);
                                uVar6 = thunk_FUN_01c49334(uVar6,&stack0x00000008);
                                uVar6 = FUN_03307544(uVar6,0);
                                FUN_019b2708(uVar4);
                                FUN_019b8dd4(uVar4,uVar6);
                                FUN_019b8e08(uVar4,0,uVar6);
                                uVar6 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_40_0_TypeInfo);
                                uVar4 = FUN_03315920(uVar6,uVar4,0);
                                thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
                                uVar6 = thunk_FUN_01c496e0();
                                FUN_031dce5c(uVar6,uVar4,0);
                                uVar4 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_41_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
                                FUN_01c5d37c(uVar6,uVar4);
                              }
                              lVar3 = FUN_031f7de4();
                              if (lVar3 == 0) goto LAB_031f91a8;
                              *(long *)(lVar3 + 0x28) = plVar5[5];
                              lVar3 = FUN_031f7de4();
                              if (lVar3 == 0) goto LAB_031f91a8;
                              uVar7 = 2;
                            }
                            *(undefined4 *)(lVar3 + 0x1c) = uVar7;
                          }
                          lVar3 = *(long *)(unaff_x19 + 0x10);
                          uVar4 = FUN_031f7de4();
                          if (lVar3 != 0) {
                            FUN_031f2bec(lVar3,uVar4,0);
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
LAB_031f91a8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


