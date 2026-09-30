/*
FUNCTION_NAME: FUN_075609a8
ENTRY_POINT: 075609a8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_075609a8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  
  puVar9 = Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0_TypeInfo;
  puVar4 = 
  Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_TypeInfo;
  puVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0_TypeInfo
  ;
  puVar2 = PTR_DAT_07d96620;
  if ((DAT_0826c47b & 1) == 0) {
    FUN_0373b518(Newtonsoft_Json_Serialization_JsonTypeReflector_<>c_TypeInfo);
    FUN_0373b518(
                Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_TypeInfo
                );
    FUN_0373b518(
                Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0_TypeInfo
                );
    FUN_0373b518(PTR_DAT_07d96620);
    FUN_0373b518(Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0_TypeInfo);
    FUN_0373b518(DIVR_Expulsion_ExpulsionManager_TypeInfo);
    FUN_0373b518(PTR_DAT_07d8a638);
    FUN_0373b518(PTR_DAT_07dd4b08);
    FUN_0373b518(PTR_DAT_07d86800);
    FUN_0373b518(PTR_DAT_07d8ad30);
    FUN_0373b518(System_ComponentModel_ExtenderProvidedPropertyAttribute_TypeInfo);
    FUN_0373b518(PTR_DAT_07d8ab58);
    FUN_0373b518(PTR_DAT_07d8b768);
    FUN_0373b518(PTR_DAT_07dc6db0);
    FUN_0373b518(PTR_DAT_07d867f8);
    FUN_0373b518(PTR_DAT_07d86598);
    FUN_0373b518(RootMotion_FinalIK_FBIKChain_TypeInfo);
    FUN_0373b518(PTR_DAT_07dd4b60);
    FUN_0373b518(PTR_DAT_07d8f8f0);
    FUN_0373b518(FMOD_FILE_ASYNCDONE_FUNC_TypeInfo);
    FUN_0373b518(FMOD_FILE_CLOSE_CALLBACK_TypeInfo);
    DAT_0826c47b = 1;
  }
  uVar1 = _DAT_01587fc0;
  puVar14 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
  puVar14[1] = _UNK_01587fc8;
  *puVar14 = uVar1;
  lVar11 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
  FUN_05b0e950(lVar11,*(undefined8 *)puVar4);
  lVar12 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
  FUN_062855bc(lVar12,0);
  uVar1 = _DAT_01589eb0;
  *(undefined8 *)(lVar12 + 0x18) = _UNK_01589eb8;
  *(undefined8 *)(lVar12 + 0x10) = uVar1;
  puVar10 = Newtonsoft_Json_Serialization_JsonTypeReflector_<>c_TypeInfo;
  puVar8 = FMOD_FILE_ASYNCDONE_FUNC_TypeInfo;
  puVar7 = PTR_DAT_07dc6db0;
  puVar6 = PTR_DAT_07d8f8f0;
  puVar5 = PTR_DAT_07d8b768;
  puVar4 = PTR_DAT_07d8ab58;
  puVar3 = PTR_DAT_07d8a638;
  puVar2 = PTR_DAT_07d86598;
  if (lVar11 != 0) {
    FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07d8ad30,lVar12,
                 *(undefined8 *)Newtonsoft_Json_Serialization_JsonTypeReflector_<>c_TypeInfo);
    lVar12 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
    FUN_062855bc(lVar12,0);
    uVar1 = _DAT_01589b10;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_01589b18;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_05b0f700(lVar11,*(undefined8 *)puVar3,lVar12,*(undefined8 *)puVar10);
    lVar12 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
    FUN_062855bc(lVar12,0);
    uVar1 = _DAT_01589300;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_01589308;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_05b0f700(lVar11,*(undefined8 *)puVar2,lVar12,*(undefined8 *)puVar10);
    lVar12 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
    FUN_062855bc(lVar12,0);
    uVar1 = _DAT_015898e0;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_015898e8;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_05b0f700(lVar11,*(undefined8 *)puVar6,lVar12,*(undefined8 *)puVar10);
    lVar12 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
    FUN_062855bc(lVar12,0);
    uVar1 = _DAT_01589310;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_01589318;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_05b0f700(lVar11,*(undefined8 *)puVar5,lVar12,*(undefined8 *)puVar10);
    lVar12 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
    FUN_062855bc(lVar12,0);
    uVar1 = _DAT_015870b0;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_015870b8;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_05b0f700(lVar11,*(undefined8 *)puVar7,lVar12,*(undefined8 *)puVar10);
    lVar12 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
    FUN_062855bc(lVar12,0);
    uVar1 = _DAT_015898f0;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_015898f8;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_05b0f700(lVar11,*(undefined8 *)puVar4,lVar12,*(undefined8 *)puVar10);
    lVar12 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
    FUN_062855bc(lVar12,0);
    uVar1 = _DAT_015887c0;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_015887c8;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_05b0f700(lVar11,*(undefined8 *)puVar8,lVar12,*(undefined8 *)puVar10);
    lVar12 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
    FUN_062855bc(lVar12,0);
    uVar1 = _DAT_01589b20;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_01589b28;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_05b0f700(lVar11,*(undefined8 *)
                         System_ComponentModel_ExtenderProvidedPropertyAttribute_TypeInfo,lVar12,
                 *(undefined8 *)puVar10);
    lVar12 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
    FUN_062855bc(lVar12,0);
    uVar1 = _DAT_01588d10;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_01588d18;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_05b0f700(lVar11,*(undefined8 *)RootMotion_FinalIK_FBIKChain_TypeInfo,lVar12,
                 *(undefined8 *)puVar10);
    lVar12 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
    FUN_062855bc(lVar12,0);
    uVar1 = _DAT_015870c0;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_015870c8;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_05b0f700(lVar11,*(undefined8 *)DIVR_Expulsion_ExpulsionManager_TypeInfo,lVar12,
                 *(undefined8 *)puVar10);
    lVar12 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
    FUN_062855bc(lVar12,0);
    uVar1 = _DAT_0158a720;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_0158a728;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07dd4b60,lVar12,*(undefined8 *)puVar10);
    lVar12 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
    FUN_062855bc(lVar12,0);
    uVar1 = _DAT_01587fd0;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_01587fd8;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_05b0f700(lVar11,*(undefined8 *)FMOD_FILE_CLOSE_CALLBACK_TypeInfo,lVar12,
                 *(undefined8 *)puVar10);
    lVar12 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
    FUN_062855bc(lVar12,0);
    uVar1 = _DAT_01586cf0;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_01586cf8;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07dd4b08,lVar12,*(undefined8 *)puVar10);
    lVar12 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
    FUN_062855bc(lVar12,0);
    uVar1 = _DAT_01589ce0;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_01589ce8;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07d86800,lVar12,*(undefined8 *)puVar10);
    lVar12 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
    FUN_062855bc(lVar12,0);
    uVar1 = _DAT_01587dd0;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_01587dd8;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07d867f8,lVar12,*(undefined8 *)puVar10);
    plVar13 = (long *)(*(long *)(*(long *)PTR_DAT_07d96620 + 0xb8) + 0x10);
    *plVar13 = lVar11;
    thunk_FUN_037aeb94(plVar13,lVar11);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


