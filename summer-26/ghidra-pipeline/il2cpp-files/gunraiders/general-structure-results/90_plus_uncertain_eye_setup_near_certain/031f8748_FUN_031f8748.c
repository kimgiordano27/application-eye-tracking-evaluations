/*
FUNCTION_NAME: FUN_031f8748
ENTRY_POINT: 031f8748
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


void FUN_031f8748(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((DAT_045326ee & 1) == 0) {
    FUN_01c5d288(
                System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_ToStringClass_TypeInfo
                );
    FUN_01c5d288(System_ComponentModel_NestedContainer_Site_TypeInfo);
    FUN_01c5d288(VoxelBusters_EssentialKit_NetworkServicesUnitySettings_PingTestSettings_TypeInfo);
    DAT_045326ee = 1;
  }
  lVar6 = *(long *)(param_1 + 0x78);
  if (lVar6 == 0) {
    lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_ToStringClass_TypeInfo
                              );
    FUN_031ea244(lVar6,0);
    *(long *)(param_1 + 0x78) = lVar6;
    if (lVar6 == 0) goto LAB_031f8994;
  }
  FUN_031ea2c4(lVar6,param_1,0);
  if (*(long *)(param_1 + 0x78) == 0) goto LAB_031f8994;
  FUN_031ea308(*(long *)(param_1 + 0x78),0);
  lVar6 = FUN_031f7c3c(param_1);
  if ((*(long *)(param_1 + 0x78) == 0) || (lVar6 == 0)) goto LAB_031f8994;
  plVar1 = (long *)FUN_031faa28(lVar6,*(undefined4 *)(*(long *)(param_1 + 0x78) + 0x14));
  if (plVar1 == (long *)0x0) {
    uVar3 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
    uVar4 = FUN_01c5d2fc(uVar3,1);
    lVar6 = *(long *)(param_1 + 0x78);
    FUN_019b2708(lVar6);
    local_24 = *(undefined4 *)(lVar6 + 0x14);
    uVar3 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
    uVar3 = thunk_FUN_01c49334(uVar3,&local_24);
LAB_031f89d8:
    FUN_019b2708(uVar4);
    FUN_019b8dd4(uVar4,uVar3);
    FUN_019b8e08(uVar4,0,uVar3);
    uVar3 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_34_0_TypeInfo);
    uVar3 = FUN_03315920(uVar3,uVar4,0);
    thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
    uVar4 = thunk_FUN_01c496e0();
    FUN_031dce5c(uVar4,uVar3,0);
    uVar3 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_35_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar4,uVar3);
  }
  plVar2 = plVar1;
  if (*plVar1 != *(long *)System_ComponentModel_NestedContainer_Site_TypeInfo) {
LAB_031f8a58:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748(plVar2);
  }
  lVar6 = FUN_031faa9c(param_1);
  if ((lVar6 == 0) || (*(long *)(param_1 + 0x40) == 0)) goto LAB_031f8994;
  lVar7 = *(long *)(lVar6 + 0x80);
  FUN_031f79ec(*(long *)(param_1 + 0x40),lVar6);
  *(undefined4 *)(lVar6 + 0x30) = 1;
  lVar5 = plVar1[4];
  *(long *)(lVar6 + 0x60) = lVar5;
  *(long *)(lVar6 + 0x70) = plVar1[7];
  *(long *)(lVar6 + 0x78) = plVar1[6];
  *(long *)(lVar6 + 0x68) = plVar1[5];
  if ((lVar5 == 0) ||
     (*(int *)(lVar6 + 0x5c) = (int)*(undefined8 *)(lVar5 + 0x18), *(long *)(param_1 + 0x40) == 0))
  goto LAB_031f8994;
  plVar2 = (long *)FUN_031fab40();
  if (plVar2 == (long *)0x0) {
LAB_031f88a0:
    *(long *)(lVar6 + 0x28) = plVar1[2];
    if (lVar7 == 0) goto LAB_031f8994;
    *(undefined4 *)(lVar7 + 0x10) = 2;
    *(undefined4 *)(lVar6 + 0x38) = 0;
  }
  else {
    if (*plVar2 !=
        *(long *)VoxelBusters_EssentialKit_NetworkServicesUnitySettings_PingTestSettings_TypeInfo)
    goto LAB_031f8a58;
    if ((char)plVar2[2] != '\0') goto LAB_031f88a0;
    if (lVar7 == 0) goto LAB_031f8994;
    *(undefined4 *)(lVar7 + 0x10) = 3;
    *(undefined4 *)(lVar7 + 0x20) = 2;
    *(undefined4 *)(lVar6 + 0x38) = 2;
    if ((int)plVar2[6] == 2) {
      *(undefined4 *)(lVar7 + 0x1c) = 3;
      *(undefined4 *)(lVar6 + 0x34) = 3;
    }
    else {
      if ((int)plVar2[6] != 1) {
        uVar3 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
        uVar4 = FUN_01c5d2fc(uVar3,1);
        FUN_019b2708(plVar2);
        local_28 = (undefined4)plVar2[6];
        uVar3 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_36_0_TypeInfo);
        uVar3 = thunk_FUN_01c49334(uVar3,&local_28);
        uVar3 = FUN_03307544(uVar3,0);
        goto LAB_031f89d8;
      }
      lVar5 = plVar2[5];
      *(undefined4 *)(lVar7 + 0x1c) = 2;
      *(long *)(lVar7 + 0x28) = lVar5;
      *(undefined4 *)(lVar6 + 0x34) = 2;
    }
  }
  if ((*(long *)(param_1 + 0x78) != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    uVar3 = FUN_031f4a9c(*(long *)(param_1 + 0x10),(long)*(int *)(*(long *)(param_1 + 0x78) + 0x10),
                         0);
    *(undefined8 *)(lVar7 + 0x58) = uVar3;
    uVar3 = FUN_031ec280(plVar1,lVar7 + 0x110,lVar7 + 0x108,0);
    *(undefined8 *)(lVar7 + 0xd8) = uVar3;
    if (*(long *)(lVar7 + 0x58) == *(long *)(param_1 + 0x20)) {
      *(undefined4 *)(lVar7 + 0x24) = 1;
    }
    *(undefined4 *)(lVar7 + 0x14) = 1;
    *(long *)(lVar7 + 0x40) = plVar1[2];
    lVar6 = plVar1[3];
    *(undefined4 *)(lVar7 + 0x50) = 0;
    *(long *)(lVar7 + 0x48) = lVar6;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_031f2bec(*(long *)(param_1 + 0x10),lVar7,0);
      return;
    }
  }
LAB_031f8994:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


