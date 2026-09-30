/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeString
ENTRY_POINT: 08e80124
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int *unaff_x19;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 in_stack_00000028;
  
  FUN_04947ee4();
  FUN_04947ee4(PTR_DAT_0ac6ca28);
  FUN_04947ee4(PTR_DAT_0ac6dd18);
  FUN_04947ee4(PTR_DAT_0ac0e258);
  FUN_04947ee4(PTR_DAT_0ac0e260);
  FUN_04947ee4(PTR_DAT_0ac0e268);
  FUN_04947ee4(PTR_DAT_0ac12198);
  FUN_04947ee4(PTR_DAT_0ac147d8);
  FUN_04947ee4(PTR_DAT_0ac121f0);
  FUN_04947ee4(PTR_DAT_0ac16e20);
  FUN_04947ee4(PTR_DAT_0ac09810);
  FUN_04947ee4(PTR_DAT_0ac6dd48);
  *(undefined1 *)(unaff_x20 + 0xf5b) = 1;
  puVar5 = PTR_DAT_0ac6c7b8;
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
      uVar14 = thunk_FUN_04983f60();
      uVar15 = thunk_FUN_049ae08c(PTR_DAT_0ac6d370);
      FUN_08cc420c(uVar14,uVar15,0);
      uVar15 = thunk_FUN_049ae08c(PTR_DAT_0ac6dd50);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar14,uVar15);
    }
    lVar16 = *(long *)(unaff_x19 + 10);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(long *)(lVar16 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar15 = *(undefined8 *)PTR_DAT_0ac6dd48;
    uVar14 = *(undefined8 *)PTR_DAT_0ac09810;
    lVar7 = FUN_09a6c868(*(long *)(lVar16 + 0x20),0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar8 = FUN_08bde56c(lVar7,0x2f,0);
    uVar15 = FUN_08bcc3c0(uVar8,uVar15,0);
    uVar8 = *(undefined8 *)(lVar16 + 0x20);
    lVar7 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac12198);
    FUN_09abd444(lVar7,uVar8,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_09abdc2c(lVar7,uVar15,0);
    FUN_09abdcec(lVar7,uVar14,0);
    uVar14 = FUN_09abdda4(lVar7,0);
    uVar8 = *(undefined8 *)PTR_DAT_0ac147d8;
    lVar7 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0a3f8);
    FUN_0870ca1c(lVar7,*(undefined8 *)PTR_DAT_0ac0a400);
    uVar15 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac16e20,*(undefined8 *)(unaff_x19 + 0xc),0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
              (lVar7,*(undefined8 *)PTR_DAT_0ac121f0,uVar15,*(undefined8 *)PTR_DAT_0ac10e30);
    uVar15 = FUN_08ecfb28(*(undefined8 *)(unaff_x19 + 8),0);
    plVar9 = (long *)FUN_08bf7044(0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar15 = (**(code **)(*plVar9 + 0x268))(plVar9,uVar15,*(undefined8 *)(*plVar9 + 0x270));
    plVar9 = *(long **)(lVar16 + 0x10);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar11 = *plVar9;
    uVar1 = *(undefined8 *)(unaff_x19 + 0xe);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x10);
    uVar3 = *(undefined4 *)(lVar16 + 0x18);
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0ac6ca28) {
          puVar10 = (undefined8 *)(lVar11 + (long)(*piVar13 + 3) * 0x10 + 0x138);
          goto LAB_08e803a0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac6ca28,3);
LAB_08e803a0:
    lVar16 = (*(code *)*puVar10)(plVar9,uVar8,uVar14,lVar7,uVar15,uVar3,uVar1,uVar2);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000028 = FUN_07764808(lVar16,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar12 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar12 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
      thunk_FUN_049ee3d8(unaff_x19 + 0x12,0);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0548ff50(unaff_x19 + 2,&stack0x00000028);
      return;
    }
  }
  uVar14 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e258);
  uVar14 = FUN_05c7e4a8(uVar14,*(undefined8 *)PTR_DAT_0ac6dd18);
  puVar6 = PTR_DAT_0ac6dd10;
  iVar4 = *(int *)(*(long *)puVar5 + 0xe4);
  *unaff_x19 = -2;
  if (iVar4 == 0) {
    thunk_FUN_049a583c();
  }
  FUN_07b6c5d8(unaff_x19 + 2,uVar14,*(undefined8 *)puVar6);
  return;
}


