/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeValue
ENTRY_POINT: 08e7dd4c
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 *unaff_x19;
  undefined8 uVar12;
  long unaff_x25;
  long *unaff_x28;
  undefined8 in_stack_00000028;
  
  uVar4 = FUN_08bdbd24();
  if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (*(long *)(unaff_x25 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar12 = *(undefined8 *)PTR_DAT_0ac09810;
  lVar5 = FUN_09a6c868(*(long *)(unaff_x25 + 0x20),0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar6 = FUN_08bde56c(lVar5,0x2f,0);
  uVar4 = FUN_08bcc3c0(uVar6,uVar4,0);
  uVar6 = *(undefined8 *)(unaff_x25 + 0x20);
  lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac12198);
  FUN_09abd444(lVar5,uVar6,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_09abdc2c(lVar5,uVar4,0);
  FUN_09abdcec(lVar5,uVar12,0);
  uVar4 = FUN_09abdda4(lVar5,0);
  uVar6 = *(undefined8 *)PTR_DAT_0ac10e38;
  lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0a3f8);
  FUN_0870ca1c(lVar5,*(undefined8 *)PTR_DAT_0ac0a400);
  uVar12 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac16e20,*(undefined8 *)(unaff_x19 + 0xe),0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
            (lVar5,*(undefined8 *)PTR_DAT_0ac121f0,uVar12,*(undefined8 *)PTR_DAT_0ac10e30);
  uVar12 = FUN_08ecfb28(*(undefined8 *)(unaff_x19 + 10),0);
  plVar7 = (long *)FUN_08bf7044(0);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar12 = (**(code **)(*plVar7 + 0x268))(plVar7,uVar12,*(undefined8 *)(*plVar7 + 0x270));
  plVar7 = *(long **)(unaff_x25 + 0x10);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar9 = *plVar7;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x12);
  uVar3 = *(undefined4 *)(unaff_x25 + 0x18);
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac6ca28) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
        goto LAB_08e7df10;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac6ca28,3);
LAB_08e7df10:
  lVar5 = (*(code *)*puVar8)(plVar7,uVar6,uVar4,lVar5,uVar12,uVar3,uVar1,uVar2);
  if (lVar5 != 0) {
    in_stack_00000028 = FUN_07764808(lVar5,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar10 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar10 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000028;
      thunk_FUN_049ee3d8(unaff_x19 + 0x14,0);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05a232f8(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e258);
      lVar5 = *unaff_x28;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_08c7f478(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


