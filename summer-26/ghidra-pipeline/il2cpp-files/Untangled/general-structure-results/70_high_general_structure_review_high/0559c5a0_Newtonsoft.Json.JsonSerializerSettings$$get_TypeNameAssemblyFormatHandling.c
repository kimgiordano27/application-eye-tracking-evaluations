/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TypeNameAssemblyFormatHandling
ENTRY_POINT: 0559c5a0
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_JsonSerializerSettings__get_TypeNameAssemblyFormatHandling(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort unaff_w19;
  long unaff_x21;
  
  FUN_02f07e70(PTR_DAT_06d4f3a0);
  FUN_02f07e70(PTR_DAT_06d4f368);
  FUN_02f07e70(PTR_DAT_06d4f370);
  *(undefined1 *)(unaff_x21 + 0x90b) = 1;
  if (unaff_w19 < 0x56) {
    switch(unaff_w19) {
    case 0x44:
      lVar3 = FUN_0559c948();
      return lVar3;
    default:
      goto switchD_0559c5f8_caseD_45;
    case 0x46:
    case 0x55:
      uVar4 = FUN_0559c948();
      break;
    case 0x47:
      uVar4 = FUN_0559c8d4();
      break;
    case 0x4d:
      goto switchD_0559c5f8_caseD_4d;
    case 0x4f:
      goto switchD_0559c5f8_caseD_4f;
    case 0x52:
      goto switchD_0559c5f8_caseD_52;
    case 0x54:
      lVar3 = FUN_0559ca30();
      return lVar3;
    }
    uVar5 = FUN_0559ca30();
    goto LAB_0559c750;
  }
  switch(unaff_w19) {
  case 100:
    lVar3 = FUN_0559c8d4();
    return lVar3;
  case 0x65:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6e:
  case 0x70:
  case 0x71:
  case 0x76:
  case 0x77:
  case 0x78:
    goto switchD_0559c5f8_caseD_45;
  case 0x66:
    uVar4 = FUN_0559c948();
    goto Newtonsoft_Json_JsonSerializerSettings__get_ConstructorHandling;
  case 0x67:
    uVar4 = FUN_0559c8d4();
Newtonsoft_Json_JsonSerializerSettings__get_ConstructorHandling:
    uVar5 = FUN_0559c9bc();
LAB_0559c750:
    if (*(int *)(*(long *)PTR_DAT_06d4f330 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)PTR_DAT_06d4f330);
    }
    lVar3 = FUN_0559c410(uVar4,uVar5,*(undefined8 *)PTR_DAT_06d09430);
    return lVar3;
  case 0x6d:
switchD_0559c5f8_caseD_4d:
    lVar3 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,1);
    uVar4 = FUN_0559b7c8();
    if (lVar3 == 0) {
LAB_0559c848:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_0559c84c;
    goto LAB_0559c828;
  case 0x6f:
switchD_0559c5f8_caseD_4f:
    lVar3 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,1);
    if (lVar3 == 0) goto LAB_0559c848;
    iVar1 = *(int *)(lVar3 + 0x18);
    puVar2 = (undefined8 *)PTR_DAT_06d4f3a0;
    break;
  case 0x72:
switchD_0559c5f8_caseD_52:
    lVar3 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,1);
    if (lVar3 == 0) goto LAB_0559c848;
    iVar1 = *(int *)(lVar3 + 0x18);
    puVar2 = (undefined8 *)PTR_DAT_06d4f368;
    break;
  case 0x73:
    lVar3 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,1);
    if (lVar3 == 0) goto LAB_0559c848;
    iVar1 = *(int *)(lVar3 + 0x18);
    puVar2 = (undefined8 *)PTR_DAT_06d4f370;
    break;
  case 0x74:
    lVar3 = FUN_0559c9bc();
    return lVar3;
  case 0x75:
    lVar3 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,1);
    if ((DAT_071c2905 & 1) == 0) {
      FUN_02f07e70(PTR_DAT_06d4f380);
      DAT_071c2905 = 1;
    }
    if (lVar3 == 0) goto LAB_0559c848;
    iVar1 = *(int *)(lVar3 + 0x18);
    puVar2 = (undefined8 *)PTR_DAT_06d4f380;
    break;
  case 0x79:
switchD_0559c628_caseD_79:
    lVar3 = FUN_0559caa4();
    return lVar3;
  default:
    if (unaff_w19 == 0x59) goto switchD_0559c628_caseD_79;
    goto switchD_0559c5f8_caseD_45;
  }
  if (iVar1 == 0) {
LAB_0559c84c:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
  uVar4 = *puVar2;
LAB_0559c828:
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  thunk_FUN_02f411dc();
  return lVar3;
switchD_0559c5f8_caseD_45:
  uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d02598);
  uVar4 = thunk_FUN_02ef1438(uVar4,&stack0x0000000c);
  uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d4f3a8);
  uVar4 = System_Reflection_Emit_PropertyBuilder__get_Attributes(uVar5,uVar4,0);
  thunk_FUN_02f239f0(PTR_DAT_06d02080);
  uVar5 = thunk_FUN_02ef1808();
  uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d05bb8);
  FUN_05558580(uVar5,uVar4,uVar6,0);
  uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d4f3b0);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar5,uVar4);
}


