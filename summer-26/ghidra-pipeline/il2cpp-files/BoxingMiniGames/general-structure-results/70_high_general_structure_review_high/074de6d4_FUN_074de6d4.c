/*
FUNCTION_NAME: FUN_074de6d4
ENTRY_POINT: 074de6d4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_074de6d4(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = FUN_05c97640(param_1,0);
  if ((uVar1 & 1) == 0) {
    if (param_2 != 0) {
      if (DAT_07ef4488 == (code *)0x0) {
        DAT_07ef4488 = (code *)FUN_03642928("UnityEngine.Analytics.Analytics::IsInitialized()");
      }
      uVar1 = (*DAT_07ef4488)();
      if ((uVar1 & 1) != 0) {
        uVar2 = FUN_074de2cc(param_1,param_2,param_3,param_4);
        return uVar2;
      }
      return 1;
    }
    thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
    uVar2 = thunk_FUN_0367fe20();
    puVar4 = Method_System_Nullable<ReadOnlyArray<InputDevice>>_get_HasValue__;
  }
  else {
    thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
    uVar2 = thunk_FUN_0367fe20();
    puVar4 = Method_System_Nullable<ReadOnlyArray<InputControl>>_get_Value__;
  }
  uVar3 = thunk_FUN_036aa1c8(puVar4);
  FUN_05d84c94(uVar2,uVar3,0);
  uVar3 = thunk_FUN_036aa1c8(Method_System_Nullable<ReadOnlyArray<InputDevice>>_get_Value__);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar2,uVar3);
}


