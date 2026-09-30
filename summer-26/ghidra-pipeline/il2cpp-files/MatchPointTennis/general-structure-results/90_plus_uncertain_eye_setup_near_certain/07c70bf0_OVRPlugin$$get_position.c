/*
FUNCTION_NAME: OVRPlugin$$get_position
ENTRY_POINT: 07c70bf0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_position(undefined1 param_1 [16])

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *plVar11;
  int *unaff_x20;
  long *unaff_x21;
  undefined8 uVar12;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 in_stack_00000140;
  undefined4 in_stack_00000148;
  undefined4 uStack0000000000000150;
  undefined4 uStack0000000000000154;
  undefined4 in_stack_00000158;
  undefined8 uStack0000000000000160;
  undefined8 uStack0000000000000168;
  undefined8 uStack0000000000000170;
  undefined8 uStack0000000000000178;
  undefined8 uStack0000000000000180;
  undefined8 uStack0000000000000188;
  undefined8 uStack0000000000000190;
  
  uStack0000000000000108 = param_1._8_8_;
  uStack0000000000000100 = param_1._0_8_;
  uStack0000000000000150 = 0;
  uStack0000000000000154 = 0;
  uStack0000000000000130 = 0;
  uStack00000000000000d8 = *(undefined8 *)(unaff_x20 + 6);
  uStack00000000000000d0 = *(undefined8 *)(unaff_x20 + 4);
  uStack00000000000000e8 = *(undefined8 *)(unaff_x20 + 10);
  uStack00000000000000e0 = *(undefined8 *)(unaff_x20 + 8);
  uStack00000000000000c8 = *(undefined8 *)(unaff_x20 + 2);
  uStack00000000000000c0 = *(undefined8 *)unaff_x20;
  uStack00000000000000f0 = *(undefined8 *)(unaff_x20 + 0xc);
  uStack0000000000000110 = uStack0000000000000100;
  uStack0000000000000118 = uStack0000000000000108;
  uStack0000000000000120 = uStack0000000000000100;
  uStack0000000000000128 = uStack0000000000000108;
  uStack0000000000000160 = uStack00000000000000c0;
  uStack0000000000000168 = uStack00000000000000c8;
  uStack0000000000000170 = uStack00000000000000d0;
  uStack0000000000000178 = uStack00000000000000d8;
  uStack0000000000000180 = uStack00000000000000e0;
  uStack0000000000000188 = uStack00000000000000e8;
  uStack0000000000000190 = uStack00000000000000f0;
  FUN_062ebdc0();
  uVar12 = *(undefined8 *)(unaff_x19 + 0xd0);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar7 = FUN_0952c404(uVar12,0,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0xd0) != 0) {
    if (*(char *)(*(long *)(unaff_x19 + 0xd0) + 0xd8) == '\0') {
      return;
    }
    iVar1 = *unaff_x20;
    iVar5 = FUN_05746e8c();
    if (iVar1 == iVar5) {
      return;
    }
    if ((unaff_x20[4] & 0xfffffffeU) != 2) {
      return;
    }
    FUN_07c6ef80(&stack0x000000a0);
    *(undefined8 *)(unaff_x19 + 0x1cc) = uStack00000000000000b4;
    *(ulong *)(unaff_x19 + 0x1c4) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
    *(ulong *)(unaff_x19 + 0x1c0) = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    *(undefined8 *)(unaff_x19 + 0x1b8) = in_stack_000000a0;
    FUN_07c70e14();
    uVar12 = FUN_07c6e560();
    *(undefined8 *)(unaff_x19 + 0x198) = uVar12;
    thunk_FUN_044bb4b4(unaff_x19 + 0x198);
    FUN_07c6e648(&stack0x00000140);
    uVar6 = FUN_05746e8c();
    uStack0000000000000094 = CONCAT44(in_stack_00000158,uStack0000000000000154);
    in_stack_00000088 = in_stack_00000148;
    in_stack_00000080 = in_stack_00000140;
    uStack0000000000000090 = uStack0000000000000150;
    FUN_07bf4904(&stack0x00000100,uVar6,4,&stack0x00000080,*(undefined8 *)(unaff_x19 + 0x108),0);
    uVar4 = uStack0000000000000130;
    uVar3 = uStack0000000000000120;
    uVar2 = uStack0000000000000110;
    uVar12 = uStack0000000000000100;
    if ((*(long *)(unaff_x19 + 0xd0) != 0) &&
       (plVar11 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xb8), plVar11 != (long *)0x0)) {
      lVar9 = *plVar11;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f296c0) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_07c70dcc;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_044822ac(plVar11,*(long *)PTR_DAT_09f296c0,0);
LAB_07c70dcc:
      uStack0000000000000168 = uStack0000000000000108;
      uStack0000000000000160 = uVar12;
      uStack0000000000000178 = uStack0000000000000118;
      uStack0000000000000170 = uVar2;
      uStack0000000000000188 = uStack0000000000000128;
      uStack0000000000000180 = uVar3;
      uStack0000000000000190 = uVar4;
      (*(code *)*puVar8)(plVar11,&stack0x00000160,puVar8[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


