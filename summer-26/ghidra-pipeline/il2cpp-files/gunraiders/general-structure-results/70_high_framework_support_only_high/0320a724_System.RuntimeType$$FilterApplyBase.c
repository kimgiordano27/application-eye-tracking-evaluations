/*
FUNCTION_NAME: System.RuntimeType$$FilterApplyBase
ENTRY_POINT: 0320a724
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0320aa38) */

undefined8 System_RuntimeType__FilterApplyBase(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  int unaff_w20;
  ulong uVar8;
  undefined8 uVar9;
  uint *unaff_x22;
  ulong uVar10;
  uint in_stack_00000008;
  char cStack000000000000000c;
  
  cStack000000000000000c = '\0';
  FUN_0333497c();
  plVar4 = *(long **)(unaff_x19 + 0x10);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
                    /* try { // try from 0320a754 to 0330a757 has its CatchHandler @ 0320a75c */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0320a6d0 with catch @ 0320a758
                       try { // try from 0320a758 to 0330a777 has its CatchHandler @ 0320a66c */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0320a754 with catch @ 0320a75c
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0320a6ac with catch @ 0320a760
                        */
  (**(code **)(*plVar4 + 0x328))
            (plVar4,*(long *)(unaff_x19 + 0x20) + (long)unaff_w20,0,*(undefined8 *)(*plVar4 + 0x330)
            );
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
                    /* try { // try from 0320a778 to 0330a77b has its CatchHandler @ 0320a788 */
  uVar2 = FUN_0325f158(*(long *)(unaff_x19 + 0x10),0);
  uVar8 = (ulong)uVar2;
  if ((int)uVar2 < 0) {
    uVar7 = thunk_FUN_01c273e8(PhotonWeapon_<_BurstFire>d__145_TypeInfo);
    uVar7 = FUN_03313b64(uVar7,0);
    thunk_FUN_01c273e8(OVRPlugin_LayerLayout_TypeInfo);
    uVar9 = thunk_FUN_01c496e0();
    FUN_032485c8(uVar9,uVar7,0);
    uVar7 = thunk_FUN_01c273e8(
                              UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar9,uVar7);
  }
                    /* catch() { ... } // from try @ 0320a778 with catch @ 0320a788 */
  plVar4 = *(long **)(unaff_x19 + 0x70);
  if (plVar4 == (long *)0x0) {
    uVar9 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422f930,uVar8);
    plVar4 = *(long **)(unaff_x19 + 0x10);
    uVar10 = uVar8;
    uVar1 = uVar2;
    while (0 < (int)uVar1) {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      iVar3 = (**(code **)(*plVar4 + 0x2b8))
                        (plVar4,uVar9,uVar2 - (int)uVar10,uVar10,*(undefined8 *)(*plVar4 + 0x2c0));
      if (iVar3 == 0) {
        uVar7 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
        plVar4 = (long *)FUN_01c5d2fc(uVar7,1);
        uVar7 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
        lVar5 = thunk_FUN_01c49334(uVar7,&stack0x00000008);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
          uVar7 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar7,0);
        }
        if ((int)plVar4[3] != 0) {
          plVar4[4] = lVar5;
          uVar7 = thunk_FUN_01c273e8(
                                    UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass13_0_TypeInfo
                                    );
          uVar7 = FUN_03315920(uVar7,plVar4,0);
          thunk_FUN_01c273e8(OVRPlugin_OVRP_1_28_0_TypeInfo);
          uVar9 = thunk_FUN_01c496e0();
          FUN_032245cc(uVar9,uVar7,0);
          uVar7 = thunk_FUN_01c273e8(
                                    UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar9,uVar7);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar4 = *(long **)(unaff_x19 + 0x10);
      uVar1 = (int)uVar10 - iVar3;
      uVar10 = (ulong)uVar1;
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar2 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
    *unaff_x22 = uVar2;
    if (-1 < (int)uVar2) {
      plVar4 = *(long **)(unaff_x19 + 0x10);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
      if ((long)(ulong)uVar2 < lVar5 - *(long *)(unaff_x19 + 0x28)) {
        uVar7 = 0;
        iVar3 = 0x1e;
LAB_0320a958:
        if (cStack000000000000000c != '\0') {
          thunk_FUN_01c216e8();
        }
        if ((iVar3 == 0x1e) || (iVar3 == 0)) {
          plVar4 = (long *)FUN_03171b84(0);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar7 = (**(code **)(*plVar4 + 0x398))
                            (plVar4,uVar9,0,uVar8,*(undefined8 *)(*plVar4 + 0x3a0));
        }
        return uVar7;
      }
    }
    uVar7 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
    plVar4 = (long *)FUN_01c5d2fc(uVar7,1);
    in_stack_00000008 = *unaff_x22;
    uVar7 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
    lVar5 = thunk_FUN_01c49334(uVar7,&stack0x00000008);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar7,0);
    }
    if ((int)plVar4[3] != 0) {
      plVar4[4] = lVar5;
      uVar7 = thunk_FUN_01c273e8(Player_<PingClickEvent>d__672_TypeInfo);
      uVar7 = FUN_03315920(uVar7,plVar4,0);
      thunk_FUN_01c273e8(PTR_DAT_0423a628);
      uVar9 = thunk_FUN_01c496e0();
      FUN_032baa68(uVar9,uVar7,0);
      uVar7 = thunk_FUN_01c273e8(
                                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar9,uVar7);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
                    /* try { // try from 0320a794 to 0330a79f has its CatchHandler @ 0320a7b4 */
  lVar5 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
                    /* try { // try from 0320a7a0 to 0330a7ab has its CatchHandler @ 0320a66c */
  plVar4 = *(long **)(unaff_x19 + 0x70);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
                    /* try { // try from 0320a7ac to 0330a7b3 has its CatchHandler @ 0320a7b4 */
  lVar6 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0320a794 with catch @ 0320a7b4
                       catch(type#2 @ 00000000) { ... } // from try @ 0320a7ac with catch @ 0320a7b4
                        */
                    /* try { // try from 0320a7b8 to 0330a917 has its CatchHandler @ 0320a7b8
                       catch() { ... } // from try @ 0320a7b8 with catch @ 0320a7b8
                       catch() { ... } // from try @ 0320aaf0 with catch @ 0320a7b8
                       catch() { ... } // from try @ 0320abc4 with catch @ 0320a7b8
                       catch() { ... } // from try @ 0320ac28 with catch @ 0320a7b8
                       catch() { ... } // from try @ 0320ac7c with catch @ 0320a7b8
                       catch() { ... } // from try @ 0320ad14 with catch @ 0320a7b8
                       catch() { ... } // from try @ 0320ad30 with catch @ 0320a7b8
                       catch() { ... } // from try @ 0320ad60 with catch @ 0320a7b8 */
  if ((long)(lVar6 - uVar8) < lVar5) {
    uVar7 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
    plVar4 = (long *)FUN_01c5d2fc(uVar7,1);
    uVar7 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
    lVar5 = thunk_FUN_01c49334(uVar7,&stack0x00000008);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar7,0);
    }
    if ((int)plVar4[3] != 0) {
      plVar4[4] = lVar5;
                    /* catch() { ... } // from try @ 0320ab94 with catch @ 0320ad14
                       try { // try from 0320ad14 to 0330ad2b has its CatchHandler @ 0320a7b8 */
      uVar7 = thunk_FUN_01c273e8(
                                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
                                );
      uVar7 = FUN_03315920(uVar7,plVar4,0);
                    /* try { // try from 0320ad2c to 0330ad2f has its CatchHandler @ 0320ad50 */
                    /* try { // try from 0320ad30 to 0330ad57 has its CatchHandler @ 0320a7b8 */
      thunk_FUN_01c273e8(OVRPlugin_LayerLayout_TypeInfo);
      uVar9 = thunk_FUN_01c496e0();
      FUN_032485c8(uVar9,uVar7,0);
                    /* catch() { ... } // from try @ 0320ad2c with catch @ 0320ad50 */
                    /* try { // try from 0320ad58 to 0330ad5f has its CatchHandler @ 0320ad74 */
      uVar7 = thunk_FUN_01c273e8(
                                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                                );
                    /* try { // try from 0320ad60 to 0330ad6b has its CatchHandler @ 0320a7b8 */
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar9,uVar7);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  if (*(long *)(unaff_x19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar7 = FUN_0322ed30(*(long *)(unaff_x19 + 0x70),0);
  uVar7 = FUN_0315a188(0,uVar7,0,uVar2 >> 1,0);
  plVar4 = *(long **)(unaff_x19 + 0x70);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar5 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
  (**(code **)(*plVar4 + 0x208))(plVar4,lVar5 + uVar8,*(undefined8 *)(*plVar4 + 0x210));
  plVar4 = *(long **)(unaff_x19 + 0x10);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar2 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
  *unaff_x22 = uVar2;
  if (-1 < (int)uVar2) {
    plVar4 = *(long **)(unaff_x19 + 0x10);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
    if ((long)(ulong)uVar2 < lVar5 - *(long *)(unaff_x19 + 0x28)) {
      uVar9 = 0;
      iVar3 = 0x14;
      goto LAB_0320a958;
    }
  }
  uVar7 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
  plVar4 = (long *)FUN_01c5d2fc(uVar7,1);
  in_stack_00000008 = *unaff_x22;
  uVar7 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
  lVar5 = thunk_FUN_01c49334(uVar7,&stack0x00000008);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
    uVar7 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar7,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar5;
    uVar7 = thunk_FUN_01c273e8(Player_<PingClickEvent>d__672_TypeInfo);
    uVar7 = FUN_03315920(uVar7,plVar4,0);
    thunk_FUN_01c273e8(PTR_DAT_0423a628);
    uVar9 = thunk_FUN_01c496e0();
    FUN_032baa68(uVar9,uVar7,0);
    uVar7 = thunk_FUN_01c273e8(
                              UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar9,uVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


