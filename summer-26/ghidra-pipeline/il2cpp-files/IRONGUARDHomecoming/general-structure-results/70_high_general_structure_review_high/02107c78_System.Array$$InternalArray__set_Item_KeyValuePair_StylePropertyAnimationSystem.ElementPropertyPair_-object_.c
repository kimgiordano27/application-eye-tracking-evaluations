/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<KeyValuePair<StylePropertyAnimationSystem.ElementPropertyPair,-object>>
ENTRY_POINT: 02107c78
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__set_Item<KeyValuePair<StylePropertyAnimationSystem_ElementPropertyPair,_object>>
               (undefined1 param_1 [16],float param_2,float param_3)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar16;
  long *unaff_x23;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined1 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  thunk_FUN_01ee6d7c();
  puVar5 = Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__;
  if (**(char **)(*unaff_x20 + 0xb8) != '\0') {
    lVar6 = *(long *)Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *(long *)puVar5;
    }
    uVar16 = *(undefined8 *)(unaff_x19 + 0x100);
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x88);
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Unity_VisualScripting_NesterState<FlowGraph,_ScriptGraphAsset>__ctor__
                              );
    FUN_020eeb78(uVar7,uVar16,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerCancel__,0);
    if (lVar6 == 0) goto LAB_02107ed8;
    lVar12 = *(long *)(lVar6 + 0x10);
    lVar13 = *(long *)Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnItemIndexChanged__;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_02107ed8;
    uVar4 = *(uint *)(lVar6 + 0x18);
    if (uVar4 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar4 + 1;
      puVar8 = (undefined8 *)(lVar12 + (long)(int)uVar4 * 8 + 0x20);
      *puVar8 = uVar7;
      thunk_FUN_01f51358(puVar8,uVar7);
    }
    else {
      FUN_030f2bb4(lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    lVar6 = *(long *)(unaff_x19 + 0x100);
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 300);
    in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x124);
    if (lVar6 == 0) goto LAB_02107ed8;
    *(undefined8 *)(lVar6 + 0x114) = in_stack_00000018;
    *(undefined8 *)(lVar6 + 0x10c) = in_stack_00000010;
  }
  if (*(char *)(unaff_x19 + 0xbb) != '\0') {
    lVar6 = FUN_04070398();
    if (lVar6 == 0) goto LAB_02107ed8;
    uVar7 = FUN_0407d2c4(lVar6,0);
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    }
    uVar9 = FUN_04073094(uVar7,0,0);
    if ((uVar9 & 1) != 0) {
      lVar6 = FUN_0407d2c4(lVar6,0);
      if (lVar6 != 0) {
        fVar17 = (float)FUN_0407d3c8(lVar6,0);
        lVar6 = *(long *)(unaff_x19 + 0x100);
        if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
          uVar14 = *(ulong *)(*(long *)(lVar6 + 0x18) + 0x18);
          lVar12 = 0;
          uVar9 = 0;
          uVar15 = uVar14 & 0xffffffff;
          if ((int)uVar14 < 1) {
            uVar15 = 0;
          }
          do {
            if (uVar15 == uVar9) {
              if (*(long *)(lVar6 + 0x30) != 0) {
                uVar9 = *(ulong *)(*(long *)(lVar6 + 0x30) + 0x18);
                if ((int)uVar9 < 1) goto LAB_02107edc;
                if (lVar6 != 0) {
                  lVar12 = 0;
                  uVar15 = 0;
                  goto LAB_02107e8c;
                }
              }
              break;
            }
            lVar6 = *(long *)(lVar6 + 0x18);
            if (lVar6 == 0) break;
            if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_0210875c;
            lVar6 = lVar6 + lVar12;
            lVar12 = lVar12 + 0xc;
            uVar9 = uVar9 + 1;
            *(ulong *)(lVar6 + 0x20) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20) - param_2,
                          (float)*(undefined8 *)(lVar6 + 0x20) - fVar17);
            *(float *)(lVar6 + 0x28) = *(float *)(lVar6 + 0x28) - param_3;
            lVar6 = *(long *)(unaff_x19 + 0x100);
          } while (lVar6 != 0);
        }
      }
      goto LAB_02107ed8;
    }
  }
