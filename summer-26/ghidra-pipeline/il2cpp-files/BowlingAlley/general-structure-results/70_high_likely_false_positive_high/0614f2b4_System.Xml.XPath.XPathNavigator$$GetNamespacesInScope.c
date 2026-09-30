/*
FUNCTION_NAME: System.Xml.XPath.XPathNavigator$$GetNamespacesInScope
ENTRY_POINT: 0614f2b4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_12;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0614f834) */
/* WARNING: Removing unreachable block (ram,0x0614f838) */
/* WARNING: Removing unreachable block (ram,0x0614fc64) */

void System_Xml_XPath_XPathNavigator__GetNamespacesInScope(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 uVar13;
  long *unaff_x29;
  
  do {
    if ((int)unaff_x27[0xc] != 2) goto LAB_0614f3c0;
                    /* try { // try from 0614f2dc to 0624f2ef has its CatchHandler @ 06150780 */
    bVar1 = *(byte *)(*unaff_x29 + 0x130);
                    /* try { // try from 0614f2f8 to 0624f303 has its CatchHandler @ 0615005c */
    if ((*(byte *)(*unaff_x27 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x27 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29))
    goto LAB_0614fc48;
    lVar9 = unaff_x27[0xd];
    if (lVar9 == 0) {
                    /* try { // try from 0614f304 to 0624f30b has its CatchHandler @ 06150058 */
      lVar9 = **(long **)(*(long *)PTR_DAT_072794f8 + 0xb8);
    }
                    /* try { // try from 0614f318 to 0624f323 has its CatchHandler @ 06150054 */
    plVar4 = (long *)FUN_0619bc48();
    if (plVar4 == (long *)0x0) goto LAB_0614fc48;
                    /* try { // try from 0614f328 to 0624f34b has its CatchHandler @ 06150678 */
    uVar5 = (**(code **)(*plVar4 + 0x348))(plVar4,lVar9,*(undefined8 *)(*plVar4 + 0x350));
    if ((uVar5 & 1) == 0) {
      plVar4 = (long *)FUN_0619bc48();
                    /* try { // try from 0614f34c to 0624f35b has its CatchHandler @ 06150190 */
      if (plVar4 == (long *)0x0) goto LAB_0614fc48;
                    /* try { // try from 0614f360 to 0624f36b has its CatchHandler @ 06150150 */
      (**(code **)(*plVar4 + 0x308))(plVar4,lVar9,*(undefined8 *)(*plVar4 + 0x310));
    }
                    /* try { // try from 0614f36c to 0624f377 has its CatchHandler @ 06150108 */
    uVar5 = thunk_FUN_057aa644(lVar9,*(undefined8 *)
                                      System_Func<FingerFeature,_Nullable<float>>_TypeInfo,0);
    if ((uVar5 & 1) == 0) {
LAB_0614f3c0:
                    /* try { // try from 0614f3c8 to 0624f3d3 has its CatchHandler @ 06150094 */
      if (*(int *)(*(long *)PTR_DAT_0727ea28 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
                    /* try { // try from 0614f3d8 to 0624f3e3 has its CatchHandler @ 061501dc */
      uVar5 = FUN_062ac390(unaff_x26,0,0);
                    /* try { // try from 0614f3e8 to 0624f3f3 has its CatchHandler @ 061501b4 */
      if ((uVar5 & 1) == 0) {
        plVar4 = *(long **)(unaff_x20 + 0x78);
        if (plVar4 == (long *)0x0) goto LAB_0614fc48;
                    /* try { // try from 0614f438 to 0624f45b has its CatchHandler @ 06150674 */
        lVar9 = (**(code **)(*plVar4 + 0x308))(plVar4,unaff_x26,*(undefined8 *)(*plVar4 + 0x310));
        if (lVar9 != 0) {
          plVar4 = *(long **)(unaff_x20 + 0x78);
          if (plVar4 == (long *)0x0) goto LAB_0614fc48;
                    /* try { // try from 0614f45c to 0624f46b has its CatchHandler @ 0615018c */
          plVar4 = (long *)(**(code **)(*plVar4 + 0x308))
                                     (plVar4,unaff_x26,*(undefined8 *)(*plVar4 + 0x310));
          if (plVar4 != (long *)0x0) {
                    /* try { // try from 0614f470 to 0624f47b has its CatchHandler @ 06150148 */
                    /* try { // try from 0614f47c to 0624f487 has its CatchHandler @ 06150100 */
            bVar1 = *(byte *)(*(long *)
                               System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                             + 0x130);
                    /* try { // try from 0614f4a0 to 0624f4ab has its CatchHandler @ 061500dc */
            if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)
                 System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
               )) {
                    /* WARNING: Subroutine does not return */
              FUN_032d618c(plVar4);
            }
          }
          *unaff_x25 = (long)plVar4;
          goto LAB_0614f4b0;
        }
        plVar4 = *(long **)(unaff_x20 + 0xb8);
                    /* try { // try from 0614f4bc to 0624f4c7 has its CatchHandler @ 061500a4 */
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        plVar4 = (long *)(**(code **)(*plVar4 + 0x178))
                                   (plVar4,unaff_x26,0,0,*(undefined8 *)(*plVar4 + 0x180));
        unaff_x29 = (long *)System_Func<UIHoverEventArgs>_TypeInfo;
        if (plVar4 == (long *)0x0) {
          lVar9 = unaff_x27[3];
          uVar10 = (undefined4)unaff_x27[2];
          uVar11 = *(undefined4 *)((long)unaff_x27 + 0x14);
          uVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                       UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo
                                     );
          uVar8 = *(undefined8 *)System_Collections_Generic_List<CategoryButton>_TypeInfo;
          goto System_Xml_Serialization_CodeIdentifier__MakePascal;
        }
        unaff_x27[8] = (long)unaff_x26;
        thunk_FUN_0333a630(unaff_x27 + 8,unaff_x26);
        plVar6 = (long *)thunk_FUN_032f70fc(plVar4,0);
        uVar12 = *(undefined8 *)System_Collections_Generic_List<CanvasGroup>_TypeInfo;
        if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)PTR_DAT_07279510);
        }
        plVar7 = (long *)FUN_059324dc(uVar12,0);
        if (plVar7 == (long *)0x0) goto LAB_0614fc48;
        uVar5 = (**(code **)(*plVar7 + 0x2b8))(plVar7,plVar6,*(undefined8 *)(*plVar7 + 0x2c0));
        if ((uVar5 & 1) != 0) {
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)
               System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
             )) {
LAB_0614fc5c:
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar4);
          }
          *unaff_x25 = (long)plVar4;
          thunk_FUN_0333a630(unaff_x25,plVar4);
          plVar4 = *(long **)(unaff_x20 + 0x78);
          if (plVar4 == (long *)0x0) goto LAB_0614fc48;
          (**(code **)(*plVar4 + 0x2a8))
                    (plVar4,unaff_x26,*unaff_x25,*(undefined8 *)(*plVar4 + 0x2b0));
          FUN_0614f04c();
          unaff_x29 = (long *)System_Func<UIHoverEventArgs>_TypeInfo;
          goto LAB_0614f288;
        }
        uVar12 = *(undefined8 *)
                  Nova_InternalNamespace_0_InternalNamespace_4_InternalType_156<InternalType_157<InternalType_125>,_InternalType_125>_TypeInfo
        ;
        if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar12 = FUN_059324dc(uVar12,0);
        if (plVar6 == (long *)0x0) goto LAB_0614fc48;
        uVar5 = (**(code **)(*plVar6 + 0x2a8))(plVar6,uVar12,*(undefined8 *)(*plVar6 + 0x2b0));
        if ((uVar5 & 1) == 0) {
          uVar12 = *(undefined8 *)System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo;
          if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar12 = FUN_059324dc(uVar12,0);
          uVar5 = (**(code **)(*plVar6 + 0x2a8))(plVar6,uVar12,*(undefined8 *)(*plVar6 + 0x2b0));
          if ((uVar5 & 1) != 0) {
            bVar1 = *(byte *)(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo +
                             0x130);
            if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo)) goto LAB_0614fc5c;
            goto LAB_0614f748;
          }
          uVar12 = *(undefined8 *)
                    System_Collections_Generic_List<NativeArray<XRRaycastHit>>_TypeInfo;
          if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar12 = FUN_059324dc(uVar12,0);
          uVar5 = (**(code **)(*plVar6 + 0x2a8))(plVar6,uVar12,*(undefined8 *)(*plVar6 + 0x2b0));
          if ((uVar5 & 1) != 0) {
            if (*(long *)(unaff_x20 + 0xa0) == 0) goto LAB_0614fc48;
            FUN_061fdb5c(*(long *)(unaff_x20 + 0xa0),1,0);
            if ((*(long *)(unaff_x20 + 0xa0) == 0) ||
               (FUN_061fd57c(*(long *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xb8),0),
               unaff_x26 == (long *)0x0)) goto LAB_0614fc48;
            uVar8 = *(undefined8 *)(unaff_x20 + 0xa0);
            uVar12 = (**(code **)(*unaff_x26 + 0x168))
                               (unaff_x26,*(undefined8 *)(*unaff_x26 + 0x170));
            if (*(int *)(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo + 0xe0) ==
                0) {
              thunk_FUN_032cd7c0(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo);
            }
            bVar1 = *(byte *)(*(long *)PTR_DAT_07295890 + 0x130);
            if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_07295890)) goto LAB_0614fc5c;
            plVar4 = (long *)FUN_061fcd98(plVar4,uVar8,uVar12,0);
            goto LAB_0614f748;
          }
        }
        else {
          if (*(long *)(unaff_x20 + 0xa0) == 0) {
LAB_0614fc48:
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_061fdb5c(*(long *)(unaff_x20 + 0xa0),1,0);
          if ((*(long *)(unaff_x20 + 0xa0) == 0) ||
             (FUN_061fd57c(*(long *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xb8),0),
             unaff_x26 == (long *)0x0)) goto LAB_0614fc48;
          uVar8 = *(undefined8 *)(unaff_x20 + 0xa0);
          uVar12 = (**(code **)(*unaff_x26 + 0x168))(unaff_x26,*(undefined8 *)(*unaff_x26 + 0x170));
          if (*(int *)(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo + 0xe0) == 0)
          {
            thunk_FUN_032cd7c0(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo);
          }
          bVar1 = *(byte *)(*(long *)PTR_DAT_07291838 + 0x130);
          if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07291838)) goto LAB_0614fc5c;
          plVar4 = (long *)FUN_061fcb60(plVar4,uVar8,uVar12,0);
