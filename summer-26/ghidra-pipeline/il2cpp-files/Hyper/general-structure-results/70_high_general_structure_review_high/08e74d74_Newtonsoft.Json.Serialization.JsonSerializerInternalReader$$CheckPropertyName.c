/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CheckPropertyName
ENTRY_POINT: 08e74d74
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CheckPropertyName(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 *unaff_x19;
  undefined8 uVar12;
  long *plVar13;
  long unaff_x24;
  long *unaff_x27;
  undefined8 in_stack_00000028;
  
  uVar5 = FUN_09abdda4();
  uVar12 = *(undefined8 *)PTR_DAT_0ac10e80;
  lVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0a3f8);
  FUN_0870ca1c(lVar6,*(undefined8 *)PTR_DAT_0ac0a400);
  uVar7 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac16e20,*(undefined8 *)(unaff_x19 + 0x14),0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
            (lVar6,*(undefined8 *)PTR_DAT_0ac121f0,uVar7,*(undefined8 *)PTR_DAT_0ac10e30);
  plVar13 = *(long **)(unaff_x24 + 0x10);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar9 = *plVar13;
  uVar7 = *(undefined8 *)(unaff_x19 + 0x16);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar2 = *(undefined4 *)(unaff_x24 + 0x18);
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac6ca28) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
        goto LAB_08e74e74;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_04980e68(plVar13,*(long *)PTR_DAT_0ac6ca28,3);
LAB_08e74e74:
  lVar6 = (*(code *)*puVar8)(plVar13,uVar12,uVar5,lVar6,0,uVar2,uVar7,uVar1);
  if (lVar6 != 0) {
    in_stack_00000028 = FUN_07764808(lVar6,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar10 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar10 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x1a) = in_stack_00000028;
      thunk_FUN_049ee3d8(unaff_x19 + 0x1a,0);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0548e1a8(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      uVar5 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e258);
      uVar5 = FUN_05c7e4a8(uVar5,*(undefined8 *)PTR_DAT_0ac6d9e0);
      puVar4 = PTR_DAT_0ac6d9d8;
      iVar3 = *(int *)(*unaff_x27 + 0xe4);
      *unaff_x19 = 0xfffffffe;
      if (iVar3 == 0) {
        thunk_FUN_049a583c();
      }
      FUN_07b6c5d8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


