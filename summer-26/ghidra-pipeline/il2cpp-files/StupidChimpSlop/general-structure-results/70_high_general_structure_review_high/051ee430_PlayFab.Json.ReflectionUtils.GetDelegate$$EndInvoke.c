/*
FUNCTION_NAME: PlayFab.Json.ReflectionUtils.GetDelegate$$EndInvoke
ENTRY_POINT: 051ee430
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


long * PlayFab_Json_ReflectionUtils_GetDelegate__EndInvoke(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x22;
  uint uVar12;
  ulong uVar13;
  bool bVar14;
  long unaff_x25;
  int unaff_w26;
  undefined8 unaff_x28;
  long *in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_051e89ac();
  uVar3 = FUN_051eba88();
  uVar4 = FUN_051eba88(in_stack_00000020);
  uVar12 = *(int *)(unaff_x25 + 0x18) - 1;
  uVar5 = uVar3;
  if ((int)uVar12 < 0) {
    bVar1 = true;
  }
  else {
    bVar14 = true;
    uVar13 = (ulong)uVar12;
    uVar12 = 1 << (ulong)(unaff_w26 - 1U & 0x1f);
    do {
      do {
        if ((uVar13 == 0) && (bVar1 = bVar14, uVar12 == 1))
        goto PlayFab_ProgressionModels_CreateLeaderboardDefinitionRequest___ctor;
        lVar11 = *(long *)(unaff_x25 + 0x10);
        if (lVar11 == 0) goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
        if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_051ee914;
        if ((*(uint *)(lVar11 + uVar13 * 4 + 0x20) & uVar12) == 0) {
          if (*(int *)(*unaff_x19 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar5 = FUN_051e96a8(uVar5,unaff_x28);
          FUN_051e8a04(uVar5,uVar3);
          uVar5 = FUN_051eba88();
          uVar4 = FUN_051e96a8(unaff_x28,uVar4);
          uVar6 = FUN_051e96a8(in_stack_00000020,uVar3);
          FUN_051e8a04(uVar4,uVar6);
          uVar4 = FUN_051eba88();
          uVar6 = FUN_051e96a8(unaff_x28,unaff_x28);
          if (unaff_x22 == 0)
          goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
          uVar6 = FUN_051ec65c(uVar6,uVar6);
          uVar7 = FUN_051ea778(uVar3,1);
          FUN_051e8a04(uVar6,uVar7);
          unaff_x28 = FUN_051eba88();
          lVar11 = *unaff_x19;
          if (bVar14) {
            uVar3 = in_stack_00000028;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02dabd98(lVar11);
            }
            goto LAB_051ee668;
          }
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02dabd98(lVar11);
          }
          uVar3 = FUN_051e96a8(uVar3,uVar3);
          uVar3 = FUN_051ec65c(uVar3,uVar3);
        }
        else {
          if (*(int *)(*unaff_x19 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_051e96a8(uVar5,uVar4);
          uVar5 = FUN_051eba88();
          uVar6 = FUN_051e96a8(unaff_x28,uVar4);
          uVar7 = FUN_051e96a8(in_stack_00000020,uVar3);
          FUN_051e8a04(uVar6,uVar7);
          unaff_x28 = FUN_051eba88();
          uVar4 = FUN_051e96a8(uVar4,uVar4);
          if (unaff_x22 == 0)
          goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
          uVar4 = FUN_051ec65c(uVar4,uVar4);
          uVar6 = FUN_051e96a8(uVar3,in_stack_00000028);
          uVar6 = FUN_051ea778(uVar6,1);
          FUN_051e8a04(uVar4,uVar6);
          uVar4 = FUN_051eba88();
          if (!bVar14) {
            if (*(int *)(*unaff_x19 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar3 = FUN_051e96a8(uVar3,uVar3);
            uVar3 = FUN_051ec65c(uVar3,uVar3);
          }
          if (*(int *)(*unaff_x19 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar3 = FUN_051e96a8(uVar3,in_stack_00000028);
LAB_051ee668:
          uVar3 = FUN_051eba88(uVar3);
        }
        bVar14 = false;
        bVar1 = 1 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar1);
      bVar14 = false;
      uVar12 = 0x80000000;
      bVar1 = false;
      bVar2 = 0 < (long)uVar13;
      uVar13 = uVar13 - 1;
    } while (bVar2);
  }
PlayFab_ProgressionModels_CreateLeaderboardDefinitionRequest___ctor:
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar5 = FUN_051e96a8(uVar5,unaff_x28);
  FUN_051e8a04(uVar5,uVar3);
  lVar11 = FUN_051eba88();
  uVar5 = FUN_051e96a8(unaff_x28,uVar4);
  uVar4 = FUN_051e96a8(in_stack_00000020,uVar3);
  FUN_051e8a04(uVar5,uVar4);
  lVar8 = FUN_051eba88();
  if (!bVar1) {
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar5 = FUN_051e96a8(uVar3,uVar3);
    if (unaff_x22 == 0) goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
    uVar3 = FUN_051ec65c(uVar5,uVar5);
  }
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_051e96a8(uVar3,in_stack_00000028);
  lVar9 = FUN_051eba88();
  if (0 < unaff_w20) {
    do {
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_051e96a8(lVar11,lVar8);
      lVar11 = FUN_051eba88();
      uVar5 = FUN_051e96a8(lVar8,lVar8);
      uVar4 = FUN_051ea778(lVar9,1);
      FUN_051e8a04(uVar5,uVar4);
      lVar8 = FUN_051eba88();
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dabd98(*unaff_x19);
      }
      uVar5 = FUN_051e96a8(lVar9,lVar9);
      if (unaff_x22 == 0) goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
      lVar9 = FUN_051ec65c(uVar5,uVar5);
      unaff_w20 = unaff_w20 + -1;
    } while (unaff_w20 != 0);
  }
  if (in_stack_00000008 == (long *)0x0) {
PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if ((lVar11 != 0) &&
     (lVar10 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*in_stack_00000008 + 0x40)), lVar10 == 0))
  {
PlayFab_ProfilesModels_GetTitlePlayersFromXboxLiveIDsRequest___ctor:
    uVar5 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar5,0);
  }
  if ((int)in_stack_00000008[3] != 0) {
    in_stack_00000008[4] = lVar11;
    thunk_FUN_02dc1ef0(in_stack_00000008 + 4,lVar11);
    if ((lVar8 != 0) &&
       (lVar11 = thunk_FUN_02d8a53c(lVar8,*(undefined8 *)(*in_stack_00000008 + 0x40)), lVar11 == 0))
    goto PlayFab_ProfilesModels_GetTitlePlayersFromXboxLiveIDsRequest___ctor;
    if ((*(uint *)(in_stack_00000008 + 3) & 0xfffffffe) != 0) {
      in_stack_00000008[5] = lVar8;
      thunk_FUN_02dc1ef0(in_stack_00000008 + 5,lVar8);
      if ((lVar9 != 0) &&
         (lVar11 = thunk_FUN_02d8a53c(lVar9,*(undefined8 *)(*in_stack_00000008 + 0x40)), lVar11 == 0
         )) goto PlayFab_ProfilesModels_GetTitlePlayersFromXboxLiveIDsRequest___ctor;
      if (2 < *(uint *)(in_stack_00000008 + 3)) {
        in_stack_00000008[6] = lVar9;
        thunk_FUN_02dc1ef0(in_stack_00000008 + 6,lVar9);
        return in_stack_00000008;
      }
    }
  }
LAB_051ee914:
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


