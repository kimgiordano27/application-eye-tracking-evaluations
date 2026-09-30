/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewDictionary
ENTRY_POINT: 08e7768c
PROGRAM: Hyper-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x08e77d78) */
/* WARNING: Removing unreachable block (ram,0x08e77abc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewDictionary(int *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  undefined8 in_stack_00000038;
  long *in_stack_00000040;
  int iStack000000000000004c;
  
  if ((*(byte *)(unaff_x20 + 0xf2f) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac6daa0);
    FUN_04947ee4(PTR_DAT_0ac111a0);
    FUN_04947ee4(PTR_DAT_0ac10e30);
    FUN_04947ee4(PTR_DAT_0ac0a400);
    FUN_04947ee4(PTR_DAT_0ac0a3f8);
    FUN_04947ee4(PTR_DAT_0ac09b90);
    FUN_04947ee4(PTR_DAT_0ac0ad38);
    FUN_04947ee4(PTR_DAT_0ac0ad40);
    FUN_04947ee4(PTR_DAT_0ac09ba8);
    FUN_04947ee4(PTR_DAT_0ac6ca28);
    FUN_04947ee4(PTR_DAT_0ac097b0);
    FUN_04947ee4(PTR_DAT_0ac0e258);
    FUN_04947ee4(PTR_DAT_0ac0e260);
    FUN_04947ee4(PTR_DAT_0ac0e268);
    FUN_04947ee4(PTR_DAT_0ac12198);
    FUN_04947ee4(PTR_DAT_0ac09aa0);
    FUN_04947ee4(PTR_DAT_0ac6daa8);
    FUN_04947ee4(PTR_DAT_0ac147d8);
    FUN_04947ee4(PTR_DAT_0ac6ca58);
    FUN_04947ee4(PTR_DAT_0ac6ca68);
    FUN_04947ee4(PTR_DAT_0ac10648);
    FUN_04947ee4(PTR_DAT_0ac121f0);
    FUN_04947ee4(PTR_DAT_0ac16e20);
    FUN_04947ee4(PTR_DAT_0ac09810);
    *(undefined1 *)(unaff_x20 + 0xf2f) = 1;
  }
  plVar15 = (long *)PTR_DAT_0ac111a0;
  puVar3 = PTR_DAT_0ac09aa0;
  iStack000000000000004c = *param_1;
  in_stack_00000038 = 0;
  in_stack_00000040 = (long *)0x0;
  if (iStack000000000000004c != 0) {
    lVar14 = *(long *)(param_1 + 8);
    if (lVar14 == 0) {
      thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
      uVar8 = thunk_FUN_04983f60();
      uVar16 = thunk_FUN_049ae08c(PTR_DAT_0ac6ca70);
      FUN_08cc420c(uVar8,uVar16,0);
      uVar16 = thunk_FUN_049ae08c(PTR_DAT_0ac6dab0);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar8,uVar16);
    }
    lVar18 = *(long *)(param_1 + 0xc);
    lVar13 = *(long *)PTR_DAT_0ac6daa8;
    if (*(int *)(*(long *)PTR_DAT_0ac09aa0 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar8 = FUN_09a767c4(lVar14,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar8 = FUN_08bdbd24(lVar13,*(undefined8 *)PTR_DAT_0ac6ca68,uVar8,0);
    plVar15 = *(long **)(param_1 + 10);
    uVar16 = *(undefined8 *)PTR_DAT_0ac09810;
    if ((plVar15 == (long *)0x0) &&
       (plVar15 = (long *)FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac097b0,0), plVar15 == (long *)0x0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar14 = *plVar15;
    uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac0ad38) {
          puVar9 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_08e778e0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar15,*(long *)PTR_DAT_0ac0ad38,0);
LAB_08e778e0:
    in_stack_00000040 = (long *)(*(code *)*puVar9)(plVar15,puVar9[1]);
    puVar7 = PTR_DAT_0ac6ca58;
    puVar6 = PTR_DAT_0ac10648;
    puVar5 = PTR_DAT_0ac0ad40;
    puVar4 = PTR_DAT_0ac09ba8;
    do {
      plVar15 = in_stack_00000040;
      if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar14 = *in_stack_00000040;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_08e77978;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(in_stack_00000040,*(long *)puVar4,0);
LAB_08e77978:
      uVar11 = (*(code *)*puVar9)(plVar15,puVar9[1]);
      plVar17 = in_stack_00000040;
      plVar15 = (long *)PTR_DAT_0ac111a0;
      if ((uVar11 & 1) == 0) {
        if ((-1 < iStack000000000000004c) || (in_stack_00000040 == (long *)0x0)) goto LAB_08e77ab0;
        lVar14 = *in_stack_00000040;
        uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar11 == 0) goto LAB_08e77a88;
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        goto LAB_08e77a70;
      }
      if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar14 = *in_stack_00000040;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
            puVar9 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_08e779dc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_04980e68(in_stack_00000040,*(long *)puVar5,0);
LAB_08e779dc:
      uVar10 = (*(code *)*puVar9)(plVar17,puVar9[1]);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar10 = FUN_09a767c4(uVar10,0);
      uVar16 = FUN_08bda228(uVar16,*(undefined8 *)puVar7,uVar10,*(undefined8 *)puVar6,0);
    } while( true );
  }
  in_stack_00000038 = *(undefined8 *)(param_1 + 0x14);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  iStack000000000000004c = -1;
  *param_1 = -1;
  goto LAB_08e77c80;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_08e77a70:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar9 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_08e77aa4;
    }
  }
LAB_08e77a88:
  puVar9 = (undefined8 *)FUN_04980e68(in_stack_00000040,*(long *)PTR_DAT_0ac09b90,0);
LAB_08e77aa4:
  (*(code *)*puVar9)(plVar17,puVar9[1]);
LAB_08e77ab0:
  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (*(long *)(lVar18 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar14 = FUN_09a6c868(*(long *)(lVar18 + 0x20),0);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar10 = FUN_08bde56c(lVar14,0x2f,0);
  uVar8 = FUN_08bcc3c0(uVar10,uVar8,0);
  uVar10 = *(undefined8 *)(lVar18 + 0x20);
  lVar14 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac12198);
  FUN_09abd444(lVar14,uVar10,0);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_09abdc2c(lVar14,uVar8,0);
  FUN_09abdcec(lVar14,uVar16,0);
  uVar8 = FUN_09abdda4(lVar14,0);
  uVar10 = *(undefined8 *)PTR_DAT_0ac147d8;
  lVar14 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0a3f8);
  FUN_0870ca1c(lVar14,*(undefined8 *)PTR_DAT_0ac0a400);
  uVar16 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac16e20,*(undefined8 *)(param_1 + 0xe),0);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
            (lVar14,*(undefined8 *)PTR_DAT_0ac121f0,uVar16,*(undefined8 *)PTR_DAT_0ac10e30);
  plVar17 = *(long **)(lVar18 + 0x10);
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar13 = *plVar17;
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x12);
  uVar2 = *(undefined4 *)(lVar18 + 0x18);
  uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac6ca28) {
        puVar9 = (undefined8 *)(lVar13 + (long)(*piVar12 + 3) * 0x10 + 0x138);
        goto LAB_08e77c24;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_04980e68(plVar17,*(long *)PTR_DAT_0ac6ca28,3);
LAB_08e77c24:
  lVar14 = (*(code *)*puVar9)(plVar17,uVar10,uVar8,lVar14,0,uVar2,uVar16,uVar1);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  in_stack_00000038 = FUN_07764808(lVar14,*(undefined8 *)PTR_DAT_0ac0e268);
  uVar11 = FUN_076844c8(&stack0x00000038,*(undefined8 *)PTR_DAT_0ac0e260);
  if ((uVar11 & 1) == 0) {
    iStack000000000000004c = 0;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x14) = in_stack_00000038;
    thunk_FUN_049ee3d8(param_1 + 0x14,0);
    if (*(int *)(*plVar15 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_05a22d28(param_1 + 2,&stack0x00000038,param_1,*(undefined8 *)PTR_DAT_0ac6daa0);
    return;
  }
LAB_08e77c80:
  FUN_07684508(&stack0x00000038,*(undefined8 *)PTR_DAT_0ac0e258);
  lVar14 = *plVar15;
  *param_1 = -2;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08c7f478(param_1 + 2,0);
  return;
}


