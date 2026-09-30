/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<KeyValuePair<StyleSheetCache.SheetHandleKey,-object>>
ENTRY_POINT: 02107dc4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__set_Item<KeyValuePair<StyleSheetCache_SheetHandleKey,_object>>
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x19;
  long *unaff_x23;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined1 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  lVar5 = FUN_0407d2c4(param_4,0);
  if (lVar5 != 0) {
    fVar15 = (float)FUN_0407d3c8(lVar5,0);
    lVar5 = *(long *)(unaff_x19 + 0x100);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x18) != 0)) {
      uVar13 = *(ulong *)(*(long *)(lVar5 + 0x18) + 0x18);
      lVar12 = 0;
      uVar11 = 0;
      uVar14 = uVar13 & 0xffffffff;
      if ((int)uVar13 < 1) {
        uVar14 = 0;
      }
      do {
        if (uVar14 == uVar11) {
          if (*(long *)(lVar5 + 0x30) != 0) {
            uVar11 = *(ulong *)(*(long *)(lVar5 + 0x30) + 0x18);
            if ((int)uVar11 < 1) goto LAB_02107edc;
            if (lVar5 != 0) {
              lVar12 = 0;
              uVar14 = 0;
              goto LAB_02107e8c;
            }
          }
          break;
        }
        lVar5 = *(long *)(lVar5 + 0x18);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_0210875c;
        lVar5 = lVar5 + lVar12;
        lVar12 = lVar12 + 0xc;
        uVar11 = uVar11 + 1;
        *(ulong *)(lVar5 + 0x20) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20) - param_2,
                      (float)*(undefined8 *)(lVar5 + 0x20) - fVar15);
        *(float *)(lVar5 + 0x28) = *(float *)(lVar5 + 0x28) - param_3;
        lVar5 = *(long *)(unaff_x19 + 0x100);
      } while (lVar5 != 0);
    }
  }
  goto LAB_02107ed8;
