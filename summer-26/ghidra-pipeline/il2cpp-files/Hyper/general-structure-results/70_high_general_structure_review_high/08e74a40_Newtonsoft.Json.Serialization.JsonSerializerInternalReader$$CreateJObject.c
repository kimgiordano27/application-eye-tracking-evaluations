/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJObject
ENTRY_POINT: 08e74a40
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJObject(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  int *unaff_x19;
  long unaff_x20;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_04947ee4(PTR_DAT_0ac09810);
  FUN_04947ee4(PTR_DAT_0ac6d420);
  FUN_04947ee4(PTR_DAT_0ac6d6f8);
  *(undefined1 *)(unaff_x20 + 0xf27) = 1;
  puVar6 = PTR_DAT_0ac6c9a0;
  puVar4 = PTR_DAT_0ac09aa0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x1a);
    unaff_x19[0x1a] = 0;
    unaff_x19[0x1b] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar14 = *(long *)(unaff_x19 + 8);
    if (lVar14 == 0) {
      thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
      uVar7 = thunk_FUN_04983f60();
      uVar9 = thunk_FUN_049ae08c(PTR_DAT_0ac6d428);
      FUN_08cc420c(uVar7,uVar9,0);
      uVar9 = thunk_FUN_049ae08c(PTR_DAT_0ac6d9f0);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar7,uVar9);
    }
    if (*(long *)(unaff_x19 + 10) == 0) {
      thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
      uVar7 = thunk_FUN_04983f60();
      uVar9 = thunk_FUN_049ae08c(PTR_DAT_0ac6d838);
      FUN_08cc420c(uVar7,uVar9,0);
      uVar9 = thunk_FUN_049ae08c(PTR_DAT_0ac6d9f0);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar7,uVar9);
    }
    lVar16 = *(long *)(unaff_x19 + 0x12);
    lVar13 = *(long *)PTR_DAT_0ac6d9e8;
    if (*(int *)(*(long *)PTR_DAT_0ac09aa0 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar7 = FUN_09a767c4(lVar14,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar14 = FUN_08bdbd24(lVar13,*(undefined8 *)PTR_DAT_0ac6d420,uVar7,0);
    uVar7 = FUN_09a767c4(*(undefined8 *)(unaff_x19 + 10),0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar7 = FUN_08bdbd24(lVar14,*(undefined8 *)PTR_DAT_0ac6d820,uVar7,0);
    lVar14 = *(long *)PTR_DAT_0ac09810;
    if ((char)unaff_x19[0xc] != '\0') {
      plVar8 = (long *)FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac09b30,4);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if ((lVar14 != 0) &&
         (lVar13 = thunk_FUN_04983e64(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0)) {
        uVar7 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar7,0);
      }
      if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar8[4] = lVar14;
      thunk_FUN_049ee3d8(plVar8 + 4,lVar14);
      puVar5 = PTR_DAT_0ac6d6f0;
      if ((*(long *)PTR_DAT_0ac6d6f0 != 0) &&
         (lVar14 = thunk_FUN_04983e64(*(long *)PTR_DAT_0ac6d6f0,*(undefined8 *)(*plVar8 + 0x40)),
         lVar14 == 0)) {
        uVar7 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar7,0);
      }
      if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar8[5] = *(long *)puVar5;
      thunk_FUN_049ee3d8();
      in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0xc);
      lVar14 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac14a68,&stack0x00000010);
      if ((lVar14 != 0) &&
         (lVar13 = thunk_FUN_04983e64(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0)) {
        uVar7 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar7,0);
      }
      if (*(uint *)(plVar8 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar8[6] = lVar14;
      thunk_FUN_049ee3d8(plVar8 + 6,lVar14);
      puVar5 = PTR_DAT_0ac10648;
      if ((*(long *)PTR_DAT_0ac10648 != 0) &&
         (lVar14 = thunk_FUN_04983e64(*(long *)PTR_DAT_0ac10648,*(undefined8 *)(*plVar8 + 0x40)),
         lVar14 == 0)) {
        uVar7 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar7,0);
      }
      if ((*(uint *)(plVar8 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar8[7] = *(long *)puVar5;
      thunk_FUN_049ee3d8();
      lVar14 = FUN_08bd9b60(plVar8,0);
    }
    lVar13 = *(long *)(unaff_x19 + 0xe);
    if (lVar13 != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar9 = FUN_09a767c4(lVar13,0);
      lVar14 = FUN_08bda228(lVar14,*(undefined8 *)PTR_DAT_0ac6d828,uVar9,
                            *(undefined8 *)PTR_DAT_0ac10648,0);
    }
    lVar13 = *(long *)(unaff_x19 + 0x10);
    if (lVar13 != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar9 = FUN_09a767c4(lVar13,0);
      lVar14 = FUN_08bda228(lVar14,*(undefined8 *)PTR_DAT_0ac6d6f8,uVar9,
                            *(undefined8 *)PTR_DAT_0ac10648,0);
    }
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(long *)(lVar16 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar13 = FUN_09a6c868(*(long *)(lVar16 + 0x20),0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar9 = FUN_08bde56c(lVar13,0x2f,0);
    uVar7 = FUN_08bcc3c0(uVar9,uVar7,0);
    uVar9 = *(undefined8 *)(lVar16 + 0x20);
    lVar13 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac12198);
    FUN_09abd444(lVar13,uVar9,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_09abdc2c(lVar13,uVar7,0);
    FUN_09abdcec(lVar13,lVar14,0);
    uVar7 = FUN_09abdda4(lVar13,0);
    uVar15 = *(undefined8 *)PTR_DAT_0ac10e80;
    lVar14 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0a3f8);
    FUN_0870ca1c(lVar14,*(undefined8 *)PTR_DAT_0ac0a400);
    uVar9 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac16e20,*(undefined8 *)(unaff_x19 + 0x14),0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
              (lVar14,*(undefined8 *)PTR_DAT_0ac121f0,uVar9,*(undefined8 *)PTR_DAT_0ac10e30);
    plVar8 = *(long **)(lVar16 + 0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar13 = *plVar8;
    uVar9 = *(undefined8 *)(unaff_x19 + 0x16);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar2 = *(undefined4 *)(lVar16 + 0x18);
    uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac6ca28) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar12 + 3) * 0x10 + 0x138);
          goto LAB_08e74e74;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac6ca28,3);
LAB_08e74e74:
    lVar14 = (*(code *)*puVar10)(plVar8,uVar15,uVar7,lVar14,0,uVar2,uVar9,uVar1);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000028 = FUN_07764808(lVar14,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar11 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar11 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x1a) = in_stack_00000028;
      thunk_FUN_049ee3d8(unaff_x19 + 0x1a,0);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0548e1a8(unaff_x19 + 2,&stack0x00000028);
      return;
    }
  }
  uVar7 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e258);
  uVar7 = FUN_05c7e4a8(uVar7,*(undefined8 *)PTR_DAT_0ac6d9e0);
  puVar4 = PTR_DAT_0ac6d9d8;
  iVar3 = *(int *)(*(long *)puVar6 + 0xe4);
  *unaff_x19 = -2;
  if (iVar3 == 0) {
    thunk_FUN_049a583c();
  }
  FUN_07b6c5d8(unaff_x19 + 2,uVar7,*(undefined8 *)puVar4);
  return;
}


