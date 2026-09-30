/*
FUNCTION_NAME: System.Buffer$$Memmove<OVRPlugin.RoomFace>
ENTRY_POINT: 03af7a88
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


void System_Buffer__Memmove<OVRPlugin_RoomFace>
               (undefined8 param_1,uint param_2,void *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_408 [1024];
  long lStack_8;
  
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_03642964(&DAT_07b63fa8);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_0367ca58(param_4);
    }
  }
  uVar2 = FUN_05e310c0(param_1,0);
  if (param_2 < uVar2) {
    plVar3 = (long *)thunk_FUN_0367fd24(param_1,*(undefined8 *)PTR_DAT_079f4558);
    if (plVar3 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lStack_8) {
        FUN_03642a04(param_1,param_2,param_3);
        return;
      }
    }
    else {
      memcpy(auStack_408,param_3,0x400);
      lVar4 = thunk_FUN_0367fa58(**(undefined8 **)(param_4 + 0x38),auStack_408);
      if ((lVar4 == 0) ||
         (lVar5 = thunk_FUN_0367fd24(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 != 0)) {
        if (param_2 < *(uint *)(plVar3 + 3)) {
          plVar3[(long)(int)param_2 + 4] = lVar4;
          thunk_FUN_036b7ad0(plVar3 + (long)(int)param_2 + 4,lVar4);
          if (*(long *)(lVar1 + 0x28) == lStack_8) {
            return;
          }
        }
        else if (*(long *)(lVar1 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
      }
      else {
        uVar7 = thunk_FUN_0368dc04();
        if (*(long *)(lVar1 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
          FUN_03642acc(uVar7,0);
        }
      }
    }
  }
  else {
    thunk_FUN_036aa1c8(&DAT_07b65100);
    uVar7 = thunk_FUN_0367fe20();
    uVar6 = thunk_FUN_036aa1c8(&DAT_07beee88);
    if (*(long *)(lVar1 + 0x28) == lStack_8) {
      FUN_05d862e8(uVar7,uVar6,0);
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar7,param_4);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


