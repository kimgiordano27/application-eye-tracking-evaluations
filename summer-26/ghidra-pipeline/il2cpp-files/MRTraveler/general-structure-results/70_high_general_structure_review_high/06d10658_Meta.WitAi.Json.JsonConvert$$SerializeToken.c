/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$SerializeToken
ENTRY_POINT: 06d10658
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__SerializeToken(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *in_x11;
  undefined8 uVar4;
  long unaff_x26;
  undefined8 uVar5;
  long *in_stack_00000000;
  
  uVar4 = *(undefined8 *)PTR_DAT_08e8ceb8;
  if (unaff_x26 == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_03cd7500(param_1);
      param_1 = *in_x11;
    }
    uVar5 = **(undefined8 **)(param_1 + 0xb8);
    uVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8ce30);
    FUN_04d4fec8(uVar2,uVar5,*(undefined8 *)PTR_DAT_08e8ce88,0);
    puVar3 = (undefined8 *)(*(long *)(*in_x11 + 0xb8) + 8);
    *puVar3 = uVar2;
    thunk_FUN_03d233cc(puVar3,uVar2);
  }
  FUN_04625e00();
  FUN_06f75b8c();
  uVar4 = FUN_06f74e30(uVar4);
  if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
  }
  FUN_085a48e4(uVar4,0);
  if (*in_stack_00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  iVar1 = FUN_05a78888(*in_stack_00000000,*(undefined8 *)PTR_DAT_08e8ce78);
  if (0 < iVar1) {
    uVar4 = FUN_085e29cc();
    uVar2 = FUN_06f75b8c(*(undefined8 *)PTR_DAT_08e6fb20,*in_stack_00000000,0);
    uVar4 = FUN_06f74e30(*(undefined8 *)PTR_DAT_08e8ceb8,uVar4,*(undefined8 *)PTR_DAT_08e8cec0,uVar2
                         ,0);
    if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
    }
    FUN_085a48e4(uVar4,0);
  }
  return;
}


