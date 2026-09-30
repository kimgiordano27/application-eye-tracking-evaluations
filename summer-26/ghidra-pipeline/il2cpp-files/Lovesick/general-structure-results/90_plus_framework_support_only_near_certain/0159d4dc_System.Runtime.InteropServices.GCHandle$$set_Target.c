/*
FUNCTION_NAME: System.Runtime.InteropServices.GCHandle$$set_Target
ENTRY_POINT: 0159d4dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 130
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


long System_Runtime_InteropServices_GCHandle__set_Target(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  long *unaff_x20;
  ulong uVar18;
  int iVar19;
  ulong unaff_x21;
  long unaff_x25;
  long unaff_x27;
  int iVar20;
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  FUN_00d5941c();
  puVar2 = Method_Obi_ObiNativeList<HeightFieldHeader>_Dispose__;
  pcVar7 = (char *)thunk_FUN_00d32ed4();
  if (*pcVar7 == '\0') {
    lVar8 = *(long *)(*(long *)puVar2 + 0x20);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_00d5941c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_00d5941c();
    }
    pcVar7 = (char *)thunk_FUN_00d32ed4(unaff_x25 + 0x1c,*(undefined8 *)(lVar8 + 0x80));
    puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if (*pcVar7 == '\0') {
      uVar9 = FUN_01586560();
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      uVar14 = FUN_02681b9c(uVar9,0,0);
      if ((uVar14 & 1) != 0) {
        lVar8 = FUN_01586560();
        return lVar8;
      }
      thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
      uVar9 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar10 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<PathFilter>_GetEnumerator__
                                 );
      FUN_017713a8(uVar9,uVar10,0);
      uVar10 = thunk_FUN_00d48444(System_Collections_Generic_List<Ray>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar9,uVar10);
    }
  }
  lVar8 = *(long *)(*(long *)puVar2 + 0x20);
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_00d5941c();
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_00d5941c();
  }
  pcVar7 = (char *)thunk_FUN_00d32ed4(unaff_x25 + 0x1c,*(undefined8 *)(lVar8 + 0x80));
  if (*pcVar7 == '\0') {
LAB_0159d5c0:
    bVar1 = false;
    iVar20 = 0x18;
    iVar19 = 0x24;
  }
  else {
    if ((unaff_x21 & 1) == 0) {
      lVar8 = *(long *)(*unaff_x20 + 0x20);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      pcVar7 = (char *)thunk_FUN_00d32ed4();
      if (*pcVar7 != '\0') goto LAB_0159d5c0;
    }
    if (*(long *)(unaff_x25 + 0x50) == 0) goto LAB_0159da2c;
    iVar20 = *(int *)(*(long *)(unaff_x25 + 0x50) + 0x18);
    iVar19 = iVar20 * 3 + -6;
    bVar1 = true;
  }
  puVar6 = 
  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
  puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
  puVar4 = Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__;
  puVar3 = OVRPlugin_OVRP_1_79_0_TypeInfo;
  puVar2 = System_Runtime_Serialization_FormatterConverter_TypeInfo;
  uVar9 = FUN_00da4fb8(*(undefined8 *)
                        Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                       ,iVar20);
  in_stack_00000058 = uVar9;
  uVar10 = FUN_00da4fb8(*(undefined8 *)puVar3,iVar20);
  in_stack_00000050 = uVar10;
  uVar11 = FUN_00da4fb8(*(undefined8 *)puVar6,iVar20);
  in_stack_00000048 = uVar11;
  uVar12 = FUN_00da4fb8(*(undefined8 *)puVar4,iVar20);
  in_stack_00000040 = uVar12;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar5,iVar19);
  in_stack_00000038 = uVar13;
  if (unaff_x27 == 0) {
    uVar14 = 0;
  }
  else {
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar14 = FUN_017726a0(8,*(undefined4 *)(unaff_x27 + 0x18),0);
    uVar14 = uVar14 & 0xffffffff;
  }
  plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,uVar14);
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__;
  in_stack_00000030 = plVar15;
  if (0 < (int)uVar14) {
    uVar18 = 0;
    do {
      lVar8 = FUN_00da4fb8(*(undefined8 *)puVar2,iVar20);
      if (plVar15 == (long *)0x0) goto LAB_0159da2c;
      if ((lVar8 != 0) &&
         (lVar16 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar15 + 0x40)), lVar16 == 0)) {
        uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar9,0);
      }
      if (*(uint *)(plVar15 + 3) <= uVar18) goto LAB_0159da30;
      plVar15[uVar18 + 4] = lVar8;
      uVar18 = uVar18 + 1;
    } while (uVar14 != uVar18);
  }
  if (*(int *)(*(long *)System_Text_RegularExpressions_Match_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar2 = PTR_DAT_033f3618;
  if (bVar1) {
    FUN_015a7d40(unaff_x25,&stack0x00000058,&stack0x00000050,&stack0x00000048,&stack0x00000040,
                 &stack0x00000038,&stack0x00000030,unaff_x27);
  }
  else {
    FUN_015a828c(unaff_x25,&stack0x00000058,&stack0x00000050,&stack0x00000048,&stack0x00000040,
                 &stack0x00000038,&stack0x00000030,unaff_x27);
  }
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar8 != 0) {
    FUN_02669c18(lVar8,0);
    uVar17 = FUN_0268b6ac(unaff_x25,0);
    FUN_0268b75c(lVar8,uVar17,0);
    FUN_0266b9c4(lVar8,uVar9,0);
    FUN_0266c1dc(lVar8,uVar10,0);
    FUN_0266db2c(lVar8,uVar13,0);
    FUN_0266ba70(lVar8,uVar11,0);
    FUN_0266bb1c(lVar8,uVar12,0);
    if (0 < (int)uVar14) {
      uVar18 = 0;
      do {
        switch(uVar18 & 0xffffffff) {
        case 0:
          if (plVar15 == (long *)0x0) goto LAB_0159da2c;
          if (*(uint *)(plVar15 + 3) <= uVar18) {
LAB_0159da30:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          FUN_0266bbc8(lVar8,plVar15[uVar18 + 4],0);
          break;
        case 1:
          if (plVar15 == (long *)0x0) goto LAB_0159da2c;
          if (*(uint *)(plVar15 + 3) <= uVar18) goto LAB_0159da30;
          FUN_0266bc74(lVar8,plVar15[uVar18 + 4],0);
          break;
        case 2:
          if (plVar15 == (long *)0x0) goto LAB_0159da2c;
          if (*(uint *)(plVar15 + 3) <= uVar18) goto LAB_0159da30;
          FUN_0266bd20(lVar8,plVar15[uVar18 + 4],0);
          break;
        case 3:
          if (plVar15 == (long *)0x0) goto LAB_0159da2c;
          if (*(uint *)(plVar15 + 3) <= uVar18) goto LAB_0159da30;
          UnityEngine_UIElements_StylePropertyAnimationSystem__StartTransition
                    (lVar8,plVar15[uVar18 + 4],0);
          break;
        case 4:
          if (plVar15 == (long *)0x0) goto LAB_0159da2c;
          if (*(uint *)(plVar15 + 3) <= uVar18) goto LAB_0159da30;
          FUN_0266be78(lVar8,plVar15[uVar18 + 4],0);
          break;
        case 5:
          if (plVar15 == (long *)0x0) goto LAB_0159da2c;
          if (*(uint *)(plVar15 + 3) <= uVar18) goto LAB_0159da30;
          FUN_0266bf24(lVar8,plVar15[uVar18 + 4],0);
          break;
        case 6:
          if (plVar15 == (long *)0x0) goto LAB_0159da2c;
          if (*(uint *)(plVar15 + 3) <= uVar18) goto LAB_0159da30;
          FUN_0266bfd0(lVar8,plVar15[uVar18 + 4],0);
          break;
        case 7:
          if (plVar15 == (long *)0x0) goto LAB_0159da2c;
          if (*(uint *)(plVar15 + 3) <= uVar18) goto LAB_0159da30;
          FUN_0266c07c(lVar8,plVar15[uVar18 + 4],0);
        }
        uVar18 = uVar18 + 1;
      } while (uVar14 != uVar18);
    }
    uVar9 = FUN_0268b6ac(unaff_x25,0);
    FUN_0268b75c(lVar8,uVar9,0);
    return lVar8;
  }
LAB_0159da2c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


