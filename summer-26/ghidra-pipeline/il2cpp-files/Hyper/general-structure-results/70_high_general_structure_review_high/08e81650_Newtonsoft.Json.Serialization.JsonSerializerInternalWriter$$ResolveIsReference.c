/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ResolveIsReference
ENTRY_POINT: 08e81650
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ResolveIsReference(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x25;
  long *unaff_x28;
  undefined8 in_stack_00000028;
  
  System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
            ();
  uVar3 = FUN_08ecfb28(*(undefined8 *)(unaff_x19 + 10),0);
  plVar4 = (long *)FUN_08bf7044(0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  (**(code **)(*plVar4 + 0x268))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x270));
  plVar4 = *(long **)(unaff_x25 + 0x10);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar6 = *plVar4;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac6ca28) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_08e81708;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_04980e68(plVar4,*(long *)PTR_DAT_0ac6ca28,3);
LAB_08e81708:
  lVar6 = (*(code *)*puVar5)(plVar4);
  if (lVar6 != 0) {
    in_stack_00000028 = FUN_07764808(lVar6,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar7 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000028;
      thunk_FUN_049ee3d8(unaff_x19 + 0x14,0);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05490628(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      uVar3 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e258);
      uVar3 = FUN_05c7e4a8(uVar3,*(undefined8 *)PTR_DAT_0ac6dd68);
      puVar2 = PTR_DAT_0ac6dd60;
      iVar1 = *(int *)(*unaff_x28 + 0xe4);
      *unaff_x19 = 0xfffffffe;
      if (iVar1 == 0) {
        thunk_FUN_049a583c();
      }
      FUN_07b6c5d8(unaff_x19 + 2,uVar3,*(undefined8 *)puVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


