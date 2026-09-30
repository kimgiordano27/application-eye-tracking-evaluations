/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonTypeReflector$$get_FullyTrusted
ENTRY_POINT: 05aca990
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_Serialization_JsonTypeReflector__get_FullyTrusted(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_w8;
  long unaff_x19;
  long lVar5;
  long unaff_x21;
  long unaff_x22;
  long in_stack_00000018;
  undefined *puVar4;
  
  if (in_w8 != *(uint *)(unaff_x22 + 0x18)) {
    thunk_FUN_03037804(PTR_DAT_06f9aa18);
    uVar2 = thunk_FUN_0301080c();
    puVar4 = PTR_DAT_06facb38;
LAB_05acaa70:
    uVar3 = thunk_FUN_03037804(puVar4);
    FUN_059ed1a0(uVar2,uVar3,0);
    uVar3 = thunk_FUN_03037804(PTR_DAT_06facb30);
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0(uVar2,uVar3);
  }
  if (0 < (int)in_w8) {
    lVar5 = 0;
    do {
      if (in_w8 <= (uint)lVar5) {
LAB_05acaa50:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      if (*(long *)(unaff_x21 + 0x20 + lVar5 * 8) == 0) {
        thunk_FUN_03037804(PTR_DAT_06f9aa18);
        uVar2 = thunk_FUN_0301080c();
        puVar4 = PTR_DAT_06facb28;
        goto LAB_05acaa70;
      }
      if (*(uint *)(unaff_x22 + 0x18) <= (uint)lVar5) goto LAB_05acaa50;
      FUN_05ac8490();
      in_w8 = *(uint *)(unaff_x21 + 0x18);
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < (int)in_w8);
  }
  if (in_stack_00000018 != 0) {
    uVar1 = FUN_059f8624(in_stack_00000018,*(undefined8 *)PTR_DAT_06f9aa08,0);
    thunk_FUN_02fc2c1c();
    *(undefined4 *)(unaff_x19 + 0x28) = uVar1;
    lVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetPropertyName();
    if (lVar5 != 0) {
      FUN_050e29b8();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


