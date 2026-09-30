/*
FUNCTION_NAME: OVRPlugin$$GetControllerHapticsState
ENTRY_POINT: 07c75c30
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetControllerHapticsState(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_04481fb8();
  }
  puVar4 = PTR_DAT_09f50770;
  puVar3 = PTR_DAT_09f50768;
  puVar2 = PTR_DAT_09f50760;
  puVar1 = PTR_DAT_09f4d1c0;
  if ((long *)**(long **)(param_1 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  (**(code **)(*(long *)**(long **)(param_1 + 0xb8) + 0x198))(&stack0x00000008);
  in_stack_00000060 = in_stack_00000018;
  in_stack_00000058 = in_stack_00000010;
  in_stack_00000050 = in_stack_00000008;
  FUN_0574318c(&stack0x00000008,&stack0x00000050,*(undefined8 *)puVar4);
  in_stack_00000038 = in_stack_00000010;
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000048 = in_stack_00000020;
  in_stack_00000040 = in_stack_00000018;
  lVar11 = 0;
  fVar14 = -INFINITY;
  do {
    uVar6 = FUN_05261068(&stack0x00000030,*(undefined8 *)puVar2);
    if ((uVar6 & 1) == 0) {
      FUN_05261304(&stack0x00000030,*(undefined8 *)PTR_DAT_09f50758);
      return lVar11;
    }
    lVar7 = FUN_05260f24(&stack0x00000030,*(undefined8 *)puVar3);
    plVar12 = *(long **)(unaff_x19 + 0x120);
    if (plVar12 == (long *)0x0) {
      uVar13 = 0x3f800000;
    }
    else {
      lVar9 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_07c75d50;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_044822ac(plVar12,*(long *)puVar1,4);
LAB_07c75d50:
      uVar13 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(uVar13);
    }
    FUN_07c74a4c(lVar7,(undefined8 *)(unaff_x19 + 0x148),(undefined8 *)(unaff_x19 + 0x150),
                 (long)&stack0x00000028 + 4);
    fVar5 = in_stack_00000028._4_4_;
    if (fVar14 < in_stack_00000028._4_4_) {
      if (*(long *)(unaff_x19 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_07c6c6cc(*(long *)(unaff_x19 + 0x138),*(undefined8 *)(unaff_x19 + 0x148),0);
      if (*(long *)(unaff_x19 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_07c6c6cc(*(long *)(unaff_x19 + 0x140),*(undefined8 *)(unaff_x19 + 0x150),0);
      *(undefined1 *)(unaff_x19 + 0x168) = 1;
      lVar11 = lVar7;
      fVar14 = fVar5;
    }
  } while( true );
}


