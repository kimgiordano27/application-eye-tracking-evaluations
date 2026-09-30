/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$System.Collections.Generic.IEqualityComparer<System.Object>.Equals
ENTRY_POINT: 08e71874
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__System_Collections_Generic_IEqualityComparer<System_Object>_Equals
               (void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x24;
  long *unaff_x27;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000028;
  
  lVar4 = FUN_08bda228();
  if (*(char *)(unaff_x19 + 0xe) != '\0') {
    plVar5 = (long *)FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac09b30,4);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if ((lVar4 != 0) &&
       (lVar6 = thunk_FUN_04983e64(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar7,0);
    }
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    plVar5[4] = lVar4;
    thunk_FUN_049ee3d8(plVar5 + 4,lVar4);
    puVar3 = PTR_DAT_0ac6d898;
    if ((*(long *)PTR_DAT_0ac6d898 != 0) &&
       (lVar4 = thunk_FUN_04983e64(*(long *)PTR_DAT_0ac6d898,*(undefined8 *)(*plVar5 + 0x40)),
       lVar4 == 0)) {
      uVar7 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar7,0);
    }
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    plVar5[5] = *(long *)puVar3;
    thunk_FUN_049ee3d8();
    in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0xe);
    lVar4 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac14a68,&stack0x00000010);
    if ((lVar4 != 0) &&
       (lVar6 = thunk_FUN_04983e64(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar7,0);
    }
    if (*(uint *)(plVar5 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    plVar5[6] = lVar4;
    thunk_FUN_049ee3d8(plVar5 + 6,lVar4);
    puVar3 = PTR_DAT_0ac10648;
    if ((*(long *)PTR_DAT_0ac10648 != 0) &&
       (lVar4 = thunk_FUN_04983e64(*(long *)PTR_DAT_0ac10648,*(undefined8 *)(*plVar5 + 0x40)),
       lVar4 == 0)) {
      uVar7 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar7,0);
    }
    if ((*(uint *)(plVar5 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    plVar5[7] = *(long *)puVar3;
    thunk_FUN_049ee3d8();
    lVar4 = FUN_08bd9b60(plVar5,0);
  }
  if (*(char *)(unaff_x19 + 0x10) != '\0') {
    plVar5 = (long *)FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac09b30,4);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if ((lVar4 != 0) &&
       (lVar6 = thunk_FUN_04983e64(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar7,0);
    }
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    plVar5[4] = lVar4;
    thunk_FUN_049ee3d8(plVar5 + 4,lVar4);
    puVar3 = PTR_DAT_0ac6d8a8;
    if ((*(long *)PTR_DAT_0ac6d8a8 != 0) &&
       (lVar4 = thunk_FUN_04983e64(*(long *)PTR_DAT_0ac6d8a8,*(undefined8 *)(*plVar5 + 0x40)),
       lVar4 == 0)) {
      uVar7 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar7,0);
    }
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    plVar5[5] = *(long *)puVar3;
    thunk_FUN_049ee3d8();
    in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x10);
    lVar4 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac14a68,&stack0x00000010);
    if ((lVar4 != 0) &&
       (lVar6 = thunk_FUN_04983e64(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar7,0);
    }
    if (*(uint *)(plVar5 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    plVar5[6] = lVar4;
    thunk_FUN_049ee3d8(plVar5 + 6,lVar4);
    puVar3 = PTR_DAT_0ac10648;
    if ((*(long *)PTR_DAT_0ac10648 != 0) &&
       (lVar4 = thunk_FUN_04983e64(*(long *)PTR_DAT_0ac10648,*(undefined8 *)(*plVar5 + 0x40)),
       lVar4 == 0)) {
      uVar7 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar7,0);
    }
    if ((*(uint *)(plVar5 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    plVar5[7] = *(long *)puVar3;
    thunk_FUN_049ee3d8();
    lVar4 = FUN_08bd9b60(plVar5,0);
  }
  lVar6 = *(long *)(unaff_x19 + 0x12);
  if (lVar6 != 0) {
    if (*(int *)(*(long *)PTR_DAT_0ac09aa0 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar7 = FUN_09a767c4(lVar6,0);
    lVar4 = FUN_08bda228(lVar4,*(undefined8 *)PTR_DAT_0ac6d888,uVar7,*(undefined8 *)PTR_DAT_0ac10648
                         ,0);
  }
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (*(long *)(unaff_x24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar6 = FUN_09a6c868(*(long *)(unaff_x24 + 0x20),0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_08bde56c(lVar6,0x2f,0);
  uVar7 = FUN_08bcc3c0();
  uVar12 = *(undefined8 *)(unaff_x24 + 0x20);
  lVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac12198);
  FUN_09abd444(lVar6,uVar12,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_09abdc2c(lVar6,uVar7,0);
  FUN_09abdcec(lVar6,lVar4,0);
  uVar7 = FUN_09abdda4(lVar6,0);
  uVar11 = *(undefined8 *)PTR_DAT_0ac10e80;
  lVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0a3f8);
  FUN_0870ca1c(lVar4,*(undefined8 *)PTR_DAT_0ac0a400);
  uVar12 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac16e20,*(undefined8 *)(unaff_x19 + 0x16),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
            (lVar4,*(undefined8 *)PTR_DAT_0ac121f0,uVar12,*(undefined8 *)PTR_DAT_0ac10e30);
  plVar5 = *(long **)(unaff_x24 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar6 = *plVar5;
  uVar12 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x1a);
  uVar2 = *(undefined4 *)(unaff_x24 + 0x18);
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac6ca28) {
        puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 3) * 0x10 + 0x138);
        goto LAB_08e71cb8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_04980e68(plVar5,*(long *)PTR_DAT_0ac6ca28,3);
LAB_08e71cb8:
  lVar4 = (*(code *)*puVar8)(plVar5,uVar11,uVar7,lVar4,0,uVar2,uVar12,uVar1);
  if (lVar4 != 0) {
    in_stack_00000028 = FUN_07764808(lVar4,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar9 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar9 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000028;
      thunk_FUN_049ee3d8(unaff_x19 + 0x1c,0);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0548d3f8(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      uVar7 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e258);
      uVar7 = FUN_05c7e4a8(uVar7,*(undefined8 *)PTR_DAT_0ac6d878);
      *unaff_x19 = 0xfffffffe;
      puVar3 = PTR_DAT_0ac6d870;
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_07b6c5d8(unaff_x19 + 2,uVar7,*(undefined8 *)puVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


