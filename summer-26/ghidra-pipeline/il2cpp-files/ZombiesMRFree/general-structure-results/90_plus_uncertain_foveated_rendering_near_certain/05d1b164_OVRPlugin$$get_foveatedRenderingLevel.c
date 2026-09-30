/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingLevel
ENTRY_POINT: 05d1b164
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 119
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


long OVRPlugin__get_foveatedRenderingLevel(void)

{
  float fVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar7;
  long *plVar8;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 uVar9;
  float fVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  
  uStack0000000000000060 = in_stack_00000018;
  uStack0000000000000058 = in_stack_00000010;
  uStack0000000000000050 = in_stack_00000008;
  FUN_04053d98(&stack0x00000008,&stack0x00000050,*unaff_x20);
  in_stack_00000038 = in_stack_00000010;
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000048 = in_stack_00000020;
  in_stack_00000040 = in_stack_00000018;
  lVar7 = 0;
  fVar10 = -INFINITY;
  do {
    uVar2 = FUN_055c9cc0(&stack0x00000030,*unaff_x26);
    if ((uVar2 & 1) == 0) {
      FUN_055c9f5c(&stack0x00000030,*(undefined8 *)PTR_DAT_06fb89e8);
      return lVar7;
    }
    lVar3 = FUN_055c9b7c(&stack0x00000030,*unaff_x27);
    plVar8 = *(long **)(unaff_x19 + 0x120);
    if (plVar8 == (long *)0x0) {
      uVar9 = 0x3f800000;
    }
    else {
      lVar5 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x28) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_05d1b238;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_02feb5b8(plVar8,*unaff_x28,4);
LAB_05d1b238:
      uVar9 = (*(code *)*puVar4)(plVar8,puVar4[1]);
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8(uVar9);
    }
    FUN_05d19f38(lVar3,(undefined8 *)(unaff_x19 + 0x148),(undefined8 *)(unaff_x19 + 0x150),
                 (long)&stack0x00000028 + 4);
    fVar1 = in_stack_00000028._4_4_;
    if (fVar10 < in_stack_00000028._4_4_) {
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
      lVar7 = lVar3;
      fVar10 = fVar1;
    }
  } while( true );
}


