/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Rectf>
ENTRY_POINT: 023f7eec
PROGRAM: gunraiders-libil2cpp.so
SCORE: 155
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_8;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_9
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Rectf>(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x19;
  undefined4 unaff_w20;
  byte unaff_w21;
  long *unaff_x22;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  
  FUN_01c5d288();
  FUN_01c5d288(Mono_ISystemDependencyProvider_TypeInfo);
  FUN_01c5d288(PTR_DAT_04230588);
  FUN_01c5d288(PTR_DAT_042304e0);
  FUN_01c5d288(Oculus_Platform_Models_MatchmakingAdminSnapshot_TypeInfo);
  FUN_01c5d288(Oculus_Platform_Models_MatchmakingAdminSnapshotCandidate_TypeInfo);
  FUN_01c5d288(Oculus_Platform_Models_MatchmakingAdminSnapshotCandidateList_TypeInfo);
  FUN_01c5d288(Oculus_Platform_Models_MatchmakingBrowseResult_TypeInfo);
  FUN_01c5d288(Oculus_Platform_Models_MatchmakingEnqueueResult_TypeInfo);
  FUN_01c5d288(Oculus_Platform_Models_MatchmakingEnqueueResultAndRoom_TypeInfo);
  FUN_01c5d288(Oculus_Platform_Models_MatchmakingEnqueuedUser_TypeInfo);
  FUN_01c5d288(Oculus_Platform_Models_MatchmakingEnqueuedUserList_TypeInfo);
  FUN_01c5d288(Oculus_Platform_Models_MatchmakingStats_TypeInfo);
  FUN_01c5d288(UnityEngine_Material_TypeInfo);
  FUN_01c5d288(UnityEngine_TextCore_Text_MaterialManager_TypeInfo);
  FUN_01c5d288(UnityEngine_MaterialPropertyBlock_TypeInfo);
  FUN_01c5d288(UnityEngine_Rendering_MaterialQualityUtilities_TypeInfo);
  FUN_01c5d288(TMPro_MaterialReferenceManager_TypeInfo);
  FUN_01c5d288(UnityEngine_TextCore_Text_MaterialReferenceManager_TypeInfo);
  FUN_01c5d288(UnityEngine_ProBuilder_MaterialUtility_TypeInfo);
  FUN_01c5d288(System_Math_TypeInfo);
  FUN_01c5d288(PTR_DAT_0422fa18);
  FUN_01c5d288(PTR_DAT_0422fc38);
  FUN_01c5d288(PTR_DAT_042306a0);
  FUN_01c5d288(PTR_DAT_042305a8);
  FUN_01c5d288(PTR_DAT_04230670);
  FUN_01c5d288(PTR_DAT_042306f8);
  FUN_01c5d288(PTR_DAT_042301a8);
  FUN_01c5d288(PTR_DAT_04230770);
  FUN_01c5d288(PTR_DAT_042301b0);
  FUN_01c5d288(PTR_DAT_04236e58);
  if (*unaff_x22 == 0) {
    FUN_01c723f0();
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000068 = 0;
  if (0x3c < unaff_w21) {
    if (unaff_w21 < 0x44) {
      if (unaff_w21 == 0x3e) {
        in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
        plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
        if (plVar2 == (long *)0x0) goto LAB_023f8a90;
        if (*(long *)(*plVar2 + 0x40) ==
            *(long *)(*(long *)System_Text_RegularExpressions_Match_TypeInfo + 0x40)) {
          puVar4 = (undefined4 *)thunk_FUN_01c49834();
          FUN_023f392c(*puVar4);
          return;
        }
        goto LAB_023f8a94;
      }
      if (unaff_w21 == 0x41) {
        in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
        plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
        if (plVar2 == (long *)0x0) goto LAB_023f8a90;
        if (*(long *)(*plVar2 + 0x40) ==
            *(long *)(*(long *)Mono_ISystemDependencyProvider_TypeInfo + 0x40)) {
          puVar4 = (undefined4 *)thunk_FUN_01c49834();
          FUN_023f3d00(*puVar4,puVar4[1],puVar4[2],puVar4[3]);
          return;
        }
        goto LAB_023f8a94;
      }
      if (unaff_w21 == 0x43) {
        in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
        plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
        if (plVar2 == (long *)0x0) goto LAB_023f8a90;
        if (*(long *)(*plVar2 + 0x40) ==
            *(long *)(*(long *)System_Text_RegularExpressions_MatchSparse_TypeInfo + 0x40)) {
          puVar3 = (undefined8 *)thunk_FUN_01c49834();
          FUN_023f3d90(*puVar3,puVar3[1]);
          return;
        }
        goto LAB_023f8a94;
      }
    }
    else if (unaff_w21 < 0x4f) {
      if (unaff_w21 == 0x46) {
        in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
        plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
        if (plVar2 == (long *)0x0) goto LAB_023f8a90;
        if (*(long *)(*plVar2 + 0x40) ==
            *(long *)(*(long *)System_Text_RegularExpressions_MatchCollection_TypeInfo + 0x40)) {
          puVar3 = (undefined8 *)thunk_FUN_01c49834();
          FUN_023f3b6c(*puVar3);
          return;
        }
        goto LAB_023f8a94;
      }
      if (unaff_w21 == 0x4e) {
        in_stack_00000008 = unaff_w20;
        plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000008);
        if (plVar2 == (long *)0x0) goto LAB_023f8a90;
        if (*(long *)(*plVar2 + 0x40) == *(long *)(*(long *)PTR_DAT_04236d90 + 0x40)) {
          puVar3 = (undefined8 *)thunk_FUN_01c49834();
          in_stack_00000048 = puVar3[5];
          in_stack_00000040 = puVar3[4];
          in_stack_00000058 = puVar3[7];
          in_stack_00000050 = puVar3[6];
          in_stack_00000028 = puVar3[1];
          in_stack_00000020 = *puVar3;
          in_stack_00000038 = puVar3[3];
          in_stack_00000030 = puVar3[2];
          FUN_023f3a5c(&stack0x00000020);
          return;
        }
        goto LAB_023f8a94;
      }
    }
    else {
      if (unaff_w21 == 0x50) {
        in_stack_00000008 = unaff_w20;
        plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000008);
        if (plVar2 == (long *)0x0) goto LAB_023f8a90;
        if (*(long *)(*plVar2 + 0x40) ==
            *(long *)(*(long *)Photon_Realtime_MatchMakingCallbacksContainer_TypeInfo + 0x40)) {
          puVar3 = (undefined8 *)thunk_FUN_01c49834();
          in_stack_00000030 = puVar3[2];
          in_stack_00000028 = puVar3[1];
          in_stack_00000020 = *puVar3;
          FUN_023f3bf0(&stack0x00000020);
          return;
        }
        goto LAB_023f8a94;
      }
      if (unaff_w21 == 0x53) {
        in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
        plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
        if (plVar2 == (long *)0x0) goto LAB_023f8a90;
        if (*(long *)(*plVar2 + 0x40) ==
            *(long *)(*(long *)System_Text_RegularExpressions_MatchEvaluator_TypeInfo + 0x40)) {
          puVar4 = (undefined4 *)thunk_FUN_01c49834();
          System_Array__InternalArray__ICollection_CopyTo<RaycastHit2D>
                    (*puVar4,puVar4[1],puVar4[2],puVar4[3]);
          return;
        }
        goto LAB_023f8a94;
      }
    }
switchD_023f80a8_caseD_6:
    in_stack_00000020 = CONCAT71(in_stack_00000020._1_7_,unaff_w21);
    uVar7 = thunk_FUN_01c273e8(UnityEngine_UIElements_LayoutData_TypeInfo);
    uVar8 = thunk_FUN_01c49334(uVar7,&stack0x00000020);
    thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
    uVar7 = thunk_FUN_01c496e0();
    uVar9 = thunk_FUN_01c273e8(UnityEngine_Events_InvokableCall_TypeInfo);
    FUN_03244804(uVar7,uVar9,uVar8,0,0);
LAB_023f8aec:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar7);
  }
  if (unaff_w21 < 0x15) {
    switch(unaff_w21) {
    case 0:
      uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
      thunk_FUN_01c273e8(PTR_DAT_0422fb28);
      FUN_019b5f60();
      uVar8 = FUN_032e04b8(uVar7,0);
      thunk_FUN_01c273e8(UnityEngine_ProBuilder_Math_TypeInfo);
      uVar7 = thunk_FUN_01c496e0();
      FUN_01cfe284(uVar7,uVar8,0);
      goto LAB_023f8aec;
    case 1:
      in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
      if (plVar2 == (long *)0x0) goto LAB_023f8a90;
      if (*(long *)(*plVar2 + 0x40) == *(long *)(*(long *)PTR_DAT_04230588 + 0x40)) {
        puVar5 = (undefined1 *)thunk_FUN_01c49834();
        FUN_023f3e1c(*puVar5);
        return;
      }
      break;
    case 2:
      in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
      if (plVar2 == (long *)0x0) goto LAB_023f8a90;
      if (*(long *)(*plVar2 + 0x40) == *(long *)(*(long *)PTR_DAT_042303a0 + 0x40)) {
        puVar5 = (undefined1 *)thunk_FUN_01c49834();
        FUN_023f3834(*puVar5);
        return;
      }
      break;
    case 3:
      in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
      if (plVar2 == (long *)0x0) goto LAB_023f8a90;
      if (*(long *)(*plVar2 + 0x40) == *(long *)(*(long *)PTR_DAT_042305d0 + 0x40)) {
        puVar6 = (undefined2 *)thunk_FUN_01c49834();
        FUN_03248b4c(*puVar6,0);
        return;
      }
      break;
    case 4:
      in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
      if (plVar2 == (long *)0x0) goto LAB_023f8a90;
      if (*(long *)(*plVar2 + 0x40) == *(long *)(*(long *)PTR_DAT_042306a0 + 0x40)) {
        puVar6 = (undefined2 *)thunk_FUN_01c49834();
        FUN_03248c78(*puVar6,0);
        return;
      }
      break;
    case 5:
      in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
      if (plVar2 == (long *)0x0) goto LAB_023f8a90;
      if (*(long *)(*plVar2 + 0x40) == *(long *)(*(long *)PTR_DAT_0422fd80 + 0x40)) {
        puVar4 = (undefined4 *)thunk_FUN_01c49834();
        FUN_03248bb0(*puVar4,0);
        return;
      }
      break;
    default:
      goto switchD_023f80a8_caseD_6;
    case 10:
      in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
      if (plVar2 == (long *)0x0) goto LAB_023f8a90;
      if (*(long *)(*plVar2 + 0x40) == *(long *)(*(long *)PTR_DAT_042305a8 + 0x40)) {
        puVar4 = (undefined4 *)thunk_FUN_01c49834();
        FUN_03248cdc(*puVar4,0);
        return;
      }
      break;
    case 0xf:
      in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
      if (*(int *)(*(long *)PTR_DAT_0422fa18 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa18);
      }
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)0x0;
      }
      else if (*plVar2 != *(long *)PTR_DAT_0422fc38) {
        plVar2 = (long *)0x0;
      }
      FUN_01cfb43c(plVar2,0);
      return;
    case 0x14:
      in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
      plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
      if (plVar2 == (long *)0x0) goto LAB_023f8a90;
      if (*(long *)(*plVar2 + 0x40) == *(long *)(*(long *)PTR_DAT_042304e0 + 0x40)) {
        puVar4 = (undefined4 *)thunk_FUN_01c49834();
        FUN_03248e24(*puVar4,0);
        return;
      }
    }
