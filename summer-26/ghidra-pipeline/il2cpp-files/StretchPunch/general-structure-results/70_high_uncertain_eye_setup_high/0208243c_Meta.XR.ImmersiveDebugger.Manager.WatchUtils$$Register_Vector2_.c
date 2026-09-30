/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector2>
ENTRY_POINT: 0208243c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector2>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  uVar1 = FUN_033a87c8(param_1,0);
  uVar2 = FUN_033a87c8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
  uVar3 = FUN_033ab18c(uVar1,uVar2,0);
  if ((uVar3 & 1) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033a87c8(uVar1,0);
    FUN_033a87c8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18),0);
    FUN_03a63324();
    if (*(long *)(unaff_x20 + 0x30) == 0) {
LAB_02082544:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar3 = FUN_02b8b44c(*(long *)(unaff_x20 + 0x30),in_stack_00000000,in_stack_00000008,*unaff_x28)
    ;
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(unaff_x20 + 0x30);
      uVar1 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_1256);
      FUN_02e2ffc0();
      if (lVar4 == 0) goto LAB_02082544;
      FUN_02b8b240(lVar4,in_stack_00000000,in_stack_00000008,uVar1,*unaff_x29);
    }
  }
  return;
}


