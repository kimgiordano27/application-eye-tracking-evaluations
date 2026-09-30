/*
FUNCTION_NAME: FUN_031f9328
ENTRY_POINT: 031f9328
PROGRAM: gunraiders-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_031f9328(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar10 = System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_TypeInfo;
  if ((DAT_045326f6 & 1) == 0) {
    FUN_01c5d288(System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_TypeInfo);
    FUN_01c5d288(System_Linq_Expressions_Interpreter_NegateInstruction_NegateInt16_TypeInfo);
    FUN_01c5d288(
                VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
                );
    FUN_01c5d288(VoxelBusters_EssentialKit_NetworkServicesUnitySettings_PingTestSettings_TypeInfo);
    FUN_01c5d288(OVRPlugin_OVRP_1_42_0_TypeInfo);
    DAT_045326f6 = 1;
  }
  lVar3 = thunk_FUN_01c496e0(*(undefined8 *)puVar10);
  FUN_031eafc0(lVar3,param_2,0);
  if (lVar3 == 0) goto LAB_031f9700;
  FUN_031eb318(lVar3,param_1,0);
  if (*(int *)(lVar3 + 0x28) == 4) {
    if (0 < *(int *)(lVar3 + 0x38)) {
      lVar4 = FUN_031f7d08(param_1);
      if (lVar4 == 0) goto LAB_031f9700;
      plVar5 = (long *)FUN_031faa28(lVar4,*(undefined4 *)(lVar3 + 0x38));
      if ((plVar5 != (long *)0x0) &&
         (*plVar5 !=
          *(long *)System_Linq_Expressions_Interpreter_NegateInstruction_NegateInt16_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar5);
      }
      goto LAB_031f9424;
    }
    uVar8 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
    uVar9 = FUN_01c5d2fc(uVar8,1);
    FUN_019b2708(lVar3);
    uVar8 = *(undefined8 *)(lVar3 + 0x30);
    FUN_019b2708(uVar9);
    FUN_019b8dd4(uVar9,uVar8);
    FUN_019b8e08(uVar9,0,uVar8);
    puVar10 = 
    VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass21_0_TypeInfo
    ;
  }
  else {
    plVar5 = (long *)FUN_031f7b98(param_1);
LAB_031f9424:
    lVar4 = FUN_031faa9c(param_1);
    if (lVar4 == 0) goto LAB_031f9700;
    *(undefined4 *)(lVar4 + 0x30) = 2;
    *(undefined4 *)(lVar4 + 0x4c) = *(undefined4 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(lVar3 + 0x30);
    lVar14 = *(long *)(lVar4 + 0x80);
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_031f9700;
    plVar6 = (long *)FUN_031fab40();
    if (plVar6 == (long *)0x0) {
LAB_031f9484:
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo;
      if (lVar14 == 0) goto LAB_031f9700;
      *(undefined4 *)(lVar14 + 0x10) = 2;
      *(undefined4 *)(lVar4 + 0x38) = 0;
    }
    else {
      if (*plVar6 !=
          *(long *)VoxelBusters_EssentialKit_NetworkServicesUnitySettings_PingTestSettings_TypeInfo)
      {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748();
      }
      if (0 < *(int *)(lVar3 + 0x10)) goto LAB_031f9484;
      if (lVar14 == 0) goto LAB_031f9700;
      *(undefined4 *)(lVar14 + 0x10) = 3;
      *(undefined4 *)(lVar14 + 0x20) = 2;
      *(undefined4 *)(lVar4 + 0x38) = 2;
      if ((int)plVar6[6] == 2) {
        *(undefined4 *)(lVar14 + 0x1c) = 3;
        *(undefined4 *)(lVar4 + 0x34) = 3;
      }
      else {
        if ((int)plVar6[6] != 1) {
          uVar8 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
          uVar9 = FUN_01c5d2fc(uVar8,1);
          FUN_019b2708(plVar6);
          local_34 = (undefined4)plVar6[6];
          uVar8 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_36_0_TypeInfo);
          uVar8 = thunk_FUN_01c49334(uVar8,&local_34);
          uVar8 = FUN_03307544(uVar8,0);
          FUN_019b2708(uVar9);
          FUN_019b8dd4(uVar9,uVar8);
          FUN_019b8e08(uVar9,0,uVar8);
          uVar8 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_40_0_TypeInfo);
          goto LAB_031f97dc;
        }
        lVar7 = plVar6[5];
        *(undefined4 *)(lVar14 + 0x1c) = 2;
        *(long *)(lVar14 + 0x28) = lVar7;
        *(undefined4 *)(lVar4 + 0x34) = 2;
        *(long *)(lVar14 + 0x40) = lVar7;
        *(long *)(lVar14 + 0x48) = plVar6[8];
      }
    }
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_031f9700;
    lVar7 = FUN_031f4a9c(*(long *)(param_1 + 0x10),(long)*(int *)(lVar3 + 0x10),0);
    *(long *)(lVar14 + 0x58) = lVar7;
    if (lVar7 == *(long *)(param_1 + 0x20)) {
      uVar11 = 1;
    }
    else if ((*(long *)(param_1 + 0x28) < 1) || (lVar7 != *(long *)(param_1 + 0x28))) {
      uVar11 = 2;
    }
    else {
      uVar11 = 3;
    }
    *(undefined4 *)(lVar14 + 0x24) = uVar11;
    *(undefined4 *)(lVar14 + 0x14) = 2;
    FUN_031e8cc4(*(undefined4 *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 0x30),
                 *(undefined8 *)(param_1 + 0x10),plVar5,lVar14 + 0x7c,lVar14 + 0x68,lVar14 + 0x70,
                 lVar14 + 0x78,0);
    *(undefined4 *)(lVar14 + 0x50) = 0;
    uVar1 = *(uint *)(lVar3 + 0x14);
    *(uint *)(lVar14 + 0x80) = uVar1;
    lVar7 = *(long *)(lVar3 + 0x18);
    *(long *)(lVar14 + 0x88) = lVar7;
    *(undefined8 *)(lVar14 + 0x98) = *(undefined8 *)(lVar3 + 0x20);
    if (*(uint *)(lVar3 + 0x40) < 6) {
      uVar2 = 1 << (ulong)(*(uint *)(lVar3 + 0x40) & 0x1f);
      if ((uVar2 & 9) == 0) {
        if ((uVar2 & 0x12) == 0) {
          if ((int)uVar1 < 1) {
            iVar12 = 1;
          }
          else {
            if (lVar7 == 0) goto LAB_031f9700;
            uVar13 = 0;
            iVar12 = 1;
            do {
              if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_031f9704;
              lVar3 = uVar13 * 4;
              uVar13 = uVar13 + 1;
              iVar12 = *(int *)(lVar7 + 0x20 + lVar3) * iVar12;
            } while (uVar1 != uVar13);
          }
          *(int *)(lVar4 + 0x48) = iVar12;
          *(undefined4 *)(lVar14 + 0x18) = 3;
        }
        else {
          if (lVar7 == 0) goto LAB_031f9700;
          if (*(int *)(lVar7 + 0x18) == 0) goto LAB_031f9704;
          *(undefined4 *)(lVar4 + 0x48) = *(undefined4 *)(lVar7 + 0x20);
          *(undefined4 *)(lVar14 + 0x18) = 2;
        }
LAB_031f96c0:
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_031f9700;
        FUN_031f79ec(*(long *)(param_1 + 0x40),lVar4);
      }
      else {
        if (lVar7 == 0) goto LAB_031f9700;
        if (*(int *)(lVar7 + 0x18) == 0) {
LAB_031f9704:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        *(undefined4 *)(lVar4 + 0x48) = *(undefined4 *)(lVar7 + 0x20);
        *(undefined4 *)(lVar14 + 0x18) = 1;
        uVar11 = *(undefined4 *)(lVar14 + 0x7c);
        if (*(int *)(*(long *)
                      VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar13 = FUN_031ec7c8(uVar11,0);
        if ((uVar13 & 1) == 0) goto LAB_031f96c0;
        lVar3 = *(long *)(lVar3 + 0x20);
        if (lVar3 == 0) goto LAB_031f9700;
        if (*(int *)(lVar3 + 0x18) == 0) goto LAB_031f9704;
        if (*(int *)(lVar3 + 0x20) != 0) goto LAB_031f96c0;
        FUN_031fb3c8(param_1,lVar14);
        FUN_031fa4c4(param_1,lVar4);
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_031f9700;
        FUN_031f2bec(*(long *)(param_1 + 0x10),lVar14,0);
        *(undefined4 *)(lVar14 + 0x10) = 4;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_031f2bec(*(long *)(param_1 + 0x10),lVar14,0);
        return;
      }
LAB_031f9700:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar8 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
    uVar9 = FUN_01c5d2fc(uVar8,1);
    FUN_019b2708(lVar3);
    local_38 = *(undefined4 *)(lVar3 + 0x40);
    uVar8 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_43_0_TypeInfo);
    uVar8 = thunk_FUN_01c49334(uVar8,&local_38);
    uVar8 = FUN_03307544(uVar8,0);
    FUN_019b2708(uVar9);
    FUN_019b8dd4(uVar9,uVar8);
    FUN_019b8e08(uVar9,0,uVar8);
    puVar10 = OVRNetwork_FrameHeader_TypeInfo;
  }
  uVar8 = thunk_FUN_01c273e8(puVar10);
LAB_031f97dc:
  uVar8 = FUN_03315920(uVar8,uVar9,0);
  thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
  uVar9 = thunk_FUN_01c496e0();
  FUN_031dce5c(uVar9,uVar8,0);
  uVar8 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_44_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar9,uVar8);
}


