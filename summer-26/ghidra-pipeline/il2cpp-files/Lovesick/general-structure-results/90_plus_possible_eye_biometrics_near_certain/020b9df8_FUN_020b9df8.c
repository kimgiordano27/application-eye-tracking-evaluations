/*
FUNCTION_NAME: FUN_020b9df8
ENTRY_POINT: 020b9df8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 235
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;ray_interaction;frame_behavior;structure_combo;active_gaze_retrieval;active_gaze_interaction;possible_biometrics
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;possible_biometric_feature_from_active_eye_context;functionality_gaze_interaction_hits_2;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x020ba258) */
/* WARNING: Removing unreachable block (ram,0x020ba1b0) */
/* WARNING: Removing unreachable block (ram,0x020ba02c) */
/* WARNING: Removing unreachable block (ram,0x020ba1b4) */
/* WARNING: Removing unreachable block (ram,0x020ba26c) */
/* WARNING: Removing unreachable block (ram,0x020ba2b8) */

bool FUN_020b9df8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  int iVar14;
  long *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char local_68 [4];
  int local_64;
  
  puVar7 = StringLiteral_13038;
  if ((DAT_03780e78 & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_InputSystem_UI_TrackedDeviceRaycaster_TypeInfo);
    thunk_FUN_00d48444(System_TimeZoneInfo_TZifType___TypeInfo);
    thunk_FUN_00d48444(Method_System_Convert_FromBase64CharArray__);
    thunk_FUN_00d48444(Mono_RuntimePropertyHandle_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<ObiStructuralElement>_TypeInfo);
    thunk_FUN_00d48444(Method_OVREnumerable_Enumerator<OVRSpaceUser>_Dispose__);
    thunk_FUN_00d48444(System_Collections_Generic_HashSet<HandJointId>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_RemoteInputPlayerConnection_OnStartSending__);
    thunk_FUN_00d48444(StringLiteral_13038);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(StringLiteral_161);
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_GetEqualityComparisonOperator__);
    DAT_03780e78 = 1;
  }
  local_68[0] = '\0';
  uStack_78 = 0;
  local_70 = 0;
  local_80 = (long *)0x0;
  local_64 = 0;
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  UnityEngine_InputSystem_XR_XRHMD__get_rightEyePosition(uVar13,0,&local_64,0);
  thunk_FUN_00d41c74(*(undefined8 *)(param_1 + 0x10),2,&local_64,0);
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 != 0) {
    local_68[0] = '\0';
    FUN_017d75a8(lVar8,local_68,0);
    puVar5 = Method_System_Convert_FromBase64CharArray__;
    puVar4 = Mono_RuntimePropertyHandle_TypeInfo;
    puVar3 = System_TimeZoneInfo_TZifType___TypeInfo;
    puVar2 = System_Collections_Generic_List<ObiStructuralElement>_TypeInfo;
    puVar1 = System_Collections_Generic_HashSet<HandJointId>_TypeInfo;
    iVar14 = 0;
    while( true ) {
      puVar6 = Method_UnityEngine_InputSystem_RemoteInputPlayerConnection_OnStartSending__;
      lVar9 = *(long *)(param_1 + 0x20);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(int *)(lVar9 + 0x18) < 1) break;
      if (iVar14 == 10) {
        lVar9 = *(long *)Method_UnityEngine_InputSystem_RemoteInputPlayerConnection_OnStartSending__
        ;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar9 = *(long *)puVar6;
        }
        puVar6 = StringLiteral_161;
        puVar1 = UnityEngine_InputSystem_UI_TrackedDeviceRaycaster_TypeInfo;
        if (**(char **)(lVar9 + 0xb8) != '\0') {
          plVar12 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                              );
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0160aa4c(plVar12,0);
          FUN_0160c8e8(plVar12,*(undefined8 *)
                                Method_System_Linq_Expressions_Expression_GetEqualityComparisonOperator__
                       ,0);
          if (*(long *)(param_1 + 0x20) != 0) {
            FUN_01323390(*(long *)(param_1 + 0x20),&local_98,*(undefined8 *)puVar2);
            uStack_78 = uStack_90;
            local_80 = local_98;
            local_70 = local_88;
            while( true ) {
              uVar11 = FUN_012b894c(&local_80,*(undefined8 *)puVar5);
              if ((uVar11 & 1) == 0) {
                FUN_012b8948(&local_80,*(undefined8 *)puVar3);
                FUN_0160c8c8(plVar12,0);
                uVar13 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
                thunk_FUN_00d48444(
                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                                  );
                lVar8 = thunk_FUN_00d62348();
                if (lVar8 != 0) {
                  FUN_017a9608(lVar8,uVar13,0);
                  uVar13 = thunk_FUN_00d48444(StringLiteral_13755);
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(lVar8,uVar13);
                }
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar13 = FUN_00c57c3c(&local_80,*(undefined8 *)puVar4);
              FUN_0160c8e8(plVar12,*(undefined8 *)puVar6,0);
              if (*(long *)(param_1 + 0x28) == 0) break;
              FUN_01299bc0(*(long *)(param_1 + 0x28),uVar13,&local_98,*(undefined8 *)puVar1);
              if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar13 = (**(code **)(*local_98 + 0x168))(local_98,*(undefined8 *)(*local_98 + 0x170))
              ;
              FUN_0160c8e8(plVar12,uVar13,0);
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        break;
      }
      if (*(int *)(lVar9 + 0x18) == 1) {
        FUN_0132138c(lVar9,0,&local_98,*(undefined8 *)puVar1);
        plVar12 = local_98;
        plVar10 = (long *)FUN_017dcb18(0);
        if (plVar12 == plVar10) break;
        lVar9 = *(long *)(param_1 + 0x20);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      FUN_01323390(lVar9,&local_98,*(undefined8 *)puVar2);
      iVar14 = iVar14 + 1;
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      while (uVar11 = FUN_012b894c(&local_80,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
        uVar13 = FUN_00c57c3c(&local_80,*(undefined8 *)puVar4);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        thunk_FUN_00d420a0(uVar13,0);
      }
      FUN_012b8948(&local_80,*(undefined8 *)puVar3);
      *(undefined1 *)(param_1 + 0x30) = 1;
      FUN_017d7e78(*(undefined8 *)(param_1 + 0x20),100,0);
    }
    if (local_68[0] != '\0') {
      thunk_FUN_00d56f10(lVar8,0);
    }
  }
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  thunk_FUN_00d40914(uVar13,&local_64,0);
  return local_64 == 0;
}


