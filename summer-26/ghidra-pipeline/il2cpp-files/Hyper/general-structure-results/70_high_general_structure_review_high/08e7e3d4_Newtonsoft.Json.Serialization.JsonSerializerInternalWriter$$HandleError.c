/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HandleError
ENTRY_POINT: 08e7e3d4
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HandleError(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined4 *unaff_x19;
  undefined8 uVar14;
  long unaff_x25;
  long *unaff_x28;
  undefined8 in_stack_00000028;
  
  FUN_09abd444();
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_09abdc2c(param_1);
  FUN_09abdcec(param_1);
  uVar6 = FUN_09abdda4(param_1,0);
  uVar14 = *(undefined8 *)PTR_DAT_0ac147d8;
  lVar7 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0a3f8);
  FUN_0870ca1c(lVar7,*(undefined8 *)PTR_DAT_0ac0a400);
  uVar8 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac16e20,*(undefined8 *)(unaff_x19 + 0xc),0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
            (lVar7,*(undefined8 *)PTR_DAT_0ac121f0,uVar8,*(undefined8 *)PTR_DAT_0ac10e30);
  uVar8 = FUN_08ecfb28(*(undefined8 *)(unaff_x19 + 8),0);
  plVar9 = (long *)FUN_08bf7044(0);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar8 = (**(code **)(*plVar9 + 0x268))(plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x270));
  plVar9 = *(long **)(unaff_x25 + 0x10);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar11 = *plVar9;
  uVar1 = *(undefined8 *)(unaff_x19 + 0xe);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar3 = *(undefined4 *)(unaff_x25 + 0x18);
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0ac6ca28) {
        puVar10 = (undefined8 *)(lVar11 + (long)(*piVar13 + 3) * 0x10 + 0x138);
        goto LAB_08e7e53c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar10 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac6ca28,3);
LAB_08e7e53c:
  lVar7 = (*(code *)*puVar10)(plVar9,uVar14,uVar6,lVar7,uVar8,uVar3,uVar1,uVar2);
  if (lVar7 != 0) {
    in_stack_00000028 = FUN_07764808(lVar7,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar12 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar12 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
      thunk_FUN_049ee3d8(unaff_x19 + 0x12,0);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0548f3e8(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      uVar6 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e258);
      uVar6 = FUN_05c7e4a8(uVar6,*(undefined8 *)PTR_DAT_0ac6dc98);
      puVar5 = PTR_DAT_0ac6dc90;
      iVar4 = *(int *)(*unaff_x28 + 0xe4);
      *unaff_x19 = 0xfffffffe;
      if (iVar4 == 0) {
        thunk_FUN_049a583c();
      }
      FUN_07b6c5d8(unaff_x19 + 2,uVar6,*(undefined8 *)puVar5);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


