/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializable
ENTRY_POINT: 05009730
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06766c20);
    *(undefined1 *)(unaff_x20 + 0x1e4) = 1;
  }
  if (unaff_x19 == (long *)0x0) {
    thunk_FUN_02dc61f4(PTR_DAT_06764070);
    uVar5 = thunk_FUN_02d9d534();
    uVar4 = thunk_FUN_02dc61f4(PTR_DAT_0677a8b0);
    FUN_04f77010(uVar5,uVar4,0);
    uVar4 = thunk_FUN_02dc61f4(PTR_DAT_0677a8b8);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar5,uVar4);
  }
  uVar1 = (**(code **)(*unaff_x19 + 0x3b8))();
  if (((uVar1 & 1) == 0) || (uVar1 = (**(code **)(*unaff_x19 + 0x3c8))(), (uVar1 & 1) != 0)) {
    return 0;
  }
  lVar2 = (**(code **)(*unaff_x19 + 0x448))();
  uVar5 = *(undefined8 *)PTR_DAT_06766c20;
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)(PTR_DAT_0675e258 + 0xe0));
  }
  lVar3 = FUN_05015c2c(uVar5,0);
  if (lVar2 != lVar3) {
    return 0;
  }
  lVar2 = (**(code **)(*unaff_x19 + 0x468))();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    return *(undefined8 *)(lVar2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