LAB_0614f748:
          if (plVar4 != (long *)0x0) {
            uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
            uVar12 = FUN_062806ac();
            uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
            lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                        System_Collections_Generic_List<Camera>_TypeInfo);
            FUN_0614d090(lVar9,3,uVar8,uVar12,uVar13);
            unaff_x28 = (long *)System_Func<TransitionStartEvent>_TypeInfo;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            FUN_0614d18c(lVar9,plVar4,0);
            do {
              uVar5 = (**(code **)(*plVar4 + 0x328))(plVar4,*(undefined8 *)(*plVar4 + 0x330));
            } while ((uVar5 & 1) != 0);
            lVar9 = *(long *)(lVar9 + 0x60);
            *unaff_x25 = lVar9;
            thunk_FUN_0333a630(unaff_x25,lVar9);
            plVar6 = *(long **)(unaff_x20 + 0x78);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            (**(code **)(*plVar6 + 0x2a8))(plVar6,unaff_x26,lVar9,*(undefined8 *)(*plVar6 + 0x2b0));
            FUN_0614f04c();
            (**(code **)(*plVar4 + 0x348))(plVar4,*(undefined8 *)(*plVar4 + 0x350));
            unaff_x29 = (long *)System_Func<UIHoverEventArgs>_TypeInfo;
            goto LAB_0614f288;
          }
        }
        FUN_06281398();
        unaff_x29 = (long *)System_Func<UIHoverEventArgs>_TypeInfo;
      }
      else if (unaff_x24 != 0) {
        lVar9 = unaff_x27[3];
        uVar10 = (undefined4)unaff_x27[2];
        uVar11 = *(undefined4 *)((long)unaff_x27 + 0x14);
        uVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                     UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo
                                   );
                    /* try { // try from 0614f40c to 0624f40f has its CatchHandler @ 0614ffb4 */
                    /* try { // try from 0614f418 to 0624f41f has its CatchHandler @ 0615014c */
        uVar8 = *(undefined8 *)System_Collections_Generic_List<CategoryButton>_TypeInfo;
                    /* try { // try from 0614f428 to 0624f433 has its CatchHandler @ 06150104 */
