/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonProperty$$set_ShouldDeserialize
ENTRY_POINT: 08e70f5c
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


void Newtonsoft_Json_Serialization_JsonProperty__set_ShouldDeserialize(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long unaff_x24;
  long *unaff_x27;
  undefined8 in_stack_00000038;
  undefined4 uStack000000000000004c;
  
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
  uVar5 = FUN_08bcc3c0();
  uVar11 = *(undefined8 *)(unaff_x24 + 0x20);
  lVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac12198);
  FUN_09abd444(lVar4,uVar11,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_09abdc2c(lVar4,uVar5,0);
  FUN_09abdcec(lVar4);
  uVar5 = FUN_09abdda4(lVar4,0);
  uVar10 = *(undefined8 *)PTR_DAT_0ac10e80;
  lVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0a3f8);
  FUN_0870ca1c(lVar4,*(undefined8 *)PTR_DAT_0ac0a400);
  uVar11 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac16e20,*(undefined8 *)(unaff_x19 + 0x14),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
            (lVar4,*(undefined8 *)PTR_DAT_0ac121f0,uVar11,*(undefined8 *)PTR_DAT_0ac10e30);
  plVar12 = *(long **)(unaff_x24 + 0x10);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar7 = *plVar12;
  uVar11 = *(undefined8 *)(unaff_x19 + 0x16);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar2 = *(undefined4 *)(unaff_x24 + 0x18);
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac6ca28) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
        goto LAB_08e710bc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac6ca28,3);
LAB_08e710bc:
  lVar4 = (*(code *)*puVar6)(plVar12,uVar10,uVar5,lVar4,0,uVar2,uVar11,uVar1);
  if (lVar4 != 0) {
    in_stack_00000038 = FUN_07764808(lVar4,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar8 = FUN_076844c8(&stack0x00000038,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar8 & 1) == 0) {
      uStack000000000000004c = 0;
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x1a) = in_stack_00000038;
      thunk_FUN_049ee3d8(unaff_x19 + 0x1a,0);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0548d1b0(unaff_x19 + 2,&stack0x00000038);
    }
    else {
      uVar5 = FUN_07684508(&stack0x00000038,*(undefined8 *)PTR_DAT_0ac0e258);
      uVar5 = FUN_05c7e4a8(uVar5,*(undefined8 *)PTR_DAT_0ac6d810);
      *unaff_x19 = 0xfffffffe;
      puVar3 = PTR_DAT_0ac6d808;
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


