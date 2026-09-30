/*
FUNCTION_NAME: PlayFab.Json.ReflectionUtils.ConstructorDelegate$$EndInvoke
ENTRY_POINT: 051ee4b8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x051ee658) */
/* WARNING: Removing unreachable block (ram,0x051ee65c) */
/* WARNING: Removing unreachable block (ram,0x051ee664) */

long * PlayFab_Json_ReflectionUtils_ConstructorDelegate__EndInvoke(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x22;
  ulong unaff_x23;
  ulong uVar7;
  ulong unaff_x24;
  ulong uVar8;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  long *in_stack_00000008;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x051ee4b8:
  FUN_051e96a8(unaff_x27,unaff_x29);
  unaff_x27 = FUN_051eba88();
  uVar1 = FUN_051e96a8(unaff_x28,unaff_x29);
  uVar2 = FUN_051e96a8(in_stack_00000020,unaff_x26);
  FUN_051e8a04(uVar1,uVar2);
  unaff_x28 = FUN_051eba88();
  uVar1 = FUN_051e96a8(unaff_x29,unaff_x29);
  if (unaff_x22 != 0) {
    uVar1 = FUN_051ec65c(uVar1,uVar1);
    uVar2 = FUN_051e96a8(unaff_x26,in_stack_00000028);
    uVar2 = FUN_051ea778(uVar2,1);
    FUN_051e8a04(uVar1,uVar2);
    unaff_x29 = FUN_051eba88();
    if ((unaff_x25 & 1) == 0) {
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar1 = FUN_051e96a8(unaff_x26,unaff_x26);
      unaff_x26 = FUN_051ec65c(uVar1,uVar1);
    }
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar1 = FUN_051e96a8(unaff_x26,in_stack_00000028);
    unaff_x26 = FUN_051eba88(uVar1);
    uVar7 = unaff_x23;
    uVar8 = unaff_x24;
    do {
      unaff_x23 = uVar7 >> 1 & 0x7fffffff;
      unaff_x24 = uVar8;
      if ((uint)uVar7 < 2) {
        unaff_x24 = uVar8 - 1;
        unaff_x23 = 0x80000000;
        if (0 < (long)uVar8) goto LAB_051ee474;
PlayFab_ProgressionModels_CreateLeaderboardDefinitionRequest___ctor:
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar1 = FUN_051e96a8(unaff_x27,unaff_x28);
        FUN_051e8a04(uVar1,unaff_x26);
        lVar3 = FUN_051eba88();
        uVar1 = FUN_051e96a8(unaff_x28,unaff_x29);
        uVar2 = FUN_051e96a8(in_stack_00000020,unaff_x26);
        FUN_051e8a04(uVar1,uVar2);
        lVar4 = FUN_051eba88();
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar1 = FUN_051e96a8(unaff_x26,unaff_x26);
        if (unaff_x22 == 0) break;
        uVar1 = FUN_051ec65c(uVar1,uVar1);
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_051e96a8(uVar1,in_stack_00000028);
        lVar5 = FUN_051eba88();
        if (unaff_w20 < 1) goto LAB_051ee84c;
        goto PlayFab_ProgressionModels_IncrementLeaderboardVersionResponse___ctor;
      }
LAB_051ee474:
      unaff_x25 = 0;
      if ((unaff_x24 == 0) && ((uint)unaff_x23 == 1))
      goto PlayFab_ProgressionModels_CreateLeaderboardDefinitionRequest___ctor;
      lVar3 = *(long *)(in_stack_00000018 + 0x10);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x24) goto LAB_051ee914;
      if ((*(uint *)(lVar3 + unaff_x24 * 4 + 0x20) & (uint)unaff_x23) != 0) goto code_r0x051ee4b0;
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar1 = FUN_051e96a8(unaff_x27,unaff_x28);
      FUN_051e8a04(uVar1,unaff_x26);
      unaff_x27 = FUN_051eba88();
      uVar1 = FUN_051e96a8(unaff_x28,unaff_x29);
      uVar2 = FUN_051e96a8(in_stack_00000020,unaff_x26);
      FUN_051e8a04(uVar1,uVar2);
      unaff_x29 = FUN_051eba88();
      uVar1 = FUN_051e96a8(unaff_x28,unaff_x28);
      if (unaff_x22 == 0) break;
      uVar1 = FUN_051ec65c(uVar1,uVar1);
      uVar2 = FUN_051ea778(unaff_x26,1);
      FUN_051e8a04(uVar1,uVar2);
      unaff_x28 = FUN_051eba88();
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dabd98(*unaff_x19);
      }
      uVar1 = FUN_051e96a8(unaff_x26,unaff_x26);
      unaff_x26 = FUN_051ec65c(uVar1,uVar1);
      uVar7 = unaff_x23;
      uVar8 = unaff_x24;
    } while( true );
  }
  goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
code_r0x051ee4b0:
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  goto code_r0x051ee4b8;
  while( true ) {
    lVar5 = FUN_051ec65c(uVar1,uVar1);
    unaff_w20 = unaff_w20 + -1;
    if (unaff_w20 == 0) break;
PlayFab_ProgressionModels_IncrementLeaderboardVersionResponse___ctor:
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_051e96a8(lVar3,lVar4);
    lVar3 = FUN_051eba88();
    uVar1 = FUN_051e96a8(lVar4,lVar4);
    uVar2 = FUN_051ea778(lVar5,1);
    FUN_051e8a04(uVar1,uVar2);
    lVar4 = FUN_051eba88();
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_02dabd98(*unaff_x19);
    }
    uVar1 = FUN_051e96a8(lVar5,lVar5);
    if (unaff_x22 == 0) goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
  }
LAB_051ee84c:
  if (in_stack_00000008 == (long *)0x0) {
PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if ((lVar3 != 0) &&
     (lVar6 = thunk_FUN_02d8a53c(lVar3,*(undefined8 *)(*in_stack_00000008 + 0x40)), lVar6 == 0)) {
PlayFab_ProfilesModels_GetTitlePlayersFromXboxLiveIDsRequest___ctor:
    uVar1 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar1,0);
  }
  if ((int)in_stack_00000008[3] != 0) {
    in_stack_00000008[4] = lVar3;
    thunk_FUN_02dc1ef0(in_stack_00000008 + 4,lVar3);
    if ((lVar4 != 0) &&
       (lVar3 = thunk_FUN_02d8a53c(lVar4,*(undefined8 *)(*in_stack_00000008 + 0x40)), lVar3 == 0))
    goto PlayFab_ProfilesModels_GetTitlePlayersFromXboxLiveIDsRequest___ctor;
    if ((*(uint *)(in_stack_00000008 + 3) & 0xfffffffe) != 0) {
      in_stack_00000008[5] = lVar4;
      thunk_FUN_02dc1ef0(in_stack_00000008 + 5,lVar4);
      if ((lVar5 != 0) &&
         (lVar3 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*in_stack_00000008 + 0x40)), lVar3 == 0))
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


