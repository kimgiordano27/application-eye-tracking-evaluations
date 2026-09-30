/*
FUNCTION_NAME: FUN_0614fc3c
ENTRY_POINT: 0614fc3c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_12;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0614fc3c(void)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long lVar11;
  long unaff_x22;
  undefined4 uVar12;
  int unaff_w23;
  undefined4 uVar13;
  long *unaff_x27;
  undefined8 uVar14;
  long *plVar15;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  
  plVar15 = (long *)System_Func<TransitionStartEvent>_TypeInfo;
  do {
    (**(code **)(*unaff_x29 + 0x348))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x350));
    if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032c82b0(unaff_x22);
    }
    plVar8 = (long *)System_Func<UIHoverEventArgs>_TypeInfo;
    if (unaff_w23 == 7) goto LAB_0614f288;
    if (unaff_w23 != 0) {
      return;
    }
LAB_0614f9dc:
    plVar8 = (long *)System_Func<UIHoverEventArgs>_TypeInfo;
    lVar11 = unaff_x27[3];
    uVar12 = (undefined4)unaff_x27[2];
    uVar13 = *(undefined4 *)((long)unaff_x27 + 0x14);
                    /* try { // try from 0614f9f0 to 0624f9fb has its CatchHandler @ 0614ff7c */
    uVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
                    /* try { // try from 0614f9fc to 0624fa03 has its CatchHandler @ 0614ff78 */
    uVar10 = *(undefined8 *)System_Collections_Generic_List<CategoryButton>_TypeInfo;
System_Xml_Serialization_CodeIdentifier__MakePascal:
    FUN_061a16a8(uVar9,uVar10,0,in_stack_00000018,lVar11,uVar12,uVar13,unaff_x27);
    FUN_06281014();