LAB_02107edc:
  if (*(char *)(unaff_x19 + 0xba) != '\0') {
    FUN_02108774();
  }
  if (*(int *)(unaff_x19 + 0xc4) == 1) {
    uVar6 = FUN_022c59ec();
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    }
    uVar11 = FUN_04073094(uVar6,0,0);
    if ((uVar11 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0xc4) = 2;
    }
  }
  lVar5 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
  plVar7 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                ,6);
  if (plVar7 != (long *)0x0) {
    lVar12 = thunk_FUN_01f116d0();
    if (lVar12 == 0) {
LAB_02108760:
      uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar6,0);
    }
    if ((int)plVar7[3] != 0) {
      plVar7[4] = unaff_x19;
      thunk_FUN_01f51358();
      puVar4 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
      uStack000000000000002c = *(undefined1 *)(unaff_x19 + 0xe8);
      lVar12 = thunk_FUN_01f113fc(*(undefined8 *)
                                   Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                  ,(long)&stack0x00000028 + 4);
      if ((lVar12 != 0) &&
         (lVar8 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
      goto LAB_02108760;
      if (1 < *(uint *)(plVar7 + 3)) {
        plVar7[5] = lVar12;
        thunk_FUN_01f51358(plVar7 + 5,lVar12);
        uStack0000000000000028 = *(undefined1 *)(unaff_x19 + 0xbb);
        lVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar4,&stack0x00000028);
        if ((lVar12 != 0) &&
           (lVar8 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
        goto LAB_02108760;
        if (2 < *(uint *)(plVar7 + 3)) {
          plVar7[6] = lVar12;
          thunk_FUN_01f51358(plVar7 + 6,lVar12);
          lVar12 = *(long *)(unaff_x19 + 0x100);
          if ((lVar12 != 0) &&
             (lVar8 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
          goto LAB_02108760;
          if (3 < *(uint *)(plVar7 + 3)) {
            plVar7[7] = lVar12;
            thunk_FUN_01f51358(plVar7 + 7,lVar12);
            in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,*(undefined4 *)(unaff_x19 + 0x74));
            lVar12 = thunk_FUN_01f113fc(*(undefined8 *)
                                         Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                                        ,&stack0x00000010);
            if ((lVar12 != 0) &&
               (lVar8 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
            goto LAB_02108760;
            if (4 < *(uint *)(plVar7 + 3)) {
              plVar7[8] = lVar12;
              thunk_FUN_01f51358(plVar7 + 8,lVar12);
              lVar12 = thunk_FUN_01f113fc(*(undefined8 *)
                                           Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnItemsSourceChanged__
                                         );
              if ((lVar12 != 0) &&
                 (lVar8 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
              goto LAB_02108760;
              if (5 < *(uint *)(plVar7 + 3)) {
                plVar7[9] = lVar12;
                thunk_FUN_01f51358(plVar7 + 9,lVar12);
                if (lVar5 != 0) {
                  plVar7 = (long *)FUN_034b2bf4(lVar5,0,plVar7,0);
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
                    uVar16 = *(undefined4 *)(unaff_x19 + 0xb4);
                    if (*(char *)(unaff_x19 + 0xcc) == '\0') {
                      uVar6 = 0;
                      uVar9 = 0;
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
                      uVar6 = in_stack_00000010;
                      uVar9 = in_stack_00000018;
                    }
                    FUN_02105f04(uVar16,plVar7,uVar6,uVar9,0,0,0);
                  }
                  else if (iVar2 == 2) {
                    uVar6 = *(undefined8 *)(unaff_x19 + 0xa0);
                    if (*(int *)(*(long *)
                                  Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ +
                                0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar11 = FUN_04073094(uVar6,0,0);
                    if ((uVar11 & 1) != 0) {
                      uVar6 = *(undefined8 *)(unaff_x19 + 0xa0);
                      if (*(char *)(unaff_x19 + 0xcc) == '\0') {
                        uVar9 = 0;
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
                        uVar9 = in_stack_00000010;
                        uVar10 = in_stack_00000018;
                      }
                      FUN_02105dd0(plVar7,uVar6,uVar9,uVar10,0,0,0);
                    }
                  }
                  else if (iVar2 == 3) {
                    uVar18 = *(undefined4 *)(unaff_x19 + 0xa8);
                    uVar17 = *(undefined4 *)(unaff_x19 + 0xac);
                    uVar16 = *(undefined4 *)(unaff_x19 + 0xb0);
                    if (*(char *)(unaff_x19 + 0xcc) == '\0') {
                      uVar6 = 0;
                      uVar9 = 0;
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
                      uVar6 = in_stack_00000010;
                      uVar9 = in_stack_00000018;
                    }
                    FUN_02105c74(uVar18,uVar17,uVar16,plVar7,uVar6,uVar9,0,0,0);
                  }
                  uVar6 = FUN_040703d4();
                  FUN_0242d544(plVar7,uVar6,
                               *(undefined8 *)
                                Method_Unity_VisualScripting_NoAllocEnumerator<IUnit>_MoveNext__);
                  uVar6 = FUN_0242cd80(*(undefined4 *)(unaff_x19 + 0x70),plVar7,
                                       *(undefined8 *)Method_Mono_Math_BigInteger_TestBit__);
                  uVar6 = FUN_0242d40c(uVar6,*(undefined4 *)(unaff_x19 + 0x88),
                                       *(undefined4 *)(unaff_x19 + 0x98),
                                       *(undefined8 *)Method_Mono_Math_BigInteger_op_Subtraction__);
                  uVar6 = FUN_0242cd5c(uVar6,*(undefined1 *)(unaff_x19 + 0xb9),
                                       *(undefined8 *)
                                        Method_Oculus_Interaction_BestSelectInteractorGroup_HandleBestInteractorStateChanged__
                                      );
                  uVar6 = FUN_0242d730(uVar6,*(undefined4 *)(unaff_x19 + 0x20),
                                       *(undefined8 *)
                                        Method_Unity_VisualScripting_NoAllocEnumerator<IUnit>_get_Current__
                                      );
                  puVar4 = 
                  Method_Unity_VisualScripting_NesterState<FlowGraph,_ScriptGraphAsset>__ctor__;
                  uVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                              Method_Unity_VisualScripting_NesterState<FlowGraph,_ScriptGraphAsset>__ctor__
                                            );
                  FUN_020eeb78();
                  FUN_0242c7dc(uVar6,uVar9,
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
                  uVar11 = FUN_0340eec4(*(undefined8 *)(unaff_x19 + 0x90),0);
                  if ((uVar11 & 1) == 0) {
                    FUN_0242d16c(plVar7,*(undefined8 *)(unaff_x19 + 0x90),
                                 *(undefined8 *)Method_Mono_Math_BigInteger_op_Multiply__);
                  }
                  plVar1 = (long *)(unaff_x19 + 0x30);
                  if (*(char *)(unaff_x19 + 0x25) == '\0') {
                    *plVar1 = 0;
                    thunk_FUN_01f51358(plVar1,0);
                  }
                  else {
                    lVar5 = *plVar1;
                    if (lVar5 != 0) {
                      uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                      FUN_020eeb78(uVar6,lVar5,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>_Release__
                                   ,0);
                      FUN_0242c88c(plVar7,uVar6,
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
                    lVar5 = *plVar1;
                    if (lVar5 != 0) {
                      uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                      FUN_020eeb78(uVar6,lVar5,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>_Release__
                                   ,0);
                      FUN_0242c834(plVar7,uVar6,
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
                    lVar5 = *plVar1;
                    if (lVar5 != 0) {
                      uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                      FUN_020eeb78(uVar6,lVar5,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>_Release__
                                   ,0);
                      FUN_0242c8e4(plVar7,uVar6,
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
                    lVar5 = *plVar1;
                    if (lVar5 != 0) {
                      uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                      FUN_020eeb78(uVar6,lVar5,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>_Release__
                                   ,0);
                      FUN_0242c8b8(plVar7,uVar6,
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
                    lVar5 = *plVar1;
                    if (lVar5 != 0) {
                      uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                      FUN_020eeb78(uVar6,lVar5,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>_Release__
                                   ,0);
                      FUN_0242c7b0(plVar7,uVar6,
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
                    lVar5 = *plVar1;
                    if (lVar5 != 0) {
                      uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                      FUN_020eeb78(uVar6,lVar5,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>_Release__
                                   ,0);
                      FUN_0242c860(plVar7,uVar6,
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
LAB_0210875c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  goto LAB_02107ed8;
  while( true ) {
    if (*(uint *)(lVar5 + 0x18) <= uVar14) goto LAB_0210875c;
    lVar5 = lVar5 + lVar12;
    uVar14 = uVar14 + 1;
    *(ulong *)(lVar5 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20) - param_2,
                  (float)*(undefined8 *)(lVar5 + 0x20) - fVar15);
    *(ulong *)(lVar5 + 0x28) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x28) >> 0x20) - fVar15,
                  (float)*(undefined8 *)(lVar5 + 0x28) - param_3);
    *(ulong *)(lVar5 + 0x30) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x30) >> 0x20) - param_3,
                  (float)*(undefined8 *)(lVar5 + 0x30) - param_2);
    if ((uVar11 & 0xffffffff) == uVar14) goto LAB_02107edc;
    lVar5 = *(long *)(unaff_x19 + 0x100);
    lVar12 = lVar12 + 0x18;
    if (lVar5 == 0) break;
LAB_02107e8c:
    lVar5 = *(long *)(lVar5 + 0x30);
    if (lVar5 == 0) break;
  }
LAB_02107ed8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


