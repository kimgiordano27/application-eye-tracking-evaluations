/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03ab2e74
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceQueryResult>(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 in_w8;
  undefined4 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  *(undefined1 *)(unaff_x23 + 0x3fa) = in_w8;
  puVar1 = PTR_DAT_07d88a88;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_075b0180();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)puVar1);
  }
  lVar3 = FUN_03aac8e4();
  if ((lVar3 != 0) && (unaff_x22 != 0)) {
    FUN_075aa9c8();
    if ((uVar2 & 1) == 0) {
      FUN_03aafbb8();
      FUN_03ad8654(lVar3 + 0x38,unaff_w19);
    }
    else {
      FUN_03aafbb8(&stack0x00000060);
      if ((unaff_x20 == 0) || (lVar4 = FUN_075aa9c8(), lVar4 == 0)) goto LAB_03ab2f70;
      FUN_075ba188(lVar4,0);
      in_stack_00000038 = in_stack_00000068;
      in_stack_00000030 = in_stack_00000060;
      in_stack_00000048 = in_stack_00000078;
      in_stack_00000040 = in_stack_00000070;
      in_stack_00000058 = in_stack_00000088;
      in_stack_00000050 = in_stack_00000080;
      FUN_03ad86fc(lVar3 + 0x38,unaff_w19,&stack0x00000030,0);
    }
    return;
  }
LAB_03ab2f70:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


