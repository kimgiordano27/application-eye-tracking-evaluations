/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetExpectedDescription
ENTRY_POINT: 08e765a0
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetExpectedDescription(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  bool in_ZR;
  bool in_CY;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar11;
  long *plVar12;
  long unaff_x24;
  long *unaff_x27;
  undefined8 in_stack_00000028;
  
  if (!in_CY || in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
  unaff_x22[6] = unaff_x21;
  thunk_FUN_049ee3d8();
  puVar3 = PTR_DAT_0ac10648;
  if ((*(long *)PTR_DAT_0ac10648 != 0) &&
     (lVar4 = thunk_FUN_04983e64(*(long *)PTR_DAT_0ac10648,*(undefined8 *)(*unaff_x22 + 0x40)),
     lVar4 == 0)) {
    uVar5 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar5,0);
  }
  if ((*(uint *)(unaff_x22 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
  unaff_x22[7] = *(long *)puVar3;
  thunk_FUN_049ee3d8();
  uVar5 = FUN_08bd9b60();
  lVar4 = *(long *)(unaff_x19 + 0x12);
  if (lVar4 != 0) {
    if (*(int *)(*(long *)PTR_DAT_0ac09aa0 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar6 = FUN_09a767c4(lVar4,0);
    uVar5 = FUN_08bda228(uVar5,*(undefined8 *)PTR_DAT_0ac6d6f8,uVar6,*(undefined8 *)PTR_DAT_0ac10648
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
  lVar4 = FUN_09a6c868(*(long *)(unaff_x24 + 0x20),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_08bde56c(lVar4,0x2f,0);
  uVar6 = FUN_08bcc3c0();
  uVar11 = *(undefined8 *)(unaff_x24 + 0x20);
  lVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac12198);
  FUN_09abd444(lVar4,uVar11,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_09abdc2c(lVar4,uVar6,0);
  FUN_09abdcec(lVar4,uVar5,0);
  uVar5 = FUN_09abdda4(lVar4,0);
  uVar11 = *(undefined8 *)PTR_DAT_0ac10e80;
  lVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0a3f8);
  FUN_0870ca1c(lVar4,*(undefined8 *)PTR_DAT_0ac0a400);
  uVar6 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac16e20,*(undefined8 *)(unaff_x19 + 0x16),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
            (lVar4,*(undefined8 *)PTR_DAT_0ac121f0,uVar6,*(undefined8 *)PTR_DAT_0ac10e30);
  plVar12 = *(long **)(unaff_x24 + 0x10);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar8 = *plVar12;
  uVar6 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x1a);
  uVar2 = *(undefined4 *)(unaff_x24 + 0x18);
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac6ca28) {
        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
        goto LAB_08e767d4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac6ca28,3);
LAB_08e767d4:
  lVar4 = (*(code *)*puVar7)(plVar12,uVar11,uVar5,lVar4,0,uVar2,uVar6,uVar1);
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
      FUN_0548e638(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      uVar5 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e258);
      uVar5 = FUN_05c7e4a8(uVar5,*(undefined8 *)PTR_DAT_0ac6da28);
      *unaff_x19 = 0xfffffffe;
      puVar3 = PTR_DAT_0ac6da20;
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_07b6c5d8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


