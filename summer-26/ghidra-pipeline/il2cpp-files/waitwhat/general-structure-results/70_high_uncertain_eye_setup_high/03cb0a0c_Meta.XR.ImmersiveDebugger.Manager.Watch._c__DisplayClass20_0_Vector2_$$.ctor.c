/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector2>$$.ctor
ENTRY_POINT: 03cb0a0c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03cb0b34) */

void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector2>___ctor(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  int iVar3;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_000001d8;
  
  uVar1 = FUN_0594875c();
  if ((uVar1 & 1) == 0) {
LAB_03cb0aa0:
    iVar3 = 0x13;
  }
  else {
    uVar1 = FUN_06bc6954();
    if ((uVar1 & 1) == 0) {
      memcpy(&stack0x00000120,(void *)(unaff_x19 + 0x10),0x90);
      iVar3 = *(int *)(unaff_x19 + 0xb8);
      *(int *)(unaff_x19 + 0xb8) = iVar3 + 1;
      FUN_06a65e10(&stack0x00000008,&stack0x00000120,iVar3,0);
      *(undefined8 *)(unaff_x22 + 0x128) = in_stack_00000010;
      *(undefined8 *)(unaff_x22 + 0x120) = in_stack_00000008;
      *(undefined8 *)(unaff_x22 + 0x138) = in_stack_00000020;
      *(undefined8 *)(unaff_x22 + 0x130) = in_stack_00000018;
      uVar1 = FUN_06a65980(&stack0x000001b0,0);
      if ((uVar1 & 1) == 0) goto LAB_03cb0aa0;
      *(undefined8 *)(unaff_x19 + 0xb0) = unaff_x20;
      lVar2 = FUN_06a68c5c();
      if (lVar2 != 0) {
        FUN_02d37580(0,DAT_072562e0,lVar2);
      }
    }
    iVar3 = 3;
  }
  FUN_05459eec(&stack0x000000c0,*(undefined8 *)(*(long *)(in_stack_000001d8 + 0x38) + 0x58));
  if ((((iVar3 == 0) || (iVar3 == 0x13)) && (uVar1 = FUN_06bc6954(), (uVar1 & 1) == 0)) &&
     (*(int *)(unaff_x19 + 0xa8) == 0)) {
    *(undefined4 *)(unaff_x19 + 0xa8) = 4;
  }
  return;
}


