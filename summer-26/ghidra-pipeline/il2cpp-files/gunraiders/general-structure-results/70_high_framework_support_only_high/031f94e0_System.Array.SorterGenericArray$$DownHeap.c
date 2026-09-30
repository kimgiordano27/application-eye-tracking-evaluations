/*
FUNCTION_NAME: System.Array.SorterGenericArray$$DownHeap
ENTRY_POINT: 031f94e0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_SorterGenericArray__DownHeap(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  bool in_ZR;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uStack0000000000000000;
  undefined4 in_stack_00000008;
  
  if (in_ZR) {
    uVar6 = 3;
  }
  else {
    uVar6 = 2;
  }
  *(undefined4 *)(unaff_x20 + 0x24) = uVar6;
  *(undefined4 *)(unaff_x20 + 0x14) = 2;
  uStack0000000000000000 = 0;
  FUN_031e8cc4(*(undefined4 *)(unaff_x21 + 0x28),*(undefined8 *)(unaff_x21 + 0x30),
               *(undefined8 *)(unaff_x19 + 0x10));
  *(undefined4 *)(unaff_x20 + 0x50) = 0;
  uVar2 = *(uint *)(unaff_x21 + 0x14);
  *(uint *)(unaff_x20 + 0x80) = uVar2;
  lVar8 = *(long *)(unaff_x21 + 0x18);
  *(long *)(unaff_x20 + 0x88) = lVar8;
  *(undefined8 *)(unaff_x20 + 0x98) = *(undefined8 *)(unaff_x21 + 0x20);
  if (5 < *(uint *)(unaff_x21 + 0x40)) {
    uVar4 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
    uVar4 = FUN_01c5d2fc(uVar4,1);
    FUN_019b2708();
    in_stack_00000008 = *(undefined4 *)(unaff_x21 + 0x40);
    uVar5 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_43_0_TypeInfo);
    uVar5 = thunk_FUN_01c49334(uVar5,&stack0x00000008);
    uVar5 = FUN_03307544(uVar5,0);
    FUN_019b2708(uVar4);
    FUN_019b8dd4(uVar4,uVar5);
    FUN_019b8e08(uVar4,0,uVar5);
    uVar5 = thunk_FUN_01c273e8(OVRNetwork_FrameHeader_TypeInfo);
    uVar4 = FUN_03315920(uVar5,uVar4,0);
    thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
    uVar5 = thunk_FUN_01c496e0();
    FUN_031dce5c(uVar5,uVar4,0);
    uVar4 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_44_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar5,uVar4);
  }
  uVar3 = 1 << (ulong)(*(uint *)(unaff_x21 + 0x40) & 0x1f);
  if ((uVar3 & 9) == 0) {
    if ((uVar3 & 0x12) == 0) {
      if ((int)uVar2 < 1) {
        iVar7 = 1;
      }
      else {
        if (lVar8 == 0) goto LAB_031f9700;
        uVar9 = 0;
        iVar7 = 1;
        do {
          if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_031f9704;
          lVar1 = uVar9 * 4;
          uVar9 = uVar9 + 1;
          iVar7 = *(int *)(lVar8 + 0x20 + lVar1) * iVar7;
        } while (uVar2 != uVar9);
      }
      *(int *)(unaff_x22 + 0x48) = iVar7;
      *(undefined4 *)(unaff_x20 + 0x18) = 3;
    }
    else {
      if (lVar8 == 0) goto LAB_031f9700;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_031f9704;
      *(undefined4 *)(unaff_x22 + 0x48) = *(undefined4 *)(lVar8 + 0x20);
      *(undefined4 *)(unaff_x20 + 0x18) = 2;
    }
LAB_031f96c0:
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_031f9700;
    FUN_031f79ec();
  }
  else {
    if (lVar8 == 0) goto LAB_031f9700;
    if (*(int *)(lVar8 + 0x18) == 0) {
LAB_031f9704:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    *(undefined4 *)(unaff_x22 + 0x48) = *(undefined4 *)(lVar8 + 0x20);
    *(undefined4 *)(unaff_x20 + 0x18) = 1;
    uVar6 = *(undefined4 *)(unaff_x20 + 0x7c);
    if (*(int *)(*(long *)
                  VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar9 = FUN_031ec7c8(uVar6,0);
    if ((uVar9 & 1) == 0) goto LAB_031f96c0;
    lVar8 = *(long *)(unaff_x21 + 0x20);
    if (lVar8 == 0) goto LAB_031f9700;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_031f9704;
    if (*(int *)(lVar8 + 0x20) != 0) goto LAB_031f96c0;
    FUN_031fb3c8();
    FUN_031fa4c4();
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_031f9700;
    FUN_031f2bec();
    *(undefined4 *)(unaff_x20 + 0x10) = 4;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    FUN_031f2bec();
    return;
  }
LAB_031f9700:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


