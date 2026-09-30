/*
FUNCTION_NAME: PlayFab.Json.ReflectionUtils.SetDelegate$$BeginInvoke
ENTRY_POINT: 051ee450
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


long * PlayFab_Json_ReflectionUtils_SetDelegate__BeginInvoke(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int in_w8;
  long lVar9;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x22;
  uint uVar10;
  ulong uVar11;
  bool bVar12;
  long unaff_x25;
  int unaff_w26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar3 = unaff_x27;
  if ((int)(in_w8 - 1U) < 0) {
    bVar1 = true;
  }
  else {
    bVar12 = true;
    uVar11 = (ulong)(in_w8 - 1U);
    uVar10 = 1 << (ulong)(unaff_w26 - 1U & 0x1f);
    do {
      do {
        if ((uVar11 == 0) && (bVar1 = bVar12, uVar10 == 1))
        goto PlayFab_ProgressionModels_CreateLeaderboardDefinitionRequest___ctor;
        lVar9 = *(long *)(unaff_x25 + 0x10);
        if (lVar9 == 0) goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
        if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_051ee914;
        if ((*(uint *)(lVar9 + uVar11 * 4 + 0x20) & uVar10) == 0) {
          if (*(int *)(*unaff_x19 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar3 = FUN_051e96a8(uVar3,unaff_x28);
          FUN_051e8a04(uVar3,unaff_x27);
          uVar3 = FUN_051eba88();
          uVar4 = FUN_051e96a8(unaff_x28,param_1);
          uVar5 = FUN_051e96a8(in_stack_00000020,unaff_x27);
          FUN_051e8a04(uVar4,uVar5);
          param_1 = FUN_051eba88();
          uVar4 = FUN_051e96a8(unaff_x28,unaff_x28);
          if (unaff_x22 == 0)
          goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
          uVar4 = FUN_051ec65c(uVar4,uVar4);
          uVar5 = FUN_051ea778(unaff_x27,1);
          FUN_051e8a04(uVar4,uVar5);
          unaff_x28 = FUN_051eba88();
          lVar9 = *unaff_x19;
          if (bVar12) {
            uVar4 = in_stack_00000028;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_02dabd98(lVar9);
            }
            goto LAB_051ee668;
          }
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02dabd98(lVar9);
          }
          uVar4 = FUN_051e96a8(unaff_x27,unaff_x27);
          unaff_x27 = FUN_051ec65c(uVar4,uVar4);
        }
        else {
          if (*(int *)(*unaff_x19 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_051e96a8(uVar3,param_1);
          uVar3 = FUN_051eba88();
          uVar4 = FUN_051e96a8(unaff_x28,param_1);
          uVar5 = FUN_051e96a8(in_stack_00000020,unaff_x27);
          FUN_051e8a04(uVar4,uVar5);
          unaff_x28 = FUN_051eba88();
          uVar4 = FUN_051e96a8(param_1,param_1);
          if (unaff_x22 == 0)
          goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
          uVar4 = FUN_051ec65c(uVar4,uVar4);
          uVar5 = FUN_051e96a8(unaff_x27,in_stack_00000028);
          uVar5 = FUN_051ea778(uVar5,1);
          FUN_051e8a04(uVar4,uVar5);
          param_1 = FUN_051eba88();
          if (!bVar12) {
            if (*(int *)(*unaff_x19 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar4 = FUN_051e96a8(unaff_x27,unaff_x27);
            unaff_x27 = FUN_051ec65c(uVar4,uVar4);
          }
          if (*(int *)(*unaff_x19 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar4 = FUN_051e96a8(unaff_x27,in_stack_00000028);
LAB_051ee668:
          unaff_x27 = FUN_051eba88(uVar4);
        }
        bVar12 = false;
        bVar1 = 1 < uVar10;
        uVar10 = uVar10 >> 1;
      } while (bVar1);
      bVar12 = false;
      uVar10 = 0x80000000;
      bVar1 = false;
      bVar2 = 0 < (long)uVar11;
      uVar11 = uVar11 - 1;
    } while (bVar2);
  }
PlayFab_ProgressionModels_CreateLeaderboardDefinitionRequest___ctor:
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar3 = FUN_051e96a8(uVar3,unaff_x28);
  FUN_051e8a04(uVar3,unaff_x27);
  lVar9 = FUN_051eba88();
  uVar3 = FUN_051e96a8(unaff_x28,param_1);
  uVar4 = FUN_051e96a8(in_stack_00000020,unaff_x27);
  FUN_051e8a04(uVar3,uVar4);
  lVar6 = FUN_051eba88();
  if (!bVar1) {
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar3 = FUN_051e96a8(unaff_x27,unaff_x27);
    if (unaff_x22 == 0) goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
    unaff_x27 = FUN_051ec65c(uVar3,uVar3);
  }
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_051e96a8(unaff_x27,in_stack_00000028);
  lVar7 = FUN_051eba88();
  if (0 < unaff_w20) {
    do {
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_051e96a8(lVar9,lVar6);
      lVar9 = FUN_051eba88();
      uVar3 = FUN_051e96a8(lVar6,lVar6);
      uVar4 = FUN_051ea778(lVar7,1);
      FUN_051e8a04(uVar3,uVar4);
      lVar6 = FUN_051eba88();
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dabd98(*unaff_x19);
      }
      uVar3 = FUN_051e96a8(lVar7,lVar7);
      if (unaff_x22 == 0) goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
      lVar7 = FUN_051ec65c(uVar3,uVar3);
      unaff_w20 = unaff_w20 + -1;
    } while (unaff_w20 != 0);
  }
  if (in_stack_00000008 == (long *)0x0) {
PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if ((lVar9 != 0) &&
     (lVar8 = thunk_FUN_02d8a53c(lVar9,*(undefined8 *)(*in_stack_00000008 + 0x40)), lVar8 == 0)) {
PlayFab_ProfilesModels_GetTitlePlayersFromXboxLiveIDsRequest___ctor:
    uVar3 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar3,0);
  }
  if ((int)in_stack_00000008[3] != 0) {
    in_stack_00000008[4] = lVar9;
    thunk_FUN_02dc1ef0(in_stack_00000008 + 4,lVar9);
    if ((lVar6 != 0) &&
       (lVar9 = thunk_FUN_02d8a53c(lVar6,*(undefined8 *)(*in_stack_00000008 + 0x40)), lVar9 == 0))
    goto PlayFab_ProfilesModels_GetTitlePlayersFromXboxLiveIDsRequest___ctor;
    if ((*(uint *)(in_stack_00000008 + 3) & 0xfffffffe) != 0) {
      in_stack_00000008[5] = lVar6;
      thunk_FUN_02dc1ef0(in_stack_00000008 + 5,lVar6);
      if ((lVar7 != 0) &&
         (lVar9 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*in_stack_00000008 + 0x40)), lVar9 == 0))
      goto PlayFab_ProfilesModels_GetTitlePlayersFromXboxLiveIDsRequest___ctor;
      if (2 < *(uint *)(in_stack_00000008 + 3)) {
        in_stack_00000008[6] = lVar7;
        thunk_FUN_02dc1ef0(in_stack_00000008 + 6,lVar7);
        return in_stack_00000008;
      }
    }
  }
LAB_051ee914:
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


