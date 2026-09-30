/*
FUNCTION_NAME: FUN_0320a6d8
ENTRY_POINT: 0320a6d8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0320aa38) */

undefined8 FUN_0320a6d8(long param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint local_38;
  char local_34 [4];
  
                    /* try { // try from 0320a6d8 to 0330a753 has its CatchHandler @ 0320a66c */
  if ((DAT_0453279d & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422f930);
    DAT_0453279d = 1;
  }
  iVar2 = FUN_03209ea4(param_1,param_2);
  local_34[0] = '\0';
  FUN_0333497c(param_1,local_34,0);
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  (**(code **)(*plVar4 + 0x328))
            (plVar4,*(long *)(param_1 + 0x20) + (long)iVar2,0,*(undefined8 *)(*plVar4 + 0x330));
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar3 = FUN_0325f158(*(long *)(param_1 + 0x10),0);
  uVar8 = (ulong)uVar3;
  if ((int)uVar3 < 0) {
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
  plVar4 = *(long **)(param_1 + 0x70);
  local_38 = param_2;
  if (plVar4 == (long *)0x0) {
    uVar9 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422f930,uVar8);
    plVar4 = *(long **)(param_1 + 0x10);
    uVar10 = uVar8;
    uVar1 = uVar3;
    while (0 < (int)uVar1) {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      iVar2 = (**(code **)(*plVar4 + 0x2b8))
                        (plVar4,uVar9,uVar3 - (int)uVar10,uVar10,*(undefined8 *)(*plVar4 + 0x2c0));
      if (iVar2 == 0) {
        uVar7 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
        plVar4 = (long *)FUN_01c5d2fc(uVar7,1);
        uVar7 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
        lVar5 = thunk_FUN_01c49334(uVar7,&local_38);
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
      plVar4 = *(long **)(param_1 + 0x10);
      uVar1 = (int)uVar10 - iVar2;
      uVar10 = (ulong)uVar1;
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar3 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
    *param_3 = uVar3;
    if (-1 < (int)uVar3) {
      plVar4 = *(long **)(param_1 + 0x10);
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
      if ((long)(ulong)uVar3 < lVar5 - *(long *)(param_1 + 0x28)) {
        uVar7 = 0;
        iVar2 = 0x1e;
LAB_0320a958:
        if (local_34[0] != '\0') {
          thunk_FUN_01c216e8(param_1,0);
        }
        if ((iVar2 == 0x1e) || (iVar2 == 0)) {
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
    local_38 = *param_3;
    uVar7 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
    lVar5 = thunk_FUN_01c49334(uVar7,&local_38);
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
  lVar5 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
  plVar4 = *(long **)(param_1 + 0x70);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar6 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
  if ((long)(lVar6 - uVar8) < lVar5) {
    uVar7 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
    plVar4 = (long *)FUN_01c5d2fc(uVar7,1);
    uVar7 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
    lVar5 = thunk_FUN_01c49334(uVar7,&local_38);
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
                                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
                                );
      uVar7 = FUN_03315920(uVar7,plVar4,0);
      thunk_FUN_01c273e8(OVRPlugin_LayerLayout_TypeInfo);
      uVar9 = thunk_FUN_01c496e0();
      FUN_032485c8(uVar9,uVar7,0);
      uVar7 = thunk_FUN_01c273e8(
                                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar9,uVar7);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar7 = FUN_0322ed30(*(long *)(param_1 + 0x70),0);
  uVar7 = FUN_0315a188(0,uVar7,0,uVar3 >> 1,0);
  plVar4 = *(long **)(param_1 + 0x70);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar5 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
  (**(code **)(*plVar4 + 0x208))(plVar4,lVar5 + uVar8,*(undefined8 *)(*plVar4 + 0x210));
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar3 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
  *param_3 = uVar3;
  if (-1 < (int)uVar3) {
    plVar4 = *(long **)(param_1 + 0x10);
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
    if ((long)(ulong)uVar3 < lVar5 - *(long *)(param_1 + 0x28)) {
      uVar9 = 0;
      iVar2 = 0x14;
      goto LAB_0320a958;
    }
  }
  uVar7 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
  plVar4 = (long *)FUN_01c5d2fc(uVar7,1);
  local_38 = *param_3;
  uVar7 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
  lVar5 = thunk_FUN_01c49334(uVar7,&local_38);
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


