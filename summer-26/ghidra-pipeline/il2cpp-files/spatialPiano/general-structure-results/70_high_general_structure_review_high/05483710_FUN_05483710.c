/*
FUNCTION_NAME: FUN_05483710
ENTRY_POINT: 05483710
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void FUN_05483710(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((DAT_06bbf022 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f48);
    FUN_02f08768(System_Xml_XmlUTF8TextReader_TypeInfo);
    FUN_02f08768(PTR_DAT_067caa30);
    FUN_02f08768(PTR_DAT_067d1808);
    FUN_02f08768(System_Xml_XmlUTF8TextWriter_TypeInfo);
    FUN_02f08768(System_Xml_Schema_XmlUnionConverter_TypeInfo);
    DAT_06bbf022 = 1;
  }
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  if (param_2 == 2) {
    uVar1 = FUN_060ed7ac(param_1,0);
    FUN_054838fc(&local_68,uVar1,uVar1);
    uStack_38 = CONCAT44(iStack_58,uStack_5c);
    local_40 = CONCAT44(uStack_60,uStack_64);
    uStack_28 = uStack_4c;
    uStack_30 = local_54;
    uVar4 = local_68;
  }
  else if (param_2 == 1) {
    uVar4 = 2;
  }
  else {
    if (param_2 != 0) {
      local_68 = (undefined4)*(undefined8 *)System_Xml_XmlUTF8TextReader_TypeInfo;
      uStack_64 = (undefined4)((ulong)*(undefined8 *)System_Xml_XmlUTF8TextReader_TypeInfo >> 0x20);
      uStack_60 = 0xffffffff;
      uStack_5c = 0xffffffff;
      iStack_58 = param_2;
      uVar1 = FUN_0510aa48(&local_68,0);
      puVar3 = (undefined8 *)System_Xml_XmlUTF8TextWriter_TypeInfo;
      goto LAB_05483880;
    }
    uVar4 = 1;
  }
  *(int *)(param_1 + 0x50) = param_2;
  if (*(long *)(param_1 + 0x108) == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_067caa30 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  local_6c = FUN_0541fce8(0);
  uStack_84 = uStack_38;
  local_8c = local_40;
  uStack_74 = uStack_28;
  local_7c = uStack_30;
  local_90 = uVar4;
  iStack_58 = FUN_05428f54(&local_90,0);
  if (iStack_58 == 0) {
    lVar2 = FUN_060ed7ac(param_1,0);
    if (lVar2 != 0) {
      UnityEngine_UIElements_BindingInfo__FromRequest(lVar2,0,0);
      FUN_054839b8(param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  local_68 = (undefined4)*(undefined8 *)PTR_DAT_067d1808;
  uStack_64 = (undefined4)((ulong)*(undefined8 *)PTR_DAT_067d1808 >> 0x20);
  uStack_60 = 0xffffffff;
  uStack_5c = 0xffffffff;
  uVar1 = FUN_0510aa48(&local_68,0);
  puVar3 = (undefined8 *)System_Xml_Schema_XmlUnionConverter_TypeInfo;
LAB_05483880:
  uVar1 = FUN_04f65260(*puVar3,uVar1,0);
  if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f48);
  }
  UnityEngine_TextCore_Text_TextGenerator__get_m_LineOffset(uVar1,0);
  return;
}


