/*
FUNCTION_NAME: FUN_02410404
ENTRY_POINT: 02410404
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_02410404(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5,long param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined1 auVar16 [12];
  ulong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  puVar12 = &local_c0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar15 = (long *)(param_7 + 0x38);
  if (*plVar15 == 0) {
    FUN_01c5d288(PTR_DAT_04230358);
    FUN_01c5d288(PTR_DAT_0422fa08);
    FUN_01c5d288(PTR_DAT_042303a0);
    FUN_01c5d288(PTR_DAT_042303d0);
    FUN_01c5d288(System_Text_RegularExpressions_Match_TypeInfo);
    FUN_01c5d288(UnityEngine_EventSystems_ISubmitHandler_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422f960);
    FUN_01c5d288(PTR_DAT_04230108);
    FUN_01c5d288(PTR_DAT_042304a8);
    FUN_01c5d288(PTR_DAT_042305d0);
    FUN_01c5d288(PTR_DAT_0422fd80);
    FUN_01c5d288(PTR_DAT_04230478);
    FUN_01c5d288(PTR_DAT_04236d90);
    FUN_01c5d288(PTR_DAT_042301a0);
    FUN_01c5d288(System_Text_RegularExpressions_MatchCollection_TypeInfo);
    FUN_01c5d288(System_Text_RegularExpressions_MatchEvaluator_TypeInfo);
    FUN_01c5d288(Photon_Realtime_MatchMakingCallbacksContainer_TypeInfo);
    FUN_01c5d288(System_Text_RegularExpressions_MatchSparse_TypeInfo);
    FUN_01c5d288(Mono_ISystemDependencyProvider_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230588);
    FUN_01c5d288(PTR_DAT_042304e0);
    FUN_01c5d288(System_MathF_TypeInfo);
    FUN_01c5d288(UnityEngine_Mathf_TypeInfo);
    FUN_01c5d288(UnityEngineInternal_MathfInternal_TypeInfo);
    FUN_01c5d288(UnityEngine_Matrix4x4_TypeInfo);
    FUN_01c5d288(UnityEngine_Rendering_Universal_Maxima_TypeInfo);
    FUN_01c5d288(UnityEngine_Yoga_MeasureFunction_TypeInfo);
    FUN_01c5d288(VoxelBusters_EssentialKit_MediaServices_TypeInfo);
    FUN_01c5d288(VoxelBusters_EssentialKit_MediaServicesRequestCameraAccessResult_TypeInfo);
    FUN_01c5d288(VoxelBusters_EssentialKit_MediaServicesRequestGalleryAccessResult_TypeInfo);
    FUN_01c5d288(VoxelBusters_EssentialKit_MediaServicesSaveImageToGalleryResult_TypeInfo);
    FUN_01c5d288(VoxelBusters_EssentialKit_MediaServicesUnitySettings_TypeInfo);
    FUN_01c5d288(System_MemberAccessException_TypeInfo);
    FUN_01c5d288(System_Linq_Expressions_MemberAssignment_TypeInfo);
    FUN_01c5d288(System_ComponentModel_MemberDescriptor_TypeInfo);
    FUN_01c5d288(System_Linq_Expressions_MemberExpression_TypeInfo);
    FUN_01c5d288(System_Reflection_MemberFilter_TypeInfo);
    FUN_01c5d288(System_Runtime_Serialization_MemberHolder_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fa18);
    FUN_01c5d288(PTR_DAT_042306a0);
    FUN_01c5d288(PTR_DAT_042305a8);
    FUN_01c5d288(PTR_DAT_04230670);
    FUN_01c5d288(PTR_DAT_042306f8);
    FUN_01c5d288(PTR_DAT_042301a8);
    FUN_01c5d288(PTR_DAT_04230770);
    FUN_01c5d288(PTR_DAT_042301b0);
    FUN_01c5d288(PTR_DAT_04236e58);
    if (*plVar15 == 0) {
      FUN_01c723f0(param_7);
    }
  }
  puVar2 = UnityEngine_UIElements_LayoutData_TypeInfo;
  if (0x3c < param_5) {
    if (param_5 < 0x44) {
      if (param_5 == 0x3e) {
        uVar5 = FUN_023f4254(param_6,*(undefined8 *)UnityEngine_Mathf_TypeInfo);
        local_80._0_4_ = uVar5;
        puVar13 = (undefined8 *)System_Text_RegularExpressions_Match_TypeInfo;
        goto LAB_02410844;
      }
      if (param_5 == 0x41) {
        local_80._0_4_ =
             FUN_023f44d4(param_6,*(undefined8 *)
                                   VoxelBusters_EssentialKit_MediaServicesUnitySettings_TypeInfo);
        puVar13 = (undefined8 *)Mono_ISystemDependencyProvider_TypeInfo;
        goto LAB_02410814;
      }
      if (param_5 == 0x43) {
        local_80 = FUN_023f452c(param_6,*(undefined8 *)
                                         VoxelBusters_EssentialKit_MediaServicesSaveImageToGalleryResult_TypeInfo
                               );
        puVar13 = (undefined8 *)System_Text_RegularExpressions_MatchSparse_TypeInfo;
        goto LAB_02410718;
      }
      goto switchD_024106b4_caseD_6;
    }
    if (param_5 < 0x4f) {
      if (param_5 == 0x46) {
        uVar8 = FUN_023f43d4(param_6,*(undefined8 *)VoxelBusters_EssentialKit_MediaServices_TypeInfo
                            );
        puVar13 = (undefined8 *)System_Text_RegularExpressions_MatchCollection_TypeInfo;
        goto LAB_02410b7c;
      }
      if (param_5 != 0x4e) goto switchD_024106b4_caseD_6;
      FUN_023f4314(&local_c0,param_6,*(undefined8 *)UnityEngine_Rendering_Universal_Maxima_TypeInfo)
      ;
      uStack_58 = uStack_98;
      local_60 = local_a0;
      uStack_48 = uStack_88;
      uStack_50 = uStack_90;
      local_80._8_8_ = uStack_b8;
      local_80._0_8_ = local_c0;
      uStack_68 = uStack_a8;
      local_70 = local_b0;
      uVar8 = *(undefined8 *)PTR_DAT_04236d90;
      puVar12 = &local_c0;
    }
    else {
      if (param_5 != 0x50) {
        if (param_5 == 0x53) {
          local_80._0_4_ =
               FUN_023f447c(param_6,*(undefined8 *)
                                     VoxelBusters_EssentialKit_MediaServicesRequestCameraAccessResult_TypeInfo
                           );
          puVar13 = (undefined8 *)System_Text_RegularExpressions_MatchEvaluator_TypeInfo;
          goto LAB_02410814;
        }
        goto switchD_024106b4_caseD_6;
      }
      FUN_023f4420(&local_c0,param_6,
                   *(undefined8 *)
                    VoxelBusters_EssentialKit_MediaServicesRequestGalleryAccessResult_TypeInfo);
      local_70 = local_b0;
      local_80._8_8_ = uStack_b8;
      local_80._0_8_ = local_c0;
      uVar8 = *(undefined8 *)Photon_Realtime_MatchMakingCallbacksContainer_TypeInfo;
      puVar12 = &local_c0;
    }
    goto LAB_02410bf0;
  }
  if (param_5 < 0x15) {
    switch(param_5) {
    case 0:
      uVar8 = **(undefined8 **)(param_7 + 0x38);
      thunk_FUN_01c273e8(PTR_DAT_0422fb28);
      FUN_019b5f60();
      uVar9 = FUN_032e04b8(uVar8,0);
      thunk_FUN_01c273e8(UnityEngine_ProBuilder_Math_TypeInfo);
      uVar8 = thunk_FUN_01c496e0();
      FUN_01cfe284(uVar8,uVar9,0);
      goto LAB_02410d00;
    case 1:
      uVar3 = FUN_023f4580(param_6,*(undefined8 *)System_MemberAccessException_TypeInfo);
      puVar13 = (undefined8 *)PTR_DAT_04230588;
      goto LAB_024108fc;
    case 2:
      uVar3 = FUN_023f41d8(param_6,*(undefined8 *)System_MathF_TypeInfo);
      puVar13 = (undefined8 *)PTR_DAT_042303a0;
LAB_024108fc:
      uVar8 = *puVar13;
      local_80[0] = uVar3;
      goto LAB_02410b84;
    case 3:
      uVar4 = FUN_03248f00(param_6,0,0);
      puVar13 = (undefined8 *)PTR_DAT_042305d0;
      break;
    case 4:
      uVar4 = thunk_FUN_03248f00(param_6,0,0);
      puVar13 = (undefined8 *)PTR_DAT_042306a0;
      break;
    case 5:
      uVar5 = FUN_03248f84(param_6,0,0);
      puVar13 = (undefined8 *)PTR_DAT_0422fd80;
      goto LAB_02410974;
    default:
      goto switchD_024106b4_caseD_6;
    case 10:
      uVar5 = thunk_FUN_03248f84(param_6,0,0);
      puVar13 = (undefined8 *)PTR_DAT_042305a8;
LAB_02410974:
      uVar8 = *puVar13;
      local_80._0_4_ = uVar5;
      goto LAB_02410b84;
    case 0xf:
      if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (*(int *)(*(long *)PTR_DAT_0422fa18 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar6 = FUN_01cfc27c(param_6,0,*(undefined4 *)(param_6 + 0x18),0);
      goto LAB_02410bf4;
    case 0x14:
      uVar5 = FUN_03249110(param_6,0,0);
      local_80._0_4_ = uVar5;
      puVar13 = (undefined8 *)PTR_DAT_042304e0;
      goto LAB_02410ab0;
    }
LAB_02410a00:
    uVar8 = *puVar13;
    local_80._0_2_ = uVar4;
    goto LAB_02410b84;
  }
  switch(param_5) {
  case 0x19:
    local_80._0_8_ = FUN_03249124(param_6,0,0);
    puVar13 = (undefined8 *)PTR_DAT_042304a8;
    break;
  default:
switchD_024106b4_caseD_6:
    local_80[0] = param_5;
    uVar8 = thunk_FUN_01c273e8(UnityEngine_UIElements_LayoutData_TypeInfo);
    uVar9 = thunk_FUN_01c49334(uVar8,local_80);
    local_c0 = CONCAT71(local_c0._1_7_,param_5);
    uVar8 = thunk_FUN_01c273e8(puVar2);
    uVar8 = thunk_FUN_01c49334(uVar8,&local_c0);
    uVar10 = thunk_FUN_01c273e8(System_Reflection_MemberInfo_TypeInfo);
    uVar11 = thunk_FUN_01c273e8(System_Linq_Expressions_MemberInitExpression_TypeInfo);
    uVar10 = FUN_031536d4(uVar10,uVar11,uVar8,0);
    thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
    uVar8 = thunk_FUN_01c496e0();
    uVar11 = thunk_FUN_01c273e8(UnityEngine_Events_InvokableCall_TypeInfo);
    FUN_03244804(uVar8,uVar11,uVar9,uVar10,0);
LAB_02410d00:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar8,param_7);
  case 0x1b:
    local_80 = FUN_023f42a0(param_6,*(undefined8 *)UnityEngine_Matrix4x4_TypeInfo);
    puVar13 = (undefined8 *)PTR_DAT_04230108;
LAB_02410718:
    uVar8 = *puVar13;
    goto LAB_02410b84;
  case 0x1c:
    local_80._0_8_ = 0;
    local_80._8_8_ = 0;
    FUN_03761790(local_80,param_6,0);
    uStack_b8 = local_80._8_8_;
    uVar8 = *(undefined8 *)PTR_DAT_04230358;
    local_c0 = local_80._0_8_;
    goto LAB_02410bf0;
  case 0x1e:
    uVar8 = FUN_03249080(param_6,0,0);
    puVar13 = (undefined8 *)PTR_DAT_04230478;
    goto LAB_02410b7c;
  case 0x20:
    uVar8 = thunk_FUN_03249080(param_6,0,0);
    puVar13 = (undefined8 *)PTR_DAT_04230670;
    goto LAB_02410b7c;
  case 0x21:
    uVar4 = thunk_FUN_03248f00(param_6,0,0);
    puVar13 = (undefined8 *)PTR_DAT_042303d0;
    goto LAB_02410a00;
  case 0x23:
    uVar3 = FUN_03249444(param_6,0,0);
    local_80._0_8_ = CONCAT71(local_80._1_7_,uVar3) & 0xffffffffffffff01;
    puVar13 = (undefined8 *)PTR_DAT_0422fa08;
    goto LAB_02410844;
  case 0x25:
    uVar8 = FUN_03249080(param_6,0,0);
    local_80._0_8_ = 0;
    FUN_032b0868(local_80,uVar8,0);
    uVar8 = *(undefined8 *)PTR_DAT_0422f960;
    puVar12 = &local_c0;
    local_c0 = local_80._0_8_;
    goto LAB_02410bf0;
  case 0x28:
    lVar6 = *(long *)(*plVar15 + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01c72394(lVar6);
    }
    if (param_6 != 0) {
      lVar7 = thunk_FUN_01c495e4(param_6,lVar6);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(param_6,lVar6);
      }
      goto LAB_02410c38;
    }
    goto LAB_02410c34;
  case 0x2d:
    local_80._0_4_ =
         FUN_023f45a4(param_6,*(undefined8 *)System_ComponentModel_MemberDescriptor_TypeInfo);
    local_80._4_4_ = param_2;
    puVar13 = (undefined8 *)PTR_DAT_042301a8;
    break;
  case 0x2f:
    uVar8 = FUN_023f45f0(param_6,*(undefined8 *)System_Linq_Expressions_MemberAssignment_TypeInfo);
    puVar13 = (undefined8 *)PTR_DAT_042306f8;
LAB_02410b7c:
    local_80._0_8_ = uVar8;
    uVar8 = *puVar13;
LAB_02410b84:
    puVar12 = (ulong *)local_80;
    goto LAB_02410bf0;
  case 0x32:
    local_80._0_4_ = FUN_023f463c(param_6,*(undefined8 *)System_Reflection_MemberFilter_TypeInfo);
    local_80._4_4_ = param_2;
    local_80._8_4_ = param_3;
    puVar13 = (undefined8 *)PTR_DAT_042301b0;
    break;
  case 0x33:
    auVar16 = FUN_023f4698(param_6,*(undefined8 *)System_Linq_Expressions_MemberExpression_TypeInfo)
    ;
    local_80._0_8_ = auVar16._0_8_;
    local_80._8_4_ = auVar16._8_4_;
    puVar13 = (undefined8 *)PTR_DAT_04230770;
LAB_02410844:
    uVar8 = *puVar13;
    goto LAB_02410b84;
  case 0x35:
    local_80._0_4_ =
         FUN_023f46f4(param_6,*(undefined8 *)System_Runtime_Serialization_MemberHolder_TypeInfo);
    puVar13 = (undefined8 *)PTR_DAT_04236e58;
    goto LAB_02410814;
  case 0x37:
    local_80._0_4_ = FUN_023f437c(param_6,*(undefined8 *)UnityEngine_Yoga_MeasureFunction_TypeInfo);
    puVar13 = (undefined8 *)PTR_DAT_042301a0;
    goto LAB_02410814;
  case 0x3c:
    local_80._0_4_ = FUN_023f41fc(param_6,*(undefined8 *)UnityEngineInternal_MathfInternal_TypeInfo)
    ;
    puVar13 = (undefined8 *)UnityEngine_EventSystems_ISubmitHandler_TypeInfo;
LAB_02410814:
    uVar8 = *puVar13;
    local_80._4_4_ = param_2;
    local_80._12_4_ = param_4;
    local_80._8_4_ = param_3;
    goto LAB_02410ab4;
  }
LAB_02410ab0:
  uVar8 = *puVar13;
LAB_02410ab4:
  puVar12 = (ulong *)local_80;
LAB_02410bf0:
  lVar6 = thunk_FUN_01c49334(uVar8,puVar12);
LAB_02410bf4:
  lVar14 = *(long *)(*plVar15 + 8);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_01c72394(lVar14);
  }
  if (lVar6 == 0) {
LAB_02410c34:
    lVar7 = 0;
  }
  else {
    lVar7 = thunk_FUN_01c495e4(lVar6,lVar14);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(lVar6,lVar14);
    }
  }
LAB_02410c38:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar7);
}


