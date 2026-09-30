/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<KeyValuePair<fsPortableReflection.AttributeQuery,-object>>
ENTRY_POINT: 02107efc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__set_Item<KeyValuePair<fsPortableReflection_AttributeQuery,_object>>
               (void)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x19;
  long lVar12;
  long *unaff_x23;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined1 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uVar5 = FUN_022c59ec();
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
  }
  uVar6 = FUN_04073094(uVar5,0,0);
  if ((uVar6 & 1) != 0) {
    *(undefined4 *)(unaff_x19 + 0xc4) = 2;
  }
  lVar12 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
  plVar7 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                ,6);
  if (plVar7 == (long *)0x0) {
LAB_02107ed8:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = thunk_FUN_01f116d0();
  if (lVar8 != 0) {
    if ((int)plVar7[3] != 0) {
      plVar7[4] = unaff_x19;
      thunk_FUN_01f51358();
      puVar4 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
      uStack000000000000002c = *(undefined1 *)(unaff_x19 + 0xe8);
      lVar8 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                 ,(long)&stack0x00000028 + 4);
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
      goto LAB_02108760;
      if (1 < *(uint *)(plVar7 + 3)) {
        plVar7[5] = lVar8;
        thunk_FUN_01f51358(plVar7 + 5,lVar8);
        uStack0000000000000028 = *(undefined1 *)(unaff_x19 + 0xbb);
        lVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar4,&stack0x00000028);
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
        goto LAB_02108760;
        if (2 < *(uint *)(plVar7 + 3)) {
          plVar7[6] = lVar8;
          thunk_FUN_01f51358(plVar7 + 6,lVar8);
          lVar8 = *(long *)(unaff_x19 + 0x100);
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_02108760;
          if (3 < *(uint *)(plVar7 + 3)) {
            plVar7[7] = lVar8;
            thunk_FUN_01f51358(plVar7 + 7,lVar8);
            in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,*(undefined4 *)(unaff_x19 + 0x74));
            lVar8 = thunk_FUN_01f113fc(*(undefined8 *)
                                        Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                                       ,&stack0x00000010);
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
            goto LAB_02108760;
            if (4 < *(uint *)(plVar7 + 3)) {
              plVar7[8] = lVar8;
              thunk_FUN_01f51358(plVar7 + 8,lVar8);
              lVar8 = thunk_FUN_01f113fc(*(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnItemsSourceChanged__
                                        );
              if ((lVar8 != 0) &&
                 (lVar9 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
              goto LAB_02108760;
              if (5 < *(uint *)(plVar7 + 3)) {
                plVar7[9] = lVar8;
                thunk_FUN_01f51358(plVar7 + 9,lVar8);
                if (lVar12 != 0) {
                  plVar7 = (long *)FUN_034b2bf4(lVar12,0,plVar7,0);
                  if (plVar7 != (long *)0x0) {
                    bVar3 = *(byte *)(*(long *)
                                       Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseSliceWithCapacity<InputDevice>__
                                     + 0x130);
                    if ((*(byte *)(*plVar7 + 0x130) < bVar3) ||
                       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar3 * 8 + -8) !=
                        *(long *)
                         Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseSliceWithCapacity<InputDevice>__
                       )) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08cfc(plVar7);
                    }
                  }
                  FUN_02105c54(plVar7,*(undefined1 *)(unaff_x19 + 0xbc),0,
                               *(undefined4 *)(unaff_x19 + 200),0);
                  iVar2 = *(int *)(unaff_x19 + 0x9c);
                  if (iVar2 == 1) {
                    uVar13 = *(undefined4 *)(unaff_x19 + 0xb4);
                    if (*(char *)(unaff_x19 + 0xcc) == '\0') {
                      uVar5 = 0;
                      uVar10 = 0;
                    }
                    else {
                      in_stack_00000010 = 0;
                      in_stack_00000018 = 0;
                      FUN_03334a50(*(undefined4 *)(unaff_x19 + 0xd0),
                                   *(undefined4 *)(unaff_x19 + 0xd4),
                                   *(undefined4 *)(unaff_x19 + 0xd8),&stack0x00000010,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_PanelChangedEventBase<AttachToPanelEvent>__ctor__
                                  );
                      FUN_03334a50(*(undefined4 *)(unaff_x19 + 0xdc),
                                   *(undefined4 *)(unaff_x19 + 0xe0),
                                   *(undefined4 *)(unaff_x19 + 0xe4));
                      uVar5 = in_stack_00000010;
                      uVar10 = in_stack_00000018;
                    }
                    FUN_02105f04(uVar13,plVar7,uVar5,uVar10,0,0,0);
                  }
                  else if (iVar2 == 2) {
                    uVar5 = *(undefined8 *)(unaff_x19 + 0xa0);
                    if (*(int *)(*(long *)
                                  Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ +
                                0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar6 = FUN_04073094(uVar5,0,0);
                    if ((uVar6 & 1) != 0) {
                      uVar5 = *(undefined8 *)(unaff_x19 + 0xa0);
                      if (*(char *)(unaff_x19 + 0xcc) == '\0') {
                        uVar10 = 0;
                        uVar11 = 0;
                      }
                      else {
                        in_stack_00000010 = 0;
                        in_stack_00000018 = 0;
                        FUN_03334a50(*(undefined4 *)(unaff_x19 + 0xd0),
                                     *(undefined4 *)(unaff_x19 + 0xd4),
                                     *(undefined4 *)(unaff_x19 + 0xd8),&stack0x00000010,
                                     *(undefined8 *)
                                      Method_UnityEngine_UIElements_PanelChangedEventBase<AttachToPanelEvent>__ctor__
                                    );
                        FUN_03334a50(*(undefined4 *)(unaff_x19 + 0xdc),
                                     *(undefined4 *)(unaff_x19 + 0xe0),
                                     *(undefined4 *)(unaff_x19 + 0xe4));
                        uVar10 = in_stack_00000010;
                        uVar11 = in_stack_00000018;
                      }
                      FUN_02105dd0(plVar7,uVar5,uVar10,uVar11,0,0,0);
                    }
                  }
                  else if (iVar2 == 3) {
                    uVar15 = *(undefined4 *)(unaff_x19 + 0xa8);
                    uVar14 = *(undefined4 *)(unaff_x19 + 0xac);
                    uVar13 = *(undefined4 *)(unaff_x19 + 0xb0);
                    if (*(char *)(unaff_x19 + 0xcc) == '\0') {
                      uVar5 = 0;
                      uVar10 = 0;
                    }
                    else {
                      in_stack_00000010 = 0;
                      in_stack_00000018 = 0;
                      FUN_03334a50(*(undefined4 *)(unaff_x19 + 0xd0),
                                   *(undefined4 *)(unaff_x19 + 0xd4),
                                   *(undefined4 *)(unaff_x19 + 0xd8),&stack0x00000010,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_PanelChangedEventBase<AttachToPanelEvent>__ctor__
                                  );
                      FUN_03334a50(*(undefined4 *)(unaff_x19 + 0xdc),
                                   *(undefined4 *)(unaff_x19 + 0xe0),
                                   *(undefined4 *)(unaff_x19 + 0xe4));
                      uVar5 = in_stack_00000010;
                      uVar10 = in_stack_00000018;
                    }
                    FUN_02105c74(uVar15,uVar14,uVar13,plVar7,uVar5,uVar10,0,0,0);
                  }
                  uVar5 = FUN_040703d4();
                  FUN_0242d544(plVar7,uVar5,
                               *(undefined8 *)
                                Method_Unity_VisualScripting_NoAllocEnumerator<IUnit>_MoveNext__);
                  uVar5 = FUN_0242cd80(*(undefined4 *)(unaff_x19 + 0x70),plVar7,
                                       *(undefined8 *)Method_Mono_Math_BigInteger_TestBit__);
                  uVar5 = FUN_0242d40c(uVar5,*(undefined4 *)(unaff_x19 + 0x88),
                                       *(undefined4 *)(unaff_x19 + 0x98),
                                       *(undefined8 *)Method_Mono_Math_BigInteger_op_Subtraction__);
                  uVar5 = FUN_0242cd5c(uVar5,*(undefined1 *)(unaff_x19 + 0xb9),
                                       *(undefined8 *)
                                        Method_Oculus_Interaction_BestSelectInteractorGroup_HandleBestInteractorStateChanged__
                                      );
                  uVar5 = FUN_0242d730(uVar5,*(undefined4 *)(unaff_x19 + 0x20),
                                       *(undefined8 *)
                                        Method_Unity_VisualScripting_NoAllocEnumerator<IUnit>_get_Current__
                                      );
                  puVar4 = 
                  Method_Unity_VisualScripting_NesterState<FlowGraph,_ScriptGraphAsset>__ctor__;
                  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                               Method_Unity_VisualScripting_NesterState<FlowGraph,_ScriptGraphAsset>__ctor__
                                             );
                  FUN_020eeb78();
                  FUN_0242c7dc(uVar5,uVar10,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnSizeChanged__
                              );
                  if (*(char *)(unaff_x19 + 0x24) != '\0') {
                    FUN_0242d4fc(plVar7,*(undefined8 *)Method_Mono_Math_BigInteger_TestBit__);
                  }
                  if (*(int *)(unaff_x19 + 0x78) == 0x25) {
                    FUN_0242cec8(plVar7,*(undefined8 *)(unaff_x19 + 0x80),
                                 *(undefined8 *)Method_Mono_Math_BigInteger_op_Implicit__);
                  }
                  else {
                    FUN_0242cf90(plVar7,*(int *)(unaff_x19 + 0x78),
                                 *(undefined8 *)Method_Mono_Math_BigInteger_ToString__);
                  }
                  uVar6 = FUN_0340eec4(*(undefined8 *)(unaff_x19 + 0x90),0);
                  if ((uVar6 & 1) == 0) {
                    FUN_0242d16c(plVar7,*(undefined8 *)(unaff_x19 + 0x90),
                                 *(undefined8 *)Method_Mono_Math_BigInteger_op_Multiply__);
                  }
                  plVar1 = (long *)(unaff_x19 + 0x30);
                  if (*(char *)(unaff_x19 + 0x25) == '\0') {
                    *plVar1 = 0;
                    thunk_FUN_01f51358(plVar1,0);
                  }
                  else {
                    lVar12 = *plVar1;
                    if (lVar12 != 0) {
                      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                      FUN_020eeb78(uVar5,lVar12,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>_Release__
                                   ,0);
                      FUN_0242c88c(plVar7,uVar5,
                                   *(undefined8 *)
                                    Method_Mono_Security_X509_Extensions_BasicConstraintsExtension_Decode__
                                  );
                    }
                  }
                  plVar1 = (long *)(unaff_x19 + 0x38);
                  if (*(char *)(unaff_x19 + 0x26) == '\0') {
                    *plVar1 = 0;
                    thunk_FUN_01f51358(plVar1,0);
                  }
                  else {
                    lVar12 = *plVar1;
                    if (lVar12 != 0) {
                      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                      FUN_020eeb78(uVar5,lVar12,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>_Release__
                                   ,0);
                      FUN_0242c834(plVar7,uVar5,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_set_fixedItemHeight__
                                  );
                    }
                  }
                  plVar1 = (long *)(unaff_x19 + 0x40);
                  if (*(char *)(unaff_x19 + 0x27) == '\0') {
                    *plVar1 = 0;
                    thunk_FUN_01f51358(plVar1,0);
                  }
                  else {
                    lVar12 = *plVar1;
                    if (lVar12 != 0) {
                      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                      FUN_020eeb78(uVar5,lVar12,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>_Release__
                                   ,0);
                      FUN_0242c8e4(plVar7,uVar5,
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_BestHoverInteractorGroup_HandleBestInteractorStateChanged__
                                  );
                    }
                  }
                  plVar1 = (long *)(unaff_x19 + 0x48);
                  if (*(char *)(unaff_x19 + 0x28) == '\0') {
                    *plVar1 = 0;
                    thunk_FUN_01f51358(plVar1,0);
                  }
                  else {
                    lVar12 = *plVar1;
                    if (lVar12 != 0) {
                      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                      FUN_020eeb78(uVar5,lVar12,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>_Release__
                                   ,0);
                      FUN_0242c8b8(plVar7,uVar5,
                                   *(undefined8 *)Method_BasicSceneManager_<LoadSceneAsync>b__1_0__)
                      ;
                    }
                  }
                  plVar1 = (long *)(unaff_x19 + 0x50);
                  if (*(char *)(unaff_x19 + 0x29) == '\0') {
                    *plVar1 = 0;
                    thunk_FUN_01f51358(plVar1,0);
                  }
                  else {
                    lVar12 = *plVar1;
                    if (lVar12 != 0) {
                      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                      FUN_020eeb78(uVar5,lVar12,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>_Release__
                                   ,0);
                      FUN_0242c7b0(plVar7,uVar5,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerUp__
                                  );
                    }
                  }
                  plVar1 = (long *)(unaff_x19 + 0x60);
                  if (*(char *)(unaff_x19 + 0x2b) == '\0') {
                    *plVar1 = 0;
                    thunk_FUN_01f51358(plVar1,0);
                  }
                  else {
                    lVar12 = *plVar1;
                    if (lVar12 != 0) {
                      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                      FUN_020eeb78(uVar5,lVar12,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>_Release__
                                   ,0);
                      FUN_0242c860(plVar7,uVar5,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseVisualElementPanel_get_uiElementsBridge__
                                  );
                    }
                  }
                  if (*(char *)(unaff_x19 + 0xb8) == '\0') {
                    FUN_02424d4c(plVar7,*(undefined8 *)
                                         Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerDown__
                                );
                  }
                  else {
                    FUN_02424ea4(plVar7,*(undefined8 *)
                                         Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__
                                );
                  }
                  *(long *)(unaff_x19 + 0x68) = (long)plVar7;
                  thunk_FUN_01f51358((long *)(unaff_x19 + 0x68),plVar7);
                  if ((*(char *)(unaff_x19 + 0x2a) != '\0') && (*(long *)(unaff_x19 + 0x58) != 0)) {
                    FUN_04083c08(*(long *)(unaff_x19 + 0x58),0);
                  }
                  return;
                }
                goto LAB_02107ed8;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_02108760:
  uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,0);
}


