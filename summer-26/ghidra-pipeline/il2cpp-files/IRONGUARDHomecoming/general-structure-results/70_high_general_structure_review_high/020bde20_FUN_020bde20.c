/*
FUNCTION_NAME: FUN_020bde20
ENTRY_POINT: 020bde20
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_020bde20(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
                 ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((DAT_0482f95a & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_UxmlFactory<ListView,_ListView_UxmlTraits>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_UxmlFactory<LongField,_LongField_UxmlTraits>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_CompilerServices_TaskAwaiter<SnapshotSceneManager_SceneSnapshot>_GetResult__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float2>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_UxmlFactory<MinMaxSlider,_MinMaxSlider_UxmlTraits>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_UxmlFactory<MultiColumnListView,_MultiColumnListView_UxmlTraits>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_UxmlFactory<MultiColumnTreeView,_MultiColumnTreeView_UxmlTraits>__ctor__
                      );
    DAT_0482f95a = 1;
  }
  if (*(char *)(param_4 + 0xc4) != '\0') {
    return;
  }
  *(undefined1 *)(param_4 + 0xc4) = 1;
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  uVar8 = *(undefined8 *)(param_4 + 0x40);
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  uVar2 = FUN_04073094(uVar8,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlFactory<MultiColumnListView,_MultiColumnListView_UxmlTraits>__ctor__
                              );
    FUN_035ac8e8(lVar3,0);
    if (*(long *)(param_4 + 0x70) == 0) goto LAB_020be2b8;
    uVar8 = *(undefined8 *)(param_4 + 0x40);
    uVar9 = FUN_0407d3c8(*(long *)(param_4 + 0x70),0);
    if (DAT_0482ee0f == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__);
      DAT_0482ee0f = '\x01';
    }
    puVar5 = *(undefined4 **)
              (*(long *)Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__ + 0xb8);
    uVar13 = *puVar5;
    uVar12 = puVar5[1];
    uVar11 = puVar5[2];
    uVar10 = puVar5[3];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_023aaa3c(uVar9,param_2,param_3,uVar13,uVar12,uVar11,uVar10,uVar8,
                         *(undefined8 *)Method_Unity_Collections_NativeArray<float2>__ctor__);
    if (lVar3 == 0) goto LAB_020be2b8;
    *(undefined8 *)(lVar3 + 0x10) = uVar8;
    thunk_FUN_01f51358();
    uVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                              );
    FUN_034f6024(uVar8,lVar3,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UxmlFactory<MinMaxSlider,_MinMaxSlider_UxmlTraits>__ctor__
                 ,0);
    FUN_02098028(0x41200000,uVar8,1,0);
  }
  puVar1 = 
  Method_System_Runtime_CompilerServices_TaskAwaiter<SnapshotSceneManager_SceneSnapshot>_GetResult__
  ;
  lVar3 = FUN_032b9080(*(undefined8 *)
                        Method_System_Runtime_CompilerServices_TaskAwaiter<SnapshotSceneManager_SceneSnapshot>_GetResult__
                      );
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x28) == 0)) goto LAB_020be2b8;
  FUN_0280b3dc(*(long *)(lVar3 + 0x28),param_4,
               *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlFactory<MultiColumnTreeView,_MultiColumnTreeView_UxmlTraits>__ctor__
              );
  if ((param_5 & 1) != 0) {
    if (DAT_0482f8b9 == '\0') {
      thunk_FUN_01efb3a4(
                        Method_UnityEngine_UIElements_TextValueField_TextValueInput<float>_get_formatString__
                        );
      DAT_0482f8b9 = '\x01';
    }
    if (*(long *)(param_4 + 0x70) == 0) goto LAB_020be2b8;
    lVar3 = **(long **)(*(long *)
                         Method_UnityEngine_UIElements_TextValueField_TextValueInput<float>_get_formatString__
                       + 0xb8);
    uVar8 = FUN_0407d3c8(*(long *)(param_4 + 0x70),0);
    uVar10 = FUN_0406df98(*(undefined4 *)(param_4 + 0x28),*(undefined4 *)(param_4 + 0x24),0);
    if (lVar3 == 0) goto LAB_020be2b8;
    FUN_020c0f80(uVar8,param_2,param_3,lVar3,uVar10,0);
  }
  plVar7 = *(long **)(param_4 + 0xd8);
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)
             Method_UnityEngine_UIElements_UxmlFactory<LongField,_LongField_UxmlTraits>__ctor__) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_020be144;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_UnityEngine_UIElements_UxmlFactory<LongField,_LongField_UxmlTraits>__ctor__
                          ,1);
LAB_020be144:
    (*(code *)*puVar4)(plVar7,param_4,puVar4[1]);
  }
  uVar8 = FUN_020c25c0(0);
  uVar8 = FUN_020c3d98(uVar8,*(undefined8 *)(param_4 + 0x38),0);
  uVar8 = FUN_020c2664(uVar8,0);
  lVar3 = FUN_04070398(param_4,0);
  if (lVar3 != 0) {
    FUN_0407d3c8(lVar3,0);
    uVar8 = FUN_020c3d40(uVar8,0);
    FUN_020c26f8(uVar8,0,0);
    if (*(long *)(param_4 + 0xf0) != 0) {
      *(undefined4 *)(*(long *)(param_4 + 0xf0) + 0x14) = 0;
    }
    if (*(long *)(param_4 + 0xf8) != 0) {
      *(undefined4 *)(*(long *)(param_4 + 0xf8) + 0x14) = 0;
    }
    lVar3 = FUN_032b9080(*(undefined8 *)puVar1);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x48) != 0)) {
      FUN_02b085dc(*(long *)(lVar3 + 0x48),*(undefined4 *)(param_4 + 0x10c),
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_UxmlFactory<ListView,_ListView_UxmlTraits>__ctor__
                  );
      return;
    }
  }
LAB_020be2b8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


