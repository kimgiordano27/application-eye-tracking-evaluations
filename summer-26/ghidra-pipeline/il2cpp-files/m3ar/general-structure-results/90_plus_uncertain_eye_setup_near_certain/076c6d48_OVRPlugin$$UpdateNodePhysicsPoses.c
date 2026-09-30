/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 076c6d48
PROGRAM: m3ar-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateNodePhysicsPoses(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *plVar14;
  long *unaff_x22;
  long lVar15;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  ulong in_stack_00000050;
  
  iVar5 = (*(code *)*param_1)();
  if (iVar5 <= *(int *)(unaff_x19 + 0x4c)) {
    return;
  }
  plVar14 = *(long **)(unaff_x19 + 0x28);
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x22) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x13) * 0x10 + 0x138);
          goto LAB_076c6dcc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_0406ae20(plVar14,*unaff_x22,0x13);
LAB_076c6dcc:
    uVar6 = (*(code *)*puVar7)(plVar14,puVar7[1]);
    *(int *)(unaff_x19 + 0x48) = 1 - *(int *)(unaff_x19 + 0x48);
    *(undefined4 *)(unaff_x19 + 0x4c) = uVar6;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_053d94a4(*(long *)(unaff_x19 + 0x38),*(undefined8 *)PTR_DAT_08fada80);
      if ((*(long *)(unaff_x19 + 0x40) != 0) &&
         (lVar11 = FUN_06efa2e4(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_08fada38),
         lVar11 != 0)) {
        FUN_055e07bc(&stack0x00000008,lVar11,*(undefined8 *)PTR_DAT_08fada98);
        puVar3 = PTR_DAT_08fada78;
        puVar2 = PTR_DAT_08fada60;
        puVar1 = PTR_DAT_08fada30;
        in_stack_00000048 = in_stack_00000010;
        in_stack_00000040 = in_stack_00000008;
        in_stack_00000010 = &stack0x00000040;
        in_stack_00000050 = in_stack_00000018;
        in_stack_00000008 = 0;
        while (uVar12 = FUN_04fafb40(&stack0x00000040,*(undefined8 *)puVar2), (uVar12 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          uVar8 = FUN_06efa53c(*(long *)(unaff_x19 + 0x40),in_stack_00000050 & 0xffffffff,
                               *(undefined8 *)puVar1);
          FUN_04b6b948(*(undefined8 *)(unaff_x19 + 0x38),uVar8,*(undefined8 *)puVar3);
        }
        FUN_04fafb3c(&stack0x00000040,*(undefined8 *)PTR_DAT_08fada48);
        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
           (lVar11 = FUN_06f67f74(*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_08fada40),
           lVar11 != 0)) {
          FUN_055e88b0(&stack0x00000008,lVar11,*(undefined8 *)PTR_DAT_08fada90);
          puVar3 = PTR_DAT_08fada88;
          puVar2 = PTR_DAT_08fada58;
          puVar1 = PTR_DAT_08fada28;
          in_stack_00000028 = in_stack_00000010;
          in_stack_00000020 = in_stack_00000008;
          in_stack_00000010 = &stack0x00000020;
          in_stack_00000030 = in_stack_00000018;
          in_stack_00000008 = 0;
          lVar11 = 0;
          do {
            uVar9 = FUN_04fbbb40(&stack0x00000020,*(undefined8 *)puVar2);
            uVar12 = in_stack_00000030;
            if ((uVar9 & 1) == 0) {
              FUN_04fbbb3c(&stack0x00000020,*(undefined8 *)PTR_DAT_08fada50);
              return;
            }
            if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0403188c();
            }
            lVar10 = FUN_06f681cc(*(long *)(unaff_x19 + 0x30),in_stack_00000030 & 0xffffffff,
                                  *(undefined8 *)puVar1);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0403188c();
            }
            if (*(uint *)(lVar10 + 0x18) <= *(uint *)(unaff_x19 + 0x48)) {
                    /* WARNING: Subroutine does not return */
              FUN_04031894();
            }
            if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0403188c();
            }
            lVar15 = *(long *)(lVar10 + (long)(int)*(uint *)(unaff_x19 + 0x48) * 8 + 0x20);
            uVar9 = FUN_053d9504(*(long *)(unaff_x19 + 0x38),uVar12 & 0xffffffff,
                                 *(undefined8 *)puVar3);
            lVar10 = lVar15;
            if ((uVar9 & 1) == 0) {
              lVar10 = lVar11;
            }
            if ((uVar9 & 1) == 0) {
              bVar4 = 0;
            }
            else {
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0403188c();
              }
              plVar14 = *(long **)(unaff_x19 + 0x28);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0403188c();
              }
              lVar11 = *plVar14;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar9 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *unaff_x22) {
                    puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 9) * 0x10 + 0x138);
                    goto LAB_076c6fe0;
                  }
                  uVar9 = uVar9 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar9 != 0);
              }
              puVar7 = (undefined8 *)FUN_0406ae20(plVar14,*unaff_x22,9);
LAB_076c6fe0:
              bVar4 = (*(code *)*puVar7)(plVar14,uVar12 & 0xffffffff,lVar15 + 0x14,puVar7[1]);
              lVar15 = lVar10;
            }
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0403188c();
            }
            *(byte *)(lVar15 + 0x10) = bVar4 & 1;
            lVar11 = lVar10;
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


