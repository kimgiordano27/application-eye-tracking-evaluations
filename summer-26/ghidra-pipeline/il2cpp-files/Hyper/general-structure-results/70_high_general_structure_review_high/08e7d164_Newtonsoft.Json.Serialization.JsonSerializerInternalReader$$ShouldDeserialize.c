/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldDeserialize
ENTRY_POINT: 08e7d164
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldDeserialize(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *unaff_x28;
  undefined8 in_stack_00000028;
  
  if (*(long *)(unaff_x19 + 8) == 0) {
    thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
    uVar11 = thunk_FUN_04983f60();
    uVar12 = thunk_FUN_049ae08c(PTR_DAT_0ac6d370);
    FUN_08cc420c(uVar11,uVar12,0);
    uVar12 = thunk_FUN_049ae08c(PTR_DAT_0ac6dc60);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar11,uVar12);
  }
  lVar13 = *(long *)(unaff_x19 + 10);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (*(long *)(lVar13 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar12 = *(undefined8 *)PTR_DAT_0ac6dc58;
  uVar11 = *(undefined8 *)PTR_DAT_0ac09810;
  lVar4 = FUN_09a6c868(*(long *)(lVar13 + 0x20),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar5 = FUN_08bde56c(lVar4,0x2f,0);
  uVar12 = FUN_08bcc3c0(uVar5,uVar12,0);
  uVar5 = *(undefined8 *)(lVar13 + 0x20);
  lVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac12198);
  FUN_09abd444(lVar4,uVar5,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_09abdc2c(lVar4,uVar12,0);
  FUN_09abdcec(lVar4,uVar11,0);
  uVar11 = FUN_09abdda4(lVar4,0);
  uVar5 = *(undefined8 *)PTR_DAT_0ac147d8;
  lVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0a3f8);
  FUN_0870ca1c(lVar4,*(undefined8 *)PTR_DAT_0ac0a400);
  uVar12 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac16e20,*(undefined8 *)(unaff_x19 + 0xc),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
            (lVar4,*(undefined8 *)PTR_DAT_0ac121f0,uVar12,*(undefined8 *)PTR_DAT_0ac10e30);
  uVar12 = FUN_08ecfb28(*(undefined8 *)(unaff_x19 + 8),0);
  plVar6 = (long *)FUN_08bf7044(0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar12 = (**(code **)(*plVar6 + 0x268))(plVar6,uVar12,*(undefined8 *)(*plVar6 + 0x270));
  plVar6 = *(long **)(lVar13 + 0x10);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar8 = *plVar6;
  uVar1 = *(undefined8 *)(unaff_x19 + 0xe);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar3 = *(undefined4 *)(lVar13 + 0x18);
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac6ca28) {
        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
        goto LAB_08e7d338;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac6ca28,3);
LAB_08e7d338:
  lVar13 = (*(code *)*puVar7)(plVar6,uVar5,uVar11,lVar4,uVar12,uVar3,uVar1,uVar2);
  if (lVar13 != 0) {
    in_stack_00000028 = FUN_07764808(lVar13,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar9 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar9 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
      thunk_FUN_049ee3d8(unaff_x19 + 0x12,0);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05a23200(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e258);
      lVar13 = *unaff_x28;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_08c7f478(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


