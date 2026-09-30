/*
FUNCTION_NAME: FUN_031f7e50
ENTRY_POINT: 031f7e50
PROGRAM: gunraiders-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_031f7e50(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  byte local_54 [4];
  
  if ((DAT_045326e9 & 1) == 0) {
    FUN_01c5d288(VoxelBusters_EssentialKit_NetworkServicesUnitySettings_PingTestSettings_TypeInfo);
    DAT_045326e9 = 1;
  }
  FUN_031f840c(param_1);
  puVar2 = VoxelBusters_EssentialKit_NetworkServicesUnitySettings_PingTestSettings_TypeInfo;
LAB_031f7eac:
  iVar10 = *(int *)(param_1 + 0x48);
  do {
    if (iVar10 == 0) {
      FUN_031fa180(param_1);
      goto LAB_031f7f0c;
    }
    if (6 < iVar10 - 1U) {
      uVar6 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_19_0_TypeInfo);
      uVar6 = FUN_03313b64(uVar6,0);
      thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
      uVar9 = thunk_FUN_01c496e0();
      FUN_031dce5c(uVar9,uVar6,0);
      uVar6 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_1_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar9,uVar6);
    }
    plVar4 = *(long **)(param_1 + 0x68);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    bVar3 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
    switch(bVar3) {
    case 1:
      FUN_031f8748(param_1);
      break;
    case 2:
    case 3:
      FUN_031f8c74(param_1);
      break;
    case 4:
    case 5:
      FUN_031f8d14(param_1);
      break;
    case 6:
    case 0x13:
      FUN_031f8da4(param_1);
      goto LAB_031f7f40;
    case 7:
    case 0xf:
    case 0x10:
    case 0x11:
      FUN_031f9328(param_1);
      goto LAB_031f7f40;
    case 8:
      FUN_031f98a8(param_1);
      break;
    case 9:
      FUN_031f9c28(param_1);
      break;
    case 10:
    case 0xd:
    case 0xe:
      FUN_031f9e18(param_1);
      goto LAB_031f7f40;
    case 0xb:
      FUN_031fa010(param_1);
      bVar1 = false;
      goto LAB_031f7f50;
    case 0xc:
    case 0x14:
      FUN_031f84d8(param_1);
LAB_031f7f40:
      bVar1 = true;
      if (bVar3 != 0xc) goto LAB_031f7f50;
      goto LAB_031f7eac;
    case 0x12:
      FUN_031f8aac(param_1);
      break;
    default:
      uVar6 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
      plVar4 = (long *)FUN_01c5d2fc(uVar6,1);
      local_54[0] = bVar3;
      uVar6 = thunk_FUN_01c273e8(PTR_DAT_042303a0);
      lVar7 = thunk_FUN_01c49334(uVar6,local_54);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0)) {
        uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar6,0);
      }
      if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar4[4] = lVar7;
      uVar6 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_21_0_TypeInfo);
      uVar6 = FUN_03315920(uVar6,plVar4,0);
      thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
      uVar9 = thunk_FUN_01c496e0();
      FUN_031dce5c(uVar9,uVar6,0);
      uVar6 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_1_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar9,uVar6);
    }
LAB_031f7f0c:
    bVar1 = true;
LAB_031f7f50:
    while( true ) {
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      plVar4 = (long *)FUN_031fa42c();
      if (plVar4 == (long *)0x0) break;
      if (*plVar4 != *(long *)puVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar4);
      }
      uVar5 = FUN_031ec5b0(plVar4,plVar4 + 3,plVar4 + 4,0);
      *(int *)(param_1 + 0x48) = (int)plVar4[3];
      *(long *)(param_1 + 0x50) = plVar4[4];
      if ((uVar5 & 1) != 0) {
        if (!bVar1) {
          return;
        }
        goto LAB_031f7eac;
      }
      lVar7 = FUN_031f7de4(param_1);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      *(undefined4 *)(lVar7 + 0x7c) = 0;
      *(undefined4 *)(lVar7 + 0x80) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x28) = 0;
      *(undefined8 *)(lVar7 + 0x20) = 0;
      *(undefined8 *)(lVar7 + 0x30) = 0;
      *(undefined8 *)(lVar7 + 0x40) = 0;
      *(undefined8 *)(lVar7 + 0x48) = 0;
      *(undefined8 *)(lVar7 + 0x4d) = 0;
      *(undefined8 *)(lVar7 + 0x60) = 0;
      *(undefined8 *)(lVar7 + 0x58) = 0;
      *(undefined8 *)(lVar7 + 0x70) = 0;
      *(undefined8 *)(lVar7 + 0x68) = 0;
      *(undefined1 *)(lVar7 + 0x78) = 0;
      *(undefined8 *)(lVar7 + 0x90) = 0;
      *(undefined8 *)(lVar7 + 0x88) = 0;
      *(undefined8 *)(lVar7 + 0xa0) = 0;
      *(undefined8 *)(lVar7 + 0x98) = 0;
      *(undefined8 *)(lVar7 + 0xb0) = 0;
      *(undefined8 *)(lVar7 + 0xa8) = 0;
      *(undefined8 *)(lVar7 + 0xb9) = 0;
      *(undefined8 *)(lVar7 + 0xb1) = 0;
      *(undefined8 *)(lVar7 + 0xd0) = 0;
      *(undefined8 *)(lVar7 + 0xd8) = 0;
      *(undefined8 *)(lVar7 + 200) = 0;
      *(undefined1 *)(lVar7 + 0xe0) = 0;
      *(undefined8 *)(lVar7 + 0xe8) = 0;
      *(undefined8 *)(lVar7 + 0xf0) = 0;
      *(undefined1 *)(lVar7 + 0x100) = 0;
      *(undefined8 *)(lVar7 + 0xf8) = 0;
      *(undefined4 *)(lVar7 + 0x118) = 0;
      *(undefined8 *)(lVar7 + 0x108) = 0;
      *(undefined8 *)(lVar7 + 0x110) = 0;
      if ((int)plVar4[7] == 2) {
        lVar7 = FUN_031f7de4(param_1);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        *(undefined4 *)(lVar7 + 0x10) = 5;
        lVar7 = FUN_031f7de4(param_1);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        *(undefined4 *)(lVar7 + 0x1c) = *(undefined4 *)((long)plVar4 + 0x34);
        lVar7 = FUN_031f7de4(param_1);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        *(int *)(lVar7 + 0x20) = (int)plVar4[7];
        lVar7 = *(long *)(param_1 + 0x10);
        uVar6 = FUN_031f7de4(param_1);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4(uVar6,uVar6);
        }
        FUN_031f2bec(lVar7,uVar6,0);
      }
      else {
        lVar7 = FUN_031f7de4(param_1);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        *(undefined4 *)(lVar7 + 0x10) = 4;
        lVar7 = FUN_031f7de4(param_1);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        *(undefined4 *)(lVar7 + 0x1c) = *(undefined4 *)((long)plVar4 + 0x34);
        lVar7 = FUN_031f7de4(param_1);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        *(int *)(lVar7 + 0x20) = (int)plVar4[7];
        lVar7 = *(long *)(param_1 + 0x10);
        uVar6 = FUN_031f7de4(param_1);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4(uVar6,uVar6);
        }
        FUN_031f2bec(lVar7,uVar6,0);
      }
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_031f7994();
      FUN_031fa4c4(param_1,plVar4);
    }
    iVar10 = 3;
    *(undefined4 *)(param_1 + 0x48) = 3;
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (!bVar1) {
      return;
    }
  } while( true );
}


