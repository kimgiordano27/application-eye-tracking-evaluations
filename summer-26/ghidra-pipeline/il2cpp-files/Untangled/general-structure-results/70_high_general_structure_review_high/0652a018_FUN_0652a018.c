/*
FUNCTION_NAME: FUN_0652a018
ENTRY_POINT: 0652a018
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


/* WARNING: Removing unreachable block (ram,0x0652ca10) */

long * FUN_0652a018(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *local_50;
  char local_44 [4];
  
  puVar2 = PTR_DAT_06d37990;
  if ((DAT_071ce4ce & 1) == 0) {
    FUN_02f07e70(UnityEngine_DisallowMultipleComponent___TypeInfo);
    FUN_02f07e70(UnityEngine_Display___TypeInfo);
    FUN_02f07e70(System_Collections_Generic_List<IGraphDebugData>_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d37990);
    FUN_02f07e70(System_Collections_Generic_IEnumerable<SortColumnDescription>_TypeInfo);
    FUN_02f07e70(double___TypeInfo);
    FUN_02f07e70(System_Dynamic_DynamicMetaObject___TypeInfo);
    FUN_02f07e70(ES3Internal_ES3Member___TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type___TypeInfo);
    FUN_02f07e70(ECE_EasyColliderAutoSkinnedBone___TypeInfo);
    FUN_02f07e70(System_Runtime_Serialization_ElementData___TypeInfo);
    FUN_02f07e70(PixelCrushers_DialogueSystem_Emphasis___TypeInfo);
    FUN_02f07e70(PixelCrushers_DialogueSystem_EmphasisSetting___TypeInfo);
    FUN_02f07e70(System_Text_Encoding___TypeInfo);
    FUN_02f07e70(ExitGames_Client_Photon_EnetChannel___TypeInfo);
    FUN_02f07e70(System_Linq_Expressions_Interpreter_EnterFaultInstruction___TypeInfo);
    FUN_02f07e70(System_Linq_Expressions_Interpreter_EnterFinallyInstruction___TypeInfo);
    FUN_02f07e70(PTR_DAT_06d02bd0);
    FUN_02f07e70(PTR_DAT_06d38610);
    FUN_02f07e70(System_Enum___TypeInfo);
    FUN_02f07e70(System_Runtime_CompilerServices_Ephemeron___TypeInfo);
    FUN_02f07e70(System_Globalization_EraInfo___TypeInfo);
    FUN_02f07e70(System_ComponentModel_EventDescriptor___TypeInfo);
    FUN_02f07e70(System_Runtime_Diagnostics_EventDescriptor___TypeInfo);
    FUN_02f07e70(System_Reflection_EventInfo___TypeInfo);
    FUN_02f07e70(System_Exception___TypeInfo);
    FUN_02f07e70(UnityEngine_ExecuteInEditMode___TypeInfo);
    FUN_02f07e70(System_Linq_Expressions_Expression___TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_Dependencies_NCalc_Expression___TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_StyleSheets_Syntax_Expression___TypeInfo);
    FUN_02f07e70(System_Data_ExpressionNode___TypeInfo);
    FUN_02f07e70(RootMotion_FinalIK_FABRIKChain___TypeInfo);
    FUN_02f07e70(PTR_DAT_06d06088);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    FUN_02f07e70(PTR_DAT_06d38180);
    FUN_02f07e70(PTR_DAT_06d39320);
    DAT_071ce4ce = 1;
  }
  puVar1 = PTR_DAT_06d39320;
  local_50 = (long *)0x0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar3 = FUN_0648b664(*(undefined8 *)puVar1,0);
  puVar2 = PTR_DAT_06d38610;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_03a02c24(lVar3,param_1,
               *(undefined8 *)System_Collections_Generic_List<IGraphDebugData>_TypeInfo);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *(long *)puVar2;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  local_44[0] = '\0';
  FUN_056681d8(uVar13,local_44,0);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar4 = System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose
                    (lVar3,param_1,&local_50,*(undefined8 *)UnityEngine_Display___TypeInfo);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar4 = FUN_0652de54(param_1);
    if ((uVar4 & 1) == 0) {
      plVar10 = (long *)thunk_FUN_02ef1808(*(undefined8 *)System_Enum___TypeInfo);
      UnityEngine_XR_OpenXR_Features_Meta_ARSessionFeature___cctor(plVar10,param_1);
      if (plVar10 == (long *)0x0) goto LAB_0652ca3c;
    }
    else {
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar3 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
      uVar5 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
      puVar1 = PTR_DAT_06d01eb0;
      uVar14 = *(undefined8 *)PTR_DAT_06d38180;
      if (*(int *)(*(long *)PTR_DAT_06d01eb0 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar14 = FUN_056109c0(uVar14,0);
      uVar4 = FUN_05619d34(uVar5,uVar14,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_0552fc74(param_1,0);
        if ((uVar4 & 1) == 0) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(long *)(lVar3 + 0x18) == 0) {
            uVar5 = *(undefined8 *)PixelCrushers_DialogueSystem_Emphasis___TypeInfo;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            plVar10 = (long *)FUN_056109c0(uVar5,0);
            plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,2);
            lVar3 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            if ((lVar3 != 0) &&
               (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
              uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
              FUN_02f07f94(uVar13,0);
            }
            if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            plVar6[4] = lVar3;
            thunk_FUN_02f411dc(plVar6 + 4,lVar3);
            lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
            if ((lVar3 != 0) &&
               (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
              uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
              FUN_02f07f94(uVar13,0);
            }
            if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            plVar6[5] = lVar3;
            thunk_FUN_02f411dc(plVar6 + 5,lVar3);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            uVar5 = (**(code **)(*plVar10 + 0x968))
                              (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
          }
          else {
            switch((int)*(long *)(lVar3 + 0x18)) {
            case 1:
              uVar5 = *(undefined8 *)PixelCrushers_DialogueSystem_EmphasisSetting___TypeInfo;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              plVar10 = (long *)FUN_056109c0(uVar5,0);
              plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,3);
              lVar7 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[4] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 4,lVar7);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[5] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 5,lVar3);
              lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[6] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 6,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar5 = (**(code **)(*plVar10 + 0x968))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
              break;
            case 2:
              uVar5 = *(undefined8 *)System_Text_Encoding___TypeInfo;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              plVar10 = (long *)FUN_056109c0(uVar5,0);
              plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,4);
              lVar7 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[4] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 4,lVar7);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[5] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 5,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[6] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 6,lVar3);
              lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[7] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 7,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar5 = (**(code **)(*plVar10 + 0x968))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
              break;
            case 3:
              uVar5 = *(undefined8 *)ExitGames_Client_Photon_EnetChannel___TypeInfo;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              plVar10 = (long *)FUN_056109c0(uVar5,0);
              plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,5);
              lVar7 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[4] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 4,lVar7);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[5] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 5,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[6] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 6,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[7] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 7,lVar3);
              lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[8] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 8,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar5 = (**(code **)(*plVar10 + 0x968))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
              break;
            case 4:
              uVar5 = *(undefined8 *)
                       System_Linq_Expressions_Interpreter_EnterFaultInstruction___TypeInfo;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              plVar10 = (long *)FUN_056109c0(uVar5,0);
              plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,6);
              lVar7 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[4] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 4,lVar7);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[5] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 5,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[6] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 6,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[7] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 7,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x38);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[8] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 8,lVar3);
              lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[9] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 9,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar5 = (**(code **)(*plVar10 + 0x968))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
              break;
            case 5:
              uVar5 = *(undefined8 *)
                       System_Linq_Expressions_Interpreter_EnterFinallyInstruction___TypeInfo;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              plVar10 = (long *)FUN_056109c0(uVar5,0);
              plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,7);
              lVar7 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[4] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 4,lVar7);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[5] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 5,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[6] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 6,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[7] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 7,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x38);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[8] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 8,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x40);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[9] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 9,lVar3);
              lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 7) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[10] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 10,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar5 = (**(code **)(*plVar10 + 0x968))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
              break;
            default:
              thunk_FUN_02f239f0(PTR_DAT_06d01f68);
              uVar13 = thunk_FUN_02ef1808();
              FUN_0560455c(uVar13,0);
              uVar5 = thunk_FUN_02f239f0(RootMotion_FinalIK_FBIKChain___TypeInfo);
                    /* WARNING: Subroutine does not return */
              FUN_02f07f94(uVar13,uVar5);
            }
          }
        }
        else {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(long *)(lVar3 + 0x18) == 0) {
            uVar5 = *(undefined8 *)UnityEngine_ExecuteInEditMode___TypeInfo;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            plVar10 = (long *)FUN_056109c0(uVar5,0);
            plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,1);
            lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            if ((lVar3 != 0) &&
               (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
              uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
              FUN_02f07f94(uVar13,0);
            }
            if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            plVar6[4] = lVar3;
            thunk_FUN_02f411dc(plVar6 + 4,lVar3);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            uVar5 = (**(code **)(*plVar10 + 0x968))
                              (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
          }
          else {
            switch((int)*(long *)(lVar3 + 0x18)) {
            case 1:
              uVar5 = *(undefined8 *)System_Linq_Expressions_Expression___TypeInfo;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              plVar10 = (long *)FUN_056109c0(uVar5,0);
              plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,2);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[4] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 4,lVar3);
              lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[5] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 5,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar5 = (**(code **)(*plVar10 + 0x968))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
              break;
            case 2:
              uVar5 = *(undefined8 *)Unity_VisualScripting_Dependencies_NCalc_Expression___TypeInfo;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              plVar10 = (long *)FUN_056109c0(uVar5,0);
              plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,3);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[4] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 4,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[5] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 5,lVar3);
              lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[6] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 6,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar5 = (**(code **)(*plVar10 + 0x968))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
              break;
            case 3:
              uVar5 = *(undefined8 *)UnityEngine_UIElements_StyleSheets_Syntax_Expression___TypeInfo
              ;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              plVar10 = (long *)FUN_056109c0(uVar5,0);
              plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,4);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[4] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 4,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[5] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 5,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[6] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 6,lVar3);
              lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[7] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 7,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar5 = (**(code **)(*plVar10 + 0x968))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
              break;
            case 4:
              uVar5 = *(undefined8 *)System_Data_ExpressionNode___TypeInfo;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              plVar10 = (long *)FUN_056109c0(uVar5,0);
              plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,5);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[4] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 4,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[5] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 5,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[6] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 6,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x38);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[7] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 7,lVar3);
              lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[8] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 8,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar5 = (**(code **)(*plVar10 + 0x968))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
              break;
            case 5:
              uVar5 = *(undefined8 *)RootMotion_FinalIK_FABRIKChain___TypeInfo;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              plVar10 = (long *)FUN_056109c0(uVar5,0);
              plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,6);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[4] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 4,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[5] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 5,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[6] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 6,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x38);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[7] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 7,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x40);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[8] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 8,lVar3);
              lVar3 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[9] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 9,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar5 = (**(code **)(*plVar10 + 0x968))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
              break;
            default:
              thunk_FUN_02f239f0(PTR_DAT_06d01f68);
              uVar13 = thunk_FUN_02ef1808();
              FUN_0560455c(uVar13,0);
              uVar5 = thunk_FUN_02f239f0(RootMotion_FinalIK_FBIKChain___TypeInfo);
                    /* WARNING: Subroutine does not return */
              FUN_02f07f94(uVar13,uVar5);
            }
          }
        }
      }
      else {
        uVar4 = FUN_0552fc74(param_1,0);
        if ((uVar4 & 1) == 0) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(long *)(lVar3 + 0x18) == 0) {
            uVar5 = *(undefined8 *)double___TypeInfo;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            plVar10 = (long *)FUN_056109c0(uVar5,0);
            plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,1);
            lVar3 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            if ((lVar3 != 0) &&
               (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
              uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
              FUN_02f07f94(uVar13,0);
            }
            if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            plVar6[4] = lVar3;
            thunk_FUN_02f411dc(plVar6 + 4,lVar3);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            uVar5 = (**(code **)(*plVar10 + 0x968))
                              (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
          }
          else {
            switch((int)*(long *)(lVar3 + 0x18)) {
            case 1:
              uVar5 = *(undefined8 *)System_Dynamic_DynamicMetaObject___TypeInfo;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              plVar10 = (long *)FUN_056109c0(uVar5,0);
              plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,2);
              lVar7 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[4] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 4,lVar7);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[5] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 5,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar5 = (**(code **)(*plVar10 + 0x968))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
              break;
            case 2:
              uVar5 = *(undefined8 *)ES3Internal_ES3Member___TypeInfo;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              plVar10 = (long *)FUN_056109c0(uVar5,0);
              plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,3);
              lVar7 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[4] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 4,lVar7);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[5] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 5,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[6] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 6,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar5 = (**(code **)(*plVar10 + 0x968))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
              break;
            case 3:
              uVar5 = *(undefined8 *)ES3Types_ES3Type___TypeInfo;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              plVar10 = (long *)FUN_056109c0(uVar5,0);
              plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,4);
              lVar7 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[4] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 4,lVar7);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[5] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 5,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[6] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 6,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[7] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 7,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar5 = (**(code **)(*plVar10 + 0x968))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
              break;
            case 4:
              uVar5 = *(undefined8 *)ECE_EasyColliderAutoSkinnedBone___TypeInfo;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              plVar10 = (long *)FUN_056109c0(uVar5,0);
              plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,5);
              lVar7 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[4] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 4,lVar7);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[5] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 5,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[6] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 6,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[7] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 7,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x38);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[8] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 8,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar5 = (**(code **)(*plVar10 + 0x968))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
              break;
            case 5:
              uVar5 = *(undefined8 *)System_Runtime_Serialization_ElementData___TypeInfo;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              plVar10 = (long *)FUN_056109c0(uVar5,0);
              plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,6);
              lVar7 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[4] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 4,lVar7);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[5] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 5,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[6] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 6,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[7] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 7,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x38);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[8] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 8,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x40);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[9] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 9,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar5 = (**(code **)(*plVar10 + 0x968))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
              break;
            default:
              thunk_FUN_02f239f0(PTR_DAT_06d01f68);
              uVar13 = thunk_FUN_02ef1808();
              FUN_0560455c(uVar13,0);
              uVar5 = thunk_FUN_02f239f0(RootMotion_FinalIK_FBIKChain___TypeInfo);
                    /* WARNING: Subroutine does not return */
              FUN_02f07f94(uVar13,uVar5);
            }
          }
        }
        else {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(long *)(lVar3 + 0x18) == 0) {
            uVar5 = *(undefined8 *)System_Exception___TypeInfo;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar5 = FUN_056109c0(uVar5,0);
          }
          else {
            switch((int)*(long *)(lVar3 + 0x18)) {
            case 1:
              uVar5 = *(undefined8 *)System_Runtime_CompilerServices_Ephemeron___TypeInfo;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              plVar10 = (long *)FUN_056109c0(uVar5,0);
              plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,1);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[4] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 4,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar5 = (**(code **)(*plVar10 + 0x968))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
              break;
            case 2:
              uVar5 = *(undefined8 *)System_Globalization_EraInfo___TypeInfo;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              plVar10 = (long *)FUN_056109c0(uVar5,0);
              plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,2);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[4] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 4,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[5] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 5,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar5 = (**(code **)(*plVar10 + 0x968))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
              break;
            case 3:
              uVar5 = *(undefined8 *)System_ComponentModel_EventDescriptor___TypeInfo;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              plVar10 = (long *)FUN_056109c0(uVar5,0);
              plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,3);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[4] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 4,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[5] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 5,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[6] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 6,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar5 = (**(code **)(*plVar10 + 0x968))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
              break;
            case 4:
              uVar5 = *(undefined8 *)System_Runtime_Diagnostics_EventDescriptor___TypeInfo;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              plVar10 = (long *)FUN_056109c0(uVar5,0);
              plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,4);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[4] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 4,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[5] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 5,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[6] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 6,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x38);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[7] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 7,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar5 = (**(code **)(*plVar10 + 0x968))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
              break;
            case 5:
              uVar5 = *(undefined8 *)System_Reflection_EventInfo___TypeInfo;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              plVar10 = (long *)FUN_056109c0(uVar5,0);
              plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,5);
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x20);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[4] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 4,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x28);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[5] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 5,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[6] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 6,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x38);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar7 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[7] = lVar7;
              thunk_FUN_02f411dc(plVar6 + 7,lVar7);
              if (*(uint *)(lVar3 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar8 = *(long **)(lVar3 + 0x40);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                FUN_02f07f94(uVar13,0);
              }
              if (*(uint *)(plVar6 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              plVar6[8] = lVar3;
              thunk_FUN_02f411dc(plVar6 + 8,lVar3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar5 = (**(code **)(*plVar10 + 0x968))
                                (plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x970));
              break;
            default:
              thunk_FUN_02f239f0(PTR_DAT_06d01f68);
              uVar13 = thunk_FUN_02ef1808();
              FUN_0560455c(uVar13,0);
              uVar5 = thunk_FUN_02f239f0(RootMotion_FinalIK_FBIKChain___TypeInfo);
                    /* WARNING: Subroutine does not return */
              FUN_02f07f94(uVar13,uVar5);
            }
          }
        }
      }
      plVar10 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,1);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar3 = thunk_FUN_02ef170c(param_1,*(undefined8 *)(*plVar10 + 0x40));
      if (lVar3 == 0) {
        uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar13,0);
      }
      if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      plVar10[4] = (long)param_1;
      thunk_FUN_02f411dc(plVar10 + 4,param_1);
      lVar3 = FUN_0562cc08(uVar5,plVar10,0);
      if (lVar3 == 0) {
LAB_0652ca3c:
        local_50 = (long *)0x0;
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar5 = *(undefined8 *)System_Collections_Generic_IEnumerable<SortColumnDescription>_TypeInfo;
      plVar10 = (long *)thunk_FUN_02ef170c(lVar3,uVar5);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(lVar3,uVar5);
      }
    }
    lVar3 = *plVar10;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    local_50 = plVar10;
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)System_Collections_Generic_IEnumerable<SortColumnDescription>_TypeInfo) {
          puVar11 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0652c98c;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_02eea86c(plVar10,*(long *)
                                    System_Collections_Generic_IEnumerable<SortColumnDescription>_TypeInfo
                           ,0);
LAB_0652c98c:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_04c7462c(lVar3,param_1,local_50,
                 *(undefined8 *)UnityEngine_DisallowMultipleComponent___TypeInfo);
  }
  plVar10 = local_50;
  if (local_44[0] != '\0') {
    thunk_FUN_02eb9f78(uVar13,0);
  }
  return plVar10;
}


