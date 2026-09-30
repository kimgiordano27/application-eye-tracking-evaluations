/*
FUNCTION_NAME: OVRPlugin.Media$$SetAvailableQueueIndexVulkan
ENTRY_POINT: 03393f80
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_Media__SetAvailableQueueIndexVulkan(void)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar10;
  ulong extraout_x1;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000008;
  undefined *puVar9;
  
  FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__);
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__
              );
  FUN_01c5d288(UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo);
  FUN_01c5d288(Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_get_Item__);
  *(undefined1 *)(unaff_x22 + 0x6ac) = 1;
  auVar15 = FUN_0336c7fc();
  if (unaff_x21 == 0) {
LAB_03394324:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4(auVar15._0_8_,auVar15._8_8_);
  }
  auVar15 = thunk_FUN_01c5d21c();
  uVar10 = auVar15._0_8_;
  if ((*(long *)(unaff_x20 + 0x20) == 0) ||
     (plVar14 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0x40), plVar14 == (long *)0x0))
  goto LAB_03394324;
  lVar11 = *plVar14;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) ==
          *(long *)Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__) {
        puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_03394040;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01c72498(plVar14,*(long *)
                                 Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__
                        ,0);
LAB_03394040:
  auVar15 = (*(code *)*puVar5)(plVar14,uVar10,puVar5[1]);
  plVar14 = auVar15._0_8_;
  if (unaff_x19 == (long *)0x0) goto LAB_03394324;
  uVar12 = FUN_0335d0cc();
  if ((uVar12 & 1) == 0) {
    thunk_FUN_01c273e8(
                      Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_set_Item__
                      );
    goto LAB_03394408;
  }
  auVar15 = (**(code **)(*unaff_x19 + 0x188))();
  if (auVar15._0_4_ == 2) {
    if (plVar14 == (long *)0x0) goto LAB_03394324;
    if (*(int *)((long)plVar14 + 0x24) == 2) {
      bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__ +
                       0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__))
      goto LAB_03394328;
      if (*(char *)((long)plVar14 + 0xf1) == '\0') {
        lVar11 = thunk_FUN_01c495e4();
        if (lVar11 == 0) {
LAB_03394434:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748();
        }
      }
      else {
        lVar11 = FUN_0338eda8(plVar14);
      }
      auVar15._8_8_ = lVar11;
      auVar15._0_8_ = lVar11;
      if (unaff_x20 != 0) {
        FUN_03394440();
        return;
      }
      goto LAB_03394324;
    }
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar7 = FUN_03295500(0);
    puVar9 = Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<TriangulationPoint>_Contains__;
LAB_033943f4:
    uVar8 = thunk_FUN_01c273e8(puVar9);
  }
  else {
    iVar4 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar4 == 1) {
      FUN_0335cd70();
      plVar6 = *(long **)(unaff_x20 + 0x20);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = extraout_x1;
      auVar15 = auVar2 << 0x40;
      if (plVar6 == (long *)0x0) goto LAB_03394324;
      auVar15 = (**(code **)(*plVar6 + 0x288))(plVar6,*(undefined8 *)(*plVar6 + 0x290));
      if ((auVar15._0_4_ != 2) &&
         (auVar15 = (**(code **)(*unaff_x19 + 0x188))(), auVar15._0_4_ == 4)) {
        auVar15 = (**(code **)(*unaff_x19 + 0x198))();
        plVar6 = auVar15._0_8_;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = auVar15._8_8_;
        auVar15 = auVar3 << 0x40;
        if (plVar6 == (long *)0x0) goto LAB_03394324;
        uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        auVar15 = FUN_03152760(uVar7,*(undefined8 *)
                                      Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_get_Item__
                               ,4,0);
        if ((auVar15._0_8_ & 1) != 0) {
          FUN_0335cd70();
          plVar6 = (long *)(**(code **)(*unaff_x19 + 0x198))();
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          }
          auVar15 = FUN_0335cd70();
        }
      }
      if (plVar14 == (long *)0x0) goto LAB_03394324;
      if (*(int *)((long)plVar14 + 0x24) == 1) {
        bVar1 = *(byte *)(*(long *)
                           Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__
                         + 0x130);
        if ((bVar1 <= *(byte *)(*plVar14 + 0x130)) &&
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)
             Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__
           )) {
          FUN_03395364();
          return;
        }
LAB_03394328:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar14);
      }
      if (*(int *)((long)plVar14 + 0x24) == 5) {
        bVar1 = *(byte *)(*(long *)
                           Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__
                         + 0x130);
        if ((bVar1 <= *(byte *)(*plVar14 + 0x130)) &&
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__)) {
          if ((char)plVar14[0x20] == '\0') {
            lVar11 = thunk_FUN_01c495e4();
            if (lVar11 == 0) goto LAB_03394434;
          }
          else {
            OVRPlugin_Sizei___cctor(plVar14);
          }
          FUN_03394994();
          return;
        }
        goto LAB_03394328;
      }
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar7 = FUN_03295500(0);
      puVar9 = Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<TriangulationPoint>_get_Item__;
      goto LAB_033943f4;
    }
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar7 = FUN_03295500(0);
    FUN_019b2708();
    in_stack_00000008._4_4_ = (**(code **)(*unaff_x19 + 0x188))();
    uVar10 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
    uVar10 = thunk_FUN_01c49334(uVar10,(long)&stack0x00000008 + 4);
    uVar8 = thunk_FUN_01c273e8(
                              Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<TriangulationPoint>_IndexOf__
                              );
  }
  FUN_0336f2b8(uVar8,uVar7,uVar10,0);
LAB_03394408:
  uVar10 = FUN_0335cdc4();
  uVar7 = thunk_FUN_01c273e8(
                            Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<TriangulationPoint>_set_Item__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar10,uVar7);
}


