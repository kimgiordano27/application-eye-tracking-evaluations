/*
FUNCTION_NAME: System.Xml.XPath.XPathNavigator$$MoveToNamespace
ENTRY_POINT: 0614f4d8
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

void System_Xml_XPath_XPathNavigator__MoveToNamespace(long *param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long lVar9;
  undefined4 uVar10;
  undefined8 unaff_x23;
  undefined8 uVar11;
  undefined4 uVar12;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 uStack0000000000000018;
  
  do {
                    /* try { // try from 0614f4d8 to 0624f4e3 has its CatchHandler @ 06150090 */
    plVar5 = (long *)System_Func<UIHoverEventArgs>_TypeInfo;
    uStack0000000000000018 = unaff_x23;
    if (param_1 == (long *)0x0) {
      lVar9 = unaff_x27[3];
      uVar10 = (undefined4)unaff_x27[2];
      uVar12 = *(undefined4 *)((long)unaff_x27 + 0x14);
      uVar4 = thunk_FUN_032a56a0(*(undefined8 *)
                                  UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo
                                );
      uVar8 = *(undefined8 *)System_Collections_Generic_List<CategoryButton>_TypeInfo;
      uVar11 = uStack0000000000000018;
      goto System_Xml_Serialization_CodeIdentifier__MakePascal;
    }
                    /* try { // try from 0614f4e8 to 0624f50b has its CatchHandler @ 06150670 */
    unaff_x27[8] = (long)unaff_x26;
    thunk_FUN_0333a630(unaff_x27 + 8,unaff_x26);
    plVar5 = (long *)thunk_FUN_032f70fc(param_1,0);
                    /* try { // try from 0614f50c to 0624f51b has its CatchHandler @ 06150188 */
    uVar11 = *(undefined8 *)System_Collections_Generic_List<CanvasGroup>_TypeInfo;
                    /* try { // try from 0614f520 to 0624f52b has its CatchHandler @ 06150144 */
    if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)PTR_DAT_07279510);
    }
                    /* try { // try from 0614f52c to 0624f537 has its CatchHandler @ 061500fc */
    plVar6 = (long *)FUN_059324dc(uVar11,0);
    if (plVar6 == (long *)0x0) goto LAB_0614fc48;
    uVar7 = (**(code **)(*plVar6 + 0x2b8))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x2c0));
                    /* try { // try from 0614f550 to 0624f55b has its CatchHandler @ 061500d8 */
    if ((uVar7 & 1) == 0) {
      uVar11 = *(undefined8 *)
                Nova_InternalNamespace_0_InternalNamespace_4_InternalType_156<InternalType_157<InternalType_125>,_InternalType_125>_TypeInfo
      ;
      if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar11 = FUN_059324dc(uVar11,0);
      if (plVar5 == (long *)0x0) goto LAB_0614fc48;
      uVar7 = (**(code **)(*plVar5 + 0x2a8))(plVar5,uVar11,*(undefined8 *)(*plVar5 + 0x2b0));
      if ((uVar7 & 1) == 0) {
        uVar11 = *(undefined8 *)System_Func<OpenXRInteractionFeature_ActionConfig,_bool>_TypeInfo;
        if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar11 = FUN_059324dc(uVar11,0);
        uVar7 = (**(code **)(*plVar5 + 0x2a8))(plVar5,uVar11,*(undefined8 *)(*plVar5 + 0x2b0));
        if ((uVar7 & 1) != 0) {
          bVar1 = *(byte *)(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo + 0x130)
          ;
          if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo)) goto LAB_0614fc5c;
          goto LAB_0614f748;
        }
        uVar11 = *(undefined8 *)System_Collections_Generic_List<NativeArray<XRRaycastHit>>_TypeInfo;
        if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar11 = FUN_059324dc(uVar11,0);
        uVar7 = (**(code **)(*plVar5 + 0x2a8))(plVar5,uVar11,*(undefined8 *)(*plVar5 + 0x2b0));
        if ((uVar7 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0xa0) == 0) goto LAB_0614fc48;
          FUN_061fdb5c(*(long *)(unaff_x20 + 0xa0),1,0);
          if ((*(long *)(unaff_x20 + 0xa0) == 0) ||
             (FUN_061fd57c(*(long *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xb8),0),
             unaff_x26 == (long *)0x0)) goto LAB_0614fc48;
          uVar4 = *(undefined8 *)(unaff_x20 + 0xa0);
          uVar11 = (**(code **)(*unaff_x26 + 0x168))(unaff_x26,*(undefined8 *)(*unaff_x26 + 0x170));
          if (*(int *)(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo + 0xe0) == 0)
          {
            thunk_FUN_032cd7c0(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo);
          }
          bVar1 = *(byte *)(*(long *)PTR_DAT_07295890 + 0x130);
          if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_07295890)) goto LAB_0614fc5c;
          param_1 = (long *)FUN_061fcd98(param_1,uVar4,uVar11,0);
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
        uVar4 = *(undefined8 *)(unaff_x20 + 0xa0);
        uVar11 = (**(code **)(*unaff_x26 + 0x168))(unaff_x26,*(undefined8 *)(*unaff_x26 + 0x170));
        if (*(int *)(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)System_Func<MarkToBaseAdjustmentRecord,_uint>_TypeInfo);
        }
        bVar1 = *(byte *)(*(long *)PTR_DAT_07291838 + 0x130);
        if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_07291838)) goto LAB_0614fc5c;
        param_1 = (long *)FUN_061fcb60(param_1,uVar4,uVar11,0);
