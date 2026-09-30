/*
FUNCTION_NAME: OVRManager$$get_utilitiesVersion
ENTRY_POINT: 0511e31c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_utilitiesVersion(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  long *plVar9;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
code_r0x0511e31c:
  do {
    puVar5 = (undefined8 *)FUN_02d9a5d4(unaff_x22,param_2,1);
    while( true ) {
      (*(code *)*puVar5)(unaff_x22,unaff_x21,unaff_x23,puVar5[1]);
      uVar4 = FUN_04a3e694(&stack0x00000020,*unaff_x24);
      unaff_x21 = in_stack_00000030;
      if ((uVar4 & 1) == 0) {
        FUN_04a3e690(&stack0x00000020,*(undefined8 *)PTR_DAT_06780ba0);
        if (*(long *)(unaff_x20 + 0xb8) == 0) goto LAB_0511e454;
        lVar7 = FUN_033b7810(*(long *)(unaff_x20 + 0xb8),*(undefined8 *)PTR_DAT_06780b98);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_039700f4(lVar7,*(undefined8 *)PTR_DAT_06780bc8);
        puVar2 = PTR_DAT_06780ba8;
        puVar1 = PTR_DAT_06780b68;
        in_stack_00000028 = in_stack_00000008;
        in_stack_00000020 = in_stack_00000000;
        in_stack_00000038 = in_stack_00000018;
        in_stack_00000030 = in_stack_00000010;
        goto LAB_0511e3b0;
      }
      unaff_x22 = *(long **)(unaff_x20 + 200);
      unaff_x23 = FUN_0511dc04();
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar7 = *unaff_x22;
      param_2 = *unaff_x25;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 == 0) break;
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      while (*(long *)(piVar8 + -2) != param_2) {
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
        if (uVar4 == 0) goto code_r0x0511e31c;
      }
      puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
    }
  } while( true );
LAB_0511e3b0:
  uVar4 = FUN_04a3e694(&stack0x00000020,*(undefined8 *)puVar2);
  uVar3 = in_stack_00000030;
  if ((uVar4 & 1) == 0) {
    FUN_04a3e690(&stack0x00000020,*(undefined8 *)PTR_DAT_06780ba0);
LAB_0511e454:
    plVar9 = (long *)(unaff_x20 + 0xc0);
    if (*plVar9 != 0) {
      lVar7 = FUN_0511dc04();
      *plVar9 = lVar7;
      thunk_FUN_02dd37b4(plVar9,lVar7);
    }
    return;
  }
  plVar9 = *(long **)(unaff_x20 + 0xb8);
  uVar6 = FUN_0511dc04();
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar7 = *plVar9;
  uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar4 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto FUN_0511e428;
      }
      uVar4 = uVar4 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar1,1);
FUN_0511e428:
  (*(code *)*puVar5)(plVar9,uVar3,uVar6,puVar5[1]);
  goto LAB_0511e3b0;
}


