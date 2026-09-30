/*
FUNCTION_NAME: System.LocalDataStoreMgr$$AllocateNamedDataSlot
ENTRY_POINT: 031fac3c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_LocalDataStoreMgr__AllocateNamedDataSlot(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined4 uStack000000000000000c;
  
  if (*param_1 != param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748();
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_031fae10;
  uVar1 = FUN_031e9238();
  lVar2 = FUN_031ec394(*(undefined8 *)(unaff_x19 + 0x18),uVar1,*(undefined8 *)(unaff_x19 + 0x28),
                       *(undefined8 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x19 + 0x14));
  lVar3 = FUN_031f7c3c();
  if (lVar3 == 0) goto LAB_031fae10;
  FUN_031fa928(lVar3,*(undefined4 *)(unaff_x19 + 0x14),lVar2);
  *(undefined4 *)(unaff_x22 + 0x30) = 1;
  if (lVar2 == 0) goto LAB_031fae10;
  lVar3 = *(long *)(lVar2 + 0x20);
  *(long *)(unaff_x22 + 0x60) = lVar3;
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(lVar2 + 0x28);
  if (lVar3 == 0) goto LAB_031fae10;
  *(int *)(unaff_x22 + 0x5c) = (int)*(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(lVar2 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(lVar2 + 0x30);
  if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_031fae10;
  plVar4 = (long *)FUN_031fab40();
  if (plVar4 == (long *)0x0) {
LAB_031fad24:
    *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x19 + 0x18);
    if (unaff_x21 == 0) goto LAB_031fae10;
    *(undefined4 *)(unaff_x21 + 0x10) = 2;
    *(undefined4 *)(unaff_x22 + 0x38) = 0;
  }
  else {
    if (*plVar4 !=
        *(long *)VoxelBusters_EssentialKit_NetworkServicesUnitySettings_PingTestSettings_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    if ((char)plVar4[2] != '\0') goto LAB_031fad24;
    if (unaff_x21 == 0) goto LAB_031fae10;
    *(undefined4 *)(unaff_x21 + 0x10) = 3;
    *(undefined4 *)(unaff_x21 + 0x20) = 2;
    *(undefined4 *)(unaff_x22 + 0x38) = 2;
    if ((int)plVar4[6] == 2) {
      *(undefined4 *)(unaff_x21 + 0x1c) = 3;
    }
    else {
      if ((int)plVar4[6] != 1) {
        uVar1 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
        uVar5 = FUN_01c5d2fc(uVar1,1);
        FUN_019b2708(plVar4);
        uStack000000000000000c = (undefined4)plVar4[6];
        uVar1 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_36_0_TypeInfo);
        uVar1 = thunk_FUN_01c49334(uVar1,&stack0x0000000c);
        uVar1 = FUN_03307544(uVar1,0);
        FUN_019b2708(uVar5);
        FUN_019b8dd4(uVar5,uVar1);
        FUN_019b8e08(uVar5,0,uVar1);
        uVar1 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_40_0_TypeInfo);
        uVar1 = FUN_03315920(uVar1,uVar5,0);
        thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
        uVar5 = thunk_FUN_01c496e0();
        FUN_031dce5c(uVar5,uVar1,0);
        uVar1 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_49_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar5,uVar1);
      }
      lVar3 = plVar4[5];
      *(undefined4 *)(unaff_x21 + 0x1c) = 2;
      *(long *)(unaff_x21 + 0x28) = lVar3;
    }
    *(undefined4 *)(unaff_x22 + 0x34) = 2;
  }
  *(undefined4 *)(unaff_x21 + 0x14) = 1;
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    uVar1 = FUN_031f4a9c(*(long *)(unaff_x20 + 0x10),(long)*(int *)(unaff_x19 + 0x14),0);
    *(undefined8 *)(unaff_x21 + 0x58) = uVar1;
    uVar1 = FUN_031ec280(lVar2,unaff_x21 + 0x110,unaff_x21 + 0x108,0);
    *(undefined8 *)(unaff_x21 + 0xd8) = uVar1;
    if (*(long *)(unaff_x21 + 0x58) == *(long *)(unaff_x20 + 0x20)) {
      *(undefined4 *)(unaff_x21 + 0x24) = 1;
    }
    *(undefined8 *)(unaff_x21 + 0x40) = *(undefined8 *)(unaff_x19 + 0x18);
    uVar1 = *(undefined8 *)(lVar2 + 0x18);
    *(undefined4 *)(unaff_x21 + 0x50) = 0;
    *(undefined8 *)(unaff_x21 + 0x48) = uVar1;
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      FUN_031f2bec();
      return;
    }
  }
LAB_031fae10:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


