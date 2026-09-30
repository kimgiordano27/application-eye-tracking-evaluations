/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.EyeGazeState>
ENTRY_POINT: 01b7f194
PROGRAM: sharks-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_EyeGazeState>
               (long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 in_stack_00000010;
  
  if (param_1 == (long *)0x0) {
    FUN_0185db00();
    param_1 = *(long **)(unaff_x19 + 0x38);
  }
  in_stack_00000010 = 0;
  if (*(long *)(*param_1 + 0x38) == 0) {
    FUN_0185db00();
    param_1 = *(long **)(unaff_x19 + 0x38);
  }
  lVar1 = param_1[3];
  in_stack_00000010 = param_2;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar2 = FUN_028dfea8(&stack0x00000010,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10));
  if ((uVar2 & 1) == 0) {
    lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0185daa4();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_028df44c(&stack0x00000010,unaff_w20,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28));
    return;
  }
  thunk_FUN_01851c08(PTR_DAT_037f9268);
  uVar3 = thunk_FUN_018617ec();
  uVar4 = thunk_FUN_01851c08(PTR_DAT_037f93c0);
  uVar3 = FUN_02a473b8(uVar4,uVar3,0);
  thunk_FUN_01851c08(PTR_DAT_037f8d50);
  uVar4 = thunk_FUN_01861bbc();
  FUN_02bcf690(uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar4);
}


