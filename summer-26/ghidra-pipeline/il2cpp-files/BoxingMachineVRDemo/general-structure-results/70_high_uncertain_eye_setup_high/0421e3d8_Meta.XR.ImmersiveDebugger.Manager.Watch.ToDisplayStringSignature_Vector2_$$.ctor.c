/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$.ctor
ENTRY_POINT: 0421e3d8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_02d9a2e0();
  lVar3 = thunk_FUN_02d9d534();
  FUN_036bfed0(lVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
  puVar2 = PTR_DAT_0676ab80;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = unaff_x22;
    thunk_FUN_02dd37b4();
    puVar1 = PTR_DAT_06760eb0;
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    if (unaff_x20 != 0) {
      *(long *)(lVar3 + 0x18) = unaff_x20;
      thunk_FUN_02dd37b4();
      uVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
      FUN_04f7d1b0(uVar4,lVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58)
                   ,0);
      in_stack_00000018 = uVar4;
      thunk_FUN_02dd37b4(&stack0x00000018,uVar4);
      uVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
      FUN_04f7d1b0(uVar4,lVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60)
                   ,0);
      in_stack_00000020 = uVar4;
      thunk_FUN_02dd37b4(&stack0x00000020,uVar4);
      FUN_05e76d68(&stack0x00000018,0);
    }
    thunk_FUN_02d9d164(*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