LAB_0614f288:
    while( true ) {
      while( true ) {
        unaff_w21 = unaff_w21 + 1;
        if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_0614fc48;
        iVar2 = FUN_058f278c(*(long *)(unaff_x19 + 0x58),0);
        if (iVar2 <= unaff_w21) {
          return;
        }
        plVar3 = *(long **)(unaff_x19 + 0x58);
        if ((plVar3 == (long *)0x0) ||
           (unaff_x27 = (long *)(**(code **)(*plVar3 + 0x308))
                                          (plVar3,unaff_w21,*(undefined8 *)(*plVar3 + 0x310)),
           unaff_x27 == (long *)0x0)) goto LAB_0614fc48;
        bVar1 = *(byte *)(*plVar15 + 0x130);
        if ((*(byte *)(*unaff_x27 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x27 + 200) + (ulong)bVar1 * 8 + -8) != *plVar15)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(unaff_x27);
        }
        plVar3 = unaff_x27 + 9;
        lVar11 = *plVar3;
        if (lVar11 == 0) break;
        uVar9 = *(undefined8 *)(lVar11 + 0xd0);
        if (*(int *)(*(long *)PTR_DAT_0727ea28 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar4 = FUN_062a8838(uVar9,0,0);
        if ((uVar4 & 1) != 0) {
          plVar3 = *(long **)(unaff_x20 + 0x78);
          if (plVar3 == (long *)0x0) goto LAB_0614fc48;
          lVar5 = (**(code **)(*plVar3 + 0x308))(plVar3,uVar9,*(undefined8 *)(*plVar3 + 0x310));
          if (lVar5 == 0) {
            plVar3 = *(long **)(unaff_x20 + 0x78);
            if (plVar3 == (long *)0x0) goto LAB_0614fc48;
            (**(code **)(*plVar3 + 0x2a8))(plVar3,uVar9,lVar11,*(undefined8 *)(*plVar3 + 0x2b0));
          }
        }
        FUN_0614f04c();
      }
      lVar11 = unaff_x27[7];
      if (lVar11 == 0) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = (long *)FUN_06152444();
      }
      if ((int)unaff_x27[0xc] != 2) break;
      bVar1 = *(byte *)(*plVar8 + 0x130);
      if ((*(byte *)(*unaff_x27 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x27 + 200) + (ulong)bVar1 * 8 + -8) != *plVar8))
      goto LAB_0614fc48;
      lVar5 = unaff_x27[0xd];
      if (lVar5 == 0) {
        lVar5 = **(long **)(*(long *)PTR_DAT_072794f8 + 0xb8);
      }
      plVar7 = (long *)FUN_0619bc48();
      if (plVar7 == (long *)0x0) goto LAB_0614fc48;
      uVar4 = (**(code **)(*plVar7 + 0x348))(plVar7,lVar5,*(undefined8 *)(*plVar7 + 0x350));
      if ((uVar4 & 1) == 0) {
        plVar7 = (long *)FUN_0619bc48();
        if (plVar7 == (long *)0x0) goto LAB_0614fc48;
        (**(code **)(*plVar7 + 0x308))(plVar7,lVar5,*(undefined8 *)(*plVar7 + 0x310));
      }
      uVar4 = thunk_FUN_057aa644(lVar5,*(undefined8 *)
                                        System_Func<FingerFeature,_Nullable<float>>_TypeInfo,0);
      if ((uVar4 & 1) == 0) break;
      if (*(int *)(*(long *)PTR_DAT_0727ea28 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar4 = FUN_062ac390(plVar6,0,0);
      if ((uVar4 & 1) == 0) break;
      plVar6 = (long *)FUN_06151d7c();
      *plVar3 = (long)plVar6;
LAB_0614f4b0:
      thunk_FUN_0333a630(plVar3,plVar6);
    }
    if (*(int *)(*(long *)PTR_DAT_0727ea28 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar4 = FUN_062ac390(plVar6,0,0);
    if ((uVar4 & 1) != 0) {
      if (lVar11 != 0) break;
      goto LAB_0614f288;
    }
    plVar7 = *(long **)(unaff_x20 + 0x78);
    if (plVar7 == (long *)0x0) goto LAB_0614fc48;
    lVar11 = (**(code **)(*plVar7 + 0x308))(plVar7,plVar6,*(undefined8 *)(*plVar7 + 0x310));
    if (lVar11 != 0) {
      plVar7 = *(long **)(unaff_x20 + 0x78);
      if (plVar7 == (long *)0x0) goto LAB_0614fc48;
      plVar6 = (long *)(**(code **)(*plVar7 + 0x308))
                                 (plVar7,plVar6,*(undefined8 *)(*plVar7 + 0x310));
      if (plVar6 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                         + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)
             System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar6);
        }
      }
      *plVar3 = (long)plVar6;
      goto LAB_0614f4b0;
    }
    plVar8 = *(long **)(unaff_x20 + 0xb8);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    unaff_x29 = (long *)(**(code **)(*plVar8 + 0x178))
                                  (plVar8,plVar6,0,0,*(undefined8 *)(*plVar8 + 0x180));
    in_stack_00000018 = 0;
    if (unaff_x29 == (long *)0x0) goto LAB_0614f9dc;
    unaff_x27[8] = (long)plVar6;
    thunk_FUN_0333a630(unaff_x27 + 8,plVar6);
    plVar8 = (long *)thunk_FUN_032f70fc(unaff_x29,0);
    uVar9 = *(undefined8 *)System_Collections_Generic_List<CanvasGroup>_TypeInfo;
    if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)PTR_DAT_07279510);
    }
    plVar7 = (long *)FUN_059324dc(uVar9,0);
    if (plVar7 == (long *)0x0) {
LAB_0614fc48:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar4 = (**(code **)(*plVar7 + 0x2b8))(plVar7,plVar8,*(undefined8 *)(*plVar7 + 0x2c0));
    if ((uVar4 & 1) != 0) {
      bVar1 = *(byte *)(*(long *)
                         System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                       + 0x130);
      if ((*(byte *)(*unaff_x29 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x29 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
         )) {
LAB_0614fc5c:
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(unaff_x29);
      }
      *plVar3 = (long)unaff_x29;
      thunk_FUN_0333a630(plVar3,unaff_x29);
      plVar8 = *(long **)(unaff_x20 + 0x78);
      if (plVar8 == (long *)0x0) goto LAB_0614fc48;
      (**(code **)(*plVar8 + 0x2a8))(plVar8,plVar6,*plVar3,*(undefined8 *)(*plVar8 + 0x2b0));
      FUN_0614f04c();
      plVar8 = (long *)System_Func<UIHoverEventArgs>_TypeInfo;
      goto LAB_0614f288;
    }
    uVar9 = *(undefined8 *)
             Nova_InternalNamespace_0_InternalNamespace_4_InternalType_156<InternalType_157<InternalType_125>,_InternalType_125>_TypeInfo
    ;
    if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar9 = FUN_059324dc(uVar9,0);
    if (plVar8 == (long *)0x0) goto LAB_0614fc48;
    uVar4 = (**(code **)(*plVar8 + 0x2a8))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x2b0));
    if ((uVar4 & 1) == 0) {
      uVar9 = *(undefined8 *)System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo;
      if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar9 = FUN_059324dc(uVar9,0);
      uVar4 = (**(code **)(*plVar8 + 0x2a8))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x2b0));
      if ((uVar4 & 1) != 0) {
        bVar1 = *(byte *)(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo + 0x130);
        if ((*(byte *)(*unaff_x29 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x29 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo)) goto LAB_0614fc5c;
        goto LAB_0614f748;
      }
      uVar9 = *(undefined8 *)System_Collections_Generic_List<NativeArray<XRRaycastHit>>_TypeInfo;
      if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar9 = FUN_059324dc(uVar9,0);
      uVar4 = (**(code **)(*plVar8 + 0x2a8))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x2b0));
      if ((uVar4 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0xa0) == 0) goto LAB_0614fc48;
        FUN_061fdb5c(*(long *)(unaff_x20 + 0xa0),1,0);
        if ((*(long *)(unaff_x20 + 0xa0) == 0) ||
           (FUN_061fd57c(*(long *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xb8),0),
           plVar6 == (long *)0x0)) goto LAB_0614fc48;
        uVar10 = *(undefined8 *)(unaff_x20 + 0xa0);
        uVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        if (*(int *)(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo);
        }
        bVar1 = *(byte *)(*(long *)PTR_DAT_07295890 + 0x130);
        if ((*(byte *)(*unaff_x29 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x29 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_07295890)) goto LAB_0614fc5c;
        unaff_x29 = (long *)FUN_061fcd98(unaff_x29,uVar10,uVar9,0);
        goto LAB_0614f748;
      }
