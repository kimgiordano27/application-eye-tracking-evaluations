/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$ovrp_Media_SetAvailableQueueIndexVulkan
ENTRY_POINT: 03394048
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_45_0__ovrp_Media_SetAvailableQueueIndexVulkan(code *param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong extraout_x1;
  long *unaff_x19;
  long unaff_x20;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000008;
  long *plVar5;
  undefined *puVar11;
  
  auVar12 = (*param_1)();
  plVar5 = auVar12._0_8_;
  if (unaff_x19 == (long *)0x0) goto LAB_03394324;
  uVar6 = FUN_0335d0cc();
  if ((uVar6 & 1) == 0) {
    thunk_FUN_01c273e8(
                      Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_set_Item__
                      );
    goto LAB_03394408;
  }
  auVar12 = (**(code **)(*unaff_x19 + 0x188))();
  if (auVar12._0_4_ == 2) {
    if (plVar5 == (long *)0x0) goto LAB_03394324;
    if (*(int *)((long)plVar5 + 0x24) == 2) {
      bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__ +
                       0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__))
      goto LAB_03394328;
      if (*(char *)((long)plVar5 + 0xf1) == '\0') {
        lVar7 = thunk_FUN_01c495e4();
        if (lVar7 == 0) {
LAB_03394434:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748();
        }
      }
      else {
        lVar7 = FUN_0338eda8(plVar5);
      }
      auVar12._8_8_ = lVar7;
      auVar12._0_8_ = lVar7;
      if (unaff_x20 != 0) {
        FUN_03394440();
        return;
      }
      goto LAB_03394324;
    }
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar9 = FUN_03295500(0);
    puVar11 = Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<TriangulationPoint>_Contains__;
LAB_033943f4:
    uVar10 = thunk_FUN_01c273e8(puVar11);
  }
  else {
    iVar4 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar4 == 1) {
      FUN_0335cd70();
      plVar8 = *(long **)(unaff_x20 + 0x20);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = extraout_x1;
      auVar12 = auVar2 << 0x40;
      if (plVar8 == (long *)0x0) {
LAB_03394324:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4(auVar12._0_8_,auVar12._8_8_);
      }
      auVar12 = (**(code **)(*plVar8 + 0x288))(plVar8,*(undefined8 *)(*plVar8 + 0x290));
      if ((auVar12._0_4_ != 2) &&
         (auVar12 = (**(code **)(*unaff_x19 + 0x188))(), auVar12._0_4_ == 4)) {
        auVar12 = (**(code **)(*unaff_x19 + 0x198))();
        plVar8 = auVar12._0_8_;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = auVar12._8_8_;
        auVar12 = auVar3 << 0x40;
        if (plVar8 == (long *)0x0) goto LAB_03394324;
        uVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        auVar12 = FUN_03152760(uVar9,*(undefined8 *)
                                      Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_get_Item__
                               ,4,0);
        if ((auVar12._0_8_ & 1) != 0) {
          FUN_0335cd70();
          plVar8 = (long *)(**(code **)(*unaff_x19 + 0x198))();
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
          }
          auVar12 = FUN_0335cd70();
        }
      }
      if (plVar5 == (long *)0x0) goto LAB_03394324;
      if (*(int *)((long)plVar5 + 0x24) == 1) {
        bVar1 = *(byte *)(*(long *)
                           Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__
                         + 0x130);
        if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)
             Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__
           )) {
          FUN_03395364();
          return;
        }
LAB_03394328:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar5);
      }
      if (*(int *)((long)plVar5 + 0x24) == 5) {
        bVar1 = *(byte *)(*(long *)
                           Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__
                         + 0x130);
        if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__)) {
          if ((char)plVar5[0x20] == '\0') {
            lVar7 = thunk_FUN_01c495e4();
            if (lVar7 == 0) goto LAB_03394434;
          }
          else {
            OVRPlugin_Sizei___cctor(plVar5);
          }
          FUN_03394994();
          return;
        }
        goto LAB_03394328;
      }
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar9 = FUN_03295500(0);
      puVar11 = Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<TriangulationPoint>_get_Item__;
      goto LAB_033943f4;
    }
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar9 = FUN_03295500(0);
    FUN_019b2708();
    in_stack_00000008._4_4_ = (**(code **)(*unaff_x19 + 0x188))();
    uVar10 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
    thunk_FUN_01c49334(uVar10,(long)&stack0x00000008 + 4);
    uVar10 = thunk_FUN_01c273e8(
                               Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<TriangulationPoint>_IndexOf__
                               );
  }
  FUN_0336f2b8(uVar10,uVar9);
LAB_03394408:
  uVar9 = FUN_0335cdc4();
  uVar10 = thunk_FUN_01c273e8(
                             Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<TriangulationPoint>_set_Item__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar9,uVar10);
}


