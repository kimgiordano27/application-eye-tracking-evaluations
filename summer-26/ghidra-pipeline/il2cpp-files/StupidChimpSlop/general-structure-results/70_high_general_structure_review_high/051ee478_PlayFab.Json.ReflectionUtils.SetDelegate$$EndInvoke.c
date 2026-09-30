/*
FUNCTION_NAME: PlayFab.Json.ReflectionUtils.SetDelegate$$EndInvoke
ENTRY_POINT: 051ee478
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


long * PlayFab_Json_ReflectionUtils_SetDelegate__EndInvoke(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x22;
  uint unaff_w23;
  ulong unaff_x24;
  ulong uVar8;
  uint unaff_w25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  long *in_stack_00000008;
  uint uStack0000000000000014;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uStack0000000000000014 = unaff_w25;
  while (uVar8 = unaff_x24, unaff_w23 != 1) {
    do {
      lVar7 = *(long *)(in_stack_00000018 + 0x10);
      if (lVar7 == 0) goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
      if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_051ee914;
      if ((*(uint *)(lVar7 + uVar8 * 4 + 0x20) & unaff_w23) == 0) {
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar2 = FUN_051e96a8(unaff_x27,unaff_x28);
        FUN_051e8a04(uVar2,unaff_x26);
        unaff_x27 = FUN_051eba88();
        uVar2 = FUN_051e96a8(unaff_x28,unaff_x29);
        uVar3 = FUN_051e96a8(in_stack_00000020,unaff_x26);
        FUN_051e8a04(uVar2,uVar3);
        unaff_x29 = FUN_051eba88();
        uVar2 = FUN_051e96a8(unaff_x28,unaff_x28);
        if (unaff_x22 == 0)
        goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
        uVar2 = FUN_051ec65c(uVar2,uVar2);
        uVar3 = FUN_051ea778(unaff_x26,1);
        FUN_051e8a04(uVar2,uVar3);
        unaff_x28 = FUN_051eba88();
        lVar7 = *unaff_x19;
        if ((uStack0000000000000014 & 1) != 0) {
          uVar2 = in_stack_00000028;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02dabd98(lVar7);
          }
          goto LAB_051ee668;
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dabd98(lVar7);
        }
        uVar2 = FUN_051e96a8(unaff_x26,unaff_x26);
        unaff_x26 = FUN_051ec65c(uVar2,uVar2);
      }
      else {
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_051e96a8(unaff_x27,unaff_x29);
        unaff_x27 = FUN_051eba88();
        uVar2 = FUN_051e96a8(unaff_x28,unaff_x29);
        uVar3 = FUN_051e96a8(in_stack_00000020,unaff_x26);
        FUN_051e8a04(uVar2,uVar3);
        unaff_x28 = FUN_051eba88();
        uVar2 = FUN_051e96a8(unaff_x29,unaff_x29);
        if (unaff_x22 == 0)
        goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
        uVar2 = FUN_051ec65c(uVar2,uVar2);
        uVar3 = FUN_051e96a8(unaff_x26,in_stack_00000028);
        uVar3 = FUN_051ea778(uVar3,1);
        FUN_051e8a04(uVar2,uVar3);
        unaff_x29 = FUN_051eba88();
        if ((uStack0000000000000014 & 1) == 0) {
          if (*(int *)(*unaff_x19 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar2 = FUN_051e96a8(unaff_x26,unaff_x26);
          unaff_x26 = FUN_051ec65c(uVar2,uVar2);
        }
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar2 = FUN_051e96a8(unaff_x26,in_stack_00000028);
LAB_051ee668:
        unaff_x26 = FUN_051eba88(uVar2);
      }
      bVar1 = unaff_w23 < 2;
      unaff_x24 = uVar8;
      unaff_w23 = unaff_w23 >> 1;
      if (bVar1) {
        unaff_x24 = uVar8 - 1;
        unaff_w23 = 0x80000000;
        uStack0000000000000014 = 0;
        if ((long)uVar8 < 1)
        goto PlayFab_ProgressionModels_CreateLeaderboardDefinitionRequest___ctor;
      }
      uStack0000000000000014 = 0;
      uVar8 = unaff_x24;
    } while (unaff_x24 != 0);
  }
PlayFab_ProgressionModels_CreateLeaderboardDefinitionRequest___ctor:
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar2 = FUN_051e96a8(unaff_x27,unaff_x28);
  FUN_051e8a04(uVar2,unaff_x26);
  lVar7 = FUN_051eba88();
  uVar2 = FUN_051e96a8(unaff_x28,unaff_x29);
  uVar3 = FUN_051e96a8(in_stack_00000020,unaff_x26);
  FUN_051e8a04(uVar2,uVar3);
  lVar4 = FUN_051eba88();
  if ((uStack0000000000000014 & 1) == 0) {
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar2 = FUN_051e96a8(unaff_x26,unaff_x26);
    if (unaff_x22 == 0) goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
    unaff_x26 = FUN_051ec65c(uVar2,uVar2);
  }
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_051e96a8(unaff_x26,in_stack_00000028);
  lVar5 = FUN_051eba88();
  if (0 < unaff_w20) {
    do {
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_051e96a8(lVar7,lVar4);
      lVar7 = FUN_051eba88();
      uVar2 = FUN_051e96a8(lVar4,lVar4);
      uVar3 = FUN_051ea778(lVar5,1);
      FUN_051e8a04(uVar2,uVar3);
      lVar4 = FUN_051eba88();
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dabd98(*unaff_x19);
      }
      uVar2 = FUN_051e96a8(lVar5,lVar5);
      if (unaff_x22 == 0) goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
      lVar5 = FUN_051ec65c(uVar2,uVar2);
      unaff_w20 = unaff_w20 + -1;
    } while (unaff_w20 != 0);
  }
  if (in_stack_00000008 == (long *)0x0) {
PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if ((lVar7 != 0) &&
     (lVar6 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*in_stack_00000008 + 0x40)), lVar6 == 0)) {
PlayFab_ProfilesModels_GetTitlePlayersFromXboxLiveIDsRequest___ctor:
    uVar2 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar2,0);
  }
  if ((int)in_stack_00000008[3] != 0) {
    in_stack_00000008[4] = lVar7;
    thunk_FUN_02dc1ef0(in_stack_00000008 + 4,lVar7);
    if ((lVar4 != 0) &&
       (lVar7 = thunk_FUN_02d8a53c(lVar4,*(undefined8 *)(*in_stack_00000008 + 0x40)), lVar7 == 0))
    goto PlayFab_ProfilesModels_GetTitlePlayersFromXboxLiveIDsRequest___ctor;
    if ((*(uint *)(in_stack_00000008 + 3) & 0xfffffffe) != 0) {
      in_stack_00000008[5] = lVar4;
      thunk_FUN_02dc1ef0(in_stack_00000008 + 5,lVar4);
      if ((lVar5 != 0) &&
         (lVar7 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*in_stack_00000008 + 0x40)), lVar7 == 0))
      goto PlayFab_ProfilesModels_GetTitlePlayersFromXboxLiveIDsRequest___ctor;
      if (2 < *(uint *)(in_stack_00000008 + 3)) {
        in_stack_00000008[6] = lVar5;
        thunk_FUN_02dc1ef0(in_stack_00000008 + 6,lVar5);
        return in_stack_00000008;
      }
    }
  }
LAB_051ee914:
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


