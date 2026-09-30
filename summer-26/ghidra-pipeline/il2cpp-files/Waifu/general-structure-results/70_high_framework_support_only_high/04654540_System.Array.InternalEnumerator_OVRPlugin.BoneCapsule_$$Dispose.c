/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$Dispose
ENTRY_POINT: 04654540
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__Dispose(ulong param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w21;
  long unaff_x22;
  int in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_08401a40,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x22 + 0x358) = 1;
  }
  if ((-1 < unaff_w21) && (unaff_w21 < *param_2)) {
    FUN_03c255f0(*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4),param_2,unaff_w21,
                 DAT_08401a40);
    return;
  }
  uVar1 = FUN_033d1ba8(&DAT_083cda98);
  uVar1 = thunk_FUN_03398650(uVar1,&stack0x0000000c);
  in_stack_00000008 = *param_2;
  uVar2 = FUN_033d1ba8(&DAT_083cda98);
  uVar2 = thunk_FUN_03398650(uVar2,&stack0x00000008);
  uVar3 = FUN_033d1ba8(&DAT_0843d3b0);
  uVar1 = FUN_0666f168(uVar3,uVar1,uVar2,0);
  FUN_033d1ba8(&DAT_083c8a18);
  uVar2 = thunk_FUN_03398a84();
  uVar3 = FUN_033d1ba8(&DAT_08453df8);
  FUN_06782c1c(uVar2,uVar3,uVar1,0);
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(uVar2);
}


