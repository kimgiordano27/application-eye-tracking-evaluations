/*
FUNCTION_NAME: System.Buffer$$Memmove<OVRPlugin.Vector2f>
ENTRY_POINT: 03069ec4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ray_or_cast_sink_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Buffer__Memmove<OVRPlugin_Vector2f>
               (long param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5,
               long param_6)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000018;
  
  uStack0000000000000010 = param_4;
  if (param_1 == 0) {
    FUN_02b3c81c(&DAT_06443940);
    if (*(long *)(param_6 + 0x38) == 0) {
      FUN_02b76274(param_6);
    }
  }
  uVar1 = FUN_04d941cc(param_2,0);
  if (param_3 < uVar1) {
    plVar2 = (long *)thunk_FUN_02b79548(param_2,*(undefined8 *)PTR_DAT_06313048);
    if (plVar2 == (long *)0x0) {
      FUN_02b3c8c0(param_2,param_3,&stack0x00000010);
    }
    else {
      lVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (**(undefined8 **)(param_6 + 0x38));
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      plVar2[(long)(int)param_3 + 4] = lVar3;
      thunk_FUN_02bb0e9c(plVar2 + (long)(int)param_3 + 4,lVar3);
    }
    return;
  }
  thunk_FUN_02ba3594(&DAT_06444988);
  uVar6 = thunk_FUN_02b79644();
  uVar5 = thunk_FUN_02ba3594(&DAT_064b6e68);
  FUN_04cf60a0(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar6,param_6);
}