LAB_0614f934:
      FUN_06281398();
      plVar8 = (long *)System_Func<UIHoverEventArgs>_TypeInfo;
      goto LAB_0614f288;
    }
    if (*(long *)(unaff_x20 + 0xa0) == 0) goto LAB_0614fc48;
    FUN_061fdb5c(*(long *)(unaff_x20 + 0xa0),1,0);
    if ((*(long *)(unaff_x20 + 0xa0) == 0) ||
       (FUN_061fd57c(*(long *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xb8),0),
       plVar6 == (long *)0x0)) goto LAB_0614fc48;
    uVar10 = *(undefined8 *)(unaff_x20 + 0xa0);
    uVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    if (*(int *)(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo);
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_07291838 + 0x130);
    if ((*(byte *)(*unaff_x29 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x29 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07291838)
       ) goto LAB_0614fc5c;
    unaff_x29 = (long *)FUN_061fcb60(unaff_x29,uVar10,uVar9,0);
LAB_0614f748:
    if (unaff_x29 == (long *)0x0) goto LAB_0614f934;
    uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar9 = FUN_062806ac();
    uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
    lVar11 = thunk_FUN_032a56a0(*(undefined8 *)System_Collections_Generic_List<Camera>_TypeInfo);
    FUN_0614d090(lVar11,3,uVar10,uVar9,uVar14);
    plVar15 = (long *)System_Func<TransitionStartEvent>_TypeInfo;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_0614d18c(lVar11,unaff_x29,0);
    do {
      uVar4 = (**(code **)(*unaff_x29 + 0x328))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x330));
    } while ((uVar4 & 1) != 0);
    lVar11 = *(long *)(lVar11 + 0x60);
    *plVar3 = lVar11;
    thunk_FUN_0333a630(plVar3,lVar11);
    plVar8 = *(long **)(unaff_x20 + 0x78);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    (**(code **)(*plVar8 + 0x2a8))(plVar8,plVar6,lVar11,*(undefined8 *)(*plVar8 + 0x2b0));
    FUN_0614f04c();
    unaff_x22 = 0;
    unaff_w23 = 7;
  } while( true );
  lVar11 = unaff_x27[3];
  uVar12 = (undefined4)unaff_x27[2];
  uVar13 = *(undefined4 *)((long)unaff_x27 + 0x14);
  uVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                              UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
  in_stack_00000018 = 0;
  uVar10 = *(undefined8 *)System_Collections_Generic_List<CategoryButton>_TypeInfo;
  goto System_Xml_Serialization_CodeIdentifier__MakePascal;
}


