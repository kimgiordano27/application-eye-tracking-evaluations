/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$EatWhitespace
ENTRY_POINT: 0745310c
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonTextReader__EatWhitespace(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  
  if (param_1 == 0) {
    thunk_FUN_03f786f8(PTR_DAT_09111b70);
    uVar7 = thunk_FUN_03f4e68c();
    uVar5 = thunk_FUN_03f786f8(PTR_DAT_09124e50);
    Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(uVar7,uVar5,0)
    ;
    uVar5 = thunk_FUN_03f786f8(PTR_DAT_091314a8);
                    /* WARNING: Subroutine does not return */
    FUN_03f134f0(uVar7,uVar5);
  }
  lVar6 = *(long *)(unaff_x19 + 0x10);
  if (lVar6 != 0) {
    if (*(uint *)(lVar6 + 0x18) <= *(uint *)(unaff_x19 + 0x18)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    puVar4 = (undefined8 *)(lVar6 + (long)(int)*(uint *)(unaff_x19 + 0x18) * 8 + 0x20);
    uVar7 = *puVar4;
    *puVar4 = 0;
    thunk_FUN_03f86000(puVar4,0);
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      iVar2 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
      iVar1 = *(int *)(unaff_x19 + 0x18) + 1;
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = iVar1 / iVar2;
      }
      *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + -1;
      *(int *)(unaff_x19 + 0x18) = iVar1 - iVar3 * iVar2;
      *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + 1;
      return uVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


