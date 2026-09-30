/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$BeginInvoke
ENTRY_POINT: 0336834c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x033684d0) */

undefined8 OVR_OpenVR_IVRSystem__PollNextEventWithPose__BeginInvoke(ulong param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 uVar6;
  char cStack000000000000000c;
  undefined8 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_1369);
    FUN_01d7d918(StringLiteral_7775);
    *(undefined1 *)(unaff_x19 + 0x5ff) = 1;
  }
  puVar1 = StringLiteral_1369;
  in_stack_00000018 = 0;
  if (param_2 == 0) {
    thunk_FUN_01dd295c(StringLiteral_1111);
    uVar6 = thunk_FUN_01de27b8();
    uVar5 = thunk_FUN_01dd295c(StringLiteral_2573);
    FUN_032870b8(uVar6,uVar5,0);
    uVar5 = thunk_FUN_01dd295c(StringLiteral_7776);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar6,uVar5);
  }
  lVar2 = *(long *)StringLiteral_1369;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar2 = *(long *)puVar1;
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
  cStack000000000000000c = '\0';
  FUN_033f4894(uVar6,&stack0x0000000c,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(lVar2);
    lVar2 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
  if (lVar3 != 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(lVar2);
      lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
    }
    uVar4 = FUN_02b258e8(lVar3,param_2,&stack0x00000018,*(undefined8 *)StringLiteral_7775);
    if ((uVar4 & 1) != 0) goto LAB_03368450;
    lVar2 = *(long *)puVar1;
  }
  uVar5 = thunk_FUN_01de27b8(lVar2);
  FUN_03367b84(uVar5,param_2,0,1);
  in_stack_00000018 = uVar5;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_03367f78(uVar5);
LAB_03368450:
  uVar5 = in_stack_00000018;
  if (cStack000000000000000c != '\0') {
    thunk_FUN_01dccd6c(uVar6,0);
  }
  return uVar5;
}


