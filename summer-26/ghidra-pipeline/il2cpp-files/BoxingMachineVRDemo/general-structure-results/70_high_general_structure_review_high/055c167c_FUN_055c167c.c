/*
FUNCTION_NAME: FUN_055c167c
ENTRY_POINT: 055c167c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void FUN_055c167c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  
  if ((DAT_06b7f328 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06762e38);
    FUN_02d6084c(System_Func<MeshHandle>_TypeInfo);
    FUN_02d6084c(PTR_DAT_06778c58);
    FUN_02d6084c(System_Collections_Generic_ICollection<Variant>_TypeInfo);
    FUN_02d6084c(Newtonsoft_Json_JsonTextWriter_var);
    FUN_02d6084c(System_Collections_Generic_ICollection<Vector2>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_ICollection<XmlAttribute>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_ICollection<XmlNode>_TypeInfo);
    DAT_06b7f328 = 1;
  }
  FUN_0504920c(param_1,0);
  puVar5 = System_Collections_Generic_ICollection<XmlAttribute>_TypeInfo;
  puVar4 = System_Collections_Generic_ICollection<Variant>_TypeInfo;
  puVar3 = Newtonsoft_Json_JsonTextWriter_var;
  puVar2 = PTR_DAT_06778c58;
  puVar1 = PTR_DAT_06762e38;
  if (param_2 == 0) {
    thunk_FUN_02dc61f4(PTR_DAT_06764070);
    uVar6 = thunk_FUN_02d9d534();
    uVar8 = thunk_FUN_02dc61f4(
                              System_Collections_Generic_ICollection<JsonSchemaGenerator_TypeSchema>_TypeInfo
                              );
    FUN_04f77010(uVar6,uVar8,0);
    uVar8 = thunk_FUN_02dc61f4(
                              System_Collections_Generic_ICollection<OVRSemanticLabels_Classification>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar6,uVar8);
  }
  *(long *)(param_1 + 0x10) = param_2;
  thunk_FUN_02dd37b4((long *)(param_1 + 0x10),param_2);
  uVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_04fa97f4(uVar6,0);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x20),uVar6);
  uVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_04fb2710(uVar6,0);
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x40),uVar6);
  uVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_04fb2710(uVar6,0);
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x48),uVar6);
  uVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_04fb2710(uVar6,0);
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x50),uVar6);
  uVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
  FUN_055ab118(uVar6,param_1,*(undefined8 *)puVar5,0);
  puVar10 = (undefined8 *)(param_1 + 0x28);
  *puVar10 = uVar6;
  thunk_FUN_02dd37b4(puVar10,uVar6);
  *(undefined8 *)(param_1 + 0x30) = *puVar10;
  thunk_FUN_02dd37b4();
  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
  FUN_05624978(lVar7,0);
  plVar9 = (long *)(param_1 + 0x68);
  *plVar9 = lVar7;
  thunk_FUN_02dd37b4(plVar9,lVar7);
  lVar7 = *plVar9;
  if (lVar7 != 0) {
    if (*(long *)(lVar7 + 0x20) == 0) {
      uVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                  System_Collections_Generic_ICollection<XmlNode>_TypeInfo);
      FUN_0567aad4(uVar6,0);
      FUN_0562537c(lVar7,uVar6,0);
      lVar7 = *plVar9;
      if (lVar7 == 0) goto LAB_055c1928;
      *(undefined1 *)(lVar7 + 0x6a) = 0;
    }
    FUN_05625304(lVar7,param_2,0);
    puVar2 = System_Collections_Generic_ICollection<Vector2>_TypeInfo;
    puVar1 = System_Func<MeshHandle>_TypeInfo;
    if (*plVar9 != 0) {
      FUN_056258a8(*plVar9,0,0);
      uVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
      FUN_055bac40(uVar6,0);
      *(undefined8 *)(param_1 + 0x78) = uVar6;
      thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x78),uVar6);
      uVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
      FUN_0559035c(uVar6,0);
      *(undefined8 *)(param_1 + 0x60) = uVar6;
      thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x60),uVar6);
      *(undefined1 *)(param_1 + 0x58) = 1;
      return;
    }
  }
LAB_055c1928:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


