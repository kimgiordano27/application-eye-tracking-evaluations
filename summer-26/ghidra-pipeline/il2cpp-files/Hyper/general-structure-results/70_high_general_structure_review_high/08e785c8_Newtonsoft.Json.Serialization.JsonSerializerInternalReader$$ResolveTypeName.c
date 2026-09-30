/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolveTypeName
ENTRY_POINT: 08e785c8
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  int *unaff_x19;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 in_stack_00000018;
  
  FUN_04947ee4(PTR_DAT_0ac6daf0);
  FUN_04947ee4(PTR_DAT_0ac6daf8);
  FUN_04947ee4(PTR_DAT_0ac6c8d8);
  FUN_04947ee4(PTR_DAT_0ac0f9e0);
  FUN_04947ee4(PTR_DAT_0ac10e30);
  FUN_04947ee4(PTR_DAT_0ac0a400);
  FUN_04947ee4(PTR_DAT_0ac0a3f8);
  FUN_04947ee4(PTR_DAT_0ac6ca28);
  FUN_04947ee4(PTR_DAT_0ac6db00);
  FUN_04947ee4(PTR_DAT_0ac0e258);
  FUN_04947ee4(PTR_DAT_0ac0e260);
  FUN_04947ee4(PTR_DAT_0ac0e268);
  FUN_04947ee4(PTR_DAT_0ac12198);
  FUN_04947ee4(PTR_DAT_0ac09aa0);
  FUN_04947ee4(PTR_DAT_0ac6db08);
  FUN_04947ee4(PTR_DAT_0ac6db10);
  FUN_04947ee4(PTR_DAT_0ac10e80);
  FUN_04947ee4(PTR_DAT_0ac6db18);
  FUN_04947ee4(PTR_DAT_0ac09b18);
  FUN_04947ee4(PTR_DAT_0ac10648);
  FUN_04947ee4(PTR_DAT_0ac121f0);
  FUN_04947ee4(PTR_DAT_0ac1ee40);
  FUN_04947ee4(PTR_DAT_0ac6db20);
  FUN_04947ee4(PTR_DAT_0ac16e20);
  FUN_04947ee4(PTR_DAT_0ac09810);
  *(undefined1 *)(unaff_x20 + 0xf33) = 1;
  puVar5 = PTR_DAT_0ac6c8d8;
  puVar4 = PTR_DAT_0ac09aa0;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x1a);
    unaff_x19[0x1a] = 0;
    unaff_x19[0x1b] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar14 = *(long *)(unaff_x19 + 8);
    if (lVar14 == 0) {
      thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
      uVar6 = thunk_FUN_04983f60();
      uVar13 = thunk_FUN_049ae08c(PTR_DAT_0ac6db28);
      FUN_08cc420c(uVar6,uVar13,0);
      uVar13 = thunk_FUN_049ae08c(PTR_DAT_0ac6db30);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar6,uVar13);
    }
    lVar15 = *(long *)(unaff_x19 + 0xe);
    lVar12 = *(long *)PTR_DAT_0ac6db08;
    if (*(int *)(*(long *)PTR_DAT_0ac09aa0 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar6 = FUN_09a767c4(lVar14,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar6 = FUN_08bdbd24(lVar12,*(undefined8 *)PTR_DAT_0ac6db20,uVar6,0);
    lVar14 = *(long *)(unaff_x19 + 10);
    uVar13 = *(undefined8 *)PTR_DAT_0ac09810;
    if (lVar14 != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar7 = FUN_09a767c4(lVar14,0);
      uVar13 = FUN_08bda228(uVar13,*(undefined8 *)PTR_DAT_0ac6db18,uVar7,
                            *(undefined8 *)PTR_DAT_0ac10648,0);
    }
    lVar14 = *(long *)(unaff_x19 + 0xc);
    if (lVar14 != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar7 = FUN_09a767c4(lVar14,0);
      uVar13 = FUN_08bda228(uVar13,*(undefined8 *)PTR_DAT_0ac6db10,uVar7,
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
    lVar14 = FUN_09a6c868(*(long *)(lVar15 + 0x20),0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar7 = FUN_08bde56c(lVar14,0x2f,0);
    uVar6 = FUN_08bcc3c0(uVar7,uVar6,0);
    uVar7 = *(undefined8 *)(lVar15 + 0x20);
    lVar14 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac12198);
    FUN_09abd444(lVar14,uVar7,0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_09abdc2c(lVar14,uVar6,0);
    FUN_09abdcec(lVar14,uVar13,0);
    uVar6 = FUN_09abdda4(lVar14,0);
    uVar13 = *(undefined8 *)PTR_DAT_0ac10e80;
    lVar14 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0a3f8);
    FUN_0870ca1c(lVar14,*(undefined8 *)PTR_DAT_0ac0a400);
    uVar8 = FUN_08bd8f18(*(undefined8 *)(unaff_x19 + 0x10),0);
    if ((uVar8 & 1) == 0) {
      uVar7 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac16e20,*(undefined8 *)(unaff_x19 + 0x10),0);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
                (lVar14,*(undefined8 *)PTR_DAT_0ac121f0,uVar7,*(undefined8 *)PTR_DAT_0ac10e30);
    }
    uVar8 = FUN_08bd8f18(*(undefined8 *)(unaff_x19 + 0x12),0);
    if ((uVar8 & 1) == 0) {
      plVar9 = (long *)FUN_08bf7044(0);
      uVar7 = FUN_08bd9aa0(*(undefined8 *)(unaff_x19 + 0x12),*(undefined8 *)PTR_DAT_0ac09b18,
                           *(undefined8 *)(unaff_x19 + 0x14),0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c(uVar7,uVar7);
      }
      uVar7 = (**(code **)(*plVar9 + 0x268))(plVar9,uVar7,*(undefined8 *)(*plVar9 + 0x270));
      if (*(int *)(*(long *)PTR_DAT_0ac0f9e0 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar7 = FUN_08cd2148(uVar7,0);
      uVar7 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac1ee40,uVar7,0);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
                (lVar14,*(undefined8 *)PTR_DAT_0ac121f0,uVar7,*(undefined8 *)PTR_DAT_0ac10e30);
    }
    plVar9 = *(long **)(lVar15 + 0x10);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar12 = *plVar9;
    uVar7 = *(undefined8 *)(unaff_x19 + 0x16);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar2 = *(undefined4 *)(lVar15 + 0x18);
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac6ca28) {
          puVar10 = (undefined8 *)(lVar12 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_08e78a64;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac6ca28,3);
LAB_08e78a64:
    lVar14 = (*(code *)*puVar10)(plVar9,uVar13,uVar6,lVar14,0,uVar2,uVar7,uVar1);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000018 = FUN_07764808(lVar14,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar8 = FUN_076844c8(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x1a) = in_stack_00000018;
      thunk_FUN_049ee3d8(unaff_x19 + 0x1a,0);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0548ed10(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar6 = FUN_07684508(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac0e258);
  uVar6 = FUN_05c7e4a8(uVar6,*(undefined8 *)PTR_DAT_0ac6db00);
  puVar4 = PTR_DAT_0ac6daf8;
  iVar3 = *(int *)(*(long *)puVar5 + 0xe4);
  *unaff_x19 = -2;
  if (iVar3 == 0) {
    thunk_FUN_049a583c();
  }
  FUN_07b6c5d8(unaff_x19 + 2,uVar6,*(undefined8 *)puVar4);
  return;
}


