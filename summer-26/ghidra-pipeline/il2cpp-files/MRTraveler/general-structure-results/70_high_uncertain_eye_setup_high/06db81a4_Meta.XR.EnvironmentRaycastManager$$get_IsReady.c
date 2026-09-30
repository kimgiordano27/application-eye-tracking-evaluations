/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$get_IsReady
ENTRY_POINT: 06db81a4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 Meta_XR_EnvironmentRaycastManager__get_IsReady(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  long lStack0000000000000030;
  
  *(undefined1 *)(unaff_x20 + 0xbc4) = 1;
  puVar5 = PTR_DAT_08e90498;
  puVar4 = PTR_DAT_08e90480;
  puVar3 = PTR_DAT_08e90470;
  puVar2 = PTR_DAT_08e80318;
  puVar1 = PTR_DAT_08e695f0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  lStack0000000000000030 = 0;
  if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  FUN_05213710(&stack0x00000008,*(long *)(unaff_x19 + 0x28),*(undefined8 *)PTR_DAT_08e90490);
  uVar12 = 1;
  uStack0000000000000028 = in_stack_00000010;
  uStack0000000000000020 = in_stack_00000008;
  lStack0000000000000030 = in_stack_00000018;
  while( true ) {
    uVar7 = FUN_049dc4d0(&stack0x00000020,*(undefined8 *)puVar4);
    lVar6 = lStack0000000000000030;
    if ((uVar7 & 1) == 0) {
      FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08e90478);
      return uVar12;
    }
    if (lStack0000000000000030 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar7 = FUN_06f74e14(*(undefined8 *)(lStack0000000000000030 + 0x18),0);
    if ((uVar7 & 1) == 0) {
      uVar8 = FUN_06f7465c(*(undefined8 *)(lVar6 + 0x18),*(undefined8 *)PTR_DAT_08e71968,
                           *(undefined8 *)(lVar6 + 0x10),0);
    }
    else {
      uVar8 = *(undefined8 *)(lVar6 + 0x10);
    }
    uVar8 = FUN_06f7465c(uVar8,*(undefined8 *)PTR_DAT_08e7cd00,*(undefined8 *)(lVar6 + 0x38),0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar9 = FUN_03c8fd28(uVar8,*(undefined8 *)puVar2,*(undefined8 *)puVar5);
    uVar7 = FUN_07119344(uVar9,0,0);
    if ((uVar7 & 1) != 0) {
      plVar10 = (long *)thunk_FUN_03d12a58();
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar11 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      uVar8 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e904a0,uVar8,0);
      if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_06dfdedc(uVar11,uVar8,0,0);
      uVar12 = 0;
    }
    if (*(long *)(unaff_x19 + 0x48) == 0) break;
    FUN_06a4e36c(*(long *)(unaff_x19 + 0x48),*(undefined8 *)(lVar6 + 0x28),uVar9,
                 *(undefined8 *)puVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


