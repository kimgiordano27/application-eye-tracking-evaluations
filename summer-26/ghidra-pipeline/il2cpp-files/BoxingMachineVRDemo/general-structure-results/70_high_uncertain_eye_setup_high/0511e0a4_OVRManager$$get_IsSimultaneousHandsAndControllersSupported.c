/*
FUNCTION_NAME: OVRManager$$get_IsSimultaneousHandsAndControllersSupported
ENTRY_POINT: 0511e0a4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_IsSimultaneousHandsAndControllersSupported
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong in_x9;
  int *in_x10;
  int *piVar11;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long *plVar12;
  undefined8 unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
code_r0x0511e0a4:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_0511e098;
LAB_0511e0b0:
  puVar5 = (undefined8 *)FUN_02d9a5d4(unaff_x22,param_3,1);
  do {
    (*(code *)*puVar5)(unaff_x22,unaff_w21,unaff_x23,puVar5[1]);
    plVar12 = *(long **)(unaff_x20 + 0xf8);
    unaff_w21 = unaff_w21 + 1;
    if (plVar12 == (long *)0x0) goto LAB_0511e254;
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x24) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0511dff8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar12,*unaff_x24,0);
LAB_0511dff8:
    iVar3 = (*(code *)*puVar5)(plVar12,puVar5[1]);
    puVar2 = PTR_DAT_06780ad8;
    puVar1 = PTR_DAT_06780ab8;
    if (iVar3 <= unaff_w21) {
      plVar12 = *(long **)(unaff_x20 + 0x98);
      if (plVar12 == (long *)0x0) goto LAB_0511e258;
      iVar3 = 0;
      break;
    }
    unaff_x22 = *(long **)(unaff_x20 + 0xf8);
    if (unaff_x22 == (long *)0x0) goto LAB_0511e254;
    lVar8 = *unaff_x22;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x25) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0511e060;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(unaff_x22,*unaff_x25,0);
LAB_0511e060:
    (*(code *)*puVar5)(unaff_x22,unaff_w21,puVar5[1]);
    unaff_x23 = FUN_0511dc04();
    param_1 = *unaff_x22;
    param_3 = *unaff_x25;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_0511e0b0;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_0511e098:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x0511e0a4;
    puVar5 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
  } while( true );
  do {
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0511e15c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar1,0);
LAB_0511e15c:
    iVar4 = (*(code *)*puVar5)(plVar12,puVar5[1]);
    if (iVar4 <= iVar3) goto LAB_0511e258;
    plVar12 = *(long **)(unaff_x20 + 0x98);
    if (plVar12 == (long *)0x0) break;
    lVar9 = *plVar12;
    lVar8 = *(long *)puVar2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0511e1c4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar12,lVar8,0);
LAB_0511e1c4:
    (*(code *)*puVar5)(plVar12,iVar3,puVar5[1]);
    uVar6 = FUN_0511dc04();
    lVar9 = *plVar12;
    lVar8 = *(long *)puVar2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0511e234;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar12,lVar8,1);
LAB_0511e234:
    (*(code *)*puVar5)(plVar12,iVar3,uVar6,puVar5[1]);
    plVar12 = *(long **)(unaff_x20 + 0x98);
    iVar3 = iVar3 + 1;
  } while (plVar12 != (long *)0x0);
LAB_0511e254:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
LAB_0511e258:
  plVar12 = (long *)(unaff_x20 + 0xa8);
  if (*plVar12 != 0) {
    lVar8 = FUN_0511dc04();
    *plVar12 = lVar8;
    thunk_FUN_02dd37b4(plVar12,lVar8);
  }
  if (*(long *)(unaff_x20 + 200) != 0) {
    lVar8 = FUN_033b7810(*(long *)(unaff_x20 + 200),*(undefined8 *)PTR_DAT_06780b98);
    if (lVar8 == 0) goto LAB_0511e254;
    FUN_039700f4(lVar8,*(undefined8 *)PTR_DAT_06780bc8);
    puVar2 = PTR_DAT_06780ba8;
    puVar1 = PTR_DAT_06780b68;
    in_stack_00000028 = in_stack_00000008;
    in_stack_00000020 = in_stack_00000000;
    in_stack_00000038 = in_stack_00000018;
    in_stack_00000030 = in_stack_00000010;
    while (uVar10 = FUN_04a3e694(&stack0x00000020,*(undefined8 *)puVar2), uVar6 = in_stack_00000030,
          (uVar10 & 1) != 0) {
      plVar12 = *(long **)(unaff_x20 + 200);
      uVar7 = FUN_0511dc04();
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_0511e33c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar1,1);
LAB_0511e33c:
      (*(code *)*puVar5)(plVar12,uVar6,uVar7,puVar5[1]);
    }
    FUN_04a3e690(&stack0x00000020,*(undefined8 *)PTR_DAT_06780ba0);
  }
  if (*(long *)(unaff_x20 + 0xb8) != 0) {
    lVar8 = FUN_033b7810(*(long *)(unaff_x20 + 0xb8),*(undefined8 *)PTR_DAT_06780b98);
    if (lVar8 == 0) goto LAB_0511e254;
    FUN_039700f4(lVar8,*(undefined8 *)PTR_DAT_06780bc8);
    puVar2 = PTR_DAT_06780ba8;
    puVar1 = PTR_DAT_06780b68;
    in_stack_00000028 = in_stack_00000008;
    in_stack_00000020 = in_stack_00000000;
    in_stack_00000038 = in_stack_00000018;
    in_stack_00000030 = in_stack_00000010;
    while (uVar10 = FUN_04a3e694(&stack0x00000020,*(undefined8 *)puVar2), uVar6 = in_stack_00000030,
          (uVar10 & 1) != 0) {
      plVar12 = *(long **)(unaff_x20 + 0xb8);
      uVar7 = FUN_0511dc04();
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto FUN_0511e428;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)puVar1,1);
FUN_0511e428:
      (*(code *)*puVar5)(plVar12,uVar6,uVar7,puVar5[1]);
    }
    FUN_04a3e690(&stack0x00000020,*(undefined8 *)PTR_DAT_06780ba0);
  }
  plVar12 = (long *)(unaff_x20 + 0xc0);
  if (*plVar12 != 0) {
    lVar8 = FUN_0511dc04();
    *plVar12 = lVar8;
    thunk_FUN_02dd37b4(plVar12,lVar8);
  }
  return;
}


