/*
FUNCTION_NAME: System.Array.SorterGenericArray$$InsertionSort
ENTRY_POINT: 031f903c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_Array_SorterGenericArray__InsertionSort(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined4 in_stack_00000008;
  
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
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar7);
      }
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
        lVar3 = FUN_031f7de4();
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x50) = 0;
          lVar3 = FUN_031f7de4();
          if ((*(long *)(unaff_x19 + 0x90) != 0) && (lVar3 != 0)) {
            *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(*(long *)(unaff_x19 + 0x90) + 0x18);
            lVar3 = FUN_031f7de4();
            if (lVar3 != 0) {
              if (unaff_x20 == 0) {
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
                if (*(int *)(unaff_x20 + 0x30) == 2) {
                  lVar3 = FUN_031f7de4();
                  if (lVar3 == 0) goto LAB_031f91a8;
                  uVar6 = 3;
                }
                else {
                  if (*(int *)(unaff_x20 + 0x30) != 1) {
                    uVar4 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
                    uVar4 = FUN_01c5d2fc(uVar4,1);
                    FUN_019b2708();
                    in_stack_00000008 = *(undefined4 *)(unaff_x20 + 0x30);
                    uVar5 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_36_0_TypeInfo);
                    uVar5 = thunk_FUN_01c49334(uVar5,&stack0x00000008);
                    uVar5 = FUN_03307544(uVar5,0);
                    FUN_019b2708(uVar4);
                    FUN_019b8dd4(uVar4,uVar5);
                    FUN_019b8e08(uVar4,0,uVar5);
                    uVar5 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_40_0_TypeInfo);
                    uVar4 = FUN_03315920(uVar5,uVar4,0);
                    thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
                    uVar5 = thunk_FUN_01c496e0();
                    FUN_031dce5c(uVar5,uVar4,0);
                    uVar4 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_41_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d37c(uVar5,uVar4);
                  }
                  lVar3 = FUN_031f7de4();
                  if (lVar3 == 0) goto LAB_031f91a8;
                  *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
                  lVar3 = FUN_031f7de4();
                  if (lVar3 == 0) goto LAB_031f91a8;
                  uVar6 = 2;
                }
                *(undefined4 *)(lVar3 + 0x1c) = uVar6;
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
LAB_031f91a8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


