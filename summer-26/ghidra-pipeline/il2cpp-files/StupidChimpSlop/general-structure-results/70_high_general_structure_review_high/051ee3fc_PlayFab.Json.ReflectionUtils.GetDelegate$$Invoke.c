/*
FUNCTION_NAME: PlayFab.Json.ReflectionUtils.GetDelegate$$Invoke
ENTRY_POINT: 051ee3fc
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


long * PlayFab_Json_ReflectionUtils_GetDelegate__Invoke(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x22;
  uint uVar13;
  ulong uVar14;
  bool bVar15;
  long unaff_x25;
  long *in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  iVar3 = FUN_051ec5b0();
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*unaff_x19);
  }
  FUN_051e89ac(2);
  uVar4 = FUN_051eba88();
  FUN_051e89ac(1);
  uVar5 = FUN_051eba88();
  uVar6 = FUN_051eba88(in_stack_00000020);
  uVar13 = *(int *)(unaff_x25 + 0x18) - 1;
  uVar7 = uVar5;
  if ((int)uVar13 < 0) {
    bVar1 = true;
  }
  else {
    bVar15 = true;
    uVar14 = (ulong)uVar13;
    uVar13 = 1 << (ulong)(iVar3 - 1U & 0x1f);
    do {
      do {
        if ((uVar14 == 0) && (bVar1 = bVar15, uVar13 == 1))
        goto PlayFab_ProgressionModels_CreateLeaderboardDefinitionRequest___ctor;
        lVar12 = *(long *)(unaff_x25 + 0x10);
        if (lVar12 == 0) goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
        if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_051ee914;
        if ((*(uint *)(lVar12 + uVar14 * 4 + 0x20) & uVar13) == 0) {
          if (*(int *)(*unaff_x19 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar7 = FUN_051e96a8(uVar7,uVar4);
          FUN_051e8a04(uVar7,uVar5);
          uVar7 = FUN_051eba88();
          uVar6 = FUN_051e96a8(uVar4,uVar6);
          uVar8 = FUN_051e96a8(in_stack_00000020,uVar5);
          FUN_051e8a04(uVar6,uVar8);
          uVar6 = FUN_051eba88();
          uVar4 = FUN_051e96a8(uVar4,uVar4);
          if (unaff_x22 == 0)
          goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
          uVar4 = FUN_051ec65c(uVar4,uVar4);
          uVar8 = FUN_051ea778(uVar5,1);
          FUN_051e8a04(uVar4,uVar8);
          uVar4 = FUN_051eba88();
          lVar12 = *unaff_x19;
          if (bVar15) {
            uVar5 = in_stack_00000028;
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_02dabd98(lVar12);
            }
            goto LAB_051ee668;
          }
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02dabd98(lVar12);
          }
          uVar5 = FUN_051e96a8(uVar5,uVar5);
          uVar5 = FUN_051ec65c(uVar5,uVar5);
        }
        else {
          if (*(int *)(*unaff_x19 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_051e96a8(uVar7,uVar6);
          uVar7 = FUN_051eba88();
          uVar4 = FUN_051e96a8(uVar4,uVar6);
          uVar8 = FUN_051e96a8(in_stack_00000020,uVar5);
          FUN_051e8a04(uVar4,uVar8);
          uVar4 = FUN_051eba88();
          uVar6 = FUN_051e96a8(uVar6,uVar6);
          if (unaff_x22 == 0)
          goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
          uVar6 = FUN_051ec65c(uVar6,uVar6);
          uVar8 = FUN_051e96a8(uVar5,in_stack_00000028);
          uVar8 = FUN_051ea778(uVar8,1);
          FUN_051e8a04(uVar6,uVar8);
          uVar6 = FUN_051eba88();
          if (!bVar15) {
            if (*(int *)(*unaff_x19 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar5 = FUN_051e96a8(uVar5,uVar5);
            uVar5 = FUN_051ec65c(uVar5,uVar5);
          }
          if (*(int *)(*unaff_x19 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar5 = FUN_051e96a8(uVar5,in_stack_00000028);
LAB_051ee668:
          uVar5 = FUN_051eba88(uVar5);
        }
        bVar15 = false;
        bVar1 = 1 < uVar13;
        uVar13 = uVar13 >> 1;
      } while (bVar1);
      bVar15 = false;
      uVar13 = 0x80000000;
      bVar1 = false;
      bVar2 = 0 < (long)uVar14;
      uVar14 = uVar14 - 1;
    } while (bVar2);
  }
PlayFab_ProgressionModels_CreateLeaderboardDefinitionRequest___ctor:
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar7 = FUN_051e96a8(uVar7,uVar4);
  FUN_051e8a04(uVar7,uVar5);
  lVar12 = FUN_051eba88();
  uVar7 = FUN_051e96a8(uVar4,uVar6);
  uVar4 = FUN_051e96a8(in_stack_00000020,uVar5);
  FUN_051e8a04(uVar7,uVar4);
  lVar9 = FUN_051eba88();
  if (!bVar1) {
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar7 = FUN_051e96a8(uVar5,uVar5);
    if (unaff_x22 == 0) goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
    uVar5 = FUN_051ec65c(uVar7,uVar7);
  }
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_051e96a8(uVar5,in_stack_00000028);
  lVar10 = FUN_051eba88();
  if (0 < unaff_w20) {
    do {
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_051e96a8(lVar12,lVar9);
      lVar12 = FUN_051eba88();
      uVar7 = FUN_051e96a8(lVar9,lVar9);
      uVar4 = FUN_051ea778(lVar10,1);
      FUN_051e8a04(uVar7,uVar4);
      lVar9 = FUN_051eba88();
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dabd98(*unaff_x19);
      }
      uVar7 = FUN_051e96a8(lVar10,lVar10);
      if (unaff_x22 == 0) goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
      lVar10 = FUN_051ec65c(uVar7,uVar7);
      unaff_w20 = unaff_w20 + -1;
    } while (unaff_w20 != 0);
  }
  if (in_stack_00000008 == (long *)0x0) {
PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if ((lVar12 != 0) &&
     (lVar11 = thunk_FUN_02d8a53c(lVar12,*(undefined8 *)(*in_stack_00000008 + 0x40)), lVar11 == 0))
  {
PlayFab_ProfilesModels_GetTitlePlayersFromXboxLiveIDsRequest___ctor:
    uVar7 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar7,0);
  }
  if ((int)in_stack_00000008[3] != 0) {
    in_stack_00000008[4] = lVar12;
    thunk_FUN_02dc1ef0(in_stack_00000008 + 4,lVar12);
    if ((lVar9 != 0) &&
       (lVar12 = thunk_FUN_02d8a53c(lVar9,*(undefined8 *)(*in_stack_00000008 + 0x40)), lVar12 == 0))
    goto PlayFab_ProfilesModels_GetTitlePlayersFromXboxLiveIDsRequest___ctor;
    if ((*(uint *)(in_stack_00000008 + 3) & 0xfffffffe) != 0) {
      in_stack_00000008[5] = lVar9;
      thunk_FUN_02dc1ef0(in_stack_00000008 + 5,lVar9);
      if ((lVar10 != 0) &&
         (lVar12 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*in_stack_00000008 + 0x40)),
         lVar12 == 0)) goto PlayFab_ProfilesModels_GetTitlePlayersFromXboxLiveIDsRequest___ctor;
      if (2 < *(uint *)(in_stack_00000008 + 3)) {
        in_stack_00000008[6] = lVar10;
        thunk_FUN_02dc1ef0(in_stack_00000008 + 6,lVar10);
        return in_stack_00000008;
      }
    }
  }
LAB_051ee914:
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


