/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$GetConsentTitle
ENTRY_POINT: 05698b80
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05698ff8) */

long OVRPlugin_UnifiedConsent__GetConsentTitle(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint *puVar10;
  long lVar11;
  undefined4 uVar12;
  ulong uVar13;
  uint uVar14;
  int *piVar15;
  undefined8 uVar16;
  long unaff_x23;
  
  puVar4 = System_Linq_Expressions_PrimitiveParameterExpression<Exception>_TypeInfo;
  puVar3 = System_Linq_Expressions_PrimitiveParameterExpression<double>_TypeInfo;
  puVar1 = System_Linq_Expressions_PrimitiveParameterExpression<Decimal>_TypeInfo;
  if ((*(byte *)(unaff_x23 + 0x862) & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(System_Linq_Expressions_PrimitiveParameterExpression<short>_TypeInfo);
    FUN_02d965b8(System_Linq_Expressions_PrimitiveParameterExpression<double>_TypeInfo);
    FUN_02d965b8(System_Linq_Expressions_PrimitiveParameterExpression<Decimal>_TypeInfo);
    FUN_02d965b8(System_Linq_Expressions_PrimitiveParameterExpression<Exception>_TypeInfo);
    FUN_02d965b8(System_Linq_Expressions_PrimitiveParameterExpression<int>_TypeInfo);
    *(undefined1 *)(unaff_x23 + 0x862) = 1;
  }
  lVar5 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_03fb5c9c(lVar5,*(undefined8 *)puVar3);
  puVar1 = PTR_DAT_069fb9c0;
  uVar16 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar16 = FUN_054f73b4(uVar16,0);
  if (*(int *)(*(long *)(puVar1 + 0x98) + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)(puVar1 + 0x98));
  }
  lVar6 = FUN_0551ce98(uVar16,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar7 = (long *)FUN_0550dd88(lVar6,0);
  puVar4 = System_Linq_Expressions_PrimitiveParameterExpression<int>_TypeInfo;
  puVar3 = System_Linq_Expressions_PrimitiveParameterExpression<short>_TypeInfo;
  puVar1 = PTR_DAT_069fbff8;
joined_r0x05698c84:
  do {
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar11 = *plVar7;
    lVar6 = *(long *)puVar1;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_05698cf4;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_02dd004c(plVar7,lVar6,0);
LAB_05698cf4:
    uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    puVar2 = PTR_DAT_069fbff0;
    if ((uVar13 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_02dd3048(plVar7,*(undefined8 *)PTR_DAT_069fbff0);
      if (plVar7 == (long *)0x0) {
        return lVar5;
      }
      lVar6 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar13 == 0) goto LAB_05698f88;
      piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_05698f70;
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar11 = *plVar7;
    lVar6 = *(long *)puVar1;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_05698d5c;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_02dd004c(plVar7,lVar6,1);
LAB_05698d5c:
    plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0();
    }
    puVar10 = (uint *)thunk_FUN_02dd328c();
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar14 = *puVar10;
    if (*(uint *)(param_1 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
  } while (*(char *)(param_1 + (int)uVar14 + 0x20) == '\0');
  if (uVar14 == 1) {
    if (lVar5 == 0) {
LAB_05698fe8:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar11 = *(long *)puVar3;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_05698fe8;
    uVar14 = *(uint *)(lVar5 + 0x18);
    if (uVar14 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar14 + 1;
      *(undefined4 *)(lVar6 + (long)(int)uVar14 * 4 + 0x20) = 1;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    }
    else {
      FUN_03fb652c(lVar5,1,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar11 = *(long *)puVar3;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
    uVar14 = *(uint *)(lVar5 + 0x18);
    if (*(uint *)(lVar6 + 0x18) <= uVar14) {
      FUN_03fb652c(lVar5,3,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      goto joined_r0x05698c84;
    }
    uVar12 = 3;
  }
  else {
    if (uVar14 != 0) goto joined_r0x05698c84;
    if (lVar5 == 0) {
LAB_05698fe4:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar11 = *(long *)puVar3;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_05698fe4;
    uVar14 = *(uint *)(lVar5 + 0x18);
    if (uVar14 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar14 + 1;
      *(undefined4 *)(lVar6 + (long)(int)uVar14 * 4 + 0x20) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    }
    else {
      FUN_03fb652c(lVar5,0,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar11 = *(long *)puVar3;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
    uVar14 = *(uint *)(lVar5 + 0x18);
    if (*(uint *)(lVar6 + 0x18) <= uVar14) {
      FUN_03fb652c(lVar5,2,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      goto joined_r0x05698c84;
    }
    uVar12 = 2;
  }
  *(uint *)(lVar5 + 0x18) = uVar14 + 1;
  *(undefined4 *)(lVar6 + (long)(int)uVar14 * 4 + 0x20) = uVar12;
  goto joined_r0x05698c84;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_05698f70:
    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_05698fa4;
    }
  }
LAB_05698f88:
  puVar8 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)puVar2,0);
LAB_05698fa4:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return lVar5;
}