LAB_0614f748:
        if (param_1 != (long *)0x0) {
          uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
          uVar11 = FUN_062806ac();
          uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
          lVar9 = thunk_FUN_032a56a0(*(undefined8 *)System_Collections_Generic_List<Camera>_TypeInfo
                                    );
          FUN_0614d090(lVar9,3,uVar4,uVar11,uVar8);
          unaff_x28 = (long *)System_Func<TransitionStartEvent>_TypeInfo;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_0614d18c(lVar9,param_1,0);
          do {
            uVar7 = (**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
          } while ((uVar7 & 1) != 0);
          lVar9 = *(long *)(lVar9 + 0x60);
          *unaff_x25 = lVar9;
          thunk_FUN_0333a630(unaff_x25,lVar9);
          plVar5 = *(long **)(unaff_x20 + 0x78);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          (**(code **)(*plVar5 + 0x2a8))(plVar5,unaff_x26,lVar9,*(undefined8 *)(*plVar5 + 0x2b0));
          FUN_0614f04c();
          (**(code **)(*param_1 + 0x348))(param_1,*(undefined8 *)(*param_1 + 0x350));
          plVar5 = (long *)System_Func<UIHoverEventArgs>_TypeInfo;
          goto LAB_0614f288;
        }
      }
      FUN_06281398();
      plVar5 = (long *)System_Func<UIHoverEventArgs>_TypeInfo;
    }
    else {
                    /* try { // try from 0614f560 to 0624f56b has its CatchHandler @ 061500c0 */
      bVar1 = *(byte *)(*(long *)
                         System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                       + 0x130);
                    /* try { // try from 0614f56c to 0624f577 has its CatchHandler @ 061500a0 */
      if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
         )) {
LAB_0614fc5c:
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(param_1);
      }
      *unaff_x25 = (long)param_1;
      thunk_FUN_0333a630(unaff_x25,param_1);
      plVar5 = *(long **)(unaff_x20 + 0x78);
      if (plVar5 == (long *)0x0) goto LAB_0614fc48;
      (**(code **)(*plVar5 + 0x2a8))(plVar5,unaff_x26,*unaff_x25,*(undefined8 *)(*plVar5 + 0x2b0));
      FUN_0614f04c();
      plVar5 = (long *)System_Func<UIHoverEventArgs>_TypeInfo;
    }
