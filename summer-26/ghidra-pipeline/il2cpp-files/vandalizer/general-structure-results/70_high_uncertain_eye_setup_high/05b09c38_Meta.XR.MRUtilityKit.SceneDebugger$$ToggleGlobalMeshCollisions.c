/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$ToggleGlobalMeshCollisions
ENTRY_POINT: 05b09c38
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_SceneDebugger__ToggleGlobalMeshCollisions(long param_1)

{
  long lVar1;
  int in_w9;
  undefined8 uVar2;
  long in_x10;
  uint in_w11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  uint unaff_w22;
  uint unaff_w23;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  do {
    uVar4 = in_w11 + 1;
    if (-1 < *(int *)(in_x10 + (long)(int)unaff_w23 * (long)in_w9 + 0x20)) {
      lVar1 = in_x10 + (long)(int)unaff_w23 * 0x28;
      uVar2 = *(undefined8 *)(lVar1 + 0x40);
      uVar6 = *(undefined8 *)(lVar1 + 0x38);
      uVar5 = *(undefined8 *)(lVar1 + 0x30);
      uVar3 = *(undefined8 *)(lVar1 + 0x28);
      in_stack_00000028 = 0;
      in_stack_00000020 = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0322bef4();
      }
      in_stack_00000040 = uVar5;
      in_stack_00000048 = uVar6;
      in_stack_00000050 = uVar2;
      FUN_045e27d0(&stack0x00000020,uVar3,&stack0x00000040,
                   *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x38));
      *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000028;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000020;
      *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000038;
      *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000030;
      thunk_FUN_0329bf60(unaff_x19 + 0x10,0);
      uVar4 = unaff_w23;
LAB_05b09cd0:
      return uVar4 < unaff_w22;
    }
    if (unaff_w22 <= uVar4) {
      *(uint *)(unaff_x19 + 0xc) = unaff_w22 + 1;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      goto LAB_05b09cd0;
    }
    in_x10 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 0xc) = in_w11 + 2;
    if (in_x10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    in_w11 = in_w11 + 1;
    unaff_w23 = uVar4;
    if (*(uint *)(in_x10 + 0x18) <= in_w11) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
  } while( true );
}


