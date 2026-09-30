/*
FUNCTION_NAME: OVRPlugin$$set_position
ENTRY_POINT: 07c70c80
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_position(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *plVar14;
  long unaff_x20;
  int unaff_w22;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000140;
  undefined4 in_stack_00000148;
  undefined4 uStack0000000000000150;
  undefined8 uStack0000000000000154;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  
  iVar7 = FUN_05746e8c();
  if ((unaff_w22 == iVar7) || ((*(uint *)(unaff_x20 + 0x10) & 0xfffffffe) != 2)) {
    return;
  }
  FUN_07c6ef80(&stack0x000000a0);
  *(undefined8 *)(unaff_x19 + 0x1cc) = uStack00000000000000b4;
  *(ulong *)(unaff_x19 + 0x1c4) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
  *(ulong *)(unaff_x19 + 0x1c0) = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
  *(undefined8 *)(unaff_x19 + 0x1b8) = in_stack_000000a0;
  FUN_07c70e14();
  uVar9 = FUN_07c6e560();
  *(undefined8 *)(unaff_x19 + 0x198) = uVar9;
  thunk_FUN_044bb4b4(unaff_x19 + 0x198);
  FUN_07c6e648(&stack0x00000140);
  uVar8 = FUN_05746e8c();
  in_stack_00000088 = in_stack_00000148;
  in_stack_00000080 = in_stack_00000140;
  uStack0000000000000094 = uStack0000000000000154;
  in_stack_00000090 = uStack0000000000000150;
  FUN_07bf4904(&stack0x00000100,uVar8,4,&stack0x00000080,*(undefined8 *)(unaff_x19 + 0x108),0);
  uVar6 = in_stack_00000130;
  uVar5 = in_stack_00000128;
  uVar4 = in_stack_00000120;
  uVar3 = in_stack_00000118;
  uVar2 = in_stack_00000110;
  uVar1 = in_stack_00000108;
  uVar9 = in_stack_00000100;
  if ((*(long *)(unaff_x19 + 0xd0) == 0) ||
     (plVar14 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xb8), plVar14 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar11 = *plVar14;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_09f296c0) {
        puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_07c70dcc;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar10 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f296c0,0);
LAB_07c70dcc:
  in_stack_00000168 = uVar1;
  in_stack_00000160 = uVar9;
  in_stack_00000178 = uVar3;
  in_stack_00000170 = uVar2;
  in_stack_00000188 = uVar5;
  in_stack_00000180 = uVar4;
  in_stack_00000190 = uVar6;
  (*(code *)*puVar10)(plVar14,&stack0x00000160,puVar10[1]);
  return;
}


