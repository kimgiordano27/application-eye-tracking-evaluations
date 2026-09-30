/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0105bd10
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__set_Item<OVRPlugin_SpaceQueryResult>(void)

{
  long lVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x22;
  long unaff_x23;
  ulong uVar8;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  
  while ((((FUN_00ffff0c(), in_stack_00000050 != in_stack_00000008 ||
           (in_stack_00000058 != in_stack_00000010)) || (in_stack_00000060 != in_stack_00000018)) ||
         ((in_stack_00000060 != in_stack_00000058 && (in_stack_00000068 != in_stack_00000020))))) {
    uVar6 = *(ulong *)(in_stack_00000068 + 8);
    lVar7 = 1;
    while( true ) {
      uVar6 = *(long *)(unaff_x19 + 0x58) - 1U & uVar6;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar6;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = unaff_x22;
      uVar8 = SUB168(auVar3 * auVar4,8) >> 5;
      uVar5 = uVar6 - uVar8 * unaff_x23;
      lVar1 = *(long *)(unaff_x19 + 0x40) + uVar8 * 0x10;
      if ((*(byte *)(lVar1 + (uVar5 >> 3) + 10) >> (uVar5 & 7) & 1) == 0) break;
      uVar6 = uVar6 + lVar7;
      lVar7 = lVar7 + 1;
    }
    uVar2 = *(ushort *)(lVar1 + 8);
    FUN_01033648();
    *(ulong *)(unaff_x19 + 0x60) =
         ((ulong)*(ushort *)(*(long *)(unaff_x19 + 0x40) + uVar8 * 0x10 + 8) - (ulong)uVar2) +
         *(long *)(unaff_x19 + 0x60);
    in_stack_00000068 = in_stack_00000068 + 0x18;
    FUN_00fcf300();
    FUN_00ffff0c(&stack0x00000048);
    in_stack_00000008 = *(long *)(unaff_x20 + 0x40);
    in_stack_00000010 = *(long *)(unaff_x20 + 0x48);
    in_stack_00000018 = in_stack_00000010;
    in_stack_00000020 = 0;
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


