/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundingBox3D
ENTRY_POINT: 06397550
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


undefined8 OVRPlugin__GetSpaceBoundingBox3D(code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long *plVar6;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long in_stack_00000018;
  
code_r0x06397550:
  uVar1 = (*param_1)(unaff_x19,param_3);
  *(undefined8 *)(in_stack_00000018 + 0x68) = uVar1;
  thunk_FUN_037aeb94();
  plVar6 = *(long **)(in_stack_00000018 + 0x68);
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
  do {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_063975c8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c(plVar6,*unaff_x21,0);
LAB_063975c8:
    uVar4 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if ((uVar4 & 1) == 0) break;
    plVar6 = *(long **)(in_stack_00000018 + 0x68);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06397634;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c(plVar6,*unaff_x23,0);
LAB_06397634:
    uVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar6 = *(long **)(unaff_x22 + 0x10);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar4 = (**(code **)(*plVar6 + 0x178))
                      (plVar6,*(undefined8 *)(in_stack_00000018 + 0x40),uVar1,
                       *(undefined8 *)(in_stack_00000018 + 0x50),*(undefined8 *)(*plVar6 + 0x180));
    if ((uVar4 & 1) != 0) {
      *(undefined8 *)(in_stack_00000018 + 0x18) = uVar1;
      thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x18),uVar1);
      *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
      return 1;
    }
    plVar6 = *(long **)(in_stack_00000018 + 0x68);
  } while( true );
  FUN_06397784();
  *(undefined8 *)(in_stack_00000018 + 0x68) = 0;
  thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x68),0);
  plVar6 = *(long **)(in_stack_00000018 + 0x60);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x21) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_06397480;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0377596c(plVar6,*unaff_x21,0);
LAB_06397480:
  uVar4 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  if ((uVar4 & 1) == 0) {
    FUN_06397834();
    *(undefined8 *)(in_stack_00000018 + 0x60) = 0;
    thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x60),0);
    return 0;
  }
  plVar6 = *(long **)(in_stack_00000018 + 0x60);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x23) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_063974ec;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0377596c(plVar6,*unaff_x23,0);
LAB_063974ec:
  unaff_x19 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x24) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0639754c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0377596c(unaff_x19,*unaff_x24,0);
LAB_0639754c:
  param_1 = (code *)*puVar2;
  param_3 = puVar2[1];
  goto code_r0x06397550;
}


