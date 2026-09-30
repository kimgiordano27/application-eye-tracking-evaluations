/*
FUNCTION_NAME: FUN_02413220
ENTRY_POINT: 02413220
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_02413220(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5,long *param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined1 auVar15 [12];
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
  
  puVar11 = &local_c0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 02413240 to 02513253 has its CatchHandler @ 024133f0 */
  plVar14 = (long *)(param_7 + 0x38);
  if (*plVar14 == 0) {
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
    if (*plVar14 == 0) {
      FUN_01c723f0(param_7);
    }
  }
  puVar2 = UnityEngine_UIElements_LayoutData_TypeInfo;
  if (0x3c < param_5) {
    if (param_5 < 0x44) {
      if (param_5 == 0x3e) {
        uVar5 = FUN_023f4254(param_6,*(undefined8 *)UnityEngine_Mathf_TypeInfo);
        local_80._0_4_ = uVar5;
        puVar12 = (undefined8 *)System_Text_RegularExpressions_Match_TypeInfo;
        goto LAB_02413634;
      }
      if (param_5 == 0x41) {
        local_80._0_4_ =
             FUN_023f44d4(param_6,*(undefined8 *)
                                   VoxelBusters_EssentialKit_MediaServicesUnitySettings_TypeInfo);
        puVar12 = (undefined8 *)Mono_ISystemDependencyProvider_TypeInfo;
        goto LAB_02413658;
      }
      if (param_5 == 0x43) {
        local_80 = FUN_023f452c(param_6,*(undefined8 *)
                                         VoxelBusters_EssentialKit_MediaServicesSaveImageToGalleryResult_TypeInfo
                               );
        puVar12 = (undefined8 *)System_Text_RegularExpressions_MatchSparse_TypeInfo;
        goto LAB_02413534;
      }
      goto switchD_024134d0_caseD_6;
    }
    if (param_5 < 0x4f) {
      if (param_5 == 0x46) {
        uVar7 = FUN_023f43d4(param_6,*(undefined8 *)VoxelBusters_EssentialKit_MediaServices_TypeInfo
                            );
        puVar12 = (undefined8 *)System_Text_RegularExpressions_MatchCollection_TypeInfo;
        goto LAB_02413940;
      }
      if (param_5 != 0x4e) goto switchD_024134d0_caseD_6;
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
      uVar7 = *(undefined8 *)PTR_DAT_04236d90;
      puVar11 = &local_c0;
    }
    else {
      if (param_5 != 0x50) {
        if (param_5 == 0x53) {
          local_80._0_4_ =
               FUN_023f447c(param_6,*(undefined8 *)
                                     VoxelBusters_EssentialKit_MediaServicesRequestCameraAccessResult_TypeInfo
                           );
          puVar12 = (undefined8 *)System_Text_RegularExpressions_MatchEvaluator_TypeInfo;
          goto LAB_02413658;
        }
        goto switchD_024134d0_caseD_6;
      }
      FUN_023f4420(&local_c0,param_6,
                   *(undefined8 *)
                    VoxelBusters_EssentialKit_MediaServicesRequestGalleryAccessResult_TypeInfo);
      local_70 = local_b0;
      local_80._8_8_ = uStack_b8;
      local_80._0_8_ = local_c0;
      uVar7 = *(undefined8 *)Photon_Realtime_MatchMakingCallbacksContainer_TypeInfo;
      puVar11 = &local_c0;
    }
    goto LAB_024139d8;
  }
  if (param_5 < 0x15) {
    switch(param_5) {
    case 0:
      uVar7 = **(undefined8 **)(param_7 + 0x38);
      thunk_FUN_01c273e8(PTR_DAT_0422fb28);
      FUN_019b5f60();
      uVar8 = FUN_032e04b8(uVar7,0);
      thunk_FUN_01c273e8(UnityEngine_ProBuilder_Math_TypeInfo);
      uVar7 = thunk_FUN_01c496e0();
      FUN_01cfe284(uVar7,uVar8,0);
      goto LAB_02413af0;
    case 1:
      uVar3 = FUN_023f4580(param_6,*(undefined8 *)System_MemberAccessException_TypeInfo);
      puVar12 = (undefined8 *)PTR_DAT_04230588;
      goto LAB_024136e4;
    case 2:
      uVar3 = FUN_023f41d8(param_6,*(undefined8 *)System_MathF_TypeInfo);
      puVar12 = (undefined8 *)PTR_DAT_042303a0;
LAB_024136e4:
      uVar7 = *puVar12;
      local_80[0] = uVar3;
      goto LAB_0241396c;
    case 3:
      uVar4 = FUN_03248f00(param_6,0,0);
      puVar12 = (undefined8 *)PTR_DAT_042305d0;
      break;
    case 4:
      uVar4 = thunk_FUN_03248f00(param_6,0,0);
      puVar12 = (undefined8 *)PTR_DAT_042306a0;
      break;
    case 5:
      uVar5 = FUN_03248f84(param_6,0,0);
      puVar12 = (undefined8 *)PTR_DAT_0422fd80;
      goto LAB_02413724;
    default:
      goto switchD_024134d0_caseD_6;
    case 10:
      uVar5 = thunk_FUN_03248f84(param_6,0,0);
      puVar12 = (undefined8 *)PTR_DAT_042305a8;
LAB_02413724:
      uVar7 = *puVar12;
      local_80._0_4_ = uVar5;
      goto LAB_0241396c;
    case 0xf:
      if (param_6 == (long *)0x0) goto LAB_02413a44;
      if (*(int *)(*(long *)PTR_DAT_0422fa18 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      param_6 = (long *)FUN_01cfc27c(param_6,0,(int)param_6[3],0);
      goto LAB_024139dc;
    case 0x14:
      uVar5 = FUN_03249110(param_6,0,0);
      local_80._0_4_ = uVar5;
      puVar12 = (undefined8 *)PTR_DAT_042304e0;
      goto LAB_02413848;
    }

    System_Array__InternalArray__IEnumerable_GetEnumerator<StylePropertyAnimationSystem_Values_StyleData<FontDefinition>>
    :
    uVar7 = *puVar12;
    local_80._0_2_ = uVar4;
    goto LAB_0241396c;
  }
  switch(param_5) {
  case 0x19:
    local_80._0_8_ = FUN_03249124(param_6,0,0);
    puVar12 = (undefined8 *)PTR_DAT_042304a8;
    break;
  default:
switchD_024134d0_caseD_6:
    local_80[0] = param_5;
    uVar7 = thunk_FUN_01c273e8(UnityEngine_UIElements_LayoutData_TypeInfo);
    uVar8 = thunk_FUN_01c49334(uVar7,local_80);
    local_c0 = CONCAT71(local_c0._1_7_,param_5);
    uVar7 = thunk_FUN_01c273e8(puVar2);
    uVar7 = thunk_FUN_01c49334(uVar7,&local_c0);
    uVar9 = thunk_FUN_01c273e8(System_Reflection_MemberInfo_TypeInfo);
    uVar10 = thunk_FUN_01c273e8(System_Linq_Expressions_MemberInitExpression_TypeInfo);
    uVar9 = FUN_031536d4(uVar9,uVar10,uVar7,0);
    thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
    uVar7 = thunk_FUN_01c496e0();
    uVar10 = thunk_FUN_01c273e8(UnityEngine_Events_InvokableCall_TypeInfo);
    FUN_03244804(uVar7,uVar10,uVar8,uVar9,0);
LAB_02413af0:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar7,param_7);
  case 0x1b:
    local_80 = FUN_023f42a0(param_6,*(undefined8 *)UnityEngine_Matrix4x4_TypeInfo);
    puVar12 = (undefined8 *)PTR_DAT_04230108;
LAB_02413534:
    uVar7 = *puVar12;
    goto LAB_0241396c;
  case 0x1c:
    local_80._0_8_ = 0;
    local_80._8_8_ = 0;
    FUN_03761790(local_80,param_6,0);
    uStack_b8 = local_80._8_8_;
    uVar7 = *(undefined8 *)PTR_DAT_04230358;
    local_c0 = local_80._0_8_;
    goto LAB_024139d8;
  case 0x1e:
    uVar7 = FUN_03249080(param_6,0,0);
    puVar12 = (undefined8 *)PTR_DAT_04230478;
    goto LAB_02413940;
  case 0x20:
    uVar7 = thunk_FUN_03249080(param_6,0,0);
    puVar12 = (undefined8 *)PTR_DAT_04230670;
    goto LAB_02413940;
  case 0x21:
    uVar4 = thunk_FUN_03248f00(param_6,0,0);
    puVar12 = (undefined8 *)PTR_DAT_042303d0;
    goto 
    System_Array__InternalArray__IEnumerable_GetEnumerator<StylePropertyAnimationSystem_Values_StyleData<FontDefinition>>
    ;
  case 0x23:
    uVar3 = FUN_03249444(param_6,0,0);
    local_80._0_8_ = CONCAT71(local_80._1_7_,uVar3) & 0xffffffffffffff01;
    puVar12 = (undefined8 *)PTR_DAT_0422fa08;
    goto LAB_02413634;
  case 0x25:
    uVar7 = FUN_03249080(param_6,0,0);
    local_80._0_8_ = 0;
    FUN_032b0868(local_80,uVar7,0);
    uVar7 = *(undefined8 *)PTR_DAT_0422f960;
    puVar11 = &local_c0;
    local_c0 = local_80._0_8_;
    goto LAB_024139d8;
  case 0x28:
    lVar13 = *plVar14;
    goto LAB_024139e4;
  case 0x2d:
    local_80._0_4_ =
         FUN_023f45a4(param_6,*(undefined8 *)System_ComponentModel_MemberDescriptor_TypeInfo);
    local_80._4_4_ = param_2;
    puVar12 = (undefined8 *)PTR_DAT_042301a8;
    break;
  case 0x2f:
    uVar7 = FUN_023f45f0(param_6,*(undefined8 *)System_Linq_Expressions_MemberAssignment_TypeInfo);
    puVar12 = (undefined8 *)PTR_DAT_042306f8;
LAB_02413940:
    local_80._0_8_ = uVar7;
    uVar7 = *puVar12;
LAB_0241396c:
    puVar11 = (ulong *)local_80;
    goto LAB_024139d8;
  case 0x32:
    local_80._0_4_ = FUN_023f463c(param_6,*(undefined8 *)System_Reflection_MemberFilter_TypeInfo);
    local_80._4_4_ = param_2;
    local_80._8_4_ = param_3;
    puVar12 = (undefined8 *)PTR_DAT_042301b0;
    break;
  case 0x33:
    auVar15 = FUN_023f4698(param_6,*(undefined8 *)System_Linq_Expressions_MemberExpression_TypeInfo)
    ;
    local_80._0_8_ = auVar15._0_8_;
    local_80._8_4_ = auVar15._8_4_;
    puVar12 = (undefined8 *)PTR_DAT_04230770;
LAB_02413634:
    uVar7 = *puVar12;
    goto LAB_0241396c;
  case 0x35:
    local_80._0_4_ =
         FUN_023f46f4(param_6,*(undefined8 *)System_Runtime_Serialization_MemberHolder_TypeInfo);
    puVar12 = (undefined8 *)PTR_DAT_04236e58;
    goto LAB_02413658;
  case 0x37:
    local_80._0_4_ = FUN_023f437c(param_6,*(undefined8 *)UnityEngine_Yoga_MeasureFunction_TypeInfo);
    puVar12 = (undefined8 *)PTR_DAT_042301a0;
    goto LAB_02413658;
  case 0x3c:
    local_80._0_4_ = FUN_023f41fc(param_6,*(undefined8 *)UnityEngineInternal_MathfInternal_TypeInfo)
    ;
    puVar12 = (undefined8 *)UnityEngine_EventSystems_ISubmitHandler_TypeInfo;
LAB_02413658:
    uVar7 = *puVar12;
    local_80._4_4_ = param_2;
    local_80._12_4_ = param_4;
    local_80._8_4_ = param_3;
    goto LAB_0241384c;
  }
LAB_02413848:
  uVar7 = *puVar12;
LAB_0241384c:
  puVar11 = (ulong *)local_80;
LAB_024139d8:
  param_6 = (long *)thunk_FUN_01c49334(uVar7,puVar11);
LAB_024139dc:
  lVar13 = *plVar14;
LAB_024139e4:
  lVar13 = *(long *)(lVar13 + 8);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_01c72394(lVar13);
  }
  if (param_6 != (long *)0x0) {
    if (*(long *)(*param_6 + 0x40) != *(long *)(lVar13 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(param_6);
    }
    puVar6 = (undefined2 *)thunk_FUN_01c49834();
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*puVar6);
  }
LAB_02413a44:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


