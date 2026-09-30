/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.ColliderMask$$Check
ENTRY_POINT: 06e4d95c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] Meta_XR_MRUtilityKit_SceneDecorator_ColliderMask__Check(void)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w8;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (in_x9 != 0) {
    if (in_w8 == *(int *)(in_x9 + 0x20) + 1) {
      FUN_07199c28(0);
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_03d8f26c();
      lVar3 = *(long *)(unaff_x20 + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
    }
    uStack000000000000001c = *(undefined4 *)(unaff_x19 + 0x10);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    uVar4 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),&stack0x0000001c);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_03d8f26c(lVar3);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
    }
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_03d8f26c(lVar3);
    }
    uVar5 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x30));
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    FUN_07143704(&stack0x00000020,uVar4,uVar5,0);
    auVar2._8_8_ = in_stack_00000028;
    auVar2._0_8_ = in_stack_00000020;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


