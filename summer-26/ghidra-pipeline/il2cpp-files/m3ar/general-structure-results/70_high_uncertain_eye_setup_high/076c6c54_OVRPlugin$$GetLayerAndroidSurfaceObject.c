/*
FUNCTION_NAME: OVRPlugin$$GetLayerAndroidSurfaceObject
ENTRY_POINT: 076c6c54
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetLayerAndroidSurfaceObject(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  long *plVar16;
  long lVar17;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  ulong in_stack_00000050;
  
  FUN_0403162c(PTR_DAT_08fada48);
  FUN_0403162c(PTR_DAT_08fada50);
  FUN_0403162c(PTR_DAT_08fada58);
  FUN_0403162c(PTR_DAT_08fada60);
  FUN_0403162c(PTR_DAT_08fada68);
  FUN_0403162c(PTR_DAT_08fada70);
  FUN_0403162c(PTR_DAT_08fada78);
  FUN_0403162c(PTR_DAT_08fada80);
  FUN_0403162c(PTR_DAT_08fada88);
  FUN_0403162c(PTR_DAT_08f6a1b8);
  FUN_0403162c(PTR_DAT_08fada90);
  FUN_0403162c(PTR_DAT_08fada98);
  *(undefined1 *)(unaff_x20 + 0x1b0) = 1;
  puVar1 = PTR_DAT_08f6a1b8;
  plVar16 = *(long **)(unaff_x19 + 0x28);
  in_stack_00000040 = 0;
  in_stack_00000048 = (undefined8 *)0x0;
  in_stack_00000050 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = (undefined8 *)0x0;
  in_stack_00000030 = 0;
  if (plVar16 != (long *)0x0) {
    lVar11 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08f6a1b8) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar15 + 0x13) * 0x10 + 0x138);
          goto FUN_076c6d5c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_0406ae20(plVar16,*(long *)PTR_DAT_08f6a1b8,0x13);
FUN_076c6d5c:
    iVar6 = (*(code *)*puVar8)(plVar16,puVar8[1]);
    if (iVar6 <= *(int *)(unaff_x19 + 0x4c)) {
      return;
    }
    plVar16 = *(long **)(unaff_x19 + 0x28);
    if (plVar16 != (long *)0x0) {
      lVar12 = *plVar16;
      lVar11 = *(long *)puVar1;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar11) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 0x13) * 0x10 + 0x138);
            goto LAB_076c6dcc;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_0406ae20(plVar16,lVar11,0x13);
LAB_076c6dcc:
      uVar7 = (*(code *)*puVar8)(plVar16,puVar8[1]);
      *(int *)(unaff_x19 + 0x48) = 1 - *(int *)(unaff_x19 + 0x48);
      *(undefined4 *)(unaff_x19 + 0x4c) = uVar7;
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        FUN_053d94a4(*(long *)(unaff_x19 + 0x38),*(undefined8 *)PTR_DAT_08fada80);
        if ((*(long *)(unaff_x19 + 0x40) != 0) &&
           (lVar11 = FUN_06efa2e4(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_08fada38),
           lVar11 != 0)) {
          FUN_055e07bc(&stack0x00000008,lVar11,*(undefined8 *)PTR_DAT_08fada98);
          puVar4 = PTR_DAT_08fada78;
          puVar3 = PTR_DAT_08fada60;
          puVar2 = PTR_DAT_08fada30;
          in_stack_00000048 = in_stack_00000010;
          in_stack_00000040 = in_stack_00000008;
          in_stack_00000010 = &stack0x00000040;
          in_stack_00000050 = in_stack_00000018;
          in_stack_00000008 = 0;
          while (uVar14 = FUN_04fafb40(&stack0x00000040,*(undefined8 *)puVar3), (uVar14 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0403188c();
            }
            uVar9 = FUN_06efa53c(*(long *)(unaff_x19 + 0x40),in_stack_00000050 & 0xffffffff,
                                 *(undefined8 *)puVar2);
            FUN_04b6b948(*(undefined8 *)(unaff_x19 + 0x38),uVar9,*(undefined8 *)puVar4);
          }
          FUN_04fafb3c(&stack0x00000040,*(undefined8 *)PTR_DAT_08fada48);
          if ((*(long *)(unaff_x19 + 0x30) != 0) &&
             (lVar11 = FUN_06f67f74(*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_08fada40),
             lVar11 != 0)) {
            FUN_055e88b0(&stack0x00000008,lVar11,*(undefined8 *)PTR_DAT_08fada90);
            puVar4 = PTR_DAT_08fada88;
            puVar3 = PTR_DAT_08fada58;
            puVar2 = PTR_DAT_08fada28;
            in_stack_00000028 = in_stack_00000010;
            in_stack_00000020 = in_stack_00000008;
            in_stack_00000010 = &stack0x00000020;
            in_stack_00000030 = in_stack_00000018;
            in_stack_00000008 = 0;
            lVar11 = 0;
            do {
              uVar10 = FUN_04fbbb40(&stack0x00000020,*(undefined8 *)puVar3);
              uVar14 = in_stack_00000030;
              if ((uVar10 & 1) == 0) {
                FUN_04fbbb3c(&stack0x00000020,*(undefined8 *)PTR_DAT_08fada50);
                return;
              }
              if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0403188c();
              }
              lVar12 = FUN_06f681cc(*(long *)(unaff_x19 + 0x30),in_stack_00000030 & 0xffffffff,
                                    *(undefined8 *)puVar2);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0403188c();
              }
              if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x48)) {
                    /* WARNING: Subroutine does not return */
                FUN_04031894();
              }
              if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0403188c();
              }
              lVar17 = *(long *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x48) * 8 + 0x20);
              uVar10 = FUN_053d9504(*(long *)(unaff_x19 + 0x38),uVar14 & 0xffffffff,
                                    *(undefined8 *)puVar4);
              lVar12 = lVar17;
              if ((uVar10 & 1) == 0) {
                lVar12 = lVar11;
              }
              if ((uVar10 & 1) == 0) {
                bVar5 = 0;
              }
              else {
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0403188c();
                }
                plVar16 = *(long **)(unaff_x19 + 0x28);
                if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0403188c();
                }
                lVar13 = *plVar16;
                lVar11 = *(long *)puVar1;
                uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar10 != 0) {
                  piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == lVar11) {
                      puVar8 = (undefined8 *)(lVar13 + (long)(*piVar15 + 9) * 0x10 + 0x138);
                      goto LAB_076c6fe0;
                    }
                    uVar10 = uVar10 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar10 != 0);
                }
                puVar8 = (undefined8 *)FUN_0406ae20(plVar16,lVar11,9);
LAB_076c6fe0:
                bVar5 = (*(code *)*puVar8)(plVar16,uVar14 & 0xffffffff,lVar17 + 0x14,puVar8[1]);
                lVar17 = lVar12;
              }
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0403188c();
              }
              *(byte *)(lVar17 + 0x10) = bVar5 & 1;
              lVar11 = lVar12;
            } while( true );
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


