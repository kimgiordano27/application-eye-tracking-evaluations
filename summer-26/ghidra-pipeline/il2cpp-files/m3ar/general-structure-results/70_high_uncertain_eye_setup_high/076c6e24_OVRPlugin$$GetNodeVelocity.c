/*
FUNCTION_NAME: OVRPlugin$$GetNodeVelocity
ENTRY_POINT: 076c6e24
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodeVelocity(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  long *unaff_x22;
  long lVar13;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  ulong in_stack_00000050;
  
  FUN_055e07bc(&stack0x00000008,param_2,**(undefined8 **)(param_1 + 0xa98));
  puVar3 = PTR_DAT_08fada78;
  puVar2 = PTR_DAT_08fada60;
  puVar1 = PTR_DAT_08fada30;
  in_stack_00000048 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000008;
  in_stack_00000010 = &stack0x00000040;
  in_stack_00000050 = in_stack_00000018;
  in_stack_00000008 = 0;
  while (uVar5 = FUN_04fafb40(&stack0x00000040,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar6 = FUN_06efa53c(*(long *)(unaff_x19 + 0x40),in_stack_00000050 & 0xffffffff,
                         *(undefined8 *)puVar1);
    FUN_04b6b948(*(undefined8 *)(unaff_x19 + 0x38),uVar6,*(undefined8 *)puVar3);
  }
  FUN_04fafb3c(&stack0x00000040,*(undefined8 *)PTR_DAT_08fada48);
  if ((*(long *)(unaff_x19 + 0x30) == 0) ||
     (lVar7 = FUN_06f67f74(*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_08fada40), lVar7 == 0)
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  FUN_055e88b0(&stack0x00000008,lVar7,*(undefined8 *)PTR_DAT_08fada90);
  puVar3 = PTR_DAT_08fada88;
  puVar2 = PTR_DAT_08fada58;
  puVar1 = PTR_DAT_08fada28;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000010 = &stack0x00000020;
  in_stack_00000030 = in_stack_00000018;
  in_stack_00000008 = 0;
  lVar7 = 0;
  do {
    uVar8 = FUN_04fbbb40(&stack0x00000020,*(undefined8 *)puVar2);
    uVar5 = in_stack_00000030;
    if ((uVar8 & 1) == 0) {
      FUN_04fbbb3c(&stack0x00000020,*(undefined8 *)PTR_DAT_08fada50);
      return;
    }
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar9 = FUN_06f681cc(*(long *)(unaff_x19 + 0x30),in_stack_00000030 & 0xffffffff,
                         *(undefined8 *)puVar1);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x19 + 0x48)) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar13 = *(long *)(lVar9 + (long)(int)*(uint *)(unaff_x19 + 0x48) * 8 + 0x20);
    uVar8 = FUN_053d9504(*(long *)(unaff_x19 + 0x38),uVar5 & 0xffffffff,*(undefined8 *)puVar3);
    lVar9 = lVar13;
    if ((uVar8 & 1) == 0) {
      lVar9 = lVar7;
    }
    if ((uVar8 & 1) == 0) {
      bVar4 = 0;
    }
    else {
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      plVar12 = *(long **)(unaff_x19 + 0x28);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar7 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x22) {
            puVar10 = (undefined8 *)(lVar7 + (long)(*piVar11 + 9) * 0x10 + 0x138);
            goto LAB_076c6fe0;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_0406ae20(plVar12,*unaff_x22,9);
LAB_076c6fe0:
      bVar4 = (*(code *)*puVar10)(plVar12,uVar5 & 0xffffffff,lVar13 + 0x14,puVar10[1]);
      lVar13 = lVar9;
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    *(byte *)(lVar13 + 0x10) = bVar4 & 1;
    lVar7 = lVar9;
  } while( true );
}


