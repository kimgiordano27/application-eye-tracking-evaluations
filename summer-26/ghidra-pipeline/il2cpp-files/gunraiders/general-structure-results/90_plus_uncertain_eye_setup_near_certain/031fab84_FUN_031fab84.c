/*
FUNCTION_NAME: FUN_031fab84
ENTRY_POINT: 031fab84
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_031fab84(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  undefined4 local_34;
  
  if ((DAT_045326f1 & 1) == 0) {
    FUN_01c5d288(System_Linq_Expressions_Interpreter_NegateInstruction_NegateInt16_TypeInfo);
    FUN_01c5d288(VoxelBusters_EssentialKit_NetworkServicesUnitySettings_PingTestSettings_TypeInfo);
    DAT_045326f1 = 1;
  }
  lVar1 = FUN_031faa9c(param_1);
  if ((lVar1 == 0) || (*(long *)(param_1 + 0x40) == 0)) goto LAB_031fae10;
  lVar10 = *(long *)(lVar1 + 0x80);
  FUN_031f79ec(*(long *)(param_1 + 0x40),lVar1);
  if (param_2 == 0) goto LAB_031fae10;
  if (*(int *)(param_2 + 0x10) == 2) {
    plVar3 = (long *)FUN_031f7b98(param_1);
  }
  else {
    if (*(int *)(param_2 + 0x10) == 3) {
      piVar11 = (int *)(param_2 + 0x30);
      if (*piVar11 < 1) {
        uVar4 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
        uVar8 = FUN_01c5d2fc(uVar4,1);
        FUN_019b2708(param_2);
        uVar4 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        lVar2 = FUN_031f7d08(param_1);
        if (lVar2 == 0) goto LAB_031fae10;
        plVar3 = (long *)FUN_031faa28(lVar2,*piVar11);
        if (plVar3 != (long *)0x0) {
          if (*plVar3 !=
              *(long *)System_Linq_Expressions_Interpreter_NegateInstruction_NegateInt16_TypeInfo) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar3);
          }
          goto LAB_031fac64;
        }
        uVar4 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
        uVar8 = FUN_01c5d2fc(uVar4,1);
        FUN_019b2708(param_2);
        uVar4 = FUN_032cf308(piVar11,0);
        FUN_019b2708(param_2);
        uVar9 = *(undefined8 *)(param_2 + 0x18);
        uVar6 = thunk_FUN_01c273e8(PTR_DAT_04231e50);
        uVar4 = FUN_03152fb8(uVar4,uVar6,uVar9,0);
      }
      FUN_019b2708(uVar8);
      FUN_019b8dd4(uVar8,uVar4);
      FUN_019b8e08(uVar8,0,uVar4);
      puVar7 = System_Linq_Expressions_Interpreter_NegateInstruction_NegateInt32_TypeInfo;
      goto LAB_031faecc;
    }
    plVar3 = (long *)0x0;
  }
LAB_031fac64:
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_031fae10;
  uVar4 = FUN_031e9238(*(long *)(param_1 + 0x10),plVar3,*(undefined8 *)(param_2 + 0x18),0);
  lVar2 = FUN_031ec394(*(undefined8 *)(param_2 + 0x18),uVar4,*(undefined8 *)(param_2 + 0x28),
                       *(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x14),plVar3,0);
  lVar5 = FUN_031f7c3c(param_1);
  if (lVar5 == 0) goto LAB_031fae10;
  FUN_031fa928(lVar5,*(undefined4 *)(param_2 + 0x14),lVar2);
  *(undefined4 *)(lVar1 + 0x30) = 1;
  if (lVar2 == 0) goto LAB_031fae10;
  lVar5 = *(long *)(lVar2 + 0x20);
  *(long *)(lVar1 + 0x60) = lVar5;
  *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(lVar2 + 0x28);
  if (lVar5 == 0) goto LAB_031fae10;
  *(int *)(lVar1 + 0x5c) = (int)*(undefined8 *)(lVar5 + 0x18);
  *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar2 + 0x38);
  *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar2 + 0x30);
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_031fae10;
  plVar3 = (long *)FUN_031fab40();
  if (plVar3 == (long *)0x0) {
LAB_031fad24:
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_2 + 0x18);
    if (lVar10 == 0) goto LAB_031fae10;
    *(undefined4 *)(lVar10 + 0x10) = 2;
    *(undefined4 *)(lVar1 + 0x38) = 0;
  }
  else {
    if (*plVar3 !=
        *(long *)VoxelBusters_EssentialKit_NetworkServicesUnitySettings_PingTestSettings_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    if ((char)plVar3[2] != '\0') goto LAB_031fad24;
    if (lVar10 == 0) goto LAB_031fae10;
    *(undefined4 *)(lVar10 + 0x10) = 3;
    *(undefined4 *)(lVar10 + 0x20) = 2;
    *(undefined4 *)(lVar1 + 0x38) = 2;
    if ((int)plVar3[6] == 2) {
      *(undefined4 *)(lVar10 + 0x1c) = 3;
    }
    else {
      if ((int)plVar3[6] != 1) {
        uVar4 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
        uVar8 = FUN_01c5d2fc(uVar4,1);
        FUN_019b2708(plVar3);
        local_34 = (undefined4)plVar3[6];
        uVar4 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_36_0_TypeInfo);
        uVar4 = thunk_FUN_01c49334(uVar4,&local_34);
        uVar4 = FUN_03307544(uVar4,0);
        FUN_019b2708(uVar8);
        FUN_019b8dd4(uVar8,uVar4);
        FUN_019b8e08(uVar8,0,uVar4);
        puVar7 = OVRPlugin_OVRP_1_40_0_TypeInfo;
LAB_031faecc:
        uVar4 = thunk_FUN_01c273e8(puVar7);
        uVar4 = FUN_03315920(uVar4,uVar8,0);
        thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
        uVar8 = thunk_FUN_01c496e0();
        FUN_031dce5c(uVar8,uVar4,0);
        uVar4 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_49_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar8,uVar4);
      }
      lVar5 = plVar3[5];
      *(undefined4 *)(lVar10 + 0x1c) = 2;
      *(long *)(lVar10 + 0x28) = lVar5;
    }
    *(undefined4 *)(lVar1 + 0x34) = 2;
  }
  *(undefined4 *)(lVar10 + 0x14) = 1;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar4 = FUN_031f4a9c(*(long *)(param_1 + 0x10),(long)*(int *)(param_2 + 0x14),0);
    *(undefined8 *)(lVar10 + 0x58) = uVar4;
    uVar4 = FUN_031ec280(lVar2,lVar10 + 0x110,lVar10 + 0x108,0);
    *(undefined8 *)(lVar10 + 0xd8) = uVar4;
    if (*(long *)(lVar10 + 0x58) == *(long *)(param_1 + 0x20)) {
      *(undefined4 *)(lVar10 + 0x24) = 1;
    }
    *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)(param_2 + 0x18);
    uVar4 = *(undefined8 *)(lVar2 + 0x18);
    *(undefined4 *)(lVar10 + 0x50) = 0;
    *(undefined8 *)(lVar10 + 0x48) = uVar4;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_031f2bec(*(long *)(param_1 + 0x10),lVar10,0);
      return;
    }
  }
LAB_031fae10:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


