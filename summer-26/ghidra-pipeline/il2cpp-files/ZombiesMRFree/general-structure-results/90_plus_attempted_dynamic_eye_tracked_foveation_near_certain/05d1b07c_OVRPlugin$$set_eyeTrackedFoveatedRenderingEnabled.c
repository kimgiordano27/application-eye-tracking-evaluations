/*
FUNCTION_NAME: OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05d1b07c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 165
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


long OVRPlugin__set_eyeTrackedFoveatedRenderingEnabled(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long lVar11;
  long unaff_x21;
  long *plVar12;
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
  
  FUN_02fe925c(PTR_DAT_06fb8a08);
  FUN_02fe925c(PTR_DAT_06fb8990);
  *(undefined1 *)(unaff_x21 + 0x8b9) = 1;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  fStack000000000000002c = 0.0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  *(undefined1 *)(unaff_x19 + 0x168) = 0;
  puVar1 = PTR_DAT_06fb8a08;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar11 = *(long *)puVar1;
  lVar6 = *(long *)(lVar11 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02feb2c4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02feb2c4();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar6 = *(long *)(lVar11 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02feb2c4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02feb2c4();
  }
  puVar4 = PTR_DAT_06fb8a00;
  puVar3 = PTR_DAT_06fb89f8;
  puVar2 = PTR_DAT_06fb89f0;
  puVar1 = PTR_DAT_06fb4b60;
  if ((long *)**(long **)(lVar6 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  (**(code **)(*(long *)**(long **)(lVar6 + 0xb8) + 0x198))(&stack0x00000008);
  in_stack_00000060 = in_stack_00000018;
  in_stack_00000058 = in_stack_00000010;
  in_stack_00000050 = in_stack_00000008;
  FUN_04053d98(&stack0x00000008,&stack0x00000050,*(undefined8 *)puVar4);
  in_stack_00000038 = in_stack_00000010;
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000048 = in_stack_00000020;
  in_stack_00000040 = in_stack_00000018;
  lVar6 = 0;
  fVar14 = -INFINITY;
  do {
    uVar7 = FUN_055c9cc0(&stack0x00000030,*(undefined8 *)puVar2);
    if ((uVar7 & 1) == 0) {
      FUN_055c9f5c(&stack0x00000030,*(undefined8 *)PTR_DAT_06fb89e8);
      return lVar6;
    }
    lVar11 = FUN_055c9b7c(&stack0x00000030,*(undefined8 *)puVar3);
    plVar12 = *(long **)(unaff_x19 + 0x120);
    if (plVar12 == (long *)0x0) {
      uVar13 = 0x3f800000;
    }
    else {
      lVar9 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_05d1b238;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)puVar1,4);
LAB_05d1b238:
      uVar13 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8(uVar13);
    }
    FUN_05d19f38(lVar11,(undefined8 *)(unaff_x19 + 0x148),(undefined8 *)(unaff_x19 + 0x150),
                 &stack0x0000002c);
    fVar5 = fStack000000000000002c;
    if (fVar14 < fStack000000000000002c) {
      if (*(long *)(unaff_x19 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      FUN_05d11cb4(*(long *)(unaff_x19 + 0x138),*(undefined8 *)(unaff_x19 + 0x148),0);
      if (*(long *)(unaff_x19 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      FUN_05d11cb4(*(long *)(unaff_x19 + 0x140),*(undefined8 *)(unaff_x19 + 0x150),0);
      *(undefined1 *)(unaff_x19 + 0x168) = 1;
      lVar6 = lVar11;
      fVar14 = fVar5;
    }
  } while( true );
}


