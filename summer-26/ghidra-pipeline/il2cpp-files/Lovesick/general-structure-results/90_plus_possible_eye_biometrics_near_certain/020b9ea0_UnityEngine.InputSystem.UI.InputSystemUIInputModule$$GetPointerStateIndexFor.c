/*
FUNCTION_NAME: UnityEngine.InputSystem.UI.InputSystemUIInputModule$$GetPointerStateIndexFor
ENTRY_POINT: 020b9ea0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 240
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;frame_behavior;structure_combo;active_gaze_retrieval;active_gaze_interaction;possible_biometrics
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;possible_biometric_feature_from_active_eye_context;functionality_gaze_interaction_hits_1;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x020ba258) */
/* WARNING: Removing unreachable block (ram,0x020ba1b0) */
/* WARNING: Removing unreachable block (ram,0x020ba02c) */
/* WARNING: Removing unreachable block (ram,0x020ba1b4) */
/* WARNING: Removing unreachable block (ram,0x020ba26c) */
/* WARNING: Removing unreachable block (ram,0x020ba2b8) */

bool UnityEngine_InputSystem_UI_InputSystemUIInputModule__GetPointerStateIndexFor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  long *unaff_x23;
  int iVar13;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  char in_stack_00000048;
  int iStack000000000000004c;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(StringLiteral_161);
  thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_GetEqualityComparisonOperator__);
  *(undefined1 *)(unaff_x20 + 0xe78) = 1;
  in_stack_00000048 = '\0';
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000030 = (long *)0x0;
  iStack000000000000004c = 0;
  uVar12 = *(undefined8 *)(unaff_x19 + 0x10);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  UnityEngine_InputSystem_XR_XRHMD__get_rightEyePosition(uVar12,0,&stack0x0000004c,0);
  thunk_FUN_00d41c74(*(undefined8 *)(unaff_x19 + 0x10),2,&stack0x0000004c,0);
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if (lVar7 != 0) {
    in_stack_00000048 = '\0';
    FUN_017d75a8(lVar7,&stack0x00000048,0);
    puVar5 = Method_System_Convert_FromBase64CharArray__;
    puVar4 = Mono_RuntimePropertyHandle_TypeInfo;
    puVar3 = System_TimeZoneInfo_TZifType___TypeInfo;
    puVar2 = System_Collections_Generic_List<ObiStructuralElement>_TypeInfo;
    puVar1 = System_Collections_Generic_HashSet<HandJointId>_TypeInfo;
    iVar13 = 0;
    while( true ) {
      puVar6 = Method_UnityEngine_InputSystem_RemoteInputPlayerConnection_OnStartSending__;
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(int *)(lVar8 + 0x18) < 1) break;
      if (iVar13 == 10) {
        lVar8 = *(long *)Method_UnityEngine_InputSystem_RemoteInputPlayerConnection_OnStartSending__
        ;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar8 = *(long *)puVar6;
        }
        puVar6 = StringLiteral_161;
        puVar1 = UnityEngine_InputSystem_UI_TrackedDeviceRaycaster_TypeInfo;
        if (**(char **)(lVar8 + 0xb8) != '\0') {
          plVar11 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                              );
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0160aa4c(plVar11,0);
          FUN_0160c8e8(plVar11,*(undefined8 *)
                                Method_System_Linq_Expressions_Expression_GetEqualityComparisonOperator__
                       ,0);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            FUN_01323390(*(long *)(unaff_x19 + 0x20),&stack0x00000018,*(undefined8 *)puVar2);
            in_stack_00000038 = in_stack_00000020;
            in_stack_00000030 = in_stack_00000018;
            in_stack_00000040 = in_stack_00000028;
            while( true ) {
              uVar10 = FUN_012b894c(&stack0x00000030,*(undefined8 *)puVar5);
              if ((uVar10 & 1) == 0) {
                FUN_012b8948(&stack0x00000030,*(undefined8 *)puVar3);
                FUN_0160c8c8(plVar11,0);
                uVar12 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
                thunk_FUN_00d48444(
                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                                  );
                lVar7 = thunk_FUN_00d62348();
                if (lVar7 != 0) {
                  FUN_017a9608(lVar7,uVar12,0);
                  uVar12 = thunk_FUN_00d48444(StringLiteral_13755);
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(lVar7,uVar12);
                }
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar12 = FUN_00c57c3c(&stack0x00000030,*(undefined8 *)puVar4);
              FUN_0160c8e8(plVar11,*(undefined8 *)puVar6,0);
              if (*(long *)(unaff_x19 + 0x28) == 0) break;
              FUN_01299bc0(*(long *)(unaff_x19 + 0x28),uVar12,&stack0x00000018,*(undefined8 *)puVar1
                          );
              if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar12 = (**(code **)(*in_stack_00000018 + 0x168))
                                 (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x170));
              FUN_0160c8e8(plVar11,uVar12,0);
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        break;
      }
      if (*(int *)(lVar8 + 0x18) == 1) {
        FUN_0132138c(lVar8,0,&stack0x00000018,*(undefined8 *)puVar1);
        plVar11 = in_stack_00000018;
        plVar9 = (long *)FUN_017dcb18(0);
        if (plVar11 == plVar9) break;
        lVar8 = *(long *)(unaff_x19 + 0x20);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      FUN_01323390(lVar8,&stack0x00000018,*(undefined8 *)puVar2);
      iVar13 = iVar13 + 1;
      in_stack_00000038 = in_stack_00000020;
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000040 = in_stack_00000028;
      while (uVar10 = FUN_012b894c(&stack0x00000030,*(undefined8 *)puVar5), (uVar10 & 1) != 0) {
        uVar12 = FUN_00c57c3c(&stack0x00000030,*(undefined8 *)puVar4);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        thunk_FUN_00d420a0(uVar12,0);
      }
      FUN_012b8948(&stack0x00000030,*(undefined8 *)puVar3);
      *(undefined1 *)(unaff_x19 + 0x30) = 1;
      FUN_017d7e78(*(undefined8 *)(unaff_x19 + 0x20),100,0);
    }
    if (in_stack_00000048 != '\0') {
      thunk_FUN_00d56f10(lVar7,0);
    }
  }
  uVar12 = *(undefined8 *)(unaff_x19 + 0x10);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  thunk_FUN_00d40914(uVar12,&stack0x0000004c,0);
  return iStack000000000000004c == 0;
}


