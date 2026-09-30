/*
FUNCTION_NAME: RequestPermissions.<>c$$<.ctor>b__11_0
ENTRY_POINT: 07d4015c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void RequestPermissions_<>c__<_ctor>b__11_0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f54888);
  FUN_04447ba8(PTR_DAT_09f54890);
  FUN_04447ba8(PTR_DAT_09f54898);
  FUN_04447ba8(PTR_DAT_09f548a0);
  FUN_04447ba8(PTR_DAT_09f548a8);
  *(undefined1 *)(unaff_x20 + 0xe54) = 1;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uVar8 = (**(code **)(*unaff_x19 + 0x268))();
  if ((unaff_x19[0xb] != 0) &&
     (lVar9 = FUN_0731ade4(unaff_x19[0xb],*(undefined8 *)PTR_DAT_09f54868),
     puVar7 = PTR_DAT_09f548a8, puVar6 = PTR_DAT_09f54888, puVar5 = PTR_DAT_09f54880,
     puVar4 = PTR_DAT_09f54878, puVar3 = PTR_DAT_09f54870, puVar2 = PTR_DAT_09f54860,
     puVar1 = PTR_DAT_09f54858, lVar9 != 0)) {
    FUN_06b38c9c(lVar9,*(undefined8 *)PTR_DAT_09f548a0);
    in_stack_00000038 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000000;
    in_stack_00000040 = in_stack_00000010;
    while (uVar10 = FUN_0520f020(&stack0x00000030,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
      FUN_0983a5c4();
    }
    FUN_0520f01c(&stack0x00000030,*(undefined8 *)puVar4);
    if ((unaff_x19[0x1e] != 0) &&
       (lVar9 = FUN_0731ade4(unaff_x19[0x1e],*(undefined8 *)puVar2), lVar9 != 0)) {
      FUN_06b38c9c(&stack0x00000018,lVar9,*(undefined8 *)puVar7);
      while (uVar10 = FUN_0520f020(&stack0x00000018,*(undefined8 *)puVar5), (uVar10 & 1) != 0) {
        FUN_0983a5c4();
      }
      FUN_0520f01c(&stack0x00000018,*(undefined8 *)puVar3);
      if (unaff_x19[0xb] != 0) {
        FUN_0731b15c(unaff_x19[0xb],*(undefined8 *)puVar1);
        if (unaff_x19[7] != 0) {
          FUN_09834954(unaff_x19[7],0,uVar8,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


