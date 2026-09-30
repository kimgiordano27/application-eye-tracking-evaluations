/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$Setup
ENTRY_POINT: 076e8bfc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x076e8f54) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__Setup
               (long param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  long local_60;
  long lStack_58;
  undefined8 local_50;
  char local_34 [4];
  
  if ((DAT_0a522e9e & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f21ad0);
    FUN_04447ba8(PTR_DAT_09f2f398);
    FUN_04447ba8(PTR_DAT_09f2f3a0);
    FUN_04447ba8(PTR_DAT_09f2f3a8);
    FUN_04447ba8(PTR_DAT_09f2f3b0);
    DAT_0a522e9e = 1;
  }
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  local_34[0] = '\0';
  switch(param_4) {
  case 0:
    cVar7 = *(char *)(param_1 + 0x43);
    break;
  case 1:
  case 4:
    cVar7 = *(char *)(param_1 + 0x44);
    break;
  case 2:
    cVar7 = *(char *)(param_1 + 0x42);
    break;
  case 3:
    cVar7 = *(char *)(param_1 + 0x41);
    break;
  default:
    goto switchD_076e8c9c_default;
  }
  if (cVar7 == '\0') {
    return;
  }
switchD_076e8c9c_default:
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  iVar2 = *(int *)(param_2 + 0x10);
  if (param_3 == 0) {
    if (*(int *)(param_1 + 100) < iVar2) {
      uVar8 = System_Globalization_HijriCalendar__GetDaysInYear
                        (param_2,0,*(int *)(param_1 + 100) + -0xb,0);
      param_2 = FUN_078a7764(uVar8,*(undefined8 *)PTR_DAT_09f2f3a8,0);
    }
    param_3 = 0;
  }
  else {
    iVar3 = *(int *)(param_3 + 0x10);
    iVar4 = *(int *)(param_1 + 100);
    if (iVar4 < iVar3 + iVar2) {
      iVar1 = iVar4;
      if (iVar4 < 0) {
        iVar1 = iVar4 + 1;
      }
      iVar1 = iVar1 >> 1;
      if (iVar2 < iVar1) {
        iVar1 = iVar4 - iVar2;
      }
      else {
        if (iVar3 < iVar1) {
          uVar8 = System_Globalization_HijriCalendar__GetDaysInYear
                            (param_2,0,(iVar4 - iVar3) + -0xb,0);
          param_2 = FUN_078a7764(uVar8,*(undefined8 *)PTR_DAT_09f2f3a8,0);
          goto LAB_076e8de0;
        }
        uVar8 = System_Globalization_HijriCalendar__GetDaysInYear(param_2,0,iVar1 + -0xb,0);
        param_2 = FUN_078a7764(uVar8,*(undefined8 *)PTR_DAT_09f2f3a8,0);
      }
      uVar8 = System_Globalization_HijriCalendar__GetDaysInYear(param_3,0,iVar1 + -0xc,0);
      param_3 = FUN_078a7764(uVar8,*(undefined8 *)PTR_DAT_09f2f3b0,0);
    }
  }
LAB_076e8de0:
  local_78 = param_2;
  thunk_FUN_044bb4b4(&local_78,param_2);
  lStack_70 = param_3;
  thunk_FUN_044bb4b4(&lStack_70,param_3);
  local_68 = CONCAT44(local_68._4_4_,param_4);
  if (*(long *)(param_1 + 0x248) == 0) {
    puVar9 = (undefined4 *)(param_1 + 0x2fc);
    uVar8 = *(undefined8 *)(param_1 + 0x2f0);
    puVar10 = (undefined4 *)(param_1 + 0x2f8);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_09f21ad0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar8 = FUN_07a1e9e8(0);
    uVar8 = FUN_07a2054c(uVar8,*(undefined8 *)(param_1 + 0x2e0),0);
    puVar10 = (undefined4 *)(param_1 + 0x2e8);
    puVar9 = (undefined4 *)(param_1 + 0x2ec);
  }
  uVar5 = *puVar10;
  uVar6 = *puVar9;
  uVar11 = *(undefined8 *)(param_1 + 0x250);
  local_34[0] = '\0';
  FUN_07aa2674(uVar11,local_34,0);
  if (*(long *)(param_1 + 0x240) != 0) {
    lStack_58 = lStack_70;
    local_60 = local_78;
    local_50 = local_68;
    FUN_075940a0(*(long *)(param_1 + 0x240),&local_60,*(undefined8 *)PTR_DAT_09f2f398);
    if (*(long *)(param_1 + 0x248) != 0) {
      FUN_07593d58(*(long *)(param_1 + 0x248),uVar8,CONCAT44(uVar6,uVar5),
                   *(undefined8 *)PTR_DAT_09f2f3a0);
    }
    if (param_4 == 2) {
      *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) + 1;
    }
    else if (param_4 == 3) {
      *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
    }
    else {
      *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + 1;
    }
    if (local_34[0] != '\0') {
      thunk_FUN_04455fec(uVar11,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


