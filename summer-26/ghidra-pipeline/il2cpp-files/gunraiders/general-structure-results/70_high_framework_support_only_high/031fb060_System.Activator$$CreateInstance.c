/*
FUNCTION_NAME: System.Activator$$CreateInstance
ENTRY_POINT: 031fb060
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_Activator__CreateInstance(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x29;
  undefined4 uStack000000000000001c;
  
  if (param_1 != param_3) {
thunk_FUN_01c5d748:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748();
  }
  uVar10 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x29 + 0x10);
  uVar3 = *(undefined4 *)(unaff_x19 + 0x14);
  FUN_031f7d08();
  lVar4 = FUN_031ec42c(uVar10,uVar7,uVar1,uVar8,uVar2,uVar9,uVar3,param_2);
  lVar5 = FUN_031f7c3c();
  if (lVar5 == 0) goto LAB_031fb240;
  FUN_031fa928(lVar5,*(undefined4 *)(unaff_x19 + 0x14),lVar4);
  *(undefined4 *)(unaff_x22 + 0x30) = 1;
  if (lVar4 == 0) goto LAB_031fb240;
  lVar5 = *(long *)(lVar4 + 0x20);
  *(long *)(unaff_x22 + 0x60) = lVar5;
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(lVar4 + 0x28);
  if (lVar5 == 0) goto LAB_031fb240;
  *(int *)(unaff_x22 + 0x5c) = (int)*(undefined8 *)(lVar5 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(lVar4 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(lVar4 + 0x30);
  if (*(long *)(unaff_x29 + 0x40) == 0) goto LAB_031fb240;
  plVar6 = (long *)FUN_031fab40();
  if (plVar6 == (long *)0x0) {
LAB_031fb148:
    *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x19 + 0x18);
    if (unaff_x21 == 0) goto LAB_031fb240;
    *(undefined4 *)(unaff_x21 + 0x10) = 2;
    *(undefined4 *)(unaff_x22 + 0x38) = 0;
  }
  else {
    if (*plVar6 !=
        *(long *)VoxelBusters_EssentialKit_NetworkServicesUnitySettings_PingTestSettings_TypeInfo)
    goto thunk_FUN_01c5d748;
    if ((char)plVar6[2] != '\0') goto LAB_031fb148;
    if (unaff_x21 == 0) goto LAB_031fb240;
    *(undefined4 *)(unaff_x21 + 0x10) = 3;
    *(undefined4 *)(unaff_x21 + 0x20) = 2;
    *(undefined4 *)(unaff_x22 + 0x38) = 2;
    if ((int)plVar6[6] == 2) {
      *(undefined4 *)(unaff_x21 + 0x1c) = 3;
      *(undefined4 *)(unaff_x22 + 0x34) = 3;
    }
    else {
      if ((int)plVar6[6] != 1) {
        uVar7 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
        uVar8 = FUN_01c5d2fc(uVar7,1);
        FUN_019b2708(plVar6);
        uStack000000000000001c = (undefined4)plVar6[6];
        uVar7 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_36_0_TypeInfo);
        uVar7 = thunk_FUN_01c49334(uVar7,&stack0x0000001c);
        uVar7 = FUN_03307544(uVar7,0);
        FUN_019b2708(uVar8);
        FUN_019b8dd4(uVar8,uVar7);
        FUN_019b8e08(uVar8,0,uVar7);
        uVar7 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_40_0_TypeInfo);
        uVar7 = FUN_03315920(uVar7,uVar8,0);
        thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
        uVar8 = thunk_FUN_01c496e0();
        FUN_031dce5c(uVar8,uVar7,0);
        uVar7 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_50_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar8,uVar7);
      }
      lVar5 = plVar6[5];
      *(undefined4 *)(unaff_x21 + 0x1c) = 2;
      *(long *)(unaff_x21 + 0x28) = lVar5;
      *(undefined4 *)(unaff_x22 + 0x34) = 2;
    }
  }
  *(undefined4 *)(unaff_x21 + 0x14) = 1;
  uVar7 = FUN_031ec280(lVar4,unaff_x21 + 0x110,unaff_x21 + 0x108,0);
  *(undefined8 *)(unaff_x21 + 0xd8) = uVar7;
  if (*(long *)(unaff_x29 + 0x10) != 0) {
    lVar5 = FUN_031f4a9c(*(long *)(unaff_x29 + 0x10),(long)*(int *)(unaff_x19 + 0x14),0);
    *(long *)(unaff_x21 + 0x58) = lVar5;
    if (lVar5 == *(long *)(unaff_x29 + 0x20)) {
      *(undefined4 *)(unaff_x21 + 0x24) = 1;
    }
    *(undefined8 *)(unaff_x21 + 0x40) = *(undefined8 *)(unaff_x19 + 0x18);
    uVar7 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined4 *)(unaff_x21 + 0x50) = 0;
    *(undefined8 *)(unaff_x21 + 0x48) = uVar7;
    if (*(long *)(unaff_x29 + 0x10) != 0) {
      FUN_031f2bec();
      return;
    }
  }
LAB_031fb240:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


