/*
FUNCTION_NAME: FUN_014f6634
ENTRY_POINT: 014f6634
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_014f6634(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_03777033 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRTask_FromResult<OVRPlugin_Result>__);
    thunk_FUN_00d48444(System_Data_UniqueConstraint_var);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    DAT_03777033 = 1;
  }
  puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar2 = Method_OVRTask_FromResult<OVRPlugin_Result>__;
  puVar1 = System_Data_UniqueConstraint_var;
  if (*(int *)(param_1 + 0x10) == 1) {
    plVar4 = *(long **)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    if (plVar4 != (long *)0x0) goto LAB_014f68c4;
LAB_014f69e8:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  plVar4 = *(long **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar8 = *plVar4;
  lVar7 = *(long *)puVar2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_014f673c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_00d59724(plVar4,lVar7,0);
LAB_014f673c:
  plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  *(long **)(param_1 + 0x30) = plVar4;
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  do {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar8 = *plVar4;
    lVar7 = *(long *)puVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_014f67cc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar4,lVar7,0);
LAB_014f67cc:
    uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      FUN_014f6b18();
      *(undefined8 *)(param_1 + 0x30) = 0;
      return 0;
    }
    plVar4 = *(long **)(param_1 + 0x30);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar8 = *plVar4;
    lVar7 = *(long *)puVar1;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_014f6838;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar4,lVar7,0);
LAB_014f6838:
    lVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar4 = (long *)FUN_014f46ac();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar8 = *plVar4;
    lVar7 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_014f68a0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar4,lVar7,0);
LAB_014f68a0:
    plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    *(long **)(param_1 + 0x38) = plVar4;
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    if (plVar4 == (long *)0x0) goto LAB_014f69e8;
LAB_014f68c4:
    lVar8 = *plVar4;
    lVar7 = *(long *)puVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_014f6910;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar4,lVar7,0);
LAB_014f6910:
    uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar9 & 1) != 0) {
      plVar4 = *(long **)(param_1 + 0x38);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar8 = *plVar4;
      lVar7 = *(long *)puVar1;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 == 0) goto LAB_014f6988;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    FUN_014f6a68();
    plVar4 = *(long **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = 0;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == lVar7) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_014f69a4;
    }
  }
LAB_014f6988:
  puVar5 = (undefined8 *)FUN_00d59724(plVar4,lVar7,0);
LAB_014f69a4:
  uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}


