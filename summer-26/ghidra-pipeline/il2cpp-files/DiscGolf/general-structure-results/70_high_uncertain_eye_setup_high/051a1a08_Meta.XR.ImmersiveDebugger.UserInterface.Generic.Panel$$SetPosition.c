/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$SetPosition
ENTRY_POINT: 051a1a08
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__SetPosition(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (param_1 == 0) {
LAB_051a1ae8:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar4 = *(uint *)(unaff_x19 + 0xc);
  uVar5 = *(uint *)(param_1 + 0x20);
  uVar1 = uVar4;
  if (uVar4 <= uVar5) {
    uVar1 = uVar5;
  }
  do {
    uVar7 = uVar4;
    if (uVar1 == uVar7) {
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(uint *)(unaff_x19 + 0xc) = uVar5 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      goto LAB_051a1ac8;
    }
    lVar8 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 0xc) = uVar7 + 1;
    if (lVar8 == 0) goto LAB_051a1ae8;
    if (*(uint *)(lVar8 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    uVar4 = uVar7 + 1;
  } while (*(int *)(lVar8 + 0x20 +
                   (-(ulong)(uVar7 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar7 << 5)) < 0);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  lVar8 = lVar8 + 0x20 + (long)(int)uVar7 * 0x20;
  uVar2 = *(undefined8 *)(lVar8 + 8);
  uVar3 = *(undefined8 *)(lVar8 + 0x10);
  uVar9 = *(undefined8 *)(lVar8 + 0x18);
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02dcfd18();
  }
  FUN_03e46848(&stack0x00000008,uVar2,uVar3,uVar9,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
  *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000010;
  *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000018;
  LeanTween__value(unaff_x19 + 0x10,0);
LAB_051a1ac8:
  return uVar7 < uVar5;
}


