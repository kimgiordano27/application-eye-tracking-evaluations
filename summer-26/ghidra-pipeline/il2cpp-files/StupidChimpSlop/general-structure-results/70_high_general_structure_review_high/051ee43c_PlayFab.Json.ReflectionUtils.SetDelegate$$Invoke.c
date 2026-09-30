/*
FUNCTION_NAME: PlayFab.Json.ReflectionUtils.SetDelegate$$Invoke
ENTRY_POINT: 051ee43c
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


long * PlayFab_Json_ReflectionUtils_SetDelegate__Invoke(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x22;
  uint uVar11;
  ulong uVar12;
  bool bVar13;
  long unaff_x25;
  int unaff_w26;
  undefined8 unaff_x28;
  long *in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar3 = FUN_051eba88(in_stack_00000020);
  uVar11 = *(int *)(unaff_x25 + 0x18) - 1;
  uVar4 = param_1;
  if ((int)uVar11 < 0) {
    bVar1 = true;
  }
  else {
    bVar13 = true;
    uVar12 = (ulong)uVar11;
    uVar11 = 1 << (ulong)(unaff_w26 - 1U & 0x1f);
    do {
      do {
        if ((uVar12 == 0) && (bVar1 = bVar13, uVar11 == 1))
        goto PlayFab_ProgressionModels_CreateLeaderboardDefinitionRequest___ctor;
        lVar10 = *(long *)(unaff_x25 + 0x10);
        if (lVar10 == 0) goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
        if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_051ee914;
        if ((*(uint *)(lVar10 + uVar12 * 4 + 0x20) & uVar11) == 0) {
          if (*(int *)(*unaff_x19 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar4 = FUN_051e96a8(uVar4,unaff_x28);
          FUN_051e8a04(uVar4,param_1);
          uVar4 = FUN_051eba88();
          uVar3 = FUN_051e96a8(unaff_x28,uVar3);
          uVar5 = FUN_051e96a8(in_stack_00000020,param_1);
          FUN_051e8a04(uVar3,uVar5);
          uVar3 = FUN_051eba88();
          uVar5 = FUN_051e96a8(unaff_x28,unaff_x28);
          if (unaff_x22 == 0)
          goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
          uVar5 = FUN_051ec65c(uVar5,uVar5);
          uVar6 = FUN_051ea778(param_1,1);
          FUN_051e8a04(uVar5,uVar6);
          unaff_x28 = FUN_051eba88();
          lVar10 = *unaff_x19;
          if (bVar13) {
            uVar5 = in_stack_00000028;
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_02dabd98(lVar10);
            }
            goto LAB_051ee668;
          }
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02dabd98(lVar10);
          }
          uVar5 = FUN_051e96a8(param_1,param_1);
          param_1 = FUN_051ec65c(uVar5,uVar5);
        }
        else {
          if (*(int *)(*unaff_x19 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_051e96a8(uVar4,uVar3);
          uVar4 = FUN_051eba88();
          uVar5 = FUN_051e96a8(unaff_x28,uVar3);
          uVar6 = FUN_051e96a8(in_stack_00000020,param_1);
          FUN_051e8a04(uVar5,uVar6);
          unaff_x28 = FUN_051eba88();
          uVar3 = FUN_051e96a8(uVar3,uVar3);
          if (unaff_x22 == 0)
          goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
          uVar3 = FUN_051ec65c(uVar3,uVar3);
          uVar5 = FUN_051e96a8(param_1,in_stack_00000028);
          uVar5 = FUN_051ea778(uVar5,1);
          FUN_051e8a04(uVar3,uVar5);
          uVar3 = FUN_051eba88();
          if (!bVar13) {
            if (*(int *)(*unaff_x19 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar5 = FUN_051e96a8(param_1,param_1);
            param_1 = FUN_051ec65c(uVar5,uVar5);
          }
          if (*(int *)(*unaff_x19 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar5 = FUN_051e96a8(param_1,in_stack_00000028);
LAB_051ee668:
          param_1 = FUN_051eba88(uVar5);
        }
        bVar13 = false;
        bVar1 = 1 < uVar11;
        uVar11 = uVar11 >> 1;
      } while (bVar1);
      bVar13 = false;
      uVar11 = 0x80000000;
      bVar1 = false;
      bVar2 = 0 < (long)uVar12;
      uVar12 = uVar12 - 1;
    } while (bVar2);
  }
PlayFab_ProgressionModels_CreateLeaderboardDefinitionRequest___ctor:
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar4 = FUN_051e96a8(uVar4,unaff_x28);
  FUN_051e8a04(uVar4,param_1);
  lVar10 = FUN_051eba88();
  uVar4 = FUN_051e96a8(unaff_x28,uVar3);
  uVar3 = FUN_051e96a8(in_stack_00000020,param_1);
  FUN_051e8a04(uVar4,uVar3);
  lVar7 = FUN_051eba88();
  if (!bVar1) {
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar4 = FUN_051e96a8(param_1,param_1);
    if (unaff_x22 == 0) goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
    param_1 = FUN_051ec65c(uVar4,uVar4);
  }
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_051e96a8(param_1,in_stack_00000028);
  lVar8 = FUN_051eba88();
  if (0 < unaff_w20) {
    do {
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_051e96a8(lVar10,lVar7);
      lVar10 = FUN_051eba88();
      uVar4 = FUN_051e96a8(lVar7,lVar7);
      uVar3 = FUN_051ea778(lVar8,1);
      FUN_051e8a04(uVar4,uVar3);
      lVar7 = FUN_051eba88();
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dabd98(*unaff_x19);
      }
      uVar4 = FUN_051e96a8(lVar8,lVar8);
      if (unaff_x22 == 0) goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
      lVar8 = FUN_051ec65c(uVar4,uVar4);
      unaff_w20 = unaff_w20 + -1;
    } while (unaff_w20 != 0);
  }
  if (in_stack_00000008 == (long *)0x0) {
PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if ((lVar10 != 0) &&
     (lVar9 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*in_stack_00000008 + 0x40)), lVar9 == 0)) {
PlayFab_ProfilesModels_GetTitlePlayersFromXboxLiveIDsRequest___ctor:
    uVar4 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar4,0);
  }
  if ((int)in_stack_00000008[3] != 0) {
    in_stack_00000008[4] = lVar10;
    thunk_FUN_02dc1ef0(in_stack_00000008 + 4,lVar10);
    if ((lVar7 != 0) &&
       (lVar10 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*in_stack_00000008 + 0x40)), lVar10 == 0))
    goto PlayFab_ProfilesModels_GetTitlePlayersFromXboxLiveIDsRequest___ctor;
    if ((*(uint *)(in_stack_00000008 + 3) & 0xfffffffe) != 0) {
      in_stack_00000008[5] = lVar7;
      thunk_FUN_02dc1ef0(in_stack_00000008 + 5,lVar7);
      if ((lVar8 != 0) &&
         (lVar10 = thunk_FUN_02d8a53c(lVar8,*(undefined8 *)(*in_stack_00000008 + 0x40)), lVar10 == 0
         )) goto PlayFab_ProfilesModels_GetTitlePlayersFromXboxLiveIDsRequest___ctor;
      if (2 < *(uint *)(in_stack_00000008 + 3)) {
        in_stack_00000008[6] = lVar8;
        thunk_FUN_02dc1ef0(in_stack_00000008 + 6,lVar8);
        return in_stack_00000008;
      }
    }
  }
LAB_051ee914:
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


