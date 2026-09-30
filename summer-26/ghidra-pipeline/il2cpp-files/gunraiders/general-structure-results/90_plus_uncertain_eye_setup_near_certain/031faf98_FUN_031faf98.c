/*
FUNCTION_NAME: FUN_031faf98
ENTRY_POINT: 031faf98
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_031faf98(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  int *piVar14;
  undefined8 uVar15;
  long *local_70;
  undefined4 local_64;
  
  if ((DAT_045326f3 & 1) == 0) {
    FUN_01c5d288(System_Linq_Expressions_Interpreter_NegateInstruction_NegateInt16_TypeInfo);
    FUN_01c5d288(VoxelBusters_EssentialKit_NetworkServicesUnitySettings_PingTestSettings_TypeInfo);
    DAT_045326f3 = 1;
  }
  lVar2 = FUN_031faa9c(param_1);
  if ((lVar2 == 0) || (*(long *)(param_1 + 0x40) == 0)) goto LAB_031fb240;
  lVar12 = *(long *)(lVar2 + 0x80);
  FUN_031f79ec(*(long *)(param_1 + 0x40),lVar2);
  if (param_2 == 0) goto LAB_031fb240;
  if (*(int *)(param_2 + 0x10) == 4) {
    local_70 = (long *)FUN_031f7b98(param_1);
  }
  else {
    if (*(int *)(param_2 + 0x10) == 5) {
      piVar14 = (int *)(param_2 + 0x48);
      if (*piVar14 < 1) {
        uVar7 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
        uVar10 = FUN_01c5d2fc(uVar7,1);
        FUN_019b2708(param_2);
        uVar7 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        lVar3 = FUN_031f7d08(param_1);
        if (lVar3 == 0) goto LAB_031fb240;
        local_70 = (long *)FUN_031faa28(lVar3,*piVar14);
        if (local_70 != (long *)0x0) {
          if (*local_70 !=
              *(long *)System_Linq_Expressions_Interpreter_NegateInstruction_NegateInt16_TypeInfo)
          goto thunk_FUN_01c5d748;
          goto LAB_031fb080;
        }
        uVar7 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
        uVar10 = FUN_01c5d2fc(uVar7,1);
        FUN_019b2708(param_2);
        uVar7 = FUN_032cf308(piVar14,0);
        FUN_019b2708(param_2);
        uVar11 = *(undefined8 *)(param_2 + 0x18);
        uVar8 = thunk_FUN_01c273e8(PTR_DAT_04231e50);
        uVar7 = FUN_03152fb8(uVar7,uVar8,uVar11,0);
      }
      FUN_019b2708(uVar10);
      FUN_019b8dd4(uVar10,uVar7);
      FUN_019b8e08(uVar10,0,uVar7);
      puVar9 = 
      VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass21_0_TypeInfo
      ;
      goto LAB_031fb2fc;
    }
    local_70 = (long *)0x0;
  }
LAB_031fb080:
  uVar15 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  uVar11 = *(undefined8 *)(param_2 + 0x40);
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = FUN_031f7d08(param_1);
  lVar3 = FUN_031ec42c(uVar15,uVar7,uVar8,uVar10,uVar11,uVar13,uVar1,local_70,uVar4,0);
  lVar5 = FUN_031f7c3c(param_1);
  if (lVar5 == 0) goto LAB_031fb240;
  FUN_031fa928(lVar5,*(undefined4 *)(param_2 + 0x14),lVar3);
  *(undefined4 *)(lVar2 + 0x30) = 1;
  if (lVar3 == 0) goto LAB_031fb240;
  lVar5 = *(long *)(lVar3 + 0x20);
  *(long *)(lVar2 + 0x60) = lVar5;
  *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)(lVar3 + 0x28);
  if (lVar5 == 0) goto LAB_031fb240;
  *(int *)(lVar2 + 0x5c) = (int)*(undefined8 *)(lVar5 + 0x18);
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(lVar3 + 0x38);
  *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar3 + 0x30);
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_031fb240;
  plVar6 = (long *)FUN_031fab40();
  if (plVar6 == (long *)0x0) {
LAB_031fb148:
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x18);
    if (lVar12 == 0) goto LAB_031fb240;
    *(undefined4 *)(lVar12 + 0x10) = 2;
    *(undefined4 *)(lVar2 + 0x38) = 0;
  }
  else {
    if (*plVar6 !=
        *(long *)VoxelBusters_EssentialKit_NetworkServicesUnitySettings_PingTestSettings_TypeInfo) {
thunk_FUN_01c5d748:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    if ((char)plVar6[2] != '\0') goto LAB_031fb148;
    if (lVar12 == 0) goto LAB_031fb240;
    *(undefined4 *)(lVar12 + 0x10) = 3;
    *(undefined4 *)(lVar12 + 0x20) = 2;
    *(undefined4 *)(lVar2 + 0x38) = 2;
    if ((int)plVar6[6] == 2) {
      *(undefined4 *)(lVar12 + 0x1c) = 3;
      *(undefined4 *)(lVar2 + 0x34) = 3;
    }
    else {
      if ((int)plVar6[6] != 1) {
        uVar7 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
        uVar10 = FUN_01c5d2fc(uVar7,1);
        FUN_019b2708(plVar6);
        local_64 = (undefined4)plVar6[6];
        uVar7 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_36_0_TypeInfo);
        uVar7 = thunk_FUN_01c49334(uVar7,&local_64);
        uVar7 = FUN_03307544(uVar7,0);
        FUN_019b2708(uVar10);
        FUN_019b8dd4(uVar10,uVar7);
        FUN_019b8e08(uVar10,0,uVar7);
        puVar9 = OVRPlugin_OVRP_1_40_0_TypeInfo;
LAB_031fb2fc:
        uVar7 = thunk_FUN_01c273e8(puVar9);
        uVar7 = FUN_03315920(uVar7,uVar10,0);
        thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
        uVar10 = thunk_FUN_01c496e0();
        FUN_031dce5c(uVar10,uVar7,0);
        uVar7 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_50_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar10,uVar7);
      }
      lVar5 = plVar6[5];
      *(undefined4 *)(lVar12 + 0x1c) = 2;
      *(long *)(lVar12 + 0x28) = lVar5;
      *(undefined4 *)(lVar2 + 0x34) = 2;
    }
  }
  *(undefined4 *)(lVar12 + 0x14) = 1;
  uVar7 = FUN_031ec280(lVar3,lVar12 + 0x110,lVar12 + 0x108,0);
  *(undefined8 *)(lVar12 + 0xd8) = uVar7;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = FUN_031f4a9c(*(long *)(param_1 + 0x10),(long)*(int *)(param_2 + 0x14),0);
    *(long *)(lVar12 + 0x58) = lVar2;
    if (lVar2 == *(long *)(param_1 + 0x20)) {
      *(undefined4 *)(lVar12 + 0x24) = 1;
    }
    *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)(param_2 + 0x18);
    uVar7 = *(undefined8 *)(lVar3 + 0x18);
    *(undefined4 *)(lVar12 + 0x50) = 0;
    *(undefined8 *)(lVar12 + 0x48) = uVar7;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_031f2bec(*(long *)(param_1 + 0x10),lVar12,0);
      return;
    }
  }
LAB_031fb240:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