LAB_0614f288:
    while( true ) {
      while( true ) {
        unaff_w21 = unaff_w21 + 1;
        if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_0614fc48;
        iVar2 = FUN_058f278c(*(long *)(unaff_x19 + 0x58),0);
        if (iVar2 <= unaff_w21) {
          return;
        }
        plVar6 = *(long **)(unaff_x19 + 0x58);
        if ((plVar6 == (long *)0x0) ||
           (unaff_x27 = (long *)(**(code **)(*plVar6 + 0x308))
                                          (plVar6,unaff_w21,*(undefined8 *)(*plVar6 + 0x310)),
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
        uVar11 = *(undefined8 *)(lVar9 + 0xd0);
        if (*(int *)(*(long *)PTR_DAT_0727ea28 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar7 = FUN_062a8838(uVar11,0,0);
        if ((uVar7 & 1) != 0) {
          plVar6 = *(long **)(unaff_x20 + 0x78);
          if (plVar6 == (long *)0x0) goto LAB_0614fc48;
          lVar3 = (**(code **)(*plVar6 + 0x308))(plVar6,uVar11,*(undefined8 *)(*plVar6 + 0x310));
          if (lVar3 == 0) {
            plVar6 = *(long **)(unaff_x20 + 0x78);
            if (plVar6 == (long *)0x0) goto LAB_0614fc48;
            (**(code **)(*plVar6 + 0x2a8))(plVar6,uVar11,lVar9,*(undefined8 *)(*plVar6 + 0x2b0));
          }
        }
        FUN_0614f04c();
      }
      lVar9 = unaff_x27[7];
      if (lVar9 == 0) {
        unaff_x26 = (long *)0x0;
      }
      else {
        unaff_x26 = (long *)FUN_06152444();
      }
      unaff_x23 = 0;
      if ((int)unaff_x27[0xc] != 2) break;
      bVar1 = *(byte *)(*plVar5 + 0x130);
      if ((*(byte *)(*unaff_x27 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x27 + 200) + (ulong)bVar1 * 8 + -8) != *plVar5))
      goto LAB_0614fc48;
      lVar3 = unaff_x27[0xd];
      if (lVar3 == 0) {
        lVar3 = **(long **)(*(long *)PTR_DAT_072794f8 + 0xb8);
      }
      plVar6 = (long *)FUN_0619bc48();
      if (plVar6 == (long *)0x0) goto LAB_0614fc48;
      uVar7 = (**(code **)(*plVar6 + 0x348))(plVar6,lVar3,*(undefined8 *)(*plVar6 + 0x350));
      if ((uVar7 & 1) == 0) {
        plVar6 = (long *)FUN_0619bc48();
        if (plVar6 == (long *)0x0) goto LAB_0614fc48;
        (**(code **)(*plVar6 + 0x308))(plVar6,lVar3,*(undefined8 *)(*plVar6 + 0x310));
      }
      uVar7 = thunk_FUN_057aa644(lVar3,*(undefined8 *)
                                        System_Func<FingerFeature,_Nullable<float>>_TypeInfo,0);
      if ((uVar7 & 1) == 0) break;
      if (*(int *)(*(long *)PTR_DAT_0727ea28 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar7 = FUN_062ac390(unaff_x26,0,0);
      if ((uVar7 & 1) == 0) break;
      plVar6 = (long *)FUN_06151d7c();
      *unaff_x25 = (long)plVar6;
LAB_0614f4b0:
      thunk_FUN_0333a630(unaff_x25,plVar6);
    }
    if (*(int *)(*(long *)PTR_DAT_0727ea28 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar7 = FUN_062ac390(unaff_x26,0,0);
    if ((uVar7 & 1) != 0) {
      if (lVar9 != 0) {
        lVar9 = unaff_x27[3];
        uVar10 = (undefined4)unaff_x27[2];
        uVar12 = *(undefined4 *)((long)unaff_x27 + 0x14);
        uVar4 = thunk_FUN_032a56a0(*(undefined8 *)
                                    UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo
                                  );
        uVar8 = *(undefined8 *)System_Collections_Generic_List<CategoryButton>_TypeInfo;
        uVar11 = 0;
System_Xml_Serialization_CodeIdentifier__MakePascal:
        FUN_061a16a8(uVar4,uVar8,0,uVar11,lVar9,uVar10,uVar12,unaff_x27);
        FUN_06281014();
      }
      goto LAB_0614f288;
    }
    plVar6 = *(long **)(unaff_x20 + 0x78);
    if (plVar6 == (long *)0x0) goto LAB_0614fc48;
    lVar9 = (**(code **)(*plVar6 + 0x308))(plVar6,unaff_x26,*(undefined8 *)(*plVar6 + 0x310));
    if (lVar9 != 0) {
      plVar6 = *(long **)(unaff_x20 + 0x78);
      if (plVar6 != (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x308))
                                   (plVar6,unaff_x26,*(undefined8 *)(*plVar6 + 0x310));
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
        *unaff_x25 = (long)plVar6;
        goto LAB_0614f4b0;
      }
      goto LAB_0614fc48;
    }
    plVar5 = *(long **)(unaff_x20 + 0xb8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    param_1 = (long *)(**(code **)(*plVar5 + 0x178))
                                (plVar5,unaff_x26,0,0,*(undefined8 *)(*plVar5 + 0x180));
  } while( true );
}