LAB_023f8a94:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748();
  }
  switch(unaff_w21) {
  case 0x19:
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
    plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
    if (plVar2 == (long *)0x0) {
LAB_023f8a90:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_042304a8 + 0x40)) goto LAB_023f8a94;
    puVar3 = (undefined8 *)thunk_FUN_01c49834();
    FUN_03248e90(*puVar3,0);
    break;
  default:
    goto switchD_023f80a8_caseD_6;
  case 0x1b:
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
    plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
    if (plVar2 == (long *)0x0) goto LAB_023f8a90;
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_04230108 + 0x40)) goto LAB_023f8a94;
    puVar3 = (undefined8 *)thunk_FUN_01c49834();
    FUN_023f39b0(*puVar3,puVar3[1]);
    break;
  case 0x1c:
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
    plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
    puVar1 = PTR_DAT_04230358;
    if (plVar2 == (long *)0x0) goto LAB_023f8a90;
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_04230358 + 0x40)) goto LAB_023f8a94;
    puVar3 = (undefined8 *)thunk_FUN_01c49834();
    in_stack_00000018 = puVar3[1];
    in_stack_00000010 = *puVar3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03763528(&stack0x00000010,0);
    break;
  case 0x1e:
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
    plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
    if (plVar2 == (long *)0x0) goto LAB_023f8a90;
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_04230478 + 0x40)) goto LAB_023f8a94;
    puVar3 = (undefined8 *)thunk_FUN_01c49834();
    uVar7 = *puVar3;
    goto LAB_023f882c;
  case 0x20:
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
    plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
    if (plVar2 == (long *)0x0) goto LAB_023f8a90;
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_04230670 + 0x40)) goto LAB_023f8a94;
    puVar3 = (undefined8 *)thunk_FUN_01c49834();
    FUN_03248dc0(*puVar3,0);
    break;
  case 0x21:
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
    plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
    if (plVar2 == (long *)0x0) goto LAB_023f8a90;
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_042303d0 + 0x40)) goto LAB_023f8a94;
    puVar6 = (undefined2 *)thunk_FUN_01c49834();
    FUN_03248ae8(*puVar6,0);
    break;
  case 0x23:
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
    plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
    if (plVar2 == (long *)0x0) goto LAB_023f8a90;
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_0422fa08 + 0x40)) goto LAB_023f8a94;
    puVar5 = (undefined1 *)thunk_FUN_01c49834();
    FUN_03248a80(*puVar5,0);
    break;
  case 0x25:
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
    plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
    puVar1 = PTR_DAT_0422f960;
    if (plVar2 == (long *)0x0) goto LAB_023f8a90;
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_0422f960 + 0x40)) goto LAB_023f8a94;
    puVar3 = (undefined8 *)thunk_FUN_01c49834();
    in_stack_00000068 = *puVar3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_032b1574(&stack0x00000068,0);
