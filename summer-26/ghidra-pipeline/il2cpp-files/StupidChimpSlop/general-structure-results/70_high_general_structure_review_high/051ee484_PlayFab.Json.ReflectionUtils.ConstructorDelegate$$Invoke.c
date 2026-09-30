/*
FUNCTION_NAME: PlayFab.Json.ReflectionUtils.ConstructorDelegate$$Invoke
ENTRY_POINT: 051ee484
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


long * PlayFab_Json_ReflectionUtils_ConstructorDelegate__Invoke(long param_1)

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
  uint uVar7;
  uint unaff_w23;
  ulong uVar8;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  long *in_stack_00000008;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_051ee914;
    if ((*(uint *)(lVar6 + unaff_x24 * 4 + 0x20) & unaff_w23) == 0) {
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
      if (unaff_x22 == 0) goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
      uVar1 = FUN_051ec65c(uVar1,uVar1);
      uVar2 = FUN_051ea778(unaff_x26,1);
      FUN_051e8a04(uVar1,uVar2);
      unaff_x28 = FUN_051eba88();
      lVar6 = *unaff_x19;
      if ((unaff_x25 & 1) != 0) {
        uVar1 = in_stack_00000028;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02dabd98(lVar6);
        }
        goto LAB_051ee668;
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dabd98(lVar6);
      }
      uVar1 = FUN_051e96a8(unaff_x26,unaff_x26);
      unaff_x26 = FUN_051ec65c(uVar1,uVar1);
    }
    else {
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_051e96a8(unaff_x27,unaff_x29);
      unaff_x27 = FUN_051eba88();
      uVar1 = FUN_051e96a8(unaff_x28,unaff_x29);
      uVar2 = FUN_051e96a8(in_stack_00000020,unaff_x26);
      FUN_051e8a04(uVar1,uVar2);
      unaff_x28 = FUN_051eba88();
      uVar1 = FUN_051e96a8(unaff_x29,unaff_x29);
      if (unaff_x22 == 0) goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
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
LAB_051ee668:
      unaff_x26 = FUN_051eba88(uVar1);
    }
    uVar7 = unaff_w23 >> 1;
    uVar8 = unaff_x24;
    if (unaff_w23 < 2) {
      uVar8 = unaff_x24 - 1;
      uVar7 = 0x80000000;
      if ((long)unaff_x24 < 1) break;
    }
    unaff_x25 = 0;
    param_1 = in_stack_00000018;
    unaff_x24 = uVar8;
    unaff_w23 = uVar7;
  } while ((uVar8 != 0) || (uVar7 != 1));
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar1 = FUN_051e96a8(unaff_x27,unaff_x28);
  FUN_051e8a04(uVar1,unaff_x26);
  lVar6 = FUN_051eba88();
  uVar1 = FUN_051e96a8(unaff_x28,unaff_x29);
  uVar2 = FUN_051e96a8(in_stack_00000020,unaff_x26);
  FUN_051e8a04(uVar1,uVar2);
  lVar3 = FUN_051eba88();
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar1 = FUN_051e96a8(unaff_x26,unaff_x26);
  if (unaff_x22 != 0) {
    uVar1 = FUN_051ec65c(uVar1,uVar1);
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_051e96a8(uVar1,in_stack_00000028);
    lVar4 = FUN_051eba88();
    if (0 < unaff_w20) {
      do {
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_051e96a8(lVar6,lVar3);
        lVar6 = FUN_051eba88();
        uVar1 = FUN_051e96a8(lVar3,lVar3);
        uVar2 = FUN_051ea778(lVar4,1);
        FUN_051e8a04(uVar1,uVar2);
        lVar3 = FUN_051eba88();
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_02dabd98(*unaff_x19);
        }
        uVar1 = FUN_051e96a8(lVar4,lVar4);
        if (unaff_x22 == 0)
        goto PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor;
        lVar4 = FUN_051ec65c(uVar1,uVar1);
        unaff_w20 = unaff_w20 + -1;
      } while (unaff_w20 != 0);
    }
    if (in_stack_00000008 != (long *)0x0) {
      if ((lVar6 != 0) &&
         (lVar5 = thunk_FUN_02d8a53c(lVar6,*(undefined8 *)(*in_stack_00000008 + 0x40)), lVar5 == 0))
      {
PlayFab_ProfilesModels_GetTitlePlayersFromXboxLiveIDsRequest___ctor:
        uVar1 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar1,0);
      }
      if ((int)in_stack_00000008[3] != 0) {
        in_stack_00000008[4] = lVar6;
        thunk_FUN_02dc1ef0(in_stack_00000008 + 4,lVar6);
        if ((lVar3 != 0) &&
           (lVar6 = thunk_FUN_02d8a53c(lVar3,*(undefined8 *)(*in_stack_00000008 + 0x40)), lVar6 == 0
           )) goto PlayFab_ProfilesModels_GetTitlePlayersFromXboxLiveIDsRequest___ctor;
        if ((*(uint *)(in_stack_00000008 + 3) & 0xfffffffe) != 0) {
          in_stack_00000008[5] = lVar3;
          thunk_FUN_02dc1ef0(in_stack_00000008 + 5,lVar3);
          if ((lVar4 != 0) &&
             (lVar6 = thunk_FUN_02d8a53c(lVar4,*(undefined8 *)(*in_stack_00000008 + 0x40)),
             lVar6 == 0)) goto PlayFab_ProfilesModels_GetTitlePlayersFromXboxLiveIDsRequest___ctor;
          if (2 < *(uint *)(in_stack_00000008 + 3)) {
            in_stack_00000008[6] = lVar4;
            thunk_FUN_02dc1ef0(in_stack_00000008 + 6,lVar4);
            return in_stack_00000008;
          }
        }
      }
LAB_051ee914:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
  }
PlayFab_ProfilesModels_GetTitlePlayersFromProviderIDsResponse___ctor:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


