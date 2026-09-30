/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$Serialize
ENTRY_POINT: 08e7d650
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__Serialize(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int *unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 in_stack_00000028;
  
  FUN_04947ee4();
  FUN_04947ee4(PTR_DAT_0ac111a0);
  FUN_04947ee4(PTR_DAT_0ac10e30);
  FUN_04947ee4(PTR_DAT_0ac0a400);
  FUN_04947ee4(PTR_DAT_0ac0a3f8);
  FUN_04947ee4(PTR_DAT_0ac6ca28);
  FUN_04947ee4(PTR_DAT_0ac0e258);
  FUN_04947ee4(PTR_DAT_0ac0e260);
  FUN_04947ee4(PTR_DAT_0ac0e268);
  FUN_04947ee4(PTR_DAT_0ac12198);
  FUN_04947ee4(PTR_DAT_0ac10e38);
  FUN_04947ee4(PTR_DAT_0ac121f0);
  FUN_04947ee4(PTR_DAT_0ac16e20);
  FUN_04947ee4(PTR_DAT_0ac6d398);
  FUN_04947ee4(PTR_DAT_0ac09810);
  *(undefined1 *)(unaff_x20 + 0xf4d) = 1;
  puVar4 = PTR_DAT_0ac111a0;
  in_stack_00000028 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x12);
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*(long *)(unaff_x19 + 8) == 0) {
      thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
      uVar12 = thunk_FUN_04983f60();
      uVar13 = thunk_FUN_049ae08c(PTR_DAT_0ac6d370);
      FUN_08cc420c(uVar12,uVar13,0);
      uVar13 = thunk_FUN_049ae08c(PTR_DAT_0ac6dc70);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar12,uVar13);
    }
    lVar14 = *(long *)(unaff_x19 + 10);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(long *)(lVar14 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar13 = *(undefined8 *)PTR_DAT_0ac6d398;
    uVar12 = *(undefined8 *)PTR_DAT_0ac09810;
    lVar5 = FUN_09a6c868(*(long *)(lVar14 + 0x20),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar6 = FUN_08bde56c(lVar5,0x2f,0);
    uVar13 = FUN_08bcc3c0(uVar6,uVar13,0);
    uVar6 = *(undefined8 *)(lVar14 + 0x20);
    lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac12198);
    FUN_09abd444(lVar5,uVar6,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_09abdc2c(lVar5,uVar13,0);
    FUN_09abdcec(lVar5,uVar12,0);
    uVar12 = FUN_09abdda4(lVar5,0);
    uVar6 = *(undefined8 *)PTR_DAT_0ac10e38;
    lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0a3f8);
    FUN_0870ca1c(lVar5,*(undefined8 *)PTR_DAT_0ac0a400);
    uVar13 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac16e20,*(undefined8 *)(unaff_x19 + 0xc),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
              (lVar5,*(undefined8 *)PTR_DAT_0ac121f0,uVar13,*(undefined8 *)PTR_DAT_0ac10e30);
    uVar13 = FUN_08ecfb28(*(undefined8 *)(unaff_x19 + 8),0);
    plVar7 = (long *)FUN_08bf7044(0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar13 = (**(code **)(*plVar7 + 0x268))(plVar7,uVar13,*(undefined8 *)(*plVar7 + 0x270));
    plVar7 = *(long **)(lVar14 + 0x10);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar9 = *plVar7;
    uVar1 = *(undefined8 *)(unaff_x19 + 0xe);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x10);
    uVar3 = *(undefined4 *)(lVar14 + 0x18);
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac6ca28) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_08e7d8f0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac6ca28,3);
LAB_08e7d8f0:
    lVar14 = (*(code *)*puVar8)(plVar7,uVar6,uVar12,lVar5,uVar13,uVar3,uVar1,uVar2);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000028 = FUN_07764808(lVar14,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar10 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar10 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
      thunk_FUN_049ee3d8(unaff_x19 + 0x12,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05a2327c(unaff_x19 + 2,&stack0x00000028);
      return;
    }
  }
  FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e258);
  lVar14 = *(long *)puVar4;
  *unaff_x19 = -2;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08c7f478(unaff_x19 + 2,0);
  return;
}