LAB_023f882c:
    FUN_03248c14(uVar7,0);
    break;
  case 0x28:
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
    uVar7 = thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
    thunk_FUN_01c495e4(uVar7,*(undefined8 *)PTR_DAT_0422f930);
    break;
  case 0x2d:
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
    plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
    if (plVar2 == (long *)0x0) goto LAB_023f8a90;
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_042301a8 + 0x40)) goto LAB_023f8a94;
    puVar4 = (undefined4 *)thunk_FUN_01c49834();
    FUN_023f3e84(*puVar4,puVar4[1]);
    break;
  case 0x2f:
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
    plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
    if (plVar2 == (long *)0x0) goto LAB_023f8a90;
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_042306f8 + 0x40)) goto LAB_023f8a94;
    puVar3 = (undefined8 *)thunk_FUN_01c49834();
    FUN_023f3f08(*puVar3);
    break;
  case 0x32:
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
    plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
    if (plVar2 == (long *)0x0) goto LAB_023f8a90;
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_042301b0 + 0x40)) goto LAB_023f8a94;
    puVar4 = (undefined4 *)thunk_FUN_01c49834();
    FUN_023f3f8c(*puVar4,puVar4[1],puVar4[2]);
    break;
  case 0x33:
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
    plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
    if (plVar2 == (long *)0x0) goto LAB_023f8a90;
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_04230770 + 0x40)) goto LAB_023f8a94;
    puVar3 = (undefined8 *)thunk_FUN_01c49834();
    FUN_023f401c(*puVar3,*(undefined4 *)(puVar3 + 1));
    break;
  case 0x35:
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
    plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
    if (plVar2 == (long *)0x0) goto LAB_023f8a90;
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_04236e58 + 0x40)) goto LAB_023f8a94;
    puVar4 = (undefined4 *)thunk_FUN_01c49834();
    FUN_023f40ac(*puVar4,puVar4[1],puVar4[2],puVar4[3]);
    break;
  case 0x37:
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
    plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
    if (plVar2 == (long *)0x0) goto LAB_023f8a90;
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_042301a0 + 0x40)) goto LAB_023f8a94;
    puVar4 = (undefined4 *)thunk_FUN_01c49834();
    FUN_023f3adc(*puVar4,puVar4[1],puVar4[2],puVar4[3]);
    break;
  case 0x3c:
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w20);
    plVar2 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*unaff_x22 + 8),&stack0x00000020);
    if (plVar2 == (long *)0x0) goto LAB_023f8a90;
    if (*(long *)(*plVar2 + 0x40) !=
        *(long *)(*(long *)UnityEngine_EventSystems_ISubmitHandler_TypeInfo + 0x40))
    goto LAB_023f8a94;
    puVar4 = (undefined4 *)thunk_FUN_01c49834();
    FUN_023f389c(*puVar4,puVar4[1],puVar4[2],puVar4[3]);
  }
  return;
}


