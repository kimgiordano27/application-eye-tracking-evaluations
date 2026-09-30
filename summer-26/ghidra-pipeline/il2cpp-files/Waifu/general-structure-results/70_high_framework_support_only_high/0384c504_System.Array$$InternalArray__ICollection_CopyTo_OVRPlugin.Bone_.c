/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Bone>
ENTRY_POINT: 0384c504
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Bone>
               (long param_1,long param_2,undefined8 *param_3,int param_4,int param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined *puVar4;
  
  if (param_1 == 0) {
    FUN_0338f674(param_6);
  }
  if (param_2 == 0) {
    FUN_033d1ba8(&DAT_083c8a10);
    uVar1 = thunk_FUN_03398a84();
    uVar2 = FUN_033d1ba8(&DAT_0844fcf0);
    FUN_0677f140(uVar1,uVar2,0);
    goto LAB_0384c634;
  }
  if (param_4 < 0) {
LAB_0384c58c:
    FUN_033d1ba8(&DAT_083c8a18);
    uVar1 = thunk_FUN_03398a84();
    uVar2 = FUN_033d1ba8(&DAT_084587c8);
    puVar4 = &DAT_0843d338;
  }
  else {
    if (*(int *)(param_2 + 0x18) < param_4) goto LAB_0384c58c;
    if ((-1 < param_5) && (param_5 <= *(int *)(param_2 + 0x18) - param_4)) {
      in_stack_00000030 = param_3[2];
      in_stack_00000028 = param_3[1];
      in_stack_00000020 = *param_3;
      FUN_0385fb98(param_2,&stack0x00000020,param_4,param_5,
                   *(undefined8 *)(*(long *)(param_6 + 0x38) + 0x10));
      return;
    }
    FUN_033d1ba8(&DAT_083c8a18);
    uVar1 = thunk_FUN_03398a84();
    uVar2 = FUN_033d1ba8(&DAT_08451328);
    puVar4 = &DAT_08437fe8;
  }
  uVar3 = FUN_033d1ba8(puVar4);
  FUN_06782c1c(uVar1,uVar2,uVar3,0);
LAB_0384c634:
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(uVar1,param_6);
}


