/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<Dictionary.Entry<OVRSpace,-int>>
ENTRY_POINT: 0240a940
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<Dictionary_Entry<OVRSpace,_int>>
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *unaff_x19;
  long unaff_x20;
  byte unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  undefined4 uVar11;
  undefined1 auVar12 [12];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000088;
  
  FUN_01c5d288();
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
                    /* try { // try from 0240a9ec to 0250a9ef has its CatchHandler @ 0240a9f8 */
                    /* try { // try from 0240a9f0 to 0250aa1b has its CatchHandler @ 0240a718 */
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
  if (*unaff_x23 == 0) {
    FUN_01c723f0();
  }
  puVar1 = UnityEngine_UIElements_LayoutData_TypeInfo;
  if (0x3c < unaff_w21) {
    if (unaff_w21 < 0x44) {
      if (unaff_w21 == 0x3e) {
        uVar11 = FUN_023f4254();
        in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,uVar11);
        puVar9 = (undefined8 *)System_Text_RegularExpressions_Match_TypeInfo;
        goto LAB_0240ac4c;
      }
      if (unaff_w21 == 0x41) {
        uVar11 = FUN_023f44d4();
        puVar9 = (undefined8 *)Mono_ISystemDependencyProvider_TypeInfo;
        goto LAB_0240ac70;
      }
      if (unaff_w21 == 0x43) {
        _in_stack_00000040 = FUN_023f452c();
        puVar9 = (undefined8 *)System_Text_RegularExpressions_MatchSparse_TypeInfo;
        goto LAB_0240ab4c;
      }
      goto switchD_0240aae8_caseD_6;
    }
    if (unaff_w21 < 0x4f) {
      if (unaff_w21 == 0x46) {
        uVar5 = FUN_023f43d4();
        puVar9 = (undefined8 *)System_Text_RegularExpressions_MatchCollection_TypeInfo;
        goto LAB_0240af58;
      }
      if (unaff_w21 != 0x4e) goto switchD_0240aae8_caseD_6;
      FUN_023f4314();
      in_stack_00000068 = in_stack_00000028;
      in_stack_00000060 = in_stack_00000020;
      in_stack_00000078 = in_stack_00000038;
      in_stack_00000070 = in_stack_00000030;
      in_stack_00000048 = in_stack_00000008;
      in_stack_00000040 = in_stack_00000000;
      in_stack_00000058 = in_stack_00000018;
      in_stack_00000050 = in_stack_00000010;
      uVar5 = *(undefined8 *)PTR_DAT_04236d90;
    }
    else {
      if (unaff_w21 != 0x50) {
        if (unaff_w21 == 0x53) {
          uVar11 = FUN_023f447c();
          puVar9 = (undefined8 *)System_Text_RegularExpressions_MatchEvaluator_TypeInfo;
          goto LAB_0240ac70;
        }
        goto switchD_0240aae8_caseD_6;
      }
      FUN_023f4420();
      in_stack_00000050 = in_stack_00000010;
      in_stack_00000048 = in_stack_00000008;
      in_stack_00000040 = in_stack_00000000;
      uVar5 = *(undefined8 *)Photon_Realtime_MatchMakingCallbacksContainer_TypeInfo;
    }
    goto LAB_0240aff0;
  }
  if (unaff_w21 < 0x15) {
    switch(unaff_w21) {
    case 0:
      uVar5 = **(undefined8 **)(unaff_x20 + 0x38);
      thunk_FUN_01c273e8(PTR_DAT_0422fb28);
      FUN_019b5f60();
      uVar6 = FUN_032e04b8(uVar5,0);
      thunk_FUN_01c273e8(UnityEngine_ProBuilder_Math_TypeInfo);
      uVar5 = thunk_FUN_01c496e0();
      FUN_01cfe284(uVar5,uVar6,0);
      goto LAB_0240b110;
    case 1:
      uVar2 = FUN_023f4580();
      puVar9 = (undefined8 *)PTR_DAT_04230588;
      goto LAB_0240acfc;
    case 2:
      uVar2 = FUN_023f41d8();
      puVar9 = (undefined8 *)PTR_DAT_042303a0;
LAB_0240acfc:
      uVar5 = *puVar9;
      in_stack_00000040 = CONCAT71(in_stack_00000040._1_7_,uVar2);
      goto LAB_0240aff0;
    case 3:
      uVar3 = FUN_03248f00();
      puVar9 = (undefined8 *)PTR_DAT_042305d0;
      break;
    case 4:
      uVar3 = thunk_FUN_03248f00();
      puVar9 = (undefined8 *)PTR_DAT_042306a0;
      break;
    case 5:
      uVar11 = FUN_03248f84();
      puVar9 = (undefined8 *)PTR_DAT_0422fd80;
      goto LAB_0240ad3c;
    default:
      goto switchD_0240aae8_caseD_6;
    case 10:
      uVar11 = thunk_FUN_03248f84();
      puVar9 = (undefined8 *)PTR_DAT_042305a8;
LAB_0240ad3c:
      uVar5 = *puVar9;
      in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,uVar11);
      goto LAB_0240aff0;
    case 0xf:
      if (unaff_x19 == (long *)0x0) goto LAB_0240b064;
      if (*(int *)(*(long *)PTR_DAT_0422fa18 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      unaff_x19 = (long *)FUN_01cfc27c();
      goto FUN_0240aff4;
    case 0x14:
      uVar11 = FUN_03249110();
      in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,uVar11);
      puVar9 = (undefined8 *)PTR_DAT_042304e0;
      goto LAB_0240ae60;
    }
LAB_0240af7c:
    uVar5 = *puVar9;
    in_stack_00000040 = CONCAT62(in_stack_00000040._2_6_,uVar3);
    goto LAB_0240aff0;
  }
  switch(unaff_w21) {
  case 0x19:
    in_stack_00000040 = FUN_03249124();
    puVar9 = (undefined8 *)PTR_DAT_042304a8;
    goto LAB_0240ae60;
  default:
switchD_0240aae8_caseD_6:
    in_stack_00000040 = CONCAT71(in_stack_00000040._1_7_,unaff_w21);
    uVar5 = thunk_FUN_01c273e8(UnityEngine_UIElements_LayoutData_TypeInfo);
    uVar6 = thunk_FUN_01c49334(uVar5,&stack0x00000040);
    thunk_FUN_01c273e8(puVar1);
    uVar5 = thunk_FUN_01c49334();
    uVar7 = thunk_FUN_01c273e8(System_Reflection_MemberInfo_TypeInfo);
    uVar8 = thunk_FUN_01c273e8(System_Linq_Expressions_MemberInitExpression_TypeInfo);
    uVar7 = FUN_031536d4(uVar7,uVar8,uVar5,0);
    thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
    uVar5 = thunk_FUN_01c496e0();
    uVar8 = thunk_FUN_01c273e8(UnityEngine_Events_InvokableCall_TypeInfo);
    FUN_03244804(uVar5,uVar8,uVar6,uVar7,0);
LAB_0240b110:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar5);
  case 0x1b:
    _in_stack_00000040 = FUN_023f42a0();
    puVar9 = (undefined8 *)PTR_DAT_04230108;
