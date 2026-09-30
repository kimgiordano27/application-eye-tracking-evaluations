/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$MoveNext
ENTRY_POINT: 05ab5d24
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24__MoveNext
               (long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  int unaff_w19;
  void *unaff_x20;
  long unaff_x22;
  long lVar3;
  long unaff_x23;
  long in_stack_000006c8;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0322bef4(param_1);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  if (*param_2 == 0) {
    Oculus_Interaction_TransformExtensions_<>c__DisplayClass3_0___ctor(0x32,0);
  }
  if ((unaff_w19 < 0) || (*(int *)((long)param_2 + 0xc) <= unaff_w19)) {
    FUN_05e22bd8(0);
  }
  lVar3 = *param_2;
  lVar2 = param_2[1];
  memcpy(&stack0x00000368,unaff_x20,0x360);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar1 = (int)lVar2 + unaff_w19;
  memcpy(&stack0x00000008,&stack0x00000368,0x360);
  if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  memcpy((void *)(lVar3 + (long)(int)uVar1 * 0x360 + 0x20),&stack0x00000008,0x360);
  if (*(long *)(unaff_x23 + 0x28) != in_stack_000006c8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


