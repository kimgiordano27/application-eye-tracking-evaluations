/*
FUNCTION_NAME: System.Buffer$$Memmove<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03af7aa8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Buffer__Memmove<OVRPlugin_SpaceQueryResult>
               (long param_1,undefined8 param_2,uint param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  void *unaff_x21;
  long unaff_x24;
  
  if (*(long *)(param_5 + 0x38) == 0) {
    FUN_03642964(&DAT_07b63fa8);
    if (*(long *)(unaff_x19 + 0x38) == 0) {
      FUN_0367ca58();
    }
  }
  uVar1 = FUN_05e310c0(param_2,0);
  if (param_3 < uVar1) {
    plVar2 = (long *)thunk_FUN_0367fd24(param_2,*(undefined8 *)PTR_DAT_079f4558);
    if (plVar2 == (long *)0x0) {
      if (*(long *)(unaff_x24 + 0x28) == param_1) {
        FUN_03642a04(param_2,param_3);
        return;
      }
    }
    else {
      memcpy(&stack0x00000008,unaff_x21,0x400);
      lVar3 = thunk_FUN_0367fa58(**(undefined8 **)(unaff_x19 + 0x38),&stack0x00000008);
      if ((lVar3 == 0) ||
         (lVar4 = thunk_FUN_0367fd24(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 != 0)) {
        if (param_3 < *(uint *)(plVar2 + 3)) {
          plVar2[(long)(int)param_3 + 4] = lVar3;
          thunk_FUN_036b7ad0(plVar2 + (long)(int)param_3 + 4,lVar3);
          if (*(long *)(unaff_x24 + 0x28) == param_1) {
            return;
          }
        }
        else if (*(long *)(unaff_x24 + 0x28) == param_1) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
      }
      else {
        uVar6 = thunk_FUN_0368dc04();
        if (*(long *)(unaff_x24 + 0x28) == param_1) {
                    /* WARNING: Subroutine does not return */
          FUN_03642acc(uVar6,0);
        }
      }
    }
  }
  else {
    thunk_FUN_036aa1c8(&DAT_07b65100);
    uVar6 = thunk_FUN_0367fe20();
    uVar5 = thunk_FUN_036aa1c8(&DAT_07beee88);
    if (*(long *)(unaff_x24 + 0x28) == param_1) {
      FUN_05d862e8(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