LAB_02107edc:
  if (*(char *)(unaff_x19 + 0xba) != '\0') {
    FUN_02108774();
  }
  if (*(int *)(unaff_x19 + 0xc4) == 1) {
    uVar7 = FUN_022c59ec();
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    }
    uVar9 = FUN_04073094(uVar7,0,0);
    if ((uVar9 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0xc4) = 2;
    }
  }
  lVar6 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
  plVar10 = (long *)FUN_01f08890(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                 ,6);
  if (plVar10 == (long *)0x0) {
LAB_02107ed8:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar12 = thunk_FUN_01f116d0();
  if (lVar12 == 0) {
LAB_02108760:
    uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar7,0);
  }
  if ((int)plVar10[3] != 0) {
    plVar10[4] = unaff_x19;
    thunk_FUN_01f51358();
    puVar5 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
    uStack000000000000002c = *(undefined1 *)(unaff_x19 + 0xe8);
    lVar12 = thunk_FUN_01f113fc(*(undefined8 *)
                                 Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                ,(long)&stack0x00000028 + 4);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
    goto LAB_02108760;
    if (1 < *(uint *)(plVar10 + 3)) {
      plVar10[5] = lVar12;
      thunk_FUN_01f51358(plVar10 + 5,lVar12);
      uStack0000000000000028 = *(undefined1 *)(unaff_x19 + 0xbb);
      lVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar5,&stack0x00000028);
      if ((lVar12 != 0) &&
         (lVar13 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
      goto LAB_02108760;
      if (2 < *(uint *)(plVar10 + 3)) {
        plVar10[6] = lVar12;
        thunk_FUN_01f51358(plVar10 + 6,lVar12);
        lVar12 = *(long *)(unaff_x19 + 0x100);
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
        goto LAB_02108760;
        if (3 < *(uint *)(plVar10 + 3)) {
          plVar10[7] = lVar12;
          thunk_FUN_01f51358(plVar10 + 7,lVar12);
          in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,*(undefined4 *)(unaff_x19 + 0x74));
          lVar12 = thunk_FUN_01f113fc(*(undefined8 *)
                                       Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                                      ,&stack0x00000010);
          if ((lVar12 != 0) &&
             (lVar13 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
          goto LAB_02108760;
          if (4 < *(uint *)(plVar10 + 3)) {
            plVar10[8] = lVar12;
            thunk_FUN_01f51358(plVar10 + 8,lVar12);
            lVar12 = thunk_FUN_01f113fc(*(undefined8 *)
                                         Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnItemsSourceChanged__
                                       );
            if ((lVar12 != 0) &&
               (lVar13 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
            goto LAB_02108760;
            if (5 < *(uint *)(plVar10 + 3)) {
              plVar10[9] = lVar12;
              thunk_FUN_01f51358(plVar10 + 9,lVar12);
              if (lVar6 != 0) {
                plVar10 = (long *)FUN_034b2bf4(lVar6,0,plVar10,0);
                if (plVar10 != (long *)0x0) {
                  bVar3 = *(byte *)(*(long *)
                                     Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseSliceWithCapacity<InputDevice>__
                                   + 0x130);
                  if ((*(byte *)(*plVar10 + 0x130) < bVar3) ||
                     (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar3 * 8 + -8) !=
                      *(long *)
                       Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseSliceWithCapacity<InputDevice>__
                     )) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08cfc(plVar10);
                  }
                }
                FUN_02105c54(plVar10,*(undefined1 *)(unaff_x19 + 0xbc),0,
                             *(undefined4 *)(unaff_x19 + 200),0);
                iVar2 = *(int *)(unaff_x19 + 0x9c);
                if (iVar2 == 1) {
                  uVar18 = *(undefined4 *)(unaff_x19 + 0xb4);
                  if (*(char *)(unaff_x19 + 0xcc) == '\0') {
                    uVar7 = 0;
                    uVar16 = 0;
                  }
                  else {
                    in_stack_00000010 = 0;
                    in_stack_00000018 = 0;
                    FUN_03334a50(*(undefined4 *)(unaff_x19 + 0xd0),*(undefined4 *)(unaff_x19 + 0xd4)
                                 ,*(undefined4 *)(unaff_x19 + 0xd8),&stack0x00000010,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_PanelChangedEventBase<AttachToPanelEvent>__ctor__
                                );
                    FUN_03334a50(*(undefined4 *)(unaff_x19 + 0xdc),*(undefined4 *)(unaff_x19 + 0xe0)
                                 ,*(undefined4 *)(unaff_x19 + 0xe4));
                    uVar7 = in_stack_00000010;
                    uVar16 = in_stack_00000018;
                  }
                  FUN_02105f04(uVar18,plVar10,uVar7,uVar16,0,0,0);
                }
                else if (iVar2 == 2) {
                  uVar7 = *(undefined8 *)(unaff_x19 + 0xa0);
                  if (*(int *)(*(long *)
                                Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ +
                              0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar9 = FUN_04073094(uVar7,0,0);
                  if ((uVar9 & 1) != 0) {
                    uVar7 = *(undefined8 *)(unaff_x19 + 0xa0);
                    if (*(char *)(unaff_x19 + 0xcc) == '\0') {
                      uVar16 = 0;
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
                      uVar16 = in_stack_00000010;
                      uVar11 = in_stack_00000018;
                    }
                    FUN_02105dd0(plVar10,uVar7,uVar16,uVar11,0,0,0);
                  }
                }
                else if (iVar2 == 3) {
                  uVar20 = *(undefined4 *)(unaff_x19 + 0xa8);
                  uVar19 = *(undefined4 *)(unaff_x19 + 0xac);
                  uVar18 = *(undefined4 *)(unaff_x19 + 0xb0);
                  if (*(char *)(unaff_x19 + 0xcc) == '\0') {
                    uVar7 = 0;
                    uVar16 = 0;
                  }
                  else {
                    in_stack_00000010 = 0;
                    in_stack_00000018 = 0;
                    FUN_03334a50(*(undefined4 *)(unaff_x19 + 0xd0),*(undefined4 *)(unaff_x19 + 0xd4)
                                 ,*(undefined4 *)(unaff_x19 + 0xd8),&stack0x00000010,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_PanelChangedEventBase<AttachToPanelEvent>__ctor__
                                );
                    FUN_03334a50(*(undefined4 *)(unaff_x19 + 0xdc),*(undefined4 *)(unaff_x19 + 0xe0)
                                 ,*(undefined4 *)(unaff_x19 + 0xe4));
                    uVar7 = in_stack_00000010;
                    uVar16 = in_stack_00000018;
                  }
                  FUN_02105c74(uVar20,uVar19,uVar18,plVar10,uVar7,uVar16,0,0,0);
                }
                uVar7 = FUN_040703d4();
                FUN_0242d544(plVar10,uVar7,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_NoAllocEnumerator<IUnit>_MoveNext__);
                uVar7 = FUN_0242cd80(*(undefined4 *)(unaff_x19 + 0x70),plVar10,
                                     *(undefined8 *)Method_Mono_Math_BigInteger_TestBit__);
                uVar7 = FUN_0242d40c(uVar7,*(undefined4 *)(unaff_x19 + 0x88),
                                     *(undefined4 *)(unaff_x19 + 0x98),
                                     *(undefined8 *)Method_Mono_Math_BigInteger_op_Subtraction__);
                uVar7 = FUN_0242cd5c(uVar7,*(undefined1 *)(unaff_x19 + 0xb9),
                                     *(undefined8 *)
                                      Method_Oculus_Interaction_BestSelectInteractorGroup_HandleBestInteractorStateChanged__
                                    );
                uVar7 = FUN_0242d730(uVar7,*(undefined4 *)(unaff_x19 + 0x20),
                                     *(undefined8 *)
                                      Method_Unity_VisualScripting_NoAllocEnumerator<IUnit>_get_Current__
                                    );
                puVar5 = 
                Method_Unity_VisualScripting_NesterState<FlowGraph,_ScriptGraphAsset>__ctor__;
                uVar16 = thunk_FUN_01f117cc(*(undefined8 *)
                                             Method_Unity_VisualScripting_NesterState<FlowGraph,_ScriptGraphAsset>__ctor__
                                           );
                FUN_020eeb78();
                FUN_0242c7dc(uVar7,uVar16,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnSizeChanged__
                            );
                if (*(char *)(unaff_x19 + 0x24) != '\0') {
                  FUN_0242d4fc(plVar10,*(undefined8 *)Method_Mono_Math_BigInteger_TestBit__);
                }
                if (*(int *)(unaff_x19 + 0x78) == 0x25) {
                  FUN_0242cec8(plVar10,*(undefined8 *)(unaff_x19 + 0x80),
                               *(undefined8 *)Method_Mono_Math_BigInteger_op_Implicit__);
                }
                else {
                  FUN_0242cf90(plVar10,*(int *)(unaff_x19 + 0x78),
                               *(undefined8 *)Method_Mono_Math_BigInteger_ToString__);
                }
                uVar9 = FUN_0340eec4(*(undefined8 *)(unaff_x19 + 0x90),0);
                if ((uVar9 & 1) == 0) {
                  FUN_0242d16c(plVar10,*(undefined8 *)(unaff_x19 + 0x90),
                               *(undefined8 *)Method_Mono_Math_BigInteger_op_Multiply__);
                }
                plVar1 = (long *)(unaff_x19 + 0x30);
                if (*(char *)(unaff_x19 + 0x25) == '\0') {
                  *plVar1 = 0;
                  thunk_FUN_01f51358(plVar1,0);
                }
                else {
                  lVar6 = *plVar1;
                  if (lVar6 != 0) {
                    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
                    FUN_020eeb78(uVar7,lVar6,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>_Release__
                                 ,0);
                    FUN_0242c88c(plVar10,uVar7,
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
                  lVar6 = *plVar1;
                  if (lVar6 != 0) {
                    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
                    FUN_020eeb78(uVar7,lVar6,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>_Release__
                                 ,0);
                    FUN_0242c834(plVar10,uVar7,
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
                  lVar6 = *plVar1;
                  if (lVar6 != 0) {
                    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
                    FUN_020eeb78(uVar7,lVar6,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>_Release__
                                 ,0);
                    FUN_0242c8e4(plVar10,uVar7,
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
                  lVar6 = *plVar1;
                  if (lVar6 != 0) {
                    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
                    FUN_020eeb78(uVar7,lVar6,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>_Release__
                                 ,0);
                    FUN_0242c8b8(plVar10,uVar7,
                                 *(undefined8 *)Method_BasicSceneManager_<LoadSceneAsync>b__1_0__);
                  }
                }
                plVar1 = (long *)(unaff_x19 + 0x50);
                if (*(char *)(unaff_x19 + 0x29) == '\0') {
                  *plVar1 = 0;
                  thunk_FUN_01f51358(plVar1,0);
                }
                else {
                  lVar6 = *plVar1;
                  if (lVar6 != 0) {
                    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
                    FUN_020eeb78(uVar7,lVar6,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>_Release__
                                 ,0);
                    FUN_0242c7b0(plVar10,uVar7,
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
                  lVar6 = *plVar1;
                  if (lVar6 != 0) {
                    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
                    FUN_020eeb78(uVar7,lVar6,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>_Release__
                                 ,0);
                    FUN_0242c860(plVar10,uVar7,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseVisualElementPanel_get_uiElementsBridge__
                                );
                  }
                }
                if (*(char *)(unaff_x19 + 0xb8) == '\0') {
                  FUN_02424d4c(plVar10,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerDown__
                              );
                }
                else {
                  FUN_02424ea4(plVar10,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__
                              );
                }
                *(long *)(unaff_x19 + 0x68) = (long)plVar10;
                thunk_FUN_01f51358((long *)(unaff_x19 + 0x68),plVar10);
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
  while( true ) {
    if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_0210875c;
    lVar6 = lVar6 + lVar12;
    uVar15 = uVar15 + 1;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20) - param_2,
                  (float)*(undefined8 *)(lVar6 + 0x20) - fVar17);
    *(ulong *)(lVar6 + 0x28) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x28) >> 0x20) - fVar17,
                  (float)*(undefined8 *)(lVar6 + 0x28) - param_3);
    *(ulong *)(lVar6 + 0x30) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x30) >> 0x20) - param_3,
                  (float)*(undefined8 *)(lVar6 + 0x30) - param_2);
    if ((uVar9 & 0xffffffff) == uVar15) goto LAB_02107edc;
    lVar6 = *(long *)(unaff_x19 + 0x100);
    lVar12 = lVar12 + 0x18;
    if (lVar6 == 0) break;
LAB_02107e8c:
    lVar6 = *(long *)(lVar6 + 0x30);
    if (lVar6 == 0) break;
  }
  goto LAB_02107ed8;
}


