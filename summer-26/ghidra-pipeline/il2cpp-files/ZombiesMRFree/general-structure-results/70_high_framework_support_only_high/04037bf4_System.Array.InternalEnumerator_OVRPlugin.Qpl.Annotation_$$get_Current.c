/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$get_Current
ENTRY_POINT: 04037bf4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__get_Current
               (long *param_1,long param_2,int param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000000;
  int in_stack_00000008;
  undefined1 uStack000000000000000c;
  
  puVar1 = PTR_DAT_06f6df30;
  uStack000000000000000c = 0;
  if (param_2 == 0) {
    thunk_FUN_03037804(PTR_DAT_06f7c188);
    uVar2 = thunk_FUN_0301080c();
    puVar1 = PTR_DAT_06f9ab08;
  }
  else {
    if (param_4 != 0) {
      if (0 < param_3) {
        uStack000000000000000c = 0;
        FUN_068b42bc(&stack0x0000000c,param_2,1,0);
        (**(code **)(*param_1 + 600))
                  (param_1,uStack000000000000000c,param_4,*(undefined8 *)(*param_1 + 0x260));
        return;
      }
      in_stack_00000008 = param_3;
      uVar2 = thunk_FUN_03037804(PTR_DAT_06f6df30);
      uVar2 = thunk_FUN_0301043c(uVar2,&stack0x00000008);
      in_stack_00000000._4_4_ = 1;
      uVar3 = thunk_FUN_03037804(puVar1);
      uVar3 = thunk_FUN_0301043c(uVar3,(long)&stack0x00000000 + 4);
      uVar4 = thunk_FUN_03037804(PTR_DAT_06f9ab10);
      uVar3 = FUN_059725f8(uVar4,uVar2,uVar3,0);
      thunk_FUN_03037804(PTR_DAT_06f6d8e8);
      uVar2 = thunk_FUN_0301080c();
      uVar4 = thunk_FUN_03037804(PTR_DAT_06f9aa88);
      FUN_05a5ea40(uVar2,uVar3,uVar4,0);
      goto LAB_04037d48;
    }
    thunk_FUN_03037804(PTR_DAT_06f7c188);
    uVar2 = thunk_FUN_0301080c();
    puVar1 = PTR_DAT_06f99948;
  }
  uVar3 = thunk_FUN_03037804(puVar1);
  FUN_05a5e9c8(uVar2,uVar3,0);
LAB_04037d48:
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar2,param_5);
}


