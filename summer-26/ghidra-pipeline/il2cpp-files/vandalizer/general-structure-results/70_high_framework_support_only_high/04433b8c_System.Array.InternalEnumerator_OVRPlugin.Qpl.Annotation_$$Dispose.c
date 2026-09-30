/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$Dispose
ENTRY_POINT: 04433b8c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__Dispose
               (long *param_1,long param_2,int param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_0759b388;
  local_28 = 0;
  if (param_2 == 0) {
    thunk_FUN_03257e30(PTR_DAT_0759c0f0);
    uVar2 = thunk_FUN_0322f148();
    puVar1 = PTR_DAT_075d8ce8;
  }
  else {
    if (param_4 != 0) {
      if (7 < param_3) {
        local_28 = 0;
        FUN_06dd33f0(&local_28,param_2,8,0);
        (**(code **)(*param_1 + 600))(local_28,param_1,param_4,*(undefined8 *)(*param_1 + 0x260));
        return;
      }
      local_2c = param_3;
      uVar2 = thunk_FUN_0322ed78(*(undefined8 *)(PTR_DAT_0759b388 + 0x48),&local_2c);
      local_30 = 8;
      uVar3 = thunk_FUN_0322ed78(*(undefined8 *)(puVar1 + 0x48),&local_30);
      uVar4 = thunk_FUN_03257e30(PTR_DAT_075d8cf0);
      uVar3 = FUN_05c89614(uVar4,uVar2,uVar3,0);
      thunk_FUN_03257e30(PTR_DAT_0759c0b8);
      uVar2 = thunk_FUN_0322f148();
      uVar4 = thunk_FUN_03257e30(PTR_DAT_075d8c58);
      FUN_05d6f3dc(uVar2,uVar3,uVar4,0);
      goto LAB_04433ce4;
    }
    thunk_FUN_03257e30(PTR_DAT_0759c0f0);
    uVar2 = thunk_FUN_0322f148();
    puVar1 = PTR_DAT_075d7260;
  }
  uVar3 = thunk_FUN_03257e30(puVar1);
  FUN_05d6f364(uVar2,uVar3,0);
LAB_04433ce4:
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar2,param_5);
}


