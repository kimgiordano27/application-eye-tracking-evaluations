/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.ColliderMask$$CheckColliderHitsForMRUK
ENTRY_POINT: 08a767b8
PROGRAM: Hyper-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_ColliderMask__CheckColliderHitsForMRUK(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000018;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0x4f0));
  *(undefined1 *)(unaff_x20 + 0x626) = 1;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0xc) + 0x138);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar2 = FUN_08a401a8(lVar2,*(undefined8 *)(unaff_x19 + 0xe),0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000018 = FUN_07764808(lVar2,*(undefined8 *)PTR_DAT_0ac544f0);
    uVar3 = FUN_076844c8(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac544e8);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_049ee3d8(unaff_x19 + 0x10,0);
      FUN_053c2c78(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  lVar2 = FUN_07684508(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac544e0);
  puVar1 = PTR_DAT_0ac544d8;
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    *unaff_x19 = -2;
    FUN_08127c9c(unaff_x19 + 2,uVar4,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


