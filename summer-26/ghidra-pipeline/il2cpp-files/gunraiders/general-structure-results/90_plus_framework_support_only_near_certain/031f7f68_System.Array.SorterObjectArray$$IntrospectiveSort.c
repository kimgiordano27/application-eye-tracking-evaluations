/*
FUNCTION_NAME: System.Array.SorterObjectArray$$IntrospectiveSort
ENTRY_POINT: 031f7f68
PROGRAM: gunraiders-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_Array_SorterObjectArray__IntrospectiveSort(undefined8 param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  undefined4 unaff_w24;
  undefined4 unaff_w25;
  long unaff_x26;
  ulong unaff_x27;
  byte bStack000000000000000c;
  
  do {
    if (*unaff_x20 != param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(unaff_x20);
    }
    uVar3 = FUN_031ec5b0(unaff_x20,unaff_x20 + 3,unaff_x20 + 4,0);
    *(int *)(unaff_x19 + 0x48) = (int)unaff_x20[3];
    *(long *)(unaff_x19 + 0x50) = unaff_x20[4];
    if ((uVar3 & 1) != 0) {
      if ((unaff_x27 & 1) == 0) {
        return;
      }
      iVar8 = *(int *)(unaff_x19 + 0x48);
      goto LAB_031f7eb0;
    }
    lVar4 = FUN_031f7de4();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    *(undefined4 *)(lVar4 + 0x7c) = 0;
    *(undefined4 *)(lVar4 + 0x80) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined8 *)(lVar4 + 0x4d) = 0;
    *(undefined8 *)(lVar4 + 0x60) = 0;
    *(undefined8 *)(lVar4 + 0x58) = 0;
    *(undefined8 *)(lVar4 + 0x70) = 0;
    *(undefined8 *)(lVar4 + 0x68) = 0;
    *(undefined1 *)(lVar4 + 0x78) = 0;
    *(undefined8 *)(lVar4 + 0x90) = 0;
    *(undefined8 *)(lVar4 + 0x88) = 0;
    *(undefined8 *)(lVar4 + 0xa0) = 0;
    *(undefined8 *)(lVar4 + 0x98) = 0;
    *(undefined8 *)(lVar4 + 0xb0) = 0;
    *(undefined8 *)(lVar4 + 0xa8) = 0;
    *(undefined8 *)(lVar4 + 0xb9) = 0;
    *(undefined8 *)(lVar4 + 0xb1) = 0;
    *(undefined8 *)(lVar4 + 0xd0) = 0;
    *(undefined8 *)(lVar4 + 0xd8) = 0;
    *(undefined8 *)(lVar4 + 200) = 0;
    *(undefined1 *)(lVar4 + 0xe0) = 0;
    *(undefined8 *)(lVar4 + 0xe8) = 0;
    *(undefined8 *)(lVar4 + 0xf0) = 0;
    *(undefined1 *)(lVar4 + 0x100) = 0;
    *(undefined8 *)(lVar4 + 0xf8) = 0;
    *(undefined4 *)(lVar4 + 0x118) = 0;
    *(undefined8 *)(lVar4 + 0x108) = 0;
    *(undefined8 *)(lVar4 + 0x110) = 0;
    if ((int)unaff_x20[7] == 2) {
      lVar4 = FUN_031f7de4();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      *(undefined4 *)(lVar4 + 0x10) = unaff_w24;
      lVar4 = FUN_031f7de4();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      *(undefined4 *)(lVar4 + 0x1c) = *(undefined4 *)((long)unaff_x20 + 0x34);
      lVar4 = FUN_031f7de4();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      *(int *)(lVar4 + 0x20) = (int)unaff_x20[7];
      lVar4 = *(long *)(unaff_x19 + 0x10);
      uVar5 = FUN_031f7de4();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4(uVar5,uVar5);
      }
      FUN_031f2bec(lVar4,uVar5,0);
    }
    else {
      lVar4 = FUN_031f7de4();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      *(undefined4 *)(lVar4 + 0x10) = unaff_w25;
      lVar4 = FUN_031f7de4();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      *(undefined4 *)(lVar4 + 0x1c) = *(undefined4 *)((long)unaff_x20 + 0x34);
      lVar4 = FUN_031f7de4();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      *(int *)(lVar4 + 0x20) = (int)unaff_x20[7];
      lVar4 = *(long *)(unaff_x19 + 0x10);
      uVar5 = FUN_031f7de4();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4(uVar5,uVar5);
      }
      FUN_031f2bec(lVar4,uVar5,0);
    }
    if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_031f7994();
    FUN_031fa4c4();
    while( true ) {
      if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      unaff_x20 = (long *)FUN_031fa42c();
      if (unaff_x20 != (long *)0x0) break;
      iVar8 = 3;
      *(undefined4 *)(unaff_x19 + 0x48) = 3;
      *(undefined8 *)(unaff_x19 + 0x50) = 0;
      if ((unaff_x27 & 1) == 0) {
        return;
      }
LAB_031f7eb0:
      if (iVar8 != 0) {
        if (6 < iVar8 - 1U) {
          uVar5 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_19_0_TypeInfo);
          uVar5 = FUN_03313b64(uVar5,0);
          thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
          uVar7 = thunk_FUN_01c496e0();
          FUN_031dce5c(uVar7,uVar5,0);
          uVar5 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_1_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar7,uVar5);
        }
        plVar2 = *(long **)(unaff_x19 + 0x68);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        bVar1 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
        if (bVar1 - 1 < 0x14) {
                    /* WARNING: Could not recover jumptable at 0x031f7ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(byte *)(unaff_x26 + (ulong)(bVar1 - 1)) * 4 + 0x31f7ef8))();
          return;
        }
        uVar5 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
        plVar2 = (long *)FUN_01c5d2fc(uVar5,1);
        bStack000000000000000c = bVar1;
        uVar5 = thunk_FUN_01c273e8(PTR_DAT_042303a0);
        lVar4 = thunk_FUN_01c49334(uVar5,&stack0x0000000c);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if ((lVar4 != 0) &&
           (lVar6 = thunk_FUN_01c495e4(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0)) {
          uVar5 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar5,0);
        }
        if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        plVar2[4] = lVar4;
        uVar5 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_21_0_TypeInfo);
        uVar5 = FUN_03315920(uVar5,plVar2,0);
        thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
        uVar7 = thunk_FUN_01c496e0();
        FUN_031dce5c(uVar7,uVar5,0);
        uVar5 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_1_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar7,uVar5);
      }
      FUN_031fa180();
      unaff_x27 = 1;
    }
    param_2 = *unaff_x23;
  } while( true );
}


