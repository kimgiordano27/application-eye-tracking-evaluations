/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDynamic
ENTRY_POINT: 08e80a1c
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDynamic
               (undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *unaff_x19;
  long *unaff_x28;
  undefined8 uStack0000000000000000;
  undefined8 in_stack_00000028;
  
  uStack0000000000000000 = param_1[1];
  lVar3 = (*(code *)*param_1)();
  if (lVar3 != 0) {
    in_stack_00000028 = FUN_07764808(lVar3,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar4 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000028;
      thunk_FUN_049ee3d8(unaff_x19 + 0x14,0);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05490198(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      uVar5 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e258);
      uVar5 = FUN_05c7e4a8(uVar5,*(undefined8 *)PTR_DAT_0ac6dd68);
      puVar2 = PTR_DAT_0ac6dd60;
      iVar1 = *(int *)(*unaff_x28 + 0xe4);
      *unaff_x19 = 0xfffffffe;
      if (iVar1 == 0) {
        thunk_FUN_049a583c();
      }
      FUN_07b6c5d8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


