/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateList
ENTRY_POINT: 08e758a0
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateList(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int in_w8;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  undefined8 uVar11;
  long *plVar12;
  long unaff_x24;
  long *unaff_x27;
  undefined8 in_stack_00000038;
  undefined4 uStack000000000000004c;
  
  if (in_w8 == 0) {
    thunk_FUN_049a583c();
  }
  FUN_09a767c4();
  uVar4 = FUN_08bda228();
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
  uVar6 = FUN_08bcc3c0();
  uVar11 = *(undefined8 *)(unaff_x24 + 0x20);
  lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac12198);
  FUN_09abd444(lVar5,uVar11,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_09abdc2c(lVar5,uVar6,0);
  FUN_09abdcec(lVar5,uVar4,0);
  uVar4 = FUN_09abdda4(lVar5,0);
  uVar11 = *(undefined8 *)PTR_DAT_0ac10e80;
  lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0a3f8);
  FUN_0870ca1c(lVar5,*(undefined8 *)PTR_DAT_0ac0a400);
  uVar6 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac16e20,*(undefined8 *)(unaff_x19 + 0x14),0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
            (lVar5,*(undefined8 *)PTR_DAT_0ac121f0,uVar6,*(undefined8 *)PTR_DAT_0ac10e30);
  plVar12 = *(long **)(unaff_x24 + 0x10);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar8 = *plVar12;
  uVar6 = *(undefined8 *)(unaff_x19 + 0x16);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar2 = *(undefined4 *)(unaff_x24 + 0x18);
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac6ca28) {
        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
        goto LAB_08e75a3c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac6ca28,3);
LAB_08e75a3c:
  lVar5 = (*(code *)*puVar7)(plVar12,uVar11,uVar4,lVar5,0,uVar2,uVar6,uVar1);
  if (lVar5 != 0) {
    in_stack_00000038 = FUN_07764808(lVar5,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar9 = FUN_076844c8(&stack0x00000038,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar9 & 1) == 0) {
      uStack000000000000004c = 0;
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x1a) = in_stack_00000038;
      thunk_FUN_049ee3d8(unaff_x19 + 0x1a,0);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0548e3f0(unaff_x19 + 2,&stack0x00000038);
    }
    else {
      uVar4 = FUN_07684508(&stack0x00000038,*(undefined8 *)PTR_DAT_0ac0e258);
      uVar4 = FUN_05c7e4a8(uVar4,*(undefined8 *)PTR_DAT_0ac6d9e0);
      *unaff_x19 = 0xfffffffe;
      puVar3 = PTR_DAT_0ac6d9d8;
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_07b6c5d8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