System_Xml_Serialization_CodeIdentifier__MakePascal:
        FUN_061a16a8(uVar12,uVar8,0,0,lVar9,uVar10,uVar11,unaff_x27);
        FUN_06281014();
      }
    }
    else {
                    /* try { // try from 0614f390 to 0624f39b has its CatchHandler @ 061500e0 */
      if (*(int *)(*(long *)PTR_DAT_0727ea28 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
                    /* try { // try from 0614f3a0 to 0624f3ab has its CatchHandler @ 061500c8 */
      uVar5 = FUN_062ac390(unaff_x26,0,0);
      if ((uVar5 & 1) == 0) goto LAB_0614f3c0;
                    /* try { // try from 0614f3ac to 0624f3b7 has its CatchHandler @ 061500a8 */
      plVar4 = (long *)FUN_06151d7c();
      *unaff_x25 = (long)plVar4;
LAB_0614f4b0:
                    /* try { // try from 0614f4b0 to 0624f4bb has its CatchHandler @ 061500c4 */
      thunk_FUN_0333a630(unaff_x25,plVar4);
    }
LAB_0614f288:
    while( true ) {
      unaff_w21 = unaff_w21 + 1;
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_0614fc48;
      iVar2 = FUN_058f278c(*(long *)(unaff_x19 + 0x58),0);
      if (iVar2 <= unaff_w21) {
        return;
      }
      plVar4 = *(long **)(unaff_x19 + 0x58);
      if ((plVar4 == (long *)0x0) ||
         (unaff_x27 = (long *)(**(code **)(*plVar4 + 0x308))
                                        (plVar4,unaff_w21,*(undefined8 *)(*plVar4 + 0x310)),
         unaff_x27 == (long *)0x0)) goto LAB_0614fc48;
      bVar1 = *(byte *)(*unaff_x28 + 0x130);
      if ((*(byte *)(*unaff_x27 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x27 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(unaff_x27);
      }
      unaff_x25 = unaff_x27 + 9;
      lVar9 = *unaff_x25;
      if (lVar9 == 0) break;
      uVar12 = *(undefined8 *)(lVar9 + 0xd0);
      if (*(int *)(*(long *)PTR_DAT_0727ea28 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar5 = FUN_062a8838(uVar12,0,0);
      if ((uVar5 & 1) != 0) {
        plVar4 = *(long **)(unaff_x20 + 0x78);
        if (plVar4 == (long *)0x0) goto LAB_0614fc48;
        lVar3 = (**(code **)(*plVar4 + 0x308))(plVar4,uVar12,*(undefined8 *)(*plVar4 + 0x310));
        if (lVar3 == 0) {
          plVar4 = *(long **)(unaff_x20 + 0x78);
          if (plVar4 == (long *)0x0) goto LAB_0614fc48;
          (**(code **)(*plVar4 + 0x2a8))(plVar4,uVar12,lVar9,*(undefined8 *)(*plVar4 + 0x2b0));
        }
      }
      FUN_0614f04c();
    }
    unaff_x24 = unaff_x27[7];
    if (unaff_x24 == 0) {
                    /* try { // try from 0614f2bc to 0624f2bf has its CatchHandler @ 0614ff8c */
      unaff_x26 = (long *)0x0;
    }
    else {
      unaff_x26 = (long *)FUN_06152444();
    }
  } while( true );
}


