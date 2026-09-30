/*
FUNCTION_NAME: OVRPlugin$$GetSpaceSemanticLabels
ENTRY_POINT: 06397630
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSpaceSemanticLabels(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long in_stack_00000018;
  
code_r0x06397630:
  puVar1 = (undefined8 *)(param_1 + 0x138);
LAB_06397634:
  uVar2 = (*(code *)*puVar1)(unaff_x19,puVar1[1]);
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar3 = *(long **)(unaff_x22 + 0x10);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar4 = (**(code **)(*plVar3 + 0x178))
                    (plVar3,*(undefined8 *)(in_stack_00000018 + 0x40),uVar2,
                     *(undefined8 *)(in_stack_00000018 + 0x50),*(undefined8 *)(*plVar3 + 0x180));
  if ((uVar4 & 1) != 0) {
    *(undefined8 *)(in_stack_00000018 + 0x18) = uVar2;
    thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x18),uVar2);
    *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
    return 1;
  }
  plVar3 = *(long **)(in_stack_00000018 + 0x68);
  do {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar5 = *plVar3;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_063975c8;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c(plVar3,*unaff_x21,0);
LAB_063975c8:
    uVar4 = (*(code *)*puVar1)(plVar3,puVar1[1]);
    if ((uVar4 & 1) != 0) break;
    FUN_06397784();
    *(undefined8 *)(in_stack_00000018 + 0x68) = 0;
    thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x68),0);
    plVar3 = *(long **)(in_stack_00000018 + 0x60);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar5 = *plVar3;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06397480;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c(plVar3,*unaff_x21,0);
LAB_06397480:
    uVar4 = (*(code *)*puVar1)(plVar3,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      FUN_06397834();
      *(undefined8 *)(in_stack_00000018 + 0x60) = 0;
      thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x60),0);
      return 0;
    }
    plVar3 = *(long **)(in_stack_00000018 + 0x60);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar5 = *plVar3;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_063974ec;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c(plVar3,*unaff_x23,0);
LAB_063974ec:
    plVar3 = (long *)(*(code *)*puVar1)(plVar3,puVar1[1]);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar5 = *plVar3;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0639754c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c(plVar3,*unaff_x24,0);
LAB_0639754c:
    uVar2 = (*(code *)*puVar1)(plVar3,puVar1[1]);
    *(undefined8 *)(in_stack_00000018 + 0x68) = uVar2;
    thunk_FUN_037aeb94();
    plVar3 = *(long **)(in_stack_00000018 + 0x68);
    *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
  } while( true );
  unaff_x19 = *(long **)(in_stack_00000018 + 0x68);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  param_1 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x23) {
        param_1 = param_1 + (long)*piVar6 * 0x10;
        goto code_r0x06397630;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_0377596c(unaff_x19,*unaff_x23,0);
  goto LAB_06397634;
}


