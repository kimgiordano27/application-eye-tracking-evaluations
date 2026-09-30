/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializationCollectionFixupCallback$$Invoke
ENTRY_POINT: 05ae190c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Xml_Serialization_XmlSerializationCollectionFixupCallback__Invoke(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_visualInput__);
  FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__);
  FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<Vector3>_get_visualInput__);
  FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<Vector3>_set_showMixedValue__);
  FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__);
  *(undefined1 *)(unaff_x22 + 0xe85) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if ((*(long *)(unaff_x21 + 0x60) == 0) ||
     (lVar4 = FUN_04e93414(*(long *)(unaff_x21 + 0x60),
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_visualInput__),
     puVar3 = Method_UnityEngine_UIElements_BaseField<Vector3>_get_visualInput__,
     puVar2 = Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__, lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_049cf0ac(&stack0x00000008,lVar4,
               *(undefined8 *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__
              );
  in_stack_00000030 = in_stack_00000018;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000008 = 0;
  in_stack_00000010 = &stack0x00000020;
  do {
    do {
      uVar5 = FUN_05232ed8(&stack0x00000020,*(undefined8 *)puVar3);
      lVar4 = in_stack_00000030;
      if ((uVar5 & 1) == 0) {
        FUN_05232ed4(&stack0x00000020,*(undefined8 *)puVar2);
        return;
      }
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar6 = (**(code **)(*unaff_x20 + 0x2f8))();
    } while (lVar6 != 0);
    iVar1 = *(int *)(lVar4 + 0x24);
    if (iVar1 == 1) {
      plVar9 = *(long **)(lVar4 + 0x10);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar7 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      thunk_FUN_02dfd288(
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
                        );
      uVar8 = thunk_FUN_02dd3144();
      uVar10 = thunk_FUN_02dfd288(
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarRequestResultCode>_SetStateMachine__
                                 );
      FUN_05b06b24(uVar8,uVar10,uVar7,0);
      uVar7 = thunk_FUN_02dfd288(
                                Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar8,uVar7);
    }
  } while ((((unaff_x19 & 1) == 0) || (*(char *)(lVar4 + 0x20) == '\0')) ||
          ((iVar1 != 3 && (iVar1 != 0))));
  uVar10 = **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
  thunk_FUN_02dfd288(
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
                    );
  uVar7 = thunk_FUN_02dd3144();
  uVar8 = thunk_FUN_02dfd288(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_Start<CorePackageInitializer_<GenerateProjectConfigurationAsync>d__53>__
                            );
  FUN_05b06b24(uVar7,uVar8,uVar10,0);
  uVar8 = thunk_FUN_02dfd288(Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar7,uVar8);
}


