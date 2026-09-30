/*
FUNCTION_NAME: FUN_07c9a22c
ENTRY_POINT: 07c9a22c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void FUN_07c9a22c(long *param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_168;
  long local_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long local_140;
  ulong uStack_138;
  long local_130;
  undefined8 uStack_128;
  long local_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long local_100;
  ulong uStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  ulong uStack_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  
  puVar4 = UnityEngine_TextCore_Text_TextAlignment_TypeInfo;
  if ((DAT_08996764 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486be8);
    FUN_03a8a718(UnityEngine_UIElements_TextAutoSize_TypeInfo);
    FUN_03a8a718(UnityEngine_TextCore_Text_TextColorGradient_TypeInfo);
    FUN_03a8a718(TMPro_TextContainer_TypeInfo);
    FUN_03a8a718(PTR_DAT_084d6318);
    FUN_03a8a718(UnityEngine_UIElements_UIR_TextCoreSettings_TypeInfo);
    FUN_03a8a718(PTR_DAT_084ef2a8);
    FUN_03a8a718(PTR_DAT_084ae0c0);
    FUN_03a8a718(UnityEngine_TextEditOp_TypeInfo);
    FUN_03a8a718(PTR_DAT_08494978);
    FUN_03a8a718(UnityEngine_UIElements_TextEditingManipulator_TypeInfo);
    FUN_03a8a718(UnityEngine_TextEditingUtilities_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_TextElement_TypeInfo);
    FUN_03a8a718(UnityEngine_TextCore_Text_TextElementType_TypeInfo);
    FUN_03a8a718(PTR_DAT_084ae5e8);
    FUN_03a8a718(PTR_DAT_084b4220);
    FUN_03a8a718(System_Xml_TextEncodedRawTextWriter_TypeInfo);
    FUN_03a8a718(PTR_DAT_08491ac8);
    FUN_03a8a718(PTR_DAT_084f65c8);
    FUN_03a8a718(PTR_DAT_084949a0);
    FUN_03a8a718(UnityEngine_UIElements_TextEventHandler_TypeInfo);
    FUN_03a8a718(UnityEngine_TextCore_Text_TextEventManager_TypeInfo);
    FUN_03a8a718(PTR_DAT_084874c8);
    FUN_03a8a718(PTR_DAT_084daec8);
    FUN_03a8a718(UnityEngine_UIElements_TextField_TypeInfo);
    FUN_03a8a718(UnityEngine_TextCore_Text_TextFontWeight_TypeInfo);
    FUN_03a8a718(UnityEngine_TextCore_Text_TextGenerationSettings_TypeInfo);
    FUN_03a8a718(PTR_DAT_084daf28);
    FUN_03a8a718(PTR_DAT_084867c8);
    FUN_03a8a718(UnityEngine_TextGenerator_TypeInfo);
    FUN_03a8a718(UnityEngine_TextCore_Text_TextGenerator_TypeInfo);
    FUN_03a8a718(UnityEngine_TextCore_Text_TextGeneratorUtilities_TypeInfo);
    FUN_03a8a718(UnityEngine_TextCore_Text_TextHandle_TypeInfo);
    FUN_03a8a718(UnityEngine_TextCore_Text_TextHandlePermanentCache_TypeInfo);
    FUN_03a8a718(UnityEngine_TextCore_Text_TextHandleTemporaryCache_TypeInfo);
    FUN_03a8a718(UnityEngine_TextCore_Text_TextAlignment_TypeInfo);
    FUN_03a8a718(System_Globalization_TextInfo_TypeInfo);
    FUN_03a8a718(UnityEngine_TextCore_Text_TextInfo_TypeInfo);
    FUN_03a8a718(System_Globalization_TextInfoToLowerData_TypeInfo);
    FUN_03a8a718(System_Globalization_TextInfoToUpperData_TypeInfo);
    FUN_03a8a718(PTR_DAT_08486bc0);
    DAT_08996764 = 1;
  }
  local_168 = 0;
  lStack_158 = 0;
  local_160 = 0;
  lStack_148 = 0;
  lStack_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  lStack_118 = 0;
  local_120 = 0;
  lStack_108 = 0;
  lStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  lStack_f0 = 0;
  lStack_d8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
  FUN_0679343c(lVar9,0);
  puVar2 = UnityEngine_TextCore_Text_TextInfo_TypeInfo;
  puVar4 = TMPro_TextContainer_TypeInfo;
  if (lVar9 == 0) goto LAB_07c9b04c;
  *(undefined8 *)(lVar9 + 0x10) = param_4;
  thunk_FUN_03afed3c((undefined8 *)(lVar9 + 0x10),param_4);
  lVar10 = *(long *)puVar4;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar10 = *(long *)puVar4;
  }
  lVar10 = **(long **)(lVar10 + 0xb8);
  local_a0 = 0;
  lStack_98 = 0;
  FUN_05b65bb0(&local_a0,param_3,param_2,*(undefined8 *)puVar2);
  if (lVar10 == 0) goto LAB_07c9b04c;
  uVar11 = FUN_05dba0c8(lVar10,local_a0,lStack_98,&local_e0,
                        *(undefined8 *)UnityEngine_UIElements_TextAutoSize_TypeInfo);
  puVar2 = PTR_DAT_08486760;
  if ((uVar11 & 1) == 0) {
    lStack_158 = 0;
    local_160 = 0;
    lStack_148 = 0;
    lStack_150 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = 0;
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x98) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    local_130 = FUN_067850a4(param_2,0);
    thunk_FUN_03afed3c(&local_130,local_130);
    lVar10 = local_130;
    lVar18 = *(long *)(puVar2 + 0x18);
    uStack_b8 = uStack_138;
    local_c0 = local_140;
    local_a8 = uStack_128;
    local_b0 = local_130;
    lStack_d8 = lStack_158;
    local_e0 = local_160;
    local_c8 = lStack_148;
    local_d0 = lStack_150;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar12 = FUN_0675ff58(lVar18 + 0x20,0);
    uVar11 = FUN_067690d8(lVar10,uVar12,0);
    lVar10 = local_b0;
    if ((uVar11 & 1) == 0) {
      lVar18 = *(long *)(puVar2 + 0x40);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar12 = FUN_0675ff58(lVar18 + 0x20,0);
      uVar11 = FUN_067690d8(lVar10,uVar12,0);
      lVar10 = local_b0;
      if ((uVar11 & 1) != 0) goto LAB_07c9a610;
      lVar18 = *(long *)(puVar2 + 0x50);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar12 = FUN_0675ff58(lVar18 + 0x20,0);
      uVar11 = FUN_067690d8(lVar10,uVar12,0);
      lVar10 = local_b0;
      if ((uVar11 & 1) != 0) goto LAB_07c9a610;
      lVar18 = *(long *)(puVar2 + 0x70);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar12 = FUN_0675ff58(lVar18 + 0x20,0);
      uVar7 = FUN_067690d8(lVar10,uVar12,0);
    }
    else {
LAB_07c9a610:
      uVar7 = 1;
    }
    local_a8 = CONCAT71(local_a8._1_7_,uVar7) & 0xffffffffffffff01;
    if (param_2 == (long *)0x0) goto LAB_07c9b04c;
    lVar10 = (**(code **)(*param_2 + 0x6f8))(param_2,0x18,*(undefined8 *)(*param_2 + 0x700));
    lVar18 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084daf28);
    FUN_04de7d48(lVar18,*(undefined8 *)UnityEngine_UIElements_TextField_TypeInfo);
    puVar2 = PTR_DAT_084daec8;
    if (lVar10 == 0) goto LAB_07c9b04c;
    uVar11 = *(ulong *)(lVar10 + 0x18);
    if (0 < (int)uVar11) {
      uVar19 = 0;
      do {
        if (*(uint *)(lVar10 + 0x18) <= uVar19) goto LAB_07c9b050;
        uVar12 = *(undefined8 *)(lVar10 + 0x20 + uVar19 * 8);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar13 = FUN_07c9b11c(uVar12,param_3);
        if ((uVar13 & 1) != 0) {
          if (*(uint *)(lVar10 + 0x18) <= uVar19) goto LAB_07c9b050;
          if (lVar18 == 0) goto LAB_07c9b04c;
          lVar15 = *(long *)(lVar18 + 0x10);
          uVar12 = *(undefined8 *)(lVar10 + 0x20 + uVar19 * 8);
          lVar17 = *(long *)puVar2;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar15 == 0) goto LAB_07c9b04c;
          uVar1 = *(uint *)(lVar18 + 0x18);
          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar18 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
            thunk_FUN_03afed3c();
          }
          else {
            FUN_04de85b0(lVar18,uVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar19 = uVar19 + 1;
      } while ((uVar11 & 0xffffffff) != uVar19);
    }
    uVar11 = FUN_044b18d4(lVar18,*(undefined8 *)UnityEngine_UIElements_UIR_TextCoreSettings_TypeInfo
                         );
    if ((uVar11 & 1) == 0) {
      lVar9 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,1);
      if (lVar9 == 0) goto LAB_07c9b04c;
      if (*(int *)(lVar9 + 0x18) == 0) {
LAB_07c9b050:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_08486bc0;
      thunk_FUN_03afed3c();
      lVar10 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084d6318,0);
      lVar18 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084874c8,1);
      local_e0 = lVar10;
      thunk_FUN_03afed3c(&local_e0,lVar10);
      lStack_d8 = lVar18;
      thunk_FUN_03afed3c((ulong)&local_e0 | 8,lVar18);
      local_d0 = lVar9;
      thunk_FUN_03afed3c(&local_d0,lVar9);
      local_c8 = lVar9;
      thunk_FUN_03afed3c(&local_c8,lVar9);
      local_c0 = lVar9;
      thunk_FUN_03afed3c(&local_c0,lVar9);
      uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
      local_a8._0_2_ = CONCAT11(1,(undefined1)local_a8);
      lStack_118 = lStack_d8;
      local_120 = local_e0;
      lStack_108 = local_c8;
      lStack_110 = local_d0;
      uStack_f8 = uStack_b8;
      local_100 = local_c0;
      uStack_e8 = local_a8;
      lStack_f0 = local_b0;
      goto UnityEngine_Font__add_textureRebuilt;
    }
    plVar14 = (long *)FUN_044c7270(lVar18,*(undefined8 *)UnityEngine_TextEditOp_TypeInfo);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar14 = (long *)(**(code **)(*plVar14 + 0x1e8))(plVar14,*(undefined8 *)(*plVar14 + 0x1f0));
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar14 = (long *)(**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar12 = (**(code **)(*plVar14 + 0x1e8))(plVar14,*(undefined8 *)(*plVar14 + 0x1f0));
    uVar11 = FUN_065cd268(uVar12,0);
    puVar2 = System_Globalization_TextInfo_TypeInfo;
    if ((uVar11 & 1) == 0) {
      lVar10 = *(long *)System_Globalization_TextInfo_TypeInfo;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar10 = *(long *)puVar2;
      }
      puVar16 = *(undefined8 **)(lVar10 + 0xb8);
      lVar15 = puVar16[1];
      if (lVar15 == 0) {
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar16 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar12 = *puVar16;
        lVar15 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084949a0);
        FUN_04963220(lVar15,uVar12,
                     *(undefined8 *)UnityEngine_TextCore_Text_TextHandlePermanentCache_TypeInfo,0);
        plVar14 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *plVar14 = lVar15;
        thunk_FUN_03afed3c(plVar14,lVar15);
      }
      uVar12 = FUN_044ce9ac(lVar18,lVar15,*(undefined8 *)PTR_DAT_08494978);
      lVar18 = FUN_044e130c(uVar12,*(undefined8 *)System_Xml_TextEncodedRawTextWriter_TypeInfo);
    }
    puVar3 = PTR_DAT_084f65c8;
    uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084f65c8);
    FUN_049639e4(uVar12,lVar9,
                 *(undefined8 *)UnityEngine_TextCore_Text_TextHandleTemporaryCache_TypeInfo,0);
    puVar5 = UnityEngine_UIElements_TextElement_TypeInfo;
    uVar12 = FUN_044d3220(lVar18,uVar12,*(undefined8 *)UnityEngine_UIElements_TextElement_TypeInfo);
    puVar2 = PTR_DAT_084b4220;
    local_d0 = FUN_044de628(uVar12,*(undefined8 *)PTR_DAT_084b4220);
    thunk_FUN_03afed3c(&local_d0,local_d0);
    uVar12 = FUN_044c435c(local_d0,*(undefined8 *)PTR_DAT_084ae0c0);
    iVar8 = FUN_044c1b5c(uVar12,*(undefined8 *)PTR_DAT_084ef2a8);
    if (local_d0 == 0) goto LAB_07c9b04c;
    if (iVar8 != *(int *)(local_d0 + 0x18)) {
      uVar12 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
      uVar12 = FUN_065cddf0(*(undefined8 *)System_Globalization_TextInfoToLowerData_TypeInfo,uVar12,
                            *(undefined8 *)System_Globalization_TextInfoToUpperData_TypeInfo,0);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
      }
      FUN_07c4adbc(uVar12,0);
    }
    puVar6 = System_Globalization_TextInfo_TypeInfo;
    lVar9 = *(long *)System_Globalization_TextInfo_TypeInfo;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar9 = *(long *)puVar6;
    }
    puVar16 = *(undefined8 **)(lVar9 + 0xb8);
    lVar10 = puVar16[2];
    if (lVar10 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar16 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
      }
      uVar12 = *puVar16;
      lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
      FUN_049639e4(lVar10,uVar12,*(undefined8 *)UnityEngine_TextGenerator_TypeInfo,0);
      plVar14 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10);
      *plVar14 = lVar10;
      thunk_FUN_03afed3c(plVar14,lVar10);
    }
    uVar12 = FUN_044d3220(lVar18,lVar10,*(undefined8 *)puVar5);
    local_c0 = FUN_044de628(uVar12,*(undefined8 *)puVar2);
    thunk_FUN_03afed3c(&local_c0,local_c0);
    lVar9 = *(long *)puVar6;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar9 = *(long *)puVar6;
    }
    puVar16 = *(undefined8 **)(lVar9 + 0xb8);
    lVar10 = puVar16[3];
    if (lVar10 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar16 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
      }
      uVar12 = *puVar16;
      lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_TextCore_Text_TextEventManager_TypeInfo
                                 );
      FUN_049639e4(lVar10,uVar12,*(undefined8 *)UnityEngine_TextCore_Text_TextGenerator_TypeInfo,0);
      plVar14 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
      *plVar14 = lVar10;
      thunk_FUN_03afed3c(plVar14,lVar10);
    }
    uVar12 = FUN_044d3220(lVar18,lVar10,*(undefined8 *)UnityEngine_TextEditingUtilities_TypeInfo);
    local_e0 = FUN_044de628(uVar12,*(undefined8 *)UnityEngine_TextCore_Text_TextElementType_TypeInfo
                           );
    thunk_FUN_03afed3c(&local_e0,local_e0);
    lVar9 = local_e0;
    lVar10 = *(long *)puVar6;
    if ((local_a8 & 1) == 0) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar10 = *(long *)puVar6;
      }
      puVar16 = *(undefined8 **)(lVar10 + 0xb8);
      lVar15 = puVar16[5];
      if (lVar15 == 0) {
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar16 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
        }
        uVar12 = *puVar16;
        lVar15 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_UIElements_TextEventHandler_TypeInfo)
        ;
        FUN_04963220(lVar15,uVar12,*(undefined8 *)UnityEngine_TextCore_Text_TextHandle_TypeInfo,0);
        plVar14 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x28);
        *plVar14 = lVar15;
LAB_07c9ac84:
        thunk_FUN_03afed3c(plVar14,lVar15);
      }
    }
    else {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar10 = *(long *)puVar6;
      }
      puVar16 = *(undefined8 **)(lVar10 + 0xb8);
      lVar15 = puVar16[4];
      if (lVar15 == 0) {
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar16 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
        }
        uVar12 = *puVar16;
        lVar15 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_UIElements_TextEventHandler_TypeInfo)
        ;
        FUN_04963220(lVar15,uVar12,
                     *(undefined8 *)UnityEngine_TextCore_Text_TextGeneratorUtilities_TypeInfo,0);
        plVar14 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20);
        *plVar14 = lVar15;
        goto LAB_07c9ac84;
      }
    }
    uVar12 = FUN_044d2bd8(lVar9,lVar15,
                          *(undefined8 *)UnityEngine_UIElements_TextEditingManipulator_TypeInfo);
    lStack_d8 = Normal_Realtime_MatcherErrors__TryParseRequestErrorData<MatcherErrors_QuickmatchCapacityInvalidData>
                          (uVar12,*(undefined8 *)PTR_DAT_084ae5e8);
    thunk_FUN_03afed3c((ulong)&local_e0 | 8,lStack_d8);
    if (local_e0 == 0) {
LAB_07c9b04c:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_c8 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,*(undefined4 *)(local_e0 + 0x18));
    thunk_FUN_03afed3c(&local_c8,local_c8);
    puVar2 = UnityEngine_TextCore_Text_TextGenerationSettings_TypeInfo;
    if (lVar18 == 0) goto LAB_07c9b04c;
    if (0 < *(int *)(lVar18 + 0x18)) {
      uVar11 = 0;
      lVar9 = 0x20;
      do {
        lVar10 = local_c8;
        plVar14 = (long *)FUN_04de82e0(lVar18,uVar11 & 0xffffffff,*(undefined8 *)puVar2);
        if ((plVar14 == (long *)0x0) ||
           (uVar12 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0)),
           lVar10 == 0)) goto LAB_07c9b04c;
        if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_07c9b050;
        *(undefined8 *)(lVar10 + lVar9) = uVar12;
        thunk_FUN_03afed3c(lVar10 + lVar9,uVar12);
        uVar11 = uVar11 + 1;
        lVar9 = lVar9 + 8;
      } while ((long)uVar11 < (long)*(int *)(lVar18 + 0x18));
    }
    lVar9 = local_b0;
    puVar2 = PTR_DAT_08486760;
    lVar10 = *(long *)(PTR_DAT_08486760 + 0x40);
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar12 = FUN_0675ff58(lVar10 + 0x20,0);
    uVar11 = FUN_067690d8(lVar9,uVar12,0);
    lVar9 = local_b0;
    puVar3 = UnityEngine_TextCore_Text_TextInfo_TypeInfo;
    if ((uVar11 & 1) == 0) {
      lVar10 = *(long *)(puVar2 + 0x18);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar12 = FUN_0675ff58(lVar10 + 0x20,0);
      uVar11 = FUN_067690d8(lVar9,uVar12,0);
      if ((uVar11 & 1) != 0) {
        if (lStack_d8 == 0) goto LAB_07c9b04c;
        uVar11 = *(ulong *)(lStack_d8 + 0x18);
        if (0 < (int)uVar11) {
          uVar19 = 0;
          do {
            if (lStack_d8 == 0) goto LAB_07c9b04c;
            if (*(uint *)(lStack_d8 + 0x18) <= uVar19) goto LAB_07c9b050;
            lVar9 = lStack_d8 + uVar19 * 4;
            if (*(int *)(lVar9 + 0x20) == 0xff) {
              *(undefined4 *)(lVar9 + 0x20) = 0xffffffff;
            }
            uVar19 = uVar19 + 1;
          } while ((uVar11 & 0xffffffff) != uVar19);
        }
      }
    }
    else {
      if (lStack_d8 == 0) goto LAB_07c9b04c;
      uVar11 = *(ulong *)(lStack_d8 + 0x18);
      if (0 < (int)uVar11) {
        uVar19 = 0;
        do {
          if (lStack_d8 == 0) goto LAB_07c9b04c;
          if (*(uint *)(lStack_d8 + 0x18) <= uVar19) goto LAB_07c9b050;
          lVar9 = lStack_d8 + uVar19 * 4;
          if (*(int *)(lVar9 + 0x20) == 0xffff) {
            *(undefined4 *)(lVar9 + 0x20) = 0xffffffff;
          }
          uVar19 = uVar19 + 1;
        } while ((uVar11 & 0xffffffff) != uVar19);
      }
    }
    uVar12 = *(undefined8 *)PTR_DAT_08491ac8;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar12 = FUN_0675ff58(uVar12,0);
    uVar7 = (**(code **)(*param_2 + 0x1f8))(param_2,uVar12,0,*(undefined8 *)(*param_2 + 0x200));
    lVar9 = local_b0;
    uStack_b8 = CONCAT71(uStack_b8._1_7_,uVar7) & 0xffffffffffffff01;
    uVar12 = FUN_0675ff58(*(long *)(puVar2 + 0x68) + 0x20,0);
    uVar11 = FUN_06769d78(lVar9,uVar12,0);
    lVar9 = local_b0;
    uVar7 = 0;
    if ((uVar11 & 1) != 0) {
      lVar10 = *(long *)(puVar2 + 0x70);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar12 = FUN_0675ff58(lVar10 + 0x20,0);
      uVar7 = FUN_06769d78(lVar9,uVar12,0);
    }
    local_a8 = CONCAT62(local_a8._2_6_,CONCAT11(uVar7,(undefined1)local_a8)) & 0xffffffffffff01ff;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)puVar4);
    }
    FUN_07c9b230(param_2,&local_e0);
    lVar9 = **(long **)(*(long *)puVar4 + 0xb8);
    local_180 = 0;
    uStack_178 = 0;
    FUN_05b65bb0(&local_180,param_3,param_2,*(undefined8 *)puVar3);
    if (lVar9 == 0) goto LAB_07c9b04c;
    lStack_98 = lStack_d8;
    local_a0 = local_e0;
    lStack_88 = local_c8;
    lStack_90 = local_d0;
    uStack_78 = uStack_b8;
    local_80 = local_c0;
    uStack_68 = local_a8;
    lStack_70 = local_b0;
    FUN_05db832c(lVar9,local_180,uStack_178,&local_a0,
                 *(undefined8 *)UnityEngine_TextCore_Text_TextColorGradient_TypeInfo);
  }
  lStack_118 = lStack_d8;
  local_120 = local_e0;
  lStack_108 = local_c8;
  lStack_110 = local_d0;
  uStack_f8 = uStack_b8;
  local_100 = local_c0;
  uStack_e8 = local_a8;
  lStack_f0 = local_b0;
UnityEngine_Font__add_textureRebuilt:
  param_1[1] = lStack_118;
  *param_1 = local_120;
  param_1[3] = lStack_108;
  param_1[2] = lStack_110;
  param_1[5] = uStack_f8;
  param_1[4] = local_100;
  param_1[7] = uStack_e8;
  param_1[6] = lStack_f0;
  return;
}


