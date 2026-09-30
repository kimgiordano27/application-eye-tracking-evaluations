/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$.cctor
ENTRY_POINT: 05ad057c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager___cctor(void)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  undefined8 uVar5;
  int in_w8;
  long unaff_x19;
  long *unaff_x20;
  long lVar6;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000048;
  
  if (in_w8 != 0) {
    if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (in_w8 != *(int *)(*unaff_x20 + 0x20) + 1) goto LAB_05ad05a0;
  }
  FUN_05e22a2c(0);
LAB_05ad05a0:
  lVar4 = unaff_x20[5];
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  lVar1 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  if ((int)lVar4 == 1) {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    in_stack_00000018 = lVar1;
    in_stack_00000020 = lVar2;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0322bef4();
    }
    thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28),&stack0x00000018);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    uVar3 = *(ushort *)(lVar4 + 0x135);
    if ((uVar3 & 1) == 0) {
      FUN_0322bef4(lVar4);
      lVar4 = *(long *)(unaff_x19 + 0x20);
      uVar3 = *(ushort *)(lVar4 + 0x135);
    }
    in_stack_00000048 = unaff_x20[4];
    if ((uVar3 & 1) == 0) {
      lVar4 = FUN_0322bef4(lVar4);
    }
    thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x30),&stack0x00000048);
    FUN_05da3e28();
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    uVar5 = *(undefined8 *)PTR_DAT_075a9098;
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    uVar3 = *(ushort *)(lVar4 + 0x135);
    if ((uVar3 & 1) == 0) {
      FUN_0322bef4();
      lVar4 = *(long *)(unaff_x19 + 0x20);
      uVar3 = *(ushort *)(lVar4 + 0x135);
    }
    lVar6 = unaff_x20[4];
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    if ((uVar3 & 1) == 0) {
      lVar4 = FUN_0322bef4();
    }
    FUN_045d964c(&stack0x00000018,lVar1,lVar2,lVar6,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38))
    ;
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0322bef4();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10);
  }
  thunk_FUN_0322ed78(uVar5);
  return;
}


