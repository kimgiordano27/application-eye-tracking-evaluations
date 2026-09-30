/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04a5aa74
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerator_Reset
               (undefined8 param_1,long param_2,long param_3,int param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000000;
  int in_stack_00000008;
  undefined1 uStack000000000000000c;
  
  puVar1 = PTR_DAT_08486760;
  uStack000000000000000c = 0;
  if (param_2 == 0) {
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar2 = thunk_FUN_03ac74bc();
    puVar1 = PTR_DAT_08492170;
  }
  else {
    if (param_3 != 0) {
      if (0 < param_4) {
        uStack000000000000000c =
             FUN_04a5a844(param_1,param_2,
                          *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x48));
        FUN_07c3d5c0(param_3,&stack0x0000000c,1,0);
        return;
      }
      in_stack_00000008 = param_4;
      uVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x48),&stack0x00000008);
      in_stack_00000000._4_4_ = 1;
      uVar3 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),(long)&stack0x00000000 + 4);
      uVar4 = thunk_FUN_03af1434(PTR_DAT_08494100);
      uVar3 = FUN_065ce754(uVar4,uVar2,uVar3,0);
      thunk_FUN_03af1434(PTR_DAT_08488490);
      uVar2 = thunk_FUN_03ac74bc();
      uVar4 = thunk_FUN_03af1434(PTR_DAT_08494068);
      FUN_066af718(uVar2,uVar3,uVar4,0);
      goto LAB_04a5abbc;
    }
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar2 = thunk_FUN_03ac74bc();
    puVar1 = PTR_DAT_084940f8;
  }
  uVar3 = thunk_FUN_03af1434(puVar1);
  FUN_066af6a0(uVar2,uVar3,0);
LAB_04a5abbc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar2,param_5);
}


