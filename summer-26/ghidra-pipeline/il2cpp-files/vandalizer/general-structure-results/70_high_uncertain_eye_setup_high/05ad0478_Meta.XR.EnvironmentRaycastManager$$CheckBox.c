/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$CheckBox
ENTRY_POINT: 05ad0478
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_EnvironmentRaycastManager__CheckBox(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x9;
  uint in_w10;
  uint in_w11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  uint unaff_w24;
  uint unaff_w25;
  uint uVar5;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while( true ) {
    if (in_w11 <= in_w10) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    lVar3 = in_x9 + (long)(int)unaff_w25 * 0x20;
    uVar5 = in_w10 + 1;
    if (-1 < *(int *)(lVar3 + 0x20)) break;
    if (unaff_w24 <= uVar5) {
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(uint *)(unaff_x19 + 0xc) = unaff_w24 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      goto LAB_05ad0500;
    }
    in_x9 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 0xc) = in_w10 + 2;
    if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    in_w11 = *(uint *)(in_x9 + 0x18);
    in_w10 = in_w10 + 1;
    unaff_w25 = uVar5;
  }
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  uVar2 = *(undefined8 *)(lVar3 + 0x30);
  uVar4 = *(undefined8 *)(lVar3 + 0x38);
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4();
  }
  FUN_045d964c(&stack0x00000008,uVar1,uVar2,uVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
  *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000018;
  *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000010;
  *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x20),0);
  uVar5 = unaff_w25;
LAB_05ad0500:
  return uVar5 < unaff_w24;
}