LAB_0240ab4c:
    uVar5 = *puVar9;
    break;
  case 0x1c:
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    FUN_03761790(&stack0x00000040);
    uVar5 = *(undefined8 *)PTR_DAT_04230358;
    break;
  case 0x1e:
    uVar5 = FUN_03249080();
    puVar9 = (undefined8 *)PTR_DAT_04230478;
    goto LAB_0240af58;
  case 0x20:
    uVar5 = thunk_FUN_03249080();
    puVar9 = (undefined8 *)PTR_DAT_04230670;
    goto LAB_0240af58;
  case 0x21:
    uVar3 = thunk_FUN_03248f00();
    puVar9 = (undefined8 *)PTR_DAT_042303d0;
    goto LAB_0240af7c;
  case 0x23:
    uVar2 = FUN_03249444();
    in_stack_00000040 = CONCAT71(in_stack_00000040._1_7_,uVar2) & 0xffffffffffffff01;
    puVar9 = (undefined8 *)PTR_DAT_0422fa08;
    goto LAB_0240ac4c;
  case 0x25:
    uVar5 = FUN_03249080();
    in_stack_00000040 = 0;
    FUN_032b0868(&stack0x00000040,uVar5,0);
    uVar5 = *(undefined8 *)PTR_DAT_0422f960;
    break;
  case 0x28:
    lVar10 = *unaff_x23;
    goto LAB_0240affc;
  case 0x2d:
    uVar11 = FUN_023f45a4();
    in_stack_00000040 = CONCAT44(param_2,uVar11);
    puVar9 = (undefined8 *)PTR_DAT_042301a8;
    goto LAB_0240ae60;
  case 0x2f:
    uVar5 = FUN_023f45f0();
    puVar9 = (undefined8 *)PTR_DAT_042306f8;
LAB_0240af58:
    in_stack_00000040 = uVar5;
    uVar5 = *puVar9;
    break;
  case 0x32:
    uVar11 = FUN_023f463c();
    in_stack_00000040 = CONCAT44(param_2,uVar11);
    in_stack_00000048 = CONCAT44(in_stack_00000048._4_4_,param_3);
    puVar9 = (undefined8 *)PTR_DAT_042301b0;
LAB_0240ae60:
    uVar5 = *puVar9;
    break;
  case 0x33:
    auVar12 = FUN_023f4698();
    in_stack_00000040 = auVar12._0_8_;
    in_stack_00000048 = CONCAT44(in_stack_00000048._4_4_,auVar12._8_4_);
    puVar9 = (undefined8 *)PTR_DAT_04230770;
LAB_0240ac4c:
    uVar5 = *puVar9;
    break;
  case 0x35:
    uVar11 = FUN_023f46f4();
    puVar9 = (undefined8 *)PTR_DAT_04236e58;
    goto LAB_0240ac70;
  case 0x37:
    uVar11 = FUN_023f437c();
    puVar9 = (undefined8 *)PTR_DAT_042301a0;
    goto LAB_0240ac70;
  case 0x3c:
    uVar11 = FUN_023f41fc();
    puVar9 = (undefined8 *)UnityEngine_EventSystems_ISubmitHandler_TypeInfo;
LAB_0240ac70:
    uVar5 = *puVar9;
    in_stack_00000040 = CONCAT44(param_2,uVar11);
    in_stack_00000048 = CONCAT44(param_4,param_3);
  }
LAB_0240aff0:
  unaff_x19 = (long *)thunk_FUN_01c49334(uVar5);
FUN_0240aff4:
  lVar10 = *unaff_x23;
LAB_0240affc:
  lVar10 = *(long *)(lVar10 + 8);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01c72394(lVar10);
  }
  if (unaff_x19 != (long *)0x0) {
    if (*(long *)(*unaff_x19 + 0x40) != *(long *)(lVar10 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(unaff_x19);
    }
    pcVar4 = (char *)thunk_FUN_01c49834();
    if (*(long *)(unaff_x22 + 0x28) == in_stack_00000088) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*pcVar4 != '\0');
  }
LAB_0240b064:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


