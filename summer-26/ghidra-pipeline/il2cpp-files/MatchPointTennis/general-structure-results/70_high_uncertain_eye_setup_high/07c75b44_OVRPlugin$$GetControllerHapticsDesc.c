/*
FUNCTION_NAME: OVRPlugin$$GetControllerHapticsDesc
ENTRY_POINT: 07c75b44
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetControllerHapticsDesc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long unaff_x21;
  undefined8 uVar13;
  float fVar14;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  puVar1 = PTR_DAT_09f50700;
  if ((*(byte *)(unaff_x21 + 0x75d) & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f50758);
    FUN_04447ba8(PTR_DAT_09f50760);
    FUN_04447ba8(PTR_DAT_09f50768);
    FUN_04447ba8(PTR_DAT_09f4d1c0);
    FUN_04447ba8(PTR_DAT_09f50770);
    FUN_04447ba8(PTR_DAT_09f50778);
    FUN_04447ba8(PTR_DAT_09f50700);
    *(undefined1 *)(unaff_x21 + 0x75d) = 1;
  }
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  fStack000000000000002c = 0.0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  *(undefined1 *)(param_1 + 0x168) = 0;
  puVar2 = PTR_DAT_09f50778;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  lVar12 = *(long *)puVar2;
  lVar6 = *(long *)(lVar12 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_04481fb8();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_04481fb8();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  lVar6 = *(long *)(lVar12 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_04481fb8();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_04481fb8();
  }
  puVar4 = PTR_DAT_09f50770;
  puVar3 = PTR_DAT_09f50768;
  puVar2 = PTR_DAT_09f50760;
  puVar1 = PTR_DAT_09f4d1c0;
  plVar7 = (long *)**(long **)(lVar6 + 0xb8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  (**(code **)(*plVar7 + 0x198))(&stack0x00000008,plVar7,param_1,*(undefined8 *)(*plVar7 + 0x1a0));
  in_stack_00000060 = in_stack_00000018;
  in_stack_00000058 = in_stack_00000010;
  in_stack_00000050 = in_stack_00000008;
  FUN_0574318c(&stack0x00000008,&stack0x00000050,*(undefined8 *)puVar4);
  in_stack_00000038 = in_stack_00000010;
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000048 = in_stack_00000020;
  in_stack_00000040 = in_stack_00000018;
  lVar6 = 0;
  fVar14 = -INFINITY;
  do {
    uVar8 = FUN_05261068(&stack0x00000030,*(undefined8 *)puVar2);
    if ((uVar8 & 1) == 0) {
      FUN_05261304(&stack0x00000030,*(undefined8 *)PTR_DAT_09f50758);
      return lVar6;
    }
    lVar12 = FUN_05260f24(&stack0x00000030,*(undefined8 *)puVar3);
    plVar7 = *(long **)(param_1 + 0x120);
    if (plVar7 == (long *)0x0) {
      uVar13 = 0x3f800000;
    }
    else {
      lVar10 = *plVar7;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 4) * 0x10 + 0x138);
            goto LAB_07c75d50;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_044822ac(plVar7,*(long *)puVar1,4);
LAB_07c75d50:
      uVar13 = (*(code *)*puVar9)(plVar7,puVar9[1]);
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(uVar13);
    }
    FUN_07c74a4c(lVar12,(undefined8 *)(param_1 + 0x148),(undefined8 *)(param_1 + 0x150),
                 &stack0x0000002c);
    fVar5 = fStack000000000000002c;
    if (fVar14 < fStack000000000000002c) {
      if (*(long *)(param_1 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_07c6c6cc(*(long *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x148),0);
      if (*(long *)(param_1 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_07c6c6cc(*(long *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x150),0);
      *(undefined1 *)(param_1 + 0x168) = 1;
      lVar6 = lVar12;
      fVar14 = fVar5;
    }
  } while( true );
}


