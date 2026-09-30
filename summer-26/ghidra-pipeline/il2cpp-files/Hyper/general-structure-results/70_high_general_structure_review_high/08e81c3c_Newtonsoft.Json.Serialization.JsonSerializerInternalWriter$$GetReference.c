/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetReference
ENTRY_POINT: 08e81c3c
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetReference(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 *unaff_x19;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x25;
  long *unaff_x28;
  undefined8 in_stack_00000028;
  
  uVar13 = *param_1;
  lVar6 = FUN_09a6c868();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_08bde56c(lVar6,0x2f,0);
  uVar7 = FUN_08bcc3c0();
  uVar14 = *(undefined8 *)(unaff_x25 + 0x20);
  lVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac12198);
  FUN_09abd444(lVar6,uVar14,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_09abdc2c(lVar6,uVar7,0);
  FUN_09abdcec(lVar6,uVar13,0);
  uVar13 = FUN_09abdda4(lVar6,0);
  uVar14 = *(undefined8 *)PTR_DAT_0ac10e38;
  lVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0a3f8);
  FUN_0870ca1c(lVar6,*(undefined8 *)PTR_DAT_0ac0a400);
  uVar7 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac16e20,*(undefined8 *)(unaff_x19 + 0xe),0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
            (lVar6,*(undefined8 *)PTR_DAT_0ac121f0,uVar7,*(undefined8 *)PTR_DAT_0ac10e30);
  uVar7 = FUN_08ecfb28(*(undefined8 *)(unaff_x19 + 10),0);
  plVar8 = (long *)FUN_08bf7044(0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar7 = (**(code **)(*plVar8 + 0x268))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x270));
  plVar8 = *(long **)(unaff_x25 + 0x10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar10 = *plVar8;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x12);
  uVar3 = *(undefined4 *)(unaff_x25 + 0x18);
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac6ca28) {
        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
        goto LAB_08e81de0;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac6ca28,3);
LAB_08e81de0:
  lVar6 = (*(code *)*puVar9)(plVar8,uVar14,uVar13,lVar6,uVar7,uVar3,uVar1,uVar2);
  if (lVar6 != 0) {
    in_stack_00000028 = FUN_07764808(lVar6,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar11 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar11 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000028;
      thunk_FUN_049ee3d8(unaff_x19 + 0x14,0);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05490870(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      uVar13 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e258);
      uVar13 = FUN_05c7e4a8(uVar13,*(undefined8 *)PTR_DAT_0ac6dd68);
      puVar5 = PTR_DAT_0ac6dd60;
      iVar4 = *(int *)(*unaff_x28 + 0xe4);
      *unaff_x19 = 0xfffffffe;
      if (iVar4 == 0) {
        thunk_FUN_049a583c();
      }
      FUN_07b6c5d8(unaff_x19 + 2,uVar13,*(undefined8 *)puVar5);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


