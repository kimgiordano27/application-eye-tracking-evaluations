/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$DeserializeConvertable
ENTRY_POINT: 08e73ca0
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__DeserializeConvertable(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 *unaff_x19;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar12;
  long *plVar13;
  long unaff_x24;
  long *unaff_x27;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000028;
  
  thunk_FUN_049ee3d8();
  puVar4 = PTR_DAT_0ac6d6f0;
  if ((*(long *)PTR_DAT_0ac6d6f0 != 0) &&
     (lVar5 = thunk_FUN_04983e64(*(long *)PTR_DAT_0ac6d6f0,*(undefined8 *)(*unaff_x22 + 0x40)),
     lVar5 == 0)) {
    uVar7 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar7,0);
  }
  if ((*(uint *)(unaff_x22 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
  unaff_x22[5] = *(long *)puVar4;
  thunk_FUN_049ee3d8();
  in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0xc);
  lVar5 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac14a68,&stack0x00000010);
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_04983e64(lVar5,*(undefined8 *)(*unaff_x22 + 0x40)), lVar6 == 0)) {
    uVar7 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar7,0);
  }
  if (*(uint *)(unaff_x22 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
  unaff_x22[6] = lVar5;
  thunk_FUN_049ee3d8(unaff_x22 + 6,lVar5);
  puVar4 = PTR_DAT_0ac10648;
  if ((*(long *)PTR_DAT_0ac10648 != 0) &&
     (lVar5 = thunk_FUN_04983e64(*(long *)PTR_DAT_0ac10648,*(undefined8 *)(*unaff_x22 + 0x40)),
     lVar5 == 0)) {
    uVar7 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar7,0);
  }
  if ((*(uint *)(unaff_x22 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
  unaff_x22[7] = *(long *)puVar4;
  thunk_FUN_049ee3d8();
  uVar7 = FUN_08bd9b60();
  lVar5 = *(long *)(unaff_x19 + 0xe);
  if (lVar5 != 0) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar8 = FUN_09a767c4(lVar5,0);
    uVar7 = FUN_08bda228(uVar7,*(undefined8 *)PTR_DAT_0ac6d6f8,uVar8,*(undefined8 *)PTR_DAT_0ac10648
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
  lVar5 = FUN_09a6c868(*(long *)(unaff_x24 + 0x20),0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_08bde56c(lVar5,0x2f,0);
  uVar8 = FUN_08bcc3c0();
  uVar12 = *(undefined8 *)(unaff_x24 + 0x20);
  lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac12198);
  FUN_09abd444(lVar5,uVar12,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_09abdc2c(lVar5,uVar8,0);
  FUN_09abdcec(lVar5,uVar7,0);
  uVar7 = FUN_09abdda4(lVar5,0);
  uVar12 = *(undefined8 *)PTR_DAT_0ac10e80;
  lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0a3f8);
  FUN_0870ca1c(lVar5,*(undefined8 *)PTR_DAT_0ac0a400);
  uVar8 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac16e20,*(undefined8 *)(unaff_x19 + 0x12),0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
            (lVar5,*(undefined8 *)PTR_DAT_0ac121f0,uVar8,*(undefined8 *)PTR_DAT_0ac10e30);
  plVar13 = *(long **)(unaff_x24 + 0x10);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar6 = *plVar13;
  uVar8 = *(undefined8 *)(unaff_x19 + 0x14);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x16);
  uVar2 = *(undefined4 *)(unaff_x24 + 0x18);
  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac6ca28) {
        puVar9 = (undefined8 *)(lVar6 + (long)(*piVar11 + 3) * 0x10 + 0x138);
        goto LAB_08e73f50;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar9 = (undefined8 *)FUN_04980e68(plVar13,*(long *)PTR_DAT_0ac6ca28,3);
LAB_08e73f50:
  lVar5 = (*(code *)*puVar9)(plVar13,uVar12,uVar7,lVar5,0,uVar2,uVar8,uVar1);
  if (lVar5 != 0) {
    in_stack_00000028 = FUN_07764808(lVar5,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar10 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar10 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000028;
      thunk_FUN_049ee3d8(unaff_x19 + 0x18,0);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0548dd18(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      uVar7 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e258);
      uVar7 = FUN_05c7e4a8(uVar7,*(undefined8 *)PTR_DAT_0ac6d930);
      puVar4 = PTR_DAT_0ac6d928;
      iVar3 = *(int *)(*unaff_x27 + 0xe4);
      *unaff_x19 = 0xfffffffe;
      if (iVar3 == 0) {
        thunk_FUN_049a583c();
      }
      FUN_07b6c5d8(unaff_x19 + 2,uVar7,*(undefined8 *)puVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


