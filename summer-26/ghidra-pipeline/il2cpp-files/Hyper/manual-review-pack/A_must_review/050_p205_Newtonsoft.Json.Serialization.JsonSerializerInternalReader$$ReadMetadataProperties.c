/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataProperties
ENTRY_POINT: 08e76db8
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataProperties(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  int *unaff_x19;
  long unaff_x20;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_04947ee4(PTR_DAT_0ac6d6f8);
  FUN_04947ee4(PTR_DAT_0ac6d948);
  *(undefined1 *)(unaff_x20 + 0xf2d) = 1;
  puVar5 = PTR_DAT_0ac6ca00;
  puVar3 = PTR_DAT_0ac09aa0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x18);
    unaff_x19[0x18] = 0;
    unaff_x19[0x19] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar13 = *(long *)(unaff_x19 + 8);
    if (lVar13 == 0) {
      thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
      uVar6 = thunk_FUN_04983f60();
      uVar8 = thunk_FUN_049ae08c(PTR_DAT_0ac6d960);
      FUN_08cc420c(uVar6,uVar8,0);
      uVar8 = thunk_FUN_049ae08c(PTR_DAT_0ac6da88);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar6,uVar8);
    }
    lVar15 = *(long *)(unaff_x19 + 0x10);
    lVar12 = *(long *)PTR_DAT_0ac6da80;
    if (*(int *)(*(long *)PTR_DAT_0ac09aa0 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar6 = FUN_09a767c4(lVar13,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar6 = FUN_08bdbd24(lVar12,*(undefined8 *)PTR_DAT_0ac6d948,uVar6,0);
    lVar13 = *(long *)PTR_DAT_0ac09810;
    if ((char)unaff_x19[10] != '\0') {
      plVar7 = (long *)FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac09b30,4);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if ((lVar13 != 0) &&
         (lVar12 = thunk_FUN_04983e64(lVar13,*(undefined8 *)(*plVar7 + 0x40)), lVar12 == 0)) {
        uVar6 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar6,0);
      }
      if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar7[4] = lVar13;
      thunk_FUN_049ee3d8(plVar7 + 4,lVar13);
      puVar4 = PTR_DAT_0ac6d6f0;
      if ((*(long *)PTR_DAT_0ac6d6f0 != 0) &&
         (lVar13 = thunk_FUN_04983e64(*(long *)PTR_DAT_0ac6d6f0,*(undefined8 *)(*plVar7 + 0x40)),
         lVar13 == 0)) {
        uVar6 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar6,0);
      }
      if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar7[5] = *(long *)puVar4;
      thunk_FUN_049ee3d8();
      in_stack_00000010 = *(undefined8 *)(unaff_x19 + 10);
      lVar13 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac14a68,&stack0x00000010);
      if ((lVar13 != 0) &&
         (lVar12 = thunk_FUN_04983e64(lVar13,*(undefined8 *)(*plVar7 + 0x40)), lVar12 == 0)) {
        uVar6 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar6,0);
      }
      if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar7[6] = lVar13;
      thunk_FUN_049ee3d8(plVar7 + 6,lVar13);
      puVar4 = PTR_DAT_0ac10648;
      if ((*(long *)PTR_DAT_0ac10648 != 0) &&
         (lVar13 = thunk_FUN_04983e64(*(long *)PTR_DAT_0ac10648,*(undefined8 *)(*plVar7 + 0x40)),
         lVar13 == 0)) {
        uVar6 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar6,0);
      }
      if ((*(uint *)(plVar7 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar7[7] = *(long *)puVar4;
      thunk_FUN_049ee3d8();
      lVar13 = FUN_08bd9b60(plVar7,0);
    }
    if ((char)unaff_x19[0xc] != '\0') {
      plVar7 = (long *)FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac09b30,4);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if ((lVar13 != 0) &&
         (lVar12 = thunk_FUN_04983e64(lVar13,*(undefined8 *)(*plVar7 + 0x40)), lVar12 == 0)) {
        uVar6 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar6,0);
      }
      if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar7[4] = lVar13;
      thunk_FUN_049ee3d8(plVar7 + 4,lVar13);
      puVar4 = PTR_DAT_0ac6d738;
      if ((*(long *)PTR_DAT_0ac6d738 != 0) &&
         (lVar13 = thunk_FUN_04983e64(*(long *)PTR_DAT_0ac6d738,*(undefined8 *)(*plVar7 + 0x40)),
         lVar13 == 0)) {
        uVar6 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar6,0);
      }
      if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar7[5] = *(long *)puVar4;
      thunk_FUN_049ee3d8();
      in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0xc);
      lVar13 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac14a68,&stack0x00000010);
      if ((lVar13 != 0) &&
         (lVar12 = thunk_FUN_04983e64(lVar13,*(undefined8 *)(*plVar7 + 0x40)), lVar12 == 0)) {
        uVar6 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar6,0);
      }
      if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar7[6] = lVar13;
      thunk_FUN_049ee3d8(plVar7 + 6,lVar13);
      puVar4 = PTR_DAT_0ac10648;
      if ((*(long *)PTR_DAT_0ac10648 != 0) &&
         (lVar13 = thunk_FUN_04983e64(*(long *)PTR_DAT_0ac10648,*(undefined8 *)(*plVar7 + 0x40)),
         lVar13 == 0)) {
        uVar6 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar6,0);
      }
      if ((*(uint *)(plVar7 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      plVar7[7] = *(long *)puVar4;
      thunk_FUN_049ee3d8();
      lVar13 = FUN_08bd9b60(plVar7,0);
    }
    lVar12 = *(long *)(unaff_x19 + 0xe);
    if (lVar12 != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar8 = FUN_09a767c4(lVar12,0);
      lVar13 = FUN_08bda228(lVar13,*(undefined8 *)PTR_DAT_0ac6d6f8,uVar8,
                            *(undefined8 *)PTR_DAT_0ac10648,0);
    }
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(long *)(lVar15 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar12 = FUN_09a6c868(*(long *)(lVar15 + 0x20),0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar8 = FUN_08bde56c(lVar12,0x2f,0);
    uVar6 = FUN_08bcc3c0(uVar8,uVar6,0);
    uVar8 = *(undefined8 *)(lVar15 + 0x20);
    lVar12 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac12198);
    FUN_09abd444(lVar12,uVar8,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_09abdc2c(lVar12,uVar6,0);
    FUN_09abdcec(lVar12,lVar13,0);
    uVar6 = FUN_09abdda4(lVar12,0);
    uVar14 = *(undefined8 *)PTR_DAT_0ac10e80;
    lVar13 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0a3f8);
    FUN_0870ca1c(lVar13,*(undefined8 *)PTR_DAT_0ac0a400);
    uVar8 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac16e20,*(undefined8 *)(unaff_x19 + 0x12),0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
              (lVar13,*(undefined8 *)PTR_DAT_0ac121f0,uVar8,*(undefined8 *)PTR_DAT_0ac10e30);
    plVar7 = *(long **)(lVar15 + 0x10);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar12 = *plVar7;
    uVar8 = *(undefined8 *)(unaff_x19 + 0x14);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x16);
    uVar2 = *(undefined4 *)(lVar15 + 0x18);
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac6ca28) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_08e77288;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac6ca28,3);
LAB_08e77288:
    lVar13 = (*(code *)*puVar9)(plVar7,uVar14,uVar6,lVar13,0,uVar2,uVar8,uVar1);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000028 = FUN_07764808(lVar13,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar10 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar10 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000028;
      thunk_FUN_049ee3d8(unaff_x19 + 0x18,0);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0548e880(unaff_x19 + 2,&stack0x00000028);
      return;
    }
  }
  uVar6 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e258);
  uVar6 = FUN_05c7e4a8(uVar6,*(undefined8 *)PTR_DAT_0ac6da78);
  *unaff_x19 = -2;
  puVar3 = PTR_DAT_0ac6da70;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_07b6c5d8(unaff_x19 + 2,uVar6,*(undefined8 *)puVar3);
  return;
}


